// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.NormSymProcs
// Imports: public import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.Sym.Simp.Result import Lean.Meta.Sym.Simp.App import Lean.Meta.Sym.Simp.Forall import Lean.Meta.Match.MatcherInfo import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.InstantiateS import Lean.Meta.Sym.AbstractS import Lean.Meta.Sym.Util import Lean.Meta.Sym.Eta import Lean.Meta.Sym.InferType import Lean.Meta.Sym.SynthInstance import Lean.Meta.AppBuilder import Lean.Meta.Decidable import Lean.Meta.Tactic.Grind.ForallAnd import Lean.Meta.CtorRecognizer import Init.Grind.Norm import Init.Grind.Util import Init.Grind.Lemmas import Init.ByCases
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
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonWithoutChecks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecisionProjectionProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateRevRangeS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getLevel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_lift_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkForallCongrFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkForallFVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Expr_getForallBody(lean_object*);
lean_object* l_Lean_Meta_Grind_forallImpAnd_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_Sym_getTrueExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateRevBetaS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpAppArgRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkCongrArg___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t, uint8_t);
lean_object* l_Lean_Meta_Sym_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isProp(lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___redArg(lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_Meta_Sym_betaS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_mkEqFalse_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Sym_isEtaReducible(lean_object*);
lean_object* l_Lean_Meta_Sym_etaReduce(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isConstructorApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
uint8_t l_Lean_Expr_isTrue(lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_eraseMData___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_eraseMData___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_eraseMData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_eraseMData___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_hasEtaReducibleArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_hasEtaReducibleArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_NormSym_etaReduce___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Subtype"};
static const lean_object* l_Lean_Meta_Grind_NormSym_etaReduce___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_etaReduce___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_etaReduce___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_etaReduce___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 108, 3, 75, 185, 102, 103, 84)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_etaReduce___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_etaReduce___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_etaReduce___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_etaReduce___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_etaReduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_etaReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PreMatchCond"};
static const lean_object* l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(215, 220, 208, 216, 173, 156, 210, 29)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_preMatchCond___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_preMatchCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_preMatchCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "simpMatchDiscrsOnly"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 129, 49, 184, 77, 13, 95, 2)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 26, 8, 228, 104, 32, 82, 85)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__3_value),LEAN_SCALAR_PTR_LITERAL(90, 191, 239, 225, 113, 224, 109, 182)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "not"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__5_value),LEAN_SCALAR_PTR_LITERAL(208, 215, 171, 150, 192, 180, 249, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__7_value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__8_value),LEAN_SCALAR_PTR_LITERAL(82, 52, 243, 194, 7, 226, 90, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__10_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__11_value),LEAN_SCALAR_PTR_LITERAL(16, 96, 65, 173, 152, 155, 4, 222)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__12_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00Lean_Meta_Grind_NormSym_simpEq_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00Lean_Meta_Grind_NormSym_simpEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00Lean_Meta_Grind_NormSym_simpEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00Lean_Meta_Grind_NormSym_simpEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "flip_bool_eq"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 65, 30, 112, 127, 84, 12, 55)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpEq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__4;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpEq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "bool_eq_to_prop"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__5_value),LEAN_SCALAR_PTR_LITERAL(79, 89, 141, 151, 119, 96, 24, 167)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpEq___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__7;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpEq___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__8_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__9_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpEq___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__10_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__12_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpEq___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "eq_false_eq"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__13_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__14_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__14_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__13_value),LEAN_SCALAR_PTR_LITERAL(79, 24, 241, 157, 245, 218, 196, 160)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__14_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpEq___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__15;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpEq___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "eq_true_eq"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__16_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__17_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__17_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__16_value),LEAN_SCALAR_PTR_LITERAL(100, 12, 190, 92, 208, 172, 117, 90)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__17_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpEq___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__18;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpEq___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "eq_self"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__19_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpEq___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__19_value),LEAN_SCALAR_PTR_LITERAL(224, 148, 98, 216, 254, 239, 13, 169)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpEq___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpEq___closed__20_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Grind_NormSym_simpDIte_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Grind_NormSym_simpDIte_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpDIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpDIte___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpDIte___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpDIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpDIte___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpDIte___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpDIte___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpDIte___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__10_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpDIte___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpDIte___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpDIte___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpDIte___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpDIte___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpDIte___closed__4;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpDIte___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpDIte___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpDIte___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpDIte___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpDIte___closed__5_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpDIte___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpDIte___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpDIte___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dite_eq_cond"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpDIte___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpDIte___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpDIte___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpDIte___closed__7_value),LEAN_SCALAR_PTR_LITERAL(66, 109, 12, 90, 6, 191, 54, 69)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpDIte___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpDIte___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpDIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpDIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Grind_NormSym_simpDIte_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Grind_NormSym_simpDIte_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not_forall"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(133, 192, 91, 90, 91, 211, 131, 26)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "not_implies"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(142, 189, 44, 77, 86, 197, 178, 67)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_pushNot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__4;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__5_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__7_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__9_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__10_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "not_ite_eq_cond"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__12_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__12_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__11_value),LEAN_SCALAR_PTR_LITERAL(250, 228, 252, 70, 76, 87, 162, 120)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_pushNot___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__13;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "not_cond"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__14_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__15_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__15_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__14_value),LEAN_SCALAR_PTR_LITERAL(181, 12, 122, 224, 2, 32, 155, 87)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__15_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_pushNot___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__16;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "not_eq_true"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__17_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__18_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__17_value),LEAN_SCALAR_PTR_LITERAL(225, 244, 63, 40, 164, 6, 8, 162)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__18_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_pushNot___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__19;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "not_eq_false"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__20_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__21_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__20_value),LEAN_SCALAR_PTR_LITERAL(83, 226, 87, 91, 103, 177, 77, 30)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__21_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_pushNot___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__22;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "not_eq_prop"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__23_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__24_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__24_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__23_value),LEAN_SCALAR_PTR_LITERAL(93, 9, 240, 16, 38, 110, 5, 203)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__24 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__24_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_pushNot___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__25;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_and"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__26 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__26_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__27_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__27_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__26_value),LEAN_SCALAR_PTR_LITERAL(239, 225, 24, 71, 205, 142, 249, 26)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__27 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__27_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_pushNot___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__28;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "not_or"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__29 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__29_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__30_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__30_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__29_value),LEAN_SCALAR_PTR_LITERAL(235, 74, 178, 162, 31, 3, 143, 38)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__30 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__30_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_pushNot___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__31;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__32 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__32_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__32_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__33 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__33_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not_exists"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__34 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__34_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__35_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__35_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__34_value),LEAN_SCALAR_PTR_LITERAL(122, 84, 103, 56, 9, 28, 88, 199)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__35 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__35_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_not"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__36 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__36_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__37_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__37_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__36_value),LEAN_SCALAR_PTR_LITERAL(37, 13, 167, 116, 75, 172, 227, 19)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__37 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__37_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_pushNot___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__38;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "not_true"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__39 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__39_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__40_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__40_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__40_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__39_value),LEAN_SCALAR_PTR_LITERAL(189, 233, 184, 33, 201, 88, 141, 182)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__40 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__40_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_pushNot___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__41;
static const lean_string_object l_Lean_Meta_Grind_NormSym_pushNot___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_false"};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__42 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__42_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__43_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_pushNot___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__43_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__42_value),LEAN_SCALAR_PTR_LITERAL(32, 161, 26, 17, 134, 82, 22, 22)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__43 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__43_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_pushNot___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_pushNot___closed__44;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_pushNot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_pushNot___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "or_swap13"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(240, 5, 180, 71, 127, 106, 169, 101)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__2;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "or_swap12"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(122, 217, 194, 116, 8, 17, 212, 54)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__5;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "or_true"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(42, 114, 114, 128, 39, 158, 116, 220)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__8;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "or_false"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(153, 216, 196, 245, 126, 96, 113, 194)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__11;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "or_assoc"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__13_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(177, 212, 104, 129, 180, 187, 236, 119)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__13_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__14;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "true_or"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__15_value),LEAN_SCALAR_PTR_LITERAL(151, 252, 187, 232, 224, 57, 40, 42)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__16_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__17;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "false_or"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__18_value),LEAN_SCALAR_PTR_LITERAL(30, 122, 222, 214, 97, 236, 146, 97)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__19_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__20;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpOr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpOr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_NormSym_reduceCtorEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Meta_Grind_NormSym_reduceCtorEq___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_reduceCtorEq___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_reduceCtorEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_reduceCtorEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_reduceCtorEq___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_reduceCtorEq___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_reduceCtorEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_reduceCtorEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isForallOrNot_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isForallOrNot_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "forall_forall_or"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 112, 166, 94, 237, 48, 167, 129)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "forall_or_forall"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(121, 14, 212, 131, 198, 226, 199, 154)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpForall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "forall_const"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 91, 233, 165, 33, 177, 5, 191)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpForall___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Nonempty"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__2_value),LEAN_SCALAR_PTR_LITERAL(142, 191, 110, 220, 210, 100, 152, 183)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpForall___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "propext"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__4_value),LEAN_SCALAR_PTR_LITERAL(53, 150, 49, 30, 125, 3, 39, 172)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpForall___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__6;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpForall___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "imp_self_eq"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__7_value),LEAN_SCALAR_PTR_LITERAL(166, 96, 8, 70, 216, 37, 74, 175)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpForall___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__9;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpForall___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "implies_true"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__10_value),LEAN_SCALAR_PTR_LITERAL(104, 135, 195, 91, 224, 240, 122, 198)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__11_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpForall___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "imp_false_eq"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__13_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__12_value),LEAN_SCALAR_PTR_LITERAL(217, 93, 174, 85, 201, 7, 0, 65)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__13_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpForall___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__14;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpForall___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "true_imp_eq"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__16_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__16_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__15_value),LEAN_SCALAR_PTR_LITERAL(20, 154, 121, 57, 70, 129, 111, 154)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__16_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpForall___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__17;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpForall___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "false_imp_eq"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__19_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__18_value),LEAN_SCALAR_PTR_LITERAL(127, 143, 249, 102, 140, 8, 231, 12)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__19_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpForall___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__20;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpForall___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__21_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_pushNot___closed__7_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__22_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__21_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__22 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__22_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpForall___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "forall_true"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__23_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__24_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__24_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__23_value),LEAN_SCALAR_PTR_LITERAL(87, 243, 84, 112, 33, 203, 156, 65)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__24 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__24_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpForall___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__25;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpForall___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__26;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpForall___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__27;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpForall___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "forall_false"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__28 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__28_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpForall___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__28_value),LEAN_SCALAR_PTR_LITERAL(12, 96, 31, 202, 138, 131, 44, 134)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__29 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpForall___closed__29_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpForall___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpForall___closed__30;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpExists___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "exists_const"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpExists___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 209, 190, 134, 241, 243, 173, 71)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpExists___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpExists___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "exists_prop"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpExists___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 14, 159, 153, 168, 50, 182, 0)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpExists___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_NormSym_simpExists___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_NormSym_simpExists___closed__4;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpExists___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "exists_and_left"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpExists___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__5_value),LEAN_SCALAR_PTR_LITERAL(211, 136, 99, 9, 218, 202, 25, 69)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpExists___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpExists___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "exists_and_right"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpExists___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 93, 78, 251, 76, 254, 187, 237)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpExists___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_NormSym_simpExists___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "exists_or"};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpExists___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_NormSym_simpExists___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__10_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__9_value),LEAN_SCALAR_PTR_LITERAL(161, 112, 226, 203, 229, 162, 152, 185)}};
static const lean_object* l_Lean_Meta_Grind_NormSym_simpExists___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_NormSym_simpExists___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpExists(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpExists___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___redArg(lean_object* v_declName_1_, lean_object* v_us_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = l_Lean_Expr_const___override(v_declName_1_, v_us_2_);
v___x_6_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_5_, v___y_3_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___redArg___boxed(lean_object* v_declName_7_, lean_object* v_us_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___redArg(v_declName_7_, v_us_8_, v___y_9_);
lean_dec(v___y_9_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0(lean_object* v_declName_12_, lean_object* v_us_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___redArg(v_declName_12_, v_us_13_, v___y_18_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___boxed(lean_object* v_declName_25_, lean_object* v_us_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0(v_declName_25_, v_us_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, v___y_34_, v___y_35_);
lean_dec(v___y_35_);
lean_dec_ref(v___y_34_);
lean_dec(v___y_33_);
lean_dec_ref(v___y_32_);
lean_dec(v___y_31_);
lean_dec_ref(v___y_30_);
lean_dec(v___y_29_);
lean_dec_ref(v___y_28_);
lean_dec(v___y_27_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___redArg(lean_object* v_f_38_, lean_object* v_a_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v___y_48_; lean_object* v___x_51_; uint8_t v_debug_52_; 
v___x_51_ = lean_st_ref_get(v___y_41_);
v_debug_52_ = lean_ctor_get_uint8(v___x_51_, sizeof(void*)*13);
lean_dec(v___x_51_);
if (v_debug_52_ == 0)
{
v___y_48_ = v___y_41_;
goto v___jp_47_;
}
else
{
lean_object* v___x_53_; 
v___x_53_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_38_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
if (lean_obj_tag(v___x_53_) == 0)
{
lean_object* v___x_54_; 
lean_dec_ref_known(v___x_53_, 1);
v___x_54_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
if (lean_obj_tag(v___x_54_) == 0)
{
lean_dec_ref_known(v___x_54_, 1);
v___y_48_ = v___y_41_;
goto v___jp_47_;
}
else
{
lean_object* v_a_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_62_; 
lean_dec_ref(v_a_39_);
lean_dec_ref(v_f_38_);
v_a_55_ = lean_ctor_get(v___x_54_, 0);
v_isSharedCheck_62_ = !lean_is_exclusive(v___x_54_);
if (v_isSharedCheck_62_ == 0)
{
v___x_57_ = v___x_54_;
v_isShared_58_ = v_isSharedCheck_62_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_a_55_);
lean_dec(v___x_54_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_62_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_60_; 
if (v_isShared_58_ == 0)
{
v___x_60_ = v___x_57_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v_a_55_);
v___x_60_ = v_reuseFailAlloc_61_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
return v___x_60_;
}
}
}
}
else
{
lean_object* v_a_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_70_; 
lean_dec_ref(v_a_39_);
lean_dec_ref(v_f_38_);
v_a_63_ = lean_ctor_get(v___x_53_, 0);
v_isSharedCheck_70_ = !lean_is_exclusive(v___x_53_);
if (v_isSharedCheck_70_ == 0)
{
v___x_65_ = v___x_53_;
v_isShared_66_ = v_isSharedCheck_70_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_a_63_);
lean_dec(v___x_53_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_70_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_68_; 
if (v_isShared_66_ == 0)
{
v___x_68_ = v___x_65_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v_a_63_);
v___x_68_ = v_reuseFailAlloc_69_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
return v___x_68_;
}
}
}
}
v___jp_47_:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = l_Lean_Expr_app___override(v_f_38_, v_a_39_);
v___x_50_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_49_, v___y_48_);
return v___x_50_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___redArg___boxed(lean_object* v_f_71_, lean_object* v_a_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___redArg(v_f_71_, v_a_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
lean_dec(v___y_76_);
lean_dec_ref(v___y_75_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1(lean_object* v_f_81_, lean_object* v_a_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___redArg(v_f_81_, v_a_82_, v___y_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___boxed(lean_object* v_f_94_, lean_object* v_a_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1(v_f_94_, v_a_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(lean_object* v_p_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_121_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS___closed__1));
v___x_122_ = lean_box(0);
v___x_123_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___redArg(v___x_121_, v___x_122_, v_a_115_);
if (lean_obj_tag(v___x_123_) == 0)
{
lean_object* v_a_124_; lean_object* v___x_125_; 
v_a_124_ = lean_ctor_get(v___x_123_, 0);
lean_inc(v_a_124_);
lean_dec_ref_known(v___x_123_, 1);
v___x_125_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___redArg(v_a_124_, v_p_110_, v_a_114_, v_a_115_, v_a_116_, v_a_117_, v_a_118_, v_a_119_);
return v___x_125_;
}
else
{
lean_dec_ref(v_p_110_);
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS___boxed(lean_object* v_p_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v_p_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_);
lean_dec(v_a_135_);
lean_dec_ref(v_a_134_);
lean_dec(v_a_133_);
lean_dec_ref(v_a_132_);
lean_dec(v_a_131_);
lean_dec_ref(v_a_130_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
lean_dec(v_a_127_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___redArg(lean_object* v_f_138_, lean_object* v_a_u2081_139_, lean_object* v_a_u2082_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___redArg(v_f_138_, v_a_u2081_139_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_);
if (lean_obj_tag(v___x_148_) == 0)
{
lean_object* v_a_149_; lean_object* v___x_150_; 
v_a_149_ = lean_ctor_get(v___x_148_, 0);
lean_inc(v_a_149_);
lean_dec_ref_known(v___x_148_, 1);
v___x_150_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___redArg(v_a_149_, v_a_u2082_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_);
return v___x_150_;
}
else
{
lean_dec_ref(v_a_u2082_140_);
return v___x_148_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___redArg___boxed(lean_object* v_f_151_, lean_object* v_a_u2081_152_, lean_object* v_a_u2082_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___redArg(v_f_151_, v_a_u2081_152_, v_a_u2082_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS(lean_object* v_p_165_, lean_object* v_q_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_177_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS___closed__1));
v___x_178_ = lean_box(0);
v___x_179_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___redArg(v___x_177_, v___x_178_, v_a_171_);
if (lean_obj_tag(v___x_179_) == 0)
{
lean_object* v_a_180_; lean_object* v___x_181_; 
v_a_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc(v_a_180_);
lean_dec_ref_known(v___x_179_, 1);
v___x_181_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___redArg(v_a_180_, v_p_165_, v_q_166_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_);
return v___x_181_;
}
else
{
lean_dec_ref(v_q_166_);
lean_dec_ref(v_p_165_);
return v___x_179_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS___boxed(lean_object* v_p_182_, lean_object* v_q_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS(v_p_182_, v_q_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
lean_dec(v_a_192_);
lean_dec_ref(v_a_191_);
lean_dec(v_a_190_);
lean_dec_ref(v_a_189_);
lean_dec(v_a_188_);
lean_dec_ref(v_a_187_);
lean_dec(v_a_186_);
lean_dec_ref(v_a_185_);
lean_dec(v_a_184_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0(lean_object* v_f_195_, lean_object* v_a_u2081_196_, lean_object* v_a_u2082_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___redArg(v_f_195_, v_a_u2081_196_, v_a_u2082_197_, v___y_201_, v___y_202_, v___y_203_, v___y_204_, v___y_205_, v___y_206_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___boxed(lean_object* v_f_209_, lean_object* v_a_u2081_210_, lean_object* v_a_u2082_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0(v_f_209_, v_a_u2081_210_, v_a_u2082_211_, v___y_212_, v___y_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
lean_dec(v___y_220_);
lean_dec_ref(v___y_219_);
lean_dec(v___y_218_);
lean_dec_ref(v___y_217_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
lean_dec(v___y_212_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg(lean_object* v_p_226_, lean_object* v_q_227_, lean_object* v_a_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_235_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___closed__1));
v___x_236_ = lean_box(0);
v___x_237_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___redArg(v___x_235_, v___x_236_, v_a_229_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_239_; 
v_a_238_ = lean_ctor_get(v___x_237_, 0);
lean_inc(v_a_238_);
lean_dec_ref_known(v___x_237_, 1);
v___x_239_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___redArg(v_a_238_, v_p_226_, v_q_227_, v_a_228_, v_a_229_, v_a_230_, v_a_231_, v_a_232_, v_a_233_);
return v___x_239_;
}
else
{
lean_dec_ref(v_q_227_);
lean_dec_ref(v_p_226_);
return v___x_237_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___boxed(lean_object* v_p_240_, lean_object* v_q_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg(v_p_240_, v_q_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
lean_dec(v_a_247_);
lean_dec_ref(v_a_246_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS(lean_object* v_p_250_, lean_object* v_q_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg(v_p_250_, v_q_251_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___boxed(lean_object* v_p_263_, lean_object* v_q_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS(v_p_263_, v_q_264_, v_a_265_, v_a_266_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_, v_a_273_);
lean_dec(v_a_273_);
lean_dec_ref(v_a_272_);
lean_dec(v_a_271_);
lean_dec_ref(v_a_270_);
lean_dec(v_a_269_);
lean_dec_ref(v_a_268_);
lean_dec(v_a_267_);
lean_dec_ref(v_a_266_);
lean_dec(v_a_265_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg(lean_object* v_u_279_, lean_object* v_00_u03b1_280_, lean_object* v_p_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_289_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg___closed__1));
v___x_290_ = lean_box(0);
v___x_291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_291_, 0, v_u_279_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___redArg(v___x_289_, v___x_291_, v_a_283_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_294_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_292_, 1);
v___x_294_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___redArg(v_a_293_, v_00_u03b1_280_, v_p_281_, v_a_282_, v_a_283_, v_a_284_, v_a_285_, v_a_286_, v_a_287_);
return v___x_294_;
}
else
{
lean_dec_ref(v_p_281_);
lean_dec_ref(v_00_u03b1_280_);
return v___x_292_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg___boxed(lean_object* v_u_295_, lean_object* v_00_u03b1_296_, lean_object* v_p_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg(v_u_295_, v_00_u03b1_296_, v_p_297_, v_a_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_a_301_);
lean_dec_ref(v_a_300_);
lean_dec(v_a_299_);
lean_dec_ref(v_a_298_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS(lean_object* v_u_306_, lean_object* v_00_u03b1_307_, lean_object* v_p_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg(v_u_306_, v_00_u03b1_307_, v_p_308_, v_a_312_, v_a_313_, v_a_314_, v_a_315_, v_a_316_, v_a_317_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___boxed(lean_object* v_u_320_, lean_object* v_00_u03b1_321_, lean_object* v_p_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS(v_u_320_, v_00_u03b1_321_, v_p_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_, v_a_330_, v_a_331_);
lean_dec(v_a_331_);
lean_dec_ref(v_a_330_);
lean_dec(v_a_329_);
lean_dec_ref(v_a_328_);
lean_dec(v_a_327_);
lean_dec_ref(v_a_326_);
lean_dec(v_a_325_);
lean_dec_ref(v_a_324_);
lean_dec(v_a_323_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_eraseMData___redArg(lean_object* v_e_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
if (lean_obj_tag(v_e_336_) == 10)
{
lean_object* v_expr_344_; lean_object* v___x_345_; 
v_expr_344_ = lean_ctor_get(v_e_336_, 1);
lean_inc_ref_n(v_expr_344_, 2);
lean_dec_ref_known(v_e_336_, 2);
v___x_345_ = l_Lean_Meta_Sym_mkEqRefl(v_expr_344_, v_a_337_, v_a_338_, v_a_339_, v_a_340_, v_a_341_, v_a_342_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_355_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_355_ == 0)
{
v___x_348_ = v___x_345_;
v_isShared_349_ = v_isSharedCheck_355_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_355_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
uint8_t v___x_350_; lean_object* v___x_351_; lean_object* v___x_353_; 
v___x_350_ = 0;
v___x_351_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_351_, 0, v_expr_344_);
lean_ctor_set(v___x_351_, 1, v_a_346_);
lean_ctor_set_uint8(v___x_351_, sizeof(void*)*2, v___x_350_);
lean_ctor_set_uint8(v___x_351_, sizeof(void*)*2 + 1, v___x_350_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_351_);
v___x_353_ = v___x_348_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_351_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
else
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
lean_dec_ref(v_expr_344_);
v_a_356_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_345_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_345_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
else
{
lean_object* v___x_364_; lean_object* v___x_365_; 
lean_dec_ref(v_e_336_);
v___x_364_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
return v___x_365_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_eraseMData___redArg___boxed(lean_object* v_e_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Lean_Meta_Grind_NormSym_eraseMData___redArg(v_e_366_, v_a_367_, v_a_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_);
lean_dec(v_a_372_);
lean_dec_ref(v_a_371_);
lean_dec(v_a_370_);
lean_dec_ref(v_a_369_);
lean_dec(v_a_368_);
lean_dec_ref(v_a_367_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_eraseMData(lean_object* v_e_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l_Lean_Meta_Grind_NormSym_eraseMData___redArg(v_e_375_, v_a_379_, v_a_380_, v_a_381_, v_a_382_, v_a_383_, v_a_384_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_eraseMData___boxed(lean_object* v_e_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_Meta_Grind_NormSym_eraseMData(v_e_387_, v_a_388_, v_a_389_, v_a_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
lean_dec(v_a_396_);
lean_dec_ref(v_a_395_);
lean_dec(v_a_394_);
lean_dec_ref(v_a_393_);
lean_dec(v_a_392_);
lean_dec_ref(v_a_391_);
lean_dec(v_a_390_);
lean_dec_ref(v_a_389_);
lean_dec(v_a_388_);
return v_res_398_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_hasEtaReducibleArg(lean_object* v_a_399_){
_start:
{
if (lean_obj_tag(v_a_399_) == 5)
{
lean_object* v_fn_400_; lean_object* v_arg_401_; uint8_t v___x_402_; 
v_fn_400_ = lean_ctor_get(v_a_399_, 0);
v_arg_401_ = lean_ctor_get(v_a_399_, 1);
v___x_402_ = l_Lean_Meta_Sym_isEtaReducible(v_arg_401_);
if (v___x_402_ == 0)
{
v_a_399_ = v_fn_400_;
goto _start;
}
else
{
return v___x_402_;
}
}
else
{
uint8_t v___x_404_; 
v___x_404_ = 0;
return v___x_404_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_hasEtaReducibleArg___boxed(lean_object* v_a_405_){
_start:
{
uint8_t v_res_406_; lean_object* v_r_407_; 
v_res_406_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_hasEtaReducibleArg(v_a_405_);
lean_dec_ref(v_a_405_);
v_r_407_ = lean_box(v_res_406_);
return v_r_407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_go___redArg(lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
if (lean_obj_tag(v_a_408_) == 5)
{
lean_object* v_fn_416_; lean_object* v_arg_417_; lean_object* v___x_418_; 
v_fn_416_ = lean_ctor_get(v_a_408_, 0);
lean_inc_ref(v_fn_416_);
v_arg_417_ = lean_ctor_get(v_a_408_, 1);
lean_inc_ref(v_arg_417_);
lean_dec_ref_known(v_a_408_, 2);
v___x_418_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_go___redArg(v_fn_416_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
if (lean_obj_tag(v___x_418_) == 0)
{
lean_object* v_a_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v_a_419_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_419_);
lean_dec_ref_known(v___x_418_, 1);
v___x_420_ = l_Lean_Meta_Sym_etaReduce(v_arg_417_);
lean_dec_ref(v_arg_417_);
v___x_421_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___redArg(v_a_419_, v___x_420_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
return v___x_421_;
}
else
{
lean_dec_ref(v_arg_417_);
return v___x_418_;
}
}
else
{
lean_object* v___x_422_; 
v___x_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_422_, 0, v_a_408_);
return v___x_422_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_go___redArg___boxed(lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_go___redArg(v_a_423_, v_a_424_, v_a_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_);
lean_dec(v_a_429_);
lean_dec_ref(v_a_428_);
lean_dec(v_a_427_);
lean_dec_ref(v_a_426_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_go(lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_go___redArg(v_a_432_, v_a_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_go___boxed(lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_go(v_a_444_, v_a_445_, v_a_446_, v_a_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_);
lean_dec(v_a_453_);
lean_dec_ref(v_a_452_);
lean_dec(v_a_451_);
lean_dec_ref(v_a_450_);
lean_dec(v_a_449_);
lean_dec_ref(v_a_448_);
lean_dec(v_a_447_);
lean_dec_ref(v_a_446_);
lean_dec(v_a_445_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_etaReduce___redArg(lean_object* v_e_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_){
_start:
{
lean_object* v___y_468_; lean_object* v___y_469_; lean_object* v___y_470_; lean_object* v___y_471_; lean_object* v___y_472_; lean_object* v___y_473_; uint8_t v___x_509_; 
v___x_509_ = l_Lean_Expr_isApp(v_e_459_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; lean_object* v___x_511_; 
lean_dec_ref(v_e_459_);
v___x_510_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_510_, 0, v___x_509_);
lean_ctor_set_uint8(v___x_510_, 1, v___x_509_);
v___x_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
return v___x_511_;
}
else
{
lean_object* v___x_512_; 
v___x_512_ = l_Lean_Expr_getAppFn(v_e_459_);
if (lean_obj_tag(v___x_512_) == 4)
{
lean_object* v_declName_513_; lean_object* v___x_514_; uint8_t v___x_515_; 
v_declName_513_ = lean_ctor_get(v___x_512_, 0);
lean_inc(v_declName_513_);
lean_dec_ref_known(v___x_512_, 2);
v___x_514_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg___closed__1));
v___x_515_ = lean_name_eq(v_declName_513_, v___x_514_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_516_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_etaReduce___redArg___closed__1));
v___x_517_ = lean_name_eq(v_declName_513_, v___x_516_);
lean_dec(v_declName_513_);
if (v___x_517_ == 0)
{
v___y_468_ = v_a_460_;
v___y_469_ = v_a_461_;
v___y_470_ = v_a_462_;
v___y_471_ = v_a_463_;
v___y_472_ = v_a_464_;
v___y_473_ = v_a_465_;
goto v___jp_467_;
}
else
{
lean_dec_ref(v_e_459_);
goto v___jp_506_;
}
}
else
{
lean_dec(v_declName_513_);
lean_dec_ref(v_e_459_);
goto v___jp_506_;
}
}
else
{
lean_dec_ref(v___x_512_);
v___y_468_ = v_a_460_;
v___y_469_ = v_a_461_;
v___y_470_ = v_a_462_;
v___y_471_ = v_a_463_;
v___y_472_ = v_a_464_;
v___y_473_ = v_a_465_;
goto v___jp_467_;
}
}
v___jp_467_:
{
uint8_t v___x_474_; 
v___x_474_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_hasEtaReducibleArg(v_e_459_);
if (v___x_474_ == 0)
{
lean_object* v___x_475_; lean_object* v___x_476_; 
lean_dec_ref(v_e_459_);
v___x_475_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_475_, 0, v___x_474_);
lean_ctor_set_uint8(v___x_475_, 1, v___x_474_);
v___x_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
return v___x_476_;
}
else
{
lean_object* v___x_477_; 
v___x_477_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_etaReduce_go___redArg(v_e_459_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_);
if (lean_obj_tag(v___x_477_) == 0)
{
lean_object* v_a_478_; lean_object* v___x_479_; 
v_a_478_ = lean_ctor_get(v___x_477_, 0);
lean_inc_n(v_a_478_, 2);
lean_dec_ref_known(v___x_477_, 1);
v___x_479_ = l_Lean_Meta_Sym_mkEqRefl(v_a_478_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_489_; 
v_a_480_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_489_ == 0)
{
v___x_482_ = v___x_479_;
v_isShared_483_ = v_isSharedCheck_489_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_489_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
uint8_t v___x_484_; lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_484_ = 0;
v___x_485_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_485_, 0, v_a_478_);
lean_ctor_set(v___x_485_, 1, v_a_480_);
lean_ctor_set_uint8(v___x_485_, sizeof(void*)*2, v___x_484_);
lean_ctor_set_uint8(v___x_485_, sizeof(void*)*2 + 1, v___x_484_);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v___x_485_);
v___x_487_ = v___x_482_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v___x_485_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
else
{
lean_object* v_a_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_497_; 
lean_dec(v_a_478_);
v_a_490_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_497_ == 0)
{
v___x_492_ = v___x_479_;
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_a_490_);
lean_dec(v___x_479_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_495_; 
if (v_isShared_493_ == 0)
{
v___x_495_ = v___x_492_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_a_490_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
}
else
{
lean_object* v_a_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_505_; 
v_a_498_ = lean_ctor_get(v___x_477_, 0);
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_477_);
if (v_isSharedCheck_505_ == 0)
{
v___x_500_ = v___x_477_;
v_isShared_501_ = v_isSharedCheck_505_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_a_498_);
lean_dec(v___x_477_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_505_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_503_; 
if (v_isShared_501_ == 0)
{
v___x_503_ = v___x_500_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v_a_498_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
}
}
v___jp_506_:
{
lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_507_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
return v___x_508_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_etaReduce___redArg___boxed(lean_object* v_e_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lean_Meta_Grind_NormSym_etaReduce___redArg(v_e_518_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_, v_a_524_);
lean_dec(v_a_524_);
lean_dec_ref(v_a_523_);
lean_dec(v_a_522_);
lean_dec_ref(v_a_521_);
lean_dec(v_a_520_);
lean_dec_ref(v_a_519_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_etaReduce(lean_object* v_e_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = l_Lean_Meta_Grind_NormSym_etaReduce___redArg(v_e_527_, v_a_531_, v_a_532_, v_a_533_, v_a_534_, v_a_535_, v_a_536_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_etaReduce___boxed(lean_object* v_e_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Lean_Meta_Grind_NormSym_etaReduce(v_e_539_, v_a_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_);
lean_dec(v_a_548_);
lean_dec_ref(v_a_547_);
lean_dec(v_a_546_);
lean_dec_ref(v_a_545_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec_ref(v_a_541_);
lean_dec(v_a_540_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_preMatchCond___redArg(lean_object* v_e_558_){
_start:
{
lean_object* v___x_563_; uint8_t v___x_564_; 
v___x_563_ = l_Lean_Expr_cleanupAnnotations(v_e_558_);
v___x_564_ = l_Lean_Expr_isApp(v___x_563_);
if (v___x_564_ == 0)
{
lean_dec_ref(v___x_563_);
goto v___jp_560_;
}
else
{
lean_object* v___x_565_; lean_object* v___x_566_; uint8_t v___x_567_; 
v___x_565_ = l_Lean_Expr_appFnCleanup___redArg(v___x_563_);
lean_dec_ref(v___x_563_);
v___x_566_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___closed__3));
v___x_567_ = l_Lean_Expr_isConstOf(v___x_565_, v___x_566_);
lean_dec_ref(v___x_565_);
if (v___x_567_ == 0)
{
goto v___jp_560_;
}
else
{
uint8_t v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_568_ = 0;
v___x_569_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_567_, v___x_568_);
v___x_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_570_, 0, v___x_569_);
return v___x_570_;
}
}
v___jp_560_:
{
lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_561_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
return v___x_562_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_preMatchCond___redArg___boxed(lean_object* v_e_571_, lean_object* v_a_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_Meta_Grind_NormSym_preMatchCond___redArg(v_e_571_);
lean_dec_ref(v_e_571_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_preMatchCond(lean_object* v_e_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_Lean_Meta_Grind_NormSym_preMatchCond___redArg(v_e_574_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_preMatchCond___boxed(lean_object* v_e_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lean_Meta_Grind_NormSym_preMatchCond(v_e_586_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_);
lean_dec(v_a_595_);
lean_dec_ref(v_a_594_);
lean_dec(v_a_593_);
lean_dec_ref(v_a_592_);
lean_dec(v_a_591_);
lean_dec_ref(v_a_590_);
lean_dec(v_a_589_);
lean_dec_ref(v_a_588_);
lean_dec(v_a_587_);
lean_dec_ref(v_e_586_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly_spec__0___redArg(lean_object* v_declName_598_, lean_object* v___y_599_){
_start:
{
lean_object* v___x_601_; lean_object* v_env_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_601_ = lean_st_ref_get(v___y_599_);
v_env_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc_ref(v_env_602_);
lean_dec(v___x_601_);
v___x_603_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_602_, v_declName_598_);
v___x_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly_spec__0___redArg___boxed(lean_object* v_declName_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly_spec__0___redArg(v_declName_605_, v___y_606_);
lean_dec(v___y_606_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly_spec__0(lean_object* v_declName_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_){
_start:
{
lean_object* v___x_620_; 
v___x_620_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly_spec__0___redArg(v_declName_609_, v___y_618_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly_spec__0___boxed(lean_object* v_declName_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly_spec__0(v_declName_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec(v___y_628_);
lean_dec_ref(v___y_627_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
lean_dec(v___y_622_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly(lean_object* v_e_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_){
_start:
{
if (lean_obj_tag(v_e_638_) == 5)
{
lean_object* v_fn_652_; lean_object* v_arg_653_; lean_object* v___x_654_; uint8_t v___x_655_; 
v_fn_652_ = lean_ctor_get(v_e_638_, 0);
lean_inc_ref(v_fn_652_);
v_arg_653_ = lean_ctor_get(v_e_638_, 1);
lean_inc_ref(v_arg_653_);
v___x_654_ = l_Lean_Expr_cleanupAnnotations(v_e_638_);
v___x_655_ = l_Lean_Expr_isApp(v___x_654_);
if (v___x_655_ == 0)
{
lean_dec_ref(v___x_654_);
lean_dec_ref(v_arg_653_);
lean_dec_ref(v_fn_652_);
lean_dec_ref_known(v_e_638_, 2);
goto v___jp_649_;
}
else
{
lean_object* v___x_656_; uint8_t v___x_657_; 
v___x_656_ = l_Lean_Expr_appFnCleanup___redArg(v___x_654_);
lean_dec_ref(v___x_654_);
v___x_657_ = l_Lean_Expr_isApp(v___x_656_);
if (v___x_657_ == 0)
{
lean_dec_ref(v___x_656_);
lean_dec_ref(v_arg_653_);
lean_dec_ref(v_fn_652_);
lean_dec_ref_known(v_e_638_, 2);
goto v___jp_649_;
}
else
{
lean_object* v___x_658_; lean_object* v___x_659_; uint8_t v___x_660_; 
v___x_658_ = l_Lean_Expr_appFnCleanup___redArg(v___x_656_);
lean_dec_ref(v___x_656_);
v___x_659_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly___closed__1));
v___x_660_ = l_Lean_Expr_isConstOf(v___x_658_, v___x_659_);
lean_dec_ref(v___x_658_);
if (v___x_660_ == 0)
{
lean_dec_ref(v_arg_653_);
lean_dec_ref(v_fn_652_);
lean_dec_ref_known(v_e_638_, 2);
goto v___jp_649_;
}
else
{
lean_object* v___x_661_; 
v___x_661_ = l_Lean_Expr_getAppFn(v_arg_653_);
if (lean_obj_tag(v___x_661_) == 4)
{
lean_object* v_declName_662_; lean_object* v___x_663_; lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_705_; 
v_declName_662_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_declName_662_);
lean_dec_ref_known(v___x_661_, 2);
v___x_663_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly_spec__0___redArg(v_declName_662_, v_a_647_);
v_a_664_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_705_ == 0)
{
v___x_666_ = v___x_663_;
v_isShared_667_ = v_isSharedCheck_705_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_663_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_705_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
if (lean_obj_tag(v_a_664_) == 1)
{
lean_object* v_val_668_; lean_object* v_numParams_669_; lean_object* v_numDiscrs_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
lean_del_object(v___x_666_);
v_val_668_ = lean_ctor_get(v_a_664_, 0);
lean_inc(v_val_668_);
lean_dec_ref_known(v_a_664_, 1);
v_numParams_669_ = lean_ctor_get(v_val_668_, 0);
lean_inc(v_numParams_669_);
v_numDiscrs_670_ = lean_ctor_get(v_val_668_, 1);
lean_inc(v_numDiscrs_670_);
lean_dec(v_val_668_);
v___x_671_ = lean_unsigned_to_nat(1u);
v___x_672_ = lean_nat_add(v_numParams_669_, v___x_671_);
lean_dec(v_numParams_669_);
v___x_673_ = lean_nat_add(v___x_672_, v_numDiscrs_670_);
lean_dec(v_numDiscrs_670_);
lean_inc_ref(v_arg_653_);
v___x_674_ = l_Lean_Meta_Sym_Simp_simpAppArgRange(v_arg_653_, v___x_672_, v___x_673_, v_a_639_, v_a_640_, v_a_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_);
lean_dec(v___x_673_);
lean_dec(v___x_672_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v_a_675_; lean_object* v___x_676_; 
v_a_675_ = lean_ctor_get(v___x_674_, 0);
lean_inc(v_a_675_);
lean_dec_ref_known(v___x_674_, 1);
v___x_676_ = l_Lean_Meta_Sym_Simp_mkCongrArg___redArg(v_e_638_, v_fn_652_, v_arg_653_, v_a_675_, v_a_642_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_699_; 
v_a_677_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_699_ == 0)
{
v___x_679_ = v___x_676_;
v_isShared_680_ = v_isSharedCheck_699_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___x_676_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_699_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
if (lean_obj_tag(v_a_677_) == 0)
{
uint8_t v_contextDependent_681_; lean_object* v___x_682_; lean_object* v___x_684_; 
v_contextDependent_681_ = lean_ctor_get_uint8(v_a_677_, 1);
lean_dec_ref_known(v_a_677_, 0);
v___x_682_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_660_, v_contextDependent_681_);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 0, v___x_682_);
v___x_684_ = v___x_679_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
else
{
lean_object* v_e_x27_686_; lean_object* v_proof_687_; uint8_t v_contextDependent_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_698_; 
v_e_x27_686_ = lean_ctor_get(v_a_677_, 0);
v_proof_687_ = lean_ctor_get(v_a_677_, 1);
v_contextDependent_688_ = lean_ctor_get_uint8(v_a_677_, sizeof(void*)*2 + 1);
v_isSharedCheck_698_ = !lean_is_exclusive(v_a_677_);
if (v_isSharedCheck_698_ == 0)
{
v___x_690_ = v_a_677_;
v_isShared_691_ = v_isSharedCheck_698_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_proof_687_);
lean_inc(v_e_x27_686_);
lean_dec(v_a_677_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_698_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_e_x27_686_);
lean_ctor_set(v_reuseFailAlloc_697_, 1, v_proof_687_);
lean_ctor_set_uint8(v_reuseFailAlloc_697_, sizeof(void*)*2 + 1, v_contextDependent_688_);
v___x_693_ = v_reuseFailAlloc_697_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
lean_object* v___x_695_; 
lean_ctor_set_uint8(v___x_693_, sizeof(void*)*2, v___x_660_);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 0, v___x_693_);
v___x_695_ = v___x_679_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v___x_693_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
}
}
else
{
return v___x_676_;
}
}
else
{
lean_dec_ref(v_arg_653_);
lean_dec_ref_known(v_e_638_, 2);
lean_dec_ref(v_fn_652_);
return v___x_674_;
}
}
else
{
uint8_t v___x_700_; lean_object* v___x_701_; lean_object* v___x_703_; 
lean_dec(v_a_664_);
lean_dec_ref(v_arg_653_);
lean_dec_ref(v_fn_652_);
lean_dec_ref_known(v_e_638_, 2);
v___x_700_ = 0;
v___x_701_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_660_, v___x_700_);
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 0, v___x_701_);
v___x_703_ = v___x_666_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v___x_701_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
else
{
uint8_t v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
lean_dec_ref(v___x_661_);
lean_dec_ref(v_arg_653_);
lean_dec_ref(v_fn_652_);
lean_dec_ref_known(v_e_638_, 2);
v___x_706_ = 0;
v___x_707_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_660_, v___x_706_);
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
return v___x_708_;
}
}
}
}
}
else
{
lean_object* v___x_709_; lean_object* v___x_710_; 
lean_dec_ref(v_e_638_);
v___x_709_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
return v___x_710_;
}
v___jp_649_:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
return v___x_651_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly___boxed(lean_object* v_e_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lean_Meta_Grind_NormSym_simpMatchDiscrsOnly(v_e_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_);
lean_dec(v_a_720_);
lean_dec_ref(v_a_719_);
lean_dec(v_a_718_);
lean_dec_ref(v_a_717_);
lean_dec(v_a_716_);
lean_dec_ref(v_a_715_);
lean_dec(v_a_714_);
lean_dec_ref(v_a_713_);
lean_dec(v_a_712_);
return v_res_722_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget(lean_object* v_e_746_){
_start:
{
if (lean_obj_tag(v_e_746_) == 11)
{
lean_object* v_typeName_758_; 
v_typeName_758_ = lean_ctor_get(v_e_746_, 0);
if (lean_obj_tag(v_typeName_758_) == 1)
{
lean_object* v_pre_759_; 
v_pre_759_ = lean_ctor_get(v_typeName_758_, 0);
if (lean_obj_tag(v_pre_759_) == 0)
{
lean_object* v_idx_760_; lean_object* v_str_761_; lean_object* v___x_762_; uint8_t v___x_763_; 
v_idx_760_ = lean_ctor_get(v_e_746_, 1);
v_str_761_ = lean_ctor_get(v_typeName_758_, 1);
v___x_762_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__10));
v___x_763_ = lean_string_dec_eq(v_str_761_, v___x_762_);
if (v___x_763_ == 0)
{
goto v___jp_747_;
}
else
{
lean_object* v___x_764_; uint8_t v___x_765_; 
v___x_764_ = lean_unsigned_to_nat(0u);
v___x_765_ = lean_nat_dec_eq(v_idx_760_, v___x_764_);
if (v___x_765_ == 0)
{
goto v___jp_747_;
}
else
{
return v___x_765_;
}
}
}
else
{
goto v___jp_747_;
}
}
else
{
goto v___jp_747_;
}
}
else
{
goto v___jp_747_;
}
v___jp_747_:
{
lean_object* v___x_748_; uint8_t v___x_749_; 
v___x_748_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__2));
v___x_749_ = l_Lean_Expr_isAppOf(v_e_746_, v___x_748_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; uint8_t v___x_751_; 
v___x_750_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__4));
v___x_751_ = l_Lean_Expr_isAppOf(v_e_746_, v___x_750_);
if (v___x_751_ == 0)
{
lean_object* v___x_752_; uint8_t v___x_753_; 
v___x_752_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__6));
v___x_753_ = l_Lean_Expr_isAppOf(v_e_746_, v___x_752_);
if (v___x_753_ == 0)
{
lean_object* v___x_754_; uint8_t v___x_755_; 
v___x_754_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__9));
v___x_755_ = l_Lean_Expr_isAppOf(v_e_746_, v___x_754_);
if (v___x_755_ == 0)
{
lean_object* v___x_756_; uint8_t v___x_757_; 
v___x_756_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__12));
v___x_757_ = l_Lean_Expr_isAppOf(v_e_746_, v___x_756_);
return v___x_757_;
}
else
{
return v___x_755_;
}
}
else
{
return v___x_753_;
}
}
else
{
return v___x_751_;
}
}
else
{
return v___x_749_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___boxed(lean_object* v_e_766_){
_start:
{
uint8_t v_res_767_; lean_object* v_r_768_; 
v_res_767_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget(v_e_766_);
lean_dec_ref(v_e_766_);
v_r_768_ = lean_box(v_res_767_);
return v_r_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00Lean_Meta_Grind_NormSym_simpEq_spec__1___redArg(lean_object* v_u_769_, lean_object* v___y_770_){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = l_Lean_Expr_sort___override(v_u_769_);
v___x_773_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_772_, v___y_770_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00Lean_Meta_Grind_NormSym_simpEq_spec__1___redArg___boxed(lean_object* v_u_774_, lean_object* v___y_775_, lean_object* v___y_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_Lean_Meta_Sym_Internal_mkSortS___at___00Lean_Meta_Grind_NormSym_simpEq_spec__1___redArg(v_u_774_, v___y_775_);
lean_dec(v___y_775_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00Lean_Meta_Grind_NormSym_simpEq_spec__1(lean_object* v_u_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_){
_start:
{
lean_object* v___x_789_; 
v___x_789_ = l_Lean_Meta_Sym_Internal_mkSortS___at___00Lean_Meta_Grind_NormSym_simpEq_spec__1___redArg(v_u_778_, v___y_783_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkSortS___at___00Lean_Meta_Grind_NormSym_simpEq_spec__1___boxed(lean_object* v_u_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Lean_Meta_Sym_Internal_mkSortS___at___00Lean_Meta_Grind_NormSym_simpEq_spec__1(v_u_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec(v___y_791_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___redArg(lean_object* v_f_802_, lean_object* v_a_u2081_803_, lean_object* v_a_u2082_804_, lean_object* v_a_u2083_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___redArg(v_f_802_, v_a_u2081_803_, v_a_u2082_804_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; lean_object* v___x_815_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_a_814_);
lean_dec_ref_known(v___x_813_, 1);
v___x_815_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___redArg(v_a_814_, v_a_u2083_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_);
return v___x_815_;
}
else
{
lean_dec_ref(v_a_u2083_805_);
return v___x_813_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___redArg___boxed(lean_object* v_f_816_, lean_object* v_a_u2081_817_, lean_object* v_a_u2082_818_, lean_object* v_a_u2083_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___redArg(v_f_816_, v_a_u2081_817_, v_a_u2082_818_, v_a_u2083_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
lean_dec(v___y_821_);
lean_dec_ref(v___y_820_);
return v_res_827_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpEq___closed__4(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_836_ = lean_box(0);
v___x_837_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpEq___closed__3));
v___x_838_ = l_Lean_mkConst(v___x_837_, v___x_836_);
return v___x_838_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpEq___closed__7(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_844_ = lean_box(0);
v___x_845_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpEq___closed__6));
v___x_846_ = l_Lean_mkConst(v___x_845_, v___x_844_);
return v___x_846_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpEq___closed__15(void){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_862_ = lean_box(0);
v___x_863_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpEq___closed__14));
v___x_864_ = l_Lean_mkConst(v___x_863_, v___x_862_);
return v___x_864_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpEq___closed__18(void){
_start:
{
lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_870_ = lean_box(0);
v___x_871_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpEq___closed__17));
v___x_872_ = l_Lean_mkConst(v___x_871_, v___x_870_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpEq(lean_object* v_e_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_){
_start:
{
lean_object* v___x_893_; uint8_t v___x_894_; 
v___x_893_ = l_Lean_Expr_cleanupAnnotations(v_e_876_);
v___x_894_ = l_Lean_Expr_isApp(v___x_893_);
if (v___x_894_ == 0)
{
lean_dec_ref(v___x_893_);
goto v___jp_890_;
}
else
{
lean_object* v___x_895_; uint8_t v___x_896_; 
v___x_895_ = l_Lean_Expr_appFnCleanup___redArg(v___x_893_);
v___x_896_ = l_Lean_Expr_isApp(v___x_895_);
if (v___x_896_ == 0)
{
lean_dec_ref(v___x_895_);
lean_dec_ref(v___x_893_);
goto v___jp_890_;
}
else
{
lean_object* v___x_897_; uint8_t v___x_898_; 
v___x_897_ = l_Lean_Expr_appFnCleanup___redArg(v___x_895_);
v___x_898_ = l_Lean_Expr_isApp(v___x_897_);
if (v___x_898_ == 0)
{
lean_dec_ref(v___x_897_);
lean_dec_ref(v___x_895_);
lean_dec_ref(v___x_893_);
goto v___jp_890_;
}
else
{
lean_object* v___x_899_; lean_object* v___x_900_; uint8_t v___x_901_; 
v___x_899_ = l_Lean_Expr_appFnCleanup___redArg(v___x_897_);
v___x_900_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpEq___closed__1));
v___x_901_ = l_Lean_Expr_isConstOf(v___x_899_, v___x_900_);
if (v___x_901_ == 0)
{
lean_dec_ref(v___x_899_);
lean_dec_ref(v___x_897_);
lean_dec_ref(v___x_895_);
lean_dec_ref(v___x_893_);
goto v___jp_890_;
}
else
{
lean_object* v_arg_902_; lean_object* v_arg_903_; lean_object* v_arg_904_; lean_object* v___x_905_; 
v_arg_902_ = lean_ctor_get(v___x_893_, 1);
lean_inc_ref(v_arg_902_);
lean_dec_ref(v___x_893_);
v_arg_903_ = lean_ctor_get(v___x_895_, 1);
lean_inc_ref(v_arg_903_);
lean_dec_ref(v___x_895_);
v_arg_904_ = lean_ctor_get(v___x_897_, 1);
lean_inc_ref_n(v_arg_904_, 2);
lean_dec_ref(v___x_897_);
v___x_905_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_904_, v_a_883_);
if (lean_obj_tag(v___x_905_) == 0)
{
lean_object* v_a_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_1090_; 
v_a_906_ = lean_ctor_get(v___x_905_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_908_ = v___x_905_;
v_isShared_909_ = v_isSharedCheck_1090_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_a_906_);
lean_dec(v___x_905_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_1090_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
uint8_t v___y_911_; uint8_t v___y_917_; uint8_t v___y_939_; lean_object* v___y_1002_; uint8_t v___y_1003_; lean_object* v___y_1004_; lean_object* v___x_1024_; lean_object* v___x_1025_; uint8_t v___x_1026_; 
v___x_1024_ = l_Lean_Expr_cleanupAnnotations(v_a_906_);
lean_dec(v_a_906_);
v___x_1025_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpEq___closed__12));
v___x_1026_ = l_Lean_Expr_isConstOf(v___x_1024_, v___x_1025_);
lean_dec_ref(v___x_1024_);
if (v___x_1026_ == 0)
{
size_t v___x_1027_; size_t v___x_1028_; uint8_t v___x_1029_; 
lean_del_object(v___x_908_);
v___x_1027_ = lean_ptr_addr(v_arg_903_);
v___x_1028_ = lean_ptr_addr(v_arg_902_);
v___x_1029_ = lean_usize_dec_eq(v___x_1027_, v___x_1028_);
if (v___x_1029_ == 0)
{
uint8_t v___x_1030_; 
lean_dec_ref(v_arg_904_);
lean_dec_ref(v___x_899_);
v___x_1030_ = l_Lean_Expr_isTrue(v_arg_902_);
if (v___x_1030_ == 0)
{
uint8_t v___x_1031_; 
v___x_1031_ = l_Lean_Expr_isFalse(v_arg_902_);
lean_dec_ref(v_arg_902_);
if (v___x_1031_ == 0)
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
lean_dec_ref(v_arg_903_);
v___x_1032_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1032_, 0, v___x_1031_);
lean_ctor_set_uint8(v___x_1032_, 1, v___x_1031_);
v___x_1033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1032_);
return v___x_1033_;
}
else
{
lean_object* v___x_1034_; 
lean_inc_ref(v_arg_903_);
v___x_1034_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v_arg_903_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_, v_a_884_, v_a_885_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1045_; 
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1037_ = v___x_1034_;
v_isShared_1038_ = v_isSharedCheck_1045_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1034_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1045_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1043_; 
v___x_1039_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpEq___closed__15, &l_Lean_Meta_Grind_NormSym_simpEq___closed__15_once, _init_l_Lean_Meta_Grind_NormSym_simpEq___closed__15);
v___x_1040_ = l_Lean_Expr_app___override(v___x_1039_, v_arg_903_);
v___x_1041_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1041_, 0, v_a_1035_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
lean_ctor_set_uint8(v___x_1041_, sizeof(void*)*2, v___x_1030_);
lean_ctor_set_uint8(v___x_1041_, sizeof(void*)*2 + 1, v___x_1030_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v___x_1041_);
v___x_1043_ = v___x_1037_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1041_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
else
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
lean_dec_ref(v_arg_903_);
v_a_1046_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_1034_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1034_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
}
}
else
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
lean_dec_ref(v_arg_902_);
v___x_1054_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpEq___closed__18, &l_Lean_Meta_Grind_NormSym_simpEq___closed__18_once, _init_l_Lean_Meta_Grind_NormSym_simpEq___closed__18);
lean_inc_ref(v_arg_903_);
v___x_1055_ = l_Lean_Expr_app___override(v___x_1054_, v_arg_903_);
v___x_1056_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1056_, 0, v_arg_903_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
lean_ctor_set_uint8(v___x_1056_, sizeof(void*)*2, v___x_1030_);
lean_ctor_set_uint8(v___x_1056_, sizeof(void*)*2 + 1, v___x_1029_);
v___x_1057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
return v___x_1057_;
}
}
else
{
lean_object* v___x_1058_; 
lean_dec_ref(v_arg_902_);
v___x_1058_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_880_);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1071_; 
v_a_1059_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1061_ = v___x_1058_;
v_isShared_1062_ = v_isSharedCheck_1071_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1058_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1071_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1069_; 
v___x_1063_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpEq___closed__20));
v___x_1064_ = l_Lean_Expr_constLevels_x21(v___x_899_);
lean_dec_ref(v___x_899_);
v___x_1065_ = l_Lean_mkConst(v___x_1063_, v___x_1064_);
v___x_1066_ = l_Lean_mkAppB(v___x_1065_, v_arg_904_, v_arg_903_);
v___x_1067_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1067_, 0, v_a_1059_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
lean_ctor_set_uint8(v___x_1067_, sizeof(void*)*2, v___x_1029_);
lean_ctor_set_uint8(v___x_1067_, sizeof(void*)*2 + 1, v___x_1026_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 0, v___x_1067_);
v___x_1069_ = v___x_1061_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v___x_1067_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v___x_899_);
v_a_1072_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1058_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1058_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
}
else
{
lean_object* v___x_1080_; uint8_t v___x_1081_; 
v___x_1080_ = l_Lean_Expr_getAppFn(v_arg_902_);
v___x_1081_ = l_Lean_Expr_isConst(v___x_1080_);
lean_dec_ref(v___x_1080_);
if (v___x_1081_ == 0)
{
if (lean_obj_tag(v_arg_902_) == 11)
{
lean_object* v_typeName_1082_; 
v_typeName_1082_ = lean_ctor_get(v_arg_902_, 0);
if (lean_obj_tag(v_typeName_1082_) == 1)
{
lean_object* v_pre_1083_; 
v_pre_1083_ = lean_ctor_get(v_typeName_1082_, 0);
if (lean_obj_tag(v_pre_1083_) == 0)
{
lean_object* v_idx_1084_; lean_object* v_str_1085_; lean_object* v___x_1086_; uint8_t v___x_1087_; 
v_idx_1084_ = lean_ctor_get(v_arg_902_, 1);
v_str_1085_ = lean_ctor_get(v_typeName_1082_, 1);
v___x_1086_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__10));
v___x_1087_ = lean_string_dec_eq(v_str_1085_, v___x_1086_);
if (v___x_1087_ == 0)
{
lean_dec_ref_known(v_arg_902_, 3);
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v___x_899_);
v___y_911_ = v___x_1087_;
goto v___jp_910_;
}
else
{
lean_object* v___x_1088_; uint8_t v___x_1089_; 
v___x_1088_ = lean_unsigned_to_nat(0u);
v___x_1089_ = lean_nat_dec_eq(v_idx_1084_, v___x_1088_);
if (v___x_1089_ == 0)
{
lean_dec_ref_known(v_arg_902_, 3);
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v___x_899_);
v___y_911_ = v___x_1089_;
goto v___jp_910_;
}
else
{
lean_del_object(v___x_908_);
goto v___jp_1009_;
}
}
}
else
{
lean_dec_ref_known(v_arg_902_, 3);
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v___x_899_);
v___y_911_ = v___x_1081_;
goto v___jp_910_;
}
}
else
{
lean_dec_ref_known(v_arg_902_, 3);
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v___x_899_);
v___y_911_ = v___x_1081_;
goto v___jp_910_;
}
}
else
{
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_arg_902_);
lean_dec_ref(v___x_899_);
v___y_911_ = v___x_1081_;
goto v___jp_910_;
}
}
else
{
lean_del_object(v___x_908_);
goto v___jp_1009_;
}
}
v___jp_910_:
{
lean_object* v___x_912_; lean_object* v___x_914_; 
v___x_912_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_912_, 0, v___y_911_);
lean_ctor_set_uint8(v___x_912_, 1, v___y_911_);
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 0, v___x_912_);
v___x_914_ = v___x_908_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v___x_912_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
v___jp_916_:
{
lean_object* v___x_918_; 
lean_inc_ref(v_arg_903_);
lean_inc_ref(v_arg_902_);
v___x_918_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___redArg(v___x_899_, v_arg_904_, v_arg_902_, v_arg_903_, v_a_880_, v_a_881_, v_a_882_, v_a_883_, v_a_884_, v_a_885_);
if (lean_obj_tag(v___x_918_) == 0)
{
lean_object* v_a_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_929_; 
v_a_919_ = lean_ctor_get(v___x_918_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_929_ == 0)
{
v___x_921_ = v___x_918_;
v_isShared_922_ = v_isSharedCheck_929_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_a_919_);
lean_dec(v___x_918_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_929_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_927_; 
v___x_923_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpEq___closed__4, &l_Lean_Meta_Grind_NormSym_simpEq___closed__4_once, _init_l_Lean_Meta_Grind_NormSym_simpEq___closed__4);
v___x_924_ = l_Lean_mkAppB(v___x_923_, v_arg_903_, v_arg_902_);
v___x_925_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_925_, 0, v_a_919_);
lean_ctor_set(v___x_925_, 1, v___x_924_);
lean_ctor_set_uint8(v___x_925_, sizeof(void*)*2, v___y_917_);
lean_ctor_set_uint8(v___x_925_, sizeof(void*)*2 + 1, v___y_917_);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 0, v___x_925_);
v___x_927_ = v___x_921_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_925_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
else
{
lean_object* v_a_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_937_; 
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_arg_902_);
v_a_930_ = lean_ctor_get(v___x_918_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_937_ == 0)
{
v___x_932_ = v___x_918_;
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_a_930_);
lean_dec(v___x_918_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_935_; 
if (v_isShared_933_ == 0)
{
v___x_935_ = v___x_932_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_a_930_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
}
}
v___jp_938_:
{
lean_object* v___x_940_; 
v___x_940_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_880_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_941_);
lean_dec_ref_known(v___x_940_, 1);
v___x_942_ = lean_box(0);
v___x_943_ = l_Lean_Meta_Sym_Internal_mkSortS___at___00Lean_Meta_Grind_NormSym_simpEq_spec__1___redArg(v___x_942_, v_a_881_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v_a_944_; lean_object* v___x_945_; 
v_a_944_ = lean_ctor_get(v___x_943_, 0);
lean_inc(v_a_944_);
lean_dec_ref_known(v___x_943_, 1);
lean_inc(v_a_941_);
lean_inc_ref(v_arg_903_);
lean_inc_ref(v_arg_904_);
lean_inc_ref(v___x_899_);
v___x_945_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___redArg(v___x_899_, v_arg_904_, v_arg_903_, v_a_941_, v_a_880_, v_a_881_, v_a_882_, v_a_883_, v_a_884_, v_a_885_);
if (lean_obj_tag(v___x_945_) == 0)
{
lean_object* v_a_946_; lean_object* v___x_947_; 
v_a_946_ = lean_ctor_get(v___x_945_, 0);
lean_inc(v_a_946_);
lean_dec_ref_known(v___x_945_, 1);
lean_inc_ref(v_arg_902_);
lean_inc_ref(v___x_899_);
v___x_947_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___redArg(v___x_899_, v_arg_904_, v_arg_902_, v_a_941_, v_a_880_, v_a_881_, v_a_882_, v_a_883_, v_a_884_, v_a_885_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_949_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_948_);
lean_dec_ref_known(v___x_947_, 1);
v___x_949_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___redArg(v___x_899_, v_a_944_, v_a_946_, v_a_948_, v_a_880_, v_a_881_, v_a_882_, v_a_883_, v_a_884_, v_a_885_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_960_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_960_ == 0)
{
v___x_952_ = v___x_949_;
v_isShared_953_ = v_isSharedCheck_960_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_949_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_960_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_954_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpEq___closed__7, &l_Lean_Meta_Grind_NormSym_simpEq___closed__7_once, _init_l_Lean_Meta_Grind_NormSym_simpEq___closed__7);
v___x_955_ = l_Lean_mkAppB(v___x_954_, v_arg_903_, v_arg_902_);
v___x_956_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_956_, 0, v_a_950_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
lean_ctor_set_uint8(v___x_956_, sizeof(void*)*2, v___y_939_);
lean_ctor_set_uint8(v___x_956_, sizeof(void*)*2 + 1, v___y_939_);
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 0, v___x_956_);
v___x_958_ = v___x_952_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_956_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
else
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_968_; 
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_arg_902_);
v_a_961_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_968_ == 0)
{
v___x_963_ = v___x_949_;
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___x_949_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
if (v_isShared_964_ == 0)
{
v___x_966_ = v___x_963_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_961_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
}
else
{
lean_object* v_a_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_976_; 
lean_dec(v_a_946_);
lean_dec(v_a_944_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_arg_902_);
lean_dec_ref(v___x_899_);
v_a_969_ = lean_ctor_get(v___x_947_, 0);
v_isSharedCheck_976_ = !lean_is_exclusive(v___x_947_);
if (v_isSharedCheck_976_ == 0)
{
v___x_971_ = v___x_947_;
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_a_969_);
lean_dec(v___x_947_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_974_; 
if (v_isShared_972_ == 0)
{
v___x_974_ = v___x_971_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_a_969_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
return v___x_974_;
}
}
}
}
else
{
lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_984_; 
lean_dec(v_a_944_);
lean_dec(v_a_941_);
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_arg_902_);
lean_dec_ref(v___x_899_);
v_a_977_ = lean_ctor_get(v___x_945_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_984_ == 0)
{
v___x_979_ = v___x_945_;
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_dec(v___x_945_);
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
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
lean_dec(v_a_941_);
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_arg_902_);
lean_dec_ref(v___x_899_);
v_a_985_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_943_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_943_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_a_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
else
{
lean_object* v_a_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1000_; 
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_arg_902_);
lean_dec_ref(v___x_899_);
v_a_993_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_995_ = v___x_940_;
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_a_993_);
lean_dec(v___x_940_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_998_; 
if (v_isShared_996_ == 0)
{
v___x_998_ = v___x_995_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_a_993_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
}
v___jp_1001_:
{
uint8_t v___x_1005_; 
v___x_1005_ = l_Lean_Expr_isConstOf(v_arg_903_, v___y_1004_);
if (v___x_1005_ == 0)
{
uint8_t v___x_1006_; 
v___x_1006_ = l_Lean_Expr_isConstOf(v_arg_903_, v___y_1002_);
if (v___x_1006_ == 0)
{
uint8_t v___x_1007_; 
v___x_1007_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget(v_arg_903_);
if (v___x_1007_ == 0)
{
uint8_t v___x_1008_; 
v___x_1008_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget(v_arg_902_);
if (v___x_1008_ == 0)
{
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_arg_902_);
lean_dec_ref(v___x_899_);
goto v___jp_887_;
}
else
{
v___y_939_ = v___x_1006_;
goto v___jp_938_;
}
}
else
{
v___y_939_ = v___x_1006_;
goto v___jp_938_;
}
}
else
{
v___y_917_ = v___y_1003_;
goto v___jp_916_;
}
}
else
{
v___y_917_ = v___y_1003_;
goto v___jp_916_;
}
}
v___jp_1009_:
{
lean_object* v___x_1010_; uint8_t v___x_1011_; 
v___x_1010_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpEq___closed__9));
v___x_1011_ = l_Lean_Expr_isConstOf(v_arg_902_, v___x_1010_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; uint8_t v___x_1013_; 
v___x_1012_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpEq___closed__11));
v___x_1013_ = l_Lean_Expr_isConstOf(v_arg_902_, v___x_1012_);
if (v___x_1013_ == 0)
{
lean_object* v___x_1014_; uint8_t v___x_1015_; 
v___x_1014_ = l_Lean_Expr_getAppFn(v_arg_903_);
v___x_1015_ = l_Lean_Expr_isConst(v___x_1014_);
lean_dec_ref(v___x_1014_);
if (v___x_1015_ == 0)
{
if (lean_obj_tag(v_arg_903_) == 11)
{
lean_object* v_typeName_1016_; 
v_typeName_1016_ = lean_ctor_get(v_arg_903_, 0);
if (lean_obj_tag(v_typeName_1016_) == 1)
{
lean_object* v_pre_1017_; 
v_pre_1017_ = lean_ctor_get(v_typeName_1016_, 0);
if (lean_obj_tag(v_pre_1017_) == 0)
{
lean_object* v_idx_1018_; lean_object* v_str_1019_; lean_object* v___x_1020_; uint8_t v___x_1021_; 
v_idx_1018_ = lean_ctor_get(v_arg_903_, 1);
v_str_1019_ = lean_ctor_get(v_typeName_1016_, 1);
v___x_1020_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isBoolEqTarget___closed__10));
v___x_1021_ = lean_string_dec_eq(v_str_1019_, v___x_1020_);
if (v___x_1021_ == 0)
{
lean_dec_ref_known(v_arg_903_, 3);
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_902_);
lean_dec_ref(v___x_899_);
goto v___jp_887_;
}
else
{
lean_object* v___x_1022_; uint8_t v___x_1023_; 
v___x_1022_ = lean_unsigned_to_nat(0u);
v___x_1023_ = lean_nat_dec_eq(v_idx_1018_, v___x_1022_);
if (v___x_1023_ == 0)
{
lean_dec_ref_known(v_arg_903_, 3);
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_902_);
lean_dec_ref(v___x_899_);
goto v___jp_887_;
}
else
{
v___y_1002_ = v___x_1012_;
v___y_1003_ = v___x_1013_;
v___y_1004_ = v___x_1010_;
goto v___jp_1001_;
}
}
}
else
{
lean_dec_ref_known(v_arg_903_, 3);
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_902_);
lean_dec_ref(v___x_899_);
goto v___jp_887_;
}
}
else
{
lean_dec_ref_known(v_arg_903_, 3);
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_902_);
lean_dec_ref(v___x_899_);
goto v___jp_887_;
}
}
else
{
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_arg_902_);
lean_dec_ref(v___x_899_);
goto v___jp_887_;
}
}
else
{
v___y_1002_ = v___x_1012_;
v___y_1003_ = v___x_1013_;
v___y_1004_ = v___x_1010_;
goto v___jp_1001_;
}
}
else
{
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_arg_902_);
lean_dec_ref(v___x_899_);
goto v___jp_887_;
}
}
else
{
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_arg_902_);
lean_dec_ref(v___x_899_);
goto v___jp_887_;
}
}
}
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
lean_dec_ref(v_arg_904_);
lean_dec_ref(v_arg_903_);
lean_dec_ref(v_arg_902_);
lean_dec_ref(v___x_899_);
v_a_1091_ = lean_ctor_get(v___x_905_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v___x_905_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_905_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_a_1091_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
}
}
}
}
}
v___jp_887_:
{
lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_888_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
return v___x_889_;
}
v___jp_890_:
{
lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_891_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_892_, 0, v___x_891_);
return v___x_892_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpEq___boxed(lean_object* v_e_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_Lean_Meta_Grind_NormSym_simpEq(v_e_1099_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_, v_a_1104_, v_a_1105_, v_a_1106_, v_a_1107_, v_a_1108_);
lean_dec(v_a_1108_);
lean_dec_ref(v_a_1107_);
lean_dec(v_a_1106_);
lean_dec_ref(v_a_1105_);
lean_dec(v_a_1104_);
lean_dec_ref(v_a_1103_);
lean_dec(v_a_1102_);
lean_dec_ref(v_a_1101_);
lean_dec(v_a_1100_);
lean_dec_ref(v_e_1099_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0(lean_object* v_f_1111_, lean_object* v_a_u2081_1112_, lean_object* v_a_u2082_1113_, lean_object* v_a_u2083_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___redArg(v_f_1111_, v_a_u2081_1112_, v_a_u2082_1113_, v_a_u2083_1114_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___boxed(lean_object* v_f_1126_, lean_object* v_a_u2081_1127_, lean_object* v_a_u2082_1128_, lean_object* v_a_u2083_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0(v_f_1126_, v_a_u2081_1127_, v_a_u2082_1128_, v_a_u2083_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
lean_dec(v___y_1134_);
lean_dec_ref(v___y_1133_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1131_);
lean_dec(v___y_1130_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Grind_NormSym_simpDIte_spec__0___redArg(lean_object* v_f_1141_, lean_object* v_a_u2081_1142_, lean_object* v_a_u2082_1143_, lean_object* v_a_u2083_1144_, lean_object* v_a_u2084_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___redArg(v_f_1141_, v_a_u2081_1142_, v_a_u2082_1143_, v_a_u2083_1144_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; lean_object* v___x_1155_; 
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
lean_inc(v_a_1154_);
lean_dec_ref_known(v___x_1153_, 1);
v___x_1155_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___redArg(v_a_1154_, v_a_u2084_1145_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
return v___x_1155_;
}
else
{
lean_dec_ref(v_a_u2084_1145_);
return v___x_1153_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Grind_NormSym_simpDIte_spec__0___redArg___boxed(lean_object* v_f_1156_, lean_object* v_a_u2081_1157_, lean_object* v_a_u2082_1158_, lean_object* v_a_u2083_1159_, lean_object* v_a_u2084_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Grind_NormSym_simpDIte_spec__0___redArg(v_f_1156_, v_a_u2081_1157_, v_a_u2082_1158_, v_a_u2083_1159_, v_a_u2084_1160_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_);
lean_dec(v___y_1166_);
lean_dec_ref(v___y_1165_);
lean_dec(v___y_1164_);
lean_dec_ref(v___y_1163_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
return v_res_1168_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpDIte___closed__3(void){
_start:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1174_ = lean_box(0);
v___x_1175_ = lean_unsigned_to_nat(16u);
v___x_1176_ = lean_mk_array(v___x_1175_, v___x_1174_);
return v___x_1176_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpDIte___closed__4(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1177_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpDIte___closed__3, &l_Lean_Meta_Grind_NormSym_simpDIte___closed__3_once, _init_l_Lean_Meta_Grind_NormSym_simpDIte___closed__3);
v___x_1178_ = lean_unsigned_to_nat(0u);
v___x_1179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
lean_ctor_set(v___x_1179_, 1, v___x_1177_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpDIte(lean_object* v_e_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_){
_start:
{
lean_object* v___x_1203_; uint8_t v___x_1204_; 
v___x_1203_ = l_Lean_Expr_cleanupAnnotations(v_e_1186_);
v___x_1204_ = l_Lean_Expr_isApp(v___x_1203_);
if (v___x_1204_ == 0)
{
lean_dec_ref(v___x_1203_);
lean_dec_ref(v_e_1186_);
goto v___jp_1197_;
}
else
{
lean_object* v___x_1205_; uint8_t v___x_1206_; 
v___x_1205_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1203_);
v___x_1206_ = l_Lean_Expr_isApp(v___x_1205_);
if (v___x_1206_ == 0)
{
lean_dec_ref(v___x_1205_);
lean_dec_ref(v___x_1203_);
lean_dec_ref(v_e_1186_);
goto v___jp_1197_;
}
else
{
lean_object* v___x_1207_; uint8_t v___x_1208_; 
v___x_1207_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1205_);
v___x_1208_ = l_Lean_Expr_isApp(v___x_1207_);
if (v___x_1208_ == 0)
{
lean_dec_ref(v___x_1207_);
lean_dec_ref(v___x_1205_);
lean_dec_ref(v___x_1203_);
lean_dec_ref(v_e_1186_);
goto v___jp_1197_;
}
else
{
lean_object* v___x_1209_; uint8_t v___x_1210_; 
v___x_1209_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1207_);
v___x_1210_ = l_Lean_Expr_isApp(v___x_1209_);
if (v___x_1210_ == 0)
{
lean_dec_ref(v___x_1209_);
lean_dec_ref(v___x_1207_);
lean_dec_ref(v___x_1205_);
lean_dec_ref(v___x_1203_);
lean_dec_ref(v_e_1186_);
goto v___jp_1197_;
}
else
{
lean_object* v___x_1211_; uint8_t v___x_1212_; 
v___x_1211_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1209_);
v___x_1212_ = l_Lean_Expr_isApp(v___x_1211_);
if (v___x_1212_ == 0)
{
lean_dec_ref(v___x_1211_);
lean_dec_ref(v___x_1209_);
lean_dec_ref(v___x_1207_);
lean_dec_ref(v___x_1205_);
lean_dec_ref(v___x_1203_);
lean_dec_ref(v_e_1186_);
goto v___jp_1197_;
}
else
{
lean_object* v___x_1213_; lean_object* v___x_1214_; uint8_t v___x_1215_; 
v___x_1213_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1211_);
v___x_1214_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpDIte___closed__1));
v___x_1215_ = l_Lean_Expr_isConstOf(v___x_1213_, v___x_1214_);
if (v___x_1215_ == 0)
{
lean_dec_ref(v___x_1213_);
lean_dec_ref(v___x_1211_);
lean_dec_ref(v___x_1209_);
lean_dec_ref(v___x_1207_);
lean_dec_ref(v___x_1205_);
lean_dec_ref(v___x_1203_);
lean_dec_ref(v_e_1186_);
goto v___jp_1197_;
}
else
{
lean_object* v_arg_1216_; 
v_arg_1216_ = lean_ctor_get(v___x_1205_, 1);
lean_inc_ref(v_arg_1216_);
lean_dec_ref(v___x_1205_);
if (lean_obj_tag(v_arg_1216_) == 6)
{
lean_object* v_body_1217_; uint8_t v___x_1218_; 
v_body_1217_ = lean_ctor_get(v_arg_1216_, 2);
lean_inc_ref(v_body_1217_);
lean_dec_ref_known(v_arg_1216_, 3);
v___x_1218_ = l_Lean_Expr_hasLooseBVars(v_body_1217_);
if (v___x_1218_ == 0)
{
lean_object* v_arg_1219_; 
v_arg_1219_ = lean_ctor_get(v___x_1203_, 1);
lean_inc_ref(v_arg_1219_);
lean_dec_ref(v___x_1203_);
if (lean_obj_tag(v_arg_1219_) == 6)
{
lean_object* v_body_1220_; uint8_t v___x_1221_; 
v_body_1220_ = lean_ctor_get(v_arg_1219_, 2);
lean_inc_ref(v_body_1220_);
lean_dec_ref_known(v_arg_1219_, 3);
v___x_1221_ = l_Lean_Expr_hasLooseBVars(v_body_1220_);
if (v___x_1221_ == 0)
{
lean_object* v_arg_1222_; lean_object* v_arg_1223_; lean_object* v_arg_1224_; lean_object* v_us_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v_arg_1222_ = lean_ctor_get(v___x_1207_, 1);
lean_inc_ref_n(v_arg_1222_, 2);
lean_dec_ref(v___x_1207_);
v_arg_1223_ = lean_ctor_get(v___x_1209_, 1);
lean_inc_ref(v_arg_1223_);
lean_dec_ref(v___x_1209_);
v_arg_1224_ = lean_ctor_get(v___x_1211_, 1);
lean_inc_ref(v_arg_1224_);
lean_dec_ref(v___x_1211_);
v_us_1225_ = l_Lean_Expr_constLevels_x21(v___x_1213_);
lean_dec_ref(v___x_1213_);
v___x_1226_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpDIte___closed__2));
v___x_1227_ = lean_unsigned_to_nat(0u);
v___x_1228_ = l_Lean_Expr_proj___override(v___x_1226_, v___x_1227_, v_arg_1222_);
v___x_1229_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpDIte___closed__4, &l_Lean_Meta_Grind_NormSym_simpDIte___closed__4_once, _init_l_Lean_Meta_Grind_NormSym_simpDIte___closed__4);
v___x_1230_ = l_Lean_Meta_Sym_shareCommonWithoutChecks(v___x_1228_, v___x_1229_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_);
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_object* v_a_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v_a_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc(v_a_1231_);
lean_dec_ref_known(v___x_1230_, 1);
v___x_1232_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpDIte___closed__6));
lean_inc(v_us_1225_);
v___x_1233_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___redArg(v___x_1232_, v_us_1225_, v_a_1191_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v_a_1234_; lean_object* v___x_1235_; 
v_a_1234_ = lean_ctor_get(v___x_1233_, 0);
lean_inc(v_a_1234_);
lean_dec_ref_known(v___x_1233_, 1);
lean_inc_ref(v_body_1220_);
lean_inc_ref(v_body_1217_);
lean_inc_ref(v_arg_1224_);
v___x_1235_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Grind_NormSym_simpDIte_spec__0___redArg(v_a_1234_, v_arg_1224_, v_a_1231_, v_body_1217_, v_body_1220_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_a_1236_);
lean_dec_ref_known(v___x_1235_, 1);
v___x_1237_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpDIte___closed__8));
v___x_1238_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_1237_, v_us_1225_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_a_1239_);
lean_dec_ref_known(v___x_1238_, 1);
v___x_1240_ = l_Lean_mkApp5(v_a_1239_, v_arg_1223_, v_arg_1224_, v_body_1217_, v_body_1220_, v_arg_1222_);
lean_inc(v_a_1236_);
v___x_1241_ = l_Lean_Meta_mkEq(v_e_1186_, v_a_1236_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_object* v_a_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1251_; 
v_a_1242_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1244_ = v___x_1241_;
v_isShared_1245_ = v_isSharedCheck_1251_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_a_1242_);
lean_dec(v___x_1241_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1251_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1249_; 
v___x_1246_ = l_Lean_Meta_mkExpectedPropHint(v___x_1240_, v_a_1242_);
v___x_1247_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1247_, 0, v_a_1236_);
lean_ctor_set(v___x_1247_, 1, v___x_1246_);
lean_ctor_set_uint8(v___x_1247_, sizeof(void*)*2, v___x_1221_);
lean_ctor_set_uint8(v___x_1247_, sizeof(void*)*2 + 1, v___x_1221_);
if (v_isShared_1245_ == 0)
{
lean_ctor_set(v___x_1244_, 0, v___x_1247_);
v___x_1249_ = v___x_1244_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v___x_1247_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
else
{
lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1259_; 
lean_dec_ref(v___x_1240_);
lean_dec(v_a_1236_);
v_a_1252_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1254_ = v___x_1241_;
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v___x_1241_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1257_; 
if (v_isShared_1255_ == 0)
{
v___x_1257_ = v___x_1254_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_a_1252_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
return v___x_1257_;
}
}
}
}
else
{
lean_object* v_a_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1267_; 
lean_dec(v_a_1236_);
lean_dec_ref(v_arg_1224_);
lean_dec_ref(v_arg_1223_);
lean_dec_ref(v_arg_1222_);
lean_dec_ref(v_body_1220_);
lean_dec_ref(v_body_1217_);
lean_dec_ref(v_e_1186_);
v_a_1260_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1267_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1262_ = v___x_1238_;
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_a_1260_);
lean_dec(v___x_1238_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1265_; 
if (v_isShared_1263_ == 0)
{
v___x_1265_ = v___x_1262_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_a_1260_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
}
else
{
lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1275_; 
lean_dec(v_us_1225_);
lean_dec_ref(v_arg_1224_);
lean_dec_ref(v_arg_1223_);
lean_dec_ref(v_arg_1222_);
lean_dec_ref(v_body_1220_);
lean_dec_ref(v_body_1217_);
lean_dec_ref(v_e_1186_);
v_a_1268_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1270_ = v___x_1235_;
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_dec(v___x_1235_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1273_; 
if (v_isShared_1271_ == 0)
{
v___x_1273_ = v___x_1270_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_a_1268_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec(v_a_1231_);
lean_dec(v_us_1225_);
lean_dec_ref(v_arg_1224_);
lean_dec_ref(v_arg_1223_);
lean_dec_ref(v_arg_1222_);
lean_dec_ref(v_body_1220_);
lean_dec_ref(v_body_1217_);
lean_dec_ref(v_e_1186_);
v_a_1276_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1233_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1233_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
else
{
lean_object* v_a_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1291_; 
lean_dec(v_us_1225_);
lean_dec_ref(v_arg_1224_);
lean_dec_ref(v_arg_1223_);
lean_dec_ref(v_arg_1222_);
lean_dec_ref(v_body_1220_);
lean_dec_ref(v_body_1217_);
lean_dec_ref(v_e_1186_);
v_a_1284_ = lean_ctor_get(v___x_1230_, 0);
v_isSharedCheck_1291_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1286_ = v___x_1230_;
v_isShared_1287_ = v_isSharedCheck_1291_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_a_1284_);
lean_dec(v___x_1230_);
v___x_1286_ = lean_box(0);
v_isShared_1287_ = v_isSharedCheck_1291_;
goto v_resetjp_1285_;
}
v_resetjp_1285_:
{
lean_object* v___x_1289_; 
if (v_isShared_1287_ == 0)
{
v___x_1289_ = v___x_1286_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v_a_1284_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
return v___x_1289_;
}
}
}
}
else
{
lean_dec_ref(v_body_1220_);
lean_dec_ref(v_body_1217_);
lean_dec_ref(v___x_1213_);
lean_dec_ref(v___x_1211_);
lean_dec_ref(v___x_1209_);
lean_dec_ref(v___x_1207_);
lean_dec_ref(v_e_1186_);
goto v___jp_1200_;
}
}
else
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
lean_dec_ref(v_arg_1219_);
lean_dec_ref(v_body_1217_);
lean_dec_ref(v___x_1213_);
lean_dec_ref(v___x_1211_);
lean_dec_ref(v___x_1209_);
lean_dec_ref(v___x_1207_);
lean_dec_ref(v_e_1186_);
v___x_1292_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1292_, 0, v___x_1218_);
lean_ctor_set_uint8(v___x_1292_, 1, v___x_1218_);
v___x_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
return v___x_1293_;
}
}
else
{
lean_dec_ref(v_body_1217_);
lean_dec_ref(v___x_1213_);
lean_dec_ref(v___x_1211_);
lean_dec_ref(v___x_1209_);
lean_dec_ref(v___x_1207_);
lean_dec_ref(v___x_1203_);
lean_dec_ref(v_e_1186_);
goto v___jp_1200_;
}
}
else
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
lean_dec_ref(v_arg_1216_);
lean_dec_ref(v___x_1213_);
lean_dec_ref(v___x_1211_);
lean_dec_ref(v___x_1209_);
lean_dec_ref(v___x_1207_);
lean_dec_ref(v___x_1203_);
lean_dec_ref(v_e_1186_);
v___x_1294_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
return v___x_1295_;
}
}
}
}
}
}
}
v___jp_1197_:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1198_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
return v___x_1199_;
}
v___jp_1200_:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1201_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_1202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
return v___x_1202_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpDIte___boxed(lean_object* v_e_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_){
_start:
{
lean_object* v_res_1307_; 
v_res_1307_ = l_Lean_Meta_Grind_NormSym_simpDIte(v_e_1296_, v_a_1297_, v_a_1298_, v_a_1299_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_);
lean_dec(v_a_1305_);
lean_dec_ref(v_a_1304_);
lean_dec(v_a_1303_);
lean_dec_ref(v_a_1302_);
lean_dec(v_a_1301_);
lean_dec_ref(v_a_1300_);
lean_dec(v_a_1299_);
lean_dec_ref(v_a_1298_);
lean_dec(v_a_1297_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Grind_NormSym_simpDIte_spec__0(lean_object* v_f_1308_, lean_object* v_a_u2081_1309_, lean_object* v_a_u2082_1310_, lean_object* v_a_u2083_1311_, lean_object* v_a_u2084_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v___x_1323_; 
v___x_1323_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Grind_NormSym_simpDIte_spec__0___redArg(v_f_1308_, v_a_u2081_1309_, v_a_u2082_1310_, v_a_u2083_1311_, v_a_u2084_1312_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Grind_NormSym_simpDIte_spec__0___boxed(lean_object* v_f_1324_, lean_object* v_a_u2081_1325_, lean_object* v_a_u2082_1326_, lean_object* v_a_u2083_1327_, lean_object* v_a_u2084_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Grind_NormSym_simpDIte_spec__0(v_f_1324_, v_a_u2081_1325_, v_a_u2082_1326_, v_a_u2083_1327_, v_a_u2084_1328_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec(v___y_1331_);
lean_dec_ref(v___y_1330_);
lean_dec(v___y_1329_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0___redArg(lean_object* v_x_1340_, uint8_t v_bi_1341_, lean_object* v_t_1342_, lean_object* v_b_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v___y_1352_; lean_object* v___x_1355_; uint8_t v_debug_1356_; 
v___x_1355_ = lean_st_ref_get(v___y_1345_);
v_debug_1356_ = lean_ctor_get_uint8(v___x_1355_, sizeof(void*)*13);
lean_dec(v___x_1355_);
if (v_debug_1356_ == 0)
{
v___y_1352_ = v___y_1345_;
goto v___jp_1351_;
}
else
{
lean_object* v___x_1357_; 
v___x_1357_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_1342_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v___x_1358_; 
lean_dec_ref_known(v___x_1357_, 1);
v___x_1358_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_1343_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_);
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_dec_ref_known(v___x_1358_, 1);
v___y_1352_ = v___y_1345_;
goto v___jp_1351_;
}
else
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
lean_dec_ref(v_b_1343_);
lean_dec_ref(v_t_1342_);
lean_dec(v_x_1340_);
v_a_1359_ = lean_ctor_get(v___x_1358_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1358_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1358_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1358_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1359_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
}
}
else
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
lean_dec_ref(v_b_1343_);
lean_dec_ref(v_t_1342_);
lean_dec(v_x_1340_);
v_a_1367_ = lean_ctor_get(v___x_1357_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1357_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1357_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
}
v___jp_1351_:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1353_ = l_Lean_Expr_lam___override(v_x_1340_, v_t_1342_, v_b_1343_, v_bi_1341_);
v___x_1354_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_1353_, v___y_1352_);
return v___x_1354_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0___redArg___boxed(lean_object* v_x_1375_, lean_object* v_bi_1376_, lean_object* v_t_1377_, lean_object* v_b_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
uint8_t v_bi_boxed_1386_; lean_object* v_res_1387_; 
v_bi_boxed_1386_ = lean_unbox(v_bi_1376_);
v_res_1387_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0___redArg(v_x_1375_, v_bi_boxed_1386_, v_t_1377_, v_b_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
lean_dec(v___y_1384_);
lean_dec_ref(v___y_1383_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0(lean_object* v_x_1388_, uint8_t v_bi_1389_, lean_object* v_t_1390_, lean_object* v_b_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v___x_1402_; 
v___x_1402_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0___redArg(v_x_1388_, v_bi_1389_, v_t_1390_, v_b_1391_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0___boxed(lean_object* v_x_1403_, lean_object* v_bi_1404_, lean_object* v_t_1405_, lean_object* v_b_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
uint8_t v_bi_boxed_1417_; lean_object* v_res_1418_; 
v_bi_boxed_1417_ = lean_unbox(v_bi_1404_);
v_res_1418_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0(v_x_1403_, v_bi_boxed_1417_, v_t_1405_, v_b_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_);
lean_dec(v___y_1415_);
lean_dec_ref(v___y_1414_);
lean_dec(v___y_1413_);
lean_dec_ref(v___y_1412_);
lean_dec(v___y_1411_);
lean_dec_ref(v___y_1410_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__1___redArg(lean_object* v_idx_1419_, lean_object* v___y_1420_){
_start:
{
lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1422_ = l_Lean_Expr_bvar___override(v_idx_1419_);
v___x_1423_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_1422_, v___y_1420_);
return v___x_1423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__1___redArg___boxed(lean_object* v_idx_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__1___redArg(v_idx_1424_, v___y_1425_);
lean_dec(v___y_1425_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__1(lean_object* v_idx_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__1___redArg(v_idx_1428_, v___y_1433_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__1___boxed(lean_object* v_idx_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v_res_1451_; 
v_res_1451_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__1(v_idx_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_);
lean_dec(v___y_1449_);
lean_dec_ref(v___y_1448_);
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
lean_dec(v___y_1443_);
lean_dec_ref(v___y_1442_);
lean_dec(v___y_1441_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2___redArg(lean_object* v_x_1452_, uint8_t v_bi_1453_, lean_object* v_t_1454_, lean_object* v_b_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v___y_1464_; lean_object* v___x_1467_; uint8_t v_debug_1468_; 
v___x_1467_ = lean_st_ref_get(v___y_1457_);
v_debug_1468_ = lean_ctor_get_uint8(v___x_1467_, sizeof(void*)*13);
lean_dec(v___x_1467_);
if (v_debug_1468_ == 0)
{
v___y_1464_ = v___y_1457_;
goto v___jp_1463_;
}
else
{
lean_object* v___x_1469_; 
v___x_1469_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_1454_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_);
if (lean_obj_tag(v___x_1469_) == 0)
{
lean_object* v___x_1470_; 
lean_dec_ref_known(v___x_1469_, 1);
v___x_1470_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_dec_ref_known(v___x_1470_, 1);
v___y_1464_ = v___y_1457_;
goto v___jp_1463_;
}
else
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
lean_dec_ref(v_b_1455_);
lean_dec_ref(v_t_1454_);
lean_dec(v_x_1452_);
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v___x_1470_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1470_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1476_; 
if (v_isShared_1474_ == 0)
{
v___x_1476_ = v___x_1473_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v_a_1471_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
lean_dec_ref(v_b_1455_);
lean_dec_ref(v_t_1454_);
lean_dec(v_x_1452_);
v_a_1479_ = lean_ctor_get(v___x_1469_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1469_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1469_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
}
v___jp_1463_:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1465_ = l_Lean_Expr_forallE___override(v_x_1452_, v_t_1454_, v_b_1455_, v_bi_1453_);
v___x_1466_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_1465_, v___y_1464_);
return v___x_1466_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2___redArg___boxed(lean_object* v_x_1487_, lean_object* v_bi_1488_, lean_object* v_t_1489_, lean_object* v_b_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
uint8_t v_bi_boxed_1498_; lean_object* v_res_1499_; 
v_bi_boxed_1498_ = lean_unbox(v_bi_1488_);
v_res_1499_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2___redArg(v_x_1487_, v_bi_boxed_1498_, v_t_1489_, v_b_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_);
lean_dec(v___y_1496_);
lean_dec_ref(v___y_1495_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2(lean_object* v_x_1500_, uint8_t v_bi_1501_, lean_object* v_t_1502_, lean_object* v_b_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v___x_1514_; 
v___x_1514_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2___redArg(v_x_1500_, v_bi_1501_, v_t_1502_, v_b_1503_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2___boxed(lean_object* v_x_1515_, lean_object* v_bi_1516_, lean_object* v_t_1517_, lean_object* v_b_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
uint8_t v_bi_boxed_1529_; lean_object* v_res_1530_; 
v_bi_boxed_1529_ = lean_unbox(v_bi_1516_);
v_res_1530_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2(v_x_1515_, v_bi_boxed_1529_, v_t_1517_, v_b_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
lean_dec(v___y_1523_);
lean_dec_ref(v___y_1522_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec(v___y_1519_);
return v_res_1530_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__4(void){
_start:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1541_ = lean_box(0);
v___x_1542_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__3));
v___x_1543_ = l_Lean_mkConst(v___x_1542_, v___x_1541_);
return v___x_1543_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__13(void){
_start:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1558_ = lean_box(0);
v___x_1559_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__12));
v___x_1560_ = l_Lean_mkConst(v___x_1559_, v___x_1558_);
return v___x_1560_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__16(void){
_start:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
v___x_1566_ = lean_box(0);
v___x_1567_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__15));
v___x_1568_ = l_Lean_mkConst(v___x_1567_, v___x_1566_);
return v___x_1568_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__19(void){
_start:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1573_ = lean_box(0);
v___x_1574_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__18));
v___x_1575_ = l_Lean_mkConst(v___x_1574_, v___x_1573_);
return v___x_1575_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__22(void){
_start:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___x_1580_ = lean_box(0);
v___x_1581_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__21));
v___x_1582_ = l_Lean_mkConst(v___x_1581_, v___x_1580_);
return v___x_1582_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__25(void){
_start:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1588_ = lean_box(0);
v___x_1589_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__24));
v___x_1590_ = l_Lean_mkConst(v___x_1589_, v___x_1588_);
return v___x_1590_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__28(void){
_start:
{
lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1596_ = lean_box(0);
v___x_1597_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__27));
v___x_1598_ = l_Lean_mkConst(v___x_1597_, v___x_1596_);
return v___x_1598_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__31(void){
_start:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1604_ = lean_box(0);
v___x_1605_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__30));
v___x_1606_ = l_Lean_mkConst(v___x_1605_, v___x_1604_);
return v___x_1606_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__38(void){
_start:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
v___x_1620_ = lean_box(0);
v___x_1621_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__37));
v___x_1622_ = l_Lean_mkConst(v___x_1621_, v___x_1620_);
return v___x_1622_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__41(void){
_start:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1628_ = lean_box(0);
v___x_1629_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__40));
v___x_1630_ = l_Lean_mkConst(v___x_1629_, v___x_1628_);
return v___x_1630_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__44(void){
_start:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1636_ = lean_box(0);
v___x_1637_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__43));
v___x_1638_ = l_Lean_mkConst(v___x_1637_, v___x_1636_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_pushNot(lean_object* v_e_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_){
_start:
{
lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v___y_1653_; lean_object* v___y_1654_; lean_object* v___y_1655_; lean_object* v___y_1656_; lean_object* v___y_1657_; lean_object* v___y_1658_; lean_object* v___y_1659_; lean_object* v___y_1660_; lean_object* v___y_1661_; uint8_t v___y_1662_; lean_object* v___y_1663_; uint8_t v___y_1664_; lean_object* v___x_1722_; uint8_t v___x_1723_; 
v___x_1722_ = l_Lean_Expr_cleanupAnnotations(v_e_1639_);
v___x_1723_ = l_Lean_Expr_isApp(v___x_1722_);
if (v___x_1723_ == 0)
{
lean_dec_ref(v___x_1722_);
lean_dec_ref(v_e_1639_);
goto v___jp_1719_;
}
else
{
lean_object* v___x_1724_; lean_object* v___x_1725_; uint8_t v___x_1726_; 
v___x_1724_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1722_);
v___x_1725_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS___closed__1));
v___x_1726_ = l_Lean_Expr_isConstOf(v___x_1724_, v___x_1725_);
lean_dec_ref(v___x_1724_);
if (v___x_1726_ == 0)
{
lean_dec_ref(v___x_1722_);
lean_dec_ref(v_e_1639_);
goto v___jp_1719_;
}
else
{
lean_object* v_arg_1727_; lean_object* v___y_1729_; lean_object* v___y_1730_; lean_object* v___y_1731_; lean_object* v___y_1732_; lean_object* v___y_1733_; lean_object* v___y_1734_; lean_object* v___y_1735_; lean_object* v___y_1736_; lean_object* v___y_1737_; lean_object* v___x_1788_; 
v_arg_1727_ = lean_ctor_get(v___x_1722_, 1);
lean_inc_ref_n(v_arg_1727_, 2);
lean_dec_ref(v___x_1722_);
v___x_1788_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_1727_, v_a_1646_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_2250_; 
v_a_1789_ = lean_ctor_get(v___x_1788_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_1791_ = v___x_1788_;
v_isShared_1792_ = v_isSharedCheck_2250_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_a_1789_);
lean_dec(v___x_1788_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_2250_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; uint8_t v___x_1795_; 
v___x_1793_ = l_Lean_Expr_cleanupAnnotations(v_a_1789_);
lean_dec(v_a_1789_);
v___x_1794_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__6));
v___x_1795_ = l_Lean_Expr_isConstOf(v___x_1793_, v___x_1794_);
if (v___x_1795_ == 0)
{
lean_object* v___x_1796_; uint8_t v___x_1797_; 
v___x_1796_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__8));
v___x_1797_ = l_Lean_Expr_isConstOf(v___x_1793_, v___x_1796_);
if (v___x_1797_ == 0)
{
uint8_t v___x_1798_; 
v___x_1798_ = l_Lean_Expr_isApp(v___x_1793_);
if (v___x_1798_ == 0)
{
lean_dec_ref(v___x_1793_);
lean_del_object(v___x_1791_);
lean_dec_ref(v_e_1639_);
v___y_1729_ = v_a_1640_;
v___y_1730_ = v_a_1641_;
v___y_1731_ = v_a_1642_;
v___y_1732_ = v_a_1643_;
v___y_1733_ = v_a_1644_;
v___y_1734_ = v_a_1645_;
v___y_1735_ = v_a_1646_;
v___y_1736_ = v_a_1647_;
v___y_1737_ = v_a_1648_;
goto v___jp_1728_;
}
else
{
lean_object* v_arg_1799_; lean_object* v___x_1800_; uint8_t v___x_1801_; 
v_arg_1799_ = lean_ctor_get(v___x_1793_, 1);
lean_inc_ref(v_arg_1799_);
v___x_1800_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1793_);
lean_dec_ref(v___x_1793_);
v___x_1801_ = l_Lean_Expr_isConstOf(v___x_1800_, v___x_1725_);
if (v___x_1801_ == 0)
{
uint8_t v___x_1802_; 
lean_del_object(v___x_1791_);
v___x_1802_ = l_Lean_Expr_isApp(v___x_1800_);
if (v___x_1802_ == 0)
{
lean_dec_ref(v___x_1800_);
lean_dec_ref(v_arg_1799_);
lean_dec_ref(v_e_1639_);
v___y_1729_ = v_a_1640_;
v___y_1730_ = v_a_1641_;
v___y_1731_ = v_a_1642_;
v___y_1732_ = v_a_1643_;
v___y_1733_ = v_a_1644_;
v___y_1734_ = v_a_1645_;
v___y_1735_ = v_a_1646_;
v___y_1736_ = v_a_1647_;
v___y_1737_ = v_a_1648_;
goto v___jp_1728_;
}
else
{
lean_object* v_arg_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; uint8_t v___x_1806_; 
v_arg_1803_ = lean_ctor_get(v___x_1800_, 1);
lean_inc_ref(v_arg_1803_);
v___x_1804_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1800_);
lean_dec_ref(v___x_1800_);
v___x_1805_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg___closed__1));
v___x_1806_ = l_Lean_Expr_isConstOf(v___x_1804_, v___x_1805_);
if (v___x_1806_ == 0)
{
lean_object* v___x_1807_; uint8_t v___x_1808_; 
v___x_1807_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___closed__1));
v___x_1808_ = l_Lean_Expr_isConstOf(v___x_1804_, v___x_1807_);
if (v___x_1808_ == 0)
{
lean_object* v___x_1809_; uint8_t v___x_1810_; 
v___x_1809_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS___closed__1));
v___x_1810_ = l_Lean_Expr_isConstOf(v___x_1804_, v___x_1809_);
if (v___x_1810_ == 0)
{
uint8_t v___x_1811_; 
v___x_1811_ = l_Lean_Expr_isApp(v___x_1804_);
if (v___x_1811_ == 0)
{
lean_dec_ref(v___x_1804_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
lean_dec_ref(v_e_1639_);
v___y_1729_ = v_a_1640_;
v___y_1730_ = v_a_1641_;
v___y_1731_ = v_a_1642_;
v___y_1732_ = v_a_1643_;
v___y_1733_ = v_a_1644_;
v___y_1734_ = v_a_1645_;
v___y_1735_ = v_a_1646_;
v___y_1736_ = v_a_1647_;
v___y_1737_ = v_a_1648_;
goto v___jp_1728_;
}
else
{
lean_object* v_arg_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; uint8_t v___x_1815_; 
v_arg_1812_ = lean_ctor_get(v___x_1804_, 1);
lean_inc_ref(v_arg_1812_);
v___x_1813_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1804_);
lean_dec_ref(v___x_1804_);
v___x_1814_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpEq___closed__1));
v___x_1815_ = l_Lean_Expr_isConstOf(v___x_1813_, v___x_1814_);
if (v___x_1815_ == 0)
{
uint8_t v___x_1816_; 
v___x_1816_ = l_Lean_Expr_isApp(v___x_1813_);
if (v___x_1816_ == 0)
{
lean_dec_ref(v___x_1813_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
lean_dec_ref(v_e_1639_);
v___y_1729_ = v_a_1640_;
v___y_1730_ = v_a_1641_;
v___y_1731_ = v_a_1642_;
v___y_1732_ = v_a_1643_;
v___y_1733_ = v_a_1644_;
v___y_1734_ = v_a_1645_;
v___y_1735_ = v_a_1646_;
v___y_1736_ = v_a_1647_;
v___y_1737_ = v_a_1648_;
goto v___jp_1728_;
}
else
{
lean_object* v_arg_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; uint8_t v___x_1820_; 
v_arg_1817_ = lean_ctor_get(v___x_1813_, 1);
lean_inc_ref(v_arg_1817_);
v___x_1818_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1813_);
lean_dec_ref(v___x_1813_);
v___x_1819_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpDIte___closed__6));
v___x_1820_ = l_Lean_Expr_isConstOf(v___x_1818_, v___x_1819_);
if (v___x_1820_ == 0)
{
uint8_t v___x_1821_; 
v___x_1821_ = l_Lean_Expr_isApp(v___x_1818_);
if (v___x_1821_ == 0)
{
lean_dec_ref(v___x_1818_);
lean_dec_ref(v_arg_1817_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
lean_dec_ref(v_e_1639_);
v___y_1729_ = v_a_1640_;
v___y_1730_ = v_a_1641_;
v___y_1731_ = v_a_1642_;
v___y_1732_ = v_a_1643_;
v___y_1733_ = v_a_1644_;
v___y_1734_ = v_a_1645_;
v___y_1735_ = v_a_1646_;
v___y_1736_ = v_a_1647_;
v___y_1737_ = v_a_1648_;
goto v___jp_1728_;
}
else
{
lean_object* v___x_1822_; lean_object* v___x_1823_; uint8_t v___x_1824_; 
v___x_1822_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1818_);
v___x_1823_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__10));
v___x_1824_ = l_Lean_Expr_isConstOf(v___x_1822_, v___x_1823_);
if (v___x_1824_ == 0)
{
lean_dec_ref(v___x_1822_);
lean_dec_ref(v___x_1818_);
lean_dec_ref(v_arg_1817_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
lean_dec_ref(v_e_1639_);
v___y_1729_ = v_a_1640_;
v___y_1730_ = v_a_1641_;
v___y_1731_ = v_a_1642_;
v___y_1732_ = v_a_1643_;
v___y_1733_ = v_a_1644_;
v___y_1734_ = v_a_1645_;
v___y_1735_ = v_a_1646_;
v___y_1736_ = v_a_1647_;
v___y_1737_ = v_a_1648_;
goto v___jp_1728_;
}
else
{
lean_object* v_arg_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
lean_dec_ref(v_arg_1727_);
v_arg_1825_ = lean_ctor_get(v___x_1818_, 1);
lean_inc_ref(v_arg_1825_);
lean_dec_ref(v___x_1818_);
v___x_1826_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpDIte___closed__2));
v___x_1827_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_arg_1812_);
v___x_1828_ = l_Lean_Expr_proj___override(v___x_1826_, v___x_1827_, v_arg_1812_);
v___x_1829_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpDIte___closed__4, &l_Lean_Meta_Grind_NormSym_simpDIte___closed__4_once, _init_l_Lean_Meta_Grind_NormSym_simpDIte___closed__4);
v___x_1830_ = l_Lean_Meta_Sym_shareCommonWithoutChecks(v___x_1828_, v___x_1829_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v_a_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
v_a_1831_ = lean_ctor_get(v___x_1830_, 0);
lean_inc(v_a_1831_);
lean_dec_ref_known(v___x_1830_, 1);
v___x_1832_ = l_Lean_Expr_constLevels_x21(v___x_1822_);
lean_dec_ref(v___x_1822_);
v___x_1833_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___redArg(v___x_1819_, v___x_1832_, v_a_1644_);
if (lean_obj_tag(v___x_1833_) == 0)
{
lean_object* v_a_1834_; lean_object* v___x_1835_; 
v_a_1834_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_a_1834_);
lean_dec_ref_known(v___x_1833_, 1);
lean_inc_ref(v_arg_1803_);
v___x_1835_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v_arg_1803_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v_a_1836_; lean_object* v___x_1837_; 
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
lean_inc(v_a_1836_);
lean_dec_ref_known(v___x_1835_, 1);
lean_inc_ref(v_arg_1799_);
v___x_1837_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v_arg_1799_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; lean_object* v___x_1839_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_a_1838_);
lean_dec_ref_known(v___x_1837_, 1);
v___x_1839_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Grind_NormSym_simpDIte_spec__0___redArg(v_a_1834_, v_arg_1825_, v_a_1831_, v_a_1836_, v_a_1838_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_object* v_a_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v_a_1840_ = lean_ctor_get(v___x_1839_, 0);
lean_inc_n(v_a_1840_, 2);
lean_dec_ref_known(v___x_1839_, 1);
v___x_1841_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_pushNot___closed__13, &l_Lean_Meta_Grind_NormSym_pushNot___closed__13_once, _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__13);
v___x_1842_ = l_Lean_mkApp4(v___x_1841_, v_arg_1817_, v_arg_1812_, v_arg_1803_, v_arg_1799_);
v___x_1843_ = l_Lean_Meta_mkEq(v_e_1639_, v_a_1840_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_1843_) == 0)
{
lean_object* v_a_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1853_; 
v_a_1844_ = lean_ctor_get(v___x_1843_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1843_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1846_ = v___x_1843_;
v_isShared_1847_ = v_isSharedCheck_1853_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_a_1844_);
lean_dec(v___x_1843_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1853_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1851_; 
v___x_1848_ = l_Lean_Meta_mkExpectedPropHint(v___x_1842_, v_a_1844_);
v___x_1849_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1849_, 0, v_a_1840_);
lean_ctor_set(v___x_1849_, 1, v___x_1848_);
lean_ctor_set_uint8(v___x_1849_, sizeof(void*)*2, v___x_1820_);
lean_ctor_set_uint8(v___x_1849_, sizeof(void*)*2 + 1, v___x_1820_);
if (v_isShared_1847_ == 0)
{
lean_ctor_set(v___x_1846_, 0, v___x_1849_);
v___x_1851_ = v___x_1846_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v___x_1849_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
else
{
lean_object* v_a_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1861_; 
lean_dec_ref(v___x_1842_);
lean_dec(v_a_1840_);
v_a_1854_ = lean_ctor_get(v___x_1843_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1843_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1856_ = v___x_1843_;
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_a_1854_);
lean_dec(v___x_1843_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1859_; 
if (v_isShared_1857_ == 0)
{
v___x_1859_ = v___x_1856_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_a_1854_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
}
else
{
lean_object* v_a_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1869_; 
lean_dec_ref(v_arg_1817_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
lean_dec_ref(v_e_1639_);
v_a_1862_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1864_ = v___x_1839_;
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_a_1862_);
lean_dec(v___x_1839_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1867_; 
if (v_isShared_1865_ == 0)
{
v___x_1867_ = v___x_1864_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_a_1862_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
return v___x_1867_;
}
}
}
}
else
{
lean_object* v_a_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1877_; 
lean_dec(v_a_1836_);
lean_dec(v_a_1834_);
lean_dec(v_a_1831_);
lean_dec_ref(v_arg_1825_);
lean_dec_ref(v_arg_1817_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
lean_dec_ref(v_e_1639_);
v_a_1870_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1872_ = v___x_1837_;
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_a_1870_);
lean_dec(v___x_1837_);
v___x_1872_ = lean_box(0);
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
v_resetjp_1871_:
{
lean_object* v___x_1875_; 
if (v_isShared_1873_ == 0)
{
v___x_1875_ = v___x_1872_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_a_1870_);
v___x_1875_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
return v___x_1875_;
}
}
}
}
else
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1885_; 
lean_dec(v_a_1834_);
lean_dec(v_a_1831_);
lean_dec_ref(v_arg_1825_);
lean_dec_ref(v_arg_1817_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
lean_dec_ref(v_e_1639_);
v_a_1878_ = lean_ctor_get(v___x_1835_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1880_ = v___x_1835_;
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v___x_1835_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1883_; 
if (v_isShared_1881_ == 0)
{
v___x_1883_ = v___x_1880_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v_a_1878_);
v___x_1883_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
return v___x_1883_;
}
}
}
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
lean_dec(v_a_1831_);
lean_dec_ref(v_arg_1825_);
lean_dec_ref(v_arg_1817_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
lean_dec_ref(v_e_1639_);
v_a_1886_ = lean_ctor_get(v___x_1833_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1833_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1833_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1833_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1886_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
}
else
{
lean_object* v_a_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1901_; 
lean_dec_ref(v_arg_1825_);
lean_dec_ref(v___x_1822_);
lean_dec_ref(v_arg_1817_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
lean_dec_ref(v_e_1639_);
v_a_1894_ = lean_ctor_get(v___x_1830_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1830_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1896_ = v___x_1830_;
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_a_1894_);
lean_dec(v___x_1830_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1899_; 
if (v_isShared_1897_ == 0)
{
v___x_1899_ = v___x_1896_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_a_1894_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
}
}
}
}
else
{
lean_object* v___x_1902_; 
lean_dec_ref(v_arg_1727_);
lean_dec_ref(v_e_1639_);
lean_inc_ref(v_arg_1803_);
v___x_1902_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v_arg_1803_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v_a_1903_; lean_object* v___x_1904_; 
v_a_1903_ = lean_ctor_get(v___x_1902_, 0);
lean_inc(v_a_1903_);
lean_dec_ref_known(v___x_1902_, 1);
lean_inc_ref(v_arg_1799_);
v___x_1904_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v_arg_1799_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_1904_) == 0)
{
lean_object* v_a_1905_; lean_object* v___x_1906_; 
v_a_1905_ = lean_ctor_get(v___x_1904_, 0);
lean_inc(v_a_1905_);
lean_dec_ref_known(v___x_1904_, 1);
lean_inc_ref(v_arg_1812_);
v___x_1906_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Grind_NormSym_simpDIte_spec__0___redArg(v___x_1818_, v_arg_1817_, v_arg_1812_, v_a_1903_, v_a_1905_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1917_; 
v_a_1907_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1909_ = v___x_1906_;
v_isShared_1910_ = v_isSharedCheck_1917_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1906_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1917_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1915_; 
v___x_1911_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_pushNot___closed__16, &l_Lean_Meta_Grind_NormSym_pushNot___closed__16_once, _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__16);
v___x_1912_ = l_Lean_mkApp3(v___x_1911_, v_arg_1812_, v_arg_1803_, v_arg_1799_);
v___x_1913_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1913_, 0, v_a_1907_);
lean_ctor_set(v___x_1913_, 1, v___x_1912_);
lean_ctor_set_uint8(v___x_1913_, sizeof(void*)*2, v___x_1815_);
lean_ctor_set_uint8(v___x_1913_, sizeof(void*)*2 + 1, v___x_1815_);
if (v_isShared_1910_ == 0)
{
lean_ctor_set(v___x_1909_, 0, v___x_1913_);
v___x_1915_ = v___x_1909_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v___x_1913_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
else
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_1918_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1920_ = v___x_1906_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v___x_1906_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1923_; 
if (v_isShared_1921_ == 0)
{
v___x_1923_ = v___x_1920_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v_a_1918_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
}
else
{
lean_object* v_a_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1933_; 
lean_dec(v_a_1903_);
lean_dec_ref(v___x_1818_);
lean_dec_ref(v_arg_1817_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_1926_ = lean_ctor_get(v___x_1904_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1904_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1928_ = v___x_1904_;
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_a_1926_);
lean_dec(v___x_1904_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v___x_1931_; 
if (v_isShared_1929_ == 0)
{
v___x_1931_ = v___x_1928_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_a_1926_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
}
else
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1941_; 
lean_dec_ref(v___x_1818_);
lean_dec_ref(v_arg_1817_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_1934_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1936_ = v___x_1902_;
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1902_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1939_; 
if (v_isShared_1937_ == 0)
{
v___x_1939_ = v___x_1936_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_a_1934_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
}
}
else
{
uint8_t v___x_1942_; 
lean_dec_ref(v_arg_1727_);
lean_dec_ref(v_e_1639_);
v___x_1942_ = l_Lean_Expr_isProp(v_arg_1812_);
if (v___x_1942_ == 0)
{
lean_object* v___x_1943_; 
v___x_1943_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_1799_, v_a_1646_);
if (lean_obj_tag(v___x_1943_) == 0)
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_2017_; 
v_a_1944_ = lean_ctor_get(v___x_1943_, 0);
v_isSharedCheck_2017_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_1946_ = v___x_1943_;
v_isShared_1947_ = v_isSharedCheck_2017_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1943_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_2017_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; uint8_t v___x_1950_; 
v___x_1948_ = l_Lean_Expr_cleanupAnnotations(v_a_1944_);
lean_dec(v_a_1944_);
v___x_1949_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpEq___closed__11));
v___x_1950_ = l_Lean_Expr_isConstOf(v___x_1948_, v___x_1949_);
if (v___x_1950_ == 0)
{
lean_object* v___x_1951_; uint8_t v___x_1952_; 
v___x_1951_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpEq___closed__9));
v___x_1952_ = l_Lean_Expr_isConstOf(v___x_1948_, v___x_1951_);
lean_dec_ref(v___x_1948_);
if (v___x_1952_ == 0)
{
lean_object* v___x_1953_; lean_object* v___x_1955_; 
lean_dec_ref(v___x_1813_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
v___x_1953_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1953_, 0, v___x_1952_);
lean_ctor_set_uint8(v___x_1953_, 1, v___x_1952_);
if (v_isShared_1947_ == 0)
{
lean_ctor_set(v___x_1946_, 0, v___x_1953_);
v___x_1955_ = v___x_1946_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v___x_1953_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
else
{
lean_object* v___x_1957_; 
lean_del_object(v___x_1946_);
v___x_1957_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_1643_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; lean_object* v___x_1959_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
lean_inc(v_a_1958_);
lean_dec_ref_known(v___x_1957_, 1);
lean_inc_ref(v_arg_1803_);
v___x_1959_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___redArg(v___x_1813_, v_arg_1812_, v_arg_1803_, v_a_1958_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_1959_) == 0)
{
lean_object* v_a_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1970_; 
v_a_1960_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1962_ = v___x_1959_;
v_isShared_1963_ = v_isSharedCheck_1970_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_a_1960_);
lean_dec(v___x_1959_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1970_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1968_; 
v___x_1964_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_pushNot___closed__19, &l_Lean_Meta_Grind_NormSym_pushNot___closed__19_once, _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__19);
v___x_1965_ = l_Lean_Expr_app___override(v___x_1964_, v_arg_1803_);
v___x_1966_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1966_, 0, v_a_1960_);
lean_ctor_set(v___x_1966_, 1, v___x_1965_);
lean_ctor_set_uint8(v___x_1966_, sizeof(void*)*2, v___x_1950_);
lean_ctor_set_uint8(v___x_1966_, sizeof(void*)*2 + 1, v___x_1950_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 0, v___x_1966_);
v___x_1968_ = v___x_1962_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v___x_1966_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
}
else
{
lean_object* v_a_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1978_; 
lean_dec_ref(v_arg_1803_);
v_a_1971_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_1978_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_1978_ == 0)
{
v___x_1973_ = v___x_1959_;
v_isShared_1974_ = v_isSharedCheck_1978_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_a_1971_);
lean_dec(v___x_1959_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1978_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v___x_1976_; 
if (v_isShared_1974_ == 0)
{
v___x_1976_ = v___x_1973_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_a_1971_);
v___x_1976_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
return v___x_1976_;
}
}
}
}
else
{
lean_object* v_a_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1986_; 
lean_dec_ref(v___x_1813_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
v_a_1979_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1986_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1986_ == 0)
{
v___x_1981_ = v___x_1957_;
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_a_1979_);
lean_dec(v___x_1957_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1984_; 
if (v_isShared_1982_ == 0)
{
v___x_1984_ = v___x_1981_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v_a_1979_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
return v___x_1984_;
}
}
}
}
}
else
{
lean_object* v___x_1987_; 
lean_dec_ref(v___x_1948_);
lean_del_object(v___x_1946_);
v___x_1987_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_1643_);
if (lean_obj_tag(v___x_1987_) == 0)
{
lean_object* v_a_1988_; lean_object* v___x_1989_; 
v_a_1988_ = lean_ctor_get(v___x_1987_, 0);
lean_inc(v_a_1988_);
lean_dec_ref_known(v___x_1987_, 1);
lean_inc_ref(v_arg_1803_);
v___x_1989_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___redArg(v___x_1813_, v_arg_1812_, v_arg_1803_, v_a_1988_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_2000_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2000_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2000_ == 0)
{
v___x_1992_ = v___x_1989_;
v_isShared_1993_ = v_isSharedCheck_2000_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_a_1990_);
lean_dec(v___x_1989_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_2000_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1998_; 
v___x_1994_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_pushNot___closed__22, &l_Lean_Meta_Grind_NormSym_pushNot___closed__22_once, _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__22);
v___x_1995_ = l_Lean_Expr_app___override(v___x_1994_, v_arg_1803_);
v___x_1996_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1996_, 0, v_a_1990_);
lean_ctor_set(v___x_1996_, 1, v___x_1995_);
lean_ctor_set_uint8(v___x_1996_, sizeof(void*)*2, v___x_1942_);
lean_ctor_set_uint8(v___x_1996_, sizeof(void*)*2 + 1, v___x_1942_);
if (v_isShared_1993_ == 0)
{
lean_ctor_set(v___x_1992_, 0, v___x_1996_);
v___x_1998_ = v___x_1992_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v___x_1996_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
else
{
lean_object* v_a_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2008_; 
lean_dec_ref(v_arg_1803_);
v_a_2001_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2008_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2008_ == 0)
{
v___x_2003_ = v___x_1989_;
v_isShared_2004_ = v_isSharedCheck_2008_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_a_2001_);
lean_dec(v___x_1989_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2008_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2006_; 
if (v_isShared_2004_ == 0)
{
v___x_2006_ = v___x_2003_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v_a_2001_);
v___x_2006_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
return v___x_2006_;
}
}
}
}
else
{
lean_object* v_a_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2016_; 
lean_dec_ref(v___x_1813_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
v_a_2009_ = lean_ctor_get(v___x_1987_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_1987_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_2011_ = v___x_1987_;
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_a_2009_);
lean_dec(v___x_1987_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v___x_2014_; 
if (v_isShared_2012_ == 0)
{
v___x_2014_ = v___x_2011_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v_a_2009_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
}
}
}
}
else
{
lean_object* v_a_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2025_; 
lean_dec_ref(v___x_1813_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
v_a_2018_ = lean_ctor_get(v___x_1943_, 0);
v_isSharedCheck_2025_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_2020_ = v___x_1943_;
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_a_2018_);
lean_dec(v___x_1943_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2023_; 
if (v_isShared_2021_ == 0)
{
v___x_2023_ = v___x_2020_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v_a_2018_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
return v___x_2023_;
}
}
}
}
else
{
lean_object* v___x_2026_; 
lean_inc_ref(v_arg_1799_);
v___x_2026_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v_arg_1799_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_2026_) == 0)
{
lean_object* v_a_2027_; lean_object* v___x_2028_; 
v_a_2027_ = lean_ctor_get(v___x_2026_, 0);
lean_inc(v_a_2027_);
lean_dec_ref_known(v___x_2026_, 1);
lean_inc_ref(v_arg_1803_);
v___x_2028_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Grind_NormSym_simpEq_spec__0___redArg(v___x_1813_, v_arg_1812_, v_arg_1803_, v_a_2027_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2039_; 
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2031_ = v___x_2028_;
v_isShared_2032_ = v_isSharedCheck_2039_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_2028_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2039_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2037_; 
v___x_2033_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_pushNot___closed__25, &l_Lean_Meta_Grind_NormSym_pushNot___closed__25_once, _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__25);
v___x_2034_ = l_Lean_mkAppB(v___x_2033_, v_arg_1803_, v_arg_1799_);
v___x_2035_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2035_, 0, v_a_2029_);
lean_ctor_set(v___x_2035_, 1, v___x_2034_);
lean_ctor_set_uint8(v___x_2035_, sizeof(void*)*2, v___x_1810_);
lean_ctor_set_uint8(v___x_2035_, sizeof(void*)*2 + 1, v___x_1810_);
if (v_isShared_2032_ == 0)
{
lean_ctor_set(v___x_2031_, 0, v___x_2035_);
v___x_2037_ = v___x_2031_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v___x_2035_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
}
else
{
lean_object* v_a_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2047_; 
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_2040_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2042_ = v___x_2028_;
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_a_2040_);
lean_dec(v___x_2028_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v___x_2045_; 
if (v_isShared_2043_ == 0)
{
v___x_2045_ = v___x_2042_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v_a_2040_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
}
}
else
{
lean_object* v_a_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2055_; 
lean_dec_ref(v___x_1813_);
lean_dec_ref(v_arg_1812_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_2048_ = lean_ctor_get(v___x_2026_, 0);
v_isSharedCheck_2055_ = !lean_is_exclusive(v___x_2026_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2050_ = v___x_2026_;
v_isShared_2051_ = v_isSharedCheck_2055_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_a_2048_);
lean_dec(v___x_2026_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2055_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v___x_2053_; 
if (v_isShared_2051_ == 0)
{
v___x_2053_ = v___x_2050_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v_a_2048_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
return v___x_2053_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2056_; 
lean_dec_ref(v___x_1804_);
lean_dec_ref(v_arg_1727_);
lean_dec_ref(v_e_1639_);
lean_inc_ref(v_arg_1803_);
v___x_2056_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v_arg_1803_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_2056_) == 0)
{
lean_object* v_a_2057_; lean_object* v___x_2058_; 
v_a_2057_ = lean_ctor_get(v___x_2056_, 0);
lean_inc(v_a_2057_);
lean_dec_ref_known(v___x_2056_, 1);
lean_inc_ref(v_arg_1799_);
v___x_2058_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v_arg_1799_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v_a_2059_; lean_object* v___x_2060_; 
v_a_2059_ = lean_ctor_get(v___x_2058_, 0);
lean_inc(v_a_2059_);
lean_dec_ref_known(v___x_2058_, 1);
v___x_2060_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg(v_a_2057_, v_a_2059_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2071_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2063_ = v___x_2060_;
v_isShared_2064_ = v_isSharedCheck_2071_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_2060_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2071_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2069_; 
v___x_2065_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_pushNot___closed__28, &l_Lean_Meta_Grind_NormSym_pushNot___closed__28_once, _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__28);
v___x_2066_ = l_Lean_mkAppB(v___x_2065_, v_arg_1803_, v_arg_1799_);
v___x_2067_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2067_, 0, v_a_2061_);
lean_ctor_set(v___x_2067_, 1, v___x_2066_);
lean_ctor_set_uint8(v___x_2067_, sizeof(void*)*2, v___x_1808_);
lean_ctor_set_uint8(v___x_2067_, sizeof(void*)*2 + 1, v___x_1808_);
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 0, v___x_2067_);
v___x_2069_ = v___x_2063_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v___x_2067_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
else
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2079_; 
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_2072_ = lean_ctor_get(v___x_2060_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2074_ = v___x_2060_;
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v___x_2060_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2077_; 
if (v_isShared_2075_ == 0)
{
v___x_2077_ = v___x_2074_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v_a_2072_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
}
}
else
{
lean_object* v_a_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
lean_dec(v_a_2057_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_2080_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2082_ = v___x_2058_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_a_2080_);
lean_dec(v___x_2058_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2080_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
else
{
lean_object* v_a_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2095_; 
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_2088_ = lean_ctor_get(v___x_2056_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___x_2056_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2090_ = v___x_2056_;
v_isShared_2091_ = v_isSharedCheck_2095_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_a_2088_);
lean_dec(v___x_2056_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2095_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2093_; 
if (v_isShared_2091_ == 0)
{
v___x_2093_ = v___x_2090_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_a_2088_);
v___x_2093_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
return v___x_2093_;
}
}
}
}
}
else
{
lean_object* v___x_2096_; 
lean_dec_ref(v___x_1804_);
lean_dec_ref(v_arg_1727_);
lean_dec_ref(v_e_1639_);
lean_inc_ref(v_arg_1803_);
v___x_2096_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v_arg_1803_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v_a_2097_; lean_object* v___x_2098_; 
v_a_2097_ = lean_ctor_get(v___x_2096_, 0);
lean_inc(v_a_2097_);
lean_dec_ref_known(v___x_2096_, 1);
lean_inc_ref(v_arg_1799_);
v___x_2098_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v_arg_1799_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_2098_) == 0)
{
lean_object* v_a_2099_; lean_object* v___x_2100_; 
v_a_2099_ = lean_ctor_get(v___x_2098_, 0);
lean_inc(v_a_2099_);
lean_dec_ref_known(v___x_2098_, 1);
v___x_2100_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS(v_a_2097_, v_a_2099_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2111_; 
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2111_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2111_ == 0)
{
v___x_2103_ = v___x_2100_;
v_isShared_2104_ = v_isSharedCheck_2111_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_2100_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2111_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2109_; 
v___x_2105_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_pushNot___closed__31, &l_Lean_Meta_Grind_NormSym_pushNot___closed__31_once, _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__31);
v___x_2106_ = l_Lean_mkAppB(v___x_2105_, v_arg_1803_, v_arg_1799_);
v___x_2107_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2107_, 0, v_a_2101_);
lean_ctor_set(v___x_2107_, 1, v___x_2106_);
lean_ctor_set_uint8(v___x_2107_, sizeof(void*)*2, v___x_1806_);
lean_ctor_set_uint8(v___x_2107_, sizeof(void*)*2 + 1, v___x_1806_);
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 0, v___x_2107_);
v___x_2109_ = v___x_2103_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v___x_2107_);
v___x_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
return v___x_2109_;
}
}
}
else
{
lean_object* v_a_2112_; lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2119_; 
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_2112_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2119_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2114_ = v___x_2100_;
v_isShared_2115_ = v_isSharedCheck_2119_;
goto v_resetjp_2113_;
}
else
{
lean_inc(v_a_2112_);
lean_dec(v___x_2100_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2119_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
lean_object* v___x_2117_; 
if (v_isShared_2115_ == 0)
{
v___x_2117_ = v___x_2114_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v_a_2112_);
v___x_2117_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
return v___x_2117_;
}
}
}
}
else
{
lean_object* v_a_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2127_; 
lean_dec(v_a_2097_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_2120_ = lean_ctor_get(v___x_2098_, 0);
v_isSharedCheck_2127_ = !lean_is_exclusive(v___x_2098_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2122_ = v___x_2098_;
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_a_2120_);
lean_dec(v___x_2098_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v___x_2125_; 
if (v_isShared_2123_ == 0)
{
v___x_2125_ = v___x_2122_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_a_2120_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
}
else
{
lean_object* v_a_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2135_; 
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_2128_ = lean_ctor_get(v___x_2096_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2096_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2130_ = v___x_2096_;
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
else
{
lean_inc(v_a_2128_);
lean_dec(v___x_2096_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v___x_2133_; 
if (v_isShared_2131_ == 0)
{
v___x_2133_ = v___x_2130_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_a_2128_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
}
}
else
{
lean_object* v___x_2136_; lean_object* v___x_2137_; 
lean_dec_ref(v___x_1804_);
lean_dec_ref(v_arg_1727_);
lean_dec_ref(v_e_1639_);
v___x_2136_ = lean_unsigned_to_nat(0u);
v___x_2137_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__1___redArg(v___x_2136_, v_a_1644_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; 
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
lean_inc(v_a_2138_);
lean_dec_ref_known(v___x_2137_, 1);
v___x_2139_ = lean_unsigned_to_nat(1u);
v___x_2140_ = lean_mk_empty_array_with_capacity(v___x_2139_);
v___x_2141_ = lean_array_push(v___x_2140_, v_a_2138_);
lean_inc_ref(v_arg_1799_);
v___x_2142_ = l_Lean_Meta_Sym_betaS(v_arg_1799_, v___x_2141_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_2142_) == 0)
{
lean_object* v_a_2143_; lean_object* v___x_2144_; 
v_a_2143_ = lean_ctor_get(v___x_2142_, 0);
lean_inc(v_a_2143_);
lean_dec_ref_known(v___x_2142_, 1);
v___x_2144_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v_a_2143_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_2144_) == 0)
{
lean_object* v_a_2145_; lean_object* v___x_2146_; uint8_t v___x_2147_; lean_object* v___x_2148_; 
v_a_2145_ = lean_ctor_get(v___x_2144_, 0);
lean_inc(v_a_2145_);
lean_dec_ref_known(v___x_2144_, 1);
v___x_2146_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__33));
v___x_2147_ = 0;
lean_inc_ref(v_arg_1803_);
v___x_2148_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2___redArg(v___x_2146_, v___x_2147_, v_arg_1803_, v_a_2145_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; lean_object* v___x_2150_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_a_2149_);
lean_dec_ref_known(v___x_2148_, 1);
lean_inc_ref(v_arg_1803_);
v___x_2150_ = l_Lean_Meta_Sym_getLevel___redArg(v_arg_1803_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
if (lean_obj_tag(v___x_2150_) == 0)
{
lean_object* v_a_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2164_; 
v_a_2151_ = lean_ctor_get(v___x_2150_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2150_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2153_ = v___x_2150_;
v_isShared_2154_ = v_isSharedCheck_2164_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_a_2151_);
lean_dec(v___x_2150_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2164_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2162_; 
v___x_2155_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__35));
v___x_2156_ = lean_box(0);
v___x_2157_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2157_, 0, v_a_2151_);
lean_ctor_set(v___x_2157_, 1, v___x_2156_);
v___x_2158_ = l_Lean_mkConst(v___x_2155_, v___x_2157_);
v___x_2159_ = l_Lean_mkAppB(v___x_2158_, v_arg_1803_, v_arg_1799_);
v___x_2160_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2160_, 0, v_a_2149_);
lean_ctor_set(v___x_2160_, 1, v___x_2159_);
lean_ctor_set_uint8(v___x_2160_, sizeof(void*)*2, v___x_1801_);
lean_ctor_set_uint8(v___x_2160_, sizeof(void*)*2 + 1, v___x_1801_);
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 0, v___x_2160_);
v___x_2162_ = v___x_2153_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v___x_2160_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
}
}
}
else
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
lean_dec(v_a_2149_);
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_2165_ = lean_ctor_get(v___x_2150_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2150_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_2150_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2150_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
else
{
lean_object* v_a_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2180_; 
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_2173_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2175_ = v___x_2148_;
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_a_2173_);
lean_dec(v___x_2148_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
lean_object* v___x_2178_; 
if (v_isShared_2176_ == 0)
{
v___x_2178_ = v___x_2175_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_a_2173_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
}
else
{
lean_object* v_a_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2188_; 
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_2181_ = lean_ctor_get(v___x_2144_, 0);
v_isSharedCheck_2188_ = !lean_is_exclusive(v___x_2144_);
if (v_isSharedCheck_2188_ == 0)
{
v___x_2183_ = v___x_2144_;
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_a_2181_);
lean_dec(v___x_2144_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2186_; 
if (v_isShared_2184_ == 0)
{
v___x_2186_ = v___x_2183_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_a_2181_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
}
}
else
{
lean_object* v_a_2189_; lean_object* v___x_2191_; uint8_t v_isShared_2192_; uint8_t v_isSharedCheck_2196_; 
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_2189_ = lean_ctor_get(v___x_2142_, 0);
v_isSharedCheck_2196_ = !lean_is_exclusive(v___x_2142_);
if (v_isSharedCheck_2196_ == 0)
{
v___x_2191_ = v___x_2142_;
v_isShared_2192_ = v_isSharedCheck_2196_;
goto v_resetjp_2190_;
}
else
{
lean_inc(v_a_2189_);
lean_dec(v___x_2142_);
v___x_2191_ = lean_box(0);
v_isShared_2192_ = v_isSharedCheck_2196_;
goto v_resetjp_2190_;
}
v_resetjp_2190_:
{
lean_object* v___x_2194_; 
if (v_isShared_2192_ == 0)
{
v___x_2194_ = v___x_2191_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v_a_2189_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
}
}
else
{
lean_object* v_a_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2204_; 
lean_dec_ref(v_arg_1803_);
lean_dec_ref(v_arg_1799_);
v_a_2197_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2199_ = v___x_2137_;
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_a_2197_);
lean_dec(v___x_2137_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2202_; 
if (v_isShared_2200_ == 0)
{
v___x_2202_ = v___x_2199_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_a_2197_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
}
}
}
else
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2209_; 
lean_dec_ref(v___x_1800_);
lean_dec_ref(v_arg_1727_);
lean_dec_ref(v_e_1639_);
v___x_2205_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_pushNot___closed__38, &l_Lean_Meta_Grind_NormSym_pushNot___closed__38_once, _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__38);
lean_inc_ref(v_arg_1799_);
v___x_2206_ = l_Lean_Expr_app___override(v___x_2205_, v_arg_1799_);
v___x_2207_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2207_, 0, v_arg_1799_);
lean_ctor_set(v___x_2207_, 1, v___x_2206_);
lean_ctor_set_uint8(v___x_2207_, sizeof(void*)*2, v___x_1797_);
lean_ctor_set_uint8(v___x_2207_, sizeof(void*)*2 + 1, v___x_1797_);
if (v_isShared_1792_ == 0)
{
lean_ctor_set(v___x_1791_, 0, v___x_2207_);
v___x_2209_ = v___x_1791_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v___x_2207_);
v___x_2209_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
return v___x_2209_;
}
}
}
}
else
{
lean_object* v___x_2211_; 
lean_dec_ref(v___x_1793_);
lean_del_object(v___x_1791_);
lean_dec_ref(v_arg_1727_);
lean_dec_ref(v_e_1639_);
v___x_2211_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_1643_);
if (lean_obj_tag(v___x_2211_) == 0)
{
lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2221_; 
v_a_2212_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2214_ = v___x_2211_;
v_isShared_2215_ = v_isSharedCheck_2221_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_dec(v___x_2211_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2221_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2219_; 
v___x_2216_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_pushNot___closed__41, &l_Lean_Meta_Grind_NormSym_pushNot___closed__41_once, _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__41);
v___x_2217_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2217_, 0, v_a_2212_);
lean_ctor_set(v___x_2217_, 1, v___x_2216_);
lean_ctor_set_uint8(v___x_2217_, sizeof(void*)*2, v___x_1795_);
lean_ctor_set_uint8(v___x_2217_, sizeof(void*)*2 + 1, v___x_1795_);
if (v_isShared_2215_ == 0)
{
lean_ctor_set(v___x_2214_, 0, v___x_2217_);
v___x_2219_ = v___x_2214_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v___x_2217_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
else
{
lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2229_; 
v_a_2222_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2224_ = v___x_2211_;
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v___x_2211_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2227_; 
if (v_isShared_2225_ == 0)
{
v___x_2227_ = v___x_2224_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_a_2222_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
}
}
else
{
lean_object* v___x_2230_; 
lean_dec_ref(v___x_1793_);
lean_del_object(v___x_1791_);
lean_dec_ref(v_arg_1727_);
lean_dec_ref(v_e_1639_);
v___x_2230_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_1643_);
if (lean_obj_tag(v___x_2230_) == 0)
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2241_; 
v_a_2231_ = lean_ctor_get(v___x_2230_, 0);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2230_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2233_ = v___x_2230_;
v_isShared_2234_ = v_isSharedCheck_2241_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2230_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2241_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2235_; uint8_t v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2239_; 
v___x_2235_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_pushNot___closed__44, &l_Lean_Meta_Grind_NormSym_pushNot___closed__44_once, _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__44);
v___x_2236_ = 0;
v___x_2237_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2237_, 0, v_a_2231_);
lean_ctor_set(v___x_2237_, 1, v___x_2235_);
lean_ctor_set_uint8(v___x_2237_, sizeof(void*)*2, v___x_2236_);
lean_ctor_set_uint8(v___x_2237_, sizeof(void*)*2 + 1, v___x_2236_);
if (v_isShared_2234_ == 0)
{
lean_ctor_set(v___x_2233_, 0, v___x_2237_);
v___x_2239_ = v___x_2233_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v___x_2237_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
}
else
{
lean_object* v_a_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2249_; 
v_a_2242_ = lean_ctor_get(v___x_2230_, 0);
v_isSharedCheck_2249_ = !lean_is_exclusive(v___x_2230_);
if (v_isSharedCheck_2249_ == 0)
{
v___x_2244_ = v___x_2230_;
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_a_2242_);
lean_dec(v___x_2230_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v___x_2247_; 
if (v_isShared_2245_ == 0)
{
v___x_2247_ = v___x_2244_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v_a_2242_);
v___x_2247_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
return v___x_2247_;
}
}
}
}
}
}
else
{
lean_object* v_a_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2258_; 
lean_dec_ref(v_arg_1727_);
lean_dec_ref(v_e_1639_);
v_a_2251_ = lean_ctor_get(v___x_1788_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2253_ = v___x_1788_;
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_a_2251_);
lean_dec(v___x_1788_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2256_; 
if (v_isShared_2254_ == 0)
{
v___x_2256_ = v___x_2253_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v_a_2251_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
v___jp_1728_:
{
if (lean_obj_tag(v_arg_1727_) == 7)
{
lean_object* v_binderName_1738_; lean_object* v_binderType_1739_; lean_object* v_body_1740_; uint8_t v_binderInfo_1741_; lean_object* v___x_1742_; 
v_binderName_1738_ = lean_ctor_get(v_arg_1727_, 0);
lean_inc(v_binderName_1738_);
v_binderType_1739_ = lean_ctor_get(v_arg_1727_, 1);
lean_inc_ref_n(v_binderType_1739_, 2);
v_body_1740_ = lean_ctor_get(v_arg_1727_, 2);
lean_inc_ref(v_body_1740_);
v_binderInfo_1741_ = lean_ctor_get_uint8(v_arg_1727_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_arg_1727_, 3);
v___x_1742_ = l_Lean_Meta_isProp(v_binderType_1739_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; uint8_t v___x_1744_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_a_1743_);
lean_dec_ref_known(v___x_1742_, 1);
v___x_1744_ = l_Lean_Expr_hasLooseBVars(v_body_1740_);
if (v___x_1744_ == 0)
{
uint8_t v___x_1745_; 
v___x_1745_ = lean_unbox(v_a_1743_);
if (v___x_1745_ == 0)
{
uint8_t v___x_1746_; 
v___x_1746_ = lean_unbox(v_a_1743_);
lean_dec(v_a_1743_);
v___y_1651_ = v___y_1729_;
v___y_1652_ = v___y_1732_;
v___y_1653_ = v___y_1733_;
v___y_1654_ = v_body_1740_;
v___y_1655_ = v_binderType_1739_;
v___y_1656_ = v___y_1735_;
v___y_1657_ = v_binderName_1738_;
v___y_1658_ = v___y_1734_;
v___y_1659_ = v___y_1730_;
v___y_1660_ = v___y_1731_;
v___y_1661_ = v___y_1737_;
v___y_1662_ = v_binderInfo_1741_;
v___y_1663_ = v___y_1736_;
v___y_1664_ = v___x_1746_;
goto v___jp_1650_;
}
else
{
lean_object* v___x_1747_; 
lean_dec(v_a_1743_);
lean_dec(v_binderName_1738_);
lean_inc_ref(v_body_1740_);
v___x_1747_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v_body_1740_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; lean_object* v___x_1749_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
lean_inc(v_a_1748_);
lean_dec_ref_known(v___x_1747_, 1);
lean_inc_ref(v_binderType_1739_);
v___x_1749_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS(v_binderType_1739_, v_a_1748_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
if (lean_obj_tag(v___x_1749_) == 0)
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1760_; 
v_a_1750_ = lean_ctor_get(v___x_1749_, 0);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1749_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1752_ = v___x_1749_;
v_isShared_1753_ = v_isSharedCheck_1760_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1749_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1760_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1758_; 
v___x_1754_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_pushNot___closed__4, &l_Lean_Meta_Grind_NormSym_pushNot___closed__4_once, _init_l_Lean_Meta_Grind_NormSym_pushNot___closed__4);
v___x_1755_ = l_Lean_mkAppB(v___x_1754_, v_binderType_1739_, v_body_1740_);
v___x_1756_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1756_, 0, v_a_1750_);
lean_ctor_set(v___x_1756_, 1, v___x_1755_);
lean_ctor_set_uint8(v___x_1756_, sizeof(void*)*2, v___x_1744_);
lean_ctor_set_uint8(v___x_1756_, sizeof(void*)*2 + 1, v___x_1744_);
if (v_isShared_1753_ == 0)
{
lean_ctor_set(v___x_1752_, 0, v___x_1756_);
v___x_1758_ = v___x_1752_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___x_1756_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
else
{
lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1768_; 
lean_dec_ref(v_body_1740_);
lean_dec_ref(v_binderType_1739_);
v_a_1761_ = lean_ctor_get(v___x_1749_, 0);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1749_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1763_ = v___x_1749_;
v_isShared_1764_ = v_isSharedCheck_1768_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v___x_1749_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1768_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1766_; 
if (v_isShared_1764_ == 0)
{
v___x_1766_ = v___x_1763_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v_a_1761_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
}
else
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1776_; 
lean_dec_ref(v_body_1740_);
lean_dec_ref(v_binderType_1739_);
v_a_1769_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1771_ = v___x_1747_;
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___x_1747_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_a_1769_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
}
else
{
uint8_t v___x_1777_; 
lean_dec(v_a_1743_);
v___x_1777_ = 0;
v___y_1651_ = v___y_1729_;
v___y_1652_ = v___y_1732_;
v___y_1653_ = v___y_1733_;
v___y_1654_ = v_body_1740_;
v___y_1655_ = v_binderType_1739_;
v___y_1656_ = v___y_1735_;
v___y_1657_ = v_binderName_1738_;
v___y_1658_ = v___y_1734_;
v___y_1659_ = v___y_1730_;
v___y_1660_ = v___y_1731_;
v___y_1661_ = v___y_1737_;
v___y_1662_ = v_binderInfo_1741_;
v___y_1663_ = v___y_1736_;
v___y_1664_ = v___x_1777_;
goto v___jp_1650_;
}
}
else
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1785_; 
lean_dec_ref(v_body_1740_);
lean_dec_ref(v_binderType_1739_);
lean_dec(v_binderName_1738_);
v_a_1778_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1780_ = v___x_1742_;
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1742_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1783_; 
if (v_isShared_1781_ == 0)
{
v___x_1783_ = v___x_1780_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_a_1778_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
}
else
{
lean_object* v___x_1786_; lean_object* v___x_1787_; 
lean_dec_ref(v_arg_1727_);
v___x_1786_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_1787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1787_, 0, v___x_1786_);
return v___x_1787_;
}
}
}
}
v___jp_1650_:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; 
lean_inc_ref(v___y_1654_);
lean_inc_ref(v___y_1655_);
lean_inc(v___y_1657_);
v___x_1665_ = l_Lean_mkLambda(v___y_1657_, v___y_1662_, v___y_1655_, v___y_1654_);
v___x_1666_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v___y_1654_, v___y_1651_, v___y_1659_, v___y_1660_, v___y_1652_, v___y_1653_, v___y_1658_, v___y_1656_, v___y_1663_, v___y_1661_);
if (lean_obj_tag(v___x_1666_) == 0)
{
lean_object* v_a_1667_; lean_object* v___x_1668_; 
v_a_1667_ = lean_ctor_get(v___x_1666_, 0);
lean_inc(v_a_1667_);
lean_dec_ref_known(v___x_1666_, 1);
lean_inc_ref(v___y_1655_);
v___x_1668_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0___redArg(v___y_1657_, v___y_1662_, v___y_1655_, v_a_1667_, v___y_1652_, v___y_1653_, v___y_1658_, v___y_1656_, v___y_1663_, v___y_1661_);
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v_a_1669_; lean_object* v___x_1670_; 
v_a_1669_ = lean_ctor_get(v___x_1668_, 0);
lean_inc(v_a_1669_);
lean_dec_ref_known(v___x_1668_, 1);
lean_inc_ref(v___y_1655_);
v___x_1670_ = l_Lean_Meta_Sym_getLevel___redArg(v___y_1655_, v___y_1653_, v___y_1658_, v___y_1656_, v___y_1663_, v___y_1661_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v_a_1671_; lean_object* v___x_1672_; 
v_a_1671_ = lean_ctor_get(v___x_1670_, 0);
lean_inc_n(v_a_1671_, 2);
lean_dec_ref_known(v___x_1670_, 1);
lean_inc_ref(v___y_1655_);
v___x_1672_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg(v_a_1671_, v___y_1655_, v_a_1669_, v___y_1652_, v___y_1653_, v___y_1658_, v___y_1656_, v___y_1663_, v___y_1661_);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1686_; 
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1675_ = v___x_1672_;
v_isShared_1676_ = v_isSharedCheck_1686_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1672_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1686_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1684_; 
v___x_1677_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__1));
v___x_1678_ = lean_box(0);
v___x_1679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1679_, 0, v_a_1671_);
lean_ctor_set(v___x_1679_, 1, v___x_1678_);
v___x_1680_ = l_Lean_mkConst(v___x_1677_, v___x_1679_);
v___x_1681_ = l_Lean_mkAppB(v___x_1680_, v___y_1655_, v___x_1665_);
v___x_1682_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1682_, 0, v_a_1673_);
lean_ctor_set(v___x_1682_, 1, v___x_1681_);
lean_ctor_set_uint8(v___x_1682_, sizeof(void*)*2, v___y_1664_);
lean_ctor_set_uint8(v___x_1682_, sizeof(void*)*2 + 1, v___y_1664_);
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 0, v___x_1682_);
v___x_1684_ = v___x_1675_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v___x_1682_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
else
{
lean_object* v_a_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1694_; 
lean_dec(v_a_1671_);
lean_dec_ref(v___x_1665_);
lean_dec_ref(v___y_1655_);
v_a_1687_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1694_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1689_ = v___x_1672_;
v_isShared_1690_ = v_isSharedCheck_1694_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_a_1687_);
lean_dec(v___x_1672_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1694_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___x_1692_; 
if (v_isShared_1690_ == 0)
{
v___x_1692_ = v___x_1689_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v_a_1687_);
v___x_1692_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
return v___x_1692_;
}
}
}
}
else
{
lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1702_; 
lean_dec(v_a_1669_);
lean_dec_ref(v___x_1665_);
lean_dec_ref(v___y_1655_);
v_a_1695_ = lean_ctor_get(v___x_1670_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1697_ = v___x_1670_;
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v___x_1670_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1700_; 
if (v_isShared_1698_ == 0)
{
v___x_1700_ = v___x_1697_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v_a_1695_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
}
}
else
{
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1710_; 
lean_dec_ref(v___x_1665_);
lean_dec_ref(v___y_1655_);
v_a_1703_ = lean_ctor_get(v___x_1668_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1668_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1705_ = v___x_1668_;
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1668_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1708_; 
if (v_isShared_1706_ == 0)
{
v___x_1708_ = v___x_1705_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_a_1703_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
}
else
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1718_; 
lean_dec_ref(v___x_1665_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1655_);
v_a_1711_ = lean_ctor_get(v___x_1666_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___x_1666_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1713_ = v___x_1666_;
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1666_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1716_; 
if (v_isShared_1714_ == 0)
{
v___x_1716_ = v___x_1713_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_a_1711_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
}
v___jp_1719_:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1720_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1720_);
return v___x_1721_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_pushNot___boxed(lean_object* v_e_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_, lean_object* v_a_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_, lean_object* v_a_2269_){
_start:
{
lean_object* v_res_2270_; 
v_res_2270_ = l_Lean_Meta_Grind_NormSym_pushNot(v_e_2259_, v_a_2260_, v_a_2261_, v_a_2262_, v_a_2263_, v_a_2264_, v_a_2265_, v_a_2266_, v_a_2267_, v_a_2268_);
lean_dec(v_a_2268_);
lean_dec_ref(v_a_2267_);
lean_dec(v_a_2266_);
lean_dec_ref(v_a_2265_);
lean_dec(v_a_2264_);
lean_dec_ref(v_a_2263_);
lean_dec(v_a_2262_);
lean_dec_ref(v_a_2261_);
lean_dec(v_a_2260_);
return v_res_2270_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__2(void){
_start:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2276_ = lean_box(0);
v___x_2277_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__1));
v___x_2278_ = l_Lean_mkConst(v___x_2277_, v___x_2276_);
return v___x_2278_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__5(void){
_start:
{
lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___x_2284_ = lean_box(0);
v___x_2285_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__4));
v___x_2286_ = l_Lean_mkConst(v___x_2285_, v___x_2284_);
return v___x_2286_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__8(void){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; 
v___x_2290_ = lean_box(0);
v___x_2291_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__7));
v___x_2292_ = l_Lean_mkConst(v___x_2291_, v___x_2290_);
return v___x_2292_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__11(void){
_start:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___x_2296_ = lean_box(0);
v___x_2297_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__10));
v___x_2298_ = l_Lean_mkConst(v___x_2297_, v___x_2296_);
return v___x_2298_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__14(void){
_start:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; 
v___x_2304_ = lean_box(0);
v___x_2305_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__13));
v___x_2306_ = l_Lean_mkConst(v___x_2305_, v___x_2304_);
return v___x_2306_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__17(void){
_start:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2310_ = lean_box(0);
v___x_2311_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__16));
v___x_2312_ = l_Lean_mkConst(v___x_2311_, v___x_2310_);
return v___x_2312_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__20(void){
_start:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2316_ = lean_box(0);
v___x_2317_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__19));
v___x_2318_ = l_Lean_mkConst(v___x_2317_, v___x_2316_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg(lean_object* v_e_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_){
_start:
{
uint8_t v___y_2331_; lean_object* v___x_2337_; uint8_t v___x_2338_; 
v___x_2337_ = l_Lean_Expr_cleanupAnnotations(v_e_2319_);
v___x_2338_ = l_Lean_Expr_isApp(v___x_2337_);
if (v___x_2338_ == 0)
{
lean_dec_ref(v___x_2337_);
goto v___jp_2334_;
}
else
{
lean_object* v___x_2339_; uint8_t v___x_2340_; 
v___x_2339_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2337_);
v___x_2340_ = l_Lean_Expr_isApp(v___x_2339_);
if (v___x_2340_ == 0)
{
lean_dec_ref(v___x_2339_);
lean_dec_ref(v___x_2337_);
goto v___jp_2334_;
}
else
{
lean_object* v___x_2341_; lean_object* v___x_2342_; uint8_t v___x_2343_; 
v___x_2341_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2339_);
v___x_2342_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___closed__1));
v___x_2343_ = l_Lean_Expr_isConstOf(v___x_2341_, v___x_2342_);
lean_dec_ref(v___x_2341_);
if (v___x_2343_ == 0)
{
lean_dec_ref(v___x_2339_);
lean_dec_ref(v___x_2337_);
goto v___jp_2334_;
}
else
{
lean_object* v_arg_2344_; lean_object* v_arg_2345_; lean_object* v___y_2347_; lean_object* v___y_2348_; lean_object* v___y_2349_; lean_object* v___y_2350_; lean_object* v___y_2351_; lean_object* v___y_2352_; lean_object* v___x_2455_; 
v_arg_2344_ = lean_ctor_get(v___x_2337_, 1);
lean_inc_ref(v_arg_2344_);
lean_dec_ref(v___x_2337_);
v_arg_2345_ = lean_ctor_get(v___x_2339_, 1);
lean_inc_ref_n(v_arg_2345_, 2);
lean_dec_ref(v___x_2339_);
v___x_2455_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_2345_, v_a_2323_);
if (lean_obj_tag(v___x_2455_) == 0)
{
lean_object* v_a_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2515_; 
v_a_2456_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_2515_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2458_ = v___x_2455_;
v_isShared_2459_ = v_isSharedCheck_2515_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_a_2456_);
lean_dec(v___x_2455_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2515_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v___x_2460_; lean_object* v___x_2461_; uint8_t v___x_2462_; 
v___x_2460_ = l_Lean_Expr_cleanupAnnotations(v_a_2456_);
lean_dec(v_a_2456_);
v___x_2461_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__6));
v___x_2462_ = l_Lean_Expr_isConstOf(v___x_2460_, v___x_2461_);
if (v___x_2462_ == 0)
{
lean_object* v___x_2463_; uint8_t v___x_2464_; 
v___x_2463_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__8));
v___x_2464_ = l_Lean_Expr_isConstOf(v___x_2460_, v___x_2463_);
if (v___x_2464_ == 0)
{
uint8_t v___x_2465_; 
lean_del_object(v___x_2458_);
v___x_2465_ = l_Lean_Expr_isApp(v___x_2460_);
if (v___x_2465_ == 0)
{
lean_dec_ref(v___x_2460_);
v___y_2347_ = v_a_2320_;
v___y_2348_ = v_a_2321_;
v___y_2349_ = v_a_2322_;
v___y_2350_ = v_a_2323_;
v___y_2351_ = v_a_2324_;
v___y_2352_ = v_a_2325_;
goto v___jp_2346_;
}
else
{
lean_object* v___x_2466_; uint8_t v___x_2467_; 
v___x_2466_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2460_);
v___x_2467_ = l_Lean_Expr_isApp(v___x_2466_);
if (v___x_2467_ == 0)
{
lean_dec_ref(v___x_2466_);
lean_dec_ref(v___x_2460_);
v___y_2347_ = v_a_2320_;
v___y_2348_ = v_a_2321_;
v___y_2349_ = v_a_2322_;
v___y_2350_ = v_a_2323_;
v___y_2351_ = v_a_2324_;
v___y_2352_ = v_a_2325_;
goto v___jp_2346_;
}
else
{
lean_object* v___x_2468_; uint8_t v___x_2469_; 
v___x_2468_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2466_);
v___x_2469_ = l_Lean_Expr_isConstOf(v___x_2468_, v___x_2342_);
lean_dec_ref(v___x_2468_);
if (v___x_2469_ == 0)
{
lean_dec_ref(v___x_2466_);
lean_dec_ref(v___x_2460_);
v___y_2347_ = v_a_2320_;
v___y_2348_ = v_a_2321_;
v___y_2349_ = v_a_2322_;
v___y_2350_ = v_a_2323_;
v___y_2351_ = v_a_2324_;
v___y_2352_ = v_a_2325_;
goto v___jp_2346_;
}
else
{
lean_object* v_arg_2470_; lean_object* v_arg_2471_; lean_object* v___x_2472_; 
lean_dec_ref(v_arg_2345_);
v_arg_2470_ = lean_ctor_get(v___x_2460_, 1);
lean_inc_ref_n(v_arg_2470_, 2);
lean_dec_ref(v___x_2460_);
v_arg_2471_ = lean_ctor_get(v___x_2466_, 1);
lean_inc_ref(v_arg_2471_);
lean_dec_ref(v___x_2466_);
lean_inc_ref(v_arg_2344_);
v___x_2472_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg(v_arg_2470_, v_arg_2344_, v_a_2320_, v_a_2321_, v_a_2322_, v_a_2323_, v_a_2324_, v_a_2325_);
if (lean_obj_tag(v___x_2472_) == 0)
{
lean_object* v_a_2473_; lean_object* v___x_2474_; 
v_a_2473_ = lean_ctor_get(v___x_2472_, 0);
lean_inc(v_a_2473_);
lean_dec_ref_known(v___x_2472_, 1);
lean_inc_ref(v_arg_2471_);
v___x_2474_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg(v_arg_2471_, v_a_2473_, v_a_2320_, v_a_2321_, v_a_2322_, v_a_2323_, v_a_2324_, v_a_2325_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2485_; 
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2477_ = v___x_2474_;
v_isShared_2478_ = v_isSharedCheck_2485_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2474_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2485_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2483_; 
v___x_2479_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__14, &l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__14_once, _init_l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__14);
v___x_2480_ = l_Lean_mkApp3(v___x_2479_, v_arg_2471_, v_arg_2470_, v_arg_2344_);
v___x_2481_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2481_, 0, v_a_2475_);
lean_ctor_set(v___x_2481_, 1, v___x_2480_);
lean_ctor_set_uint8(v___x_2481_, sizeof(void*)*2, v___x_2464_);
lean_ctor_set_uint8(v___x_2481_, sizeof(void*)*2 + 1, v___x_2464_);
if (v_isShared_2478_ == 0)
{
lean_ctor_set(v___x_2477_, 0, v___x_2481_);
v___x_2483_ = v___x_2477_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v___x_2481_);
v___x_2483_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
return v___x_2483_;
}
}
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
lean_dec_ref(v_arg_2471_);
lean_dec_ref(v_arg_2470_);
lean_dec_ref(v_arg_2344_);
v_a_2486_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2474_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2474_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2491_; 
if (v_isShared_2489_ == 0)
{
v___x_2491_ = v___x_2488_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2486_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
}
else
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2501_; 
lean_dec_ref(v_arg_2471_);
lean_dec_ref(v_arg_2470_);
lean_dec_ref(v_arg_2344_);
v_a_2494_ = lean_ctor_get(v___x_2472_, 0);
v_isSharedCheck_2501_ = !lean_is_exclusive(v___x_2472_);
if (v_isSharedCheck_2501_ == 0)
{
v___x_2496_ = v___x_2472_;
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v___x_2472_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v___x_2499_; 
if (v_isShared_2497_ == 0)
{
v___x_2499_ = v___x_2496_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v_a_2494_);
v___x_2499_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
return v___x_2499_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2506_; 
lean_dec_ref(v___x_2460_);
v___x_2502_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__17, &l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__17_once, _init_l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__17);
v___x_2503_ = l_Lean_Expr_app___override(v___x_2502_, v_arg_2344_);
v___x_2504_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2504_, 0, v_arg_2345_);
lean_ctor_set(v___x_2504_, 1, v___x_2503_);
lean_ctor_set_uint8(v___x_2504_, sizeof(void*)*2, v___x_2462_);
lean_ctor_set_uint8(v___x_2504_, sizeof(void*)*2 + 1, v___x_2462_);
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 0, v___x_2504_);
v___x_2506_ = v___x_2458_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v___x_2504_);
v___x_2506_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
return v___x_2506_;
}
}
}
else
{
lean_object* v___x_2508_; lean_object* v___x_2509_; uint8_t v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2513_; 
lean_dec_ref(v___x_2460_);
lean_dec_ref(v_arg_2345_);
v___x_2508_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__20, &l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__20_once, _init_l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__20);
lean_inc_ref(v_arg_2344_);
v___x_2509_ = l_Lean_Expr_app___override(v___x_2508_, v_arg_2344_);
v___x_2510_ = 0;
v___x_2511_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2511_, 0, v_arg_2344_);
lean_ctor_set(v___x_2511_, 1, v___x_2509_);
lean_ctor_set_uint8(v___x_2511_, sizeof(void*)*2, v___x_2510_);
lean_ctor_set_uint8(v___x_2511_, sizeof(void*)*2 + 1, v___x_2510_);
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 0, v___x_2511_);
v___x_2513_ = v___x_2458_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v___x_2511_);
v___x_2513_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
return v___x_2513_;
}
}
}
}
else
{
lean_object* v_a_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2523_; 
lean_dec_ref(v_arg_2345_);
lean_dec_ref(v_arg_2344_);
v_a_2516_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2518_ = v___x_2455_;
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_a_2516_);
lean_dec(v___x_2455_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2521_; 
if (v_isShared_2519_ == 0)
{
v___x_2521_ = v___x_2518_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v_a_2516_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
return v___x_2521_;
}
}
}
v___jp_2346_:
{
lean_object* v___x_2353_; 
lean_inc_ref(v_arg_2344_);
v___x_2353_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_2344_, v___y_2350_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2446_; 
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2356_ = v___x_2353_;
v_isShared_2357_ = v_isSharedCheck_2446_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___x_2353_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2446_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2358_; lean_object* v___x_2359_; uint8_t v___x_2360_; 
v___x_2358_ = l_Lean_Expr_cleanupAnnotations(v_a_2354_);
lean_dec(v_a_2354_);
v___x_2359_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__6));
v___x_2360_ = l_Lean_Expr_isConstOf(v___x_2358_, v___x_2359_);
if (v___x_2360_ == 0)
{
lean_object* v___x_2361_; uint8_t v___x_2362_; 
v___x_2361_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__8));
v___x_2362_ = l_Lean_Expr_isConstOf(v___x_2358_, v___x_2361_);
if (v___x_2362_ == 0)
{
uint8_t v___x_2363_; 
lean_del_object(v___x_2356_);
lean_dec_ref(v_arg_2344_);
v___x_2363_ = l_Lean_Expr_isApp(v___x_2358_);
if (v___x_2363_ == 0)
{
lean_dec_ref(v___x_2358_);
lean_dec_ref(v_arg_2345_);
goto v___jp_2327_;
}
else
{
lean_object* v___x_2364_; uint8_t v___x_2365_; 
v___x_2364_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2358_);
v___x_2365_ = l_Lean_Expr_isApp(v___x_2364_);
if (v___x_2365_ == 0)
{
lean_dec_ref(v___x_2364_);
lean_dec_ref(v___x_2358_);
lean_dec_ref(v_arg_2345_);
goto v___jp_2327_;
}
else
{
lean_object* v___x_2366_; uint8_t v___x_2367_; 
v___x_2366_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2364_);
v___x_2367_ = l_Lean_Expr_isConstOf(v___x_2366_, v___x_2342_);
lean_dec_ref(v___x_2366_);
if (v___x_2367_ == 0)
{
lean_dec_ref(v___x_2364_);
lean_dec_ref(v___x_2358_);
lean_dec_ref(v_arg_2345_);
goto v___jp_2327_;
}
else
{
uint8_t v___x_2368_; 
v___x_2368_ = l_Lean_Expr_isForall(v_arg_2345_);
if (v___x_2368_ == 0)
{
lean_object* v_arg_2369_; lean_object* v_arg_2370_; uint8_t v___x_2371_; 
v_arg_2369_ = lean_ctor_get(v___x_2358_, 1);
lean_inc_ref(v_arg_2369_);
lean_dec_ref(v___x_2358_);
v_arg_2370_ = lean_ctor_get(v___x_2364_, 1);
lean_inc_ref(v_arg_2370_);
lean_dec_ref(v___x_2364_);
v___x_2371_ = l_Lean_Expr_isForall(v_arg_2370_);
if (v___x_2371_ == 0)
{
uint8_t v___x_2372_; 
v___x_2372_ = l_Lean_Expr_isForall(v_arg_2369_);
if (v___x_2372_ == 0)
{
lean_dec_ref(v_arg_2370_);
lean_dec_ref(v_arg_2369_);
lean_dec_ref(v_arg_2345_);
v___y_2331_ = v___x_2362_;
goto v___jp_2330_;
}
else
{
lean_object* v___x_2373_; 
lean_inc_ref(v_arg_2345_);
lean_inc_ref(v_arg_2370_);
v___x_2373_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg(v_arg_2370_, v_arg_2345_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_);
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_object* v_a_2374_; lean_object* v___x_2375_; 
v_a_2374_ = lean_ctor_get(v___x_2373_, 0);
lean_inc(v_a_2374_);
lean_dec_ref_known(v___x_2373_, 1);
lean_inc_ref(v_arg_2369_);
v___x_2375_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg(v_arg_2369_, v_a_2374_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_);
if (lean_obj_tag(v___x_2375_) == 0)
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2386_; 
v_a_2376_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2386_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2386_ == 0)
{
v___x_2378_ = v___x_2375_;
v_isShared_2379_ = v_isSharedCheck_2386_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2375_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2386_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2384_; 
v___x_2380_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__2, &l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__2_once, _init_l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__2);
v___x_2381_ = l_Lean_mkApp3(v___x_2380_, v_arg_2345_, v_arg_2370_, v_arg_2369_);
v___x_2382_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2382_, 0, v_a_2376_);
lean_ctor_set(v___x_2382_, 1, v___x_2381_);
lean_ctor_set_uint8(v___x_2382_, sizeof(void*)*2, v___x_2371_);
lean_ctor_set_uint8(v___x_2382_, sizeof(void*)*2 + 1, v___x_2371_);
if (v_isShared_2379_ == 0)
{
lean_ctor_set(v___x_2378_, 0, v___x_2382_);
v___x_2384_ = v___x_2378_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v___x_2382_);
v___x_2384_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
return v___x_2384_;
}
}
}
else
{
lean_object* v_a_2387_; lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2394_; 
lean_dec_ref(v_arg_2370_);
lean_dec_ref(v_arg_2369_);
lean_dec_ref(v_arg_2345_);
v_a_2387_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2394_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2394_ == 0)
{
v___x_2389_ = v___x_2375_;
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_a_2387_);
lean_dec(v___x_2375_);
v___x_2389_ = lean_box(0);
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
v_resetjp_2388_:
{
lean_object* v___x_2392_; 
if (v_isShared_2390_ == 0)
{
v___x_2392_ = v___x_2389_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v_a_2387_);
v___x_2392_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
return v___x_2392_;
}
}
}
}
else
{
lean_object* v_a_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2402_; 
lean_dec_ref(v_arg_2370_);
lean_dec_ref(v_arg_2369_);
lean_dec_ref(v_arg_2345_);
v_a_2395_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2397_ = v___x_2373_;
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_a_2395_);
lean_dec(v___x_2373_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v___x_2400_; 
if (v_isShared_2398_ == 0)
{
v___x_2400_ = v___x_2397_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_a_2395_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
return v___x_2400_;
}
}
}
}
}
else
{
lean_object* v___x_2403_; 
lean_inc_ref(v_arg_2369_);
lean_inc_ref(v_arg_2345_);
v___x_2403_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg(v_arg_2345_, v_arg_2369_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_);
if (lean_obj_tag(v___x_2403_) == 0)
{
lean_object* v_a_2404_; lean_object* v___x_2405_; 
v_a_2404_ = lean_ctor_get(v___x_2403_, 0);
lean_inc(v_a_2404_);
lean_dec_ref_known(v___x_2403_, 1);
lean_inc_ref(v_arg_2370_);
v___x_2405_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg(v_arg_2370_, v_a_2404_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_);
if (lean_obj_tag(v___x_2405_) == 0)
{
lean_object* v_a_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2416_; 
v_a_2406_ = lean_ctor_get(v___x_2405_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v___x_2405_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2408_ = v___x_2405_;
v_isShared_2409_ = v_isSharedCheck_2416_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_a_2406_);
lean_dec(v___x_2405_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2416_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2414_; 
v___x_2410_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__5, &l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__5_once, _init_l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__5);
v___x_2411_ = l_Lean_mkApp3(v___x_2410_, v_arg_2345_, v_arg_2370_, v_arg_2369_);
v___x_2412_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2412_, 0, v_a_2406_);
lean_ctor_set(v___x_2412_, 1, v___x_2411_);
lean_ctor_set_uint8(v___x_2412_, sizeof(void*)*2, v___x_2368_);
lean_ctor_set_uint8(v___x_2412_, sizeof(void*)*2 + 1, v___x_2368_);
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 0, v___x_2412_);
v___x_2414_ = v___x_2408_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v___x_2412_);
v___x_2414_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
return v___x_2414_;
}
}
}
else
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2424_; 
lean_dec_ref(v_arg_2370_);
lean_dec_ref(v_arg_2369_);
lean_dec_ref(v_arg_2345_);
v_a_2417_ = lean_ctor_get(v___x_2405_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2405_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2419_ = v___x_2405_;
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v___x_2405_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2422_; 
if (v_isShared_2420_ == 0)
{
v___x_2422_ = v___x_2419_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v_a_2417_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
return v___x_2422_;
}
}
}
}
else
{
lean_object* v_a_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2432_; 
lean_dec_ref(v_arg_2370_);
lean_dec_ref(v_arg_2369_);
lean_dec_ref(v_arg_2345_);
v_a_2425_ = lean_ctor_get(v___x_2403_, 0);
v_isSharedCheck_2432_ = !lean_is_exclusive(v___x_2403_);
if (v_isSharedCheck_2432_ == 0)
{
v___x_2427_ = v___x_2403_;
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_a_2425_);
lean_dec(v___x_2403_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v___x_2430_; 
if (v_isShared_2428_ == 0)
{
v___x_2430_ = v___x_2427_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2431_; 
v_reuseFailAlloc_2431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2431_, 0, v_a_2425_);
v___x_2430_ = v_reuseFailAlloc_2431_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
return v___x_2430_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2364_);
lean_dec_ref(v___x_2358_);
lean_dec_ref(v_arg_2345_);
v___y_2331_ = v___x_2362_;
goto v___jp_2330_;
}
}
}
}
}
else
{
lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2437_; 
lean_dec_ref(v___x_2358_);
v___x_2433_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__8, &l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__8_once, _init_l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__8);
v___x_2434_ = l_Lean_Expr_app___override(v___x_2433_, v_arg_2345_);
v___x_2435_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2435_, 0, v_arg_2344_);
lean_ctor_set(v___x_2435_, 1, v___x_2434_);
lean_ctor_set_uint8(v___x_2435_, sizeof(void*)*2, v___x_2360_);
lean_ctor_set_uint8(v___x_2435_, sizeof(void*)*2 + 1, v___x_2360_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set(v___x_2356_, 0, v___x_2435_);
v___x_2437_ = v___x_2356_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v___x_2435_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
}
else
{
lean_object* v___x_2439_; lean_object* v___x_2440_; uint8_t v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2444_; 
lean_dec_ref(v___x_2358_);
lean_dec_ref(v_arg_2344_);
v___x_2439_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__11, &l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__11_once, _init_l_Lean_Meta_Grind_NormSym_simpOr___redArg___closed__11);
lean_inc_ref(v_arg_2345_);
v___x_2440_ = l_Lean_Expr_app___override(v___x_2439_, v_arg_2345_);
v___x_2441_ = 0;
v___x_2442_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2442_, 0, v_arg_2345_);
lean_ctor_set(v___x_2442_, 1, v___x_2440_);
lean_ctor_set_uint8(v___x_2442_, sizeof(void*)*2, v___x_2441_);
lean_ctor_set_uint8(v___x_2442_, sizeof(void*)*2 + 1, v___x_2441_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set(v___x_2356_, 0, v___x_2442_);
v___x_2444_ = v___x_2356_;
goto v_reusejp_2443_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v___x_2442_);
v___x_2444_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2443_;
}
v_reusejp_2443_:
{
return v___x_2444_;
}
}
}
}
else
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2454_; 
lean_dec_ref(v_arg_2345_);
lean_dec_ref(v_arg_2344_);
v_a_2447_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2449_ = v___x_2353_;
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___x_2353_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2452_; 
if (v_isShared_2450_ == 0)
{
v___x_2452_ = v___x_2449_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v_a_2447_);
v___x_2452_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
return v___x_2452_;
}
}
}
}
}
}
}
v___jp_2327_:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2328_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_2329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2329_, 0, v___x_2328_);
return v___x_2329_;
}
v___jp_2330_:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; 
v___x_2332_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_2332_, 0, v___y_2331_);
lean_ctor_set_uint8(v___x_2332_, 1, v___y_2331_);
v___x_2333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2332_);
return v___x_2333_;
}
v___jp_2334_:
{
lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2335_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_2336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2335_);
return v___x_2336_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpOr___redArg___boxed(lean_object* v_e_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_){
_start:
{
lean_object* v_res_2532_; 
v_res_2532_ = l_Lean_Meta_Grind_NormSym_simpOr___redArg(v_e_2524_, v_a_2525_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_, v_a_2530_);
lean_dec(v_a_2530_);
lean_dec_ref(v_a_2529_);
lean_dec(v_a_2528_);
lean_dec_ref(v_a_2527_);
lean_dec(v_a_2526_);
lean_dec_ref(v_a_2525_);
lean_dec_ref(v_e_2524_);
return v_res_2532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpOr(lean_object* v_e_2533_, lean_object* v_a_2534_, lean_object* v_a_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Lean_Meta_Grind_NormSym_simpOr___redArg(v_e_2533_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_, v_a_2542_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpOr___boxed(lean_object* v_e_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_){
_start:
{
lean_object* v_res_2556_; 
v_res_2556_ = l_Lean_Meta_Grind_NormSym_simpOr(v_e_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_, v_a_2551_, v_a_2552_, v_a_2553_, v_a_2554_);
lean_dec(v_a_2554_);
lean_dec_ref(v_a_2553_);
lean_dec(v_a_2552_);
lean_dec_ref(v_a_2551_);
lean_dec(v_a_2550_);
lean_dec_ref(v_a_2549_);
lean_dec(v_a_2548_);
lean_dec_ref(v_a_2547_);
lean_dec(v_a_2546_);
lean_dec_ref(v_e_2545_);
return v_res_2556_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; 
v___x_2557_ = lean_box(0);
v___x_2558_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__6));
v___x_2559_ = l_Lean_mkConst(v___x_2558_, v___x_2557_);
return v___x_2559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0(uint8_t v___x_2560_, uint8_t v___x_2561_, lean_object* v_h_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_){
_start:
{
lean_object* v___y_2574_; lean_object* v___x_2583_; lean_object* v___x_2584_; 
v___x_2583_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0___closed__0, &l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0___closed__0);
lean_inc_ref(v_h_2562_);
v___x_2584_ = l_Lean_Meta_mkNoConfusion(v___x_2583_, v_h_2562_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_);
if (lean_obj_tag(v___x_2584_) == 0)
{
lean_object* v_a_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; uint8_t v___x_2589_; lean_object* v___x_2590_; 
v_a_2585_ = lean_ctor_get(v___x_2584_, 0);
lean_inc(v_a_2585_);
lean_dec_ref_known(v___x_2584_, 1);
v___x_2586_ = lean_unsigned_to_nat(1u);
v___x_2587_ = lean_mk_empty_array_with_capacity(v___x_2586_);
v___x_2588_ = lean_array_push(v___x_2587_, v_h_2562_);
v___x_2589_ = 1;
v___x_2590_ = l_Lean_Meta_mkLambdaFVars(v___x_2588_, v_a_2585_, v___x_2560_, v___x_2561_, v___x_2560_, v___x_2561_, v___x_2589_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_);
lean_dec_ref(v___x_2588_);
if (lean_obj_tag(v___x_2590_) == 0)
{
lean_object* v_a_2591_; lean_object* v___x_2592_; uint8_t v_transparency_2593_; uint8_t v___x_2594_; uint8_t v___x_2595_; 
v_a_2591_ = lean_ctor_get(v___x_2590_, 0);
lean_inc(v_a_2591_);
lean_dec_ref_known(v___x_2590_, 1);
v___x_2592_ = l_Lean_Meta_Context_config(v___y_2568_);
v_transparency_2593_ = lean_ctor_get_uint8(v___x_2592_, 9);
lean_dec_ref(v___x_2592_);
v___x_2594_ = 1;
v___x_2595_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2593_, v___x_2594_);
if (v___x_2595_ == 0)
{
lean_object* v_keyedConfig_2596_; uint8_t v_trackZetaDelta_2597_; lean_object* v_zetaDeltaSet_2598_; lean_object* v_lctx_2599_; lean_object* v_localInstances_2600_; lean_object* v_defEqCtx_x3f_2601_; lean_object* v_synthPendingDepth_2602_; lean_object* v_customCanUnfoldPredicate_x3f_2603_; uint8_t v_univApprox_2604_; uint8_t v_inTypeClassResolution_2605_; uint8_t v_cacheInferType_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; 
v_keyedConfig_2596_ = lean_ctor_get(v___y_2568_, 0);
v_trackZetaDelta_2597_ = lean_ctor_get_uint8(v___y_2568_, sizeof(void*)*7);
v_zetaDeltaSet_2598_ = lean_ctor_get(v___y_2568_, 1);
v_lctx_2599_ = lean_ctor_get(v___y_2568_, 2);
v_localInstances_2600_ = lean_ctor_get(v___y_2568_, 3);
v_defEqCtx_x3f_2601_ = lean_ctor_get(v___y_2568_, 4);
v_synthPendingDepth_2602_ = lean_ctor_get(v___y_2568_, 5);
v_customCanUnfoldPredicate_x3f_2603_ = lean_ctor_get(v___y_2568_, 6);
v_univApprox_2604_ = lean_ctor_get_uint8(v___y_2568_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2605_ = lean_ctor_get_uint8(v___y_2568_, sizeof(void*)*7 + 2);
v_cacheInferType_2606_ = lean_ctor_get_uint8(v___y_2568_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2596_);
v___x_2607_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2594_, v_keyedConfig_2596_);
lean_inc(v_customCanUnfoldPredicate_x3f_2603_);
lean_inc(v_synthPendingDepth_2602_);
lean_inc(v_defEqCtx_x3f_2601_);
lean_inc_ref(v_localInstances_2600_);
lean_inc_ref(v_lctx_2599_);
lean_inc(v_zetaDeltaSet_2598_);
v___x_2608_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2608_, 0, v___x_2607_);
lean_ctor_set(v___x_2608_, 1, v_zetaDeltaSet_2598_);
lean_ctor_set(v___x_2608_, 2, v_lctx_2599_);
lean_ctor_set(v___x_2608_, 3, v_localInstances_2600_);
lean_ctor_set(v___x_2608_, 4, v_defEqCtx_x3f_2601_);
lean_ctor_set(v___x_2608_, 5, v_synthPendingDepth_2602_);
lean_ctor_set(v___x_2608_, 6, v_customCanUnfoldPredicate_x3f_2603_);
lean_ctor_set_uint8(v___x_2608_, sizeof(void*)*7, v_trackZetaDelta_2597_);
lean_ctor_set_uint8(v___x_2608_, sizeof(void*)*7 + 1, v_univApprox_2604_);
lean_ctor_set_uint8(v___x_2608_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2605_);
lean_ctor_set_uint8(v___x_2608_, sizeof(void*)*7 + 3, v_cacheInferType_2606_);
v___x_2609_ = l_Lean_Meta_mkEqFalse_x27(v_a_2591_, v___x_2608_, v___y_2569_, v___y_2570_, v___y_2571_);
lean_dec_ref_known(v___x_2608_, 7);
v___y_2574_ = v___x_2609_;
goto v___jp_2573_;
}
else
{
lean_object* v___x_2610_; 
v___x_2610_ = l_Lean_Meta_mkEqFalse_x27(v_a_2591_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_);
v___y_2574_ = v___x_2610_;
goto v___jp_2573_;
}
}
else
{
return v___x_2590_;
}
}
else
{
lean_dec_ref(v_h_2562_);
return v___x_2584_;
}
v___jp_2573_:
{
if (lean_obj_tag(v___y_2574_) == 0)
{
return v___y_2574_;
}
else
{
lean_object* v_a_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2582_; 
v_a_2575_ = lean_ctor_get(v___y_2574_, 0);
v_isSharedCheck_2582_ = !lean_is_exclusive(v___y_2574_);
if (v_isSharedCheck_2582_ == 0)
{
v___x_2577_ = v___y_2574_;
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_a_2575_);
lean_dec(v___y_2574_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2580_; 
if (v_isShared_2578_ == 0)
{
v___x_2580_ = v___x_2577_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2575_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0___boxed(lean_object* v___x_2611_, lean_object* v___x_2612_, lean_object* v_h_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_){
_start:
{
uint8_t v___x_16996__boxed_2624_; uint8_t v___x_16997__boxed_2625_; lean_object* v_res_2626_; 
v___x_16996__boxed_2624_ = lean_unbox(v___x_2611_);
v___x_16997__boxed_2625_ = lean_unbox(v___x_2612_);
v_res_2626_ = l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0(v___x_16996__boxed_2624_, v___x_16997__boxed_2625_, v_h_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
lean_dec(v___y_2622_);
lean_dec_ref(v___y_2621_);
lean_dec(v___y_2620_);
lean_dec_ref(v___y_2619_);
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2617_);
lean_dec(v___y_2616_);
lean_dec_ref(v___y_2615_);
lean_dec(v___y_2614_);
return v_res_2626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___redArg___lam__0(lean_object* v_k_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v_b_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_){
_start:
{
lean_object* v___x_2639_; 
lean_inc(v___y_2637_);
lean_inc_ref(v___y_2636_);
lean_inc(v___y_2635_);
lean_inc_ref(v___y_2634_);
lean_inc(v___y_2632_);
lean_inc_ref(v___y_2631_);
lean_inc(v___y_2630_);
lean_inc_ref(v___y_2629_);
lean_inc(v___y_2628_);
v___x_2639_ = lean_apply_11(v_k_2627_, v_b_2633_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_, lean_box(0));
return v___x_2639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v_b_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_){
_start:
{
lean_object* v_res_2652_; 
v_res_2652_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___redArg___lam__0(v_k_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v_b_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_);
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
lean_dec(v___y_2643_);
lean_dec_ref(v___y_2642_);
lean_dec(v___y_2641_);
return v_res_2652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___redArg(lean_object* v_name_2653_, uint8_t v_bi_2654_, lean_object* v_type_2655_, lean_object* v_k_2656_, uint8_t v_kind_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_){
_start:
{
lean_object* v___f_2668_; lean_object* v___x_2669_; 
lean_inc(v___y_2662_);
lean_inc_ref(v___y_2661_);
lean_inc(v___y_2660_);
lean_inc_ref(v___y_2659_);
lean_inc(v___y_2658_);
v___f_2668_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___redArg___lam__0___boxed), 12, 6);
lean_closure_set(v___f_2668_, 0, v_k_2656_);
lean_closure_set(v___f_2668_, 1, v___y_2658_);
lean_closure_set(v___f_2668_, 2, v___y_2659_);
lean_closure_set(v___f_2668_, 3, v___y_2660_);
lean_closure_set(v___f_2668_, 4, v___y_2661_);
lean_closure_set(v___f_2668_, 5, v___y_2662_);
v___x_2669_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2653_, v_bi_2654_, v_type_2655_, v___f_2668_, v_kind_2657_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_);
if (lean_obj_tag(v___x_2669_) == 0)
{
return v___x_2669_;
}
else
{
lean_object* v_a_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2677_; 
v_a_2670_ = lean_ctor_get(v___x_2669_, 0);
v_isSharedCheck_2677_ = !lean_is_exclusive(v___x_2669_);
if (v_isSharedCheck_2677_ == 0)
{
v___x_2672_ = v___x_2669_;
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_a_2670_);
lean_dec(v___x_2669_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2675_; 
if (v_isShared_2673_ == 0)
{
v___x_2675_ = v___x_2672_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v_a_2670_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___redArg___boxed(lean_object* v_name_2678_, lean_object* v_bi_2679_, lean_object* v_type_2680_, lean_object* v_k_2681_, lean_object* v_kind_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_){
_start:
{
uint8_t v_bi_boxed_2693_; uint8_t v_kind_boxed_2694_; lean_object* v_res_2695_; 
v_bi_boxed_2693_ = lean_unbox(v_bi_2679_);
v_kind_boxed_2694_ = lean_unbox(v_kind_2682_);
v_res_2695_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___redArg(v_name_2678_, v_bi_boxed_2693_, v_type_2680_, v_k_2681_, v_kind_boxed_2694_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
lean_dec(v___y_2685_);
lean_dec_ref(v___y_2684_);
lean_dec(v___y_2683_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0___redArg(lean_object* v_name_2696_, lean_object* v_type_2697_, lean_object* v_k_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_){
_start:
{
uint8_t v___x_2709_; uint8_t v___x_2710_; lean_object* v___x_2711_; 
v___x_2709_ = 0;
v___x_2710_ = 0;
v___x_2711_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___redArg(v_name_2696_, v___x_2709_, v_type_2697_, v_k_2698_, v___x_2710_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0___redArg___boxed(lean_object* v_name_2712_, lean_object* v_type_2713_, lean_object* v_k_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_){
_start:
{
lean_object* v_res_2725_; 
v_res_2725_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0___redArg(v_name_2712_, v_type_2713_, v_k_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, v___y_2723_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
lean_dec(v___y_2721_);
lean_dec_ref(v___y_2720_);
lean_dec(v___y_2719_);
lean_dec_ref(v___y_2718_);
lean_dec(v___y_2717_);
lean_dec_ref(v___y_2716_);
lean_dec(v___y_2715_);
return v_res_2725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_reduceCtorEq(lean_object* v_e_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_){
_start:
{
lean_object* v___x_2743_; uint8_t v___x_2744_; 
v___x_2743_ = l_Lean_Expr_cleanupAnnotations(v_e_2729_);
v___x_2744_ = l_Lean_Expr_isApp(v___x_2743_);
if (v___x_2744_ == 0)
{
lean_dec_ref(v___x_2743_);
lean_dec_ref(v_e_2729_);
goto v___jp_2740_;
}
else
{
lean_object* v___x_2745_; uint8_t v___x_2746_; 
v___x_2745_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2743_);
v___x_2746_ = l_Lean_Expr_isApp(v___x_2745_);
if (v___x_2746_ == 0)
{
lean_dec_ref(v___x_2745_);
lean_dec_ref(v___x_2743_);
lean_dec_ref(v_e_2729_);
goto v___jp_2740_;
}
else
{
lean_object* v___x_2747_; uint8_t v___x_2748_; 
v___x_2747_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2745_);
v___x_2748_ = l_Lean_Expr_isApp(v___x_2747_);
if (v___x_2748_ == 0)
{
lean_dec_ref(v___x_2747_);
lean_dec_ref(v___x_2745_);
lean_dec_ref(v___x_2743_);
lean_dec_ref(v_e_2729_);
goto v___jp_2740_;
}
else
{
lean_object* v___x_2749_; lean_object* v___x_2750_; uint8_t v___x_2751_; 
v___x_2749_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2747_);
lean_dec_ref(v___x_2747_);
v___x_2750_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpEq___closed__1));
v___x_2751_ = l_Lean_Expr_isConstOf(v___x_2749_, v___x_2750_);
lean_dec_ref(v___x_2749_);
if (v___x_2751_ == 0)
{
lean_dec_ref(v___x_2745_);
lean_dec_ref(v___x_2743_);
lean_dec_ref(v_e_2729_);
goto v___jp_2740_;
}
else
{
lean_object* v_arg_2752_; lean_object* v_arg_2753_; lean_object* v___x_2754_; 
v_arg_2752_ = lean_ctor_get(v___x_2743_, 1);
lean_inc_ref(v_arg_2752_);
lean_dec_ref(v___x_2743_);
v_arg_2753_ = lean_ctor_get(v___x_2745_, 1);
lean_inc_ref(v_arg_2753_);
lean_dec_ref(v___x_2745_);
v___x_2754_ = l_Lean_Meta_isConstructorApp_x3f(v_arg_2753_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_);
if (lean_obj_tag(v___x_2754_) == 0)
{
lean_object* v_a_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2824_; 
v_a_2755_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2824_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2757_ = v___x_2754_;
v_isShared_2758_ = v_isSharedCheck_2824_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_a_2755_);
lean_dec(v___x_2754_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2824_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
if (lean_obj_tag(v_a_2755_) == 1)
{
lean_object* v_val_2759_; lean_object* v___x_2760_; 
lean_del_object(v___x_2757_);
v_val_2759_ = lean_ctor_get(v_a_2755_, 0);
lean_inc(v_val_2759_);
lean_dec_ref_known(v_a_2755_, 1);
v___x_2760_ = l_Lean_Meta_isConstructorApp_x3f(v_arg_2752_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_);
if (lean_obj_tag(v___x_2760_) == 0)
{
lean_object* v_a_2761_; lean_object* v___x_2763_; uint8_t v_isShared_2764_; uint8_t v_isSharedCheck_2811_; 
v_a_2761_ = lean_ctor_get(v___x_2760_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2760_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2763_ = v___x_2760_;
v_isShared_2764_ = v_isSharedCheck_2811_;
goto v_resetjp_2762_;
}
else
{
lean_inc(v_a_2761_);
lean_dec(v___x_2760_);
v___x_2763_ = lean_box(0);
v_isShared_2764_ = v_isSharedCheck_2811_;
goto v_resetjp_2762_;
}
v_resetjp_2762_:
{
if (lean_obj_tag(v_a_2761_) == 1)
{
lean_object* v_toConstantVal_2765_; lean_object* v_val_2766_; lean_object* v_toConstantVal_2767_; lean_object* v_name_2768_; lean_object* v_name_2769_; uint8_t v___x_2770_; 
v_toConstantVal_2765_ = lean_ctor_get(v_val_2759_, 0);
lean_inc_ref(v_toConstantVal_2765_);
lean_dec(v_val_2759_);
v_val_2766_ = lean_ctor_get(v_a_2761_, 0);
lean_inc(v_val_2766_);
lean_dec_ref_known(v_a_2761_, 1);
v_toConstantVal_2767_ = lean_ctor_get(v_val_2766_, 0);
lean_inc_ref(v_toConstantVal_2767_);
lean_dec(v_val_2766_);
v_name_2768_ = lean_ctor_get(v_toConstantVal_2765_, 0);
lean_inc(v_name_2768_);
lean_dec_ref(v_toConstantVal_2765_);
v_name_2769_ = lean_ctor_get(v_toConstantVal_2767_, 0);
lean_inc(v_name_2769_);
lean_dec_ref(v_toConstantVal_2767_);
v___x_2770_ = lean_name_eq(v_name_2768_, v_name_2769_);
lean_dec(v_name_2769_);
lean_dec(v_name_2768_);
if (v___x_2770_ == 0)
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___f_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
lean_del_object(v___x_2763_);
v___x_2771_ = lean_box(v___x_2770_);
v___x_2772_ = lean_box(v___x_2751_);
v___f_2773_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0___boxed), 13, 2);
lean_closure_set(v___f_2773_, 0, v___x_2771_);
lean_closure_set(v___f_2773_, 1, v___x_2772_);
v___x_2774_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_reduceCtorEq___closed__1));
v___x_2775_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0___redArg(v___x_2774_, v_e_2729_, v___f_2773_, v_a_2730_, v_a_2731_, v_a_2732_, v_a_2733_, v_a_2734_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_object* v_a_2776_; lean_object* v___x_2777_; 
v_a_2776_ = lean_ctor_get(v___x_2775_, 0);
lean_inc(v_a_2776_);
lean_dec_ref_known(v___x_2775_, 1);
v___x_2777_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_2733_);
if (lean_obj_tag(v___x_2777_) == 0)
{
lean_object* v_a_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2786_; 
v_a_2778_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2780_ = v___x_2777_;
v_isShared_2781_ = v_isSharedCheck_2786_;
goto v_resetjp_2779_;
}
else
{
lean_inc(v_a_2778_);
lean_dec(v___x_2777_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2786_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v___x_2782_; lean_object* v___x_2784_; 
v___x_2782_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2782_, 0, v_a_2778_);
lean_ctor_set(v___x_2782_, 1, v_a_2776_);
lean_ctor_set_uint8(v___x_2782_, sizeof(void*)*2, v___x_2751_);
lean_ctor_set_uint8(v___x_2782_, sizeof(void*)*2 + 1, v___x_2770_);
if (v_isShared_2781_ == 0)
{
lean_ctor_set(v___x_2780_, 0, v___x_2782_);
v___x_2784_ = v___x_2780_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v___x_2782_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
return v___x_2784_;
}
}
}
else
{
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2794_; 
lean_dec(v_a_2776_);
v_a_2787_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2789_ = v___x_2777_;
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___x_2777_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2792_; 
if (v_isShared_2790_ == 0)
{
v___x_2792_ = v___x_2789_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v_a_2787_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
}
}
else
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2802_; 
v_a_2795_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2797_ = v___x_2775_;
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2775_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2800_; 
if (v_isShared_2798_ == 0)
{
v___x_2800_ = v___x_2797_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_a_2795_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
return v___x_2800_;
}
}
}
}
else
{
lean_object* v___x_2803_; lean_object* v___x_2805_; 
lean_dec_ref(v_e_2729_);
v___x_2803_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
if (v_isShared_2764_ == 0)
{
lean_ctor_set(v___x_2763_, 0, v___x_2803_);
v___x_2805_ = v___x_2763_;
goto v_reusejp_2804_;
}
else
{
lean_object* v_reuseFailAlloc_2806_; 
v_reuseFailAlloc_2806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2806_, 0, v___x_2803_);
v___x_2805_ = v_reuseFailAlloc_2806_;
goto v_reusejp_2804_;
}
v_reusejp_2804_:
{
return v___x_2805_;
}
}
}
else
{
lean_object* v___x_2807_; lean_object* v___x_2809_; 
lean_dec(v_a_2761_);
lean_dec(v_val_2759_);
lean_dec_ref(v_e_2729_);
v___x_2807_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
if (v_isShared_2764_ == 0)
{
lean_ctor_set(v___x_2763_, 0, v___x_2807_);
v___x_2809_ = v___x_2763_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v___x_2807_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
}
}
else
{
lean_object* v_a_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2819_; 
lean_dec(v_val_2759_);
lean_dec_ref(v_e_2729_);
v_a_2812_ = lean_ctor_get(v___x_2760_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2760_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2814_ = v___x_2760_;
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_a_2812_);
lean_dec(v___x_2760_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
lean_object* v___x_2817_; 
if (v_isShared_2815_ == 0)
{
v___x_2817_ = v___x_2814_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v_a_2812_);
v___x_2817_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
return v___x_2817_;
}
}
}
}
else
{
lean_object* v___x_2820_; lean_object* v___x_2822_; 
lean_dec(v_a_2755_);
lean_dec_ref(v_arg_2752_);
lean_dec_ref(v_e_2729_);
v___x_2820_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
if (v_isShared_2758_ == 0)
{
lean_ctor_set(v___x_2757_, 0, v___x_2820_);
v___x_2822_ = v___x_2757_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v___x_2820_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
return v___x_2822_;
}
}
}
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec_ref(v_arg_2752_);
lean_dec_ref(v_e_2729_);
v_a_2825_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2754_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2754_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_a_2825_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
}
}
}
}
v___jp_2740_:
{
lean_object* v___x_2741_; lean_object* v___x_2742_; 
v___x_2741_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_2742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2741_);
return v___x_2742_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_reduceCtorEq___boxed(lean_object* v_e_2833_, lean_object* v_a_2834_, lean_object* v_a_2835_, lean_object* v_a_2836_, lean_object* v_a_2837_, lean_object* v_a_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_){
_start:
{
lean_object* v_res_2844_; 
v_res_2844_ = l_Lean_Meta_Grind_NormSym_reduceCtorEq(v_e_2833_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
lean_dec(v_a_2842_);
lean_dec_ref(v_a_2841_);
lean_dec(v_a_2840_);
lean_dec_ref(v_a_2839_);
lean_dec(v_a_2838_);
lean_dec_ref(v_a_2837_);
lean_dec(v_a_2836_);
lean_dec_ref(v_a_2835_);
lean_dec(v_a_2834_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0(lean_object* v_00_u03b1_2845_, lean_object* v_name_2846_, uint8_t v_bi_2847_, lean_object* v_type_2848_, lean_object* v_k_2849_, uint8_t v_kind_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_){
_start:
{
lean_object* v___x_2861_; 
v___x_2861_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___redArg(v_name_2846_, v_bi_2847_, v_type_2848_, v_k_2849_, v_kind_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_);
return v___x_2861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2862_, lean_object* v_name_2863_, lean_object* v_bi_2864_, lean_object* v_type_2865_, lean_object* v_k_2866_, lean_object* v_kind_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_){
_start:
{
uint8_t v_bi_boxed_2878_; uint8_t v_kind_boxed_2879_; lean_object* v_res_2880_; 
v_bi_boxed_2878_ = lean_unbox(v_bi_2864_);
v_kind_boxed_2879_ = lean_unbox(v_kind_2867_);
v_res_2880_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0(v_00_u03b1_2862_, v_name_2863_, v_bi_boxed_2878_, v_type_2865_, v_k_2866_, v_kind_boxed_2879_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_, v___y_2876_);
lean_dec(v___y_2876_);
lean_dec_ref(v___y_2875_);
lean_dec(v___y_2874_);
lean_dec_ref(v___y_2873_);
lean_dec(v___y_2872_);
lean_dec_ref(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec_ref(v___y_2869_);
lean_dec(v___y_2868_);
return v_res_2880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0(lean_object* v_00_u03b1_2881_, lean_object* v_name_2882_, lean_object* v_type_2883_, lean_object* v_k_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_){
_start:
{
lean_object* v___x_2895_; 
v___x_2895_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0___redArg(v_name_2882_, v_type_2883_, v_k_2884_, v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_);
return v___x_2895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0___boxed(lean_object* v_00_u03b1_2896_, lean_object* v_name_2897_, lean_object* v_type_2898_, lean_object* v_k_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_){
_start:
{
lean_object* v_res_2910_; 
v_res_2910_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0(v_00_u03b1_2896_, v_name_2897_, v_type_2898_, v_k_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_);
lean_dec(v___y_2908_);
lean_dec_ref(v___y_2907_);
lean_dec(v___y_2906_);
lean_dec_ref(v___y_2905_);
lean_dec(v___y_2904_);
lean_dec_ref(v___y_2903_);
lean_dec(v___y_2902_);
lean_dec_ref(v___y_2901_);
lean_dec(v___y_2900_);
return v_res_2910_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isForallOrNot_x3f(lean_object* v_e_2911_){
_start:
{
if (lean_obj_tag(v_e_2911_) == 7)
{
lean_object* v_binderName_2912_; lean_object* v_binderType_2913_; lean_object* v_body_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; 
v_binderName_2912_ = lean_ctor_get(v_e_2911_, 0);
v_binderType_2913_ = lean_ctor_get(v_e_2911_, 1);
v_body_2914_ = lean_ctor_get(v_e_2911_, 2);
lean_inc_ref(v_body_2914_);
lean_inc_ref(v_binderType_2913_);
v___x_2915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2915_, 0, v_binderType_2913_);
lean_ctor_set(v___x_2915_, 1, v_body_2914_);
lean_inc(v_binderName_2912_);
v___x_2916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2916_, 0, v_binderName_2912_);
lean_ctor_set(v___x_2916_, 1, v___x_2915_);
v___x_2917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2917_, 0, v___x_2916_);
return v___x_2917_;
}
else
{
lean_object* v___x_2918_; lean_object* v___x_2919_; uint8_t v___x_2920_; 
v___x_2918_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS___closed__1));
v___x_2919_ = lean_unsigned_to_nat(1u);
v___x_2920_ = l_Lean_Expr_isAppOfArity(v_e_2911_, v___x_2918_, v___x_2919_);
if (v___x_2920_ == 0)
{
lean_object* v___x_2921_; 
v___x_2921_ = lean_box(0);
return v___x_2921_;
}
else
{
lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; 
v___x_2922_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__33));
v___x_2923_ = l_Lean_Expr_appArg_x21(v_e_2911_);
v___x_2924_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0___closed__0, &l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_NormSym_reduceCtorEq___lam__0___closed__0);
v___x_2925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2923_);
lean_ctor_set(v___x_2925_, 1, v___x_2924_);
v___x_2926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2926_, 0, v___x_2922_);
lean_ctor_set(v___x_2926_, 1, v___x_2925_);
v___x_2927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2926_);
return v___x_2927_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isForallOrNot_x3f___boxed(lean_object* v_e_2928_){
_start:
{
lean_object* v_res_2929_; 
v_res_2929_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isForallOrNot_x3f(v_e_2928_);
lean_dec_ref(v_e_2928_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___lam__0(lean_object* v_fst_2930_, lean_object* v_a_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_){
_start:
{
lean_object* v___x_2942_; lean_object* v___x_2943_; 
v___x_2942_ = lean_expr_instantiate1(v_fst_2930_, v_a_2931_);
v___x_2943_ = l_Lean_Meta_getLevel(v___x_2942_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
return v___x_2943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___lam__0___boxed(lean_object* v_fst_2944_, lean_object* v_a_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_){
_start:
{
lean_object* v_res_2956_; 
v_res_2956_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___lam__0(v_fst_2944_, v_a_2945_, v___y_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_);
lean_dec(v___y_2954_);
lean_dec_ref(v___y_2953_);
lean_dec(v___y_2952_);
lean_dec_ref(v___y_2951_);
lean_dec(v___y_2950_);
lean_dec_ref(v___y_2949_);
lean_dec(v___y_2948_);
lean_dec_ref(v___y_2947_);
lean_dec(v___y_2946_);
lean_dec_ref(v_a_2945_);
lean_dec_ref(v_fst_2944_);
return v_res_2956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f(lean_object* v_e_2967_, lean_object* v_a_2968_, lean_object* v_a_2969_, lean_object* v_a_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_){
_start:
{
if (lean_obj_tag(v_e_2967_) == 7)
{
lean_object* v_binderName_2981_; lean_object* v_binderType_2982_; lean_object* v_body_2983_; uint8_t v_binderInfo_2984_; lean_object* v___x_2985_; uint8_t v___x_2986_; 
v_binderName_2981_ = lean_ctor_get(v_e_2967_, 0);
lean_inc(v_binderName_2981_);
v_binderType_2982_ = lean_ctor_get(v_e_2967_, 1);
lean_inc_ref(v_binderType_2982_);
v_body_2983_ = lean_ctor_get(v_e_2967_, 2);
lean_inc_ref(v_body_2983_);
v_binderInfo_2984_ = lean_ctor_get_uint8(v_e_2967_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2967_, 3);
v___x_2985_ = l_Lean_Expr_cleanupAnnotations(v_body_2983_);
lean_dec_ref(v_body_2983_);
v___x_2986_ = l_Lean_Expr_isApp(v___x_2985_);
if (v___x_2986_ == 0)
{
lean_dec_ref(v___x_2985_);
lean_dec_ref(v_binderType_2982_);
lean_dec(v_binderName_2981_);
goto v___jp_2978_;
}
else
{
lean_object* v___x_2987_; uint8_t v___x_2988_; 
v___x_2987_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2985_);
v___x_2988_ = l_Lean_Expr_isApp(v___x_2987_);
if (v___x_2988_ == 0)
{
lean_dec_ref(v___x_2987_);
lean_dec_ref(v___x_2985_);
lean_dec_ref(v_binderType_2982_);
lean_dec(v_binderName_2981_);
goto v___jp_2978_;
}
else
{
lean_object* v___x_2989_; lean_object* v___x_2990_; uint8_t v___x_2991_; 
v___x_2989_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2987_);
v___x_2990_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___closed__1));
v___x_2991_ = l_Lean_Expr_isConstOf(v___x_2989_, v___x_2990_);
lean_dec_ref(v___x_2989_);
if (v___x_2991_ == 0)
{
lean_dec_ref(v___x_2987_);
lean_dec_ref(v___x_2985_);
lean_dec_ref(v_binderType_2982_);
lean_dec(v_binderName_2981_);
goto v___jp_2978_;
}
else
{
lean_object* v_arg_2992_; lean_object* v_arg_2993_; lean_object* v___x_2994_; 
v_arg_2992_ = lean_ctor_get(v___x_2985_, 1);
lean_inc_ref(v_arg_2992_);
lean_dec_ref(v___x_2985_);
v_arg_2993_ = lean_ctor_get(v___x_2987_, 1);
lean_inc_ref(v_arg_2993_);
lean_dec_ref(v___x_2987_);
v___x_2994_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isForallOrNot_x3f(v_arg_2993_);
if (lean_obj_tag(v___x_2994_) == 1)
{
lean_object* v_val_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3101_; 
lean_dec_ref(v_arg_2993_);
v_val_2995_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_2997_ = v___x_2994_;
v_isShared_2998_ = v_isSharedCheck_3101_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_val_2995_);
lean_dec(v___x_2994_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3101_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v_snd_2999_; lean_object* v_fst_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3100_; 
v_snd_2999_ = lean_ctor_get(v_val_2995_, 1);
v_fst_3000_ = lean_ctor_get(v_val_2995_, 0);
v_isSharedCheck_3100_ = !lean_is_exclusive(v_val_2995_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3002_ = v_val_2995_;
v_isShared_3003_ = v_isSharedCheck_3100_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_snd_2999_);
lean_inc(v_fst_3000_);
lean_dec(v_val_2995_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3100_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v_fst_3004_; lean_object* v_snd_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3099_; 
v_fst_3004_ = lean_ctor_get(v_snd_2999_, 0);
v_snd_3005_ = lean_ctor_get(v_snd_2999_, 1);
v_isSharedCheck_3099_ = !lean_is_exclusive(v_snd_2999_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3007_ = v_snd_2999_;
v_isShared_3008_ = v_isSharedCheck_3099_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_snd_3005_);
lean_inc(v_fst_3004_);
lean_dec(v_snd_2999_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3099_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___f_3009_; lean_object* v_p_3010_; uint8_t v___x_3011_; lean_object* v___x_3012_; lean_object* v_q_3013_; lean_object* v_00_u03b2_3014_; lean_object* v___x_3015_; 
lean_inc_n(v_fst_3004_, 3);
v___f_3009_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___lam__0___boxed), 12, 1);
lean_closure_set(v___f_3009_, 0, v_fst_3004_);
lean_inc_ref(v_arg_2992_);
lean_inc_ref_n(v_binderType_2982_, 4);
lean_inc_n(v_binderName_2981_, 3);
v_p_3010_ = l_Lean_mkLambda(v_binderName_2981_, v_binderInfo_2984_, v_binderType_2982_, v_arg_2992_);
v___x_3011_ = 0;
lean_inc(v_snd_3005_);
lean_inc(v_fst_3000_);
v___x_3012_ = l_Lean_mkLambda(v_fst_3000_, v___x_3011_, v_fst_3004_, v_snd_3005_);
v_q_3013_ = l_Lean_mkLambda(v_binderName_2981_, v_binderInfo_2984_, v_binderType_2982_, v___x_3012_);
v_00_u03b2_3014_ = l_Lean_mkLambda(v_binderName_2981_, v_binderInfo_2984_, v_binderType_2982_, v_fst_3004_);
v___x_3015_ = l_Lean_Meta_Sym_getLevel___redArg(v_binderType_2982_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_);
if (lean_obj_tag(v___x_3015_) == 0)
{
lean_object* v_a_3016_; lean_object* v___x_3017_; 
v_a_3016_ = lean_ctor_get(v___x_3015_, 0);
lean_inc(v_a_3016_);
lean_dec_ref_known(v___x_3015_, 1);
lean_inc_ref(v_binderType_2982_);
lean_inc(v_binderName_2981_);
v___x_3017_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0___redArg(v_binderName_2981_, v_binderType_2982_, v___f_3009_, v_a_2968_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_);
if (lean_obj_tag(v___x_3017_) == 0)
{
lean_object* v_a_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; 
v_a_3018_ = lean_ctor_get(v___x_3017_, 0);
lean_inc(v_a_3018_);
lean_dec_ref_known(v___x_3017_, 1);
v___x_3019_ = lean_unsigned_to_nat(0u);
v___x_3020_ = lean_unsigned_to_nat(1u);
v___x_3021_ = lean_expr_lift_loose_bvars(v_arg_2992_, v___x_3019_, v___x_3020_);
lean_dec_ref(v_arg_2992_);
v___x_3022_ = l_Lean_Meta_Sym_shareCommonInc(v___x_3021_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_);
if (lean_obj_tag(v___x_3022_) == 0)
{
lean_object* v_a_3023_; lean_object* v___x_3024_; 
v_a_3023_ = lean_ctor_get(v___x_3022_, 0);
lean_inc(v_a_3023_);
lean_dec_ref_known(v___x_3022_, 1);
v___x_3024_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg(v_snd_3005_, v_a_3023_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_);
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_object* v_a_3025_; lean_object* v___x_3026_; 
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_a_3025_);
lean_dec_ref_known(v___x_3024_, 1);
v___x_3026_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2___redArg(v_fst_3000_, v___x_3011_, v_fst_3004_, v_a_3025_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_);
if (lean_obj_tag(v___x_3026_) == 0)
{
lean_object* v_a_3027_; lean_object* v___x_3028_; 
v_a_3027_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_a_3027_);
lean_dec_ref_known(v___x_3026_, 1);
lean_inc_ref(v_binderType_2982_);
v___x_3028_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2___redArg(v_binderName_2981_, v_binderInfo_2984_, v_binderType_2982_, v_a_3027_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_);
if (lean_obj_tag(v___x_3028_) == 0)
{
lean_object* v_a_3029_; lean_object* v___x_3031_; uint8_t v_isShared_3032_; uint8_t v_isSharedCheck_3050_; 
v_a_3029_ = lean_ctor_get(v___x_3028_, 0);
v_isSharedCheck_3050_ = !lean_is_exclusive(v___x_3028_);
if (v_isSharedCheck_3050_ == 0)
{
v___x_3031_ = v___x_3028_;
v_isShared_3032_ = v_isSharedCheck_3050_;
goto v_resetjp_3030_;
}
else
{
lean_inc(v_a_3029_);
lean_dec(v___x_3028_);
v___x_3031_ = lean_box(0);
v_isShared_3032_ = v_isSharedCheck_3050_;
goto v_resetjp_3030_;
}
v_resetjp_3030_:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3036_; 
v___x_3033_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__1));
v___x_3034_ = lean_box(0);
if (v_isShared_3003_ == 0)
{
lean_ctor_set_tag(v___x_3002_, 1);
lean_ctor_set(v___x_3002_, 1, v___x_3034_);
lean_ctor_set(v___x_3002_, 0, v_a_3018_);
v___x_3036_ = v___x_3002_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v_a_3018_);
lean_ctor_set(v_reuseFailAlloc_3049_, 1, v___x_3034_);
v___x_3036_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3041_; 
v___x_3037_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3037_, 0, v_a_3016_);
lean_ctor_set(v___x_3037_, 1, v___x_3036_);
v___x_3038_ = l_Lean_mkConst(v___x_3033_, v___x_3037_);
v___x_3039_ = l_Lean_mkApp4(v___x_3038_, v_binderType_2982_, v_00_u03b2_3014_, v_p_3010_, v_q_3013_);
if (v_isShared_3008_ == 0)
{
lean_ctor_set(v___x_3007_, 1, v___x_3039_);
lean_ctor_set(v___x_3007_, 0, v_a_3029_);
v___x_3041_ = v___x_3007_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_a_3029_);
lean_ctor_set(v_reuseFailAlloc_3048_, 1, v___x_3039_);
v___x_3041_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
lean_object* v___x_3043_; 
if (v_isShared_2998_ == 0)
{
lean_ctor_set(v___x_2997_, 0, v___x_3041_);
v___x_3043_ = v___x_2997_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v___x_3041_);
v___x_3043_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
lean_object* v___x_3045_; 
if (v_isShared_3032_ == 0)
{
lean_ctor_set(v___x_3031_, 0, v___x_3043_);
v___x_3045_ = v___x_3031_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v___x_3043_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
}
}
}
}
else
{
lean_object* v_a_3051_; lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3058_; 
lean_dec(v_a_3018_);
lean_dec(v_a_3016_);
lean_dec_ref(v_00_u03b2_3014_);
lean_dec_ref(v_q_3013_);
lean_dec_ref(v_p_3010_);
lean_del_object(v___x_3007_);
lean_del_object(v___x_3002_);
lean_del_object(v___x_2997_);
lean_dec_ref(v_binderType_2982_);
v_a_3051_ = lean_ctor_get(v___x_3028_, 0);
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_3028_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_3053_ = v___x_3028_;
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
else
{
lean_inc(v_a_3051_);
lean_dec(v___x_3028_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v___x_3056_; 
if (v_isShared_3054_ == 0)
{
v___x_3056_ = v___x_3053_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v_a_3051_);
v___x_3056_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
return v___x_3056_;
}
}
}
}
else
{
lean_object* v_a_3059_; lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3066_; 
lean_dec(v_a_3018_);
lean_dec(v_a_3016_);
lean_dec_ref(v_00_u03b2_3014_);
lean_dec_ref(v_q_3013_);
lean_dec_ref(v_p_3010_);
lean_del_object(v___x_3007_);
lean_del_object(v___x_3002_);
lean_del_object(v___x_2997_);
lean_dec_ref(v_binderType_2982_);
lean_dec(v_binderName_2981_);
v_a_3059_ = lean_ctor_get(v___x_3026_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_3026_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3061_ = v___x_3026_;
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
else
{
lean_inc(v_a_3059_);
lean_dec(v___x_3026_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v___x_3064_; 
if (v_isShared_3062_ == 0)
{
v___x_3064_ = v___x_3061_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_a_3059_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
}
else
{
lean_object* v_a_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3074_; 
lean_dec(v_a_3018_);
lean_dec(v_a_3016_);
lean_dec_ref(v_00_u03b2_3014_);
lean_dec_ref(v_q_3013_);
lean_dec_ref(v_p_3010_);
lean_del_object(v___x_3007_);
lean_dec(v_fst_3004_);
lean_del_object(v___x_3002_);
lean_dec(v_fst_3000_);
lean_del_object(v___x_2997_);
lean_dec_ref(v_binderType_2982_);
lean_dec(v_binderName_2981_);
v_a_3067_ = lean_ctor_get(v___x_3024_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3024_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3069_ = v___x_3024_;
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_a_3067_);
lean_dec(v___x_3024_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3072_; 
if (v_isShared_3070_ == 0)
{
v___x_3072_ = v___x_3069_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v_a_3067_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
return v___x_3072_;
}
}
}
}
else
{
lean_object* v_a_3075_; lean_object* v___x_3077_; uint8_t v_isShared_3078_; uint8_t v_isSharedCheck_3082_; 
lean_dec(v_a_3018_);
lean_dec(v_a_3016_);
lean_dec_ref(v_00_u03b2_3014_);
lean_dec_ref(v_q_3013_);
lean_dec_ref(v_p_3010_);
lean_del_object(v___x_3007_);
lean_dec(v_snd_3005_);
lean_dec(v_fst_3004_);
lean_del_object(v___x_3002_);
lean_dec(v_fst_3000_);
lean_del_object(v___x_2997_);
lean_dec_ref(v_binderType_2982_);
lean_dec(v_binderName_2981_);
v_a_3075_ = lean_ctor_get(v___x_3022_, 0);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3022_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3077_ = v___x_3022_;
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
else
{
lean_inc(v_a_3075_);
lean_dec(v___x_3022_);
v___x_3077_ = lean_box(0);
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
v_resetjp_3076_:
{
lean_object* v___x_3080_; 
if (v_isShared_3078_ == 0)
{
v___x_3080_ = v___x_3077_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v_a_3075_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
}
else
{
lean_object* v_a_3083_; lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3090_; 
lean_dec(v_a_3016_);
lean_dec_ref(v_00_u03b2_3014_);
lean_dec_ref(v_q_3013_);
lean_dec_ref(v_p_3010_);
lean_del_object(v___x_3007_);
lean_dec(v_snd_3005_);
lean_dec(v_fst_3004_);
lean_del_object(v___x_3002_);
lean_dec(v_fst_3000_);
lean_del_object(v___x_2997_);
lean_dec_ref(v_arg_2992_);
lean_dec_ref(v_binderType_2982_);
lean_dec(v_binderName_2981_);
v_a_3083_ = lean_ctor_get(v___x_3017_, 0);
v_isSharedCheck_3090_ = !lean_is_exclusive(v___x_3017_);
if (v_isSharedCheck_3090_ == 0)
{
v___x_3085_ = v___x_3017_;
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
else
{
lean_inc(v_a_3083_);
lean_dec(v___x_3017_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3088_; 
if (v_isShared_3086_ == 0)
{
v___x_3088_ = v___x_3085_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v_a_3083_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
return v___x_3088_;
}
}
}
}
else
{
lean_object* v_a_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3098_; 
lean_dec_ref(v_00_u03b2_3014_);
lean_dec_ref(v_q_3013_);
lean_dec_ref(v_p_3010_);
lean_dec_ref(v___f_3009_);
lean_del_object(v___x_3007_);
lean_dec(v_snd_3005_);
lean_dec(v_fst_3004_);
lean_del_object(v___x_3002_);
lean_dec(v_fst_3000_);
lean_del_object(v___x_2997_);
lean_dec_ref(v_arg_2992_);
lean_dec_ref(v_binderType_2982_);
lean_dec(v_binderName_2981_);
v_a_3091_ = lean_ctor_get(v___x_3015_, 0);
v_isSharedCheck_3098_ = !lean_is_exclusive(v___x_3015_);
if (v_isSharedCheck_3098_ == 0)
{
v___x_3093_ = v___x_3015_;
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_a_3091_);
lean_dec(v___x_3015_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v___x_3096_; 
if (v_isShared_3094_ == 0)
{
v___x_3096_ = v___x_3093_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v_a_3091_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
return v___x_3096_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3102_; 
lean_dec(v___x_2994_);
v___x_3102_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isForallOrNot_x3f(v_arg_2992_);
lean_dec_ref(v_arg_2992_);
if (lean_obj_tag(v___x_3102_) == 1)
{
lean_object* v_val_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3209_; 
v_val_3103_ = lean_ctor_get(v___x_3102_, 0);
v_isSharedCheck_3209_ = !lean_is_exclusive(v___x_3102_);
if (v_isSharedCheck_3209_ == 0)
{
v___x_3105_ = v___x_3102_;
v_isShared_3106_ = v_isSharedCheck_3209_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_val_3103_);
lean_dec(v___x_3102_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3209_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v_snd_3107_; lean_object* v_fst_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3208_; 
v_snd_3107_ = lean_ctor_get(v_val_3103_, 1);
v_fst_3108_ = lean_ctor_get(v_val_3103_, 0);
v_isSharedCheck_3208_ = !lean_is_exclusive(v_val_3103_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3110_ = v_val_3103_;
v_isShared_3111_ = v_isSharedCheck_3208_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_snd_3107_);
lean_inc(v_fst_3108_);
lean_dec(v_val_3103_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3208_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v_fst_3112_; lean_object* v_snd_3113_; lean_object* v___x_3115_; uint8_t v_isShared_3116_; uint8_t v_isSharedCheck_3207_; 
v_fst_3112_ = lean_ctor_get(v_snd_3107_, 0);
v_snd_3113_ = lean_ctor_get(v_snd_3107_, 1);
v_isSharedCheck_3207_ = !lean_is_exclusive(v_snd_3107_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3115_ = v_snd_3107_;
v_isShared_3116_ = v_isSharedCheck_3207_;
goto v_resetjp_3114_;
}
else
{
lean_inc(v_snd_3113_);
lean_inc(v_fst_3112_);
lean_dec(v_snd_3107_);
v___x_3115_ = lean_box(0);
v_isShared_3116_ = v_isSharedCheck_3207_;
goto v_resetjp_3114_;
}
v_resetjp_3114_:
{
lean_object* v___f_3117_; lean_object* v_p_3118_; uint8_t v___x_3119_; lean_object* v___x_3120_; lean_object* v_q_3121_; lean_object* v_00_u03b2_3122_; lean_object* v___x_3123_; 
lean_inc_n(v_fst_3112_, 3);
v___f_3117_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___lam__0___boxed), 12, 1);
lean_closure_set(v___f_3117_, 0, v_fst_3112_);
lean_inc_ref(v_arg_2993_);
lean_inc_ref_n(v_binderType_2982_, 4);
lean_inc_n(v_binderName_2981_, 3);
v_p_3118_ = l_Lean_mkLambda(v_binderName_2981_, v_binderInfo_2984_, v_binderType_2982_, v_arg_2993_);
v___x_3119_ = 0;
lean_inc(v_snd_3113_);
lean_inc(v_fst_3108_);
v___x_3120_ = l_Lean_mkLambda(v_fst_3108_, v___x_3119_, v_fst_3112_, v_snd_3113_);
v_q_3121_ = l_Lean_mkLambda(v_binderName_2981_, v_binderInfo_2984_, v_binderType_2982_, v___x_3120_);
v_00_u03b2_3122_ = l_Lean_mkLambda(v_binderName_2981_, v_binderInfo_2984_, v_binderType_2982_, v_fst_3112_);
v___x_3123_ = l_Lean_Meta_Sym_getLevel___redArg(v_binderType_2982_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v_a_3124_; lean_object* v___x_3125_; 
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
lean_inc(v_a_3124_);
lean_dec_ref_known(v___x_3123_, 1);
lean_inc_ref(v_binderType_2982_);
lean_inc(v_binderName_2981_);
v___x_3125_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0___redArg(v_binderName_2981_, v_binderType_2982_, v___f_3117_, v_a_2968_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_);
if (lean_obj_tag(v___x_3125_) == 0)
{
lean_object* v_a_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v_a_3126_ = lean_ctor_get(v___x_3125_, 0);
lean_inc(v_a_3126_);
lean_dec_ref_known(v___x_3125_, 1);
v___x_3127_ = lean_unsigned_to_nat(0u);
v___x_3128_ = lean_unsigned_to_nat(1u);
v___x_3129_ = lean_expr_lift_loose_bvars(v_arg_2993_, v___x_3127_, v___x_3128_);
lean_dec_ref(v_arg_2993_);
v___x_3130_ = l_Lean_Meta_Sym_shareCommonInc(v___x_3129_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_);
if (lean_obj_tag(v___x_3130_) == 0)
{
lean_object* v_a_3131_; lean_object* v___x_3132_; 
v_a_3131_ = lean_ctor_get(v___x_3130_, 0);
lean_inc(v_a_3131_);
lean_dec_ref_known(v___x_3130_, 1);
v___x_3132_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg(v_a_3131_, v_snd_3113_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_);
if (lean_obj_tag(v___x_3132_) == 0)
{
lean_object* v_a_3133_; lean_object* v___x_3134_; 
v_a_3133_ = lean_ctor_get(v___x_3132_, 0);
lean_inc(v_a_3133_);
lean_dec_ref_known(v___x_3132_, 1);
v___x_3134_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2___redArg(v_fst_3108_, v___x_3119_, v_fst_3112_, v_a_3133_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_);
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v_a_3135_; lean_object* v___x_3136_; 
v_a_3135_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_a_3135_);
lean_dec_ref_known(v___x_3134_, 1);
lean_inc_ref(v_binderType_2982_);
v___x_3136_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__2___redArg(v_binderName_2981_, v_binderInfo_2984_, v_binderType_2982_, v_a_3135_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_);
if (lean_obj_tag(v___x_3136_) == 0)
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3158_; 
v_a_3137_ = lean_ctor_get(v___x_3136_, 0);
v_isSharedCheck_3158_ = !lean_is_exclusive(v___x_3136_);
if (v_isSharedCheck_3158_ == 0)
{
v___x_3139_ = v___x_3136_;
v_isShared_3140_ = v_isSharedCheck_3158_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3136_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3158_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3144_; 
v___x_3141_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___closed__3));
v___x_3142_ = lean_box(0);
if (v_isShared_3111_ == 0)
{
lean_ctor_set_tag(v___x_3110_, 1);
lean_ctor_set(v___x_3110_, 1, v___x_3142_);
lean_ctor_set(v___x_3110_, 0, v_a_3126_);
v___x_3144_ = v___x_3110_;
goto v_reusejp_3143_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v_a_3126_);
lean_ctor_set(v_reuseFailAlloc_3157_, 1, v___x_3142_);
v___x_3144_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3143_;
}
v_reusejp_3143_:
{
lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3149_; 
v___x_3145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3145_, 0, v_a_3124_);
lean_ctor_set(v___x_3145_, 1, v___x_3144_);
v___x_3146_ = l_Lean_mkConst(v___x_3141_, v___x_3145_);
v___x_3147_ = l_Lean_mkApp4(v___x_3146_, v_binderType_2982_, v_00_u03b2_3122_, v_p_3118_, v_q_3121_);
if (v_isShared_3116_ == 0)
{
lean_ctor_set(v___x_3115_, 1, v___x_3147_);
lean_ctor_set(v___x_3115_, 0, v_a_3137_);
v___x_3149_ = v___x_3115_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v_a_3137_);
lean_ctor_set(v_reuseFailAlloc_3156_, 1, v___x_3147_);
v___x_3149_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
lean_object* v___x_3151_; 
if (v_isShared_3106_ == 0)
{
lean_ctor_set(v___x_3105_, 0, v___x_3149_);
v___x_3151_ = v___x_3105_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v___x_3149_);
v___x_3151_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
lean_object* v___x_3153_; 
if (v_isShared_3140_ == 0)
{
lean_ctor_set(v___x_3139_, 0, v___x_3151_);
v___x_3153_ = v___x_3139_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v___x_3151_);
v___x_3153_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
return v___x_3153_;
}
}
}
}
}
}
else
{
lean_object* v_a_3159_; lean_object* v___x_3161_; uint8_t v_isShared_3162_; uint8_t v_isSharedCheck_3166_; 
lean_dec(v_a_3126_);
lean_dec(v_a_3124_);
lean_dec_ref(v_00_u03b2_3122_);
lean_dec_ref(v_q_3121_);
lean_dec_ref(v_p_3118_);
lean_del_object(v___x_3115_);
lean_del_object(v___x_3110_);
lean_del_object(v___x_3105_);
lean_dec_ref(v_binderType_2982_);
v_a_3159_ = lean_ctor_get(v___x_3136_, 0);
v_isSharedCheck_3166_ = !lean_is_exclusive(v___x_3136_);
if (v_isSharedCheck_3166_ == 0)
{
v___x_3161_ = v___x_3136_;
v_isShared_3162_ = v_isSharedCheck_3166_;
goto v_resetjp_3160_;
}
else
{
lean_inc(v_a_3159_);
lean_dec(v___x_3136_);
v___x_3161_ = lean_box(0);
v_isShared_3162_ = v_isSharedCheck_3166_;
goto v_resetjp_3160_;
}
v_resetjp_3160_:
{
lean_object* v___x_3164_; 
if (v_isShared_3162_ == 0)
{
v___x_3164_ = v___x_3161_;
goto v_reusejp_3163_;
}
else
{
lean_object* v_reuseFailAlloc_3165_; 
v_reuseFailAlloc_3165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3165_, 0, v_a_3159_);
v___x_3164_ = v_reuseFailAlloc_3165_;
goto v_reusejp_3163_;
}
v_reusejp_3163_:
{
return v___x_3164_;
}
}
}
}
else
{
lean_object* v_a_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3174_; 
lean_dec(v_a_3126_);
lean_dec(v_a_3124_);
lean_dec_ref(v_00_u03b2_3122_);
lean_dec_ref(v_q_3121_);
lean_dec_ref(v_p_3118_);
lean_del_object(v___x_3115_);
lean_del_object(v___x_3110_);
lean_del_object(v___x_3105_);
lean_dec_ref(v_binderType_2982_);
lean_dec(v_binderName_2981_);
v_a_3167_ = lean_ctor_get(v___x_3134_, 0);
v_isSharedCheck_3174_ = !lean_is_exclusive(v___x_3134_);
if (v_isSharedCheck_3174_ == 0)
{
v___x_3169_ = v___x_3134_;
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_a_3167_);
lean_dec(v___x_3134_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
lean_object* v___x_3172_; 
if (v_isShared_3170_ == 0)
{
v___x_3172_ = v___x_3169_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v_a_3167_);
v___x_3172_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
return v___x_3172_;
}
}
}
}
else
{
lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3182_; 
lean_dec(v_a_3126_);
lean_dec(v_a_3124_);
lean_dec_ref(v_00_u03b2_3122_);
lean_dec_ref(v_q_3121_);
lean_dec_ref(v_p_3118_);
lean_del_object(v___x_3115_);
lean_dec(v_fst_3112_);
lean_del_object(v___x_3110_);
lean_dec(v_fst_3108_);
lean_del_object(v___x_3105_);
lean_dec_ref(v_binderType_2982_);
lean_dec(v_binderName_2981_);
v_a_3175_ = lean_ctor_get(v___x_3132_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3132_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3177_ = v___x_3132_;
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_a_3175_);
lean_dec(v___x_3132_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3180_; 
if (v_isShared_3178_ == 0)
{
v___x_3180_ = v___x_3177_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v_a_3175_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
return v___x_3180_;
}
}
}
}
else
{
lean_object* v_a_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3190_; 
lean_dec(v_a_3126_);
lean_dec(v_a_3124_);
lean_dec_ref(v_00_u03b2_3122_);
lean_dec_ref(v_q_3121_);
lean_dec_ref(v_p_3118_);
lean_del_object(v___x_3115_);
lean_dec(v_snd_3113_);
lean_dec(v_fst_3112_);
lean_del_object(v___x_3110_);
lean_dec(v_fst_3108_);
lean_del_object(v___x_3105_);
lean_dec_ref(v_binderType_2982_);
lean_dec(v_binderName_2981_);
v_a_3183_ = lean_ctor_get(v___x_3130_, 0);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3130_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3185_ = v___x_3130_;
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_a_3183_);
lean_dec(v___x_3130_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v___x_3188_; 
if (v_isShared_3186_ == 0)
{
v___x_3188_ = v___x_3185_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v_a_3183_);
v___x_3188_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
return v___x_3188_;
}
}
}
}
else
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3198_; 
lean_dec(v_a_3124_);
lean_dec_ref(v_00_u03b2_3122_);
lean_dec_ref(v_q_3121_);
lean_dec_ref(v_p_3118_);
lean_del_object(v___x_3115_);
lean_dec(v_snd_3113_);
lean_dec(v_fst_3112_);
lean_del_object(v___x_3110_);
lean_dec(v_fst_3108_);
lean_del_object(v___x_3105_);
lean_dec_ref(v_arg_2993_);
lean_dec_ref(v_binderType_2982_);
lean_dec(v_binderName_2981_);
v_a_3191_ = lean_ctor_get(v___x_3125_, 0);
v_isSharedCheck_3198_ = !lean_is_exclusive(v___x_3125_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3193_ = v___x_3125_;
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v___x_3125_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3196_; 
if (v_isShared_3194_ == 0)
{
v___x_3196_ = v___x_3193_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3197_; 
v_reuseFailAlloc_3197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3197_, 0, v_a_3191_);
v___x_3196_ = v_reuseFailAlloc_3197_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
return v___x_3196_;
}
}
}
}
else
{
lean_object* v_a_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3206_; 
lean_dec_ref(v_00_u03b2_3122_);
lean_dec_ref(v_q_3121_);
lean_dec_ref(v_p_3118_);
lean_dec_ref(v___f_3117_);
lean_del_object(v___x_3115_);
lean_dec(v_snd_3113_);
lean_dec(v_fst_3112_);
lean_del_object(v___x_3110_);
lean_dec(v_fst_3108_);
lean_del_object(v___x_3105_);
lean_dec_ref(v_arg_2993_);
lean_dec_ref(v_binderType_2982_);
lean_dec(v_binderName_2981_);
v_a_3199_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3206_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_3201_ = v___x_3123_;
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_a_3199_);
lean_dec(v___x_3123_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___x_3204_; 
if (v_isShared_3202_ == 0)
{
v___x_3204_ = v___x_3201_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v_a_3199_);
v___x_3204_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
return v___x_3204_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3210_; lean_object* v___x_3211_; 
lean_dec(v___x_3102_);
lean_dec_ref(v_arg_2993_);
lean_dec_ref(v_binderType_2982_);
lean_dec(v_binderName_2981_);
v___x_3210_ = lean_box(0);
v___x_3211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3211_, 0, v___x_3210_);
return v___x_3211_;
}
}
}
}
}
}
else
{
lean_object* v___x_3212_; lean_object* v___x_3213_; 
lean_dec_ref(v_e_2967_);
v___x_3212_ = lean_box(0);
v___x_3213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3213_, 0, v___x_3212_);
return v___x_3213_;
}
v___jp_2978_:
{
lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___x_2979_ = lean_box(0);
v___x_2980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
return v___x_2980_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f___boxed(lean_object* v_e_3214_, lean_object* v_a_3215_, lean_object* v_a_3216_, lean_object* v_a_3217_, lean_object* v_a_3218_, lean_object* v_a_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_){
_start:
{
lean_object* v_res_3225_; 
v_res_3225_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f(v_e_3214_, v_a_3215_, v_a_3216_, v_a_3217_, v_a_3218_, v_a_3219_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_);
lean_dec(v_a_3223_);
lean_dec_ref(v_a_3222_);
lean_dec(v_a_3221_);
lean_dec_ref(v_a_3220_);
lean_dec(v_a_3219_);
lean_dec_ref(v_a_3218_);
lean_dec(v_a_3217_);
lean_dec_ref(v_a_3216_);
lean_dec(v_a_3215_);
return v_res_3225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__0___redArg(lean_object* v_fvarId_3226_, lean_object* v___y_3227_){
_start:
{
lean_object* v___x_3229_; lean_object* v___x_3230_; 
v___x_3229_ = l_Lean_Expr_fvar___override(v_fvarId_3226_);
v___x_3230_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_3229_, v___y_3227_);
return v___x_3230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__0___redArg___boxed(lean_object* v_fvarId_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_){
_start:
{
lean_object* v_res_3234_; 
v_res_3234_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__0___redArg(v_fvarId_3231_, v___y_3232_);
lean_dec(v___y_3232_);
return v_res_3234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___redArg___lam__0(lean_object* v___y_3235_, lean_object* v_k_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v_b_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_){
_start:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; 
v___x_3247_ = l_Lean_Expr_fvarId_x21(v_b_3241_);
v___x_3248_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__0___redArg(v___x_3247_, v___y_3235_);
if (lean_obj_tag(v___x_3248_) == 0)
{
lean_object* v_a_3249_; lean_object* v___x_3250_; 
v_a_3249_ = lean_ctor_get(v___x_3248_, 0);
lean_inc(v_a_3249_);
lean_dec_ref_known(v___x_3248_, 1);
lean_inc(v___y_3245_);
lean_inc_ref(v___y_3244_);
lean_inc(v___y_3243_);
lean_inc_ref(v___y_3242_);
lean_inc(v___y_3235_);
lean_inc_ref(v___y_3240_);
lean_inc(v___y_3239_);
lean_inc_ref(v___y_3238_);
lean_inc(v___y_3237_);
v___x_3250_ = lean_apply_11(v_k_3236_, v_a_3249_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3235_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_, lean_box(0));
return v___x_3250_;
}
else
{
lean_object* v_a_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3258_; 
lean_dec_ref(v_k_3236_);
v_a_3251_ = lean_ctor_get(v___x_3248_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3248_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_3253_ = v___x_3248_;
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_a_3251_);
lean_dec(v___x_3248_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___x_3256_; 
if (v_isShared_3254_ == 0)
{
v___x_3256_ = v___x_3253_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v_a_3251_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___redArg___lam__0___boxed(lean_object* v___y_3259_, lean_object* v_k_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v_b_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_){
_start:
{
lean_object* v_res_3271_; 
v_res_3271_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___redArg___lam__0(v___y_3259_, v_k_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v_b_3265_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_);
lean_dec(v___y_3269_);
lean_dec_ref(v___y_3268_);
lean_dec(v___y_3267_);
lean_dec_ref(v___y_3266_);
lean_dec_ref(v_b_3265_);
lean_dec_ref(v___y_3264_);
lean_dec(v___y_3263_);
lean_dec_ref(v___y_3262_);
lean_dec(v___y_3261_);
lean_dec(v___y_3259_);
return v_res_3271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___redArg(lean_object* v_k_3272_, lean_object* v_name_3273_, uint8_t v_bi_3274_, lean_object* v_type_3275_, uint8_t v_kind_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_){
_start:
{
lean_object* v___f_3287_; lean_object* v___x_3288_; 
lean_inc_ref(v___y_3280_);
lean_inc(v___y_3279_);
lean_inc_ref(v___y_3278_);
lean_inc(v___y_3277_);
lean_inc(v___y_3281_);
v___f_3287_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___redArg___lam__0___boxed), 12, 6);
lean_closure_set(v___f_3287_, 0, v___y_3281_);
lean_closure_set(v___f_3287_, 1, v_k_3272_);
lean_closure_set(v___f_3287_, 2, v___y_3277_);
lean_closure_set(v___f_3287_, 3, v___y_3278_);
lean_closure_set(v___f_3287_, 4, v___y_3279_);
lean_closure_set(v___f_3287_, 5, v___y_3280_);
v___x_3288_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3273_, v_bi_3274_, v_type_3275_, v___f_3287_, v_kind_3276_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3288_) == 0)
{
return v___x_3288_;
}
else
{
lean_object* v_a_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3296_; 
v_a_3289_ = lean_ctor_get(v___x_3288_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3288_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3291_ = v___x_3288_;
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_a_3289_);
lean_dec(v___x_3288_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v___x_3294_; 
if (v_isShared_3292_ == 0)
{
v___x_3294_ = v___x_3291_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_a_3289_);
v___x_3294_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
return v___x_3294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___redArg___boxed(lean_object* v_k_3297_, lean_object* v_name_3298_, lean_object* v_bi_3299_, lean_object* v_type_3300_, lean_object* v_kind_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_){
_start:
{
uint8_t v_bi_boxed_3312_; uint8_t v_kind_boxed_3313_; lean_object* v_res_3314_; 
v_bi_boxed_3312_ = lean_unbox(v_bi_3299_);
v_kind_boxed_3313_ = lean_unbox(v_kind_3301_);
v_res_3314_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___redArg(v_k_3297_, v_name_3298_, v_bi_boxed_3312_, v_type_3300_, v_kind_boxed_3313_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_);
lean_dec(v___y_3310_);
lean_dec_ref(v___y_3309_);
lean_dec(v___y_3308_);
lean_dec_ref(v___y_3307_);
lean_dec(v___y_3306_);
lean_dec_ref(v___y_3305_);
lean_dec(v___y_3304_);
lean_dec_ref(v___y_3303_);
lean_dec(v___y_3302_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0___redArg(lean_object* v_name_3315_, uint8_t v_bi_3316_, lean_object* v_type_3317_, lean_object* v_k_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_){
_start:
{
uint8_t v___x_3329_; lean_object* v___x_3330_; 
v___x_3329_ = 0;
v___x_3330_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___redArg(v_k_3318_, v_name_3315_, v_bi_3316_, v_type_3317_, v___x_3329_, v___y_3319_, v___y_3320_, v___y_3321_, v___y_3322_, v___y_3323_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
return v___x_3330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0___redArg___boxed(lean_object* v_name_3331_, lean_object* v_bi_3332_, lean_object* v_type_3333_, lean_object* v_k_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_){
_start:
{
uint8_t v_bi_boxed_3345_; lean_object* v_res_3346_; 
v_bi_boxed_3345_ = lean_unbox(v_bi_3332_);
v_res_3346_ = l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0___redArg(v_name_3331_, v_bi_boxed_3345_, v_type_3333_, v_k_3334_, v___y_3335_, v___y_3336_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec(v___y_3339_);
lean_dec_ref(v___y_3338_);
lean_dec(v___y_3337_);
lean_dec_ref(v___y_3336_);
lean_dec(v___y_3335_);
return v_res_3346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go___lam__0___boxed(lean_object* v_xs_3347_, lean_object* v_body_3348_, lean_object* v_x_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_){
_start:
{
lean_object* v_res_3360_; 
v_res_3360_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go___lam__0(v_xs_3347_, v_body_3348_, v_x_3349_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_);
lean_dec(v___y_3358_);
lean_dec_ref(v___y_3357_);
lean_dec(v___y_3356_);
lean_dec_ref(v___y_3355_);
lean_dec(v___y_3354_);
lean_dec_ref(v___y_3353_);
lean_dec(v___y_3352_);
lean_dec_ref(v___y_3351_);
lean_dec(v___y_3350_);
return v_res_3360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go(lean_object* v_xs_3361_, lean_object* v_e_3362_, lean_object* v_a_3363_, lean_object* v_a_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_, lean_object* v_a_3368_, lean_object* v_a_3369_, lean_object* v_a_3370_, lean_object* v_a_3371_){
_start:
{
if (lean_obj_tag(v_e_3362_) == 7)
{
lean_object* v_binderName_3373_; lean_object* v_binderType_3374_; lean_object* v_body_3375_; uint8_t v_binderInfo_3376_; uint8_t v___x_3377_; 
v_binderName_3373_ = lean_ctor_get(v_e_3362_, 0);
v_binderType_3374_ = lean_ctor_get(v_e_3362_, 1);
v_body_3375_ = lean_ctor_get(v_e_3362_, 2);
v_binderInfo_3376_ = lean_ctor_get_uint8(v_e_3362_, sizeof(void*)*3 + 8);
v___x_3377_ = l_Lean_Expr_isForall(v_body_3375_);
if (v___x_3377_ == 0)
{
lean_object* v___x_3378_; lean_object* v___x_3379_; uint8_t v___x_3380_; 
v___x_3378_ = lean_array_get_size(v_xs_3361_);
v___x_3379_ = lean_unsigned_to_nat(0u);
v___x_3380_ = lean_nat_dec_eq(v___x_3378_, v___x_3379_);
if (v___x_3380_ == 0)
{
lean_object* v___x_3381_; 
lean_inc_ref(v_xs_3361_);
v___x_3381_ = l_Lean_Meta_Sym_instantiateRevRangeS(v_e_3362_, v___x_3379_, v___x_3378_, v_xs_3361_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_);
if (lean_obj_tag(v___x_3381_) == 0)
{
lean_object* v_a_3382_; lean_object* v___x_3383_; 
v_a_3382_ = lean_ctor_get(v___x_3381_, 0);
lean_inc_n(v_a_3382_, 2);
lean_dec_ref_known(v___x_3381_, 1);
v___x_3383_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f(v_a_3382_, v_a_3363_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_);
if (lean_obj_tag(v___x_3383_) == 0)
{
lean_object* v_a_3384_; lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3469_; 
v_a_3384_ = lean_ctor_get(v___x_3383_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3383_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3386_ = v___x_3383_;
v_isShared_3387_ = v_isSharedCheck_3469_;
goto v_resetjp_3385_;
}
else
{
lean_inc(v_a_3384_);
lean_dec(v___x_3383_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3469_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
if (lean_obj_tag(v_a_3384_) == 1)
{
lean_object* v_val_3388_; lean_object* v___x_3390_; uint8_t v_isShared_3391_; uint8_t v_isSharedCheck_3464_; 
lean_del_object(v___x_3386_);
v_val_3388_ = lean_ctor_get(v_a_3384_, 0);
v_isSharedCheck_3464_ = !lean_is_exclusive(v_a_3384_);
if (v_isSharedCheck_3464_ == 0)
{
v___x_3390_ = v_a_3384_;
v_isShared_3391_ = v_isSharedCheck_3464_;
goto v_resetjp_3389_;
}
else
{
lean_inc(v_val_3388_);
lean_dec(v_a_3384_);
v___x_3390_ = lean_box(0);
v_isShared_3391_ = v_isSharedCheck_3464_;
goto v_resetjp_3389_;
}
v_resetjp_3389_:
{
lean_object* v_fst_3392_; lean_object* v_snd_3393_; lean_object* v___x_3395_; uint8_t v_isShared_3396_; uint8_t v_isSharedCheck_3463_; 
v_fst_3392_ = lean_ctor_get(v_val_3388_, 0);
v_snd_3393_ = lean_ctor_get(v_val_3388_, 1);
v_isSharedCheck_3463_ = !lean_is_exclusive(v_val_3388_);
if (v_isSharedCheck_3463_ == 0)
{
v___x_3395_ = v_val_3388_;
v_isShared_3396_ = v_isSharedCheck_3463_;
goto v_resetjp_3394_;
}
else
{
lean_inc(v_snd_3393_);
lean_inc(v_fst_3392_);
lean_dec(v_val_3388_);
v___x_3395_ = lean_box(0);
v_isShared_3396_ = v_isSharedCheck_3463_;
goto v_resetjp_3394_;
}
v_resetjp_3394_:
{
lean_object* v___x_3397_; 
lean_inc_ref(v_xs_3361_);
v___x_3397_ = l_Lean_Meta_Sym_Simp_mkForallCongrFor(v_xs_3361_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_object* v_a_3398_; uint8_t v___x_3399_; uint8_t v___x_3400_; lean_object* v___x_3401_; 
v_a_3398_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3398_);
lean_dec_ref_known(v___x_3397_, 1);
v___x_3399_ = 1;
v___x_3400_ = 1;
v___x_3401_ = l_Lean_Meta_mkLambdaFVars(v_xs_3361_, v_a_3382_, v___x_3380_, v___x_3399_, v___x_3380_, v___x_3399_, v___x_3400_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_);
if (lean_obj_tag(v___x_3401_) == 0)
{
lean_object* v_a_3402_; lean_object* v___x_3403_; 
v_a_3402_ = lean_ctor_get(v___x_3401_, 0);
lean_inc(v_a_3402_);
lean_dec_ref_known(v___x_3401_, 1);
lean_inc(v_fst_3392_);
v___x_3403_ = l_Lean_Meta_mkLambdaFVars(v_xs_3361_, v_fst_3392_, v___x_3380_, v___x_3399_, v___x_3380_, v___x_3399_, v___x_3400_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_);
if (lean_obj_tag(v___x_3403_) == 0)
{
lean_object* v_a_3404_; lean_object* v___x_3405_; 
v_a_3404_ = lean_ctor_get(v___x_3403_, 0);
lean_inc(v_a_3404_);
lean_dec_ref_known(v___x_3403_, 1);
v___x_3405_ = l_Lean_Meta_mkLambdaFVars(v_xs_3361_, v_snd_3393_, v___x_3380_, v___x_3399_, v___x_3380_, v___x_3399_, v___x_3400_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_object* v_a_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; 
v_a_3406_ = lean_ctor_get(v___x_3405_, 0);
lean_inc(v_a_3406_);
lean_dec_ref_known(v___x_3405_, 1);
v___x_3407_ = l_Lean_mkApp3(v_a_3398_, v_a_3402_, v_a_3404_, v_a_3406_);
v___x_3408_ = l_Lean_Meta_Sym_mkForallFVarsS(v_xs_3361_, v_fst_3392_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_);
if (lean_obj_tag(v___x_3408_) == 0)
{
lean_object* v_a_3409_; lean_object* v___x_3411_; uint8_t v_isShared_3412_; uint8_t v_isSharedCheck_3422_; 
v_a_3409_ = lean_ctor_get(v___x_3408_, 0);
v_isSharedCheck_3422_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3422_ == 0)
{
v___x_3411_ = v___x_3408_;
v_isShared_3412_ = v_isSharedCheck_3422_;
goto v_resetjp_3410_;
}
else
{
lean_inc(v_a_3409_);
lean_dec(v___x_3408_);
v___x_3411_ = lean_box(0);
v_isShared_3412_ = v_isSharedCheck_3422_;
goto v_resetjp_3410_;
}
v_resetjp_3410_:
{
lean_object* v___x_3414_; 
if (v_isShared_3396_ == 0)
{
lean_ctor_set(v___x_3395_, 1, v___x_3407_);
lean_ctor_set(v___x_3395_, 0, v_a_3409_);
v___x_3414_ = v___x_3395_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v_a_3409_);
lean_ctor_set(v_reuseFailAlloc_3421_, 1, v___x_3407_);
v___x_3414_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
lean_object* v___x_3416_; 
if (v_isShared_3391_ == 0)
{
lean_ctor_set(v___x_3390_, 0, v___x_3414_);
v___x_3416_ = v___x_3390_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v___x_3414_);
v___x_3416_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
lean_object* v___x_3418_; 
if (v_isShared_3412_ == 0)
{
lean_ctor_set(v___x_3411_, 0, v___x_3416_);
v___x_3418_ = v___x_3411_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v___x_3416_);
v___x_3418_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
return v___x_3418_;
}
}
}
}
}
else
{
lean_object* v_a_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3430_; 
lean_dec_ref(v___x_3407_);
lean_del_object(v___x_3395_);
lean_del_object(v___x_3390_);
v_a_3423_ = lean_ctor_get(v___x_3408_, 0);
v_isSharedCheck_3430_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3430_ == 0)
{
v___x_3425_ = v___x_3408_;
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_a_3423_);
lean_dec(v___x_3408_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v___x_3428_; 
if (v_isShared_3426_ == 0)
{
v___x_3428_ = v___x_3425_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v_a_3423_);
v___x_3428_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
return v___x_3428_;
}
}
}
}
else
{
lean_object* v_a_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3438_; 
lean_dec(v_a_3404_);
lean_dec(v_a_3402_);
lean_dec(v_a_3398_);
lean_del_object(v___x_3395_);
lean_dec(v_fst_3392_);
lean_del_object(v___x_3390_);
lean_dec_ref(v_xs_3361_);
v_a_3431_ = lean_ctor_get(v___x_3405_, 0);
v_isSharedCheck_3438_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3438_ == 0)
{
v___x_3433_ = v___x_3405_;
v_isShared_3434_ = v_isSharedCheck_3438_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_a_3431_);
lean_dec(v___x_3405_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3438_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v___x_3436_; 
if (v_isShared_3434_ == 0)
{
v___x_3436_ = v___x_3433_;
goto v_reusejp_3435_;
}
else
{
lean_object* v_reuseFailAlloc_3437_; 
v_reuseFailAlloc_3437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3437_, 0, v_a_3431_);
v___x_3436_ = v_reuseFailAlloc_3437_;
goto v_reusejp_3435_;
}
v_reusejp_3435_:
{
return v___x_3436_;
}
}
}
}
else
{
lean_object* v_a_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3446_; 
lean_dec(v_a_3402_);
lean_dec(v_a_3398_);
lean_del_object(v___x_3395_);
lean_dec(v_snd_3393_);
lean_dec(v_fst_3392_);
lean_del_object(v___x_3390_);
lean_dec_ref(v_xs_3361_);
v_a_3439_ = lean_ctor_get(v___x_3403_, 0);
v_isSharedCheck_3446_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3446_ == 0)
{
v___x_3441_ = v___x_3403_;
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
else
{
lean_inc(v_a_3439_);
lean_dec(v___x_3403_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3444_; 
if (v_isShared_3442_ == 0)
{
v___x_3444_ = v___x_3441_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v_a_3439_);
v___x_3444_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
return v___x_3444_;
}
}
}
}
else
{
lean_object* v_a_3447_; lean_object* v___x_3449_; uint8_t v_isShared_3450_; uint8_t v_isSharedCheck_3454_; 
lean_dec(v_a_3398_);
lean_del_object(v___x_3395_);
lean_dec(v_snd_3393_);
lean_dec(v_fst_3392_);
lean_del_object(v___x_3390_);
lean_dec_ref(v_xs_3361_);
v_a_3447_ = lean_ctor_get(v___x_3401_, 0);
v_isSharedCheck_3454_ = !lean_is_exclusive(v___x_3401_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3449_ = v___x_3401_;
v_isShared_3450_ = v_isSharedCheck_3454_;
goto v_resetjp_3448_;
}
else
{
lean_inc(v_a_3447_);
lean_dec(v___x_3401_);
v___x_3449_ = lean_box(0);
v_isShared_3450_ = v_isSharedCheck_3454_;
goto v_resetjp_3448_;
}
v_resetjp_3448_:
{
lean_object* v___x_3452_; 
if (v_isShared_3450_ == 0)
{
v___x_3452_ = v___x_3449_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v_a_3447_);
v___x_3452_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
return v___x_3452_;
}
}
}
}
else
{
lean_object* v_a_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3462_; 
lean_del_object(v___x_3395_);
lean_dec(v_snd_3393_);
lean_dec(v_fst_3392_);
lean_del_object(v___x_3390_);
lean_dec(v_a_3382_);
lean_dec_ref(v_xs_3361_);
v_a_3455_ = lean_ctor_get(v___x_3397_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3397_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3457_ = v___x_3397_;
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_a_3455_);
lean_dec(v___x_3397_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
lean_object* v___x_3460_; 
if (v_isShared_3458_ == 0)
{
v___x_3460_ = v___x_3457_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_a_3455_);
v___x_3460_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
return v___x_3460_;
}
}
}
}
}
}
else
{
lean_object* v___x_3465_; lean_object* v___x_3467_; 
lean_dec(v_a_3384_);
lean_dec(v_a_3382_);
lean_dec_ref(v_xs_3361_);
v___x_3465_ = lean_box(0);
if (v_isShared_3387_ == 0)
{
lean_ctor_set(v___x_3386_, 0, v___x_3465_);
v___x_3467_ = v___x_3386_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v___x_3465_);
v___x_3467_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
return v___x_3467_;
}
}
}
}
else
{
lean_dec(v_a_3382_);
lean_dec_ref(v_xs_3361_);
return v___x_3383_;
}
}
else
{
lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3477_; 
lean_dec_ref(v_xs_3361_);
v_a_3470_ = lean_ctor_get(v___x_3381_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___x_3381_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3472_ = v___x_3381_;
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_dec(v___x_3381_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3475_; 
if (v_isShared_3473_ == 0)
{
v___x_3475_ = v___x_3472_;
goto v_reusejp_3474_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v_a_3470_);
v___x_3475_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3474_;
}
v_reusejp_3474_:
{
return v___x_3475_;
}
}
}
}
else
{
lean_object* v___x_3478_; 
lean_dec_ref(v_xs_3361_);
v___x_3478_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOrCore_x3f(v_e_3362_, v_a_3363_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_);
return v___x_3478_;
}
}
else
{
lean_object* v___f_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; 
lean_inc_ref(v_body_3375_);
lean_inc_ref(v_binderType_3374_);
lean_inc(v_binderName_3373_);
lean_dec_ref_known(v_e_3362_, 3);
lean_inc_ref(v_xs_3361_);
v___f_3479_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go___lam__0___boxed), 13, 2);
lean_closure_set(v___f_3479_, 0, v_xs_3361_);
lean_closure_set(v___f_3479_, 1, v_body_3375_);
v___x_3480_ = lean_unsigned_to_nat(0u);
v___x_3481_ = lean_array_get_size(v_xs_3361_);
v___x_3482_ = l_Lean_Meta_Sym_instantiateRevRangeS(v_binderType_3374_, v___x_3480_, v___x_3481_, v_xs_3361_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_);
if (lean_obj_tag(v___x_3482_) == 0)
{
lean_object* v_a_3483_; lean_object* v___x_3484_; 
v_a_3483_ = lean_ctor_get(v___x_3482_, 0);
lean_inc(v_a_3483_);
lean_dec_ref_known(v___x_3482_, 1);
v___x_3484_ = l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0___redArg(v_binderName_3373_, v_binderInfo_3376_, v_a_3483_, v___f_3479_, v_a_3363_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_);
return v___x_3484_;
}
else
{
lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3492_; 
lean_dec_ref(v___f_3479_);
lean_dec(v_binderName_3373_);
v_a_3485_ = lean_ctor_get(v___x_3482_, 0);
v_isSharedCheck_3492_ = !lean_is_exclusive(v___x_3482_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3487_ = v___x_3482_;
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_dec(v___x_3482_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3490_; 
if (v_isShared_3488_ == 0)
{
v___x_3490_ = v___x_3487_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_a_3485_);
v___x_3490_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
return v___x_3490_;
}
}
}
}
}
else
{
lean_object* v___x_3493_; lean_object* v___x_3494_; 
lean_dec_ref(v_e_3362_);
lean_dec_ref(v_xs_3361_);
v___x_3493_ = lean_box(0);
v___x_3494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3494_, 0, v___x_3493_);
return v___x_3494_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go___lam__0(lean_object* v_xs_3495_, lean_object* v_body_3496_, lean_object* v_x_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_){
_start:
{
lean_object* v___x_3508_; lean_object* v___x_3509_; 
v___x_3508_ = lean_array_push(v_xs_3495_, v_x_3497_);
v___x_3509_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go(v___x_3508_, v_body_3496_, v___y_3498_, v___y_3499_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_);
return v___x_3509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go___boxed(lean_object* v_xs_3510_, lean_object* v_e_3511_, lean_object* v_a_3512_, lean_object* v_a_3513_, lean_object* v_a_3514_, lean_object* v_a_3515_, lean_object* v_a_3516_, lean_object* v_a_3517_, lean_object* v_a_3518_, lean_object* v_a_3519_, lean_object* v_a_3520_, lean_object* v_a_3521_){
_start:
{
lean_object* v_res_3522_; 
v_res_3522_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go(v_xs_3510_, v_e_3511_, v_a_3512_, v_a_3513_, v_a_3514_, v_a_3515_, v_a_3516_, v_a_3517_, v_a_3518_, v_a_3519_, v_a_3520_);
lean_dec(v_a_3520_);
lean_dec_ref(v_a_3519_);
lean_dec(v_a_3518_);
lean_dec_ref(v_a_3517_);
lean_dec(v_a_3516_);
lean_dec_ref(v_a_3515_);
lean_dec(v_a_3514_);
lean_dec_ref(v_a_3513_);
lean_dec(v_a_3512_);
return v_res_3522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__0(lean_object* v_fvarId_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_){
_start:
{
lean_object* v___x_3531_; 
v___x_3531_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__0___redArg(v_fvarId_3523_, v___y_3525_);
return v___x_3531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__0___boxed(lean_object* v_fvarId_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_){
_start:
{
lean_object* v_res_3540_; 
v_res_3540_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__0(v_fvarId_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
lean_dec(v___y_3538_);
lean_dec_ref(v___y_3537_);
lean_dec(v___y_3536_);
lean_dec_ref(v___y_3535_);
lean_dec(v___y_3534_);
lean_dec_ref(v___y_3533_);
return v_res_3540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2(lean_object* v_00_u03b1_3541_, lean_object* v_k_3542_, lean_object* v_name_3543_, uint8_t v_bi_3544_, lean_object* v_type_3545_, uint8_t v_kind_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_){
_start:
{
lean_object* v___x_3557_; 
v___x_3557_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___redArg(v_k_3542_, v_name_3543_, v_bi_3544_, v_type_3545_, v_kind_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_, v___y_3552_, v___y_3553_, v___y_3554_, v___y_3555_);
return v___x_3557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3558_, lean_object* v_k_3559_, lean_object* v_name_3560_, lean_object* v_bi_3561_, lean_object* v_type_3562_, lean_object* v_kind_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_){
_start:
{
uint8_t v_bi_boxed_3574_; uint8_t v_kind_boxed_3575_; lean_object* v_res_3576_; 
v_bi_boxed_3574_ = lean_unbox(v_bi_3561_);
v_kind_boxed_3575_ = lean_unbox(v_kind_3563_);
v_res_3576_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Grind_NormSym_reduceCtorEq_spec__0_spec__0___at___00Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0_spec__2(v_00_u03b1_3558_, v_k_3559_, v_name_3560_, v_bi_boxed_3574_, v_type_3562_, v_kind_boxed_3575_, v___y_3564_, v___y_3565_, v___y_3566_, v___y_3567_, v___y_3568_, v___y_3569_, v___y_3570_, v___y_3571_, v___y_3572_);
lean_dec(v___y_3572_);
lean_dec_ref(v___y_3571_);
lean_dec(v___y_3570_);
lean_dec_ref(v___y_3569_);
lean_dec(v___y_3568_);
lean_dec_ref(v___y_3567_);
lean_dec(v___y_3566_);
lean_dec_ref(v___y_3565_);
lean_dec(v___y_3564_);
return v_res_3576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0(lean_object* v_00_u03b1_3577_, lean_object* v_name_3578_, uint8_t v_bi_3579_, lean_object* v_type_3580_, lean_object* v_k_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_){
_start:
{
lean_object* v___x_3592_; 
v___x_3592_ = l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0___redArg(v_name_3578_, v_bi_3579_, v_type_3580_, v_k_3581_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_, v___y_3587_, v___y_3588_, v___y_3589_, v___y_3590_);
return v___x_3592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0___boxed(lean_object* v_00_u03b1_3593_, lean_object* v_name_3594_, lean_object* v_bi_3595_, lean_object* v_type_3596_, lean_object* v_k_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_){
_start:
{
uint8_t v_bi_boxed_3608_; lean_object* v_res_3609_; 
v_bi_boxed_3608_ = lean_unbox(v_bi_3595_);
v_res_3609_ = l_Lean_Meta_Sym_withLocalDeclS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go_spec__0(v_00_u03b1_3593_, v_name_3594_, v_bi_boxed_3608_, v_type_3596_, v_k_3597_, v___y_3598_, v___y_3599_, v___y_3600_, v___y_3601_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_, v___y_3606_);
lean_dec(v___y_3606_);
lean_dec_ref(v___y_3605_);
lean_dec(v___y_3604_);
lean_dec_ref(v___y_3603_);
lean_dec(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec(v___y_3600_);
lean_dec_ref(v___y_3599_);
lean_dec(v___y_3598_);
return v_res_3609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f(lean_object* v_e_3612_, lean_object* v_a_3613_, lean_object* v_a_3614_, lean_object* v_a_3615_, lean_object* v_a_3616_, lean_object* v_a_3617_, lean_object* v_a_3618_, lean_object* v_a_3619_, lean_object* v_a_3620_, lean_object* v_a_3621_){
_start:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; uint8_t v___x_3631_; 
v___x_3629_ = l_Lean_Expr_getForallBody(v_e_3612_);
v___x_3630_ = l_Lean_Expr_cleanupAnnotations(v___x_3629_);
lean_dec_ref(v___x_3629_);
v___x_3631_ = l_Lean_Expr_isApp(v___x_3630_);
if (v___x_3631_ == 0)
{
lean_dec_ref(v___x_3630_);
lean_dec_ref(v_e_3612_);
goto v___jp_3623_;
}
else
{
lean_object* v___x_3632_; uint8_t v___x_3633_; 
v___x_3632_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3630_);
v___x_3633_ = l_Lean_Expr_isApp(v___x_3632_);
if (v___x_3633_ == 0)
{
lean_dec_ref(v___x_3632_);
lean_dec_ref(v___x_3630_);
lean_dec_ref(v_e_3612_);
goto v___jp_3623_;
}
else
{
lean_object* v___x_3634_; lean_object* v___x_3635_; uint8_t v___x_3636_; 
v___x_3634_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3632_);
v___x_3635_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___closed__1));
v___x_3636_ = l_Lean_Expr_isConstOf(v___x_3634_, v___x_3635_);
lean_dec_ref(v___x_3634_);
if (v___x_3636_ == 0)
{
lean_dec_ref(v___x_3632_);
lean_dec_ref(v___x_3630_);
lean_dec_ref(v_e_3612_);
goto v___jp_3623_;
}
else
{
lean_object* v_arg_3637_; lean_object* v_arg_3638_; lean_object* v___x_3639_; 
v_arg_3637_ = lean_ctor_get(v___x_3630_, 1);
lean_inc_ref(v_arg_3637_);
lean_dec_ref(v___x_3630_);
v_arg_3638_ = lean_ctor_get(v___x_3632_, 1);
lean_inc_ref(v_arg_3638_);
lean_dec_ref(v___x_3632_);
v___x_3639_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isForallOrNot_x3f(v_arg_3638_);
lean_dec_ref(v_arg_3638_);
if (lean_obj_tag(v___x_3639_) == 0)
{
lean_object* v___x_3640_; 
v___x_3640_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_isForallOrNot_x3f(v_arg_3637_);
lean_dec_ref(v_arg_3637_);
if (lean_obj_tag(v___x_3640_) == 0)
{
lean_object* v___x_3641_; lean_object* v___x_3642_; 
lean_dec_ref(v_e_3612_);
v___x_3641_ = lean_box(0);
v___x_3642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3642_, 0, v___x_3641_);
return v___x_3642_;
}
else
{
lean_dec_ref_known(v___x_3640_, 1);
goto v___jp_3626_;
}
}
else
{
lean_dec_ref_known(v___x_3639_, 1);
lean_dec_ref(v_arg_3637_);
goto v___jp_3626_;
}
}
}
}
v___jp_3623_:
{
lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3624_ = lean_box(0);
v___x_3625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3624_);
return v___x_3625_;
}
v___jp_3626_:
{
lean_object* v___x_3627_; lean_object* v___x_3628_; 
v___x_3627_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f___closed__0));
v___x_3628_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f_go(v___x_3627_, v_e_3612_, v_a_3613_, v_a_3614_, v_a_3615_, v_a_3616_, v_a_3617_, v_a_3618_, v_a_3619_, v_a_3620_, v_a_3621_);
return v___x_3628_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f___boxed(lean_object* v_e_3643_, lean_object* v_a_3644_, lean_object* v_a_3645_, lean_object* v_a_3646_, lean_object* v_a_3647_, lean_object* v_a_3648_, lean_object* v_a_3649_, lean_object* v_a_3650_, lean_object* v_a_3651_, lean_object* v_a_3652_, lean_object* v_a_3653_){
_start:
{
lean_object* v_res_3654_; 
v_res_3654_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f(v_e_3643_, v_a_3644_, v_a_3645_, v_a_3646_, v_a_3647_, v_a_3648_, v_a_3649_, v_a_3650_, v_a_3651_, v_a_3652_);
lean_dec(v_a_3652_);
lean_dec_ref(v_a_3651_);
lean_dec(v_a_3650_);
lean_dec_ref(v_a_3649_);
lean_dec(v_a_3648_);
lean_dec_ref(v_a_3647_);
lean_dec(v_a_3646_);
lean_dec_ref(v_a_3645_);
lean_dec(v_a_3644_);
return v_res_3654_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__6(void){
_start:
{
lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
v___x_3664_ = lean_box(0);
v___x_3665_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpForall___closed__5));
v___x_3666_ = l_Lean_mkConst(v___x_3665_, v___x_3664_);
return v___x_3666_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__9(void){
_start:
{
lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; 
v___x_3672_ = lean_box(0);
v___x_3673_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpForall___closed__8));
v___x_3674_ = l_Lean_mkConst(v___x_3673_, v___x_3672_);
return v___x_3674_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__14(void){
_start:
{
lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; 
v___x_3683_ = lean_box(0);
v___x_3684_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpForall___closed__13));
v___x_3685_ = l_Lean_mkConst(v___x_3684_, v___x_3683_);
return v___x_3685_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__17(void){
_start:
{
lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; 
v___x_3691_ = lean_box(0);
v___x_3692_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpForall___closed__16));
v___x_3693_ = l_Lean_mkConst(v___x_3692_, v___x_3691_);
return v___x_3693_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__20(void){
_start:
{
lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; 
v___x_3699_ = lean_box(0);
v___x_3700_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpForall___closed__19));
v___x_3701_ = l_Lean_mkConst(v___x_3700_, v___x_3699_);
return v___x_3701_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__25(void){
_start:
{
lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; 
v___x_3711_ = lean_box(0);
v___x_3712_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpForall___closed__24));
v___x_3713_ = l_Lean_mkConst(v___x_3712_, v___x_3711_);
return v___x_3713_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__26(void){
_start:
{
lean_object* v___x_3714_; lean_object* v___x_3715_; 
v___x_3714_ = lean_unsigned_to_nat(0u);
v___x_3715_ = l_Lean_Level_ofNat(v___x_3714_);
return v___x_3715_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__27(void){
_start:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; 
v___x_3716_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpForall___closed__26, &l_Lean_Meta_Grind_NormSym_simpForall___closed__26_once, _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__26);
v___x_3717_ = l_Lean_mkSort(v___x_3716_);
return v___x_3717_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__30(void){
_start:
{
lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; 
v___x_3721_ = lean_box(0);
v___x_3722_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpForall___closed__29));
v___x_3723_ = l_Lean_mkConst(v___x_3722_, v___x_3721_);
return v___x_3723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpForall(lean_object* v_e_3724_, lean_object* v_a_3725_, lean_object* v_a_3726_, lean_object* v_a_3727_, lean_object* v_a_3728_, lean_object* v_a_3729_, lean_object* v_a_3730_, lean_object* v_a_3731_, lean_object* v_a_3732_, lean_object* v_a_3733_){
_start:
{
lean_object* v___y_3736_; lean_object* v___y_3737_; lean_object* v___y_3738_; lean_object* v___y_3739_; lean_object* v___y_3740_; lean_object* v___y_3741_; lean_object* v___y_3742_; lean_object* v___y_3743_; lean_object* v___y_3744_; 
if (lean_obj_tag(v_e_3724_) == 7)
{
lean_object* v_binderName_3829_; lean_object* v_binderType_3830_; lean_object* v_body_3831_; uint8_t v_binderInfo_3832_; uint8_t v___x_3833_; 
v_binderName_3829_ = lean_ctor_get(v_e_3724_, 0);
v_binderType_3830_ = lean_ctor_get(v_e_3724_, 1);
v_body_3831_ = lean_ctor_get(v_e_3724_, 2);
v_binderInfo_3832_ = lean_ctor_get_uint8(v_e_3724_, sizeof(void*)*3 + 8);
v___x_3833_ = l_Lean_Expr_hasLooseBVars(v_body_3831_);
if (v___x_3833_ == 0)
{
lean_object* v___x_3834_; 
lean_inc_ref(v_binderType_3830_);
v___x_3834_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_binderType_3830_, v_a_3731_);
if (lean_obj_tag(v___x_3834_) == 0)
{
lean_object* v_a_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; uint8_t v___x_3838_; 
v_a_3835_ = lean_ctor_get(v___x_3834_, 0);
lean_inc(v_a_3835_);
lean_dec_ref_known(v___x_3834_, 1);
v___x_3836_ = l_Lean_Expr_cleanupAnnotations(v_a_3835_);
lean_dec(v_a_3835_);
v___x_3837_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__6));
v___x_3838_ = l_Lean_Expr_isConstOf(v___x_3836_, v___x_3837_);
if (v___x_3838_ == 0)
{
lean_object* v___x_3839_; uint8_t v___x_3840_; lean_object* v___y_3842_; lean_object* v___y_3843_; lean_object* v___y_3844_; lean_object* v___y_3845_; lean_object* v___y_3846_; lean_object* v___y_3847_; lean_object* v___y_3848_; lean_object* v___y_3849_; lean_object* v___y_3850_; 
v___x_3839_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__8));
v___x_3840_ = l_Lean_Expr_isConstOf(v___x_3836_, v___x_3839_);
lean_dec_ref(v___x_3836_);
if (v___x_3840_ == 0)
{
lean_object* v___x_3928_; 
lean_inc_ref(v_body_3831_);
v___x_3928_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_body_3831_, v_a_3731_);
if (lean_obj_tag(v___x_3928_) == 0)
{
lean_object* v_a_3929_; lean_object* v___x_3930_; uint8_t v___x_3931_; 
v_a_3929_ = lean_ctor_get(v___x_3928_, 0);
lean_inc(v_a_3929_);
lean_dec_ref_known(v___x_3928_, 1);
v___x_3930_ = l_Lean_Expr_cleanupAnnotations(v_a_3929_);
lean_dec(v_a_3929_);
v___x_3931_ = l_Lean_Expr_isConstOf(v___x_3930_, v___x_3837_);
if (v___x_3931_ == 0)
{
uint8_t v___x_3932_; 
v___x_3932_ = l_Lean_Expr_isConstOf(v___x_3930_, v___x_3839_);
lean_dec_ref(v___x_3930_);
if (v___x_3932_ == 0)
{
lean_object* v___x_3933_; 
lean_inc_ref(v_binderType_3830_);
v___x_3933_ = l_Lean_Meta_isProp(v_binderType_3830_, v_a_3730_, v_a_3731_, v_a_3732_, v_a_3733_);
if (lean_obj_tag(v___x_3933_) == 0)
{
lean_object* v_a_3934_; size_t v___x_3935_; size_t v___x_3936_; uint8_t v___x_3937_; 
v_a_3934_ = lean_ctor_get(v___x_3933_, 0);
lean_inc(v_a_3934_);
lean_dec_ref_known(v___x_3933_, 1);
v___x_3935_ = lean_ptr_addr(v_binderType_3830_);
v___x_3936_ = lean_ptr_addr(v_body_3831_);
v___x_3937_ = lean_usize_dec_eq(v___x_3935_, v___x_3936_);
if (v___x_3937_ == 0)
{
lean_dec(v_a_3934_);
v___y_3842_ = v_a_3725_;
v___y_3843_ = v_a_3726_;
v___y_3844_ = v_a_3727_;
v___y_3845_ = v_a_3728_;
v___y_3846_ = v_a_3729_;
v___y_3847_ = v_a_3730_;
v___y_3848_ = v_a_3731_;
v___y_3849_ = v_a_3732_;
v___y_3850_ = v_a_3733_;
goto v___jp_3841_;
}
else
{
uint8_t v___x_3938_; 
v___x_3938_ = lean_unbox(v_a_3934_);
if (v___x_3938_ == 0)
{
lean_dec(v_a_3934_);
v___y_3842_ = v_a_3725_;
v___y_3843_ = v_a_3726_;
v___y_3844_ = v_a_3727_;
v___y_3845_ = v_a_3728_;
v___y_3846_ = v_a_3729_;
v___y_3847_ = v_a_3730_;
v___y_3848_ = v_a_3731_;
v___y_3849_ = v_a_3732_;
v___y_3850_ = v_a_3733_;
goto v___jp_3841_;
}
else
{
lean_object* v___x_3939_; 
lean_inc_ref(v_binderType_3830_);
lean_dec_ref_known(v_e_3724_, 3);
v___x_3939_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_3728_);
if (lean_obj_tag(v___x_3939_) == 0)
{
lean_object* v_a_3940_; lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3951_; 
v_a_3940_ = lean_ctor_get(v___x_3939_, 0);
v_isSharedCheck_3951_ = !lean_is_exclusive(v___x_3939_);
if (v_isSharedCheck_3951_ == 0)
{
v___x_3942_ = v___x_3939_;
v_isShared_3943_ = v_isSharedCheck_3951_;
goto v_resetjp_3941_;
}
else
{
lean_inc(v_a_3940_);
lean_dec(v___x_3939_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3951_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; uint8_t v___x_3947_; lean_object* v___x_3949_; 
v___x_3944_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpForall___closed__9, &l_Lean_Meta_Grind_NormSym_simpForall___closed__9_once, _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__9);
v___x_3945_ = l_Lean_Expr_app___override(v___x_3944_, v_binderType_3830_);
v___x_3946_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3946_, 0, v_a_3940_);
lean_ctor_set(v___x_3946_, 1, v___x_3945_);
v___x_3947_ = lean_unbox(v_a_3934_);
lean_dec(v_a_3934_);
lean_ctor_set_uint8(v___x_3946_, sizeof(void*)*2, v___x_3947_);
lean_ctor_set_uint8(v___x_3946_, sizeof(void*)*2 + 1, v___x_3932_);
if (v_isShared_3943_ == 0)
{
lean_ctor_set(v___x_3942_, 0, v___x_3946_);
v___x_3949_ = v___x_3942_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3950_; 
v_reuseFailAlloc_3950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3950_, 0, v___x_3946_);
v___x_3949_ = v_reuseFailAlloc_3950_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
return v___x_3949_;
}
}
}
else
{
lean_object* v_a_3952_; lean_object* v___x_3954_; uint8_t v_isShared_3955_; uint8_t v_isSharedCheck_3959_; 
lean_dec(v_a_3934_);
lean_dec_ref(v_binderType_3830_);
v_a_3952_ = lean_ctor_get(v___x_3939_, 0);
v_isSharedCheck_3959_ = !lean_is_exclusive(v___x_3939_);
if (v_isSharedCheck_3959_ == 0)
{
v___x_3954_ = v___x_3939_;
v_isShared_3955_ = v_isSharedCheck_3959_;
goto v_resetjp_3953_;
}
else
{
lean_inc(v_a_3952_);
lean_dec(v___x_3939_);
v___x_3954_ = lean_box(0);
v_isShared_3955_ = v_isSharedCheck_3959_;
goto v_resetjp_3953_;
}
v_resetjp_3953_:
{
lean_object* v___x_3957_; 
if (v_isShared_3955_ == 0)
{
v___x_3957_ = v___x_3954_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3958_; 
v_reuseFailAlloc_3958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3958_, 0, v_a_3952_);
v___x_3957_ = v_reuseFailAlloc_3958_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
return v___x_3957_;
}
}
}
}
}
}
else
{
lean_object* v_a_3960_; lean_object* v___x_3962_; uint8_t v_isShared_3963_; uint8_t v_isSharedCheck_3967_; 
lean_dec_ref_known(v_e_3724_, 3);
v_a_3960_ = lean_ctor_get(v___x_3933_, 0);
v_isSharedCheck_3967_ = !lean_is_exclusive(v___x_3933_);
if (v_isSharedCheck_3967_ == 0)
{
v___x_3962_ = v___x_3933_;
v_isShared_3963_ = v_isSharedCheck_3967_;
goto v_resetjp_3961_;
}
else
{
lean_inc(v_a_3960_);
lean_dec(v___x_3933_);
v___x_3962_ = lean_box(0);
v_isShared_3963_ = v_isSharedCheck_3967_;
goto v_resetjp_3961_;
}
v_resetjp_3961_:
{
lean_object* v___x_3965_; 
if (v_isShared_3963_ == 0)
{
v___x_3965_ = v___x_3962_;
goto v_reusejp_3964_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v_a_3960_);
v___x_3965_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3964_;
}
v_reusejp_3964_:
{
return v___x_3965_;
}
}
}
}
else
{
lean_object* v___x_3968_; 
lean_inc_ref(v_binderType_3830_);
lean_dec_ref_known(v_e_3724_, 3);
v___x_3968_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_3728_);
if (lean_obj_tag(v___x_3968_) == 0)
{
lean_object* v_a_3969_; lean_object* v___x_3970_; 
v_a_3969_ = lean_ctor_get(v___x_3968_, 0);
lean_inc(v_a_3969_);
lean_dec_ref_known(v___x_3968_, 1);
lean_inc_ref(v_binderType_3830_);
v___x_3970_ = l_Lean_Meta_getLevel(v_binderType_3830_, v_a_3730_, v_a_3731_, v_a_3732_, v_a_3733_);
if (lean_obj_tag(v___x_3970_) == 0)
{
lean_object* v_a_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_3984_; 
v_a_3971_ = lean_ctor_get(v___x_3970_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3970_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3973_ = v___x_3970_;
v_isShared_3974_ = v_isSharedCheck_3984_;
goto v_resetjp_3972_;
}
else
{
lean_inc(v_a_3971_);
lean_dec(v___x_3970_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_3984_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3982_; 
v___x_3975_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpForall___closed__11));
v___x_3976_ = lean_box(0);
v___x_3977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3977_, 0, v_a_3971_);
lean_ctor_set(v___x_3977_, 1, v___x_3976_);
v___x_3978_ = l_Lean_mkConst(v___x_3975_, v___x_3977_);
v___x_3979_ = l_Lean_Expr_app___override(v___x_3978_, v_binderType_3830_);
v___x_3980_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3980_, 0, v_a_3969_);
lean_ctor_set(v___x_3980_, 1, v___x_3979_);
lean_ctor_set_uint8(v___x_3980_, sizeof(void*)*2, v___x_3932_);
lean_ctor_set_uint8(v___x_3980_, sizeof(void*)*2 + 1, v___x_3931_);
if (v_isShared_3974_ == 0)
{
lean_ctor_set(v___x_3973_, 0, v___x_3980_);
v___x_3982_ = v___x_3973_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v___x_3980_);
v___x_3982_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
return v___x_3982_;
}
}
}
else
{
lean_object* v_a_3985_; lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_3992_; 
lean_dec(v_a_3969_);
lean_dec_ref(v_binderType_3830_);
v_a_3985_ = lean_ctor_get(v___x_3970_, 0);
v_isSharedCheck_3992_ = !lean_is_exclusive(v___x_3970_);
if (v_isSharedCheck_3992_ == 0)
{
v___x_3987_ = v___x_3970_;
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
else
{
lean_inc(v_a_3985_);
lean_dec(v___x_3970_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v___x_3990_; 
if (v_isShared_3988_ == 0)
{
v___x_3990_ = v___x_3987_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v_a_3985_);
v___x_3990_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
return v___x_3990_;
}
}
}
}
else
{
lean_object* v_a_3993_; lean_object* v___x_3995_; uint8_t v_isShared_3996_; uint8_t v_isSharedCheck_4000_; 
lean_dec_ref(v_binderType_3830_);
v_a_3993_ = lean_ctor_get(v___x_3968_, 0);
v_isSharedCheck_4000_ = !lean_is_exclusive(v___x_3968_);
if (v_isSharedCheck_4000_ == 0)
{
v___x_3995_ = v___x_3968_;
v_isShared_3996_ = v_isSharedCheck_4000_;
goto v_resetjp_3994_;
}
else
{
lean_inc(v_a_3993_);
lean_dec(v___x_3968_);
v___x_3995_ = lean_box(0);
v_isShared_3996_ = v_isSharedCheck_4000_;
goto v_resetjp_3994_;
}
v_resetjp_3994_:
{
lean_object* v___x_3998_; 
if (v_isShared_3996_ == 0)
{
v___x_3998_ = v___x_3995_;
goto v_reusejp_3997_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v_a_3993_);
v___x_3998_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3997_;
}
v_reusejp_3997_:
{
return v___x_3998_;
}
}
}
}
}
else
{
lean_object* v___x_4001_; 
lean_dec_ref(v___x_3930_);
lean_inc_ref(v_binderType_3830_);
v___x_4001_ = l_Lean_Meta_isProp(v_binderType_3830_, v_a_3730_, v_a_3731_, v_a_3732_, v_a_3733_);
if (lean_obj_tag(v___x_4001_) == 0)
{
lean_object* v_a_4002_; uint8_t v___x_4003_; 
v_a_4002_ = lean_ctor_get(v___x_4001_, 0);
lean_inc(v_a_4002_);
lean_dec_ref_known(v___x_4001_, 1);
v___x_4003_ = lean_unbox(v_a_4002_);
lean_dec(v_a_4002_);
if (v___x_4003_ == 0)
{
v___y_3842_ = v_a_3725_;
v___y_3843_ = v_a_3726_;
v___y_3844_ = v_a_3727_;
v___y_3845_ = v_a_3728_;
v___y_3846_ = v_a_3729_;
v___y_3847_ = v_a_3730_;
v___y_3848_ = v_a_3731_;
v___y_3849_ = v_a_3732_;
v___y_3850_ = v_a_3733_;
goto v___jp_3841_;
}
else
{
lean_object* v___x_4004_; 
lean_inc_ref_n(v_binderType_3830_, 2);
lean_dec_ref_known(v_e_3724_, 3);
v___x_4004_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS(v_binderType_3830_, v_a_3725_, v_a_3726_, v_a_3727_, v_a_3728_, v_a_3729_, v_a_3730_, v_a_3731_, v_a_3732_, v_a_3733_);
if (lean_obj_tag(v___x_4004_) == 0)
{
lean_object* v_a_4005_; lean_object* v___x_4007_; uint8_t v_isShared_4008_; uint8_t v_isSharedCheck_4015_; 
v_a_4005_ = lean_ctor_get(v___x_4004_, 0);
v_isSharedCheck_4015_ = !lean_is_exclusive(v___x_4004_);
if (v_isSharedCheck_4015_ == 0)
{
v___x_4007_ = v___x_4004_;
v_isShared_4008_ = v_isSharedCheck_4015_;
goto v_resetjp_4006_;
}
else
{
lean_inc(v_a_4005_);
lean_dec(v___x_4004_);
v___x_4007_ = lean_box(0);
v_isShared_4008_ = v_isSharedCheck_4015_;
goto v_resetjp_4006_;
}
v_resetjp_4006_:
{
lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4013_; 
v___x_4009_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpForall___closed__14, &l_Lean_Meta_Grind_NormSym_simpForall___closed__14_once, _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__14);
v___x_4010_ = l_Lean_Expr_app___override(v___x_4009_, v_binderType_3830_);
v___x_4011_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_4011_, 0, v_a_4005_);
lean_ctor_set(v___x_4011_, 1, v___x_4010_);
lean_ctor_set_uint8(v___x_4011_, sizeof(void*)*2, v___x_3840_);
lean_ctor_set_uint8(v___x_4011_, sizeof(void*)*2 + 1, v___x_3840_);
if (v_isShared_4008_ == 0)
{
lean_ctor_set(v___x_4007_, 0, v___x_4011_);
v___x_4013_ = v___x_4007_;
goto v_reusejp_4012_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v___x_4011_);
v___x_4013_ = v_reuseFailAlloc_4014_;
goto v_reusejp_4012_;
}
v_reusejp_4012_:
{
return v___x_4013_;
}
}
}
else
{
lean_object* v_a_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4023_; 
lean_dec_ref(v_binderType_3830_);
v_a_4016_ = lean_ctor_get(v___x_4004_, 0);
v_isSharedCheck_4023_ = !lean_is_exclusive(v___x_4004_);
if (v_isSharedCheck_4023_ == 0)
{
v___x_4018_ = v___x_4004_;
v_isShared_4019_ = v_isSharedCheck_4023_;
goto v_resetjp_4017_;
}
else
{
lean_inc(v_a_4016_);
lean_dec(v___x_4004_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4023_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v___x_4021_; 
if (v_isShared_4019_ == 0)
{
v___x_4021_ = v___x_4018_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4022_; 
v_reuseFailAlloc_4022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4022_, 0, v_a_4016_);
v___x_4021_ = v_reuseFailAlloc_4022_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
return v___x_4021_;
}
}
}
}
}
else
{
lean_object* v_a_4024_; lean_object* v___x_4026_; uint8_t v_isShared_4027_; uint8_t v_isSharedCheck_4031_; 
lean_dec_ref_known(v_e_3724_, 3);
v_a_4024_ = lean_ctor_get(v___x_4001_, 0);
v_isSharedCheck_4031_ = !lean_is_exclusive(v___x_4001_);
if (v_isSharedCheck_4031_ == 0)
{
v___x_4026_ = v___x_4001_;
v_isShared_4027_ = v_isSharedCheck_4031_;
goto v_resetjp_4025_;
}
else
{
lean_inc(v_a_4024_);
lean_dec(v___x_4001_);
v___x_4026_ = lean_box(0);
v_isShared_4027_ = v_isSharedCheck_4031_;
goto v_resetjp_4025_;
}
v_resetjp_4025_:
{
lean_object* v___x_4029_; 
if (v_isShared_4027_ == 0)
{
v___x_4029_ = v___x_4026_;
goto v_reusejp_4028_;
}
else
{
lean_object* v_reuseFailAlloc_4030_; 
v_reuseFailAlloc_4030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4030_, 0, v_a_4024_);
v___x_4029_ = v_reuseFailAlloc_4030_;
goto v_reusejp_4028_;
}
v_reusejp_4028_:
{
return v___x_4029_;
}
}
}
}
}
else
{
lean_object* v_a_4032_; lean_object* v___x_4034_; uint8_t v_isShared_4035_; uint8_t v_isSharedCheck_4039_; 
lean_dec_ref_known(v_e_3724_, 3);
v_a_4032_ = lean_ctor_get(v___x_3928_, 0);
v_isSharedCheck_4039_ = !lean_is_exclusive(v___x_3928_);
if (v_isSharedCheck_4039_ == 0)
{
v___x_4034_ = v___x_3928_;
v_isShared_4035_ = v_isSharedCheck_4039_;
goto v_resetjp_4033_;
}
else
{
lean_inc(v_a_4032_);
lean_dec(v___x_3928_);
v___x_4034_ = lean_box(0);
v_isShared_4035_ = v_isSharedCheck_4039_;
goto v_resetjp_4033_;
}
v_resetjp_4033_:
{
lean_object* v___x_4037_; 
if (v_isShared_4035_ == 0)
{
v___x_4037_ = v___x_4034_;
goto v_reusejp_4036_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v_a_4032_);
v___x_4037_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4036_;
}
v_reusejp_4036_:
{
return v___x_4037_;
}
}
}
}
else
{
lean_object* v___x_4040_; 
lean_inc_ref(v_body_3831_);
v___x_4040_ = l_Lean_Meta_isProp(v_body_3831_, v_a_3730_, v_a_3731_, v_a_3732_, v_a_3733_);
if (lean_obj_tag(v___x_4040_) == 0)
{
lean_object* v_a_4041_; lean_object* v___x_4043_; uint8_t v_isShared_4044_; uint8_t v_isSharedCheck_4053_; 
v_a_4041_ = lean_ctor_get(v___x_4040_, 0);
v_isSharedCheck_4053_ = !lean_is_exclusive(v___x_4040_);
if (v_isSharedCheck_4053_ == 0)
{
v___x_4043_ = v___x_4040_;
v_isShared_4044_ = v_isSharedCheck_4053_;
goto v_resetjp_4042_;
}
else
{
lean_inc(v_a_4041_);
lean_dec(v___x_4040_);
v___x_4043_ = lean_box(0);
v_isShared_4044_ = v_isSharedCheck_4053_;
goto v_resetjp_4042_;
}
v_resetjp_4042_:
{
uint8_t v___x_4045_; 
v___x_4045_ = lean_unbox(v_a_4041_);
if (v___x_4045_ == 0)
{
lean_del_object(v___x_4043_);
lean_dec(v_a_4041_);
v___y_3736_ = v_a_3725_;
v___y_3737_ = v_a_3726_;
v___y_3738_ = v_a_3727_;
v___y_3739_ = v_a_3728_;
v___y_3740_ = v_a_3729_;
v___y_3741_ = v_a_3730_;
v___y_3742_ = v_a_3731_;
v___y_3743_ = v_a_3732_;
v___y_3744_ = v_a_3733_;
goto v___jp_3735_;
}
else
{
lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; uint8_t v___x_4049_; lean_object* v___x_4051_; 
lean_inc_ref_n(v_body_3831_, 2);
lean_dec_ref_known(v_e_3724_, 3);
v___x_4046_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpForall___closed__17, &l_Lean_Meta_Grind_NormSym_simpForall___closed__17_once, _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__17);
v___x_4047_ = l_Lean_Expr_app___override(v___x_4046_, v_body_3831_);
v___x_4048_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_4048_, 0, v_body_3831_);
lean_ctor_set(v___x_4048_, 1, v___x_4047_);
v___x_4049_ = lean_unbox(v_a_4041_);
lean_dec(v_a_4041_);
lean_ctor_set_uint8(v___x_4048_, sizeof(void*)*2, v___x_4049_);
lean_ctor_set_uint8(v___x_4048_, sizeof(void*)*2 + 1, v___x_3838_);
if (v_isShared_4044_ == 0)
{
lean_ctor_set(v___x_4043_, 0, v___x_4048_);
v___x_4051_ = v___x_4043_;
goto v_reusejp_4050_;
}
else
{
lean_object* v_reuseFailAlloc_4052_; 
v_reuseFailAlloc_4052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4052_, 0, v___x_4048_);
v___x_4051_ = v_reuseFailAlloc_4052_;
goto v_reusejp_4050_;
}
v_reusejp_4050_:
{
return v___x_4051_;
}
}
}
}
else
{
lean_object* v_a_4054_; lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4061_; 
lean_dec_ref_known(v_e_3724_, 3);
v_a_4054_ = lean_ctor_get(v___x_4040_, 0);
v_isSharedCheck_4061_ = !lean_is_exclusive(v___x_4040_);
if (v_isSharedCheck_4061_ == 0)
{
v___x_4056_ = v___x_4040_;
v_isShared_4057_ = v_isSharedCheck_4061_;
goto v_resetjp_4055_;
}
else
{
lean_inc(v_a_4054_);
lean_dec(v___x_4040_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4061_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
lean_object* v___x_4059_; 
if (v_isShared_4057_ == 0)
{
v___x_4059_ = v___x_4056_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4060_; 
v_reuseFailAlloc_4060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4060_, 0, v_a_4054_);
v___x_4059_ = v_reuseFailAlloc_4060_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
return v___x_4059_;
}
}
}
}
v___jp_3841_:
{
lean_object* v___x_3851_; 
lean_inc_ref(v_binderType_3830_);
v___x_3851_ = l_Lean_Meta_isProp(v_binderType_3830_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_);
if (lean_obj_tag(v___x_3851_) == 0)
{
lean_object* v_a_3852_; lean_object* v___x_3853_; 
v_a_3852_ = lean_ctor_get(v___x_3851_, 0);
lean_inc(v_a_3852_);
lean_dec_ref_known(v___x_3851_, 1);
lean_inc_ref(v_body_3831_);
v___x_3853_ = l_Lean_Meta_isProp(v_body_3831_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_);
if (lean_obj_tag(v___x_3853_) == 0)
{
lean_object* v_a_3854_; lean_object* v___x_3855_; uint8_t v___x_3856_; 
v_a_3854_ = lean_ctor_get(v___x_3853_, 0);
lean_inc(v_a_3854_);
lean_dec_ref_known(v___x_3853_, 1);
v___x_3855_ = lean_st_ref_get(v___y_3850_);
v___x_3856_ = lean_unbox(v_a_3852_);
lean_dec(v_a_3852_);
if (v___x_3856_ == 0)
{
uint8_t v___x_3857_; 
v___x_3857_ = lean_unbox(v_a_3854_);
if (v___x_3857_ == 0)
{
lean_dec(v___x_3855_);
lean_dec(v_a_3854_);
v___y_3736_ = v___y_3842_;
v___y_3737_ = v___y_3843_;
v___y_3738_ = v___y_3844_;
v___y_3739_ = v___y_3845_;
v___y_3740_ = v___y_3846_;
v___y_3741_ = v___y_3847_;
v___y_3742_ = v___y_3848_;
v___y_3743_ = v___y_3849_;
v___y_3744_ = v___y_3850_;
goto v___jp_3735_;
}
else
{
lean_object* v_env_3858_; lean_object* v___x_3859_; uint8_t v___x_3860_; uint8_t v___x_3861_; 
v_env_3858_ = lean_ctor_get(v___x_3855_, 0);
lean_inc_ref(v_env_3858_);
lean_dec(v___x_3855_);
v___x_3859_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpForall___closed__1));
v___x_3860_ = lean_unbox(v_a_3854_);
lean_dec(v_a_3854_);
v___x_3861_ = l_Lean_Environment_contains(v_env_3858_, v___x_3859_, v___x_3860_);
if (v___x_3861_ == 0)
{
v___y_3736_ = v___y_3842_;
v___y_3737_ = v___y_3843_;
v___y_3738_ = v___y_3844_;
v___y_3739_ = v___y_3845_;
v___y_3740_ = v___y_3846_;
v___y_3741_ = v___y_3847_;
v___y_3742_ = v___y_3848_;
v___y_3743_ = v___y_3849_;
v___y_3744_ = v___y_3850_;
goto v___jp_3735_;
}
else
{
lean_object* v___x_3862_; 
lean_inc_ref(v_binderType_3830_);
v___x_3862_ = l_Lean_Meta_getLevel(v_binderType_3830_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_);
if (lean_obj_tag(v___x_3862_) == 0)
{
lean_object* v_a_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; 
v_a_3863_ = lean_ctor_get(v___x_3862_, 0);
lean_inc(v_a_3863_);
lean_dec_ref_known(v___x_3862_, 1);
v___x_3864_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpForall___closed__3));
v___x_3865_ = lean_box(0);
v___x_3866_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3866_, 0, v_a_3863_);
lean_ctor_set(v___x_3866_, 1, v___x_3865_);
v___x_3867_ = l_Lean_mkConst(v___x_3864_, v___x_3866_);
lean_inc_ref(v_binderType_3830_);
v___x_3868_ = l_Lean_Expr_app___override(v___x_3867_, v_binderType_3830_);
v___x_3869_ = lean_box(0);
v___x_3870_ = l_Lean_Meta_trySynthInstance(v___x_3868_, v___x_3869_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_);
if (lean_obj_tag(v___x_3870_) == 0)
{
lean_object* v_a_3871_; 
v_a_3871_ = lean_ctor_get(v___x_3870_, 0);
lean_inc(v_a_3871_);
lean_dec_ref_known(v___x_3870_, 1);
if (lean_obj_tag(v_a_3871_) == 1)
{
lean_object* v_a_3872_; lean_object* v___x_3873_; 
lean_inc_ref(v_body_3831_);
v_a_3872_ = lean_ctor_get(v_a_3871_, 0);
lean_inc(v_a_3872_);
lean_dec_ref_known(v_a_3871_, 1);
lean_inc_ref(v_binderType_3830_);
v___x_3873_ = l_Lean_Meta_getLevel(v_binderType_3830_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_);
if (lean_obj_tag(v___x_3873_) == 0)
{
lean_object* v_a_3874_; lean_object* v___x_3876_; uint8_t v_isShared_3877_; uint8_t v_isSharedCheck_3887_; 
v_a_3874_ = lean_ctor_get(v___x_3873_, 0);
v_isSharedCheck_3887_ = !lean_is_exclusive(v___x_3873_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3876_ = v___x_3873_;
v_isShared_3877_ = v_isSharedCheck_3887_;
goto v_resetjp_3875_;
}
else
{
lean_inc(v_a_3874_);
lean_dec(v___x_3873_);
v___x_3876_ = lean_box(0);
v_isShared_3877_ = v_isSharedCheck_3887_;
goto v_resetjp_3875_;
}
v_resetjp_3875_:
{
lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3885_; 
v___x_3878_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3878_, 0, v_a_3874_);
lean_ctor_set(v___x_3878_, 1, v___x_3865_);
v___x_3879_ = l_Lean_mkConst(v___x_3859_, v___x_3878_);
lean_inc_ref(v_binderType_3830_);
lean_inc_ref_n(v_body_3831_, 2);
v___x_3880_ = l_Lean_mkApp3(v___x_3879_, v_body_3831_, v_binderType_3830_, v_a_3872_);
v___x_3881_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpForall___closed__6, &l_Lean_Meta_Grind_NormSym_simpForall___closed__6_once, _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__6);
v___x_3882_ = l_Lean_mkApp3(v___x_3881_, v_e_3724_, v_body_3831_, v___x_3880_);
v___x_3883_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3883_, 0, v_body_3831_);
lean_ctor_set(v___x_3883_, 1, v___x_3882_);
lean_ctor_set_uint8(v___x_3883_, sizeof(void*)*2, v___x_3840_);
lean_ctor_set_uint8(v___x_3883_, sizeof(void*)*2 + 1, v___x_3840_);
if (v_isShared_3877_ == 0)
{
lean_ctor_set(v___x_3876_, 0, v___x_3883_);
v___x_3885_ = v___x_3876_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v___x_3883_);
v___x_3885_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
return v___x_3885_;
}
}
}
else
{
lean_object* v_a_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3895_; 
lean_dec(v_a_3872_);
lean_dec_ref(v_body_3831_);
lean_dec_ref_known(v_e_3724_, 3);
v_a_3888_ = lean_ctor_get(v___x_3873_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v___x_3873_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3890_ = v___x_3873_;
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_a_3888_);
lean_dec(v___x_3873_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v___x_3893_; 
if (v_isShared_3891_ == 0)
{
v___x_3893_ = v___x_3890_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v_a_3888_);
v___x_3893_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
return v___x_3893_;
}
}
}
}
else
{
lean_dec(v_a_3871_);
v___y_3736_ = v___y_3842_;
v___y_3737_ = v___y_3843_;
v___y_3738_ = v___y_3844_;
v___y_3739_ = v___y_3845_;
v___y_3740_ = v___y_3846_;
v___y_3741_ = v___y_3847_;
v___y_3742_ = v___y_3848_;
v___y_3743_ = v___y_3849_;
v___y_3744_ = v___y_3850_;
goto v___jp_3735_;
}
}
else
{
lean_object* v_a_3896_; lean_object* v___x_3898_; uint8_t v_isShared_3899_; uint8_t v_isSharedCheck_3903_; 
lean_dec_ref_known(v_e_3724_, 3);
v_a_3896_ = lean_ctor_get(v___x_3870_, 0);
v_isSharedCheck_3903_ = !lean_is_exclusive(v___x_3870_);
if (v_isSharedCheck_3903_ == 0)
{
v___x_3898_ = v___x_3870_;
v_isShared_3899_ = v_isSharedCheck_3903_;
goto v_resetjp_3897_;
}
else
{
lean_inc(v_a_3896_);
lean_dec(v___x_3870_);
v___x_3898_ = lean_box(0);
v_isShared_3899_ = v_isSharedCheck_3903_;
goto v_resetjp_3897_;
}
v_resetjp_3897_:
{
lean_object* v___x_3901_; 
if (v_isShared_3899_ == 0)
{
v___x_3901_ = v___x_3898_;
goto v_reusejp_3900_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v_a_3896_);
v___x_3901_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3900_;
}
v_reusejp_3900_:
{
return v___x_3901_;
}
}
}
}
else
{
lean_object* v_a_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3911_; 
lean_dec_ref_known(v_e_3724_, 3);
v_a_3904_ = lean_ctor_get(v___x_3862_, 0);
v_isSharedCheck_3911_ = !lean_is_exclusive(v___x_3862_);
if (v_isSharedCheck_3911_ == 0)
{
v___x_3906_ = v___x_3862_;
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_a_3904_);
lean_dec(v___x_3862_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v___x_3909_; 
if (v_isShared_3907_ == 0)
{
v___x_3909_ = v___x_3906_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v_a_3904_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
return v___x_3909_;
}
}
}
}
}
}
else
{
lean_dec(v___x_3855_);
lean_dec(v_a_3854_);
v___y_3736_ = v___y_3842_;
v___y_3737_ = v___y_3843_;
v___y_3738_ = v___y_3844_;
v___y_3739_ = v___y_3845_;
v___y_3740_ = v___y_3846_;
v___y_3741_ = v___y_3847_;
v___y_3742_ = v___y_3848_;
v___y_3743_ = v___y_3849_;
v___y_3744_ = v___y_3850_;
goto v___jp_3735_;
}
}
else
{
lean_object* v_a_3912_; lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3919_; 
lean_dec(v_a_3852_);
lean_dec_ref_known(v_e_3724_, 3);
v_a_3912_ = lean_ctor_get(v___x_3853_, 0);
v_isSharedCheck_3919_ = !lean_is_exclusive(v___x_3853_);
if (v_isSharedCheck_3919_ == 0)
{
v___x_3914_ = v___x_3853_;
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
else
{
lean_inc(v_a_3912_);
lean_dec(v___x_3853_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
lean_object* v___x_3917_; 
if (v_isShared_3915_ == 0)
{
v___x_3917_ = v___x_3914_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3918_; 
v_reuseFailAlloc_3918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3918_, 0, v_a_3912_);
v___x_3917_ = v_reuseFailAlloc_3918_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
return v___x_3917_;
}
}
}
}
else
{
lean_object* v_a_3920_; lean_object* v___x_3922_; uint8_t v_isShared_3923_; uint8_t v_isSharedCheck_3927_; 
lean_dec_ref_known(v_e_3724_, 3);
v_a_3920_ = lean_ctor_get(v___x_3851_, 0);
v_isSharedCheck_3927_ = !lean_is_exclusive(v___x_3851_);
if (v_isSharedCheck_3927_ == 0)
{
v___x_3922_ = v___x_3851_;
v_isShared_3923_ = v_isSharedCheck_3927_;
goto v_resetjp_3921_;
}
else
{
lean_inc(v_a_3920_);
lean_dec(v___x_3851_);
v___x_3922_ = lean_box(0);
v_isShared_3923_ = v_isSharedCheck_3927_;
goto v_resetjp_3921_;
}
v_resetjp_3921_:
{
lean_object* v___x_3925_; 
if (v_isShared_3923_ == 0)
{
v___x_3925_ = v___x_3922_;
goto v_reusejp_3924_;
}
else
{
lean_object* v_reuseFailAlloc_3926_; 
v_reuseFailAlloc_3926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3926_, 0, v_a_3920_);
v___x_3925_ = v_reuseFailAlloc_3926_;
goto v_reusejp_3924_;
}
v_reusejp_3924_:
{
return v___x_3925_;
}
}
}
}
}
else
{
lean_object* v___x_4062_; 
lean_dec_ref(v___x_3836_);
lean_inc_ref(v_body_3831_);
v___x_4062_ = l_Lean_Meta_isProp(v_body_3831_, v_a_3730_, v_a_3731_, v_a_3732_, v_a_3733_);
if (lean_obj_tag(v___x_4062_) == 0)
{
lean_object* v_a_4063_; uint8_t v___x_4064_; 
v_a_4063_ = lean_ctor_get(v___x_4062_, 0);
lean_inc(v_a_4063_);
lean_dec_ref_known(v___x_4062_, 1);
v___x_4064_ = lean_unbox(v_a_4063_);
if (v___x_4064_ == 0)
{
lean_dec(v_a_4063_);
v___y_3736_ = v_a_3725_;
v___y_3737_ = v_a_3726_;
v___y_3738_ = v_a_3727_;
v___y_3739_ = v_a_3728_;
v___y_3740_ = v_a_3729_;
v___y_3741_ = v_a_3730_;
v___y_3742_ = v_a_3731_;
v___y_3743_ = v_a_3732_;
v___y_3744_ = v_a_3733_;
goto v___jp_3735_;
}
else
{
lean_object* v___x_4065_; 
lean_inc_ref(v_body_3831_);
lean_dec_ref_known(v_e_3724_, 3);
v___x_4065_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_3728_);
if (lean_obj_tag(v___x_4065_) == 0)
{
lean_object* v_a_4066_; lean_object* v___x_4068_; uint8_t v_isShared_4069_; uint8_t v_isSharedCheck_4077_; 
v_a_4066_ = lean_ctor_get(v___x_4065_, 0);
v_isSharedCheck_4077_ = !lean_is_exclusive(v___x_4065_);
if (v_isSharedCheck_4077_ == 0)
{
v___x_4068_ = v___x_4065_;
v_isShared_4069_ = v_isSharedCheck_4077_;
goto v_resetjp_4067_;
}
else
{
lean_inc(v_a_4066_);
lean_dec(v___x_4065_);
v___x_4068_ = lean_box(0);
v_isShared_4069_ = v_isSharedCheck_4077_;
goto v_resetjp_4067_;
}
v_resetjp_4067_:
{
lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; uint8_t v___x_4073_; lean_object* v___x_4075_; 
v___x_4070_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpForall___closed__20, &l_Lean_Meta_Grind_NormSym_simpForall___closed__20_once, _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__20);
v___x_4071_ = l_Lean_Expr_app___override(v___x_4070_, v_body_3831_);
v___x_4072_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_4072_, 0, v_a_4066_);
lean_ctor_set(v___x_4072_, 1, v___x_4071_);
v___x_4073_ = lean_unbox(v_a_4063_);
lean_dec(v_a_4063_);
lean_ctor_set_uint8(v___x_4072_, sizeof(void*)*2, v___x_4073_);
lean_ctor_set_uint8(v___x_4072_, sizeof(void*)*2 + 1, v___x_3833_);
if (v_isShared_4069_ == 0)
{
lean_ctor_set(v___x_4068_, 0, v___x_4072_);
v___x_4075_ = v___x_4068_;
goto v_reusejp_4074_;
}
else
{
lean_object* v_reuseFailAlloc_4076_; 
v_reuseFailAlloc_4076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4076_, 0, v___x_4072_);
v___x_4075_ = v_reuseFailAlloc_4076_;
goto v_reusejp_4074_;
}
v_reusejp_4074_:
{
return v___x_4075_;
}
}
}
else
{
lean_object* v_a_4078_; lean_object* v___x_4080_; uint8_t v_isShared_4081_; uint8_t v_isSharedCheck_4085_; 
lean_dec(v_a_4063_);
lean_dec_ref(v_body_3831_);
v_a_4078_ = lean_ctor_get(v___x_4065_, 0);
v_isSharedCheck_4085_ = !lean_is_exclusive(v___x_4065_);
if (v_isSharedCheck_4085_ == 0)
{
v___x_4080_ = v___x_4065_;
v_isShared_4081_ = v_isSharedCheck_4085_;
goto v_resetjp_4079_;
}
else
{
lean_inc(v_a_4078_);
lean_dec(v___x_4065_);
v___x_4080_ = lean_box(0);
v_isShared_4081_ = v_isSharedCheck_4085_;
goto v_resetjp_4079_;
}
v_resetjp_4079_:
{
lean_object* v___x_4083_; 
if (v_isShared_4081_ == 0)
{
v___x_4083_ = v___x_4080_;
goto v_reusejp_4082_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v_a_4078_);
v___x_4083_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4082_;
}
v_reusejp_4082_:
{
return v___x_4083_;
}
}
}
}
}
else
{
lean_object* v_a_4086_; lean_object* v___x_4088_; uint8_t v_isShared_4089_; uint8_t v_isSharedCheck_4093_; 
lean_dec_ref_known(v_e_3724_, 3);
v_a_4086_ = lean_ctor_get(v___x_4062_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v___x_4062_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4088_ = v___x_4062_;
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
else
{
lean_inc(v_a_4086_);
lean_dec(v___x_4062_);
v___x_4088_ = lean_box(0);
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
v_resetjp_4087_:
{
lean_object* v___x_4091_; 
if (v_isShared_4089_ == 0)
{
v___x_4091_ = v___x_4088_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_a_4086_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
return v___x_4091_;
}
}
}
}
}
else
{
lean_object* v_a_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4101_; 
lean_dec_ref_known(v_e_3724_, 3);
v_a_4094_ = lean_ctor_get(v___x_3834_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v___x_3834_);
if (v_isSharedCheck_4101_ == 0)
{
v___x_4096_ = v___x_3834_;
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_a_4094_);
lean_dec(v___x_3834_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
lean_object* v___x_4099_; 
if (v_isShared_4097_ == 0)
{
v___x_4099_ = v___x_4096_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v_a_4094_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
}
}
else
{
lean_object* v___x_4102_; 
lean_inc_ref(v_binderType_3830_);
v___x_4102_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_binderType_3830_, v_a_3731_);
if (lean_obj_tag(v___x_4102_) == 0)
{
lean_object* v_a_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; uint8_t v___x_4106_; 
v_a_4103_ = lean_ctor_get(v___x_4102_, 0);
lean_inc(v_a_4103_);
lean_dec_ref_known(v___x_4102_, 1);
v___x_4104_ = l_Lean_Expr_cleanupAnnotations(v_a_4103_);
lean_dec(v_a_4103_);
v___x_4105_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__6));
v___x_4106_ = l_Lean_Expr_isConstOf(v___x_4104_, v___x_4105_);
if (v___x_4106_ == 0)
{
lean_object* v___x_4107_; uint8_t v___x_4108_; 
v___x_4107_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_pushNot___closed__8));
v___x_4108_ = l_Lean_Expr_isConstOf(v___x_4104_, v___x_4107_);
lean_dec_ref(v___x_4104_);
if (v___x_4108_ == 0)
{
v___y_3736_ = v_a_3725_;
v___y_3737_ = v_a_3726_;
v___y_3738_ = v_a_3727_;
v___y_3739_ = v_a_3728_;
v___y_3740_ = v_a_3729_;
v___y_3741_ = v_a_3730_;
v___y_3742_ = v_a_3731_;
v___y_3743_ = v_a_3732_;
v___y_3744_ = v_a_3733_;
goto v___jp_3735_;
}
else
{
lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; 
v___x_4109_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpForall___closed__22));
v___x_4110_ = lean_box(0);
v___x_4111_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___redArg(v___x_4109_, v___x_4110_, v_a_3729_);
if (lean_obj_tag(v___x_4111_) == 0)
{
lean_object* v_a_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; 
v_a_4112_ = lean_ctor_get(v___x_4111_, 0);
lean_inc(v_a_4112_);
lean_dec_ref_known(v___x_4111_, 1);
v___x_4113_ = lean_unsigned_to_nat(1u);
v___x_4114_ = lean_mk_empty_array_with_capacity(v___x_4113_);
v___x_4115_ = lean_array_push(v___x_4114_, v_a_4112_);
lean_inc_ref(v_body_3831_);
v___x_4116_ = l_Lean_Meta_Sym_instantiateRevBetaS(v_body_3831_, v___x_4115_, v_a_3728_, v_a_3729_, v_a_3730_, v_a_3731_, v_a_3732_, v_a_3733_);
if (lean_obj_tag(v___x_4116_) == 0)
{
lean_object* v_a_4117_; lean_object* v___x_4118_; 
v_a_4117_ = lean_ctor_get(v___x_4116_, 0);
lean_inc_n(v_a_4117_, 2);
lean_dec_ref_known(v___x_4116_, 1);
v___x_4118_ = l_Lean_Meta_isProp(v_a_4117_, v_a_3730_, v_a_3731_, v_a_3732_, v_a_3733_);
if (lean_obj_tag(v___x_4118_) == 0)
{
lean_object* v_a_4119_; lean_object* v___x_4121_; uint8_t v_isShared_4122_; uint8_t v_isSharedCheck_4132_; 
v_a_4119_ = lean_ctor_get(v___x_4118_, 0);
v_isSharedCheck_4132_ = !lean_is_exclusive(v___x_4118_);
if (v_isSharedCheck_4132_ == 0)
{
v___x_4121_ = v___x_4118_;
v_isShared_4122_ = v_isSharedCheck_4132_;
goto v_resetjp_4120_;
}
else
{
lean_inc(v_a_4119_);
lean_dec(v___x_4118_);
v___x_4121_ = lean_box(0);
v_isShared_4122_ = v_isSharedCheck_4132_;
goto v_resetjp_4120_;
}
v_resetjp_4120_:
{
uint8_t v___x_4123_; 
v___x_4123_ = lean_unbox(v_a_4119_);
if (v___x_4123_ == 0)
{
lean_del_object(v___x_4121_);
lean_dec(v_a_4119_);
lean_dec(v_a_4117_);
v___y_3736_ = v_a_3725_;
v___y_3737_ = v_a_3726_;
v___y_3738_ = v_a_3727_;
v___y_3739_ = v_a_3728_;
v___y_3740_ = v_a_3729_;
v___y_3741_ = v_a_3730_;
v___y_3742_ = v_a_3731_;
v___y_3743_ = v_a_3732_;
v___y_3744_ = v_a_3733_;
goto v___jp_3735_;
}
else
{
lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; uint8_t v___x_4128_; lean_object* v___x_4130_; 
lean_inc_ref(v_body_3831_);
lean_inc_ref(v_binderType_3830_);
lean_inc(v_binderName_3829_);
lean_dec_ref_known(v_e_3724_, 3);
v___x_4124_ = l_Lean_mkLambda(v_binderName_3829_, v_binderInfo_3832_, v_binderType_3830_, v_body_3831_);
v___x_4125_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpForall___closed__25, &l_Lean_Meta_Grind_NormSym_simpForall___closed__25_once, _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__25);
v___x_4126_ = l_Lean_Expr_app___override(v___x_4125_, v___x_4124_);
v___x_4127_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_4127_, 0, v_a_4117_);
lean_ctor_set(v___x_4127_, 1, v___x_4126_);
v___x_4128_ = lean_unbox(v_a_4119_);
lean_dec(v_a_4119_);
lean_ctor_set_uint8(v___x_4127_, sizeof(void*)*2, v___x_4128_);
lean_ctor_set_uint8(v___x_4127_, sizeof(void*)*2 + 1, v___x_4106_);
if (v_isShared_4122_ == 0)
{
lean_ctor_set(v___x_4121_, 0, v___x_4127_);
v___x_4130_ = v___x_4121_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v___x_4127_);
v___x_4130_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
return v___x_4130_;
}
}
}
}
else
{
lean_object* v_a_4133_; lean_object* v___x_4135_; uint8_t v_isShared_4136_; uint8_t v_isSharedCheck_4140_; 
lean_dec(v_a_4117_);
lean_dec_ref_known(v_e_3724_, 3);
v_a_4133_ = lean_ctor_get(v___x_4118_, 0);
v_isSharedCheck_4140_ = !lean_is_exclusive(v___x_4118_);
if (v_isSharedCheck_4140_ == 0)
{
v___x_4135_ = v___x_4118_;
v_isShared_4136_ = v_isSharedCheck_4140_;
goto v_resetjp_4134_;
}
else
{
lean_inc(v_a_4133_);
lean_dec(v___x_4118_);
v___x_4135_ = lean_box(0);
v_isShared_4136_ = v_isSharedCheck_4140_;
goto v_resetjp_4134_;
}
v_resetjp_4134_:
{
lean_object* v___x_4138_; 
if (v_isShared_4136_ == 0)
{
v___x_4138_ = v___x_4135_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4139_; 
v_reuseFailAlloc_4139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4139_, 0, v_a_4133_);
v___x_4138_ = v_reuseFailAlloc_4139_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
return v___x_4138_;
}
}
}
}
else
{
lean_object* v_a_4141_; lean_object* v___x_4143_; uint8_t v_isShared_4144_; uint8_t v_isSharedCheck_4148_; 
lean_dec_ref_known(v_e_3724_, 3);
v_a_4141_ = lean_ctor_get(v___x_4116_, 0);
v_isSharedCheck_4148_ = !lean_is_exclusive(v___x_4116_);
if (v_isSharedCheck_4148_ == 0)
{
v___x_4143_ = v___x_4116_;
v_isShared_4144_ = v_isSharedCheck_4148_;
goto v_resetjp_4142_;
}
else
{
lean_inc(v_a_4141_);
lean_dec(v___x_4116_);
v___x_4143_ = lean_box(0);
v_isShared_4144_ = v_isSharedCheck_4148_;
goto v_resetjp_4142_;
}
v_resetjp_4142_:
{
lean_object* v___x_4146_; 
if (v_isShared_4144_ == 0)
{
v___x_4146_ = v___x_4143_;
goto v_reusejp_4145_;
}
else
{
lean_object* v_reuseFailAlloc_4147_; 
v_reuseFailAlloc_4147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4147_, 0, v_a_4141_);
v___x_4146_ = v_reuseFailAlloc_4147_;
goto v_reusejp_4145_;
}
v_reusejp_4145_:
{
return v___x_4146_;
}
}
}
}
else
{
lean_object* v_a_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4156_; 
lean_dec_ref_known(v_e_3724_, 3);
v_a_4149_ = lean_ctor_get(v___x_4111_, 0);
v_isSharedCheck_4156_ = !lean_is_exclusive(v___x_4111_);
if (v_isSharedCheck_4156_ == 0)
{
v___x_4151_ = v___x_4111_;
v_isShared_4152_ = v_isSharedCheck_4156_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_a_4149_);
lean_dec(v___x_4111_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4156_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
lean_object* v___x_4154_; 
if (v_isShared_4152_ == 0)
{
v___x_4154_ = v___x_4151_;
goto v_reusejp_4153_;
}
else
{
lean_object* v_reuseFailAlloc_4155_; 
v_reuseFailAlloc_4155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4155_, 0, v_a_4149_);
v___x_4154_ = v_reuseFailAlloc_4155_;
goto v_reusejp_4153_;
}
v_reusejp_4153_:
{
return v___x_4154_;
}
}
}
}
}
else
{
lean_object* v___x_4157_; lean_object* v___x_4158_; 
lean_dec_ref(v___x_4104_);
lean_inc_ref(v_body_3831_);
lean_inc_ref(v_binderType_3830_);
lean_inc(v_binderName_3829_);
v___x_4157_ = l_Lean_mkLambda(v_binderName_3829_, v_binderInfo_3832_, v_binderType_3830_, v_body_3831_);
lean_inc(v_a_3733_);
lean_inc_ref(v_a_3732_);
lean_inc(v_a_3731_);
lean_inc_ref(v_a_3730_);
lean_inc_ref(v___x_4157_);
v___x_4158_ = lean_infer_type(v___x_4157_, v_a_3730_, v_a_3731_, v_a_3732_, v_a_3733_);
if (lean_obj_tag(v___x_4158_) == 0)
{
lean_object* v_a_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; 
v_a_4159_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_a_4159_);
lean_dec_ref_known(v___x_4158_, 1);
v___x_4160_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpForall___closed__27, &l_Lean_Meta_Grind_NormSym_simpForall___closed__27_once, _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__27);
lean_inc_ref(v_binderType_3830_);
lean_inc(v_binderName_3829_);
v___x_4161_ = l_Lean_mkForall(v_binderName_3829_, v_binderInfo_3832_, v_binderType_3830_, v___x_4160_);
v___x_4162_ = l_Lean_Meta_isExprDefEq(v_a_4159_, v___x_4161_, v_a_3730_, v_a_3731_, v_a_3732_, v_a_3733_);
if (lean_obj_tag(v___x_4162_) == 0)
{
lean_object* v_a_4163_; uint8_t v___x_4164_; 
v_a_4163_ = lean_ctor_get(v___x_4162_, 0);
lean_inc(v_a_4163_);
lean_dec_ref_known(v___x_4162_, 1);
v___x_4164_ = lean_unbox(v_a_4163_);
if (v___x_4164_ == 0)
{
lean_dec(v_a_4163_);
lean_dec_ref(v___x_4157_);
v___y_3736_ = v_a_3725_;
v___y_3737_ = v_a_3726_;
v___y_3738_ = v_a_3727_;
v___y_3739_ = v_a_3728_;
v___y_3740_ = v_a_3729_;
v___y_3741_ = v_a_3730_;
v___y_3742_ = v_a_3731_;
v___y_3743_ = v_a_3732_;
v___y_3744_ = v_a_3733_;
goto v___jp_3735_;
}
else
{
lean_object* v___x_4165_; 
lean_dec_ref_known(v_e_3724_, 3);
v___x_4165_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_3728_);
if (lean_obj_tag(v___x_4165_) == 0)
{
lean_object* v_a_4166_; lean_object* v___x_4168_; uint8_t v_isShared_4169_; uint8_t v_isSharedCheck_4178_; 
v_a_4166_ = lean_ctor_get(v___x_4165_, 0);
v_isSharedCheck_4178_ = !lean_is_exclusive(v___x_4165_);
if (v_isSharedCheck_4178_ == 0)
{
v___x_4168_ = v___x_4165_;
v_isShared_4169_ = v_isSharedCheck_4178_;
goto v_resetjp_4167_;
}
else
{
lean_inc(v_a_4166_);
lean_dec(v___x_4165_);
v___x_4168_ = lean_box(0);
v_isShared_4169_ = v_isSharedCheck_4178_;
goto v_resetjp_4167_;
}
v_resetjp_4167_:
{
lean_object* v___x_4170_; lean_object* v___x_4171_; uint8_t v___x_4172_; lean_object* v___x_4173_; uint8_t v___x_4174_; lean_object* v___x_4176_; 
v___x_4170_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpForall___closed__30, &l_Lean_Meta_Grind_NormSym_simpForall___closed__30_once, _init_l_Lean_Meta_Grind_NormSym_simpForall___closed__30);
v___x_4171_ = l_Lean_Expr_app___override(v___x_4170_, v___x_4157_);
v___x_4172_ = 0;
v___x_4173_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_4173_, 0, v_a_4166_);
lean_ctor_set(v___x_4173_, 1, v___x_4171_);
v___x_4174_ = lean_unbox(v_a_4163_);
lean_dec(v_a_4163_);
lean_ctor_set_uint8(v___x_4173_, sizeof(void*)*2, v___x_4174_);
lean_ctor_set_uint8(v___x_4173_, sizeof(void*)*2 + 1, v___x_4172_);
if (v_isShared_4169_ == 0)
{
lean_ctor_set(v___x_4168_, 0, v___x_4173_);
v___x_4176_ = v___x_4168_;
goto v_reusejp_4175_;
}
else
{
lean_object* v_reuseFailAlloc_4177_; 
v_reuseFailAlloc_4177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4177_, 0, v___x_4173_);
v___x_4176_ = v_reuseFailAlloc_4177_;
goto v_reusejp_4175_;
}
v_reusejp_4175_:
{
return v___x_4176_;
}
}
}
else
{
lean_object* v_a_4179_; lean_object* v___x_4181_; uint8_t v_isShared_4182_; uint8_t v_isSharedCheck_4186_; 
lean_dec(v_a_4163_);
lean_dec_ref(v___x_4157_);
v_a_4179_ = lean_ctor_get(v___x_4165_, 0);
v_isSharedCheck_4186_ = !lean_is_exclusive(v___x_4165_);
if (v_isSharedCheck_4186_ == 0)
{
v___x_4181_ = v___x_4165_;
v_isShared_4182_ = v_isSharedCheck_4186_;
goto v_resetjp_4180_;
}
else
{
lean_inc(v_a_4179_);
lean_dec(v___x_4165_);
v___x_4181_ = lean_box(0);
v_isShared_4182_ = v_isSharedCheck_4186_;
goto v_resetjp_4180_;
}
v_resetjp_4180_:
{
lean_object* v___x_4184_; 
if (v_isShared_4182_ == 0)
{
v___x_4184_ = v___x_4181_;
goto v_reusejp_4183_;
}
else
{
lean_object* v_reuseFailAlloc_4185_; 
v_reuseFailAlloc_4185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4185_, 0, v_a_4179_);
v___x_4184_ = v_reuseFailAlloc_4185_;
goto v_reusejp_4183_;
}
v_reusejp_4183_:
{
return v___x_4184_;
}
}
}
}
}
else
{
lean_object* v_a_4187_; lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4194_; 
lean_dec_ref(v___x_4157_);
lean_dec_ref_known(v_e_3724_, 3);
v_a_4187_ = lean_ctor_get(v___x_4162_, 0);
v_isSharedCheck_4194_ = !lean_is_exclusive(v___x_4162_);
if (v_isSharedCheck_4194_ == 0)
{
v___x_4189_ = v___x_4162_;
v_isShared_4190_ = v_isSharedCheck_4194_;
goto v_resetjp_4188_;
}
else
{
lean_inc(v_a_4187_);
lean_dec(v___x_4162_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4194_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
lean_object* v___x_4192_; 
if (v_isShared_4190_ == 0)
{
v___x_4192_ = v___x_4189_;
goto v_reusejp_4191_;
}
else
{
lean_object* v_reuseFailAlloc_4193_; 
v_reuseFailAlloc_4193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4193_, 0, v_a_4187_);
v___x_4192_ = v_reuseFailAlloc_4193_;
goto v_reusejp_4191_;
}
v_reusejp_4191_:
{
return v___x_4192_;
}
}
}
}
else
{
lean_object* v_a_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4202_; 
lean_dec_ref(v___x_4157_);
lean_dec_ref_known(v_e_3724_, 3);
v_a_4195_ = lean_ctor_get(v___x_4158_, 0);
v_isSharedCheck_4202_ = !lean_is_exclusive(v___x_4158_);
if (v_isSharedCheck_4202_ == 0)
{
v___x_4197_ = v___x_4158_;
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_a_4195_);
lean_dec(v___x_4158_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4200_; 
if (v_isShared_4198_ == 0)
{
v___x_4200_ = v___x_4197_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4201_; 
v_reuseFailAlloc_4201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4201_, 0, v_a_4195_);
v___x_4200_ = v_reuseFailAlloc_4201_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
return v___x_4200_;
}
}
}
}
}
else
{
lean_object* v_a_4203_; lean_object* v___x_4205_; uint8_t v_isShared_4206_; uint8_t v_isSharedCheck_4210_; 
lean_dec_ref_known(v_e_3724_, 3);
v_a_4203_ = lean_ctor_get(v___x_4102_, 0);
v_isSharedCheck_4210_ = !lean_is_exclusive(v___x_4102_);
if (v_isSharedCheck_4210_ == 0)
{
v___x_4205_ = v___x_4102_;
v_isShared_4206_ = v_isSharedCheck_4210_;
goto v_resetjp_4204_;
}
else
{
lean_inc(v_a_4203_);
lean_dec(v___x_4102_);
v___x_4205_ = lean_box(0);
v_isShared_4206_ = v_isSharedCheck_4210_;
goto v_resetjp_4204_;
}
v_resetjp_4204_:
{
lean_object* v___x_4208_; 
if (v_isShared_4206_ == 0)
{
v___x_4208_ = v___x_4205_;
goto v_reusejp_4207_;
}
else
{
lean_object* v_reuseFailAlloc_4209_; 
v_reuseFailAlloc_4209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4209_, 0, v_a_4203_);
v___x_4208_ = v_reuseFailAlloc_4209_;
goto v_reusejp_4207_;
}
v_reusejp_4207_:
{
return v___x_4208_;
}
}
}
}
}
else
{
lean_object* v___x_4211_; lean_object* v___x_4212_; 
lean_dec_ref(v_e_3724_);
v___x_4211_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_4212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4212_, 0, v___x_4211_);
return v___x_4212_;
}
v___jp_3735_:
{
lean_object* v___x_3745_; 
lean_inc_ref(v_e_3724_);
v___x_3745_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_forallOr_x3f(v_e_3724_, v___y_3736_, v___y_3737_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_);
if (lean_obj_tag(v___x_3745_) == 0)
{
lean_object* v_a_3746_; lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3820_; 
v_a_3746_ = lean_ctor_get(v___x_3745_, 0);
v_isSharedCheck_3820_ = !lean_is_exclusive(v___x_3745_);
if (v_isSharedCheck_3820_ == 0)
{
v___x_3748_ = v___x_3745_;
v_isShared_3749_ = v_isSharedCheck_3820_;
goto v_resetjp_3747_;
}
else
{
lean_inc(v_a_3746_);
lean_dec(v___x_3745_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3820_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
if (lean_obj_tag(v_a_3746_) == 1)
{
lean_object* v_val_3750_; lean_object* v_fst_3751_; lean_object* v_snd_3752_; uint8_t v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3756_; 
lean_dec_ref(v_e_3724_);
v_val_3750_ = lean_ctor_get(v_a_3746_, 0);
lean_inc(v_val_3750_);
lean_dec_ref_known(v_a_3746_, 1);
v_fst_3751_ = lean_ctor_get(v_val_3750_, 0);
lean_inc(v_fst_3751_);
v_snd_3752_ = lean_ctor_get(v_val_3750_, 1);
lean_inc(v_snd_3752_);
lean_dec(v_val_3750_);
v___x_3753_ = 0;
v___x_3754_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3754_, 0, v_fst_3751_);
lean_ctor_set(v___x_3754_, 1, v_snd_3752_);
lean_ctor_set_uint8(v___x_3754_, sizeof(void*)*2, v___x_3753_);
lean_ctor_set_uint8(v___x_3754_, sizeof(void*)*2 + 1, v___x_3753_);
if (v_isShared_3749_ == 0)
{
lean_ctor_set(v___x_3748_, 0, v___x_3754_);
v___x_3756_ = v___x_3748_;
goto v_reusejp_3755_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v___x_3754_);
v___x_3756_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3755_;
}
v_reusejp_3755_:
{
return v___x_3756_;
}
}
else
{
lean_object* v___x_3758_; 
lean_del_object(v___x_3748_);
lean_dec(v_a_3746_);
v___x_3758_ = l_Lean_Meta_Grind_forallImpAnd_x3f(v_e_3724_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_);
if (lean_obj_tag(v___x_3758_) == 0)
{
lean_object* v_a_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3811_; 
v_a_3759_ = lean_ctor_get(v___x_3758_, 0);
v_isSharedCheck_3811_ = !lean_is_exclusive(v___x_3758_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3761_ = v___x_3758_;
v_isShared_3762_ = v_isSharedCheck_3811_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_a_3759_);
lean_dec(v___x_3758_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3811_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
if (lean_obj_tag(v_a_3759_) == 1)
{
lean_object* v_val_3763_; lean_object* v_snd_3764_; lean_object* v_fst_3765_; lean_object* v_fst_3766_; lean_object* v_snd_3767_; lean_object* v___x_3768_; 
lean_del_object(v___x_3761_);
v_val_3763_ = lean_ctor_get(v_a_3759_, 0);
lean_inc(v_val_3763_);
lean_dec_ref_known(v_a_3759_, 1);
v_snd_3764_ = lean_ctor_get(v_val_3763_, 1);
lean_inc(v_snd_3764_);
v_fst_3765_ = lean_ctor_get(v_val_3763_, 0);
lean_inc(v_fst_3765_);
lean_dec(v_val_3763_);
v_fst_3766_ = lean_ctor_get(v_snd_3764_, 0);
lean_inc(v_fst_3766_);
v_snd_3767_ = lean_ctor_get(v_snd_3764_, 1);
lean_inc(v_snd_3767_);
lean_dec(v_snd_3764_);
v___x_3768_ = l_Lean_Meta_Sym_shareCommonInc(v_fst_3765_, v___y_3739_, v___y_3740_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_);
if (lean_obj_tag(v___x_3768_) == 0)
{
lean_object* v_a_3769_; lean_object* v___x_3770_; 
v_a_3769_ = lean_ctor_get(v___x_3768_, 0);
lean_inc(v_a_3769_);
lean_dec_ref_known(v___x_3768_, 1);
v___x_3770_ = l_Lean_Meta_Sym_shareCommonInc(v_fst_3766_, v___y_3739_, v___y_3740_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_);
if (lean_obj_tag(v___x_3770_) == 0)
{
lean_object* v_a_3771_; lean_object* v___x_3772_; 
v_a_3771_ = lean_ctor_get(v___x_3770_, 0);
lean_inc(v_a_3771_);
lean_dec_ref_known(v___x_3770_, 1);
v___x_3772_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS(v_a_3769_, v_a_3771_, v___y_3736_, v___y_3737_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_);
if (lean_obj_tag(v___x_3772_) == 0)
{
lean_object* v_a_3773_; lean_object* v___x_3775_; uint8_t v_isShared_3776_; uint8_t v_isSharedCheck_3782_; 
v_a_3773_ = lean_ctor_get(v___x_3772_, 0);
v_isSharedCheck_3782_ = !lean_is_exclusive(v___x_3772_);
if (v_isSharedCheck_3782_ == 0)
{
v___x_3775_ = v___x_3772_;
v_isShared_3776_ = v_isSharedCheck_3782_;
goto v_resetjp_3774_;
}
else
{
lean_inc(v_a_3773_);
lean_dec(v___x_3772_);
v___x_3775_ = lean_box(0);
v_isShared_3776_ = v_isSharedCheck_3782_;
goto v_resetjp_3774_;
}
v_resetjp_3774_:
{
uint8_t v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3780_; 
v___x_3777_ = 0;
v___x_3778_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3778_, 0, v_a_3773_);
lean_ctor_set(v___x_3778_, 1, v_snd_3767_);
lean_ctor_set_uint8(v___x_3778_, sizeof(void*)*2, v___x_3777_);
lean_ctor_set_uint8(v___x_3778_, sizeof(void*)*2 + 1, v___x_3777_);
if (v_isShared_3776_ == 0)
{
lean_ctor_set(v___x_3775_, 0, v___x_3778_);
v___x_3780_ = v___x_3775_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3781_; 
v_reuseFailAlloc_3781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3781_, 0, v___x_3778_);
v___x_3780_ = v_reuseFailAlloc_3781_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
return v___x_3780_;
}
}
}
else
{
lean_object* v_a_3783_; lean_object* v___x_3785_; uint8_t v_isShared_3786_; uint8_t v_isSharedCheck_3790_; 
lean_dec(v_snd_3767_);
v_a_3783_ = lean_ctor_get(v___x_3772_, 0);
v_isSharedCheck_3790_ = !lean_is_exclusive(v___x_3772_);
if (v_isSharedCheck_3790_ == 0)
{
v___x_3785_ = v___x_3772_;
v_isShared_3786_ = v_isSharedCheck_3790_;
goto v_resetjp_3784_;
}
else
{
lean_inc(v_a_3783_);
lean_dec(v___x_3772_);
v___x_3785_ = lean_box(0);
v_isShared_3786_ = v_isSharedCheck_3790_;
goto v_resetjp_3784_;
}
v_resetjp_3784_:
{
lean_object* v___x_3788_; 
if (v_isShared_3786_ == 0)
{
v___x_3788_ = v___x_3785_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3789_; 
v_reuseFailAlloc_3789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3789_, 0, v_a_3783_);
v___x_3788_ = v_reuseFailAlloc_3789_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
return v___x_3788_;
}
}
}
}
else
{
lean_object* v_a_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3798_; 
lean_dec(v_a_3769_);
lean_dec(v_snd_3767_);
v_a_3791_ = lean_ctor_get(v___x_3770_, 0);
v_isSharedCheck_3798_ = !lean_is_exclusive(v___x_3770_);
if (v_isSharedCheck_3798_ == 0)
{
v___x_3793_ = v___x_3770_;
v_isShared_3794_ = v_isSharedCheck_3798_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_a_3791_);
lean_dec(v___x_3770_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3798_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
lean_object* v___x_3796_; 
if (v_isShared_3794_ == 0)
{
v___x_3796_ = v___x_3793_;
goto v_reusejp_3795_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v_a_3791_);
v___x_3796_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3795_;
}
v_reusejp_3795_:
{
return v___x_3796_;
}
}
}
}
else
{
lean_object* v_a_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3806_; 
lean_dec(v_snd_3767_);
lean_dec(v_fst_3766_);
v_a_3799_ = lean_ctor_get(v___x_3768_, 0);
v_isSharedCheck_3806_ = !lean_is_exclusive(v___x_3768_);
if (v_isSharedCheck_3806_ == 0)
{
v___x_3801_ = v___x_3768_;
v_isShared_3802_ = v_isSharedCheck_3806_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_a_3799_);
lean_dec(v___x_3768_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3806_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
lean_object* v___x_3804_; 
if (v_isShared_3802_ == 0)
{
v___x_3804_ = v___x_3801_;
goto v_reusejp_3803_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v_a_3799_);
v___x_3804_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3803_;
}
v_reusejp_3803_:
{
return v___x_3804_;
}
}
}
}
else
{
lean_object* v___x_3807_; lean_object* v___x_3809_; 
lean_dec(v_a_3759_);
v___x_3807_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
if (v_isShared_3762_ == 0)
{
lean_ctor_set(v___x_3761_, 0, v___x_3807_);
v___x_3809_ = v___x_3761_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v___x_3807_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
return v___x_3809_;
}
}
}
}
else
{
lean_object* v_a_3812_; lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3819_; 
v_a_3812_ = lean_ctor_get(v___x_3758_, 0);
v_isSharedCheck_3819_ = !lean_is_exclusive(v___x_3758_);
if (v_isSharedCheck_3819_ == 0)
{
v___x_3814_ = v___x_3758_;
v_isShared_3815_ = v_isSharedCheck_3819_;
goto v_resetjp_3813_;
}
else
{
lean_inc(v_a_3812_);
lean_dec(v___x_3758_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3819_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
lean_object* v___x_3817_; 
if (v_isShared_3815_ == 0)
{
v___x_3817_ = v___x_3814_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3818_; 
v_reuseFailAlloc_3818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3818_, 0, v_a_3812_);
v___x_3817_ = v_reuseFailAlloc_3818_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
return v___x_3817_;
}
}
}
}
}
}
else
{
lean_object* v_a_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3828_; 
lean_dec_ref(v_e_3724_);
v_a_3821_ = lean_ctor_get(v___x_3745_, 0);
v_isSharedCheck_3828_ = !lean_is_exclusive(v___x_3745_);
if (v_isSharedCheck_3828_ == 0)
{
v___x_3823_ = v___x_3745_;
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
else
{
lean_inc(v_a_3821_);
lean_dec(v___x_3745_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v___x_3826_; 
if (v_isShared_3824_ == 0)
{
v___x_3826_ = v___x_3823_;
goto v_reusejp_3825_;
}
else
{
lean_object* v_reuseFailAlloc_3827_; 
v_reuseFailAlloc_3827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3827_, 0, v_a_3821_);
v___x_3826_ = v_reuseFailAlloc_3827_;
goto v_reusejp_3825_;
}
v_reusejp_3825_:
{
return v___x_3826_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpForall___boxed(lean_object* v_e_4213_, lean_object* v_a_4214_, lean_object* v_a_4215_, lean_object* v_a_4216_, lean_object* v_a_4217_, lean_object* v_a_4218_, lean_object* v_a_4219_, lean_object* v_a_4220_, lean_object* v_a_4221_, lean_object* v_a_4222_, lean_object* v_a_4223_){
_start:
{
lean_object* v_res_4224_; 
v_res_4224_ = l_Lean_Meta_Grind_NormSym_simpForall(v_e_4213_, v_a_4214_, v_a_4215_, v_a_4216_, v_a_4217_, v_a_4218_, v_a_4219_, v_a_4220_, v_a_4221_, v_a_4222_);
lean_dec(v_a_4222_);
lean_dec_ref(v_a_4221_);
lean_dec(v_a_4220_);
lean_dec_ref(v_a_4219_);
lean_dec(v_a_4218_);
lean_dec_ref(v_a_4217_);
lean_dec(v_a_4216_);
lean_dec_ref(v_a_4215_);
lean_dec(v_a_4214_);
return v_res_4224_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_NormSym_simpExists___closed__4(void){
_start:
{
lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; 
v___x_4235_ = lean_box(0);
v___x_4236_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpExists___closed__3));
v___x_4237_ = l_Lean_mkConst(v___x_4236_, v___x_4235_);
return v___x_4237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpExists(lean_object* v_e_4253_, lean_object* v_a_4254_, lean_object* v_a_4255_, lean_object* v_a_4256_, lean_object* v_a_4257_, lean_object* v_a_4258_, lean_object* v_a_4259_, lean_object* v_a_4260_, lean_object* v_a_4261_, lean_object* v_a_4262_){
_start:
{
lean_object* v___x_4270_; uint8_t v___x_4271_; 
v___x_4270_ = l_Lean_Expr_cleanupAnnotations(v_e_4253_);
v___x_4271_ = l_Lean_Expr_isApp(v___x_4270_);
if (v___x_4271_ == 0)
{
lean_dec_ref(v___x_4270_);
goto v___jp_4267_;
}
else
{
lean_object* v___x_4272_; uint8_t v___x_4273_; 
v___x_4272_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4270_);
v___x_4273_ = l_Lean_Expr_isApp(v___x_4272_);
if (v___x_4273_ == 0)
{
lean_dec_ref(v___x_4272_);
lean_dec_ref(v___x_4270_);
goto v___jp_4267_;
}
else
{
lean_object* v___x_4274_; lean_object* v___x_4275_; uint8_t v___x_4276_; 
v___x_4274_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4272_);
v___x_4275_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkExistsS___redArg___closed__1));
v___x_4276_ = l_Lean_Expr_isConstOf(v___x_4274_, v___x_4275_);
if (v___x_4276_ == 0)
{
lean_dec_ref(v___x_4274_);
lean_dec_ref(v___x_4272_);
lean_dec_ref(v___x_4270_);
goto v___jp_4267_;
}
else
{
lean_object* v_arg_4277_; 
v_arg_4277_ = lean_ctor_get(v___x_4270_, 1);
lean_inc_ref(v_arg_4277_);
lean_dec_ref(v___x_4270_);
if (lean_obj_tag(v_arg_4277_) == 6)
{
lean_object* v_binderName_4278_; lean_object* v_body_4279_; lean_object* v_arg_4280_; lean_object* v_u_4281_; lean_object* v___y_4283_; lean_object* v___y_4284_; lean_object* v___y_4285_; lean_object* v___y_4286_; lean_object* v___y_4287_; lean_object* v___y_4288_; lean_object* v___y_4289_; lean_object* v___y_4290_; lean_object* v___y_4291_; uint8_t v___x_4369_; 
v_binderName_4278_ = lean_ctor_get(v_arg_4277_, 0);
lean_inc(v_binderName_4278_);
v_body_4279_ = lean_ctor_get(v_arg_4277_, 2);
lean_inc_ref(v_body_4279_);
lean_dec_ref_known(v_arg_4277_, 3);
v_arg_4280_ = lean_ctor_get(v___x_4272_, 1);
lean_inc_ref(v_arg_4280_);
lean_dec_ref(v___x_4272_);
v_u_4281_ = l_Lean_Expr_constLevels_x21(v___x_4274_);
v___x_4369_ = l_Lean_Expr_isApp(v_body_4279_);
if (v___x_4369_ == 0)
{
lean_dec(v_binderName_4278_);
lean_dec_ref(v___x_4274_);
v___y_4283_ = v_a_4254_;
v___y_4284_ = v_a_4255_;
v___y_4285_ = v_a_4256_;
v___y_4286_ = v_a_4257_;
v___y_4287_ = v_a_4258_;
v___y_4288_ = v_a_4259_;
v___y_4289_ = v_a_4260_;
v___y_4290_ = v_a_4261_;
v___y_4291_ = v_a_4262_;
goto v___jp_4282_;
}
else
{
lean_object* v___x_4370_; lean_object* v___x_4371_; uint8_t v___x_4372_; 
v___x_4370_ = l_Lean_Expr_getAppNumArgs(v_body_4279_);
v___x_4371_ = lean_unsigned_to_nat(2u);
v___x_4372_ = lean_nat_dec_eq(v___x_4370_, v___x_4371_);
lean_dec(v___x_4370_);
if (v___x_4372_ == 0)
{
lean_dec(v_binderName_4278_);
lean_dec_ref(v___x_4274_);
v___y_4283_ = v_a_4254_;
v___y_4284_ = v_a_4255_;
v___y_4285_ = v_a_4256_;
v___y_4286_ = v_a_4257_;
v___y_4287_ = v_a_4258_;
v___y_4288_ = v_a_4259_;
v___y_4289_ = v_a_4260_;
v___y_4290_ = v_a_4261_;
v___y_4291_ = v_a_4262_;
goto v___jp_4282_;
}
else
{
lean_object* v___x_4373_; lean_object* v___x_4374_; 
v___x_4373_ = l_Lean_Expr_appFn_x21(v_body_4279_);
v___x_4374_ = l_Lean_Expr_appFn_x21(v___x_4373_);
if (lean_obj_tag(v___x_4374_) == 4)
{
lean_object* v_declName_4375_; lean_object* v___x_4376_; uint8_t v___x_4377_; 
v_declName_4375_ = lean_ctor_get(v___x_4374_, 0);
lean_inc(v_declName_4375_);
lean_dec_ref_known(v___x_4374_, 2);
v___x_4376_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg___closed__1));
v___x_4377_ = lean_name_eq(v_declName_4375_, v___x_4376_);
if (v___x_4377_ == 0)
{
lean_object* v___x_4378_; uint8_t v___x_4379_; 
v___x_4378_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS___closed__1));
v___x_4379_ = lean_name_eq(v_declName_4375_, v___x_4378_);
lean_dec(v_declName_4375_);
if (v___x_4379_ == 0)
{
lean_dec_ref(v___x_4373_);
lean_dec(v_binderName_4278_);
lean_dec_ref(v___x_4274_);
v___y_4283_ = v_a_4254_;
v___y_4284_ = v_a_4255_;
v___y_4285_ = v_a_4256_;
v___y_4286_ = v_a_4257_;
v___y_4287_ = v_a_4258_;
v___y_4288_ = v_a_4259_;
v___y_4289_ = v_a_4260_;
v___y_4290_ = v_a_4261_;
v___y_4291_ = v_a_4262_;
goto v___jp_4282_;
}
else
{
lean_object* v_b_4380_; lean_object* v_b_4381_; uint8_t v___x_4382_; 
v_b_4380_ = l_Lean_Expr_appArg_x21(v___x_4373_);
lean_dec_ref(v___x_4373_);
v_b_4381_ = l_Lean_Expr_appArg_x21(v_body_4279_);
v___x_4382_ = l_Lean_Expr_hasLooseBVars(v_b_4380_);
if (v___x_4382_ == 0)
{
uint8_t v___x_4383_; lean_object* v___x_4384_; 
lean_dec_ref(v_body_4279_);
v___x_4383_ = 0;
lean_inc_ref(v_arg_4280_);
v___x_4384_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0___redArg(v_binderName_4278_, v___x_4383_, v_arg_4280_, v_b_4381_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_, v_a_4262_);
if (lean_obj_tag(v___x_4384_) == 0)
{
lean_object* v_a_4385_; lean_object* v___x_4386_; 
v_a_4385_ = lean_ctor_get(v___x_4384_, 0);
lean_inc_n(v_a_4385_, 2);
lean_dec_ref_known(v___x_4384_, 1);
lean_inc_ref(v_arg_4280_);
v___x_4386_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___redArg(v___x_4274_, v_arg_4280_, v_a_4385_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_, v_a_4262_);
if (lean_obj_tag(v___x_4386_) == 0)
{
lean_object* v_a_4387_; lean_object* v___x_4388_; 
v_a_4387_ = lean_ctor_get(v___x_4386_, 0);
lean_inc(v_a_4387_);
lean_dec_ref_known(v___x_4386_, 1);
lean_inc_ref(v_b_4380_);
v___x_4388_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS(v_b_4380_, v_a_4387_, v_a_4254_, v_a_4255_, v_a_4256_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_, v_a_4262_);
if (lean_obj_tag(v___x_4388_) == 0)
{
lean_object* v_a_4389_; lean_object* v___x_4391_; uint8_t v_isShared_4392_; uint8_t v_isSharedCheck_4400_; 
v_a_4389_ = lean_ctor_get(v___x_4388_, 0);
v_isSharedCheck_4400_ = !lean_is_exclusive(v___x_4388_);
if (v_isSharedCheck_4400_ == 0)
{
v___x_4391_ = v___x_4388_;
v_isShared_4392_ = v_isSharedCheck_4400_;
goto v_resetjp_4390_;
}
else
{
lean_inc(v_a_4389_);
lean_dec(v___x_4388_);
v___x_4391_ = lean_box(0);
v_isShared_4392_ = v_isSharedCheck_4400_;
goto v_resetjp_4390_;
}
v_resetjp_4390_:
{
lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4398_; 
v___x_4393_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpExists___closed__6));
v___x_4394_ = l_Lean_mkConst(v___x_4393_, v_u_4281_);
v___x_4395_ = l_Lean_mkApp3(v___x_4394_, v_arg_4280_, v_a_4385_, v_b_4380_);
v___x_4396_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_4396_, 0, v_a_4389_);
lean_ctor_set(v___x_4396_, 1, v___x_4395_);
lean_ctor_set_uint8(v___x_4396_, sizeof(void*)*2, v___x_4377_);
lean_ctor_set_uint8(v___x_4396_, sizeof(void*)*2 + 1, v___x_4377_);
if (v_isShared_4392_ == 0)
{
lean_ctor_set(v___x_4391_, 0, v___x_4396_);
v___x_4398_ = v___x_4391_;
goto v_reusejp_4397_;
}
else
{
lean_object* v_reuseFailAlloc_4399_; 
v_reuseFailAlloc_4399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4399_, 0, v___x_4396_);
v___x_4398_ = v_reuseFailAlloc_4399_;
goto v_reusejp_4397_;
}
v_reusejp_4397_:
{
return v___x_4398_;
}
}
}
else
{
lean_object* v_a_4401_; lean_object* v___x_4403_; uint8_t v_isShared_4404_; uint8_t v_isSharedCheck_4408_; 
lean_dec(v_a_4385_);
lean_dec_ref(v_b_4380_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
v_a_4401_ = lean_ctor_get(v___x_4388_, 0);
v_isSharedCheck_4408_ = !lean_is_exclusive(v___x_4388_);
if (v_isSharedCheck_4408_ == 0)
{
v___x_4403_ = v___x_4388_;
v_isShared_4404_ = v_isSharedCheck_4408_;
goto v_resetjp_4402_;
}
else
{
lean_inc(v_a_4401_);
lean_dec(v___x_4388_);
v___x_4403_ = lean_box(0);
v_isShared_4404_ = v_isSharedCheck_4408_;
goto v_resetjp_4402_;
}
v_resetjp_4402_:
{
lean_object* v___x_4406_; 
if (v_isShared_4404_ == 0)
{
v___x_4406_ = v___x_4403_;
goto v_reusejp_4405_;
}
else
{
lean_object* v_reuseFailAlloc_4407_; 
v_reuseFailAlloc_4407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4407_, 0, v_a_4401_);
v___x_4406_ = v_reuseFailAlloc_4407_;
goto v_reusejp_4405_;
}
v_reusejp_4405_:
{
return v___x_4406_;
}
}
}
}
else
{
lean_object* v_a_4409_; lean_object* v___x_4411_; uint8_t v_isShared_4412_; uint8_t v_isSharedCheck_4416_; 
lean_dec(v_a_4385_);
lean_dec_ref(v_b_4380_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
v_a_4409_ = lean_ctor_get(v___x_4386_, 0);
v_isSharedCheck_4416_ = !lean_is_exclusive(v___x_4386_);
if (v_isSharedCheck_4416_ == 0)
{
v___x_4411_ = v___x_4386_;
v_isShared_4412_ = v_isSharedCheck_4416_;
goto v_resetjp_4410_;
}
else
{
lean_inc(v_a_4409_);
lean_dec(v___x_4386_);
v___x_4411_ = lean_box(0);
v_isShared_4412_ = v_isSharedCheck_4416_;
goto v_resetjp_4410_;
}
v_resetjp_4410_:
{
lean_object* v___x_4414_; 
if (v_isShared_4412_ == 0)
{
v___x_4414_ = v___x_4411_;
goto v_reusejp_4413_;
}
else
{
lean_object* v_reuseFailAlloc_4415_; 
v_reuseFailAlloc_4415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4415_, 0, v_a_4409_);
v___x_4414_ = v_reuseFailAlloc_4415_;
goto v_reusejp_4413_;
}
v_reusejp_4413_:
{
return v___x_4414_;
}
}
}
}
else
{
lean_object* v_a_4417_; lean_object* v___x_4419_; uint8_t v_isShared_4420_; uint8_t v_isSharedCheck_4424_; 
lean_dec_ref(v_b_4380_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
lean_dec_ref(v___x_4274_);
v_a_4417_ = lean_ctor_get(v___x_4384_, 0);
v_isSharedCheck_4424_ = !lean_is_exclusive(v___x_4384_);
if (v_isSharedCheck_4424_ == 0)
{
v___x_4419_ = v___x_4384_;
v_isShared_4420_ = v_isSharedCheck_4424_;
goto v_resetjp_4418_;
}
else
{
lean_inc(v_a_4417_);
lean_dec(v___x_4384_);
v___x_4419_ = lean_box(0);
v_isShared_4420_ = v_isSharedCheck_4424_;
goto v_resetjp_4418_;
}
v_resetjp_4418_:
{
lean_object* v___x_4422_; 
if (v_isShared_4420_ == 0)
{
v___x_4422_ = v___x_4419_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v_a_4417_);
v___x_4422_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
return v___x_4422_;
}
}
}
}
else
{
uint8_t v___x_4425_; 
v___x_4425_ = l_Lean_Expr_hasLooseBVars(v_b_4381_);
if (v___x_4425_ == 0)
{
uint8_t v___x_4426_; lean_object* v___x_4427_; 
lean_dec_ref(v_body_4279_);
v___x_4426_ = 0;
lean_inc_ref(v_arg_4280_);
v___x_4427_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0___redArg(v_binderName_4278_, v___x_4426_, v_arg_4280_, v_b_4380_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_, v_a_4262_);
if (lean_obj_tag(v___x_4427_) == 0)
{
lean_object* v_a_4428_; lean_object* v___x_4429_; 
v_a_4428_ = lean_ctor_get(v___x_4427_, 0);
lean_inc_n(v_a_4428_, 2);
lean_dec_ref_known(v___x_4427_, 1);
lean_inc_ref(v_arg_4280_);
v___x_4429_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___redArg(v___x_4274_, v_arg_4280_, v_a_4428_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_, v_a_4262_);
if (lean_obj_tag(v___x_4429_) == 0)
{
lean_object* v_a_4430_; lean_object* v___x_4431_; 
v_a_4430_ = lean_ctor_get(v___x_4429_, 0);
lean_inc(v_a_4430_);
lean_dec_ref_known(v___x_4429_, 1);
lean_inc_ref(v_b_4381_);
v___x_4431_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS(v_a_4430_, v_b_4381_, v_a_4254_, v_a_4255_, v_a_4256_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_, v_a_4262_);
if (lean_obj_tag(v___x_4431_) == 0)
{
lean_object* v_a_4432_; lean_object* v___x_4434_; uint8_t v_isShared_4435_; uint8_t v_isSharedCheck_4443_; 
v_a_4432_ = lean_ctor_get(v___x_4431_, 0);
v_isSharedCheck_4443_ = !lean_is_exclusive(v___x_4431_);
if (v_isSharedCheck_4443_ == 0)
{
v___x_4434_ = v___x_4431_;
v_isShared_4435_ = v_isSharedCheck_4443_;
goto v_resetjp_4433_;
}
else
{
lean_inc(v_a_4432_);
lean_dec(v___x_4431_);
v___x_4434_ = lean_box(0);
v_isShared_4435_ = v_isSharedCheck_4443_;
goto v_resetjp_4433_;
}
v_resetjp_4433_:
{
lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4441_; 
v___x_4436_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpExists___closed__8));
v___x_4437_ = l_Lean_mkConst(v___x_4436_, v_u_4281_);
v___x_4438_ = l_Lean_mkApp3(v___x_4437_, v_arg_4280_, v_a_4428_, v_b_4381_);
v___x_4439_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_4439_, 0, v_a_4432_);
lean_ctor_set(v___x_4439_, 1, v___x_4438_);
lean_ctor_set_uint8(v___x_4439_, sizeof(void*)*2, v___x_4377_);
lean_ctor_set_uint8(v___x_4439_, sizeof(void*)*2 + 1, v___x_4377_);
if (v_isShared_4435_ == 0)
{
lean_ctor_set(v___x_4434_, 0, v___x_4439_);
v___x_4441_ = v___x_4434_;
goto v_reusejp_4440_;
}
else
{
lean_object* v_reuseFailAlloc_4442_; 
v_reuseFailAlloc_4442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4442_, 0, v___x_4439_);
v___x_4441_ = v_reuseFailAlloc_4442_;
goto v_reusejp_4440_;
}
v_reusejp_4440_:
{
return v___x_4441_;
}
}
}
else
{
lean_object* v_a_4444_; lean_object* v___x_4446_; uint8_t v_isShared_4447_; uint8_t v_isSharedCheck_4451_; 
lean_dec(v_a_4428_);
lean_dec_ref(v_b_4381_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
v_a_4444_ = lean_ctor_get(v___x_4431_, 0);
v_isSharedCheck_4451_ = !lean_is_exclusive(v___x_4431_);
if (v_isSharedCheck_4451_ == 0)
{
v___x_4446_ = v___x_4431_;
v_isShared_4447_ = v_isSharedCheck_4451_;
goto v_resetjp_4445_;
}
else
{
lean_inc(v_a_4444_);
lean_dec(v___x_4431_);
v___x_4446_ = lean_box(0);
v_isShared_4447_ = v_isSharedCheck_4451_;
goto v_resetjp_4445_;
}
v_resetjp_4445_:
{
lean_object* v___x_4449_; 
if (v_isShared_4447_ == 0)
{
v___x_4449_ = v___x_4446_;
goto v_reusejp_4448_;
}
else
{
lean_object* v_reuseFailAlloc_4450_; 
v_reuseFailAlloc_4450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4450_, 0, v_a_4444_);
v___x_4449_ = v_reuseFailAlloc_4450_;
goto v_reusejp_4448_;
}
v_reusejp_4448_:
{
return v___x_4449_;
}
}
}
}
else
{
lean_object* v_a_4452_; lean_object* v___x_4454_; uint8_t v_isShared_4455_; uint8_t v_isSharedCheck_4459_; 
lean_dec(v_a_4428_);
lean_dec_ref(v_b_4381_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
v_a_4452_ = lean_ctor_get(v___x_4429_, 0);
v_isSharedCheck_4459_ = !lean_is_exclusive(v___x_4429_);
if (v_isSharedCheck_4459_ == 0)
{
v___x_4454_ = v___x_4429_;
v_isShared_4455_ = v_isSharedCheck_4459_;
goto v_resetjp_4453_;
}
else
{
lean_inc(v_a_4452_);
lean_dec(v___x_4429_);
v___x_4454_ = lean_box(0);
v_isShared_4455_ = v_isSharedCheck_4459_;
goto v_resetjp_4453_;
}
v_resetjp_4453_:
{
lean_object* v___x_4457_; 
if (v_isShared_4455_ == 0)
{
v___x_4457_ = v___x_4454_;
goto v_reusejp_4456_;
}
else
{
lean_object* v_reuseFailAlloc_4458_; 
v_reuseFailAlloc_4458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4458_, 0, v_a_4452_);
v___x_4457_ = v_reuseFailAlloc_4458_;
goto v_reusejp_4456_;
}
v_reusejp_4456_:
{
return v___x_4457_;
}
}
}
}
else
{
lean_object* v_a_4460_; lean_object* v___x_4462_; uint8_t v_isShared_4463_; uint8_t v_isSharedCheck_4467_; 
lean_dec_ref(v_b_4381_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
lean_dec_ref(v___x_4274_);
v_a_4460_ = lean_ctor_get(v___x_4427_, 0);
v_isSharedCheck_4467_ = !lean_is_exclusive(v___x_4427_);
if (v_isSharedCheck_4467_ == 0)
{
v___x_4462_ = v___x_4427_;
v_isShared_4463_ = v_isSharedCheck_4467_;
goto v_resetjp_4461_;
}
else
{
lean_inc(v_a_4460_);
lean_dec(v___x_4427_);
v___x_4462_ = lean_box(0);
v_isShared_4463_ = v_isSharedCheck_4467_;
goto v_resetjp_4461_;
}
v_resetjp_4461_:
{
lean_object* v___x_4465_; 
if (v_isShared_4463_ == 0)
{
v___x_4465_ = v___x_4462_;
goto v_reusejp_4464_;
}
else
{
lean_object* v_reuseFailAlloc_4466_; 
v_reuseFailAlloc_4466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4466_, 0, v_a_4460_);
v___x_4465_ = v_reuseFailAlloc_4466_;
goto v_reusejp_4464_;
}
v_reusejp_4464_:
{
return v___x_4465_;
}
}
}
}
else
{
lean_dec_ref(v_b_4381_);
lean_dec_ref(v_b_4380_);
lean_dec(v_binderName_4278_);
lean_dec_ref(v___x_4274_);
v___y_4283_ = v_a_4254_;
v___y_4284_ = v_a_4255_;
v___y_4285_ = v_a_4256_;
v___y_4286_ = v_a_4257_;
v___y_4287_ = v_a_4258_;
v___y_4288_ = v_a_4259_;
v___y_4289_ = v_a_4260_;
v___y_4290_ = v_a_4261_;
v___y_4291_ = v_a_4262_;
goto v___jp_4282_;
}
}
}
}
else
{
lean_object* v_pRaw_4468_; lean_object* v_qRaw_4469_; uint8_t v___x_4470_; lean_object* v___x_4471_; 
lean_dec(v_declName_4375_);
v_pRaw_4468_ = l_Lean_Expr_appArg_x21(v___x_4373_);
lean_dec_ref(v___x_4373_);
v_qRaw_4469_ = l_Lean_Expr_appArg_x21(v_body_4279_);
lean_dec_ref(v_body_4279_);
v___x_4470_ = 0;
lean_inc_ref(v_arg_4280_);
lean_inc(v_binderName_4278_);
v___x_4471_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0___redArg(v_binderName_4278_, v___x_4470_, v_arg_4280_, v_pRaw_4468_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_, v_a_4262_);
if (lean_obj_tag(v___x_4471_) == 0)
{
lean_object* v_a_4472_; lean_object* v___x_4473_; 
v_a_4472_ = lean_ctor_get(v___x_4471_, 0);
lean_inc(v_a_4472_);
lean_dec_ref_known(v___x_4471_, 1);
lean_inc_ref(v_arg_4280_);
v___x_4473_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00Lean_Meta_Grind_NormSym_pushNot_spec__0___redArg(v_binderName_4278_, v___x_4470_, v_arg_4280_, v_qRaw_4469_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_, v_a_4262_);
if (lean_obj_tag(v___x_4473_) == 0)
{
lean_object* v_a_4474_; lean_object* v___x_4475_; 
v_a_4474_ = lean_ctor_get(v___x_4473_, 0);
lean_inc(v_a_4474_);
lean_dec_ref_known(v___x_4473_, 1);
lean_inc(v_a_4472_);
lean_inc_ref(v_arg_4280_);
lean_inc_ref(v___x_4274_);
v___x_4475_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___redArg(v___x_4274_, v_arg_4280_, v_a_4472_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_, v_a_4262_);
if (lean_obj_tag(v___x_4475_) == 0)
{
lean_object* v_a_4476_; lean_object* v___x_4477_; 
v_a_4476_ = lean_ctor_get(v___x_4475_, 0);
lean_inc(v_a_4476_);
lean_dec_ref_known(v___x_4475_, 1);
lean_inc(v_a_4474_);
lean_inc_ref(v_arg_4280_);
v___x_4477_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS_spec__0___redArg(v___x_4274_, v_arg_4280_, v_a_4474_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_, v_a_4262_);
if (lean_obj_tag(v___x_4477_) == 0)
{
lean_object* v_a_4478_; lean_object* v___x_4479_; 
v_a_4478_ = lean_ctor_get(v___x_4477_, 0);
lean_inc(v_a_4478_);
lean_dec_ref_known(v___x_4477_, 1);
v___x_4479_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkOrS___redArg(v_a_4476_, v_a_4478_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_, v_a_4261_, v_a_4262_);
if (lean_obj_tag(v___x_4479_) == 0)
{
lean_object* v_a_4480_; lean_object* v___x_4482_; uint8_t v_isShared_4483_; uint8_t v_isSharedCheck_4492_; 
v_a_4480_ = lean_ctor_get(v___x_4479_, 0);
v_isSharedCheck_4492_ = !lean_is_exclusive(v___x_4479_);
if (v_isSharedCheck_4492_ == 0)
{
v___x_4482_ = v___x_4479_;
v_isShared_4483_ = v_isSharedCheck_4492_;
goto v_resetjp_4481_;
}
else
{
lean_inc(v_a_4480_);
lean_dec(v___x_4479_);
v___x_4482_ = lean_box(0);
v_isShared_4483_ = v_isSharedCheck_4492_;
goto v_resetjp_4481_;
}
v_resetjp_4481_:
{
lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; uint8_t v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4490_; 
v___x_4484_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpExists___closed__10));
v___x_4485_ = l_Lean_mkConst(v___x_4484_, v_u_4281_);
v___x_4486_ = l_Lean_mkApp3(v___x_4485_, v_arg_4280_, v_a_4472_, v_a_4474_);
v___x_4487_ = 0;
v___x_4488_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_4488_, 0, v_a_4480_);
lean_ctor_set(v___x_4488_, 1, v___x_4486_);
lean_ctor_set_uint8(v___x_4488_, sizeof(void*)*2, v___x_4487_);
lean_ctor_set_uint8(v___x_4488_, sizeof(void*)*2 + 1, v___x_4487_);
if (v_isShared_4483_ == 0)
{
lean_ctor_set(v___x_4482_, 0, v___x_4488_);
v___x_4490_ = v___x_4482_;
goto v_reusejp_4489_;
}
else
{
lean_object* v_reuseFailAlloc_4491_; 
v_reuseFailAlloc_4491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4491_, 0, v___x_4488_);
v___x_4490_ = v_reuseFailAlloc_4491_;
goto v_reusejp_4489_;
}
v_reusejp_4489_:
{
return v___x_4490_;
}
}
}
else
{
lean_object* v_a_4493_; lean_object* v___x_4495_; uint8_t v_isShared_4496_; uint8_t v_isSharedCheck_4500_; 
lean_dec(v_a_4474_);
lean_dec(v_a_4472_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
v_a_4493_ = lean_ctor_get(v___x_4479_, 0);
v_isSharedCheck_4500_ = !lean_is_exclusive(v___x_4479_);
if (v_isSharedCheck_4500_ == 0)
{
v___x_4495_ = v___x_4479_;
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
else
{
lean_inc(v_a_4493_);
lean_dec(v___x_4479_);
v___x_4495_ = lean_box(0);
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
v_resetjp_4494_:
{
lean_object* v___x_4498_; 
if (v_isShared_4496_ == 0)
{
v___x_4498_ = v___x_4495_;
goto v_reusejp_4497_;
}
else
{
lean_object* v_reuseFailAlloc_4499_; 
v_reuseFailAlloc_4499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4499_, 0, v_a_4493_);
v___x_4498_ = v_reuseFailAlloc_4499_;
goto v_reusejp_4497_;
}
v_reusejp_4497_:
{
return v___x_4498_;
}
}
}
}
else
{
lean_object* v_a_4501_; lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4508_; 
lean_dec(v_a_4476_);
lean_dec(v_a_4474_);
lean_dec(v_a_4472_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
v_a_4501_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4508_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4508_ == 0)
{
v___x_4503_ = v___x_4477_;
v_isShared_4504_ = v_isSharedCheck_4508_;
goto v_resetjp_4502_;
}
else
{
lean_inc(v_a_4501_);
lean_dec(v___x_4477_);
v___x_4503_ = lean_box(0);
v_isShared_4504_ = v_isSharedCheck_4508_;
goto v_resetjp_4502_;
}
v_resetjp_4502_:
{
lean_object* v___x_4506_; 
if (v_isShared_4504_ == 0)
{
v___x_4506_ = v___x_4503_;
goto v_reusejp_4505_;
}
else
{
lean_object* v_reuseFailAlloc_4507_; 
v_reuseFailAlloc_4507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4507_, 0, v_a_4501_);
v___x_4506_ = v_reuseFailAlloc_4507_;
goto v_reusejp_4505_;
}
v_reusejp_4505_:
{
return v___x_4506_;
}
}
}
}
else
{
lean_object* v_a_4509_; lean_object* v___x_4511_; uint8_t v_isShared_4512_; uint8_t v_isSharedCheck_4516_; 
lean_dec(v_a_4474_);
lean_dec(v_a_4472_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
lean_dec_ref(v___x_4274_);
v_a_4509_ = lean_ctor_get(v___x_4475_, 0);
v_isSharedCheck_4516_ = !lean_is_exclusive(v___x_4475_);
if (v_isSharedCheck_4516_ == 0)
{
v___x_4511_ = v___x_4475_;
v_isShared_4512_ = v_isSharedCheck_4516_;
goto v_resetjp_4510_;
}
else
{
lean_inc(v_a_4509_);
lean_dec(v___x_4475_);
v___x_4511_ = lean_box(0);
v_isShared_4512_ = v_isSharedCheck_4516_;
goto v_resetjp_4510_;
}
v_resetjp_4510_:
{
lean_object* v___x_4514_; 
if (v_isShared_4512_ == 0)
{
v___x_4514_ = v___x_4511_;
goto v_reusejp_4513_;
}
else
{
lean_object* v_reuseFailAlloc_4515_; 
v_reuseFailAlloc_4515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4515_, 0, v_a_4509_);
v___x_4514_ = v_reuseFailAlloc_4515_;
goto v_reusejp_4513_;
}
v_reusejp_4513_:
{
return v___x_4514_;
}
}
}
}
else
{
lean_object* v_a_4517_; lean_object* v___x_4519_; uint8_t v_isShared_4520_; uint8_t v_isSharedCheck_4524_; 
lean_dec(v_a_4472_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
lean_dec_ref(v___x_4274_);
v_a_4517_ = lean_ctor_get(v___x_4473_, 0);
v_isSharedCheck_4524_ = !lean_is_exclusive(v___x_4473_);
if (v_isSharedCheck_4524_ == 0)
{
v___x_4519_ = v___x_4473_;
v_isShared_4520_ = v_isSharedCheck_4524_;
goto v_resetjp_4518_;
}
else
{
lean_inc(v_a_4517_);
lean_dec(v___x_4473_);
v___x_4519_ = lean_box(0);
v_isShared_4520_ = v_isSharedCheck_4524_;
goto v_resetjp_4518_;
}
v_resetjp_4518_:
{
lean_object* v___x_4522_; 
if (v_isShared_4520_ == 0)
{
v___x_4522_ = v___x_4519_;
goto v_reusejp_4521_;
}
else
{
lean_object* v_reuseFailAlloc_4523_; 
v_reuseFailAlloc_4523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4523_, 0, v_a_4517_);
v___x_4522_ = v_reuseFailAlloc_4523_;
goto v_reusejp_4521_;
}
v_reusejp_4521_:
{
return v___x_4522_;
}
}
}
}
else
{
lean_object* v_a_4525_; lean_object* v___x_4527_; uint8_t v_isShared_4528_; uint8_t v_isSharedCheck_4532_; 
lean_dec_ref(v_qRaw_4469_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
lean_dec(v_binderName_4278_);
lean_dec_ref(v___x_4274_);
v_a_4525_ = lean_ctor_get(v___x_4471_, 0);
v_isSharedCheck_4532_ = !lean_is_exclusive(v___x_4471_);
if (v_isSharedCheck_4532_ == 0)
{
v___x_4527_ = v___x_4471_;
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
else
{
lean_inc(v_a_4525_);
lean_dec(v___x_4471_);
v___x_4527_ = lean_box(0);
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
v_resetjp_4526_:
{
lean_object* v___x_4530_; 
if (v_isShared_4528_ == 0)
{
v___x_4530_ = v___x_4527_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4531_; 
v_reuseFailAlloc_4531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4531_, 0, v_a_4525_);
v___x_4530_ = v_reuseFailAlloc_4531_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
return v___x_4530_;
}
}
}
}
}
else
{
lean_object* v___x_4533_; lean_object* v___x_4534_; 
lean_dec_ref(v___x_4374_);
lean_dec_ref(v___x_4373_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
lean_dec_ref(v_body_4279_);
lean_dec(v_binderName_4278_);
lean_dec_ref(v___x_4274_);
v___x_4533_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_4534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4534_, 0, v___x_4533_);
return v___x_4534_;
}
}
}
v___jp_4282_:
{
uint8_t v___x_4292_; 
v___x_4292_ = l_Lean_Expr_hasLooseBVars(v_body_4279_);
if (v___x_4292_ == 0)
{
lean_object* v___x_4293_; 
lean_inc_ref(v_arg_4280_);
v___x_4293_ = l_Lean_Meta_isProp(v_arg_4280_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_);
if (lean_obj_tag(v___x_4293_) == 0)
{
lean_object* v_a_4294_; uint8_t v___x_4295_; 
v_a_4294_ = lean_ctor_get(v___x_4293_, 0);
lean_inc(v_a_4294_);
lean_dec_ref_known(v___x_4293_, 1);
v___x_4295_ = lean_unbox(v_a_4294_);
if (v___x_4295_ == 0)
{
lean_object* v___x_4296_; lean_object* v___x_4297_; 
v___x_4296_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpForall___closed__3));
lean_inc(v_u_4281_);
v___x_4297_ = l_Lean_Meta_Sym_Internal_mkConstS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__0___redArg(v___x_4296_, v_u_4281_, v___y_4287_);
if (lean_obj_tag(v___x_4297_) == 0)
{
lean_object* v_a_4298_; lean_object* v___x_4299_; 
v_a_4298_ = lean_ctor_get(v___x_4297_, 0);
lean_inc(v_a_4298_);
lean_dec_ref_known(v___x_4297_, 1);
lean_inc_ref(v_arg_4280_);
v___x_4299_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkNotS_spec__1___redArg(v_a_4298_, v_arg_4280_, v___y_4286_, v___y_4287_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_);
if (lean_obj_tag(v___x_4299_) == 0)
{
lean_object* v_a_4300_; lean_object* v___x_4301_; 
v_a_4300_ = lean_ctor_get(v___x_4299_, 0);
lean_inc(v_a_4300_);
lean_dec_ref_known(v___x_4299_, 1);
v___x_4301_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_a_4300_, v___y_4287_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_);
if (lean_obj_tag(v___x_4301_) == 0)
{
lean_object* v_a_4302_; lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4316_; 
v_a_4302_ = lean_ctor_get(v___x_4301_, 0);
v_isSharedCheck_4316_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4316_ == 0)
{
v___x_4304_ = v___x_4301_;
v_isShared_4305_ = v_isSharedCheck_4316_;
goto v_resetjp_4303_;
}
else
{
lean_inc(v_a_4302_);
lean_dec(v___x_4301_);
v___x_4304_ = lean_box(0);
v_isShared_4305_ = v_isSharedCheck_4316_;
goto v_resetjp_4303_;
}
v_resetjp_4303_:
{
if (lean_obj_tag(v_a_4302_) == 1)
{
lean_object* v_val_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; uint8_t v___x_4311_; uint8_t v___x_4312_; lean_object* v___x_4314_; 
v_val_4306_ = lean_ctor_get(v_a_4302_, 0);
lean_inc(v_val_4306_);
lean_dec_ref_known(v_a_4302_, 1);
v___x_4307_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_simpExists___closed__1));
v___x_4308_ = l_Lean_mkConst(v___x_4307_, v_u_4281_);
lean_inc_ref(v_body_4279_);
v___x_4309_ = l_Lean_mkApp3(v___x_4308_, v_arg_4280_, v_val_4306_, v_body_4279_);
v___x_4310_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_4310_, 0, v_body_4279_);
lean_ctor_set(v___x_4310_, 1, v___x_4309_);
v___x_4311_ = lean_unbox(v_a_4294_);
lean_ctor_set_uint8(v___x_4310_, sizeof(void*)*2, v___x_4311_);
v___x_4312_ = lean_unbox(v_a_4294_);
lean_dec(v_a_4294_);
lean_ctor_set_uint8(v___x_4310_, sizeof(void*)*2 + 1, v___x_4312_);
if (v_isShared_4305_ == 0)
{
lean_ctor_set(v___x_4304_, 0, v___x_4310_);
v___x_4314_ = v___x_4304_;
goto v_reusejp_4313_;
}
else
{
lean_object* v_reuseFailAlloc_4315_; 
v_reuseFailAlloc_4315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4315_, 0, v___x_4310_);
v___x_4314_ = v_reuseFailAlloc_4315_;
goto v_reusejp_4313_;
}
v_reusejp_4313_:
{
return v___x_4314_;
}
}
else
{
lean_del_object(v___x_4304_);
lean_dec(v_a_4302_);
lean_dec(v_a_4294_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
lean_dec_ref(v_body_4279_);
goto v___jp_4264_;
}
}
}
else
{
lean_object* v_a_4317_; lean_object* v___x_4319_; uint8_t v_isShared_4320_; uint8_t v_isSharedCheck_4324_; 
lean_dec(v_a_4294_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
lean_dec_ref(v_body_4279_);
v_a_4317_ = lean_ctor_get(v___x_4301_, 0);
v_isSharedCheck_4324_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4324_ == 0)
{
v___x_4319_ = v___x_4301_;
v_isShared_4320_ = v_isSharedCheck_4324_;
goto v_resetjp_4318_;
}
else
{
lean_inc(v_a_4317_);
lean_dec(v___x_4301_);
v___x_4319_ = lean_box(0);
v_isShared_4320_ = v_isSharedCheck_4324_;
goto v_resetjp_4318_;
}
v_resetjp_4318_:
{
lean_object* v___x_4322_; 
if (v_isShared_4320_ == 0)
{
v___x_4322_ = v___x_4319_;
goto v_reusejp_4321_;
}
else
{
lean_object* v_reuseFailAlloc_4323_; 
v_reuseFailAlloc_4323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4323_, 0, v_a_4317_);
v___x_4322_ = v_reuseFailAlloc_4323_;
goto v_reusejp_4321_;
}
v_reusejp_4321_:
{
return v___x_4322_;
}
}
}
}
else
{
lean_object* v_a_4325_; lean_object* v___x_4327_; uint8_t v_isShared_4328_; uint8_t v_isSharedCheck_4332_; 
lean_dec(v_a_4294_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
lean_dec_ref(v_body_4279_);
v_a_4325_ = lean_ctor_get(v___x_4299_, 0);
v_isSharedCheck_4332_ = !lean_is_exclusive(v___x_4299_);
if (v_isSharedCheck_4332_ == 0)
{
v___x_4327_ = v___x_4299_;
v_isShared_4328_ = v_isSharedCheck_4332_;
goto v_resetjp_4326_;
}
else
{
lean_inc(v_a_4325_);
lean_dec(v___x_4299_);
v___x_4327_ = lean_box(0);
v_isShared_4328_ = v_isSharedCheck_4332_;
goto v_resetjp_4326_;
}
v_resetjp_4326_:
{
lean_object* v___x_4330_; 
if (v_isShared_4328_ == 0)
{
v___x_4330_ = v___x_4327_;
goto v_reusejp_4329_;
}
else
{
lean_object* v_reuseFailAlloc_4331_; 
v_reuseFailAlloc_4331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4331_, 0, v_a_4325_);
v___x_4330_ = v_reuseFailAlloc_4331_;
goto v_reusejp_4329_;
}
v_reusejp_4329_:
{
return v___x_4330_;
}
}
}
}
else
{
lean_object* v_a_4333_; lean_object* v___x_4335_; uint8_t v_isShared_4336_; uint8_t v_isSharedCheck_4340_; 
lean_dec(v_a_4294_);
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
lean_dec_ref(v_body_4279_);
v_a_4333_ = lean_ctor_get(v___x_4297_, 0);
v_isSharedCheck_4340_ = !lean_is_exclusive(v___x_4297_);
if (v_isSharedCheck_4340_ == 0)
{
v___x_4335_ = v___x_4297_;
v_isShared_4336_ = v_isSharedCheck_4340_;
goto v_resetjp_4334_;
}
else
{
lean_inc(v_a_4333_);
lean_dec(v___x_4297_);
v___x_4335_ = lean_box(0);
v_isShared_4336_ = v_isSharedCheck_4340_;
goto v_resetjp_4334_;
}
v_resetjp_4334_:
{
lean_object* v___x_4338_; 
if (v_isShared_4336_ == 0)
{
v___x_4338_ = v___x_4335_;
goto v_reusejp_4337_;
}
else
{
lean_object* v_reuseFailAlloc_4339_; 
v_reuseFailAlloc_4339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4339_, 0, v_a_4333_);
v___x_4338_ = v_reuseFailAlloc_4339_;
goto v_reusejp_4337_;
}
v_reusejp_4337_:
{
return v___x_4338_;
}
}
}
}
else
{
lean_object* v___x_4341_; 
lean_dec(v_a_4294_);
lean_dec(v_u_4281_);
lean_inc_ref(v_body_4279_);
lean_inc_ref(v_arg_4280_);
v___x_4341_ = l___private_Lean_Meta_Tactic_Grind_NormSymProcs_0__Lean_Meta_Grind_NormSym_mkAndS(v_arg_4280_, v_body_4279_, v___y_4283_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_);
if (lean_obj_tag(v___x_4341_) == 0)
{
lean_object* v_a_4342_; lean_object* v___x_4344_; uint8_t v_isShared_4345_; uint8_t v_isSharedCheck_4352_; 
v_a_4342_ = lean_ctor_get(v___x_4341_, 0);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4341_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4344_ = v___x_4341_;
v_isShared_4345_ = v_isSharedCheck_4352_;
goto v_resetjp_4343_;
}
else
{
lean_inc(v_a_4342_);
lean_dec(v___x_4341_);
v___x_4344_ = lean_box(0);
v_isShared_4345_ = v_isSharedCheck_4352_;
goto v_resetjp_4343_;
}
v_resetjp_4343_:
{
lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4350_; 
v___x_4346_ = lean_obj_once(&l_Lean_Meta_Grind_NormSym_simpExists___closed__4, &l_Lean_Meta_Grind_NormSym_simpExists___closed__4_once, _init_l_Lean_Meta_Grind_NormSym_simpExists___closed__4);
v___x_4347_ = l_Lean_mkAppB(v___x_4346_, v_arg_4280_, v_body_4279_);
v___x_4348_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_4348_, 0, v_a_4342_);
lean_ctor_set(v___x_4348_, 1, v___x_4347_);
lean_ctor_set_uint8(v___x_4348_, sizeof(void*)*2, v___x_4292_);
lean_ctor_set_uint8(v___x_4348_, sizeof(void*)*2 + 1, v___x_4292_);
if (v_isShared_4345_ == 0)
{
lean_ctor_set(v___x_4344_, 0, v___x_4348_);
v___x_4350_ = v___x_4344_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v___x_4348_);
v___x_4350_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
return v___x_4350_;
}
}
}
else
{
lean_object* v_a_4353_; lean_object* v___x_4355_; uint8_t v_isShared_4356_; uint8_t v_isSharedCheck_4360_; 
lean_dec_ref(v_arg_4280_);
lean_dec_ref(v_body_4279_);
v_a_4353_ = lean_ctor_get(v___x_4341_, 0);
v_isSharedCheck_4360_ = !lean_is_exclusive(v___x_4341_);
if (v_isSharedCheck_4360_ == 0)
{
v___x_4355_ = v___x_4341_;
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
else
{
lean_inc(v_a_4353_);
lean_dec(v___x_4341_);
v___x_4355_ = lean_box(0);
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
v_resetjp_4354_:
{
lean_object* v___x_4358_; 
if (v_isShared_4356_ == 0)
{
v___x_4358_ = v___x_4355_;
goto v_reusejp_4357_;
}
else
{
lean_object* v_reuseFailAlloc_4359_; 
v_reuseFailAlloc_4359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4359_, 0, v_a_4353_);
v___x_4358_ = v_reuseFailAlloc_4359_;
goto v_reusejp_4357_;
}
v_reusejp_4357_:
{
return v___x_4358_;
}
}
}
}
}
else
{
lean_object* v_a_4361_; lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4368_; 
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
lean_dec_ref(v_body_4279_);
v_a_4361_ = lean_ctor_get(v___x_4293_, 0);
v_isSharedCheck_4368_ = !lean_is_exclusive(v___x_4293_);
if (v_isSharedCheck_4368_ == 0)
{
v___x_4363_ = v___x_4293_;
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
else
{
lean_inc(v_a_4361_);
lean_dec(v___x_4293_);
v___x_4363_ = lean_box(0);
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
v_resetjp_4362_:
{
lean_object* v___x_4366_; 
if (v_isShared_4364_ == 0)
{
v___x_4366_ = v___x_4363_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4367_; 
v_reuseFailAlloc_4367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4367_, 0, v_a_4361_);
v___x_4366_ = v_reuseFailAlloc_4367_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
return v___x_4366_;
}
}
}
}
else
{
lean_dec(v_u_4281_);
lean_dec_ref(v_arg_4280_);
lean_dec_ref(v_body_4279_);
goto v___jp_4264_;
}
}
}
else
{
lean_object* v___x_4535_; lean_object* v___x_4536_; 
lean_dec_ref(v_arg_4277_);
lean_dec_ref(v___x_4274_);
lean_dec_ref(v___x_4272_);
v___x_4535_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_4536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4536_, 0, v___x_4535_);
return v___x_4536_;
}
}
}
}
v___jp_4264_:
{
lean_object* v___x_4265_; lean_object* v___x_4266_; 
v___x_4265_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_4266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4266_, 0, v___x_4265_);
return v___x_4266_;
}
v___jp_4267_:
{
lean_object* v___x_4268_; lean_object* v___x_4269_; 
v___x_4268_ = ((lean_object*)(l_Lean_Meta_Grind_NormSym_eraseMData___redArg___closed__0));
v___x_4269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4269_, 0, v___x_4268_);
return v___x_4269_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_NormSym_simpExists___boxed(lean_object* v_e_4537_, lean_object* v_a_4538_, lean_object* v_a_4539_, lean_object* v_a_4540_, lean_object* v_a_4541_, lean_object* v_a_4542_, lean_object* v_a_4543_, lean_object* v_a_4544_, lean_object* v_a_4545_, lean_object* v_a_4546_, lean_object* v_a_4547_){
_start:
{
lean_object* v_res_4548_; 
v_res_4548_ = l_Lean_Meta_Grind_NormSym_simpExists(v_e_4537_, v_a_4538_, v_a_4539_, v_a_4540_, v_a_4541_, v_a_4542_, v_a_4543_, v_a_4544_, v_a_4545_, v_a_4546_);
lean_dec(v_a_4546_);
lean_dec_ref(v_a_4545_);
lean_dec(v_a_4544_);
lean_dec_ref(v_a_4543_);
lean_dec(v_a_4542_);
lean_dec_ref(v_a_4541_);
lean_dec(v_a_4540_);
lean_dec_ref(v_a_4539_);
lean_dec(v_a_4538_);
lean_dec_ref(v_e_4537_);
return v_res_4548_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Result(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherInfo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AbstractS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Eta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ForallAnd(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CtorRecognizer(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Norm(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_ByCases(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_NormSymProcs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AbstractS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Eta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ForallAnd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CtorRecognizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_NormSymProcs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Result(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatcherInfo(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AbstractS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Eta(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_ForallAnd(uint8_t builtin);
lean_object* initialize_Lean_Meta_CtorRecognizer(uint8_t builtin);
lean_object* initialize_Init_Grind_Norm(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
lean_object* initialize_Init_Grind_Lemmas(uint8_t builtin);
lean_object* initialize_Init_ByCases(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_NormSymProcs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AbstractS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Eta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_ForallAnd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CtorRecognizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_NormSymProcs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_NormSymProcs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_NormSymProcs(builtin);
}
#ifdef __cplusplus
}
#endif
