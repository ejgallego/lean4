// Lean compiler output
// Module: Lean.Meta.Tactic.Cbv.ControlFlow
// Imports: public import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.Sym.Simp.Result import Lean.Meta.Sym.Simp.Rewrite import Lean.Meta.Sym.Simp.ControlFlow import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.InstantiateS import Lean.Meta.Sym.InferType import Lean.Meta.Sym.Simp.App import Lean.Meta.SynthInstance import Lean.Meta.WHNF import Lean.Meta.AppBuilder import Lean.Meta.Decidable import Init.Sym.Lemmas import Lean.Meta.Sym.Simp.TheoremsLookup import Lean.Meta.Tactic.Cbv.Opaque import Lean.Meta.Tactic.Cbv.CbvEvalExt import Lean.Compiler.NoncomputableAttr import Init.CbvSimproc import Lean.Meta.Tactic.Cbv.CbvSimproc
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_getMatchTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_project_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isTrueExpr___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isFalseExpr___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t, uint8_t);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* l_Lean_Meta_Tactic_Cbv_isCbvOpaque___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_canUnfoldDefault(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_canUnfoldAtMatcher(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpAppArgRange(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_betaRevS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppRev(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getBoundedAppFn(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Expr_replaceFn(lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqFalseCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_propagateOverApplied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolTrueExpr___redArg(lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getBoolFalseExpr___redArg(lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpCondWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpInterlaced(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x3f(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_simpIte___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__8_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__8_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__8_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__9_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Cbv"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__9_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__9_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__10_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__8_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__9_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(93, 144, 236, 69, 149, 78, 215, 228)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__10_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__10_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__11_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ControlFlow"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__11_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__11_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__12_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__10_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__11_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(153, 75, 2, 199, 142, 91, 93, 201)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__12_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__12_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__13_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__12_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(252, 60, 118, 117, 62, 213, 206, 97)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__13_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__13_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__13_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(157, 4, 12, 27, 152, 101, 133, 218)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__15_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(245, 145, 82, 72, 75, 94, 216, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__15_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__15_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Sym"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__15_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(144, 2, 145, 22, 246, 43, 198, 251)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__18_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Simp"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__18_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__18_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__17_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__18_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(124, 100, 175, 78, 162, 84, 105, 55)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__20_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "simpIteCbv"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__20_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__20_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__21_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__20_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(74, 233, 198, 147, 223, 175, 34, 106)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__21_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__21_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__22_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__22_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__22_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__23_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__22_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__23_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__23_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__24_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__23_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__24_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__24_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__25_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__24_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__25_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__25_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_19_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_19____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 237, 71, 156, 244, 3, 80, 55)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__3_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__5_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dite_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(205, 79, 213, 134, 118, 203, 8, 228)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "dite_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__9_value),LEAN_SCALAR_PTR_LITERAL(26, 82, 15, 17, 1, 91, 226, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mpr_prop"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(169, 177, 76, 157, 211, 15, 217, 219)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "dite_true_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__4_value),LEAN_SCALAR_PTR_LITERAL(120, 185, 89, 138, 56, 95, 240, 189)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mpr_not"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__6_value),LEAN_SCALAR_PTR_LITERAL(121, 56, 250, 51, 9, 123, 141, 181)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "dite_false_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__9_value),LEAN_SCALAR_PTR_LITERAL(200, 44, 51, 241, 184, 46, 57, 25)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 96, 65, 173, 152, 155, 4, 222)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__3_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "of_decide_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__10_value),LEAN_SCALAR_PTR_LITERAL(199, 143, 142, 104, 169, 34, 63, 25)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__12;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "of_decide_eq_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__13_value),LEAN_SCALAR_PTR_LITERAL(101, 242, 48, 138, 187, 4, 117, 248)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "dite_cond_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(72, 238, 116, 219, 106, 19, 52, 46)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 21, 178, 198, 97, 164, 246, 137)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__5;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__9_value),LEAN_SCALAR_PTR_LITERAL(78, 119, 178, 178, 249, 126, 188, 7)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__10;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__7_value),LEAN_SCALAR_PTR_LITERAL(65, 218, 189, 96, 14, 237, 238, 210)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "dite_eq_right_of_eq_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(181, 72, 248, 145, 136, 9, 228, 221)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "dite_eq_left_of_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__14_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(36, 253, 19, 136, 170, 78, 36, 13)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__15_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "simpDIteCbv"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(190, 122, 172, 160, 23, 10, 186, 34)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__1_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_19_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_19____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "decide_isTrue"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(128, 238, 232, 136, 147, 64, 116, 79)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "decide_isFalse"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__3_value),LEAN_SCALAR_PTR_LITERAL(30, 93, 112, 198, 213, 0, 204, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "decide_isTrue_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(164, 46, 253, 225, 97, 126, 88, 158)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "decide_isFalse_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(210, 108, 78, 146, 25, 88, 128, 244)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "decide_eq_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 73, 110, 63, 16, 22, 220, 5)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "congr_simp"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___lam__2___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "decide_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 46, 65, 221, 159, 136, 150, 89)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "decide_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__3_value),LEAN_SCALAR_PTR_LITERAL(205, 8, 17, 237, 36, 213, 18, 105)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "decide_prop_eq_false"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__6_value),LEAN_SCALAR_PTR_LITERAL(55, 242, 168, 209, 35, 165, 174, 215)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "decide_prop_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__16_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(31, 147, 176, 82, 87, 65, 127, 52)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__9_value),LEAN_SCALAR_PTR_LITERAL(91, 57, 77, 17, 146, 195, 162, 163)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "simpDecideCbv"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__19_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14__value),LEAN_SCALAR_PTR_LITERAL(115, 206, 175, 80, 231, 183, 173, 95)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14__value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_16_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_16____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__15_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(76, 195, 71, 185, 148, 180, 220, 212)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__9_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(30, 114, 151, 242, 65, 185, 169, 185)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "simpCbvCond"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(159, 133, 67, 239, 99, 33, 147, 98)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__6_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_19_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_19____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cbv"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "rewrite"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__0_value),LEAN_SCALAR_PTR_LITERAL(180, 58, 216, 170, 2, 199, 127, 134)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__1_value),LEAN_SCALAR_PTR_LITERAL(174, 58, 109, 183, 100, 138, 243, 210)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__5;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "recMatcher:"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__7;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\n==>"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "simpDecidableRec"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(80, 52, 244, 154, 141, 147, 125, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rec"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__2_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(158, 146, 92, 125, 27, 135, 153, 152)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value;
static const lean_array_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__4_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_19_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_19____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_dischargeNone___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "controlFlow"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__0_value),LEAN_SCALAR_PTR_LITERAL(180, 58, 216, 170, 2, 199, 127, 134)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 7, 140, 41, 97, 241, 74, 13)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__2;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "match `"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__4;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`:"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___lam__0(lean_object* v_customCanUnfoldPredicate_x3f_1_, uint8_t v_canUnfoldPredicateConfig_2_, lean_object* v_cfg_3_, lean_object* v_info_4_, lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = l_Lean_ConstantInfo_name(v_info_4_);
v___x_9_ = l_Lean_Meta_Tactic_Cbv_isCbvOpaque___redArg(v___x_8_, v___y_6_);
lean_dec(v___x_8_);
if (lean_obj_tag(v___x_9_) == 0)
{
lean_object* v_a_10_; lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_24_; 
v_a_10_ = lean_ctor_get(v___x_9_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_9_);
if (v_isSharedCheck_24_ == 0)
{
v___x_12_ = v___x_9_;
v_isShared_13_ = v_isSharedCheck_24_;
goto v_resetjp_11_;
}
else
{
lean_inc(v_a_10_);
lean_dec(v___x_9_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_24_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
uint8_t v___x_14_; 
v___x_14_ = lean_unbox(v_a_10_);
lean_dec(v_a_10_);
if (v___x_14_ == 0)
{
lean_del_object(v___x_12_);
if (lean_obj_tag(v_customCanUnfoldPredicate_x3f_1_) == 0)
{
if (v_canUnfoldPredicateConfig_2_ == 0)
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Meta_canUnfoldDefault(v_cfg_3_, v_info_4_, v___y_5_, v___y_6_);
lean_dec_ref(v_info_4_);
lean_dec_ref(v_cfg_3_);
return v___x_15_;
}
else
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Meta_canUnfoldAtMatcher(v_cfg_3_, v_info_4_, v___y_5_, v___y_6_);
lean_dec_ref(v_info_4_);
lean_dec_ref(v_cfg_3_);
return v___x_16_;
}
}
else
{
lean_object* v_val_17_; lean_object* v___x_18_; 
v_val_17_ = lean_ctor_get(v_customCanUnfoldPredicate_x3f_1_, 0);
lean_inc(v_val_17_);
lean_dec_ref_known(v_customCanUnfoldPredicate_x3f_1_, 1);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
v___x_18_ = lean_apply_5(v_val_17_, v_cfg_3_, v_info_4_, v___y_5_, v___y_6_, lean_box(0));
return v___x_18_;
}
}
else
{
uint8_t v___x_19_; lean_object* v___x_20_; lean_object* v___x_22_; 
lean_dec_ref(v_info_4_);
lean_dec_ref(v_cfg_3_);
lean_dec(v_customCanUnfoldPredicate_x3f_1_);
v___x_19_ = 0;
v___x_20_ = lean_box(v___x_19_);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_20_);
v___x_22_ = v___x_12_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v___x_20_);
v___x_22_ = v_reuseFailAlloc_23_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
return v___x_22_;
}
}
}
}
else
{
lean_dec_ref(v_info_4_);
lean_dec_ref(v_cfg_3_);
lean_dec(v_customCanUnfoldPredicate_x3f_1_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___lam__0___boxed(lean_object* v_customCanUnfoldPredicate_x3f_25_, lean_object* v_canUnfoldPredicateConfig_26_, lean_object* v_cfg_27_, lean_object* v_info_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_){
_start:
{
uint8_t v_canUnfoldPredicateConfig_boxed_32_; lean_object* v_res_33_; 
v_canUnfoldPredicateConfig_boxed_32_ = lean_unbox(v_canUnfoldPredicateConfig_26_);
v_res_33_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___lam__0(v_customCanUnfoldPredicate_x3f_25_, v_canUnfoldPredicateConfig_boxed_32_, v_cfg_27_, v_info_28_, v___y_29_, v___y_30_);
lean_dec(v___y_30_);
lean_dec_ref(v___y_29_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(lean_object* v_x_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_){
_start:
{
lean_object* v_keyedConfig_40_; uint8_t v_trackZetaDelta_41_; lean_object* v_zetaDeltaSet_42_; lean_object* v_lctx_43_; lean_object* v_localInstances_44_; lean_object* v_defEqCtx_x3f_45_; lean_object* v_synthPendingDepth_46_; lean_object* v_customCanUnfoldPredicate_x3f_47_; uint8_t v_univApprox_48_; uint8_t v_inTypeClassResolution_49_; uint8_t v_cacheInferType_50_; lean_object* v___x_51_; uint8_t v_canUnfoldPredicateConfig_52_; lean_object* v___x_53_; lean_object* v___f_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v_keyedConfig_40_ = lean_ctor_get(v_a_35_, 0);
v_trackZetaDelta_41_ = lean_ctor_get_uint8(v_a_35_, sizeof(void*)*7);
v_zetaDeltaSet_42_ = lean_ctor_get(v_a_35_, 1);
v_lctx_43_ = lean_ctor_get(v_a_35_, 2);
v_localInstances_44_ = lean_ctor_get(v_a_35_, 3);
v_defEqCtx_x3f_45_ = lean_ctor_get(v_a_35_, 4);
v_synthPendingDepth_46_ = lean_ctor_get(v_a_35_, 5);
v_customCanUnfoldPredicate_x3f_47_ = lean_ctor_get(v_a_35_, 6);
v_univApprox_48_ = lean_ctor_get_uint8(v_a_35_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_49_ = lean_ctor_get_uint8(v_a_35_, sizeof(void*)*7 + 2);
v_cacheInferType_50_ = lean_ctor_get_uint8(v_a_35_, sizeof(void*)*7 + 3);
v___x_51_ = l_Lean_Meta_Context_config(v_a_35_);
v_canUnfoldPredicateConfig_52_ = lean_ctor_get_uint8(v___x_51_, 19);
lean_dec_ref(v___x_51_);
v___x_53_ = lean_box(v_canUnfoldPredicateConfig_52_);
lean_inc(v_customCanUnfoldPredicate_x3f_47_);
v___f_54_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_54_, 0, v_customCanUnfoldPredicate_x3f_47_);
lean_closure_set(v___f_54_, 1, v___x_53_);
v___x_55_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_55_, 0, v___f_54_);
lean_inc(v_synthPendingDepth_46_);
lean_inc(v_defEqCtx_x3f_45_);
lean_inc_ref(v_localInstances_44_);
lean_inc_ref(v_lctx_43_);
lean_inc(v_zetaDeltaSet_42_);
lean_inc_ref(v_keyedConfig_40_);
v___x_56_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_56_, 0, v_keyedConfig_40_);
lean_ctor_set(v___x_56_, 1, v_zetaDeltaSet_42_);
lean_ctor_set(v___x_56_, 2, v_lctx_43_);
lean_ctor_set(v___x_56_, 3, v_localInstances_44_);
lean_ctor_set(v___x_56_, 4, v_defEqCtx_x3f_45_);
lean_ctor_set(v___x_56_, 5, v_synthPendingDepth_46_);
lean_ctor_set(v___x_56_, 6, v___x_55_);
lean_ctor_set_uint8(v___x_56_, sizeof(void*)*7, v_trackZetaDelta_41_);
lean_ctor_set_uint8(v___x_56_, sizeof(void*)*7 + 1, v_univApprox_48_);
lean_ctor_set_uint8(v___x_56_, sizeof(void*)*7 + 2, v_inTypeClassResolution_49_);
lean_ctor_set_uint8(v___x_56_, sizeof(void*)*7 + 3, v_cacheInferType_50_);
lean_inc(v_a_38_);
lean_inc_ref(v_a_37_);
lean_inc(v_a_36_);
v___x_57_ = lean_apply_5(v_x_34_, v___x_56_, v_a_36_, v_a_37_, v_a_38_, lean_box(0));
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg___boxed(lean_object* v_x_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v_x_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_);
lean_dec(v_a_62_);
lean_dec_ref(v_a_61_);
lean_dec(v_a_60_);
lean_dec_ref(v_a_59_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard(lean_object* v_00_u03b1_65_, lean_object* v_x_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v_x_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___boxed(lean_object* v_00_u03b1_73_, lean_object* v_x_74_, lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard(v_00_u03b1_73_, v_x_74_, v_a_75_, v_a_76_, v_a_77_, v_a_78_);
lean_dec(v_a_78_);
lean_dec_ref(v_a_77_);
lean_dec(v_a_76_);
lean_dec_ref(v_a_75_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___lam__0(lean_object* v_k_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v_b_87_, lean_object* v_c_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v___x_94_; 
lean_inc(v___y_92_);
lean_inc_ref(v___y_91_);
lean_inc(v___y_90_);
lean_inc_ref(v___y_89_);
lean_inc(v___y_86_);
lean_inc_ref(v___y_85_);
lean_inc(v___y_84_);
lean_inc_ref(v___y_83_);
lean_inc(v___y_82_);
v___x_94_ = lean_apply_12(v_k_81_, v_b_87_, v_c_88_, v___y_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, lean_box(0));
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___lam__0___boxed(lean_object* v_k_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v_b_101_, lean_object* v_c_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___lam__0(v_k_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v_b_101_, v_c_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_);
lean_dec(v___y_106_);
lean_dec_ref(v___y_105_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg(lean_object* v_type_109_, lean_object* v_k_110_, uint8_t v_cleanupAnnotations_111_, uint8_t v_whnfType_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v___f_123_; lean_object* v___x_124_; 
lean_inc(v___y_117_);
lean_inc_ref(v___y_116_);
lean_inc(v___y_115_);
lean_inc_ref(v___y_114_);
lean_inc(v___y_113_);
v___f_123_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___lam__0___boxed), 13, 6);
lean_closure_set(v___f_123_, 0, v_k_110_);
lean_closure_set(v___f_123_, 1, v___y_113_);
lean_closure_set(v___f_123_, 2, v___y_114_);
lean_closure_set(v___f_123_, 3, v___y_115_);
lean_closure_set(v___f_123_, 4, v___y_116_);
lean_closure_set(v___f_123_, 5, v___y_117_);
v___x_124_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_109_, v___f_123_, v_cleanupAnnotations_111_, v_whnfType_112_, v___y_118_, v___y_119_, v___y_120_, v___y_121_);
if (lean_obj_tag(v___x_124_) == 0)
{
return v___x_124_;
}
else
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_132_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_132_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_130_; 
if (v_isShared_128_ == 0)
{
v___x_130_ = v___x_127_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_a_125_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg___boxed(lean_object* v_type_133_, lean_object* v_k_134_, lean_object* v_cleanupAnnotations_135_, lean_object* v_whnfType_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_147_; uint8_t v_whnfType_boxed_148_; lean_object* v_res_149_; 
v_cleanupAnnotations_boxed_147_ = lean_unbox(v_cleanupAnnotations_135_);
v_whnfType_boxed_148_ = lean_unbox(v_whnfType_136_);
v_res_149_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg(v_type_133_, v_k_134_, v_cleanupAnnotations_boxed_147_, v_whnfType_boxed_148_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
lean_dec(v___y_141_);
lean_dec_ref(v___y_140_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
lean_dec(v___y_137_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0(lean_object* v_00_u03b1_150_, lean_object* v_type_151_, lean_object* v_k_152_, uint8_t v_cleanupAnnotations_153_, uint8_t v_whnfType_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg(v_type_151_, v_k_152_, v_cleanupAnnotations_153_, v_whnfType_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___boxed(lean_object* v_00_u03b1_166_, lean_object* v_type_167_, lean_object* v_k_168_, lean_object* v_cleanupAnnotations_169_, lean_object* v_whnfType_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_181_; uint8_t v_whnfType_boxed_182_; lean_object* v_res_183_; 
v_cleanupAnnotations_boxed_181_ = lean_unbox(v_cleanupAnnotations_169_);
v_whnfType_boxed_182_ = lean_unbox(v_whnfType_170_);
v_res_183_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0(v_00_u03b1_166_, v_type_167_, v_k_168_, v_cleanupAnnotations_boxed_181_, v_whnfType_boxed_182_, v___y_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(lean_object* v_f_184_, lean_object* v_a_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v___y_194_; lean_object* v___x_197_; uint8_t v_debug_198_; 
v___x_197_ = lean_st_ref_get(v___y_187_);
v_debug_198_ = lean_ctor_get_uint8(v___x_197_, sizeof(void*)*13);
lean_dec(v___x_197_);
if (v_debug_198_ == 0)
{
v___y_194_ = v___y_187_;
goto v___jp_193_;
}
else
{
lean_object* v___x_199_; 
v___x_199_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_184_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_);
if (lean_obj_tag(v___x_199_) == 0)
{
lean_object* v___x_200_; 
lean_dec_ref_known(v___x_199_, 1);
v___x_200_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_dec_ref_known(v___x_200_, 1);
v___y_194_ = v___y_187_;
goto v___jp_193_;
}
else
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_208_; 
lean_dec_ref(v_a_185_);
lean_dec_ref(v_f_184_);
v_a_201_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_208_ == 0)
{
v___x_203_ = v___x_200_;
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_200_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_206_; 
if (v_isShared_204_ == 0)
{
v___x_206_ = v___x_203_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_a_201_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
}
else
{
lean_object* v_a_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_216_; 
lean_dec_ref(v_a_185_);
lean_dec_ref(v_f_184_);
v_a_209_ = lean_ctor_get(v___x_199_, 0);
v_isSharedCheck_216_ = !lean_is_exclusive(v___x_199_);
if (v_isSharedCheck_216_ == 0)
{
v___x_211_ = v___x_199_;
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_a_209_);
lean_dec(v___x_199_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_216_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_214_; 
if (v_isShared_212_ == 0)
{
v___x_214_ = v___x_211_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_a_209_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
}
}
v___jp_193_:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = l_Lean_Expr_app___override(v_f_184_, v_a_185_);
v___x_196_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_195_, v___y_194_);
return v___x_196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_f_217_, lean_object* v_a_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(v_f_217_, v_a_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
lean_dec(v___y_224_);
lean_dec_ref(v___y_223_);
lean_dec(v___y_222_);
lean_dec_ref(v___y_221_);
lean_dec(v___y_220_);
lean_dec_ref(v___y_219_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1(lean_object* v_args_227_, lean_object* v_endIdx_228_, lean_object* v_b_229_, lean_object* v_i_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
uint8_t v___x_241_; 
v___x_241_ = lean_nat_dec_le(v_endIdx_228_, v_i_230_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_242_ = l_Lean_instInhabitedExpr;
v___x_243_ = lean_array_get_borrowed(v___x_242_, v_args_227_, v_i_230_);
lean_inc(v___x_243_);
v___x_244_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(v_b_229_, v___x_243_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v_a_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc(v_a_245_);
lean_dec_ref_known(v___x_244_, 1);
v___x_246_ = lean_unsigned_to_nat(1u);
v___x_247_ = lean_nat_add(v_i_230_, v___x_246_);
lean_dec(v_i_230_);
v_b_229_ = v_a_245_;
v_i_230_ = v___x_247_;
goto _start;
}
else
{
lean_dec(v_i_230_);
return v___x_244_;
}
}
else
{
lean_object* v___x_249_; 
lean_dec(v_i_230_);
v___x_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_249_, 0, v_b_229_);
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1___boxed(lean_object* v_args_250_, lean_object* v_endIdx_251_, lean_object* v_b_252_, lean_object* v_i_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1(v_args_250_, v_endIdx_251_, v_b_252_, v_i_253_, v___y_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
lean_dec(v___y_254_);
lean_dec(v_endIdx_251_);
lean_dec_ref(v_args_250_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1(lean_object* v_f_265_, lean_object* v_args_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_277_ = lean_unsigned_to_nat(0u);
v___x_278_ = lean_array_get_size(v_args_266_);
v___x_279_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1(v_args_266_, v___x_278_, v_f_265_, v___x_277_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1___boxed(lean_object* v_f_280_, lean_object* v_args_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1(v_f_280_, v_args_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
lean_dec(v___y_284_);
lean_dec_ref(v___y_283_);
lean_dec(v___y_282_);
lean_dec_ref(v_args_281_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0(uint8_t v___x_296_, lean_object* v_inst_297_, lean_object* v___x_298_, lean_object* v_vars_299_, lean_object* v_body_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_){
_start:
{
lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_316_ = l_Lean_Expr_cleanupAnnotations(v_body_300_);
v___x_317_ = l_Lean_Expr_isApp(v___x_316_);
if (v___x_317_ == 0)
{
lean_dec_ref(v___x_316_);
goto v___jp_311_;
}
else
{
lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_318_ = l_Lean_Expr_appFnCleanup___redArg(v___x_316_);
v___x_319_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__1));
v___x_320_ = l_Lean_Expr_isConstOf(v___x_318_, v___x_319_);
lean_dec_ref(v___x_318_);
if (v___x_320_ == 0)
{
lean_dec_ref(v___x_316_);
goto v___jp_311_;
}
else
{
lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = lean_array_get_size(v_vars_299_);
v___x_322_ = lean_nat_dec_eq(v___x_321_, v___x_298_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
lean_dec_ref(v___x_316_);
v___x_323_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_323_, 0, v___x_322_);
lean_ctor_set_uint8(v___x_323_, 1, v___x_322_);
v___x_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
lean_ctor_set(v___x_324_, 1, v_inst_297_);
v___x_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
v___x_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
return v___x_326_;
}
else
{
lean_object* v_arg_327_; uint8_t v___x_328_; lean_object* v___x_329_; 
lean_dec_ref(v_inst_297_);
v_arg_327_ = lean_ctor_get(v___x_316_, 1);
lean_inc_ref(v_arg_327_);
lean_dec_ref(v___x_316_);
v___x_328_ = 1;
v___x_329_ = l_Lean_Meta_mkLambdaFVars(v_vars_299_, v_arg_327_, v___x_296_, v___x_322_, v___x_296_, v___x_322_, v___x_328_, v___y_306_, v___y_307_, v___y_308_, v___y_309_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_338_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_338_ == 0)
{
v___x_332_ = v___x_329_;
v_isShared_333_ = v_isSharedCheck_338_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_a_330_);
lean_dec(v___x_329_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_338_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_334_; lean_object* v___x_336_; 
v___x_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_334_, 0, v_a_330_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 0, v___x_334_);
v___x_336_ = v___x_332_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_334_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
else
{
lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_346_; 
v_a_339_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_346_ == 0)
{
v___x_341_ = v___x_329_;
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v___x_329_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
if (v_isShared_342_ == 0)
{
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_a_339_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
}
}
v___jp_311_:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_312_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_312_, 0, v___x_296_);
lean_ctor_set_uint8(v___x_312_, 1, v___x_296_);
v___x_313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
lean_ctor_set(v___x_313_, 1, v_inst_297_);
v___x_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_314_, 0, v___x_313_);
v___x_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
return v___x_315_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___boxed(lean_object* v___x_347_, lean_object* v_inst_348_, lean_object* v___x_349_, lean_object* v_vars_350_, lean_object* v_body_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
uint8_t v___x_18592__boxed_362_; lean_object* v_res_363_; 
v___x_18592__boxed_362_ = lean_unbox(v___x_347_);
v_res_363_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0(v___x_18592__boxed_362_, v_inst_348_, v___x_349_, v_vars_350_, v_body_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec_ref(v_body_351_);
lean_dec_ref(v_vars_350_);
lean_dec(v___x_349_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2(lean_object* v_inst_366_, lean_object* v_x_367_, lean_object* v_x_368_, lean_object* v_x_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
if (lean_obj_tag(v_x_367_) == 5)
{
lean_object* v_fn_380_; lean_object* v_arg_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v_fn_380_ = lean_ctor_get(v_x_367_, 0);
lean_inc_ref(v_fn_380_);
v_arg_381_ = lean_ctor_get(v_x_367_, 1);
lean_inc_ref(v_arg_381_);
lean_dec_ref_known(v_x_367_, 2);
v___x_382_ = lean_array_set(v_x_368_, v_x_369_, v_arg_381_);
v___x_383_ = lean_unsigned_to_nat(1u);
v___x_384_ = lean_nat_sub(v_x_369_, v___x_383_);
lean_dec(v_x_369_);
v_x_367_ = v_fn_380_;
v_x_368_ = v___x_382_;
v_x_369_ = v___x_384_;
goto _start;
}
else
{
lean_object* v___x_386_; lean_object* v___x_387_; uint8_t v___x_388_; 
lean_dec(v_x_369_);
v___x_386_ = lean_array_get_size(v_x_368_);
v___x_387_ = lean_unsigned_to_nat(0u);
v___x_388_ = lean_nat_dec_eq(v___x_386_, v___x_387_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; lean_object* v___f_390_; lean_object* v___x_391_; 
v___x_389_ = lean_box(v___x_388_);
lean_inc_ref(v_inst_366_);
v___f_390_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___boxed), 15, 3);
lean_closure_set(v___f_390_, 0, v___x_389_);
lean_closure_set(v___f_390_, 1, v_inst_366_);
lean_closure_set(v___f_390_, 2, v___x_386_);
lean_inc(v___y_378_);
lean_inc_ref(v___y_377_);
lean_inc(v___y_376_);
lean_inc_ref(v___y_375_);
lean_inc_ref(v_x_367_);
v___x_391_ = lean_infer_type(v_x_367_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
if (lean_obj_tag(v___x_391_) == 0)
{
lean_object* v_a_392_; uint8_t v___x_393_; lean_object* v___x_394_; 
v_a_392_ = lean_ctor_get(v___x_391_, 0);
lean_inc(v_a_392_);
lean_dec_ref_known(v___x_391_, 1);
v___x_393_ = 1;
v___x_394_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__0___redArg(v_a_392_, v___f_390_, v___x_388_, v___x_393_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
if (lean_obj_tag(v___x_394_) == 0)
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_475_; 
v_a_395_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_475_ == 0)
{
v___x_397_ = v___x_394_;
v_isShared_398_ = v_isSharedCheck_475_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_394_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_475_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
if (lean_obj_tag(v_a_395_) == 0)
{
lean_object* v_a_399_; lean_object* v___x_401_; 
lean_dec_ref(v_x_368_);
lean_dec_ref(v_x_367_);
lean_dec_ref(v_inst_366_);
v_a_399_ = lean_ctor_get(v_a_395_, 0);
lean_inc(v_a_399_);
lean_dec_ref_known(v_a_395_, 1);
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 0, v_a_399_);
v___x_401_ = v___x_397_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_399_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
else
{
lean_object* v_a_403_; lean_object* v___x_404_; 
lean_del_object(v___x_397_);
v_a_403_ = lean_ctor_get(v_a_395_, 0);
lean_inc(v_a_403_);
lean_dec_ref_known(v_a_395_, 1);
v___x_404_ = l_Lean_Meta_Sym_shareCommon(v_a_403_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v_a_405_; lean_object* v___x_406_; 
v_a_405_ = lean_ctor_get(v___x_404_, 0);
lean_inc_n(v_a_405_, 2);
lean_dec_ref_known(v___x_404_, 1);
v___x_406_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1(v_a_405_, v_x_368_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
lean_dec_ref(v_x_368_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; lean_object* v___x_408_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc(v_a_407_);
lean_dec_ref_known(v___x_406_, 1);
v___x_408_ = l_Lean_Meta_Sym_Simp_simpAppArgRange(v_a_407_, v___x_387_, v___x_386_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_450_; 
v_a_409_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_450_ == 0)
{
v___x_411_ = v___x_408_;
v_isShared_412_ = v_isSharedCheck_450_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_408_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_450_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
if (lean_obj_tag(v_a_409_) == 0)
{
lean_object* v___x_413_; lean_object* v___x_415_; 
lean_dec(v_a_405_);
lean_dec_ref(v_x_367_);
v___x_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_413_, 0, v_a_409_);
lean_ctor_set(v___x_413_, 1, v_inst_366_);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 0, v___x_413_);
v___x_415_ = v___x_411_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v___x_413_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
else
{
lean_object* v_e_x27_417_; lean_object* v_proof_418_; uint8_t v_done_419_; uint8_t v_contextDependent_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_449_; 
lean_del_object(v___x_411_);
lean_dec_ref(v_inst_366_);
v_e_x27_417_ = lean_ctor_get(v_a_409_, 0);
v_proof_418_ = lean_ctor_get(v_a_409_, 1);
v_done_419_ = lean_ctor_get_uint8(v_a_409_, sizeof(void*)*2);
v_contextDependent_420_ = lean_ctor_get_uint8(v_a_409_, sizeof(void*)*2 + 1);
v_isSharedCheck_449_ = !lean_is_exclusive(v_a_409_);
if (v_isSharedCheck_449_ == 0)
{
v___x_422_ = v_a_409_;
v_isShared_423_ = v_isSharedCheck_449_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_proof_418_);
lean_inc(v_e_x27_417_);
lean_dec(v_a_409_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_449_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_424_ = l_Lean_Expr_getAppNumArgs(v_e_x27_417_);
v___x_425_ = lean_mk_empty_array_with_capacity(v___x_424_);
lean_dec(v___x_424_);
v___x_426_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_e_x27_417_, v___x_425_);
lean_inc_ref(v___x_426_);
v___x_427_ = l_Lean_Meta_Sym_betaRevS(v_a_405_, v___x_426_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_440_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_440_ == 0)
{
v___x_430_ = v___x_427_;
v_isShared_431_ = v_isSharedCheck_440_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_427_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_440_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v_a_428_);
v___x_433_ = v___x_422_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_a_428_);
lean_ctor_set(v_reuseFailAlloc_439_, 1, v_proof_418_);
lean_ctor_set_uint8(v_reuseFailAlloc_439_, sizeof(void*)*2, v_done_419_);
lean_ctor_set_uint8(v_reuseFailAlloc_439_, sizeof(void*)*2 + 1, v_contextDependent_420_);
v___x_433_ = v_reuseFailAlloc_439_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_437_; 
v___x_434_ = l_Lean_mkAppRev(v_x_367_, v___x_426_);
lean_dec_ref(v___x_426_);
v___x_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_435_, 0, v___x_433_);
lean_ctor_set(v___x_435_, 1, v___x_434_);
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 0, v___x_435_);
v___x_437_ = v___x_430_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_435_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
else
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
lean_dec_ref(v___x_426_);
lean_del_object(v___x_422_);
lean_dec_ref(v_proof_418_);
lean_dec_ref(v_x_367_);
v_a_441_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v___x_427_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_427_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_a_441_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
lean_dec(v_a_405_);
lean_dec_ref(v_x_367_);
lean_dec_ref(v_inst_366_);
v_a_451_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v___x_408_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_408_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
}
else
{
lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_466_; 
lean_dec(v_a_405_);
lean_dec_ref(v_x_367_);
lean_dec_ref(v_inst_366_);
v_a_459_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_466_ == 0)
{
v___x_461_ = v___x_406_;
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v___x_406_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_464_; 
if (v_isShared_462_ == 0)
{
v___x_464_ = v___x_461_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_a_459_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
else
{
lean_object* v_a_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_474_; 
lean_dec_ref(v_x_368_);
lean_dec_ref(v_x_367_);
lean_dec_ref(v_inst_366_);
v_a_467_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_474_ == 0)
{
v___x_469_ = v___x_404_;
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_a_467_);
lean_dec(v___x_404_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_472_; 
if (v_isShared_470_ == 0)
{
v___x_472_ = v___x_469_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_a_467_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
}
}
else
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_483_; 
lean_dec_ref(v_x_368_);
lean_dec_ref(v_x_367_);
lean_dec_ref(v_inst_366_);
v_a_476_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_483_ == 0)
{
v___x_478_ = v___x_394_;
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_394_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_483_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_481_; 
if (v_isShared_479_ == 0)
{
v___x_481_ = v___x_478_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_a_476_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
lean_dec_ref(v___f_390_);
lean_dec_ref(v_x_368_);
lean_dec_ref(v_x_367_);
lean_dec_ref(v_inst_366_);
v_a_484_ = lean_ctor_get(v___x_391_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_391_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_391_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
else
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
lean_dec_ref(v_x_368_);
lean_dec_ref(v_x_367_);
v___x_492_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0));
v___x_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
lean_ctor_set(v___x_493_, 1, v_inst_366_);
v___x_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
return v___x_494_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___boxed(lean_object* v_inst_495_, lean_object* v_x_496_, lean_object* v_x_497_, lean_object* v_x_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2(v_inst_495_, v_x_496_, v_x_497_, v_x_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
lean_dec(v___y_499_);
return v_res_509_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__0(void){
_start:
{
lean_object* v___x_510_; lean_object* v_dummy_511_; 
v___x_510_ = lean_box(0);
v_dummy_511_ = l_Lean_Expr_sort___override(v___x_510_);
return v_dummy_511_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance(lean_object* v_inst_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
lean_object* v_dummy_523_; lean_object* v_nargs_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v_dummy_523_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__0, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__0_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___closed__0);
v_nargs_524_ = l_Lean_Expr_getAppNumArgs(v_inst_512_);
lean_inc(v_nargs_524_);
v___x_525_ = lean_mk_array(v_nargs_524_, v_dummy_523_);
v___x_526_ = lean_unsigned_to_nat(1u);
v___x_527_ = lean_nat_sub(v_nargs_524_, v___x_526_);
lean_dec(v_nargs_524_);
lean_inc_ref(v_inst_512_);
v___x_528_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2(v_inst_512_, v_inst_512_, v___x_525_, v___x_527_, v_a_513_, v_a_514_, v_a_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance___boxed(lean_object* v_inst_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance(v_inst_529_, v_a_530_, v_a_531_, v_a_532_, v_a_533_, v_a_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_);
lean_dec(v_a_538_);
lean_dec_ref(v_a_537_);
lean_dec(v_a_536_);
lean_dec_ref(v_a_535_);
lean_dec(v_a_534_);
lean_dec_ref(v_a_533_);
lean_dec(v_a_532_);
lean_dec_ref(v_a_531_);
lean_dec(v_a_530_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2(lean_object* v_f_541_, lean_object* v_a_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(v_f_541_, v_a_542_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___boxed(lean_object* v_f_554_, lean_object* v_a_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2(v_f_554_, v_a_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec(v___y_556_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv(lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = l_Lean_Meta_Sym_Simp_simpIte(v_a_567_, v_a_568_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___boxed(lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv(v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_, v_a_587_, v_a_588_);
lean_dec(v_a_588_);
lean_dec_ref(v_a_587_);
lean_dec(v_a_586_);
lean_dec_ref(v_a_585_);
lean_dec(v_a_584_);
lean_dec_ref(v_a_583_);
lean_dec(v_a_582_);
lean_dec_ref(v_a_581_);
lean_dec(v_a_580_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_(){
_start:
{
lean_object* v___f_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v___f_654_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_));
v___x_655_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__21_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_));
v___x_656_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__25_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_));
v___x_657_ = l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(v___x_655_, v___x_656_, v___f_654_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17____boxed(lean_object* v_a_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_();
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_19_(){
_start:
{
lean_object* v___f_661_; lean_object* v___x_662_; uint8_t v___x_663_; lean_object* v___x_664_; 
v___f_661_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__0_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_));
v___x_662_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14___closed__21_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_));
v___x_663_ = 0;
v___x_664_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(v___x_662_, v___x_663_, v___f_661_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_19____boxed(lean_object* v_a_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_19_();
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable(lean_object* v_f_690_, lean_object* v_00_u03b1_691_, lean_object* v_c_692_, lean_object* v_inst_693_, lean_object* v_a_694_, lean_object* v_b_695_, lean_object* v_instToMatch_696_, lean_object* v_fallback_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_){
_start:
{
lean_object* v___x_708_; 
v___x_708_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_instToMatch_696_, v_a_704_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v_a_709_; lean_object* v___x_710_; uint8_t v___x_711_; 
v_a_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_a_709_);
lean_dec_ref_known(v___x_708_, 1);
v___x_710_ = l_Lean_Expr_cleanupAnnotations(v_a_709_);
lean_dec(v_a_709_);
v___x_711_ = l_Lean_Expr_isApp(v___x_710_);
if (v___x_711_ == 0)
{
lean_object* v___x_712_; 
lean_dec_ref(v___x_710_);
lean_dec_ref(v_b_695_);
lean_dec_ref(v_a_694_);
lean_dec_ref(v_inst_693_);
lean_dec_ref(v_c_692_);
lean_dec_ref(v_00_u03b1_691_);
lean_inc(v_a_706_);
lean_inc_ref(v_a_705_);
lean_inc(v_a_704_);
lean_inc_ref(v_a_703_);
lean_inc(v_a_702_);
lean_inc_ref(v_a_701_);
lean_inc(v_a_700_);
lean_inc_ref(v_a_699_);
lean_inc(v_a_698_);
v___x_712_ = lean_apply_10(v_fallback_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, lean_box(0));
return v___x_712_;
}
else
{
lean_object* v___x_713_; uint8_t v___x_714_; 
v___x_713_ = l_Lean_Expr_appFnCleanup___redArg(v___x_710_);
v___x_714_ = l_Lean_Expr_isApp(v___x_713_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; 
lean_dec_ref(v___x_713_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v_b_695_);
lean_dec_ref(v_a_694_);
lean_dec_ref(v_inst_693_);
lean_dec_ref(v_c_692_);
lean_dec_ref(v_00_u03b1_691_);
lean_inc(v_a_706_);
lean_inc_ref(v_a_705_);
lean_inc(v_a_704_);
lean_inc_ref(v_a_703_);
lean_inc(v_a_702_);
lean_inc_ref(v_a_701_);
lean_inc(v_a_700_);
lean_inc_ref(v_a_699_);
lean_inc(v_a_698_);
v___x_715_ = lean_apply_10(v_fallback_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, lean_box(0));
return v___x_715_;
}
else
{
lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_716_ = l_Lean_Expr_appFnCleanup___redArg(v___x_713_);
v___x_717_ = l_Lean_Expr_isApp(v___x_716_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; 
lean_dec_ref(v___x_716_);
lean_dec_ref(v___x_713_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v_b_695_);
lean_dec_ref(v_a_694_);
lean_dec_ref(v_inst_693_);
lean_dec_ref(v_c_692_);
lean_dec_ref(v_00_u03b1_691_);
lean_inc(v_a_706_);
lean_inc_ref(v_a_705_);
lean_inc(v_a_704_);
lean_inc_ref(v_a_703_);
lean_inc(v_a_702_);
lean_inc_ref(v_a_701_);
lean_inc(v_a_700_);
lean_inc_ref(v_a_699_);
lean_inc(v_a_698_);
v___x_718_ = lean_apply_10(v_fallback_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, lean_box(0));
return v___x_718_;
}
else
{
lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_719_ = l_Lean_Expr_appFnCleanup___redArg(v___x_716_);
lean_dec_ref(v___x_716_);
v___x_720_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1));
v___x_721_ = l_Lean_Expr_isConstOf(v___x_719_, v___x_720_);
lean_dec_ref(v___x_719_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; 
lean_dec_ref(v___x_713_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v_b_695_);
lean_dec_ref(v_a_694_);
lean_dec_ref(v_inst_693_);
lean_dec_ref(v_c_692_);
lean_dec_ref(v_00_u03b1_691_);
lean_inc(v_a_706_);
lean_inc_ref(v_a_705_);
lean_inc(v_a_704_);
lean_inc_ref(v_a_703_);
lean_inc(v_a_702_);
lean_inc_ref(v_a_701_);
lean_inc(v_a_700_);
lean_inc_ref(v_a_699_);
lean_inc(v_a_698_);
v___x_722_ = lean_apply_10(v_fallback_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, lean_box(0));
return v___x_722_;
}
else
{
lean_object* v_arg_723_; lean_object* v_arg_724_; lean_object* v___x_725_; 
v_arg_723_ = lean_ctor_get(v___x_710_, 1);
lean_inc_ref(v_arg_723_);
lean_dec_ref(v___x_710_);
v_arg_724_ = lean_ctor_get(v___x_713_, 1);
lean_inc_ref(v_arg_724_);
lean_dec_ref(v___x_713_);
v___x_725_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_724_, v_a_704_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v___x_727_; lean_object* v___x_728_; uint8_t v___x_729_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
lean_inc(v_a_726_);
lean_dec_ref_known(v___x_725_, 1);
v___x_727_ = l_Lean_Expr_cleanupAnnotations(v_a_726_);
lean_dec(v_a_726_);
v___x_728_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__4));
v___x_729_ = l_Lean_Expr_isConstOf(v___x_727_, v___x_728_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_730_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__6));
v___x_731_ = l_Lean_Expr_isConstOf(v___x_727_, v___x_730_);
lean_dec_ref(v___x_727_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; 
lean_dec_ref(v_arg_723_);
lean_dec_ref(v_b_695_);
lean_dec_ref(v_a_694_);
lean_dec_ref(v_inst_693_);
lean_dec_ref(v_c_692_);
lean_dec_ref(v_00_u03b1_691_);
lean_inc(v_a_706_);
lean_inc_ref(v_a_705_);
lean_inc(v_a_704_);
lean_inc_ref(v_a_703_);
lean_inc(v_a_702_);
lean_inc_ref(v_a_701_);
lean_inc(v_a_700_);
lean_inc_ref(v_a_699_);
lean_inc(v_a_698_);
v___x_732_ = lean_apply_10(v_fallback_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, lean_box(0));
return v___x_732_;
}
else
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
lean_dec_ref(v_fallback_697_);
v___x_733_ = lean_unsigned_to_nat(1u);
v___x_734_ = lean_mk_empty_array_with_capacity(v___x_733_);
lean_inc_ref(v_arg_723_);
v___x_735_ = lean_array_push(v___x_734_, v_arg_723_);
lean_inc_ref(v_a_694_);
v___x_736_ = l_Lean_Expr_betaRev(v_a_694_, v___x_735_, v___x_729_, v___x_729_);
lean_dec_ref(v___x_735_);
v___x_737_ = l_Lean_Meta_Sym_shareCommonInc(v___x_736_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_750_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_750_ == 0)
{
v___x_740_ = v___x_737_;
v_isShared_741_ = v_isSharedCheck_750_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_737_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_750_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_748_; 
v___x_742_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__8));
v___x_743_ = l_Lean_Expr_constLevels_x21(v_f_690_);
v___x_744_ = l_Lean_mkConst(v___x_742_, v___x_743_);
v___x_745_ = l_Lean_mkApp6(v___x_744_, v_00_u03b1_691_, v_c_692_, v_inst_693_, v_a_694_, v_b_695_, v_arg_723_);
v___x_746_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_746_, 0, v_a_738_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
lean_ctor_set_uint8(v___x_746_, sizeof(void*)*2, v___x_729_);
lean_ctor_set_uint8(v___x_746_, sizeof(void*)*2 + 1, v___x_729_);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 0, v___x_746_);
v___x_748_ = v___x_740_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v___x_746_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
else
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_dec_ref(v_arg_723_);
lean_dec_ref(v_b_695_);
lean_dec_ref(v_a_694_);
lean_dec_ref(v_inst_693_);
lean_dec_ref(v_c_692_);
lean_dec_ref(v_00_u03b1_691_);
v_a_751_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_737_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_737_);
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
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; uint8_t v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
lean_dec_ref(v___x_727_);
lean_dec_ref(v_fallback_697_);
v___x_759_ = lean_unsigned_to_nat(1u);
v___x_760_ = lean_mk_empty_array_with_capacity(v___x_759_);
lean_inc_ref(v_arg_723_);
v___x_761_ = lean_array_push(v___x_760_, v_arg_723_);
v___x_762_ = 0;
lean_inc_ref(v_b_695_);
v___x_763_ = l_Lean_Expr_betaRev(v_b_695_, v___x_761_, v___x_762_, v___x_762_);
lean_dec_ref(v___x_761_);
v___x_764_ = l_Lean_Meta_Sym_shareCommonInc(v___x_763_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_);
if (lean_obj_tag(v___x_764_) == 0)
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_777_; 
v_a_765_ = lean_ctor_get(v___x_764_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_764_);
if (v_isSharedCheck_777_ == 0)
{
v___x_767_ = v___x_764_;
v_isShared_768_ = v_isSharedCheck_777_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___x_764_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_777_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_775_; 
v___x_769_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__10));
v___x_770_ = l_Lean_Expr_constLevels_x21(v_f_690_);
v___x_771_ = l_Lean_mkConst(v___x_769_, v___x_770_);
v___x_772_ = l_Lean_mkApp6(v___x_771_, v_00_u03b1_691_, v_c_692_, v_inst_693_, v_a_694_, v_b_695_, v_arg_723_);
v___x_773_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_773_, 0, v_a_765_);
lean_ctor_set(v___x_773_, 1, v___x_772_);
lean_ctor_set_uint8(v___x_773_, sizeof(void*)*2, v___x_762_);
lean_ctor_set_uint8(v___x_773_, sizeof(void*)*2 + 1, v___x_762_);
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 0, v___x_773_);
v___x_775_ = v___x_767_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v___x_773_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
else
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_785_; 
lean_dec_ref(v_arg_723_);
lean_dec_ref(v_b_695_);
lean_dec_ref(v_a_694_);
lean_dec_ref(v_inst_693_);
lean_dec_ref(v_c_692_);
lean_dec_ref(v_00_u03b1_691_);
v_a_778_ = lean_ctor_get(v___x_764_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_764_);
if (v_isSharedCheck_785_ == 0)
{
v___x_780_ = v___x_764_;
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_764_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
lean_dec_ref(v_arg_723_);
lean_dec_ref(v_fallback_697_);
lean_dec_ref(v_b_695_);
lean_dec_ref(v_a_694_);
lean_dec_ref(v_inst_693_);
lean_dec_ref(v_c_692_);
lean_dec_ref(v_00_u03b1_691_);
v_a_786_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_725_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_725_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_786_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
lean_dec_ref(v_fallback_697_);
lean_dec_ref(v_b_695_);
lean_dec_ref(v_a_694_);
lean_dec_ref(v_inst_693_);
lean_dec_ref(v_c_692_);
lean_dec_ref(v_00_u03b1_691_);
v_a_794_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_708_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_708_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___boxed(lean_object** _args){
lean_object* v_f_802_ = _args[0];
lean_object* v_00_u03b1_803_ = _args[1];
lean_object* v_c_804_ = _args[2];
lean_object* v_inst_805_ = _args[3];
lean_object* v_a_806_ = _args[4];
lean_object* v_b_807_ = _args[5];
lean_object* v_instToMatch_808_ = _args[6];
lean_object* v_fallback_809_ = _args[7];
lean_object* v_a_810_ = _args[8];
lean_object* v_a_811_ = _args[9];
lean_object* v_a_812_ = _args[10];
lean_object* v_a_813_ = _args[11];
lean_object* v_a_814_ = _args[12];
lean_object* v_a_815_ = _args[13];
lean_object* v_a_816_ = _args[14];
lean_object* v_a_817_ = _args[15];
lean_object* v_a_818_ = _args[16];
lean_object* v_a_819_ = _args[17];
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable(v_f_802_, v_00_u03b1_803_, v_c_804_, v_inst_805_, v_a_806_, v_b_807_, v_instToMatch_808_, v_fallback_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_, v_a_814_, v_a_815_, v_a_816_, v_a_817_, v_a_818_);
lean_dec(v_a_818_);
lean_dec_ref(v_a_817_);
lean_dec(v_a_816_);
lean_dec_ref(v_a_815_);
lean_dec(v_a_814_);
lean_dec_ref(v_a_813_);
lean_dec(v_a_812_);
lean_dec_ref(v_a_811_);
lean_dec(v_a_810_);
lean_dec_ref(v_f_802_);
return v_res_820_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_826_ = lean_box(0);
v___x_827_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__2));
v___x_828_ = l_Lean_mkConst(v___x_827_, v___x_826_);
return v___x_828_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8(void){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_838_ = lean_box(0);
v___x_839_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__7));
v___x_840_ = l_Lean_mkConst(v___x_839_, v___x_838_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr(lean_object* v_f_846_, lean_object* v_00_u03b1_847_, lean_object* v_c_848_, lean_object* v_inst_849_, lean_object* v_a_850_, lean_object* v_b_851_, lean_object* v_c_x27_852_, lean_object* v_h_853_, lean_object* v_inst_x27_854_, lean_object* v_fallback_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_){
_start:
{
lean_object* v___x_866_; 
v___x_866_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_inst_x27_854_, v_a_862_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_868_; uint8_t v___x_869_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_867_);
lean_dec_ref_known(v___x_866_, 1);
v___x_868_ = l_Lean_Expr_cleanupAnnotations(v_a_867_);
lean_dec(v_a_867_);
v___x_869_ = l_Lean_Expr_isApp(v___x_868_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; 
lean_dec_ref(v___x_868_);
lean_dec_ref(v_h_853_);
lean_dec_ref(v_c_x27_852_);
lean_dec_ref(v_b_851_);
lean_dec_ref(v_a_850_);
lean_dec_ref(v_inst_849_);
lean_dec_ref(v_c_848_);
lean_dec_ref(v_00_u03b1_847_);
lean_inc(v_a_864_);
lean_inc_ref(v_a_863_);
lean_inc(v_a_862_);
lean_inc_ref(v_a_861_);
lean_inc(v_a_860_);
lean_inc_ref(v_a_859_);
lean_inc(v_a_858_);
lean_inc_ref(v_a_857_);
lean_inc(v_a_856_);
v___x_870_ = lean_apply_10(v_fallback_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_, lean_box(0));
return v___x_870_;
}
else
{
lean_object* v___x_871_; uint8_t v___x_872_; 
v___x_871_ = l_Lean_Expr_appFnCleanup___redArg(v___x_868_);
v___x_872_ = l_Lean_Expr_isApp(v___x_871_);
if (v___x_872_ == 0)
{
lean_object* v___x_873_; 
lean_dec_ref(v___x_871_);
lean_dec_ref(v___x_868_);
lean_dec_ref(v_h_853_);
lean_dec_ref(v_c_x27_852_);
lean_dec_ref(v_b_851_);
lean_dec_ref(v_a_850_);
lean_dec_ref(v_inst_849_);
lean_dec_ref(v_c_848_);
lean_dec_ref(v_00_u03b1_847_);
lean_inc(v_a_864_);
lean_inc_ref(v_a_863_);
lean_inc(v_a_862_);
lean_inc_ref(v_a_861_);
lean_inc(v_a_860_);
lean_inc_ref(v_a_859_);
lean_inc(v_a_858_);
lean_inc_ref(v_a_857_);
lean_inc(v_a_856_);
v___x_873_ = lean_apply_10(v_fallback_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_, lean_box(0));
return v___x_873_;
}
else
{
lean_object* v___x_874_; uint8_t v___x_875_; 
v___x_874_ = l_Lean_Expr_appFnCleanup___redArg(v___x_871_);
v___x_875_ = l_Lean_Expr_isApp(v___x_874_);
if (v___x_875_ == 0)
{
lean_object* v___x_876_; 
lean_dec_ref(v___x_874_);
lean_dec_ref(v___x_871_);
lean_dec_ref(v___x_868_);
lean_dec_ref(v_h_853_);
lean_dec_ref(v_c_x27_852_);
lean_dec_ref(v_b_851_);
lean_dec_ref(v_a_850_);
lean_dec_ref(v_inst_849_);
lean_dec_ref(v_c_848_);
lean_dec_ref(v_00_u03b1_847_);
lean_inc(v_a_864_);
lean_inc_ref(v_a_863_);
lean_inc(v_a_862_);
lean_inc_ref(v_a_861_);
lean_inc(v_a_860_);
lean_inc_ref(v_a_859_);
lean_inc(v_a_858_);
lean_inc_ref(v_a_857_);
lean_inc(v_a_856_);
v___x_876_ = lean_apply_10(v_fallback_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_, lean_box(0));
return v___x_876_;
}
else
{
lean_object* v___x_877_; lean_object* v___x_878_; uint8_t v___x_879_; 
v___x_877_ = l_Lean_Expr_appFnCleanup___redArg(v___x_874_);
lean_dec_ref(v___x_874_);
v___x_878_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1));
v___x_879_ = l_Lean_Expr_isConstOf(v___x_877_, v___x_878_);
lean_dec_ref(v___x_877_);
if (v___x_879_ == 0)
{
lean_object* v___x_880_; 
lean_dec_ref(v___x_871_);
lean_dec_ref(v___x_868_);
lean_dec_ref(v_h_853_);
lean_dec_ref(v_c_x27_852_);
lean_dec_ref(v_b_851_);
lean_dec_ref(v_a_850_);
lean_dec_ref(v_inst_849_);
lean_dec_ref(v_c_848_);
lean_dec_ref(v_00_u03b1_847_);
lean_inc(v_a_864_);
lean_inc_ref(v_a_863_);
lean_inc(v_a_862_);
lean_inc_ref(v_a_861_);
lean_inc(v_a_860_);
lean_inc_ref(v_a_859_);
lean_inc(v_a_858_);
lean_inc_ref(v_a_857_);
lean_inc(v_a_856_);
v___x_880_ = lean_apply_10(v_fallback_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_, lean_box(0));
return v___x_880_;
}
else
{
lean_object* v_arg_881_; lean_object* v_arg_882_; lean_object* v___x_883_; 
v_arg_881_ = lean_ctor_get(v___x_868_, 1);
lean_inc_ref(v_arg_881_);
lean_dec_ref(v___x_868_);
v_arg_882_ = lean_ctor_get(v___x_871_, 1);
lean_inc_ref(v_arg_882_);
lean_dec_ref(v___x_871_);
v___x_883_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_882_, v_a_862_);
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v_a_884_; lean_object* v___x_885_; lean_object* v___x_886_; uint8_t v___x_887_; 
v_a_884_ = lean_ctor_get(v___x_883_, 0);
lean_inc(v_a_884_);
lean_dec_ref_known(v___x_883_, 1);
v___x_885_ = l_Lean_Expr_cleanupAnnotations(v_a_884_);
lean_dec(v_a_884_);
v___x_886_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__4));
v___x_887_ = l_Lean_Expr_isConstOf(v___x_885_, v___x_886_);
if (v___x_887_ == 0)
{
lean_object* v___x_888_; uint8_t v___x_889_; 
v___x_888_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__6));
v___x_889_ = l_Lean_Expr_isConstOf(v___x_885_, v___x_888_);
lean_dec_ref(v___x_885_);
if (v___x_889_ == 0)
{
lean_object* v___x_890_; 
lean_dec_ref(v_arg_881_);
lean_dec_ref(v_h_853_);
lean_dec_ref(v_c_x27_852_);
lean_dec_ref(v_b_851_);
lean_dec_ref(v_a_850_);
lean_dec_ref(v_inst_849_);
lean_dec_ref(v_c_848_);
lean_dec_ref(v_00_u03b1_847_);
lean_inc(v_a_864_);
lean_inc_ref(v_a_863_);
lean_inc(v_a_862_);
lean_inc_ref(v_a_861_);
lean_inc(v_a_860_);
lean_inc_ref(v_a_859_);
lean_inc(v_a_858_);
lean_inc_ref(v_a_857_);
lean_inc(v_a_856_);
v___x_890_ = lean_apply_10(v_fallback_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_, lean_box(0));
return v___x_890_;
}
else
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
lean_dec_ref(v_fallback_855_);
v___x_891_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3);
lean_inc_ref(v_arg_881_);
lean_inc_ref(v_h_853_);
lean_inc_ref(v_c_x27_852_);
lean_inc_ref(v_c_848_);
v___x_892_ = l_Lean_mkApp4(v___x_891_, v_c_848_, v_c_x27_852_, v_h_853_, v_arg_881_);
v___x_893_ = lean_unsigned_to_nat(1u);
v___x_894_ = lean_mk_empty_array_with_capacity(v___x_893_);
v___x_895_ = lean_array_push(v___x_894_, v___x_892_);
lean_inc_ref(v_a_850_);
v___x_896_ = l_Lean_Expr_betaRev(v_a_850_, v___x_895_, v___x_887_, v___x_887_);
lean_dec_ref(v___x_895_);
v___x_897_ = l_Lean_Meta_Sym_shareCommonInc(v___x_896_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_910_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_910_ == 0)
{
v___x_900_ = v___x_897_;
v_isShared_901_ = v_isSharedCheck_910_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_897_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_910_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_908_; 
v___x_902_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__5));
v___x_903_ = l_Lean_Expr_constLevels_x21(v_f_846_);
v___x_904_ = l_Lean_mkConst(v___x_902_, v___x_903_);
v___x_905_ = l_Lean_mkApp8(v___x_904_, v_00_u03b1_847_, v_c_848_, v_inst_849_, v_a_850_, v_b_851_, v_c_x27_852_, v_h_853_, v_arg_881_);
v___x_906_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_906_, 0, v_a_898_);
lean_ctor_set(v___x_906_, 1, v___x_905_);
lean_ctor_set_uint8(v___x_906_, sizeof(void*)*2, v___x_887_);
lean_ctor_set_uint8(v___x_906_, sizeof(void*)*2 + 1, v___x_887_);
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 0, v___x_906_);
v___x_908_ = v___x_900_;
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
lean_dec_ref(v_arg_881_);
lean_dec_ref(v_h_853_);
lean_dec_ref(v_c_x27_852_);
lean_dec_ref(v_b_851_);
lean_dec_ref(v_a_850_);
lean_dec_ref(v_inst_849_);
lean_dec_ref(v_c_848_);
lean_dec_ref(v_00_u03b1_847_);
v_a_911_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_918_ == 0)
{
v___x_913_ = v___x_897_;
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_a_911_);
lean_dec(v___x_897_);
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
}
else
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; uint8_t v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
lean_dec_ref(v___x_885_);
lean_dec_ref(v_fallback_855_);
v___x_919_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8);
lean_inc_ref(v_arg_881_);
lean_inc_ref(v_h_853_);
lean_inc_ref(v_c_x27_852_);
lean_inc_ref(v_c_848_);
v___x_920_ = l_Lean_mkApp4(v___x_919_, v_c_848_, v_c_x27_852_, v_h_853_, v_arg_881_);
v___x_921_ = lean_unsigned_to_nat(1u);
v___x_922_ = lean_mk_empty_array_with_capacity(v___x_921_);
v___x_923_ = lean_array_push(v___x_922_, v___x_920_);
v___x_924_ = 0;
lean_inc_ref(v_b_851_);
v___x_925_ = l_Lean_Expr_betaRev(v_b_851_, v___x_923_, v___x_924_, v___x_924_);
lean_dec_ref(v___x_923_);
v___x_926_ = l_Lean_Meta_Sym_shareCommonInc(v___x_925_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_);
if (lean_obj_tag(v___x_926_) == 0)
{
lean_object* v_a_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_939_; 
v_a_927_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_939_ == 0)
{
v___x_929_ = v___x_926_;
v_isShared_930_ = v_isSharedCheck_939_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_a_927_);
lean_dec(v___x_926_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_939_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_937_; 
v___x_931_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__10));
v___x_932_ = l_Lean_Expr_constLevels_x21(v_f_846_);
v___x_933_ = l_Lean_mkConst(v___x_931_, v___x_932_);
v___x_934_ = l_Lean_mkApp8(v___x_933_, v_00_u03b1_847_, v_c_848_, v_inst_849_, v_a_850_, v_b_851_, v_c_x27_852_, v_h_853_, v_arg_881_);
v___x_935_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_935_, 0, v_a_927_);
lean_ctor_set(v___x_935_, 1, v___x_934_);
lean_ctor_set_uint8(v___x_935_, sizeof(void*)*2, v___x_924_);
lean_ctor_set_uint8(v___x_935_, sizeof(void*)*2 + 1, v___x_924_);
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 0, v___x_935_);
v___x_937_ = v___x_929_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_935_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
lean_dec_ref(v_arg_881_);
lean_dec_ref(v_h_853_);
lean_dec_ref(v_c_x27_852_);
lean_dec_ref(v_b_851_);
lean_dec_ref(v_a_850_);
lean_dec_ref(v_inst_849_);
lean_dec_ref(v_c_848_);
lean_dec_ref(v_00_u03b1_847_);
v_a_940_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_926_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_926_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_955_; 
lean_dec_ref(v_arg_881_);
lean_dec_ref(v_fallback_855_);
lean_dec_ref(v_h_853_);
lean_dec_ref(v_c_x27_852_);
lean_dec_ref(v_b_851_);
lean_dec_ref(v_a_850_);
lean_dec_ref(v_inst_849_);
lean_dec_ref(v_c_848_);
lean_dec_ref(v_00_u03b1_847_);
v_a_948_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_955_ == 0)
{
v___x_950_ = v___x_883_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_883_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_948_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
lean_dec_ref(v_fallback_855_);
lean_dec_ref(v_h_853_);
lean_dec_ref(v_c_x27_852_);
lean_dec_ref(v_b_851_);
lean_dec_ref(v_a_850_);
lean_dec_ref(v_inst_849_);
lean_dec_ref(v_c_848_);
lean_dec_ref(v_00_u03b1_847_);
v_a_956_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_866_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_866_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___boxed(lean_object** _args){
lean_object* v_f_964_ = _args[0];
lean_object* v_00_u03b1_965_ = _args[1];
lean_object* v_c_966_ = _args[2];
lean_object* v_inst_967_ = _args[3];
lean_object* v_a_968_ = _args[4];
lean_object* v_b_969_ = _args[5];
lean_object* v_c_x27_970_ = _args[6];
lean_object* v_h_971_ = _args[7];
lean_object* v_inst_x27_972_ = _args[8];
lean_object* v_fallback_973_ = _args[9];
lean_object* v_a_974_ = _args[10];
lean_object* v_a_975_ = _args[11];
lean_object* v_a_976_ = _args[12];
lean_object* v_a_977_ = _args[13];
lean_object* v_a_978_ = _args[14];
lean_object* v_a_979_ = _args[15];
lean_object* v_a_980_ = _args[16];
lean_object* v_a_981_ = _args[17];
lean_object* v_a_982_ = _args[18];
lean_object* v_a_983_ = _args[19];
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr(v_f_964_, v_00_u03b1_965_, v_c_966_, v_inst_967_, v_a_968_, v_b_969_, v_c_x27_970_, v_h_971_, v_inst_x27_972_, v_fallback_973_, v_a_974_, v_a_975_, v_a_976_, v_a_977_, v_a_978_, v_a_979_, v_a_980_, v_a_981_, v_a_982_);
lean_dec(v_a_982_);
lean_dec_ref(v_a_981_);
lean_dec(v_a_980_);
lean_dec_ref(v_a_979_);
lean_dec(v_a_978_);
lean_dec_ref(v_a_977_);
lean_dec(v_a_976_);
lean_dec_ref(v_a_975_);
lean_dec(v_a_974_);
lean_dec_ref(v_f_964_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___lam__0(uint8_t v___x_985_, lean_object* v_inst_986_, lean_object* v___x_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v___y_994_; lean_object* v___x_1011_; uint8_t v_transparency_1012_; uint8_t v___x_1013_; 
v___x_1011_ = l_Lean_Meta_Context_config(v___y_988_);
v_transparency_1012_ = lean_ctor_get_uint8(v___x_1011_, 9);
lean_dec_ref(v___x_1011_);
v___x_1013_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1012_, v___x_985_);
if (v___x_1013_ == 0)
{
lean_object* v_keyedConfig_1014_; uint8_t v_trackZetaDelta_1015_; lean_object* v_zetaDeltaSet_1016_; lean_object* v_lctx_1017_; lean_object* v_localInstances_1018_; lean_object* v_defEqCtx_x3f_1019_; lean_object* v_synthPendingDepth_1020_; lean_object* v_customCanUnfoldPredicate_x3f_1021_; uint8_t v_univApprox_1022_; uint8_t v_inTypeClassResolution_1023_; uint8_t v_cacheInferType_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1033_; 
v_keyedConfig_1014_ = lean_ctor_get(v___y_988_, 0);
v_trackZetaDelta_1015_ = lean_ctor_get_uint8(v___y_988_, sizeof(void*)*7);
v_zetaDeltaSet_1016_ = lean_ctor_get(v___y_988_, 1);
v_lctx_1017_ = lean_ctor_get(v___y_988_, 2);
v_localInstances_1018_ = lean_ctor_get(v___y_988_, 3);
v_defEqCtx_x3f_1019_ = lean_ctor_get(v___y_988_, 4);
v_synthPendingDepth_1020_ = lean_ctor_get(v___y_988_, 5);
v_customCanUnfoldPredicate_x3f_1021_ = lean_ctor_get(v___y_988_, 6);
v_univApprox_1022_ = lean_ctor_get_uint8(v___y_988_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1023_ = lean_ctor_get_uint8(v___y_988_, sizeof(void*)*7 + 2);
v_cacheInferType_1024_ = lean_ctor_get_uint8(v___y_988_, sizeof(void*)*7 + 3);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___y_988_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1026_ = v___y_988_;
v_isShared_1027_ = v_isSharedCheck_1033_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_1021_);
lean_inc(v_synthPendingDepth_1020_);
lean_inc(v_defEqCtx_x3f_1019_);
lean_inc(v_localInstances_1018_);
lean_inc(v_lctx_1017_);
lean_inc(v_zetaDeltaSet_1016_);
lean_inc(v_keyedConfig_1014_);
lean_dec(v___y_988_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1033_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1028_; lean_object* v___x_1030_; 
v___x_1028_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_985_, v_keyedConfig_1014_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 0, v___x_1028_);
v___x_1030_ = v___x_1026_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v___x_1028_);
lean_ctor_set(v_reuseFailAlloc_1032_, 1, v_zetaDeltaSet_1016_);
lean_ctor_set(v_reuseFailAlloc_1032_, 2, v_lctx_1017_);
lean_ctor_set(v_reuseFailAlloc_1032_, 3, v_localInstances_1018_);
lean_ctor_set(v_reuseFailAlloc_1032_, 4, v_defEqCtx_x3f_1019_);
lean_ctor_set(v_reuseFailAlloc_1032_, 5, v_synthPendingDepth_1020_);
lean_ctor_set(v_reuseFailAlloc_1032_, 6, v_customCanUnfoldPredicate_x3f_1021_);
lean_ctor_set_uint8(v_reuseFailAlloc_1032_, sizeof(void*)*7, v_trackZetaDelta_1015_);
lean_ctor_set_uint8(v_reuseFailAlloc_1032_, sizeof(void*)*7 + 1, v_univApprox_1022_);
lean_ctor_set_uint8(v_reuseFailAlloc_1032_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1023_);
lean_ctor_set_uint8(v_reuseFailAlloc_1032_, sizeof(void*)*7 + 3, v_cacheInferType_1024_);
v___x_1030_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
lean_object* v___x_1031_; 
v___x_1031_ = l_Lean_Meta_project_x3f(v_inst_986_, v___x_987_, v___x_1030_, v___y_989_, v___y_990_, v___y_991_);
lean_dec_ref(v___x_1030_);
v___y_994_ = v___x_1031_;
goto v___jp_993_;
}
}
}
else
{
lean_object* v___x_1034_; 
v___x_1034_ = l_Lean_Meta_project_x3f(v_inst_986_, v___x_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
lean_dec_ref(v___y_988_);
v___y_994_ = v___x_1034_;
goto v___jp_993_;
}
v___jp_993_:
{
if (lean_obj_tag(v___y_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
v_a_995_ = lean_ctor_get(v___y_994_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___y_994_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___y_994_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___y_994_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_998_ == 0)
{
v___x_1000_ = v___x_997_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_995_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1010_; 
v_a_1003_ = lean_ctor_get(v___y_994_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v___y_994_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_1005_ = v___y_994_;
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___y_994_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1008_; 
if (v_isShared_1006_ == 0)
{
v___x_1008_ = v___x_1005_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_a_1003_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___lam__0___boxed(lean_object* v___x_1035_, lean_object* v_inst_1036_, lean_object* v___x_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
uint8_t v___x_26947__boxed_1043_; lean_object* v_res_1044_; 
v___x_26947__boxed_1043_ = lean_unbox(v___x_1035_);
v_res_1044_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___lam__0(v___x_26947__boxed_1043_, v_inst_1036_, v___x_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec(v___x_1037_);
return v_res_1044_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2(void){
_start:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1049_ = lean_box(0);
v___x_1050_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__1));
v___x_1051_ = l_Lean_mkConst(v___x_1050_, v___x_1049_);
return v___x_1051_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5(void){
_start:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = lean_unsigned_to_nat(1u);
v___x_1057_ = l_Lean_Level_ofNat(v___x_1056_);
return v___x_1057_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__6(void){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1058_ = lean_box(0);
v___x_1059_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__5);
v___x_1060_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
lean_ctor_set(v___x_1060_, 1, v___x_1058_);
return v___x_1060_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7(void){
_start:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1061_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__6, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__6_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__6);
v___x_1062_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__4));
v___x_1063_ = l_Lean_Expr_const___override(v___x_1062_, v___x_1061_);
return v___x_1063_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9(void){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1066_ = lean_box(0);
v___x_1067_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__8));
v___x_1068_ = l_Lean_mkConst(v___x_1067_, v___x_1066_);
return v___x_1068_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__12(void){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1072_ = lean_box(0);
v___x_1073_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__11));
v___x_1074_ = l_Lean_mkConst(v___x_1073_, v___x_1072_);
return v___x_1074_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__15(void){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1078_ = lean_box(0);
v___x_1079_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__14));
v___x_1080_ = l_Lean_mkConst(v___x_1079_, v___x_1078_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable(lean_object* v_f_1081_, lean_object* v_00_u03b1_1082_, lean_object* v_c_1083_, lean_object* v_inst_1084_, lean_object* v_a_1085_, lean_object* v_b_1086_, lean_object* v_fallback_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_){
_start:
{
lean_object* v___x_1098_; uint8_t v___x_1099_; lean_object* v___x_1100_; lean_object* v___f_1101_; lean_object* v___x_1102_; 
v___x_1098_ = lean_unsigned_to_nat(0u);
v___x_1099_ = 5;
v___x_1100_ = lean_box(v___x_1099_);
lean_inc_ref(v_inst_1084_);
v___f_1101_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1101_, 0, v___x_1100_);
lean_closure_set(v___f_1101_, 1, v_inst_1084_);
lean_closure_set(v___f_1101_, 2, v___x_1098_);
v___x_1102_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v___f_1101_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_a_1103_; 
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
lean_inc(v_a_1103_);
lean_dec_ref_known(v___x_1102_, 1);
if (lean_obj_tag(v_a_1103_) == 0)
{
lean_object* v___x_1104_; 
lean_inc(v_a_1096_);
lean_inc_ref(v_a_1095_);
lean_inc(v_a_1094_);
lean_inc_ref(v_a_1093_);
lean_inc(v_a_1092_);
lean_inc_ref(v_a_1091_);
lean_inc(v_a_1090_);
lean_inc_ref(v_a_1089_);
lean_inc(v_a_1088_);
lean_inc_ref(v_inst_1084_);
v___x_1104_ = lean_sym_simp(v_inst_1084_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v_a_1105_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_a_1105_);
lean_dec_ref_known(v___x_1104_, 1);
if (lean_obj_tag(v_a_1105_) == 0)
{
uint8_t v_contextDependent_1106_; lean_object* v___x_1107_; 
v_contextDependent_1106_ = lean_ctor_get_uint8(v_a_1105_, 1);
lean_dec_ref_known(v_a_1105_, 0);
lean_inc_ref(v_inst_1084_);
v___x_1107_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable(v_f_1081_, v_00_u03b1_1082_, v_c_1083_, v_inst_1084_, v_a_1085_, v_b_1086_, v_inst_1084_, v_fallback_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1107_) == 0)
{
lean_object* v_a_1108_; uint8_t v___y_1110_; 
v_a_1108_ = lean_ctor_get(v___x_1107_, 0);
if (v_contextDependent_1106_ == 0)
{
return v___x_1107_;
}
else
{
if (lean_obj_tag(v_a_1108_) == 0)
{
uint8_t v_contextDependent_1120_; 
v_contextDependent_1120_ = lean_ctor_get_uint8(v_a_1108_, 1);
v___y_1110_ = v_contextDependent_1120_;
goto v___jp_1109_;
}
else
{
uint8_t v_contextDependent_1121_; 
v_contextDependent_1121_ = lean_ctor_get_uint8(v_a_1108_, sizeof(void*)*2 + 1);
v___y_1110_ = v_contextDependent_1121_;
goto v___jp_1109_;
}
}
v___jp_1109_:
{
if (v___y_1110_ == 0)
{
lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1118_; 
lean_inc(v_a_1108_);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1107_);
if (v_isSharedCheck_1118_ == 0)
{
lean_object* v_unused_1119_; 
v_unused_1119_ = lean_ctor_get(v___x_1107_, 0);
lean_dec(v_unused_1119_);
v___x_1112_ = v___x_1107_;
v_isShared_1113_ = v_isSharedCheck_1118_;
goto v_resetjp_1111_;
}
else
{
lean_dec(v___x_1107_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1118_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1114_; lean_object* v___x_1116_; 
v___x_1114_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1108_);
if (v_isShared_1113_ == 0)
{
lean_ctor_set(v___x_1112_, 0, v___x_1114_);
v___x_1116_ = v___x_1112_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v___x_1114_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
else
{
return v___x_1107_;
}
}
}
else
{
return v___x_1107_;
}
}
else
{
lean_object* v_e_x27_1122_; uint8_t v_contextDependent_1123_; lean_object* v___x_1124_; 
v_e_x27_1122_ = lean_ctor_get(v_a_1105_, 0);
lean_inc_ref(v_e_x27_1122_);
v_contextDependent_1123_ = lean_ctor_get_uint8(v_a_1105_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1105_, 2);
v___x_1124_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable(v_f_1081_, v_00_u03b1_1082_, v_c_1083_, v_inst_1084_, v_a_1085_, v_b_1086_, v_e_x27_1122_, v_fallback_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1125_; uint8_t v___y_1127_; 
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
if (v_contextDependent_1123_ == 0)
{
return v___x_1124_;
}
else
{
if (lean_obj_tag(v_a_1125_) == 0)
{
uint8_t v_contextDependent_1137_; 
v_contextDependent_1137_ = lean_ctor_get_uint8(v_a_1125_, 1);
v___y_1127_ = v_contextDependent_1137_;
goto v___jp_1126_;
}
else
{
uint8_t v_contextDependent_1138_; 
v_contextDependent_1138_ = lean_ctor_get_uint8(v_a_1125_, sizeof(void*)*2 + 1);
v___y_1127_ = v_contextDependent_1138_;
goto v___jp_1126_;
}
}
v___jp_1126_:
{
if (v___y_1127_ == 0)
{
lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1135_; 
lean_inc(v_a_1125_);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1135_ == 0)
{
lean_object* v_unused_1136_; 
v_unused_1136_ = lean_ctor_get(v___x_1124_, 0);
lean_dec(v_unused_1136_);
v___x_1129_ = v___x_1124_;
v_isShared_1130_ = v_isSharedCheck_1135_;
goto v_resetjp_1128_;
}
else
{
lean_dec(v___x_1124_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1135_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1131_; lean_object* v___x_1133_; 
v___x_1131_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1125_);
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 0, v___x_1131_);
v___x_1133_ = v___x_1129_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v___x_1131_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
else
{
return v___x_1124_;
}
}
}
else
{
return v___x_1124_;
}
}
}
else
{
lean_dec_ref(v_fallback_1087_);
lean_dec_ref(v_b_1086_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_inst_1084_);
lean_dec_ref(v_c_1083_);
lean_dec_ref(v_00_u03b1_1082_);
return v___x_1104_;
}
}
else
{
lean_object* v_val_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v_val_1139_ = lean_ctor_get(v_a_1103_, 0);
lean_inc(v_val_1139_);
lean_dec_ref_known(v_a_1103_, 1);
v___x_1140_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2);
lean_inc_ref(v_inst_1084_);
lean_inc_ref(v_c_1083_);
v___x_1141_ = l_Lean_mkAppB(v___x_1140_, v_c_1083_, v_inst_1084_);
v___x_1142_ = l_Lean_Meta_Sym_shareCommonInc(v_val_1139_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
lean_inc_n(v_a_1143_, 3);
lean_dec_ref_known(v___x_1142_, 1);
v___x_1144_ = lean_unsigned_to_nat(1u);
v___x_1145_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7);
v___x_1146_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9);
v___x_1147_ = l_Lean_mkAppB(v___x_1145_, v___x_1146_, v_a_1143_);
lean_inc(v_a_1096_);
lean_inc_ref(v_a_1095_);
lean_inc(v_a_1094_);
lean_inc_ref(v_a_1093_);
lean_inc(v_a_1092_);
lean_inc_ref(v_a_1091_);
lean_inc(v_a_1090_);
lean_inc_ref(v_a_1089_);
lean_inc(v_a_1088_);
v___x_1148_ = lean_sym_simp(v_a_1143_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v_a_1149_; uint8_t v___x_1150_; lean_object* v_e_x27_1152_; lean_object* v_proof_1153_; uint8_t v_contextDependent_1154_; 
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
lean_inc(v_a_1149_);
lean_dec_ref_known(v___x_1148_, 1);
v___x_1150_ = 0;
if (lean_obj_tag(v_a_1149_) == 0)
{
uint8_t v_contextDependent_1245_; 
lean_dec_ref(v___x_1141_);
v_contextDependent_1245_ = lean_ctor_get_uint8(v_a_1149_, 1);
lean_dec_ref_known(v_a_1149_, 0);
v_e_x27_1152_ = v_a_1143_;
v_proof_1153_ = v___x_1147_;
v_contextDependent_1154_ = v_contextDependent_1245_;
goto v___jp_1151_;
}
else
{
lean_object* v_e_x27_1246_; lean_object* v_proof_1247_; uint8_t v_contextDependent_1248_; lean_object* v___x_1249_; 
v_e_x27_1246_ = lean_ctor_get(v_a_1149_, 0);
lean_inc_ref_n(v_e_x27_1246_, 2);
v_proof_1247_ = lean_ctor_get(v_a_1149_, 1);
lean_inc_ref(v_proof_1247_);
v_contextDependent_1248_ = lean_ctor_get_uint8(v_a_1149_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1149_, 2);
v___x_1249_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___x_1141_, v_a_1143_, v___x_1147_, v_e_x27_1246_, v_proof_1247_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1249_) == 0)
{
lean_object* v_a_1250_; 
v_a_1250_ = lean_ctor_get(v___x_1249_, 0);
lean_inc(v_a_1250_);
lean_dec_ref_known(v___x_1249_, 1);
v_e_x27_1152_ = v_e_x27_1246_;
v_proof_1153_ = v_a_1250_;
v_contextDependent_1154_ = v_contextDependent_1248_;
goto v___jp_1151_;
}
else
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1258_; 
lean_dec_ref(v_e_x27_1246_);
lean_dec_ref(v_fallback_1087_);
lean_dec_ref(v_b_1086_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_inst_1084_);
lean_dec_ref(v_c_1083_);
lean_dec_ref(v_00_u03b1_1082_);
v_a_1251_ = lean_ctor_get(v___x_1249_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1253_ = v___x_1249_;
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1249_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1256_; 
if (v_isShared_1254_ == 0)
{
v___x_1256_ = v___x_1253_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_a_1251_);
v___x_1256_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
return v___x_1256_;
}
}
}
}
v___jp_1151_:
{
lean_object* v___x_1155_; 
v___x_1155_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_x27_1152_, v_a_1094_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; uint8_t v___x_1159_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
lean_inc(v_a_1156_);
lean_dec_ref_known(v___x_1155_, 1);
v___x_1157_ = l_Lean_Expr_cleanupAnnotations(v_a_1156_);
lean_dec(v_a_1156_);
v___x_1158_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__4));
v___x_1159_ = l_Lean_Expr_isConstOf(v___x_1157_, v___x_1158_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; uint8_t v___x_1161_; 
v___x_1160_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__6));
v___x_1161_ = l_Lean_Expr_isConstOf(v___x_1157_, v___x_1160_);
lean_dec_ref(v___x_1157_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; 
lean_dec_ref(v_proof_1153_);
lean_dec_ref(v_b_1086_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_inst_1084_);
lean_dec_ref(v_c_1083_);
lean_dec_ref(v_00_u03b1_1082_);
lean_inc(v_a_1096_);
lean_inc_ref(v_a_1095_);
lean_inc(v_a_1094_);
lean_inc_ref(v_a_1093_);
lean_inc(v_a_1092_);
lean_inc_ref(v_a_1091_);
lean_inc(v_a_1090_);
lean_inc_ref(v_a_1089_);
lean_inc(v_a_1088_);
v___x_1162_ = lean_apply_10(v_fallback_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_, lean_box(0));
return v___x_1162_;
}
else
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
lean_dec_ref(v_fallback_1087_);
v___x_1163_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__12, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__12_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__12);
lean_inc_ref(v_inst_1084_);
lean_inc_ref(v_c_1083_);
v___x_1164_ = l_Lean_mkApp3(v___x_1163_, v_c_1083_, v_inst_1084_, v_proof_1153_);
v___x_1165_ = l_Lean_Meta_Sym_shareCommon(v___x_1164_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1165_) == 0)
{
lean_object* v_a_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v_a_1166_ = lean_ctor_get(v___x_1165_, 0);
lean_inc_n(v_a_1166_, 2);
lean_dec_ref_known(v___x_1165_, 1);
v___x_1167_ = lean_mk_empty_array_with_capacity(v___x_1144_);
v___x_1168_ = lean_array_push(v___x_1167_, v_a_1166_);
lean_inc_ref(v_a_1085_);
v___x_1169_ = l_Lean_Expr_betaRev(v_a_1085_, v___x_1168_, v___x_1150_, v___x_1150_);
lean_dec_ref(v___x_1168_);
v___x_1170_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1169_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1170_) == 0)
{
lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1183_; 
v_a_1171_ = lean_ctor_get(v___x_1170_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1170_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1173_ = v___x_1170_;
v_isShared_1174_ = v_isSharedCheck_1183_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_a_1171_);
lean_dec(v___x_1170_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1183_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1181_; 
v___x_1175_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__8));
v___x_1176_ = l_Lean_Expr_constLevels_x21(v_f_1081_);
v___x_1177_ = l_Lean_mkConst(v___x_1175_, v___x_1176_);
v___x_1178_ = l_Lean_mkApp6(v___x_1177_, v_00_u03b1_1082_, v_c_1083_, v_inst_1084_, v_a_1085_, v_b_1086_, v_a_1166_);
v___x_1179_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1179_, 0, v_a_1171_);
lean_ctor_set(v___x_1179_, 1, v___x_1178_);
lean_ctor_set_uint8(v___x_1179_, sizeof(void*)*2, v___x_1150_);
lean_ctor_set_uint8(v___x_1179_, sizeof(void*)*2 + 1, v_contextDependent_1154_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 0, v___x_1179_);
v___x_1181_ = v___x_1173_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v___x_1179_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
else
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1191_; 
lean_dec(v_a_1166_);
lean_dec_ref(v_b_1086_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_inst_1084_);
lean_dec_ref(v_c_1083_);
lean_dec_ref(v_00_u03b1_1082_);
v_a_1184_ = lean_ctor_get(v___x_1170_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1170_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1186_ = v___x_1170_;
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v___x_1170_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1189_; 
if (v_isShared_1187_ == 0)
{
v___x_1189_ = v___x_1186_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_a_1184_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
lean_dec_ref(v_b_1086_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_inst_1084_);
lean_dec_ref(v_c_1083_);
lean_dec_ref(v_00_u03b1_1082_);
v_a_1192_ = lean_ctor_get(v___x_1165_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1165_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1165_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1165_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
}
else
{
lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
lean_dec_ref(v___x_1157_);
lean_dec_ref(v_fallback_1087_);
v___x_1200_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__15, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__15_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__15);
lean_inc_ref(v_inst_1084_);
lean_inc_ref(v_c_1083_);
v___x_1201_ = l_Lean_mkApp3(v___x_1200_, v_c_1083_, v_inst_1084_, v_proof_1153_);
v___x_1202_ = l_Lean_Meta_Sym_shareCommon(v___x_1201_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1202_) == 0)
{
lean_object* v_a_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
lean_inc_n(v_a_1203_, 2);
lean_dec_ref_known(v___x_1202_, 1);
v___x_1204_ = lean_mk_empty_array_with_capacity(v___x_1144_);
v___x_1205_ = lean_array_push(v___x_1204_, v_a_1203_);
lean_inc_ref(v_b_1086_);
v___x_1206_ = l_Lean_Expr_betaRev(v_b_1086_, v___x_1205_, v___x_1150_, v___x_1150_);
lean_dec_ref(v___x_1205_);
v___x_1207_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1206_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_object* v_a_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1220_; 
v_a_1208_ = lean_ctor_get(v___x_1207_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1207_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1210_ = v___x_1207_;
v_isShared_1211_ = v_isSharedCheck_1220_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_a_1208_);
lean_dec(v___x_1207_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1220_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1218_; 
v___x_1212_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__10));
v___x_1213_ = l_Lean_Expr_constLevels_x21(v_f_1081_);
v___x_1214_ = l_Lean_mkConst(v___x_1212_, v___x_1213_);
v___x_1215_ = l_Lean_mkApp6(v___x_1214_, v_00_u03b1_1082_, v_c_1083_, v_inst_1084_, v_a_1085_, v_b_1086_, v_a_1203_);
v___x_1216_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1216_, 0, v_a_1208_);
lean_ctor_set(v___x_1216_, 1, v___x_1215_);
lean_ctor_set_uint8(v___x_1216_, sizeof(void*)*2, v___x_1150_);
lean_ctor_set_uint8(v___x_1216_, sizeof(void*)*2 + 1, v_contextDependent_1154_);
if (v_isShared_1211_ == 0)
{
lean_ctor_set(v___x_1210_, 0, v___x_1216_);
v___x_1218_ = v___x_1210_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v___x_1216_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
else
{
lean_object* v_a_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1228_; 
lean_dec(v_a_1203_);
lean_dec_ref(v_b_1086_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_inst_1084_);
lean_dec_ref(v_c_1083_);
lean_dec_ref(v_00_u03b1_1082_);
v_a_1221_ = lean_ctor_get(v___x_1207_, 0);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1207_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1223_ = v___x_1207_;
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_a_1221_);
lean_dec(v___x_1207_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_a_1221_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
}
else
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1236_; 
lean_dec_ref(v_b_1086_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_inst_1084_);
lean_dec_ref(v_c_1083_);
lean_dec_ref(v_00_u03b1_1082_);
v_a_1229_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1231_ = v___x_1202_;
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1202_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1234_; 
if (v_isShared_1232_ == 0)
{
v___x_1234_ = v___x_1231_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_a_1229_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
}
}
}
}
}
else
{
lean_object* v_a_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1244_; 
lean_dec_ref(v_proof_1153_);
lean_dec_ref(v_fallback_1087_);
lean_dec_ref(v_b_1086_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_inst_1084_);
lean_dec_ref(v_c_1083_);
lean_dec_ref(v_00_u03b1_1082_);
v_a_1237_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1239_ = v___x_1155_;
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_a_1237_);
lean_dec(v___x_1155_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
if (v_isShared_1240_ == 0)
{
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_a_1237_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1147_);
lean_dec(v_a_1143_);
lean_dec_ref(v___x_1141_);
lean_dec_ref(v_fallback_1087_);
lean_dec_ref(v_b_1086_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_inst_1084_);
lean_dec_ref(v_c_1083_);
lean_dec_ref(v_00_u03b1_1082_);
return v___x_1148_;
}
}
else
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1266_; 
lean_dec_ref(v___x_1141_);
lean_dec_ref(v_fallback_1087_);
lean_dec_ref(v_b_1086_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_inst_1084_);
lean_dec_ref(v_c_1083_);
lean_dec_ref(v_00_u03b1_1082_);
v_a_1259_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1261_ = v___x_1142_;
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v___x_1142_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1264_; 
if (v_isShared_1262_ == 0)
{
v___x_1264_ = v___x_1261_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_a_1259_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
}
}
else
{
lean_object* v_a_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1274_; 
lean_dec_ref(v_fallback_1087_);
lean_dec_ref(v_b_1086_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_inst_1084_);
lean_dec_ref(v_c_1083_);
lean_dec_ref(v_00_u03b1_1082_);
v_a_1267_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1269_ = v___x_1102_;
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_a_1267_);
lean_dec(v___x_1102_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1272_; 
if (v_isShared_1270_ == 0)
{
v___x_1272_ = v___x_1269_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_a_1267_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___boxed(lean_object** _args){
lean_object* v_f_1275_ = _args[0];
lean_object* v_00_u03b1_1276_ = _args[1];
lean_object* v_c_1277_ = _args[2];
lean_object* v_inst_1278_ = _args[3];
lean_object* v_a_1279_ = _args[4];
lean_object* v_b_1280_ = _args[5];
lean_object* v_fallback_1281_ = _args[6];
lean_object* v_a_1282_ = _args[7];
lean_object* v_a_1283_ = _args[8];
lean_object* v_a_1284_ = _args[9];
lean_object* v_a_1285_ = _args[10];
lean_object* v_a_1286_ = _args[11];
lean_object* v_a_1287_ = _args[12];
lean_object* v_a_1288_ = _args[13];
lean_object* v_a_1289_ = _args[14];
lean_object* v_a_1290_ = _args[15];
lean_object* v_a_1291_ = _args[16];
_start:
{
lean_object* v_res_1292_; 
v_res_1292_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable(v_f_1275_, v_00_u03b1_1276_, v_c_1277_, v_inst_1278_, v_a_1279_, v_b_1280_, v_fallback_1281_, v_a_1282_, v_a_1283_, v_a_1284_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_);
lean_dec(v_a_1290_);
lean_dec_ref(v_a_1289_);
lean_dec(v_a_1288_);
lean_dec_ref(v_a_1287_);
lean_dec(v_a_1286_);
lean_dec_ref(v_a_1285_);
lean_dec(v_a_1284_);
lean_dec_ref(v_a_1283_);
lean_dec(v_a_1282_);
lean_dec_ref(v_f_1275_);
return v_res_1292_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr___lam__0(uint8_t v___x_1293_, lean_object* v_inst_x27_1294_, lean_object* v___x_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_){
_start:
{
lean_object* v___y_1302_; lean_object* v___x_1319_; uint8_t v_transparency_1320_; uint8_t v___x_1321_; 
v___x_1319_ = l_Lean_Meta_Context_config(v___y_1296_);
v_transparency_1320_ = lean_ctor_get_uint8(v___x_1319_, 9);
lean_dec_ref(v___x_1319_);
v___x_1321_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1320_, v___x_1293_);
if (v___x_1321_ == 0)
{
lean_object* v_keyedConfig_1322_; uint8_t v_trackZetaDelta_1323_; lean_object* v_zetaDeltaSet_1324_; lean_object* v_lctx_1325_; lean_object* v_localInstances_1326_; lean_object* v_defEqCtx_x3f_1327_; lean_object* v_synthPendingDepth_1328_; lean_object* v_customCanUnfoldPredicate_x3f_1329_; uint8_t v_univApprox_1330_; uint8_t v_inTypeClassResolution_1331_; uint8_t v_cacheInferType_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1341_; 
v_keyedConfig_1322_ = lean_ctor_get(v___y_1296_, 0);
v_trackZetaDelta_1323_ = lean_ctor_get_uint8(v___y_1296_, sizeof(void*)*7);
v_zetaDeltaSet_1324_ = lean_ctor_get(v___y_1296_, 1);
v_lctx_1325_ = lean_ctor_get(v___y_1296_, 2);
v_localInstances_1326_ = lean_ctor_get(v___y_1296_, 3);
v_defEqCtx_x3f_1327_ = lean_ctor_get(v___y_1296_, 4);
v_synthPendingDepth_1328_ = lean_ctor_get(v___y_1296_, 5);
v_customCanUnfoldPredicate_x3f_1329_ = lean_ctor_get(v___y_1296_, 6);
v_univApprox_1330_ = lean_ctor_get_uint8(v___y_1296_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1331_ = lean_ctor_get_uint8(v___y_1296_, sizeof(void*)*7 + 2);
v_cacheInferType_1332_ = lean_ctor_get_uint8(v___y_1296_, sizeof(void*)*7 + 3);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___y_1296_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1334_ = v___y_1296_;
v_isShared_1335_ = v_isSharedCheck_1341_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_1329_);
lean_inc(v_synthPendingDepth_1328_);
lean_inc(v_defEqCtx_x3f_1327_);
lean_inc(v_localInstances_1326_);
lean_inc(v_lctx_1325_);
lean_inc(v_zetaDeltaSet_1324_);
lean_inc(v_keyedConfig_1322_);
lean_dec(v___y_1296_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1341_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___x_1336_; lean_object* v___x_1338_; 
v___x_1336_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1293_, v_keyedConfig_1322_);
if (v_isShared_1335_ == 0)
{
lean_ctor_set(v___x_1334_, 0, v___x_1336_);
v___x_1338_ = v___x_1334_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v___x_1336_);
lean_ctor_set(v_reuseFailAlloc_1340_, 1, v_zetaDeltaSet_1324_);
lean_ctor_set(v_reuseFailAlloc_1340_, 2, v_lctx_1325_);
lean_ctor_set(v_reuseFailAlloc_1340_, 3, v_localInstances_1326_);
lean_ctor_set(v_reuseFailAlloc_1340_, 4, v_defEqCtx_x3f_1327_);
lean_ctor_set(v_reuseFailAlloc_1340_, 5, v_synthPendingDepth_1328_);
lean_ctor_set(v_reuseFailAlloc_1340_, 6, v_customCanUnfoldPredicate_x3f_1329_);
lean_ctor_set_uint8(v_reuseFailAlloc_1340_, sizeof(void*)*7, v_trackZetaDelta_1323_);
lean_ctor_set_uint8(v_reuseFailAlloc_1340_, sizeof(void*)*7 + 1, v_univApprox_1330_);
lean_ctor_set_uint8(v_reuseFailAlloc_1340_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1331_);
lean_ctor_set_uint8(v_reuseFailAlloc_1340_, sizeof(void*)*7 + 3, v_cacheInferType_1332_);
v___x_1338_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
lean_object* v___x_1339_; 
v___x_1339_ = l_Lean_Meta_project_x3f(v_inst_x27_1294_, v___x_1295_, v___x_1338_, v___y_1297_, v___y_1298_, v___y_1299_);
lean_dec_ref(v___x_1338_);
v___y_1302_ = v___x_1339_;
goto v___jp_1301_;
}
}
}
else
{
lean_object* v___x_1342_; 
v___x_1342_ = l_Lean_Meta_project_x3f(v_inst_x27_1294_, v___x_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_);
lean_dec_ref(v___y_1296_);
v___y_1302_ = v___x_1342_;
goto v___jp_1301_;
}
v___jp_1301_:
{
if (lean_obj_tag(v___y_1302_) == 0)
{
lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1310_; 
v_a_1303_ = lean_ctor_get(v___y_1302_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___y_1302_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1305_ = v___y_1302_;
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_dec(v___y_1302_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_a_1303_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
else
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1318_; 
v_a_1311_ = lean_ctor_get(v___y_1302_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___y_1302_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1313_ = v___y_1302_;
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___y_1302_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1316_; 
if (v_isShared_1314_ == 0)
{
v___x_1316_ = v___x_1313_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_a_1311_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr___lam__0___boxed(lean_object* v___x_1343_, lean_object* v_inst_x27_1344_, lean_object* v___x_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_){
_start:
{
uint8_t v___x_28291__boxed_1351_; lean_object* v_res_1352_; 
v___x_28291__boxed_1351_ = lean_unbox(v___x_1343_);
v_res_1352_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr___lam__0(v___x_28291__boxed_1351_, v_inst_x27_1344_, v___x_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
lean_dec(v___y_1347_);
lean_dec(v___x_1345_);
return v_res_1352_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr(lean_object* v_f_1353_, lean_object* v_00_u03b1_1354_, lean_object* v_c_1355_, lean_object* v_inst_1356_, lean_object* v_a_1357_, lean_object* v_b_1358_, lean_object* v_c_x27_1359_, lean_object* v_h_1360_, lean_object* v_inst_x27_1361_, lean_object* v_fallback_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_){
_start:
{
lean_object* v___x_1373_; uint8_t v___x_1374_; lean_object* v___x_1375_; lean_object* v___f_1376_; lean_object* v___x_1377_; 
v___x_1373_ = lean_unsigned_to_nat(0u);
v___x_1374_ = 5;
v___x_1375_ = lean_box(v___x_1374_);
lean_inc_ref(v_inst_x27_1361_);
v___f_1376_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1376_, 0, v___x_1375_);
lean_closure_set(v___f_1376_, 1, v_inst_x27_1361_);
lean_closure_set(v___f_1376_, 2, v___x_1373_);
v___x_1377_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v___f_1376_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v_a_1378_; 
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
lean_inc(v_a_1378_);
lean_dec_ref_known(v___x_1377_, 1);
if (lean_obj_tag(v_a_1378_) == 0)
{
lean_object* v___x_1379_; 
lean_inc(v_a_1371_);
lean_inc_ref(v_a_1370_);
lean_inc(v_a_1369_);
lean_inc_ref(v_a_1368_);
lean_inc(v_a_1367_);
lean_inc_ref(v_a_1366_);
lean_inc(v_a_1365_);
lean_inc_ref(v_a_1364_);
lean_inc(v_a_1363_);
lean_inc_ref(v_inst_x27_1361_);
v___x_1379_ = lean_sym_simp(v_inst_x27_1361_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1379_) == 0)
{
lean_object* v_a_1380_; 
v_a_1380_ = lean_ctor_get(v___x_1379_, 0);
lean_inc(v_a_1380_);
lean_dec_ref_known(v___x_1379_, 1);
if (lean_obj_tag(v_a_1380_) == 0)
{
uint8_t v_contextDependent_1381_; lean_object* v___x_1382_; 
v_contextDependent_1381_ = lean_ctor_get_uint8(v_a_1380_, 1);
lean_dec_ref_known(v_a_1380_, 0);
v___x_1382_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr(v_f_1353_, v_00_u03b1_1354_, v_c_1355_, v_inst_1356_, v_a_1357_, v_b_1358_, v_c_x27_1359_, v_h_1360_, v_inst_x27_1361_, v_fallback_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1382_) == 0)
{
lean_object* v_a_1383_; uint8_t v___y_1385_; 
v_a_1383_ = lean_ctor_get(v___x_1382_, 0);
if (v_contextDependent_1381_ == 0)
{
return v___x_1382_;
}
else
{
if (lean_obj_tag(v_a_1383_) == 0)
{
uint8_t v_contextDependent_1395_; 
v_contextDependent_1395_ = lean_ctor_get_uint8(v_a_1383_, 1);
v___y_1385_ = v_contextDependent_1395_;
goto v___jp_1384_;
}
else
{
uint8_t v_contextDependent_1396_; 
v_contextDependent_1396_ = lean_ctor_get_uint8(v_a_1383_, sizeof(void*)*2 + 1);
v___y_1385_ = v_contextDependent_1396_;
goto v___jp_1384_;
}
}
v___jp_1384_:
{
if (v___y_1385_ == 0)
{
lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1393_; 
lean_inc(v_a_1383_);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1393_ == 0)
{
lean_object* v_unused_1394_; 
v_unused_1394_ = lean_ctor_get(v___x_1382_, 0);
lean_dec(v_unused_1394_);
v___x_1387_ = v___x_1382_;
v_isShared_1388_ = v_isSharedCheck_1393_;
goto v_resetjp_1386_;
}
else
{
lean_dec(v___x_1382_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1393_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1389_; lean_object* v___x_1391_; 
v___x_1389_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1383_);
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 0, v___x_1389_);
v___x_1391_ = v___x_1387_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v___x_1389_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
}
else
{
return v___x_1382_;
}
}
}
else
{
return v___x_1382_;
}
}
else
{
lean_object* v_e_x27_1397_; uint8_t v_contextDependent_1398_; lean_object* v___x_1399_; 
lean_dec_ref(v_inst_x27_1361_);
v_e_x27_1397_ = lean_ctor_get(v_a_1380_, 0);
lean_inc_ref(v_e_x27_1397_);
v_contextDependent_1398_ = lean_ctor_get_uint8(v_a_1380_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1380_, 2);
v___x_1399_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr(v_f_1353_, v_00_u03b1_1354_, v_c_1355_, v_inst_1356_, v_a_1357_, v_b_1358_, v_c_x27_1359_, v_h_1360_, v_e_x27_1397_, v_fallback_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1399_) == 0)
{
lean_object* v_a_1400_; uint8_t v___y_1402_; 
v_a_1400_ = lean_ctor_get(v___x_1399_, 0);
if (v_contextDependent_1398_ == 0)
{
return v___x_1399_;
}
else
{
if (lean_obj_tag(v_a_1400_) == 0)
{
uint8_t v_contextDependent_1412_; 
v_contextDependent_1412_ = lean_ctor_get_uint8(v_a_1400_, 1);
v___y_1402_ = v_contextDependent_1412_;
goto v___jp_1401_;
}
else
{
uint8_t v_contextDependent_1413_; 
v_contextDependent_1413_ = lean_ctor_get_uint8(v_a_1400_, sizeof(void*)*2 + 1);
v___y_1402_ = v_contextDependent_1413_;
goto v___jp_1401_;
}
}
v___jp_1401_:
{
if (v___y_1402_ == 0)
{
lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1410_; 
lean_inc(v_a_1400_);
v_isSharedCheck_1410_ = !lean_is_exclusive(v___x_1399_);
if (v_isSharedCheck_1410_ == 0)
{
lean_object* v_unused_1411_; 
v_unused_1411_ = lean_ctor_get(v___x_1399_, 0);
lean_dec(v_unused_1411_);
v___x_1404_ = v___x_1399_;
v_isShared_1405_ = v_isSharedCheck_1410_;
goto v_resetjp_1403_;
}
else
{
lean_dec(v___x_1399_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1410_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v___x_1406_; lean_object* v___x_1408_; 
v___x_1406_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1400_);
if (v_isShared_1405_ == 0)
{
lean_ctor_set(v___x_1404_, 0, v___x_1406_);
v___x_1408_ = v___x_1404_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v___x_1406_);
v___x_1408_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
return v___x_1408_;
}
}
}
else
{
return v___x_1399_;
}
}
}
else
{
return v___x_1399_;
}
}
}
else
{
lean_dec_ref(v_fallback_1362_);
lean_dec_ref(v_inst_x27_1361_);
lean_dec_ref(v_h_1360_);
lean_dec_ref(v_c_x27_1359_);
lean_dec_ref(v_b_1358_);
lean_dec_ref(v_a_1357_);
lean_dec_ref(v_inst_1356_);
lean_dec_ref(v_c_1355_);
lean_dec_ref(v_00_u03b1_1354_);
return v___x_1379_;
}
}
else
{
lean_object* v_val_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
v_val_1414_ = lean_ctor_get(v_a_1378_, 0);
lean_inc(v_val_1414_);
lean_dec_ref_known(v_a_1378_, 1);
v___x_1415_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__2);
lean_inc_ref(v_inst_x27_1361_);
lean_inc_ref(v_c_x27_1359_);
v___x_1416_ = l_Lean_mkAppB(v___x_1415_, v_c_x27_1359_, v_inst_x27_1361_);
v___x_1417_ = l_Lean_Meta_Sym_shareCommonInc(v_val_1414_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_a_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
v_a_1418_ = lean_ctor_get(v___x_1417_, 0);
lean_inc_n(v_a_1418_, 3);
lean_dec_ref_known(v___x_1417_, 1);
v___x_1419_ = lean_unsigned_to_nat(1u);
v___x_1420_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7);
v___x_1421_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9);
v___x_1422_ = l_Lean_mkAppB(v___x_1420_, v___x_1421_, v_a_1418_);
lean_inc(v_a_1371_);
lean_inc_ref(v_a_1370_);
lean_inc(v_a_1369_);
lean_inc_ref(v_a_1368_);
lean_inc(v_a_1367_);
lean_inc_ref(v_a_1366_);
lean_inc(v_a_1365_);
lean_inc_ref(v_a_1364_);
lean_inc(v_a_1363_);
v___x_1423_ = lean_sym_simp(v_a_1418_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v_a_1424_; uint8_t v___x_1425_; lean_object* v_e_x27_1427_; lean_object* v_proof_1428_; uint8_t v_contextDependent_1429_; 
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
lean_inc(v_a_1424_);
lean_dec_ref_known(v___x_1423_, 1);
v___x_1425_ = 0;
if (lean_obj_tag(v_a_1424_) == 0)
{
uint8_t v_contextDependent_1524_; 
lean_dec_ref(v___x_1416_);
v_contextDependent_1524_ = lean_ctor_get_uint8(v_a_1424_, 1);
lean_dec_ref_known(v_a_1424_, 0);
v_e_x27_1427_ = v_a_1418_;
v_proof_1428_ = v___x_1422_;
v_contextDependent_1429_ = v_contextDependent_1524_;
goto v___jp_1426_;
}
else
{
lean_object* v_e_x27_1525_; lean_object* v_proof_1526_; uint8_t v_contextDependent_1527_; lean_object* v___x_1528_; 
v_e_x27_1525_ = lean_ctor_get(v_a_1424_, 0);
lean_inc_ref_n(v_e_x27_1525_, 2);
v_proof_1526_ = lean_ctor_get(v_a_1424_, 1);
lean_inc_ref(v_proof_1526_);
v_contextDependent_1527_ = lean_ctor_get_uint8(v_a_1424_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1424_, 2);
v___x_1528_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___x_1416_, v_a_1418_, v___x_1422_, v_e_x27_1525_, v_proof_1526_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1528_) == 0)
{
lean_object* v_a_1529_; 
v_a_1529_ = lean_ctor_get(v___x_1528_, 0);
lean_inc(v_a_1529_);
lean_dec_ref_known(v___x_1528_, 1);
v_e_x27_1427_ = v_e_x27_1525_;
v_proof_1428_ = v_a_1529_;
v_contextDependent_1429_ = v_contextDependent_1527_;
goto v___jp_1426_;
}
else
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1537_; 
lean_dec_ref(v_e_x27_1525_);
lean_dec_ref(v_fallback_1362_);
lean_dec_ref(v_inst_x27_1361_);
lean_dec_ref(v_h_1360_);
lean_dec_ref(v_c_x27_1359_);
lean_dec_ref(v_b_1358_);
lean_dec_ref(v_a_1357_);
lean_dec_ref(v_inst_1356_);
lean_dec_ref(v_c_1355_);
lean_dec_ref(v_00_u03b1_1354_);
v_a_1530_ = lean_ctor_get(v___x_1528_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1528_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1532_ = v___x_1528_;
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v___x_1528_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___x_1535_; 
if (v_isShared_1533_ == 0)
{
v___x_1535_ = v___x_1532_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_a_1530_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
}
v___jp_1426_:
{
lean_object* v___x_1430_; 
v___x_1430_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_x27_1427_, v_a_1369_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v_a_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; uint8_t v___x_1434_; 
v_a_1431_ = lean_ctor_get(v___x_1430_, 0);
lean_inc(v_a_1431_);
lean_dec_ref_known(v___x_1430_, 1);
v___x_1432_ = l_Lean_Expr_cleanupAnnotations(v_a_1431_);
lean_dec(v_a_1431_);
v___x_1433_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__4));
v___x_1434_ = l_Lean_Expr_isConstOf(v___x_1432_, v___x_1433_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; uint8_t v___x_1436_; 
v___x_1435_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__6));
v___x_1436_ = l_Lean_Expr_isConstOf(v___x_1432_, v___x_1435_);
lean_dec_ref(v___x_1432_);
if (v___x_1436_ == 0)
{
lean_object* v___x_1437_; 
lean_dec_ref(v_proof_1428_);
lean_dec_ref(v_inst_x27_1361_);
lean_dec_ref(v_h_1360_);
lean_dec_ref(v_c_x27_1359_);
lean_dec_ref(v_b_1358_);
lean_dec_ref(v_a_1357_);
lean_dec_ref(v_inst_1356_);
lean_dec_ref(v_c_1355_);
lean_dec_ref(v_00_u03b1_1354_);
lean_inc(v_a_1371_);
lean_inc_ref(v_a_1370_);
lean_inc(v_a_1369_);
lean_inc_ref(v_a_1368_);
lean_inc(v_a_1367_);
lean_inc_ref(v_a_1366_);
lean_inc(v_a_1365_);
lean_inc_ref(v_a_1364_);
lean_inc(v_a_1363_);
v___x_1437_ = lean_apply_10(v_fallback_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_, lean_box(0));
return v___x_1437_;
}
else
{
lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
lean_dec_ref(v_fallback_1362_);
v___x_1438_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__12, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__12_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__12);
lean_inc_ref(v_c_x27_1359_);
v___x_1439_ = l_Lean_mkApp3(v___x_1438_, v_c_x27_1359_, v_inst_x27_1361_, v_proof_1428_);
v___x_1440_ = l_Lean_Meta_Sym_shareCommon(v___x_1439_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc_n(v_a_1441_, 2);
lean_dec_ref_known(v___x_1440_, 1);
v___x_1442_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3);
lean_inc_ref(v_h_1360_);
lean_inc_ref(v_c_x27_1359_);
lean_inc_ref(v_c_1355_);
v___x_1443_ = l_Lean_mkApp4(v___x_1442_, v_c_1355_, v_c_x27_1359_, v_h_1360_, v_a_1441_);
v___x_1444_ = lean_mk_empty_array_with_capacity(v___x_1419_);
v___x_1445_ = lean_array_push(v___x_1444_, v___x_1443_);
lean_inc_ref(v_a_1357_);
v___x_1446_ = l_Lean_Expr_betaRev(v_a_1357_, v___x_1445_, v___x_1425_, v___x_1425_);
lean_dec_ref(v___x_1445_);
v___x_1447_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1446_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1447_) == 0)
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1460_; 
v_a_1448_ = lean_ctor_get(v___x_1447_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1450_ = v___x_1447_;
v_isShared_1451_ = v_isSharedCheck_1460_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1447_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1460_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1458_; 
v___x_1452_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__5));
v___x_1453_ = l_Lean_Expr_constLevels_x21(v_f_1353_);
v___x_1454_ = l_Lean_mkConst(v___x_1452_, v___x_1453_);
v___x_1455_ = l_Lean_mkApp8(v___x_1454_, v_00_u03b1_1354_, v_c_1355_, v_inst_1356_, v_a_1357_, v_b_1358_, v_c_x27_1359_, v_h_1360_, v_a_1441_);
v___x_1456_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1456_, 0, v_a_1448_);
lean_ctor_set(v___x_1456_, 1, v___x_1455_);
lean_ctor_set_uint8(v___x_1456_, sizeof(void*)*2, v___x_1425_);
lean_ctor_set_uint8(v___x_1456_, sizeof(void*)*2 + 1, v_contextDependent_1429_);
if (v_isShared_1451_ == 0)
{
lean_ctor_set(v___x_1450_, 0, v___x_1456_);
v___x_1458_ = v___x_1450_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v___x_1456_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
else
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
lean_dec(v_a_1441_);
lean_dec_ref(v_h_1360_);
lean_dec_ref(v_c_x27_1359_);
lean_dec_ref(v_b_1358_);
lean_dec_ref(v_a_1357_);
lean_dec_ref(v_inst_1356_);
lean_dec_ref(v_c_1355_);
lean_dec_ref(v_00_u03b1_1354_);
v_a_1461_ = lean_ctor_get(v___x_1447_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1447_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1447_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1476_; 
lean_dec_ref(v_h_1360_);
lean_dec_ref(v_c_x27_1359_);
lean_dec_ref(v_b_1358_);
lean_dec_ref(v_a_1357_);
lean_dec_ref(v_inst_1356_);
lean_dec_ref(v_c_1355_);
lean_dec_ref(v_00_u03b1_1354_);
v_a_1469_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1471_ = v___x_1440_;
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1440_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1474_; 
if (v_isShared_1472_ == 0)
{
v___x_1474_ = v___x_1471_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_a_1469_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
}
}
}
else
{
lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
lean_dec_ref(v___x_1432_);
lean_dec_ref(v_fallback_1362_);
v___x_1477_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__15, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__15_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__15);
lean_inc_ref(v_c_x27_1359_);
v___x_1478_ = l_Lean_mkApp3(v___x_1477_, v_c_x27_1359_, v_inst_x27_1361_, v_proof_1428_);
v___x_1479_ = l_Lean_Meta_Sym_shareCommon(v___x_1478_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1479_) == 0)
{
lean_object* v_a_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; 
v_a_1480_ = lean_ctor_get(v___x_1479_, 0);
lean_inc_n(v_a_1480_, 2);
lean_dec_ref_known(v___x_1479_, 1);
v___x_1481_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8);
lean_inc_ref(v_h_1360_);
lean_inc_ref(v_c_x27_1359_);
lean_inc_ref(v_c_1355_);
v___x_1482_ = l_Lean_mkApp4(v___x_1481_, v_c_1355_, v_c_x27_1359_, v_h_1360_, v_a_1480_);
v___x_1483_ = lean_mk_empty_array_with_capacity(v___x_1419_);
v___x_1484_ = lean_array_push(v___x_1483_, v___x_1482_);
lean_inc_ref(v_b_1358_);
v___x_1485_ = l_Lean_Expr_betaRev(v_b_1358_, v___x_1484_, v___x_1425_, v___x_1425_);
lean_dec_ref(v___x_1484_);
v___x_1486_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1485_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1499_; 
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1489_ = v___x_1486_;
v_isShared_1490_ = v_isSharedCheck_1499_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1486_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1499_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1497_; 
v___x_1491_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__10));
v___x_1492_ = l_Lean_Expr_constLevels_x21(v_f_1353_);
v___x_1493_ = l_Lean_mkConst(v___x_1491_, v___x_1492_);
v___x_1494_ = l_Lean_mkApp8(v___x_1493_, v_00_u03b1_1354_, v_c_1355_, v_inst_1356_, v_a_1357_, v_b_1358_, v_c_x27_1359_, v_h_1360_, v_a_1480_);
v___x_1495_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1495_, 0, v_a_1487_);
lean_ctor_set(v___x_1495_, 1, v___x_1494_);
lean_ctor_set_uint8(v___x_1495_, sizeof(void*)*2, v___x_1425_);
lean_ctor_set_uint8(v___x_1495_, sizeof(void*)*2 + 1, v_contextDependent_1429_);
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 0, v___x_1495_);
v___x_1497_ = v___x_1489_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v___x_1495_);
v___x_1497_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
return v___x_1497_;
}
}
}
else
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1507_; 
lean_dec(v_a_1480_);
lean_dec_ref(v_h_1360_);
lean_dec_ref(v_c_x27_1359_);
lean_dec_ref(v_b_1358_);
lean_dec_ref(v_a_1357_);
lean_dec_ref(v_inst_1356_);
lean_dec_ref(v_c_1355_);
lean_dec_ref(v_00_u03b1_1354_);
v_a_1500_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1502_ = v___x_1486_;
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1486_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1505_; 
if (v_isShared_1503_ == 0)
{
v___x_1505_ = v___x_1502_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v_a_1500_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
}
}
else
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1515_; 
lean_dec_ref(v_h_1360_);
lean_dec_ref(v_c_x27_1359_);
lean_dec_ref(v_b_1358_);
lean_dec_ref(v_a_1357_);
lean_dec_ref(v_inst_1356_);
lean_dec_ref(v_c_1355_);
lean_dec_ref(v_00_u03b1_1354_);
v_a_1508_ = lean_ctor_get(v___x_1479_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1510_ = v___x_1479_;
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1479_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1513_; 
if (v_isShared_1511_ == 0)
{
v___x_1513_ = v___x_1510_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_a_1508_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
}
else
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1523_; 
lean_dec_ref(v_proof_1428_);
lean_dec_ref(v_fallback_1362_);
lean_dec_ref(v_inst_x27_1361_);
lean_dec_ref(v_h_1360_);
lean_dec_ref(v_c_x27_1359_);
lean_dec_ref(v_b_1358_);
lean_dec_ref(v_a_1357_);
lean_dec_ref(v_inst_1356_);
lean_dec_ref(v_c_1355_);
lean_dec_ref(v_00_u03b1_1354_);
v_a_1516_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1518_ = v___x_1430_;
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v___x_1430_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1521_; 
if (v_isShared_1519_ == 0)
{
v___x_1521_ = v___x_1518_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_a_1516_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1422_);
lean_dec(v_a_1418_);
lean_dec_ref(v___x_1416_);
lean_dec_ref(v_fallback_1362_);
lean_dec_ref(v_inst_x27_1361_);
lean_dec_ref(v_h_1360_);
lean_dec_ref(v_c_x27_1359_);
lean_dec_ref(v_b_1358_);
lean_dec_ref(v_a_1357_);
lean_dec_ref(v_inst_1356_);
lean_dec_ref(v_c_1355_);
lean_dec_ref(v_00_u03b1_1354_);
return v___x_1423_;
}
}
else
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
lean_dec_ref(v___x_1416_);
lean_dec_ref(v_fallback_1362_);
lean_dec_ref(v_inst_x27_1361_);
lean_dec_ref(v_h_1360_);
lean_dec_ref(v_c_x27_1359_);
lean_dec_ref(v_b_1358_);
lean_dec_ref(v_a_1357_);
lean_dec_ref(v_inst_1356_);
lean_dec_ref(v_c_1355_);
lean_dec_ref(v_00_u03b1_1354_);
v_a_1538_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1417_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1417_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1538_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
}
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
lean_dec_ref(v_fallback_1362_);
lean_dec_ref(v_inst_x27_1361_);
lean_dec_ref(v_h_1360_);
lean_dec_ref(v_c_x27_1359_);
lean_dec_ref(v_b_1358_);
lean_dec_ref(v_a_1357_);
lean_dec_ref(v_inst_1356_);
lean_dec_ref(v_c_1355_);
lean_dec_ref(v_00_u03b1_1354_);
v_a_1546_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1377_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1377_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_a_1546_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr___boxed(lean_object** _args){
lean_object* v_f_1554_ = _args[0];
lean_object* v_00_u03b1_1555_ = _args[1];
lean_object* v_c_1556_ = _args[2];
lean_object* v_inst_1557_ = _args[3];
lean_object* v_a_1558_ = _args[4];
lean_object* v_b_1559_ = _args[5];
lean_object* v_c_x27_1560_ = _args[6];
lean_object* v_h_1561_ = _args[7];
lean_object* v_inst_x27_1562_ = _args[8];
lean_object* v_fallback_1563_ = _args[9];
lean_object* v_a_1564_ = _args[10];
lean_object* v_a_1565_ = _args[11];
lean_object* v_a_1566_ = _args[12];
lean_object* v_a_1567_ = _args[13];
lean_object* v_a_1568_ = _args[14];
lean_object* v_a_1569_ = _args[15];
lean_object* v_a_1570_ = _args[16];
lean_object* v_a_1571_ = _args[17];
lean_object* v_a_1572_ = _args[18];
lean_object* v_a_1573_ = _args[19];
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr(v_f_1554_, v_00_u03b1_1555_, v_c_1556_, v_inst_1557_, v_a_1558_, v_b_1559_, v_c_x27_1560_, v_h_1561_, v_inst_x27_1562_, v_fallback_1563_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_);
lean_dec(v_a_1572_);
lean_dec_ref(v_a_1571_);
lean_dec(v_a_1570_);
lean_dec_ref(v_a_1569_);
lean_dec(v_a_1568_);
lean_dec_ref(v_a_1567_);
lean_dec(v_a_1566_);
lean_dec_ref(v_a_1565_);
lean_dec(v_a_1564_);
lean_dec_ref(v_f_1554_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0(lean_object* v___x_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v___x_1586_; 
v___x_1586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1586_, 0, v___x_1575_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___boxed(lean_object* v___x_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0(v___x_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
lean_dec(v___y_1594_);
lean_dec_ref(v___y_1593_);
lean_dec(v___y_1592_);
lean_dec_ref(v___y_1591_);
lean_dec(v___y_1590_);
lean_dec_ref(v___y_1589_);
lean_dec(v___y_1588_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0_spec__1___redArg(lean_object* v_f_1599_, lean_object* v_a_u2081_1600_, lean_object* v_a_u2082_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(v_f_1599_, v_a_u2081_1600_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
if (lean_obj_tag(v___x_1609_) == 0)
{
lean_object* v_a_1610_; lean_object* v___x_1611_; 
v_a_1610_ = lean_ctor_get(v___x_1609_, 0);
lean_inc(v_a_1610_);
lean_dec_ref_known(v___x_1609_, 1);
v___x_1611_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(v_a_1610_, v_a_u2082_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
return v___x_1611_;
}
else
{
lean_dec_ref(v_a_u2082_1601_);
return v___x_1609_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_1612_, lean_object* v_a_u2081_1613_, lean_object* v_a_u2082_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0_spec__1___redArg(v_f_1612_, v_a_u2081_1613_, v_a_u2082_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
lean_dec(v___y_1616_);
lean_dec_ref(v___y_1615_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0(lean_object* v_f_1623_, lean_object* v_a_u2081_1624_, lean_object* v_a_u2082_1625_, lean_object* v_a_u2083_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v___x_1637_; 
v___x_1637_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0_spec__1___redArg(v_f_1623_, v_a_u2081_1624_, v_a_u2082_1625_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_);
if (lean_obj_tag(v___x_1637_) == 0)
{
lean_object* v_a_1638_; lean_object* v___x_1639_; 
v_a_1638_ = lean_ctor_get(v___x_1637_, 0);
lean_inc(v_a_1638_);
lean_dec_ref_known(v___x_1637_, 1);
v___x_1639_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(v_a_1638_, v_a_u2083_1626_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_);
return v___x_1639_;
}
else
{
lean_dec_ref(v_a_u2083_1626_);
return v___x_1637_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0___boxed(lean_object* v_f_1640_, lean_object* v_a_u2081_1641_, lean_object* v_a_u2082_1642_, lean_object* v_a_u2083_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_){
_start:
{
lean_object* v_res_1654_; 
v_res_1654_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0(v_f_1640_, v_a_u2081_1641_, v_a_u2082_1642_, v_a_u2083_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_);
lean_dec(v___y_1652_);
lean_dec_ref(v___y_1651_);
lean_dec(v___y_1650_);
lean_dec_ref(v___y_1649_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
lean_dec(v___y_1646_);
lean_dec_ref(v___y_1645_);
lean_dec(v___y_1644_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0(lean_object* v_f_1655_, lean_object* v_a_u2081_1656_, lean_object* v_a_u2082_1657_, lean_object* v_a_u2083_1658_, lean_object* v_a_u2084_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0(v_f_1655_, v_a_u2081_1656_, v_a_u2082_1657_, v_a_u2083_1658_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v_a_1671_; lean_object* v___x_1672_; 
v_a_1671_ = lean_ctor_get(v___x_1670_, 0);
lean_inc(v_a_1671_);
lean_dec_ref_known(v___x_1670_, 1);
v___x_1672_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__1_spec__1_spec__2___redArg(v_a_1671_, v_a_u2084_1659_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
return v___x_1672_;
}
else
{
lean_dec_ref(v_a_u2084_1659_);
return v___x_1670_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0___boxed(lean_object* v_f_1673_, lean_object* v_a_u2081_1674_, lean_object* v_a_u2082_1675_, lean_object* v_a_u2083_1676_, lean_object* v_a_u2084_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_){
_start:
{
lean_object* v_res_1688_; 
v_res_1688_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0(v_f_1673_, v_a_u2081_1674_, v_a_u2082_1675_, v_a_u2083_1676_, v_a_u2084_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v___y_1678_);
return v_res_1688_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__2(void){
_start:
{
lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1692_ = lean_unsigned_to_nat(0u);
v___x_1693_ = l_Lean_mkBVar(v___x_1692_);
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2(lean_object* v_proof_1699_, lean_object* v_arg_1700_, lean_object* v_e_x27_1701_, lean_object* v_arg_1702_, uint8_t v_a_1703_, lean_object* v_arg_1704_, lean_object* v___x_1705_, lean_object* v_snd_1706_, lean_object* v_e_1707_, uint8_t v___x_1708_, uint8_t v_contextDependent_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
lean_object* v___x_1720_; 
v___x_1720_ = l_Lean_Meta_Sym_shareCommon(v_proof_1699_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
if (lean_obj_tag(v___x_1720_) == 0)
{
lean_object* v_a_1721_; lean_object* v___x_1722_; uint8_t v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v_a_1721_ = lean_ctor_get(v___x_1720_, 0);
lean_inc_n(v_a_1721_, 2);
lean_dec_ref_known(v___x_1720_, 1);
v___x_1722_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__1));
v___x_1723_ = 0;
v___x_1724_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__3);
v___x_1725_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__2);
lean_inc_ref_n(v_e_x27_1701_, 2);
lean_inc_ref(v_arg_1700_);
v___x_1726_ = l_Lean_mkApp4(v___x_1724_, v_arg_1700_, v_e_x27_1701_, v_a_1721_, v___x_1725_);
v___x_1727_ = lean_unsigned_to_nat(1u);
v___x_1728_ = lean_mk_empty_array_with_capacity(v___x_1727_);
lean_inc_ref(v___x_1728_);
v___x_1729_ = lean_array_push(v___x_1728_, v___x_1726_);
v___x_1730_ = l_Lean_Expr_betaRev(v_arg_1702_, v___x_1729_, v_a_1703_, v_a_1703_);
lean_dec_ref(v___x_1729_);
v___x_1731_ = l_Lean_mkLambda(v___x_1722_, v___x_1723_, v_e_x27_1701_, v___x_1730_);
v___x_1732_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1731_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v_a_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v_a_1733_ = lean_ctor_get(v___x_1732_, 0);
lean_inc(v_a_1733_);
lean_dec_ref_known(v___x_1732_, 1);
lean_inc_ref_n(v_e_x27_1701_, 2);
v___x_1734_ = l_Lean_mkNot(v_e_x27_1701_);
v___x_1735_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidableCongr___closed__8);
lean_inc(v_a_1721_);
v___x_1736_ = l_Lean_mkApp4(v___x_1735_, v_arg_1700_, v_e_x27_1701_, v_a_1721_, v___x_1725_);
v___x_1737_ = lean_array_push(v___x_1728_, v___x_1736_);
v___x_1738_ = l_Lean_Expr_betaRev(v_arg_1704_, v___x_1737_, v_a_1703_, v_a_1703_);
lean_dec_ref(v___x_1737_);
v___x_1739_ = l_Lean_mkLambda(v___x_1722_, v___x_1723_, v___x_1734_, v___x_1738_);
v___x_1740_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1739_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1742_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
lean_inc(v_a_1741_);
lean_dec_ref_known(v___x_1740_, 1);
lean_inc_ref(v_snd_1706_);
lean_inc_ref(v_e_x27_1701_);
v___x_1742_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0(v___x_1705_, v_e_x27_1701_, v_snd_1706_, v_a_1733_, v_a_1741_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1754_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1745_ = v___x_1742_;
v_isShared_1746_ = v_isSharedCheck_1754_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1742_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1754_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1752_; 
v___x_1747_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___closed__4));
v___x_1748_ = l_Lean_Expr_replaceFn(v_e_1707_, v___x_1747_);
v___x_1749_ = l_Lean_mkApp3(v___x_1748_, v_e_x27_1701_, v_snd_1706_, v_a_1721_);
v___x_1750_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1750_, 0, v_a_1743_);
lean_ctor_set(v___x_1750_, 1, v___x_1749_);
lean_ctor_set_uint8(v___x_1750_, sizeof(void*)*2, v___x_1708_);
lean_ctor_set_uint8(v___x_1750_, sizeof(void*)*2 + 1, v_contextDependent_1709_);
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 0, v___x_1750_);
v___x_1752_ = v___x_1745_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1750_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
}
else
{
lean_object* v_a_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1762_; 
lean_dec(v_a_1721_);
lean_dec_ref(v_e_1707_);
lean_dec_ref(v_snd_1706_);
lean_dec_ref(v_e_x27_1701_);
v_a_1755_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1757_ = v___x_1742_;
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_a_1755_);
lean_dec(v___x_1742_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1760_; 
if (v_isShared_1758_ == 0)
{
v___x_1760_ = v___x_1757_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v_a_1755_);
v___x_1760_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
return v___x_1760_;
}
}
}
}
else
{
lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1770_; 
lean_dec(v_a_1733_);
lean_dec(v_a_1721_);
lean_dec_ref(v_e_1707_);
lean_dec_ref(v_snd_1706_);
lean_dec_ref(v___x_1705_);
lean_dec_ref(v_e_x27_1701_);
v_a_1763_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1765_ = v___x_1740_;
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v___x_1740_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1768_; 
if (v_isShared_1766_ == 0)
{
v___x_1768_ = v___x_1765_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_a_1763_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
else
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1778_; 
lean_dec_ref(v___x_1728_);
lean_dec(v_a_1721_);
lean_dec_ref(v_e_1707_);
lean_dec_ref(v_snd_1706_);
lean_dec_ref(v___x_1705_);
lean_dec_ref(v_arg_1704_);
lean_dec_ref(v_e_x27_1701_);
lean_dec_ref(v_arg_1700_);
v_a_1771_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1773_ = v___x_1732_;
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1732_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_a_1771_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
}
else
{
lean_object* v_a_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1786_; 
lean_dec_ref(v_e_1707_);
lean_dec_ref(v_snd_1706_);
lean_dec_ref(v___x_1705_);
lean_dec_ref(v_arg_1704_);
lean_dec_ref(v_arg_1702_);
lean_dec_ref(v_e_x27_1701_);
lean_dec_ref(v_arg_1700_);
v_a_1779_ = lean_ctor_get(v___x_1720_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1720_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1781_ = v___x_1720_;
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_a_1779_);
lean_dec(v___x_1720_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1784_; 
if (v_isShared_1782_ == 0)
{
v___x_1784_ = v___x_1781_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1779_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___boxed(lean_object** _args){
lean_object* v_proof_1787_ = _args[0];
lean_object* v_arg_1788_ = _args[1];
lean_object* v_e_x27_1789_ = _args[2];
lean_object* v_arg_1790_ = _args[3];
lean_object* v_a_1791_ = _args[4];
lean_object* v_arg_1792_ = _args[5];
lean_object* v___x_1793_ = _args[6];
lean_object* v_snd_1794_ = _args[7];
lean_object* v_e_1795_ = _args[8];
lean_object* v___x_1796_ = _args[9];
lean_object* v_contextDependent_1797_ = _args[10];
lean_object* v___y_1798_ = _args[11];
lean_object* v___y_1799_ = _args[12];
lean_object* v___y_1800_ = _args[13];
lean_object* v___y_1801_ = _args[14];
lean_object* v___y_1802_ = _args[15];
lean_object* v___y_1803_ = _args[16];
lean_object* v___y_1804_ = _args[17];
lean_object* v___y_1805_ = _args[18];
lean_object* v___y_1806_ = _args[19];
lean_object* v___y_1807_ = _args[20];
_start:
{
uint8_t v_a_35686__boxed_1808_; uint8_t v___x_35690__boxed_1809_; uint8_t v_contextDependent_35691__boxed_1810_; lean_object* v_res_1811_; 
v_a_35686__boxed_1808_ = lean_unbox(v_a_1791_);
v___x_35690__boxed_1809_ = lean_unbox(v___x_1796_);
v_contextDependent_35691__boxed_1810_ = lean_unbox(v_contextDependent_1797_);
v_res_1811_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2(v_proof_1787_, v_arg_1788_, v_e_x27_1789_, v_arg_1790_, v_a_35686__boxed_1808_, v_arg_1792_, v___x_1793_, v_snd_1794_, v_e_1795_, v___x_35690__boxed_1809_, v_contextDependent_35691__boxed_1810_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
lean_dec(v___y_1800_);
lean_dec_ref(v___y_1799_);
lean_dec(v___y_1798_);
return v_res_1811_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
v___x_1818_ = lean_box(0);
v___x_1819_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__3));
v___x_1820_ = l_Lean_mkConst(v___x_1819_, v___x_1818_);
return v___x_1820_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
v___x_1821_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__4, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__4_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__4);
v___x_1822_ = lean_unsigned_to_nat(1u);
v___x_1823_ = lean_mk_empty_array_with_capacity(v___x_1822_);
v___x_1824_ = lean_array_push(v___x_1823_, v___x_1821_);
return v___x_1824_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__9(void){
_start:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___x_1831_ = lean_box(0);
v___x_1832_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__8));
v___x_1833_ = l_Lean_mkConst(v___x_1832_, v___x_1831_);
return v___x_1833_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__10(void){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1834_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__9, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__9_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__9);
v___x_1835_ = lean_unsigned_to_nat(1u);
v___x_1836_ = lean_mk_empty_array_with_capacity(v___x_1835_);
v___x_1837_ = lean_array_push(v___x_1836_, v___x_1834_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1(uint8_t v___x_1846_, lean_object* v_e_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_){
_start:
{
lean_object* v___x_1861_; uint8_t v___x_1862_; 
v___x_1861_ = l_Lean_Expr_cleanupAnnotations(v_e_1847_);
v___x_1862_ = l_Lean_Expr_isApp(v___x_1861_);
if (v___x_1862_ == 0)
{
lean_dec_ref(v___x_1861_);
lean_dec_ref(v_e_1847_);
goto v___jp_1858_;
}
else
{
lean_object* v___x_1863_; uint8_t v___x_1864_; 
v___x_1863_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1861_);
v___x_1864_ = l_Lean_Expr_isApp(v___x_1863_);
if (v___x_1864_ == 0)
{
lean_dec_ref(v___x_1863_);
lean_dec_ref(v___x_1861_);
lean_dec_ref(v_e_1847_);
goto v___jp_1858_;
}
else
{
lean_object* v___x_1865_; uint8_t v___x_1866_; 
v___x_1865_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1863_);
v___x_1866_ = l_Lean_Expr_isApp(v___x_1865_);
if (v___x_1866_ == 0)
{
lean_dec_ref(v___x_1865_);
lean_dec_ref(v___x_1863_);
lean_dec_ref(v___x_1861_);
lean_dec_ref(v_e_1847_);
goto v___jp_1858_;
}
else
{
lean_object* v___x_1867_; uint8_t v___x_1868_; 
v___x_1867_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1865_);
v___x_1868_ = l_Lean_Expr_isApp(v___x_1867_);
if (v___x_1868_ == 0)
{
lean_dec_ref(v___x_1867_);
lean_dec_ref(v___x_1865_);
lean_dec_ref(v___x_1863_);
lean_dec_ref(v___x_1861_);
lean_dec_ref(v_e_1847_);
goto v___jp_1858_;
}
else
{
lean_object* v___x_1869_; uint8_t v___x_1870_; 
v___x_1869_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1867_);
v___x_1870_ = l_Lean_Expr_isApp(v___x_1869_);
if (v___x_1870_ == 0)
{
lean_dec_ref(v___x_1869_);
lean_dec_ref(v___x_1867_);
lean_dec_ref(v___x_1865_);
lean_dec_ref(v___x_1863_);
lean_dec_ref(v___x_1861_);
lean_dec_ref(v_e_1847_);
goto v___jp_1858_;
}
else
{
lean_object* v___x_1871_; lean_object* v___x_1872_; uint8_t v___x_1873_; 
v___x_1871_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1869_);
v___x_1872_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__1));
v___x_1873_ = l_Lean_Expr_isConstOf(v___x_1871_, v___x_1872_);
if (v___x_1873_ == 0)
{
lean_dec_ref(v___x_1871_);
lean_dec_ref(v___x_1869_);
lean_dec_ref(v___x_1867_);
lean_dec_ref(v___x_1865_);
lean_dec_ref(v___x_1863_);
lean_dec_ref(v___x_1861_);
lean_dec_ref(v_e_1847_);
goto v___jp_1858_;
}
else
{
lean_object* v_arg_1874_; lean_object* v_arg_1875_; lean_object* v_arg_1876_; lean_object* v_arg_1877_; lean_object* v_arg_1878_; lean_object* v___x_1879_; 
v_arg_1874_ = lean_ctor_get(v___x_1861_, 1);
lean_inc_ref(v_arg_1874_);
lean_dec_ref(v___x_1861_);
v_arg_1875_ = lean_ctor_get(v___x_1863_, 1);
lean_inc_ref(v_arg_1875_);
lean_dec_ref(v___x_1863_);
v_arg_1876_ = lean_ctor_get(v___x_1865_, 1);
lean_inc_ref(v_arg_1876_);
lean_dec_ref(v___x_1865_);
v_arg_1877_ = lean_ctor_get(v___x_1867_, 1);
lean_inc_ref_n(v_arg_1877_, 2);
lean_dec_ref(v___x_1867_);
v_arg_1878_ = lean_ctor_get(v___x_1869_, 1);
lean_inc_ref(v_arg_1878_);
lean_dec_ref(v___x_1869_);
lean_inc(v___y_1856_);
lean_inc_ref(v___y_1855_);
lean_inc(v___y_1854_);
lean_inc_ref(v___y_1853_);
lean_inc(v___y_1852_);
lean_inc_ref(v___y_1851_);
lean_inc(v___y_1850_);
lean_inc_ref(v___y_1849_);
lean_inc(v___y_1848_);
v___x_1879_ = lean_sym_simp(v_arg_1877_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_);
if (lean_obj_tag(v___x_1879_) == 0)
{
lean_object* v_a_1880_; 
v_a_1880_ = lean_ctor_get(v___x_1879_, 0);
lean_inc(v_a_1880_);
lean_dec_ref_known(v___x_1879_, 1);
if (lean_obj_tag(v_a_1880_) == 0)
{
uint8_t v_contextDependent_1881_; lean_object* v___x_1882_; 
lean_dec_ref(v_e_1847_);
v_contextDependent_1881_ = lean_ctor_get_uint8(v_a_1880_, 1);
lean_dec_ref_known(v_a_1880_, 0);
v___x_1882_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_arg_1877_, v___y_1851_);
if (lean_obj_tag(v___x_1882_) == 0)
{
lean_object* v_a_1883_; uint8_t v___x_1884_; 
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
lean_inc(v_a_1883_);
lean_dec_ref_known(v___x_1882_, 1);
v___x_1884_ = lean_unbox(v_a_1883_);
if (v___x_1884_ == 0)
{
lean_object* v___x_1885_; 
v___x_1885_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_arg_1877_, v___y_1851_);
if (lean_obj_tag(v___x_1885_) == 0)
{
lean_object* v_a_1886_; uint8_t v___x_1887_; 
v_a_1886_ = lean_ctor_get(v___x_1885_, 0);
lean_inc(v_a_1886_);
lean_dec_ref_known(v___x_1885_, 1);
v___x_1887_ = lean_unbox(v_a_1886_);
lean_dec(v_a_1886_);
if (v___x_1887_ == 0)
{
lean_object* v___x_1888_; lean_object* v___f_1889_; lean_object* v___x_1890_; 
lean_dec(v_a_1883_);
v___x_1888_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_1873_, v_contextDependent_1881_);
v___f_1889_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1889_, 0, v___x_1888_);
v___x_1890_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable(v___x_1871_, v_arg_1878_, v_arg_1877_, v_arg_1876_, v_arg_1875_, v_arg_1874_, v___f_1889_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_);
lean_dec_ref(v___x_1871_);
return v___x_1890_;
}
else
{
lean_object* v___x_1891_; uint8_t v___x_1892_; uint8_t v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
lean_dec_ref(v_arg_1877_);
v___x_1891_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__5, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__5_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__5);
v___x_1892_ = lean_unbox(v_a_1883_);
v___x_1893_ = lean_unbox(v_a_1883_);
lean_inc_ref(v_arg_1874_);
v___x_1894_ = l_Lean_Expr_betaRev(v_arg_1874_, v___x_1891_, v___x_1892_, v___x_1893_);
v___x_1895_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1894_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_);
if (lean_obj_tag(v___x_1895_) == 0)
{
lean_object* v_a_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1909_; 
v_a_1896_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1898_ = v___x_1895_;
v_isShared_1899_ = v_isSharedCheck_1909_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_a_1896_);
lean_dec(v___x_1895_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1909_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; uint8_t v___x_1905_; lean_object* v___x_1907_; 
v___x_1900_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__6));
v___x_1901_ = l_Lean_Expr_constLevels_x21(v___x_1871_);
lean_dec_ref(v___x_1871_);
v___x_1902_ = l_Lean_mkConst(v___x_1900_, v___x_1901_);
v___x_1903_ = l_Lean_mkApp4(v___x_1902_, v_arg_1878_, v_arg_1876_, v_arg_1875_, v_arg_1874_);
v___x_1904_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1904_, 0, v_a_1896_);
lean_ctor_set(v___x_1904_, 1, v___x_1903_);
v___x_1905_ = lean_unbox(v_a_1883_);
lean_dec(v_a_1883_);
lean_ctor_set_uint8(v___x_1904_, sizeof(void*)*2, v___x_1905_);
lean_ctor_set_uint8(v___x_1904_, sizeof(void*)*2 + 1, v_contextDependent_1881_);
if (v_isShared_1899_ == 0)
{
lean_ctor_set(v___x_1898_, 0, v___x_1904_);
v___x_1907_ = v___x_1898_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v___x_1904_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_dec(v_a_1883_);
lean_dec_ref(v_arg_1878_);
lean_dec_ref(v_arg_1876_);
lean_dec_ref(v_arg_1875_);
lean_dec_ref(v_arg_1874_);
lean_dec_ref(v___x_1871_);
v_a_1910_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1895_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1895_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
}
}
else
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
lean_dec(v_a_1883_);
lean_dec_ref(v_arg_1878_);
lean_dec_ref(v_arg_1877_);
lean_dec_ref(v_arg_1876_);
lean_dec_ref(v_arg_1875_);
lean_dec_ref(v_arg_1874_);
lean_dec_ref(v___x_1871_);
v_a_1918_ = lean_ctor_get(v___x_1885_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1885_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1920_ = v___x_1885_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v___x_1885_);
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
lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
lean_dec(v_a_1883_);
lean_dec_ref(v_arg_1877_);
v___x_1926_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__10, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__10_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__10);
lean_inc_ref(v_arg_1875_);
v___x_1927_ = l_Lean_Expr_betaRev(v_arg_1875_, v___x_1926_, v___x_1846_, v___x_1846_);
v___x_1928_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1927_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_);
if (lean_obj_tag(v___x_1928_) == 0)
{
lean_object* v_a_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1941_; 
v_a_1929_ = lean_ctor_get(v___x_1928_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1928_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1931_ = v___x_1928_;
v_isShared_1932_ = v_isSharedCheck_1941_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_a_1929_);
lean_dec(v___x_1928_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1941_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1939_; 
v___x_1933_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__11));
v___x_1934_ = l_Lean_Expr_constLevels_x21(v___x_1871_);
lean_dec_ref(v___x_1871_);
v___x_1935_ = l_Lean_mkConst(v___x_1933_, v___x_1934_);
v___x_1936_ = l_Lean_mkApp4(v___x_1935_, v_arg_1878_, v_arg_1876_, v_arg_1875_, v_arg_1874_);
v___x_1937_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1937_, 0, v_a_1929_);
lean_ctor_set(v___x_1937_, 1, v___x_1936_);
lean_ctor_set_uint8(v___x_1937_, sizeof(void*)*2, v___x_1846_);
lean_ctor_set_uint8(v___x_1937_, sizeof(void*)*2 + 1, v_contextDependent_1881_);
if (v_isShared_1932_ == 0)
{
lean_ctor_set(v___x_1931_, 0, v___x_1937_);
v___x_1939_ = v___x_1931_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1937_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
else
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
lean_dec_ref(v_arg_1878_);
lean_dec_ref(v_arg_1876_);
lean_dec_ref(v_arg_1875_);
lean_dec_ref(v_arg_1874_);
lean_dec_ref(v___x_1871_);
v_a_1942_ = lean_ctor_get(v___x_1928_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1928_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1928_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1928_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
lean_dec_ref(v_arg_1878_);
lean_dec_ref(v_arg_1877_);
lean_dec_ref(v_arg_1876_);
lean_dec_ref(v_arg_1875_);
lean_dec_ref(v_arg_1874_);
lean_dec_ref(v___x_1871_);
v_a_1950_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1882_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1882_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
else
{
lean_object* v_e_x27_1958_; lean_object* v_proof_1959_; uint8_t v_contextDependent_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_2090_; 
v_e_x27_1958_ = lean_ctor_get(v_a_1880_, 0);
v_proof_1959_ = lean_ctor_get(v_a_1880_, 1);
v_contextDependent_1960_ = lean_ctor_get_uint8(v_a_1880_, sizeof(void*)*2 + 1);
v_isSharedCheck_2090_ = !lean_is_exclusive(v_a_1880_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_1962_ = v_a_1880_;
v_isShared_1963_ = v_isSharedCheck_2090_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_proof_1959_);
lean_inc(v_e_x27_1958_);
lean_dec(v_a_1880_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_2090_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1964_; 
v___x_1964_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_x27_1958_, v___y_1851_);
if (lean_obj_tag(v___x_1964_) == 0)
{
lean_object* v_a_1965_; uint8_t v___x_1966_; 
v_a_1965_ = lean_ctor_get(v___x_1964_, 0);
lean_inc(v_a_1965_);
lean_dec_ref_known(v___x_1964_, 1);
v___x_1966_ = lean_unbox(v_a_1965_);
if (v___x_1966_ == 0)
{
lean_object* v___x_1967_; 
v___x_1967_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_x27_1958_, v___y_1851_);
lean_dec_ref(v_e_x27_1958_);
if (lean_obj_tag(v___x_1967_) == 0)
{
lean_object* v_a_1968_; uint8_t v___x_1969_; 
v_a_1968_ = lean_ctor_get(v___x_1967_, 0);
lean_inc(v_a_1968_);
lean_dec_ref_known(v___x_1967_, 1);
v___x_1969_ = lean_unbox(v_a_1968_);
if (v___x_1969_ == 0)
{
lean_object* v___x_1970_; 
lean_dec(v_a_1965_);
lean_del_object(v___x_1962_);
lean_dec_ref(v_proof_1959_);
lean_inc_ref(v_arg_1876_);
v___x_1970_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance(v_arg_1876_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_);
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v_a_1971_; lean_object* v_fst_1972_; 
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc(v_a_1971_);
lean_dec_ref_known(v___x_1970_, 1);
v_fst_1972_ = lean_ctor_get(v_a_1971_, 0);
lean_inc(v_fst_1972_);
if (lean_obj_tag(v_fst_1972_) == 0)
{
uint8_t v_contextDependent_1973_; lean_object* v___x_1974_; lean_object* v___f_1975_; lean_object* v___x_1976_; 
lean_dec(v_a_1971_);
lean_dec(v_a_1968_);
lean_dec_ref(v_e_1847_);
v_contextDependent_1973_ = lean_ctor_get_uint8(v_fst_1972_, 1);
lean_dec_ref_known(v_fst_1972_, 0);
v___x_1974_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_1873_, v_contextDependent_1973_);
v___f_1975_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1975_, 0, v___x_1974_);
v___x_1976_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable(v___x_1871_, v_arg_1878_, v_arg_1877_, v_arg_1876_, v_arg_1875_, v_arg_1874_, v___f_1975_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_);
lean_dec_ref(v___x_1871_);
return v___x_1976_;
}
else
{
lean_object* v_snd_1977_; lean_object* v_e_x27_1978_; lean_object* v_proof_1979_; uint8_t v_contextDependent_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___f_1985_; lean_object* v___x_1986_; 
v_snd_1977_ = lean_ctor_get(v_a_1971_, 1);
lean_inc_n(v_snd_1977_, 2);
lean_dec(v_a_1971_);
v_e_x27_1978_ = lean_ctor_get(v_fst_1972_, 0);
lean_inc_ref_n(v_e_x27_1978_, 2);
v_proof_1979_ = lean_ctor_get(v_fst_1972_, 1);
lean_inc_ref_n(v_proof_1979_, 2);
v_contextDependent_1980_ = lean_ctor_get_uint8(v_fst_1972_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_fst_1972_, 2);
v___x_1981_ = lean_unsigned_to_nat(4u);
v___x_1982_ = l_Lean_Expr_getBoundedAppFn(v___x_1981_, v_e_1847_);
v___x_1983_ = lean_box(v___x_1873_);
v___x_1984_ = lean_box(v_contextDependent_1980_);
lean_inc_ref(v_arg_1874_);
lean_inc_ref(v_arg_1875_);
lean_inc_ref(v_arg_1877_);
v___f_1985_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__2___boxed), 21, 11);
lean_closure_set(v___f_1985_, 0, v_proof_1979_);
lean_closure_set(v___f_1985_, 1, v_arg_1877_);
lean_closure_set(v___f_1985_, 2, v_e_x27_1978_);
lean_closure_set(v___f_1985_, 3, v_arg_1875_);
lean_closure_set(v___f_1985_, 4, v_a_1968_);
lean_closure_set(v___f_1985_, 5, v_arg_1874_);
lean_closure_set(v___f_1985_, 6, v___x_1982_);
lean_closure_set(v___f_1985_, 7, v_snd_1977_);
lean_closure_set(v___f_1985_, 8, v_e_1847_);
lean_closure_set(v___f_1985_, 9, v___x_1983_);
lean_closure_set(v___f_1985_, 10, v___x_1984_);
v___x_1986_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr(v___x_1871_, v_arg_1878_, v_arg_1877_, v_arg_1876_, v_arg_1875_, v_arg_1874_, v_e_x27_1978_, v_proof_1979_, v_snd_1977_, v___f_1985_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_);
lean_dec_ref(v___x_1871_);
return v___x_1986_;
}
}
else
{
lean_object* v_a_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1994_; 
lean_dec(v_a_1968_);
lean_dec_ref(v_arg_1878_);
lean_dec_ref(v_arg_1877_);
lean_dec_ref(v_arg_1876_);
lean_dec_ref(v_arg_1875_);
lean_dec_ref(v_arg_1874_);
lean_dec_ref(v___x_1871_);
lean_dec_ref(v_e_1847_);
v_a_1987_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1989_ = v___x_1970_;
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_a_1987_);
lean_dec(v___x_1970_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1992_; 
if (v_isShared_1990_ == 0)
{
v___x_1992_ = v___x_1989_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_a_1987_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
}
}
else
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
lean_dec(v_a_1968_);
lean_dec_ref(v_arg_1878_);
lean_dec_ref(v_arg_1876_);
lean_dec_ref(v_arg_1875_);
lean_dec_ref(v___x_1871_);
lean_inc_ref(v_proof_1959_);
v___x_1995_ = l_Lean_Meta_mkOfEqFalseCore(v_arg_1877_, v_proof_1959_);
v___x_1996_ = l_Lean_Meta_Sym_shareCommon(v___x_1995_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_);
if (lean_obj_tag(v___x_1996_) == 0)
{
lean_object* v_a_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; uint8_t v___x_2001_; uint8_t v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; 
v_a_1997_ = lean_ctor_get(v___x_1996_, 0);
lean_inc(v_a_1997_);
lean_dec_ref_known(v___x_1996_, 1);
v___x_1998_ = lean_unsigned_to_nat(1u);
v___x_1999_ = lean_mk_empty_array_with_capacity(v___x_1998_);
v___x_2000_ = lean_array_push(v___x_1999_, v_a_1997_);
v___x_2001_ = lean_unbox(v_a_1965_);
v___x_2002_ = lean_unbox(v_a_1965_);
v___x_2003_ = l_Lean_Expr_betaRev(v_arg_1874_, v___x_2000_, v___x_2001_, v___x_2002_);
lean_dec_ref(v___x_2000_);
v___x_2004_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2003_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_);
if (lean_obj_tag(v___x_2004_) == 0)
{
lean_object* v_a_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2019_; 
v_a_2005_ = lean_ctor_get(v___x_2004_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2007_ = v___x_2004_;
v_isShared_2008_ = v_isSharedCheck_2019_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_a_2005_);
lean_dec(v___x_2004_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2019_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2013_; 
v___x_2009_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__13));
v___x_2010_ = l_Lean_Expr_replaceFn(v_e_1847_, v___x_2009_);
v___x_2011_ = l_Lean_Expr_app___override(v___x_2010_, v_proof_1959_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 1, v___x_2011_);
lean_ctor_set(v___x_1962_, 0, v_a_2005_);
v___x_2013_ = v___x_1962_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_a_2005_);
lean_ctor_set(v_reuseFailAlloc_2018_, 1, v___x_2011_);
v___x_2013_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
uint8_t v___x_2014_; lean_object* v___x_2016_; 
v___x_2014_ = lean_unbox(v_a_1965_);
lean_dec(v_a_1965_);
lean_ctor_set_uint8(v___x_2013_, sizeof(void*)*2, v___x_2014_);
lean_ctor_set_uint8(v___x_2013_, sizeof(void*)*2 + 1, v_contextDependent_1960_);
if (v_isShared_2008_ == 0)
{
lean_ctor_set(v___x_2007_, 0, v___x_2013_);
v___x_2016_ = v___x_2007_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v___x_2013_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
else
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2027_; 
lean_dec(v_a_1965_);
lean_del_object(v___x_1962_);
lean_dec_ref(v_proof_1959_);
lean_dec_ref(v_e_1847_);
v_a_2020_ = lean_ctor_get(v___x_2004_, 0);
v_isSharedCheck_2027_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2022_ = v___x_2004_;
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_2004_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2023_ == 0)
{
v___x_2025_ = v___x_2022_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_a_2020_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
}
}
else
{
lean_object* v_a_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2035_; 
lean_dec(v_a_1965_);
lean_del_object(v___x_1962_);
lean_dec_ref(v_proof_1959_);
lean_dec_ref(v_arg_1874_);
lean_dec_ref(v_e_1847_);
v_a_2028_ = lean_ctor_get(v___x_1996_, 0);
v_isSharedCheck_2035_ = !lean_is_exclusive(v___x_1996_);
if (v_isSharedCheck_2035_ == 0)
{
v___x_2030_ = v___x_1996_;
v_isShared_2031_ = v_isSharedCheck_2035_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_a_2028_);
lean_dec(v___x_1996_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2035_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v___x_2033_; 
if (v_isShared_2031_ == 0)
{
v___x_2033_ = v___x_2030_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2034_; 
v_reuseFailAlloc_2034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2034_, 0, v_a_2028_);
v___x_2033_ = v_reuseFailAlloc_2034_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
return v___x_2033_;
}
}
}
}
}
else
{
lean_object* v_a_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2043_; 
lean_dec(v_a_1965_);
lean_del_object(v___x_1962_);
lean_dec_ref(v_proof_1959_);
lean_dec_ref(v_arg_1878_);
lean_dec_ref(v_arg_1877_);
lean_dec_ref(v_arg_1876_);
lean_dec_ref(v_arg_1875_);
lean_dec_ref(v_arg_1874_);
lean_dec_ref(v___x_1871_);
lean_dec_ref(v_e_1847_);
v_a_2036_ = lean_ctor_get(v___x_1967_, 0);
v_isSharedCheck_2043_ = !lean_is_exclusive(v___x_1967_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2038_ = v___x_1967_;
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_a_2036_);
lean_dec(v___x_1967_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v___x_2041_; 
if (v_isShared_2039_ == 0)
{
v___x_2041_ = v___x_2038_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v_a_2036_);
v___x_2041_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
return v___x_2041_;
}
}
}
}
else
{
lean_object* v___x_2044_; lean_object* v___x_2045_; 
lean_dec(v_a_1965_);
lean_dec_ref(v_e_x27_1958_);
lean_dec_ref(v_arg_1878_);
lean_dec_ref(v_arg_1876_);
lean_dec_ref(v_arg_1874_);
lean_dec_ref(v___x_1871_);
lean_inc_ref(v_proof_1959_);
v___x_2044_ = l_Lean_Meta_mkOfEqTrueCore(v_arg_1877_, v_proof_1959_);
v___x_2045_ = l_Lean_Meta_Sym_shareCommon(v___x_2044_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_);
if (lean_obj_tag(v___x_2045_) == 0)
{
lean_object* v_a_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; 
v_a_2046_ = lean_ctor_get(v___x_2045_, 0);
lean_inc(v_a_2046_);
lean_dec_ref_known(v___x_2045_, 1);
v___x_2047_ = lean_unsigned_to_nat(1u);
v___x_2048_ = lean_mk_empty_array_with_capacity(v___x_2047_);
v___x_2049_ = lean_array_push(v___x_2048_, v_a_2046_);
v___x_2050_ = l_Lean_Expr_betaRev(v_arg_1875_, v___x_2049_, v___x_1846_, v___x_1846_);
lean_dec_ref(v___x_2049_);
v___x_2051_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2050_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v_a_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2065_; 
v_a_2052_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2054_ = v___x_2051_;
v_isShared_2055_ = v_isSharedCheck_2065_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_a_2052_);
lean_dec(v___x_2051_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2065_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2060_; 
v___x_2056_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___closed__15));
v___x_2057_ = l_Lean_Expr_replaceFn(v_e_1847_, v___x_2056_);
v___x_2058_ = l_Lean_Expr_app___override(v___x_2057_, v_proof_1959_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 1, v___x_2058_);
lean_ctor_set(v___x_1962_, 0, v_a_2052_);
v___x_2060_ = v___x_1962_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2052_);
lean_ctor_set(v_reuseFailAlloc_2064_, 1, v___x_2058_);
lean_ctor_set_uint8(v_reuseFailAlloc_2064_, sizeof(void*)*2 + 1, v_contextDependent_1960_);
v___x_2060_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
lean_object* v___x_2062_; 
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*2, v___x_1846_);
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 0, v___x_2060_);
v___x_2062_ = v___x_2054_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v___x_2060_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
return v___x_2062_;
}
}
}
}
else
{
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2073_; 
lean_del_object(v___x_1962_);
lean_dec_ref(v_proof_1959_);
lean_dec_ref(v_e_1847_);
v_a_2066_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2068_ = v___x_2051_;
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v___x_2051_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2071_; 
if (v_isShared_2069_ == 0)
{
v___x_2071_ = v___x_2068_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2066_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
}
else
{
lean_object* v_a_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2081_; 
lean_del_object(v___x_1962_);
lean_dec_ref(v_proof_1959_);
lean_dec_ref(v_arg_1875_);
lean_dec_ref(v_e_1847_);
v_a_2074_ = lean_ctor_get(v___x_2045_, 0);
v_isSharedCheck_2081_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2076_ = v___x_2045_;
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_a_2074_);
lean_dec(v___x_2045_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2079_; 
if (v_isShared_2077_ == 0)
{
v___x_2079_ = v___x_2076_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_a_2074_);
v___x_2079_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
return v___x_2079_;
}
}
}
}
}
else
{
lean_object* v_a_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2089_; 
lean_del_object(v___x_1962_);
lean_dec_ref(v_proof_1959_);
lean_dec_ref(v_e_x27_1958_);
lean_dec_ref(v_arg_1878_);
lean_dec_ref(v_arg_1877_);
lean_dec_ref(v_arg_1876_);
lean_dec_ref(v_arg_1875_);
lean_dec_ref(v_arg_1874_);
lean_dec_ref(v___x_1871_);
lean_dec_ref(v_e_1847_);
v_a_2082_ = lean_ctor_get(v___x_1964_, 0);
v_isSharedCheck_2089_ = !lean_is_exclusive(v___x_1964_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2084_ = v___x_1964_;
v_isShared_2085_ = v_isSharedCheck_2089_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_a_2082_);
lean_dec(v___x_1964_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2089_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2087_; 
if (v_isShared_2085_ == 0)
{
v___x_2087_ = v___x_2084_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v_a_2082_);
v___x_2087_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
return v___x_2087_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_arg_1878_);
lean_dec_ref(v_arg_1877_);
lean_dec_ref(v_arg_1876_);
lean_dec_ref(v_arg_1875_);
lean_dec_ref(v_arg_1874_);
lean_dec_ref(v___x_1871_);
lean_dec_ref(v_e_1847_);
return v___x_1879_;
}
}
}
}
}
}
}
v___jp_1858_:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1859_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_1859_, 0, v___x_1846_);
lean_ctor_set_uint8(v___x_1859_, 1, v___x_1846_);
v___x_1860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1860_, 0, v___x_1859_);
return v___x_1860_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___boxed(lean_object* v___x_2091_, lean_object* v_e_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_){
_start:
{
uint8_t v___x_35957__boxed_2103_; lean_object* v_res_2104_; 
v___x_35957__boxed_2103_ = lean_unbox(v___x_2091_);
v_res_2104_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1(v___x_35957__boxed_2103_, v_e_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_);
lean_dec(v___y_2101_);
lean_dec_ref(v___y_2100_);
lean_dec(v___y_2099_);
lean_dec_ref(v___y_2098_);
lean_dec(v___y_2097_);
lean_dec_ref(v___y_2096_);
lean_dec(v___y_2095_);
lean_dec_ref(v___y_2094_);
lean_dec(v___y_2093_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv(lean_object* v_e_2105_, lean_object* v_a_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_){
_start:
{
lean_object* v_numArgs_2116_; lean_object* v___x_2117_; uint8_t v___x_2118_; 
v_numArgs_2116_ = l_Lean_Expr_getAppNumArgs(v_e_2105_);
v___x_2117_ = lean_unsigned_to_nat(5u);
v___x_2118_ = lean_nat_dec_lt(v_numArgs_2116_, v___x_2117_);
if (v___x_2118_ == 0)
{
lean_object* v___x_2119_; lean_object* v___f_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v___x_2119_ = lean_box(v___x_2118_);
v___f_2120_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__1___boxed), 12, 1);
lean_closure_set(v___f_2120_, 0, v___x_2119_);
v___x_2121_ = lean_nat_sub(v_numArgs_2116_, v___x_2117_);
lean_dec(v_numArgs_2116_);
v___x_2122_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_2105_, v___x_2121_, v___f_2120_, v_a_2106_, v_a_2107_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_, v_a_2114_);
lean_dec(v___x_2121_);
return v___x_2122_;
}
else
{
uint8_t v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; 
lean_dec(v_numArgs_2116_);
lean_dec_ref(v_e_2105_);
v___x_2123_ = 0;
v___x_2124_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_2124_, 0, v___x_2118_);
lean_ctor_set_uint8(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2124_);
return v___x_2125_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___boxed(lean_object* v_e_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_){
_start:
{
lean_object* v_res_2137_; 
v_res_2137_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv(v_e_2126_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_);
lean_dec(v_a_2135_);
lean_dec_ref(v_a_2134_);
lean_dec(v_a_2133_);
lean_dec_ref(v_a_2132_);
lean_dec(v_a_2131_);
lean_dec_ref(v_a_2130_);
lean_dec(v_a_2129_);
lean_dec_ref(v_a_2128_);
lean_dec(v_a_2127_);
return v_res_2137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0_spec__1(lean_object* v_f_2138_, lean_object* v_a_u2081_2139_, lean_object* v_a_u2082_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_){
_start:
{
lean_object* v___x_2151_; 
v___x_2151_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0_spec__1___redArg(v_f_2138_, v_a_u2081_2139_, v_a_u2082_2140_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0_spec__1___boxed(lean_object* v_f_2152_, lean_object* v_a_u2081_2153_, lean_object* v_a_u2082_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_){
_start:
{
lean_object* v_res_2165_; 
v_res_2165_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00Lean_Meta_Sym_Internal_mkAppS_u2084___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_spec__0_spec__0_spec__1(v_f_2152_, v_a_u2081_2153_, v_a_u2082_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_, v___y_2161_, v___y_2162_, v___y_2163_);
lean_dec(v___y_2163_);
lean_dec_ref(v___y_2162_);
lean_dec(v___y_2161_);
lean_dec_ref(v___y_2160_);
lean_dec(v___y_2159_);
lean_dec_ref(v___y_2158_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
lean_dec(v___y_2155_);
return v_res_2165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2184_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17_));
v___x_2185_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17_));
v___x_2186_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___boxed), 11, 0);
v___x_2187_ = l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(v___x_2184_, v___x_2185_, v___x_2186_);
return v___x_2187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17____boxed(lean_object* v_a_2188_){
_start:
{
lean_object* v_res_2189_; 
v_res_2189_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17_();
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_19_(){
_start:
{
lean_object* v___x_2191_; uint8_t v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; 
v___x_2191_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17_));
v___x_2192_ = 0;
v___x_2193_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___boxed), 11, 0);
v___x_2194_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(v___x_2191_, v___x_2192_, v___x_2193_);
return v___x_2194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_19____boxed(lean_object* v_a_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_19_();
return v_res_2196_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__2(void){
_start:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2202_ = lean_box(0);
v___x_2203_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__1));
v___x_2204_ = l_Lean_mkConst(v___x_2203_, v___x_2202_);
return v___x_2204_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__5(void){
_start:
{
lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v___x_2210_ = lean_box(0);
v___x_2211_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__4));
v___x_2212_ = l_Lean_mkConst(v___x_2211_, v___x_2210_);
return v___x_2212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable(lean_object* v_p_2213_, lean_object* v_inst_2214_, lean_object* v_instToMatch_2215_, lean_object* v_fallback_2216_, lean_object* v_a_2217_, lean_object* v_a_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_){
_start:
{
lean_object* v___x_2227_; 
v___x_2227_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_instToMatch_2215_, v_a_2223_);
if (lean_obj_tag(v___x_2227_) == 0)
{
lean_object* v_a_2228_; lean_object* v___x_2229_; uint8_t v___x_2230_; 
v_a_2228_ = lean_ctor_get(v___x_2227_, 0);
lean_inc(v_a_2228_);
lean_dec_ref_known(v___x_2227_, 1);
v___x_2229_ = l_Lean_Expr_cleanupAnnotations(v_a_2228_);
lean_dec(v_a_2228_);
v___x_2230_ = l_Lean_Expr_isApp(v___x_2229_);
if (v___x_2230_ == 0)
{
lean_object* v___x_2231_; 
lean_dec_ref(v___x_2229_);
lean_dec_ref(v_inst_2214_);
lean_dec_ref(v_p_2213_);
lean_inc(v_a_2225_);
lean_inc_ref(v_a_2224_);
lean_inc(v_a_2223_);
lean_inc_ref(v_a_2222_);
lean_inc(v_a_2221_);
lean_inc_ref(v_a_2220_);
lean_inc(v_a_2219_);
lean_inc_ref(v_a_2218_);
lean_inc(v_a_2217_);
v___x_2231_ = lean_apply_10(v_fallback_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_, v_a_2225_, lean_box(0));
return v___x_2231_;
}
else
{
lean_object* v___x_2232_; uint8_t v___x_2233_; 
v___x_2232_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2229_);
v___x_2233_ = l_Lean_Expr_isApp(v___x_2232_);
if (v___x_2233_ == 0)
{
lean_object* v___x_2234_; 
lean_dec_ref(v___x_2232_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v_inst_2214_);
lean_dec_ref(v_p_2213_);
lean_inc(v_a_2225_);
lean_inc_ref(v_a_2224_);
lean_inc(v_a_2223_);
lean_inc_ref(v_a_2222_);
lean_inc(v_a_2221_);
lean_inc_ref(v_a_2220_);
lean_inc(v_a_2219_);
lean_inc_ref(v_a_2218_);
lean_inc(v_a_2217_);
v___x_2234_ = lean_apply_10(v_fallback_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_, v_a_2225_, lean_box(0));
return v___x_2234_;
}
else
{
lean_object* v___x_2235_; uint8_t v___x_2236_; 
v___x_2235_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2232_);
v___x_2236_ = l_Lean_Expr_isApp(v___x_2235_);
if (v___x_2236_ == 0)
{
lean_object* v___x_2237_; 
lean_dec_ref(v___x_2235_);
lean_dec_ref(v___x_2232_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v_inst_2214_);
lean_dec_ref(v_p_2213_);
lean_inc(v_a_2225_);
lean_inc_ref(v_a_2224_);
lean_inc(v_a_2223_);
lean_inc_ref(v_a_2222_);
lean_inc(v_a_2221_);
lean_inc_ref(v_a_2220_);
lean_inc(v_a_2219_);
lean_inc_ref(v_a_2218_);
lean_inc(v_a_2217_);
v___x_2237_ = lean_apply_10(v_fallback_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_, v_a_2225_, lean_box(0));
return v___x_2237_;
}
else
{
lean_object* v___x_2238_; lean_object* v___x_2239_; uint8_t v___x_2240_; 
v___x_2238_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2235_);
lean_dec_ref(v___x_2235_);
v___x_2239_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1));
v___x_2240_ = l_Lean_Expr_isConstOf(v___x_2238_, v___x_2239_);
lean_dec_ref(v___x_2238_);
if (v___x_2240_ == 0)
{
lean_object* v___x_2241_; 
lean_dec_ref(v___x_2232_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v_inst_2214_);
lean_dec_ref(v_p_2213_);
lean_inc(v_a_2225_);
lean_inc_ref(v_a_2224_);
lean_inc(v_a_2223_);
lean_inc_ref(v_a_2222_);
lean_inc(v_a_2221_);
lean_inc_ref(v_a_2220_);
lean_inc(v_a_2219_);
lean_inc_ref(v_a_2218_);
lean_inc(v_a_2217_);
v___x_2241_ = lean_apply_10(v_fallback_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_, v_a_2225_, lean_box(0));
return v___x_2241_;
}
else
{
lean_object* v_arg_2242_; lean_object* v_arg_2243_; lean_object* v___x_2244_; 
v_arg_2242_ = lean_ctor_get(v___x_2229_, 1);
lean_inc_ref(v_arg_2242_);
lean_dec_ref(v___x_2229_);
v_arg_2243_ = lean_ctor_get(v___x_2232_, 1);
lean_inc_ref(v_arg_2243_);
lean_dec_ref(v___x_2232_);
v___x_2244_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_2243_, v_a_2223_);
if (lean_obj_tag(v___x_2244_) == 0)
{
lean_object* v_a_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; uint8_t v___x_2248_; 
v_a_2245_ = lean_ctor_get(v___x_2244_, 0);
lean_inc(v_a_2245_);
lean_dec_ref_known(v___x_2244_, 1);
v___x_2246_ = l_Lean_Expr_cleanupAnnotations(v_a_2245_);
lean_dec(v_a_2245_);
v___x_2247_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__4));
v___x_2248_ = l_Lean_Expr_isConstOf(v___x_2246_, v___x_2247_);
if (v___x_2248_ == 0)
{
lean_object* v___x_2249_; uint8_t v___x_2250_; 
v___x_2249_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__6));
v___x_2250_ = l_Lean_Expr_isConstOf(v___x_2246_, v___x_2249_);
lean_dec_ref(v___x_2246_);
if (v___x_2250_ == 0)
{
lean_object* v___x_2251_; 
lean_dec_ref(v_arg_2242_);
lean_dec_ref(v_inst_2214_);
lean_dec_ref(v_p_2213_);
lean_inc(v_a_2225_);
lean_inc_ref(v_a_2224_);
lean_inc(v_a_2223_);
lean_inc_ref(v_a_2222_);
lean_inc(v_a_2221_);
lean_inc_ref(v_a_2220_);
lean_inc(v_a_2219_);
lean_inc_ref(v_a_2218_);
lean_inc(v_a_2217_);
v___x_2251_ = lean_apply_10(v_fallback_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_, v_a_2225_, lean_box(0));
return v___x_2251_;
}
else
{
lean_object* v___x_2252_; 
lean_dec_ref(v_fallback_2216_);
v___x_2252_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_2220_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; lean_object* v___x_2255_; uint8_t v_isShared_2256_; uint8_t v_isSharedCheck_2263_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2263_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2263_ == 0)
{
v___x_2255_ = v___x_2252_;
v_isShared_2256_ = v_isSharedCheck_2263_;
goto v_resetjp_2254_;
}
else
{
lean_inc(v_a_2253_);
lean_dec(v___x_2252_);
v___x_2255_ = lean_box(0);
v_isShared_2256_ = v_isSharedCheck_2263_;
goto v_resetjp_2254_;
}
v_resetjp_2254_:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2261_; 
v___x_2257_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__2);
v___x_2258_ = l_Lean_mkApp3(v___x_2257_, v_p_2213_, v_inst_2214_, v_arg_2242_);
v___x_2259_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2259_, 0, v_a_2253_);
lean_ctor_set(v___x_2259_, 1, v___x_2258_);
lean_ctor_set_uint8(v___x_2259_, sizeof(void*)*2, v___x_2248_);
lean_ctor_set_uint8(v___x_2259_, sizeof(void*)*2 + 1, v___x_2248_);
if (v_isShared_2256_ == 0)
{
lean_ctor_set(v___x_2255_, 0, v___x_2259_);
v___x_2261_ = v___x_2255_;
goto v_reusejp_2260_;
}
else
{
lean_object* v_reuseFailAlloc_2262_; 
v_reuseFailAlloc_2262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2262_, 0, v___x_2259_);
v___x_2261_ = v_reuseFailAlloc_2262_;
goto v_reusejp_2260_;
}
v_reusejp_2260_:
{
return v___x_2261_;
}
}
}
else
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2271_; 
lean_dec_ref(v_arg_2242_);
lean_dec_ref(v_inst_2214_);
lean_dec_ref(v_p_2213_);
v_a_2264_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2271_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2271_ == 0)
{
v___x_2266_ = v___x_2252_;
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2252_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2269_; 
if (v_isShared_2267_ == 0)
{
v___x_2269_ = v___x_2266_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v_a_2264_);
v___x_2269_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
return v___x_2269_;
}
}
}
}
}
else
{
lean_object* v___x_2272_; 
lean_dec_ref(v___x_2246_);
lean_dec_ref(v_fallback_2216_);
v___x_2272_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_2220_);
if (lean_obj_tag(v___x_2272_) == 0)
{
lean_object* v_a_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2284_; 
v_a_2273_ = lean_ctor_get(v___x_2272_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2272_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2275_ = v___x_2272_;
v_isShared_2276_ = v_isSharedCheck_2284_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_a_2273_);
lean_dec(v___x_2272_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2284_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; uint8_t v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2282_; 
v___x_2277_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__5, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__5_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___closed__5);
v___x_2278_ = l_Lean_mkApp3(v___x_2277_, v_p_2213_, v_inst_2214_, v_arg_2242_);
v___x_2279_ = 0;
v___x_2280_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2280_, 0, v_a_2273_);
lean_ctor_set(v___x_2280_, 1, v___x_2278_);
lean_ctor_set_uint8(v___x_2280_, sizeof(void*)*2, v___x_2279_);
lean_ctor_set_uint8(v___x_2280_, sizeof(void*)*2 + 1, v___x_2279_);
if (v_isShared_2276_ == 0)
{
lean_ctor_set(v___x_2275_, 0, v___x_2280_);
v___x_2282_ = v___x_2275_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v___x_2280_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
}
else
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2292_; 
lean_dec_ref(v_arg_2242_);
lean_dec_ref(v_inst_2214_);
lean_dec_ref(v_p_2213_);
v_a_2285_ = lean_ctor_get(v___x_2272_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2272_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2287_ = v___x_2272_;
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2272_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2290_; 
if (v_isShared_2288_ == 0)
{
v___x_2290_ = v___x_2287_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_a_2285_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
}
}
else
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2300_; 
lean_dec_ref(v_arg_2242_);
lean_dec_ref(v_fallback_2216_);
lean_dec_ref(v_inst_2214_);
lean_dec_ref(v_p_2213_);
v_a_2293_ = lean_ctor_get(v___x_2244_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2244_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2295_ = v___x_2244_;
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2244_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_a_2293_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2308_; 
lean_dec_ref(v_fallback_2216_);
lean_dec_ref(v_inst_2214_);
lean_dec_ref(v_p_2213_);
v_a_2301_ = lean_ctor_get(v___x_2227_, 0);
v_isSharedCheck_2308_ = !lean_is_exclusive(v___x_2227_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2303_ = v___x_2227_;
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_a_2301_);
lean_dec(v___x_2227_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v___x_2306_; 
if (v_isShared_2304_ == 0)
{
v___x_2306_ = v___x_2303_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v_a_2301_);
v___x_2306_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
return v___x_2306_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable___boxed(lean_object* v_p_2309_, lean_object* v_inst_2310_, lean_object* v_instToMatch_2311_, lean_object* v_fallback_2312_, lean_object* v_a_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable(v_p_2309_, v_inst_2310_, v_instToMatch_2311_, v_fallback_2312_, v_a_2313_, v_a_2314_, v_a_2315_, v_a_2316_, v_a_2317_, v_a_2318_, v_a_2319_, v_a_2320_, v_a_2321_);
lean_dec(v_a_2321_);
lean_dec_ref(v_a_2320_);
lean_dec(v_a_2319_);
lean_dec_ref(v_a_2318_);
lean_dec(v_a_2317_);
lean_dec_ref(v_a_2316_);
lean_dec(v_a_2315_);
lean_dec_ref(v_a_2314_);
lean_dec(v_a_2313_);
return v_res_2323_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__2(void){
_start:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2329_ = lean_box(0);
v___x_2330_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__1));
v___x_2331_ = l_Lean_mkConst(v___x_2330_, v___x_2329_);
return v___x_2331_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__5(void){
_start:
{
lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; 
v___x_2337_ = lean_box(0);
v___x_2338_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__4));
v___x_2339_ = l_Lean_mkConst(v___x_2338_, v___x_2337_);
return v___x_2339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr(lean_object* v_p_2340_, lean_object* v_p_x27_2341_, lean_object* v_h_2342_, lean_object* v_inst_2343_, lean_object* v_inst_x27_2344_, lean_object* v_fallback_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_){
_start:
{
lean_object* v___x_2356_; 
v___x_2356_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_inst_x27_2344_, v_a_2352_);
if (lean_obj_tag(v___x_2356_) == 0)
{
lean_object* v_a_2357_; lean_object* v___x_2358_; uint8_t v___x_2359_; 
v_a_2357_ = lean_ctor_get(v___x_2356_, 0);
lean_inc(v_a_2357_);
lean_dec_ref_known(v___x_2356_, 1);
v___x_2358_ = l_Lean_Expr_cleanupAnnotations(v_a_2357_);
lean_dec(v_a_2357_);
v___x_2359_ = l_Lean_Expr_isApp(v___x_2358_);
if (v___x_2359_ == 0)
{
lean_object* v___x_2360_; 
lean_dec_ref(v___x_2358_);
lean_dec_ref(v_inst_2343_);
lean_dec_ref(v_h_2342_);
lean_dec_ref(v_p_x27_2341_);
lean_dec_ref(v_p_2340_);
lean_inc(v_a_2354_);
lean_inc_ref(v_a_2353_);
lean_inc(v_a_2352_);
lean_inc_ref(v_a_2351_);
lean_inc(v_a_2350_);
lean_inc_ref(v_a_2349_);
lean_inc(v_a_2348_);
lean_inc_ref(v_a_2347_);
lean_inc(v_a_2346_);
v___x_2360_ = lean_apply_10(v_fallback_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_, v_a_2354_, lean_box(0));
return v___x_2360_;
}
else
{
lean_object* v___x_2361_; uint8_t v___x_2362_; 
v___x_2361_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2358_);
v___x_2362_ = l_Lean_Expr_isApp(v___x_2361_);
if (v___x_2362_ == 0)
{
lean_object* v___x_2363_; 
lean_dec_ref(v___x_2361_);
lean_dec_ref(v___x_2358_);
lean_dec_ref(v_inst_2343_);
lean_dec_ref(v_h_2342_);
lean_dec_ref(v_p_x27_2341_);
lean_dec_ref(v_p_2340_);
lean_inc(v_a_2354_);
lean_inc_ref(v_a_2353_);
lean_inc(v_a_2352_);
lean_inc_ref(v_a_2351_);
lean_inc(v_a_2350_);
lean_inc_ref(v_a_2349_);
lean_inc(v_a_2348_);
lean_inc_ref(v_a_2347_);
lean_inc(v_a_2346_);
v___x_2363_ = lean_apply_10(v_fallback_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_, v_a_2354_, lean_box(0));
return v___x_2363_;
}
else
{
lean_object* v___x_2364_; uint8_t v___x_2365_; 
v___x_2364_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2361_);
v___x_2365_ = l_Lean_Expr_isApp(v___x_2364_);
if (v___x_2365_ == 0)
{
lean_object* v___x_2366_; 
lean_dec_ref(v___x_2364_);
lean_dec_ref(v___x_2361_);
lean_dec_ref(v___x_2358_);
lean_dec_ref(v_inst_2343_);
lean_dec_ref(v_h_2342_);
lean_dec_ref(v_p_x27_2341_);
lean_dec_ref(v_p_2340_);
lean_inc(v_a_2354_);
lean_inc_ref(v_a_2353_);
lean_inc(v_a_2352_);
lean_inc_ref(v_a_2351_);
lean_inc(v_a_2350_);
lean_inc_ref(v_a_2349_);
lean_inc(v_a_2348_);
lean_inc_ref(v_a_2347_);
lean_inc(v_a_2346_);
v___x_2366_ = lean_apply_10(v_fallback_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_, v_a_2354_, lean_box(0));
return v___x_2366_;
}
else
{
lean_object* v___x_2367_; lean_object* v___x_2368_; uint8_t v___x_2369_; 
v___x_2367_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2364_);
lean_dec_ref(v___x_2364_);
v___x_2368_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__1));
v___x_2369_ = l_Lean_Expr_isConstOf(v___x_2367_, v___x_2368_);
lean_dec_ref(v___x_2367_);
if (v___x_2369_ == 0)
{
lean_object* v___x_2370_; 
lean_dec_ref(v___x_2361_);
lean_dec_ref(v___x_2358_);
lean_dec_ref(v_inst_2343_);
lean_dec_ref(v_h_2342_);
lean_dec_ref(v_p_x27_2341_);
lean_dec_ref(v_p_2340_);
lean_inc(v_a_2354_);
lean_inc_ref(v_a_2353_);
lean_inc(v_a_2352_);
lean_inc_ref(v_a_2351_);
lean_inc(v_a_2350_);
lean_inc_ref(v_a_2349_);
lean_inc(v_a_2348_);
lean_inc_ref(v_a_2347_);
lean_inc(v_a_2346_);
v___x_2370_ = lean_apply_10(v_fallback_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_, v_a_2354_, lean_box(0));
return v___x_2370_;
}
else
{
lean_object* v_arg_2371_; lean_object* v_arg_2372_; lean_object* v___x_2373_; 
v_arg_2371_ = lean_ctor_get(v___x_2358_, 1);
lean_inc_ref(v_arg_2371_);
lean_dec_ref(v___x_2358_);
v_arg_2372_ = lean_ctor_get(v___x_2361_, 1);
lean_inc_ref(v_arg_2372_);
lean_dec_ref(v___x_2361_);
v___x_2373_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_arg_2372_, v_a_2352_);
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_object* v_a_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; uint8_t v___x_2377_; 
v_a_2374_ = lean_ctor_get(v___x_2373_, 0);
lean_inc(v_a_2374_);
lean_dec_ref_known(v___x_2373_, 1);
v___x_2375_ = l_Lean_Expr_cleanupAnnotations(v_a_2374_);
lean_dec(v_a_2374_);
v___x_2376_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__4));
v___x_2377_ = l_Lean_Expr_isConstOf(v___x_2375_, v___x_2376_);
if (v___x_2377_ == 0)
{
lean_object* v___x_2378_; uint8_t v___x_2379_; 
v___x_2378_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDIteDecidable___closed__6));
v___x_2379_ = l_Lean_Expr_isConstOf(v___x_2375_, v___x_2378_);
lean_dec_ref(v___x_2375_);
if (v___x_2379_ == 0)
{
lean_object* v___x_2380_; 
lean_dec_ref(v_arg_2371_);
lean_dec_ref(v_inst_2343_);
lean_dec_ref(v_h_2342_);
lean_dec_ref(v_p_x27_2341_);
lean_dec_ref(v_p_2340_);
lean_inc(v_a_2354_);
lean_inc_ref(v_a_2353_);
lean_inc(v_a_2352_);
lean_inc_ref(v_a_2351_);
lean_inc(v_a_2350_);
lean_inc_ref(v_a_2349_);
lean_inc(v_a_2348_);
lean_inc_ref(v_a_2347_);
lean_inc(v_a_2346_);
v___x_2380_ = lean_apply_10(v_fallback_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_, v_a_2354_, lean_box(0));
return v___x_2380_;
}
else
{
lean_object* v___x_2381_; 
lean_dec_ref(v_fallback_2345_);
v___x_2381_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_2349_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2392_; 
v_a_2382_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2392_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2392_ == 0)
{
v___x_2384_ = v___x_2381_;
v_isShared_2385_ = v_isSharedCheck_2392_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v___x_2381_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2392_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2390_; 
v___x_2386_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__2);
v___x_2387_ = l_Lean_mkApp5(v___x_2386_, v_p_2340_, v_p_x27_2341_, v_h_2342_, v_inst_2343_, v_arg_2371_);
v___x_2388_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2388_, 0, v_a_2382_);
lean_ctor_set(v___x_2388_, 1, v___x_2387_);
lean_ctor_set_uint8(v___x_2388_, sizeof(void*)*2, v___x_2377_);
lean_ctor_set_uint8(v___x_2388_, sizeof(void*)*2 + 1, v___x_2377_);
if (v_isShared_2385_ == 0)
{
lean_ctor_set(v___x_2384_, 0, v___x_2388_);
v___x_2390_ = v___x_2384_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v___x_2388_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
}
else
{
lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2400_; 
lean_dec_ref(v_arg_2371_);
lean_dec_ref(v_inst_2343_);
lean_dec_ref(v_h_2342_);
lean_dec_ref(v_p_x27_2341_);
lean_dec_ref(v_p_2340_);
v_a_2393_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2395_ = v___x_2381_;
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2381_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2398_; 
if (v_isShared_2396_ == 0)
{
v___x_2398_ = v___x_2395_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_a_2393_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
}
}
else
{
lean_object* v___x_2401_; 
lean_dec_ref(v___x_2375_);
lean_dec_ref(v_fallback_2345_);
v___x_2401_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_2349_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v_a_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2413_; 
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
v_isSharedCheck_2413_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2404_ = v___x_2401_;
v_isShared_2405_ = v_isSharedCheck_2413_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_a_2402_);
lean_dec(v___x_2401_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2413_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; uint8_t v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2411_; 
v___x_2406_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__5, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__5_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___closed__5);
v___x_2407_ = l_Lean_mkApp5(v___x_2406_, v_p_2340_, v_p_x27_2341_, v_h_2342_, v_inst_2343_, v_arg_2371_);
v___x_2408_ = 0;
v___x_2409_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2409_, 0, v_a_2402_);
lean_ctor_set(v___x_2409_, 1, v___x_2407_);
lean_ctor_set_uint8(v___x_2409_, sizeof(void*)*2, v___x_2408_);
lean_ctor_set_uint8(v___x_2409_, sizeof(void*)*2 + 1, v___x_2408_);
if (v_isShared_2405_ == 0)
{
lean_ctor_set(v___x_2404_, 0, v___x_2409_);
v___x_2411_ = v___x_2404_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v___x_2409_);
v___x_2411_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
return v___x_2411_;
}
}
}
else
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2421_; 
lean_dec_ref(v_arg_2371_);
lean_dec_ref(v_inst_2343_);
lean_dec_ref(v_h_2342_);
lean_dec_ref(v_p_x27_2341_);
lean_dec_ref(v_p_2340_);
v_a_2414_ = lean_ctor_get(v___x_2401_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2416_ = v___x_2401_;
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2401_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2419_; 
if (v_isShared_2417_ == 0)
{
v___x_2419_ = v___x_2416_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_a_2414_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
}
}
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2429_; 
lean_dec_ref(v_arg_2371_);
lean_dec_ref(v_fallback_2345_);
lean_dec_ref(v_inst_2343_);
lean_dec_ref(v_h_2342_);
lean_dec_ref(v_p_x27_2341_);
lean_dec_ref(v_p_2340_);
v_a_2422_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2424_ = v___x_2373_;
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2373_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2427_; 
if (v_isShared_2425_ == 0)
{
v___x_2427_ = v___x_2424_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_a_2422_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2437_; 
lean_dec_ref(v_fallback_2345_);
lean_dec_ref(v_inst_2343_);
lean_dec_ref(v_h_2342_);
lean_dec_ref(v_p_x27_2341_);
lean_dec_ref(v_p_2340_);
v_a_2430_ = lean_ctor_get(v___x_2356_, 0);
v_isSharedCheck_2437_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2432_ = v___x_2356_;
v_isShared_2433_ = v_isSharedCheck_2437_;
goto v_resetjp_2431_;
}
else
{
lean_inc(v_a_2430_);
lean_dec(v___x_2356_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2437_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
lean_object* v___x_2435_; 
if (v_isShared_2433_ == 0)
{
v___x_2435_ = v___x_2432_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v_a_2430_);
v___x_2435_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
return v___x_2435_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr___boxed(lean_object* v_p_2438_, lean_object* v_p_x27_2439_, lean_object* v_h_2440_, lean_object* v_inst_2441_, lean_object* v_inst_x27_2442_, lean_object* v_fallback_2443_, lean_object* v_a_2444_, lean_object* v_a_2445_, lean_object* v_a_2446_, lean_object* v_a_2447_, lean_object* v_a_2448_, lean_object* v_a_2449_, lean_object* v_a_2450_, lean_object* v_a_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_){
_start:
{
lean_object* v_res_2454_; 
v_res_2454_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr(v_p_2438_, v_p_x27_2439_, v_h_2440_, v_inst_2441_, v_inst_x27_2442_, v_fallback_2443_, v_a_2444_, v_a_2445_, v_a_2446_, v_a_2447_, v_a_2448_, v_a_2449_, v_a_2450_, v_a_2451_, v_a_2452_);
lean_dec(v_a_2452_);
lean_dec_ref(v_a_2451_);
lean_dec(v_a_2450_);
lean_dec_ref(v_a_2449_);
lean_dec(v_a_2448_);
lean_dec_ref(v_a_2447_);
lean_dec(v_a_2446_);
lean_dec_ref(v_a_2445_);
lean_dec(v_a_2444_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidable(lean_object* v_p_2455_, lean_object* v_inst_2456_, lean_object* v_fallback_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_){
_start:
{
lean_object* v___x_2468_; uint8_t v___x_2469_; lean_object* v___x_2470_; lean_object* v___f_2471_; lean_object* v___x_2472_; 
v___x_2468_ = lean_unsigned_to_nat(0u);
v___x_2469_ = 5;
v___x_2470_ = lean_box(v___x_2469_);
lean_inc_ref(v_inst_2456_);
v___f_2471_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___lam__0___boxed), 8, 3);
lean_closure_set(v___f_2471_, 0, v___x_2470_);
lean_closure_set(v___f_2471_, 1, v_inst_2456_);
lean_closure_set(v___f_2471_, 2, v___x_2468_);
v___x_2472_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v___f_2471_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_);
if (lean_obj_tag(v___x_2472_) == 0)
{
lean_object* v_a_2473_; 
v_a_2473_ = lean_ctor_get(v___x_2472_, 0);
lean_inc(v_a_2473_);
lean_dec_ref_known(v___x_2472_, 1);
if (lean_obj_tag(v_a_2473_) == 0)
{
lean_object* v___x_2474_; 
lean_inc(v_a_2466_);
lean_inc_ref(v_a_2465_);
lean_inc(v_a_2464_);
lean_inc_ref(v_a_2463_);
lean_inc(v_a_2462_);
lean_inc_ref(v_a_2461_);
lean_inc(v_a_2460_);
lean_inc_ref(v_a_2459_);
lean_inc(v_a_2458_);
lean_inc_ref(v_inst_2456_);
v___x_2474_ = lean_sym_simp(v_inst_2456_, v_a_2458_, v_a_2459_, v_a_2460_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; 
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___x_2474_, 1);
if (lean_obj_tag(v_a_2475_) == 0)
{
uint8_t v_contextDependent_2476_; lean_object* v___x_2477_; 
v_contextDependent_2476_ = lean_ctor_get_uint8(v_a_2475_, 1);
lean_dec_ref_known(v_a_2475_, 0);
lean_inc_ref(v_inst_2456_);
v___x_2477_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable(v_p_2455_, v_inst_2456_, v_inst_2456_, v_fallback_2457_, v_a_2458_, v_a_2459_, v_a_2460_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_);
if (lean_obj_tag(v___x_2477_) == 0)
{
lean_object* v_a_2478_; uint8_t v___y_2480_; 
v_a_2478_ = lean_ctor_get(v___x_2477_, 0);
if (v_contextDependent_2476_ == 0)
{
return v___x_2477_;
}
else
{
if (lean_obj_tag(v_a_2478_) == 0)
{
uint8_t v_contextDependent_2490_; 
v_contextDependent_2490_ = lean_ctor_get_uint8(v_a_2478_, 1);
v___y_2480_ = v_contextDependent_2490_;
goto v___jp_2479_;
}
else
{
uint8_t v_contextDependent_2491_; 
v_contextDependent_2491_ = lean_ctor_get_uint8(v_a_2478_, sizeof(void*)*2 + 1);
v___y_2480_ = v_contextDependent_2491_;
goto v___jp_2479_;
}
}
v___jp_2479_:
{
if (v___y_2480_ == 0)
{
lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2488_; 
lean_inc(v_a_2478_);
v_isSharedCheck_2488_ = !lean_is_exclusive(v___x_2477_);
if (v_isSharedCheck_2488_ == 0)
{
lean_object* v_unused_2489_; 
v_unused_2489_ = lean_ctor_get(v___x_2477_, 0);
lean_dec(v_unused_2489_);
v___x_2482_ = v___x_2477_;
v_isShared_2483_ = v_isSharedCheck_2488_;
goto v_resetjp_2481_;
}
else
{
lean_dec(v___x_2477_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2488_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2484_; lean_object* v___x_2486_; 
v___x_2484_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2478_);
if (v_isShared_2483_ == 0)
{
lean_ctor_set(v___x_2482_, 0, v___x_2484_);
v___x_2486_ = v___x_2482_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v___x_2484_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
else
{
return v___x_2477_;
}
}
}
else
{
return v___x_2477_;
}
}
else
{
lean_object* v_e_x27_2492_; uint8_t v_contextDependent_2493_; lean_object* v___x_2494_; 
v_e_x27_2492_ = lean_ctor_get(v_a_2475_, 0);
lean_inc_ref(v_e_x27_2492_);
v_contextDependent_2493_ = lean_ctor_get_uint8(v_a_2475_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_2475_, 2);
v___x_2494_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidable(v_p_2455_, v_inst_2456_, v_e_x27_2492_, v_fallback_2457_, v_a_2458_, v_a_2459_, v_a_2460_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_a_2495_; uint8_t v___y_2497_; 
v_a_2495_ = lean_ctor_get(v___x_2494_, 0);
if (v_contextDependent_2493_ == 0)
{
return v___x_2494_;
}
else
{
if (lean_obj_tag(v_a_2495_) == 0)
{
uint8_t v_contextDependent_2507_; 
v_contextDependent_2507_ = lean_ctor_get_uint8(v_a_2495_, 1);
v___y_2497_ = v_contextDependent_2507_;
goto v___jp_2496_;
}
else
{
uint8_t v_contextDependent_2508_; 
v_contextDependent_2508_ = lean_ctor_get_uint8(v_a_2495_, sizeof(void*)*2 + 1);
v___y_2497_ = v_contextDependent_2508_;
goto v___jp_2496_;
}
}
v___jp_2496_:
{
if (v___y_2497_ == 0)
{
lean_object* v___x_2499_; uint8_t v_isShared_2500_; uint8_t v_isSharedCheck_2505_; 
lean_inc(v_a_2495_);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2505_ == 0)
{
lean_object* v_unused_2506_; 
v_unused_2506_ = lean_ctor_get(v___x_2494_, 0);
lean_dec(v_unused_2506_);
v___x_2499_ = v___x_2494_;
v_isShared_2500_ = v_isSharedCheck_2505_;
goto v_resetjp_2498_;
}
else
{
lean_dec(v___x_2494_);
v___x_2499_ = lean_box(0);
v_isShared_2500_ = v_isSharedCheck_2505_;
goto v_resetjp_2498_;
}
v_resetjp_2498_:
{
lean_object* v___x_2501_; lean_object* v___x_2503_; 
v___x_2501_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2495_);
if (v_isShared_2500_ == 0)
{
lean_ctor_set(v___x_2499_, 0, v___x_2501_);
v___x_2503_ = v___x_2499_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v___x_2501_);
v___x_2503_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
return v___x_2503_;
}
}
}
else
{
return v___x_2494_;
}
}
}
else
{
return v___x_2494_;
}
}
}
else
{
lean_dec_ref(v_fallback_2457_);
lean_dec_ref(v_inst_2456_);
lean_dec_ref(v_p_2455_);
return v___x_2474_;
}
}
else
{
lean_object* v_val_2509_; lean_object* v___x_2510_; 
lean_dec_ref(v_fallback_2457_);
lean_dec_ref(v_inst_2456_);
lean_dec_ref(v_p_2455_);
v_val_2509_ = lean_ctor_get(v_a_2473_, 0);
lean_inc(v_val_2509_);
lean_dec_ref_known(v_a_2473_, 1);
v___x_2510_ = l_Lean_Meta_Sym_shareCommonInc(v_val_2509_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v_a_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2523_; 
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2513_ = v___x_2510_;
v_isShared_2514_ = v_isSharedCheck_2523_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_a_2511_);
lean_dec(v___x_2510_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2523_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; uint8_t v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2521_; 
v___x_2515_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7);
v___x_2516_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9);
lean_inc(v_a_2511_);
v___x_2517_ = l_Lean_mkAppB(v___x_2515_, v___x_2516_, v_a_2511_);
v___x_2518_ = 0;
v___x_2519_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2519_, 0, v_a_2511_);
lean_ctor_set(v___x_2519_, 1, v___x_2517_);
lean_ctor_set_uint8(v___x_2519_, sizeof(void*)*2, v___x_2518_);
lean_ctor_set_uint8(v___x_2519_, sizeof(void*)*2 + 1, v___x_2518_);
if (v_isShared_2514_ == 0)
{
lean_ctor_set(v___x_2513_, 0, v___x_2519_);
v___x_2521_ = v___x_2513_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v___x_2519_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
return v___x_2521_;
}
}
}
else
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2531_; 
v_a_2524_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2531_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2526_ = v___x_2510_;
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v___x_2510_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2529_; 
if (v_isShared_2527_ == 0)
{
v___x_2529_ = v___x_2526_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v_a_2524_);
v___x_2529_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
return v___x_2529_;
}
}
}
}
}
else
{
lean_object* v_a_2532_; lean_object* v___x_2534_; uint8_t v_isShared_2535_; uint8_t v_isSharedCheck_2539_; 
lean_dec_ref(v_fallback_2457_);
lean_dec_ref(v_inst_2456_);
lean_dec_ref(v_p_2455_);
v_a_2532_ = lean_ctor_get(v___x_2472_, 0);
v_isSharedCheck_2539_ = !lean_is_exclusive(v___x_2472_);
if (v_isSharedCheck_2539_ == 0)
{
v___x_2534_ = v___x_2472_;
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
else
{
lean_inc(v_a_2532_);
lean_dec(v___x_2472_);
v___x_2534_ = lean_box(0);
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
v_resetjp_2533_:
{
lean_object* v___x_2537_; 
if (v_isShared_2535_ == 0)
{
v___x_2537_ = v___x_2534_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v_a_2532_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
return v___x_2537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidable___boxed(lean_object* v_p_2540_, lean_object* v_inst_2541_, lean_object* v_fallback_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_, lean_object* v_a_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidable(v_p_2540_, v_inst_2541_, v_fallback_2542_, v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_, v_a_2551_);
lean_dec(v_a_2551_);
lean_dec_ref(v_a_2550_);
lean_dec(v_a_2549_);
lean_dec_ref(v_a_2548_);
lean_dec(v_a_2547_);
lean_dec_ref(v_a_2546_);
lean_dec(v_a_2545_);
lean_dec_ref(v_a_2544_);
lean_dec(v_a_2543_);
return v_res_2553_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__2(void){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; 
v___x_2559_ = lean_box(0);
v___x_2560_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__1));
v___x_2561_ = l_Lean_mkConst(v___x_2560_, v___x_2559_);
return v___x_2561_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr(lean_object* v_p_2562_, lean_object* v_p_x27_2563_, lean_object* v_h_2564_, lean_object* v_inst_2565_, lean_object* v_inst_x27_2566_, lean_object* v_fallback_2567_, lean_object* v_a_2568_, lean_object* v_a_2569_, lean_object* v_a_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_){
_start:
{
lean_object* v___x_2578_; uint8_t v___x_2579_; lean_object* v___x_2580_; lean_object* v___f_2581_; lean_object* v___x_2582_; 
v___x_2578_ = lean_unsigned_to_nat(0u);
v___x_2579_ = 5;
v___x_2580_ = lean_box(v___x_2579_);
lean_inc_ref(v_inst_x27_2566_);
v___f_2581_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidableCongr___lam__0___boxed), 8, 3);
lean_closure_set(v___f_2581_, 0, v___x_2580_);
lean_closure_set(v___f_2581_, 1, v_inst_x27_2566_);
lean_closure_set(v___f_2581_, 2, v___x_2578_);
v___x_2582_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v___f_2581_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
lean_inc(v_a_2583_);
lean_dec_ref_known(v___x_2582_, 1);
if (lean_obj_tag(v_a_2583_) == 0)
{
lean_object* v___x_2584_; 
lean_inc(v_a_2576_);
lean_inc_ref(v_a_2575_);
lean_inc(v_a_2574_);
lean_inc_ref(v_a_2573_);
lean_inc(v_a_2572_);
lean_inc_ref(v_a_2571_);
lean_inc(v_a_2570_);
lean_inc_ref(v_a_2569_);
lean_inc(v_a_2568_);
lean_inc_ref(v_inst_x27_2566_);
v___x_2584_ = lean_sym_simp(v_inst_x27_2566_, v_a_2568_, v_a_2569_, v_a_2570_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_);
if (lean_obj_tag(v___x_2584_) == 0)
{
lean_object* v_a_2585_; 
v_a_2585_ = lean_ctor_get(v___x_2584_, 0);
lean_inc(v_a_2585_);
lean_dec_ref_known(v___x_2584_, 1);
if (lean_obj_tag(v_a_2585_) == 0)
{
uint8_t v_contextDependent_2586_; lean_object* v___x_2587_; 
v_contextDependent_2586_ = lean_ctor_get_uint8(v_a_2585_, 1);
lean_dec_ref_known(v_a_2585_, 0);
v___x_2587_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr(v_p_2562_, v_p_x27_2563_, v_h_2564_, v_inst_2565_, v_inst_x27_2566_, v_fallback_2567_, v_a_2568_, v_a_2569_, v_a_2570_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_);
if (lean_obj_tag(v___x_2587_) == 0)
{
lean_object* v_a_2588_; uint8_t v___y_2590_; 
v_a_2588_ = lean_ctor_get(v___x_2587_, 0);
if (v_contextDependent_2586_ == 0)
{
return v___x_2587_;
}
else
{
if (lean_obj_tag(v_a_2588_) == 0)
{
uint8_t v_contextDependent_2600_; 
v_contextDependent_2600_ = lean_ctor_get_uint8(v_a_2588_, 1);
v___y_2590_ = v_contextDependent_2600_;
goto v___jp_2589_;
}
else
{
uint8_t v_contextDependent_2601_; 
v_contextDependent_2601_ = lean_ctor_get_uint8(v_a_2588_, sizeof(void*)*2 + 1);
v___y_2590_ = v_contextDependent_2601_;
goto v___jp_2589_;
}
}
v___jp_2589_:
{
if (v___y_2590_ == 0)
{
lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2598_; 
lean_inc(v_a_2588_);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2587_);
if (v_isSharedCheck_2598_ == 0)
{
lean_object* v_unused_2599_; 
v_unused_2599_ = lean_ctor_get(v___x_2587_, 0);
lean_dec(v_unused_2599_);
v___x_2592_ = v___x_2587_;
v_isShared_2593_ = v_isSharedCheck_2598_;
goto v_resetjp_2591_;
}
else
{
lean_dec(v___x_2587_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2598_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v___x_2594_; lean_object* v___x_2596_; 
v___x_2594_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2588_);
if (v_isShared_2593_ == 0)
{
lean_ctor_set(v___x_2592_, 0, v___x_2594_);
v___x_2596_ = v___x_2592_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v___x_2594_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
else
{
return v___x_2587_;
}
}
}
else
{
return v___x_2587_;
}
}
else
{
lean_object* v_e_x27_2602_; uint8_t v_contextDependent_2603_; lean_object* v___x_2604_; 
lean_dec_ref(v_inst_x27_2566_);
v_e_x27_2602_ = lean_ctor_get(v_a_2585_, 0);
lean_inc_ref(v_e_x27_2602_);
v_contextDependent_2603_ = lean_ctor_get_uint8(v_a_2585_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_2585_, 2);
v___x_2604_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_matchDecideDecidableCongr(v_p_2562_, v_p_x27_2563_, v_h_2564_, v_inst_2565_, v_e_x27_2602_, v_fallback_2567_, v_a_2568_, v_a_2569_, v_a_2570_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_);
if (lean_obj_tag(v___x_2604_) == 0)
{
lean_object* v_a_2605_; uint8_t v___y_2607_; 
v_a_2605_ = lean_ctor_get(v___x_2604_, 0);
if (v_contextDependent_2603_ == 0)
{
return v___x_2604_;
}
else
{
if (lean_obj_tag(v_a_2605_) == 0)
{
uint8_t v_contextDependent_2617_; 
v_contextDependent_2617_ = lean_ctor_get_uint8(v_a_2605_, 1);
v___y_2607_ = v_contextDependent_2617_;
goto v___jp_2606_;
}
else
{
uint8_t v_contextDependent_2618_; 
v_contextDependent_2618_ = lean_ctor_get_uint8(v_a_2605_, sizeof(void*)*2 + 1);
v___y_2607_ = v_contextDependent_2618_;
goto v___jp_2606_;
}
}
v___jp_2606_:
{
if (v___y_2607_ == 0)
{
lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2615_; 
lean_inc(v_a_2605_);
v_isSharedCheck_2615_ = !lean_is_exclusive(v___x_2604_);
if (v_isSharedCheck_2615_ == 0)
{
lean_object* v_unused_2616_; 
v_unused_2616_ = lean_ctor_get(v___x_2604_, 0);
lean_dec(v_unused_2616_);
v___x_2609_ = v___x_2604_;
v_isShared_2610_ = v_isSharedCheck_2615_;
goto v_resetjp_2608_;
}
else
{
lean_dec(v___x_2604_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2615_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2611_; lean_object* v___x_2613_; 
v___x_2611_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2605_);
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 0, v___x_2611_);
v___x_2613_ = v___x_2609_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v___x_2611_);
v___x_2613_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
return v___x_2613_;
}
}
}
else
{
return v___x_2604_;
}
}
}
else
{
return v___x_2604_;
}
}
}
else
{
lean_dec_ref(v_fallback_2567_);
lean_dec_ref(v_inst_x27_2566_);
lean_dec_ref(v_inst_2565_);
lean_dec_ref(v_h_2564_);
lean_dec_ref(v_p_x27_2563_);
lean_dec_ref(v_p_2562_);
return v___x_2584_;
}
}
else
{
lean_object* v_val_2619_; lean_object* v___x_2620_; 
lean_dec_ref(v_fallback_2567_);
v_val_2619_ = lean_ctor_get(v_a_2583_, 0);
lean_inc(v_val_2619_);
lean_dec_ref_known(v_a_2583_, 1);
v___x_2620_ = l_Lean_Meta_Sym_shareCommonInc(v_val_2619_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_, v_a_2575_, v_a_2576_);
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2635_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2623_ = v___x_2620_;
v_isShared_2624_ = v_isSharedCheck_2635_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_dec(v___x_2620_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2635_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; uint8_t v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2633_; 
v___x_2625_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__7);
v___x_2626_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__9);
lean_inc_n(v_a_2621_, 2);
v___x_2627_ = l_Lean_mkAppB(v___x_2625_, v___x_2626_, v_a_2621_);
v___x_2628_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___closed__2);
v___x_2629_ = l_Lean_mkApp7(v___x_2628_, v_p_2562_, v_p_x27_2563_, v_h_2564_, v_inst_2565_, v_inst_x27_2566_, v_a_2621_, v___x_2627_);
v___x_2630_ = 0;
v___x_2631_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2631_, 0, v_a_2621_);
lean_ctor_set(v___x_2631_, 1, v___x_2629_);
lean_ctor_set_uint8(v___x_2631_, sizeof(void*)*2, v___x_2630_);
lean_ctor_set_uint8(v___x_2631_, sizeof(void*)*2 + 1, v___x_2630_);
if (v_isShared_2624_ == 0)
{
lean_ctor_set(v___x_2623_, 0, v___x_2631_);
v___x_2633_ = v___x_2623_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v___x_2631_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
else
{
lean_object* v_a_2636_; lean_object* v___x_2638_; uint8_t v_isShared_2639_; uint8_t v_isSharedCheck_2643_; 
lean_dec_ref(v_inst_x27_2566_);
lean_dec_ref(v_inst_2565_);
lean_dec_ref(v_h_2564_);
lean_dec_ref(v_p_x27_2563_);
lean_dec_ref(v_p_2562_);
v_a_2636_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2643_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2643_ == 0)
{
v___x_2638_ = v___x_2620_;
v_isShared_2639_ = v_isSharedCheck_2643_;
goto v_resetjp_2637_;
}
else
{
lean_inc(v_a_2636_);
lean_dec(v___x_2620_);
v___x_2638_ = lean_box(0);
v_isShared_2639_ = v_isSharedCheck_2643_;
goto v_resetjp_2637_;
}
v_resetjp_2637_:
{
lean_object* v___x_2641_; 
if (v_isShared_2639_ == 0)
{
v___x_2641_ = v___x_2638_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v_a_2636_);
v___x_2641_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
return v___x_2641_;
}
}
}
}
}
else
{
lean_object* v_a_2644_; lean_object* v___x_2646_; uint8_t v_isShared_2647_; uint8_t v_isSharedCheck_2651_; 
lean_dec_ref(v_fallback_2567_);
lean_dec_ref(v_inst_x27_2566_);
lean_dec_ref(v_inst_2565_);
lean_dec_ref(v_h_2564_);
lean_dec_ref(v_p_x27_2563_);
lean_dec_ref(v_p_2562_);
v_a_2644_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2651_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2651_ == 0)
{
v___x_2646_ = v___x_2582_;
v_isShared_2647_ = v_isSharedCheck_2651_;
goto v_resetjp_2645_;
}
else
{
lean_inc(v_a_2644_);
lean_dec(v___x_2582_);
v___x_2646_ = lean_box(0);
v_isShared_2647_ = v_isSharedCheck_2651_;
goto v_resetjp_2645_;
}
v_resetjp_2645_:
{
lean_object* v___x_2649_; 
if (v_isShared_2647_ == 0)
{
v___x_2649_ = v___x_2646_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v_a_2644_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
return v___x_2649_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr___boxed(lean_object* v_p_2652_, lean_object* v_p_x27_2653_, lean_object* v_h_2654_, lean_object* v_inst_2655_, lean_object* v_inst_x27_2656_, lean_object* v_fallback_2657_, lean_object* v_a_2658_, lean_object* v_a_2659_, lean_object* v_a_2660_, lean_object* v_a_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr(v_p_2652_, v_p_x27_2653_, v_h_2654_, v_inst_2655_, v_inst_x27_2656_, v_fallback_2657_, v_a_2658_, v_a_2659_, v_a_2660_, v_a_2661_, v_a_2662_, v_a_2663_, v_a_2664_, v_a_2665_, v_a_2666_);
lean_dec(v_a_2666_);
lean_dec_ref(v_a_2665_);
lean_dec(v_a_2664_);
lean_dec_ref(v_a_2663_);
lean_dec(v_a_2662_);
lean_dec_ref(v_a_2661_);
lean_dec(v_a_2660_);
lean_dec_ref(v_a_2659_);
lean_dec(v_a_2658_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv_spec__0___redArg(lean_object* v_structName_2669_, lean_object* v_idx_2670_, lean_object* v_struct_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_){
_start:
{
lean_object* v___y_2680_; lean_object* v___x_2683_; uint8_t v_debug_2684_; 
v___x_2683_ = lean_st_ref_get(v___y_2673_);
v_debug_2684_ = lean_ctor_get_uint8(v___x_2683_, sizeof(void*)*13);
lean_dec(v___x_2683_);
if (v_debug_2684_ == 0)
{
v___y_2680_ = v___y_2673_;
goto v___jp_2679_;
}
else
{
lean_object* v___x_2685_; 
v___x_2685_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_struct_2671_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_);
if (lean_obj_tag(v___x_2685_) == 0)
{
lean_dec_ref_known(v___x_2685_, 1);
v___y_2680_ = v___y_2673_;
goto v___jp_2679_;
}
else
{
lean_object* v_a_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2693_; 
lean_dec_ref(v_struct_2671_);
lean_dec(v_idx_2670_);
lean_dec(v_structName_2669_);
v_a_2686_ = lean_ctor_get(v___x_2685_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2685_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2688_ = v___x_2685_;
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_a_2686_);
lean_dec(v___x_2685_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2691_; 
if (v_isShared_2689_ == 0)
{
v___x_2691_ = v___x_2688_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2686_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
}
}
v___jp_2679_:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2681_ = l_Lean_Expr_proj___override(v_structName_2669_, v_idx_2670_, v_struct_2671_);
v___x_2682_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2681_, v___y_2680_);
return v___x_2682_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv_spec__0___redArg___boxed(lean_object* v_structName_2694_, lean_object* v_idx_2695_, lean_object* v_struct_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_){
_start:
{
lean_object* v_res_2704_; 
v_res_2704_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv_spec__0___redArg(v_structName_2694_, v_idx_2695_, v_struct_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_);
lean_dec(v___y_2702_);
lean_dec_ref(v___y_2701_);
lean_dec(v___y_2700_);
lean_dec_ref(v___y_2699_);
lean_dec(v___y_2698_);
lean_dec_ref(v___y_2697_);
return v_res_2704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv_spec__0(lean_object* v_structName_2705_, lean_object* v_idx_2706_, lean_object* v_struct_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_){
_start:
{
lean_object* v___x_2718_; 
v___x_2718_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv_spec__0___redArg(v_structName_2705_, v_idx_2706_, v_struct_2707_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_);
return v___x_2718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv_spec__0___boxed(lean_object* v_structName_2719_, lean_object* v_idx_2720_, lean_object* v_struct_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_){
_start:
{
lean_object* v_res_2732_; 
v_res_2732_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv_spec__0(v_structName_2719_, v_idx_2720_, v_struct_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_);
lean_dec(v___y_2730_);
lean_dec_ref(v___y_2729_);
lean_dec(v___y_2728_);
lean_dec_ref(v___y_2727_);
lean_dec(v___y_2726_);
lean_dec_ref(v___y_2725_);
lean_dec(v___y_2724_);
lean_dec_ref(v___y_2723_);
lean_dec(v___y_2722_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___lam__2(lean_object* v___x_2734_, lean_object* v___x_2735_, lean_object* v_snd_2736_, lean_object* v___x_2737_, lean_object* v_p_2738_, lean_object* v_e_x27_2739_, lean_object* v_proof_2740_, lean_object* v_inst_2741_, uint8_t v_contextDependent_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_){
_start:
{
lean_object* v___x_2753_; 
lean_inc_ref(v_snd_2736_);
v___x_2753_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv_spec__0___redArg(v___x_2734_, v___x_2735_, v_snd_2736_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2769_; 
v_a_2754_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2769_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2769_ == 0)
{
v___x_2756_ = v___x_2753_;
v_isShared_2757_ = v_isSharedCheck_2769_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_a_2754_);
lean_dec(v___x_2753_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2769_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; uint8_t v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2767_; 
v___x_2758_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__0));
v___x_2759_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___lam__2___closed__0));
v___x_2760_ = l_Lean_Name_mkStr3(v___x_2737_, v___x_2758_, v___x_2759_);
v___x_2761_ = lean_box(0);
v___x_2762_ = l_Lean_mkConst(v___x_2760_, v___x_2761_);
v___x_2763_ = l_Lean_mkApp5(v___x_2762_, v_p_2738_, v_e_x27_2739_, v_proof_2740_, v_inst_2741_, v_snd_2736_);
v___x_2764_ = 1;
v___x_2765_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2765_, 0, v_a_2754_);
lean_ctor_set(v___x_2765_, 1, v___x_2763_);
lean_ctor_set_uint8(v___x_2765_, sizeof(void*)*2, v___x_2764_);
lean_ctor_set_uint8(v___x_2765_, sizeof(void*)*2 + 1, v_contextDependent_2742_);
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 0, v___x_2765_);
v___x_2767_ = v___x_2756_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v___x_2765_);
v___x_2767_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
return v___x_2767_;
}
}
}
else
{
lean_object* v_a_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2777_; 
lean_dec_ref(v_inst_2741_);
lean_dec_ref(v_proof_2740_);
lean_dec_ref(v_e_x27_2739_);
lean_dec_ref(v_p_2738_);
lean_dec_ref(v___x_2737_);
lean_dec_ref(v_snd_2736_);
v_a_2770_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2777_ == 0)
{
v___x_2772_ = v___x_2753_;
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_a_2770_);
lean_dec(v___x_2753_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2775_; 
if (v_isShared_2773_ == 0)
{
v___x_2775_ = v___x_2772_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v_a_2770_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___lam__2___boxed(lean_object** _args){
lean_object* v___x_2778_ = _args[0];
lean_object* v___x_2779_ = _args[1];
lean_object* v_snd_2780_ = _args[2];
lean_object* v___x_2781_ = _args[3];
lean_object* v_p_2782_ = _args[4];
lean_object* v_e_x27_2783_ = _args[5];
lean_object* v_proof_2784_ = _args[6];
lean_object* v_inst_2785_ = _args[7];
lean_object* v_contextDependent_2786_ = _args[8];
lean_object* v___y_2787_ = _args[9];
lean_object* v___y_2788_ = _args[10];
lean_object* v___y_2789_ = _args[11];
lean_object* v___y_2790_ = _args[12];
lean_object* v___y_2791_ = _args[13];
lean_object* v___y_2792_ = _args[14];
lean_object* v___y_2793_ = _args[15];
lean_object* v___y_2794_ = _args[16];
lean_object* v___y_2795_ = _args[17];
lean_object* v___y_2796_ = _args[18];
_start:
{
uint8_t v_contextDependent_22739__boxed_2797_; lean_object* v_res_2798_; 
v_contextDependent_22739__boxed_2797_ = lean_unbox(v_contextDependent_2786_);
v_res_2798_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___lam__2(v___x_2778_, v___x_2779_, v_snd_2780_, v___x_2781_, v_p_2782_, v_e_x27_2783_, v_proof_2784_, v_inst_2785_, v_contextDependent_22739__boxed_2797_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_, v___y_2795_);
lean_dec(v___y_2795_);
lean_dec_ref(v___y_2794_);
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec(v___y_2789_);
lean_dec_ref(v___y_2788_);
lean_dec(v___y_2787_);
return v_res_2798_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__2(void){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; 
v___x_2802_ = lean_box(0);
v___x_2803_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__1));
v___x_2804_ = l_Lean_mkConst(v___x_2803_, v___x_2802_);
return v___x_2804_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__5(void){
_start:
{
lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; 
v___x_2808_ = lean_box(0);
v___x_2809_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__4));
v___x_2810_ = l_Lean_mkConst(v___x_2809_, v___x_2808_);
return v___x_2810_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__8(void){
_start:
{
lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; 
v___x_2816_ = lean_box(0);
v___x_2817_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__7));
v___x_2818_ = l_Lean_mkConst(v___x_2817_, v___x_2816_);
return v___x_2818_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__11(void){
_start:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; 
v___x_2824_ = lean_box(0);
v___x_2825_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__10));
v___x_2826_ = l_Lean_mkConst(v___x_2825_, v___x_2824_);
return v___x_2826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv(lean_object* v_p_2827_, lean_object* v_inst_2828_, lean_object* v_a_2829_, lean_object* v_a_2830_, lean_object* v_a_2831_, lean_object* v_a_2832_, lean_object* v_a_2833_, lean_object* v_a_2834_, lean_object* v_a_2835_, lean_object* v_a_2836_, lean_object* v_a_2837_){
_start:
{
lean_object* v___y_2840_; uint8_t v___y_2841_; lean_object* v___y_2846_; uint8_t v___y_2847_; lean_object* v___x_2851_; 
lean_inc(v_a_2837_);
lean_inc_ref(v_a_2836_);
lean_inc(v_a_2835_);
lean_inc_ref(v_a_2834_);
lean_inc(v_a_2833_);
lean_inc_ref(v_a_2832_);
lean_inc(v_a_2831_);
lean_inc_ref(v_a_2830_);
lean_inc(v_a_2829_);
lean_inc_ref(v_p_2827_);
v___x_2851_ = lean_sym_simp(v_p_2827_, v_a_2829_, v_a_2830_, v_a_2831_, v_a_2832_, v_a_2833_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_);
if (lean_obj_tag(v___x_2851_) == 0)
{
lean_object* v_a_2852_; lean_object* v_result_2854_; 
v_a_2852_ = lean_ctor_get(v___x_2851_, 0);
lean_inc(v_a_2852_);
lean_dec_ref_known(v___x_2851_, 1);
if (lean_obj_tag(v_a_2852_) == 0)
{
uint8_t v_contextDependent_2857_; lean_object* v___x_2858_; 
v_contextDependent_2857_ = lean_ctor_get_uint8(v_a_2852_, 1);
v___x_2858_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_p_2827_, v_a_2832_);
if (lean_obj_tag(v___x_2858_) == 0)
{
lean_object* v_a_2859_; uint8_t v___x_2860_; 
v_a_2859_ = lean_ctor_get(v___x_2858_, 0);
lean_inc(v_a_2859_);
lean_dec_ref_known(v___x_2858_, 1);
v___x_2860_ = lean_unbox(v_a_2859_);
if (v___x_2860_ == 0)
{
lean_object* v___x_2861_; 
v___x_2861_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_p_2827_, v_a_2832_);
if (lean_obj_tag(v___x_2861_) == 0)
{
lean_object* v_a_2862_; uint8_t v___x_2863_; 
v_a_2862_ = lean_ctor_get(v___x_2861_, 0);
lean_inc(v_a_2862_);
lean_dec_ref_known(v___x_2861_, 1);
v___x_2863_ = lean_unbox(v_a_2862_);
lean_dec(v_a_2862_);
if (v___x_2863_ == 0)
{
uint8_t v___x_2864_; lean_object* v___x_2865_; lean_object* v___f_2866_; lean_object* v___x_2867_; 
lean_dec(v_a_2859_);
v___x_2864_ = 1;
v___x_2865_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_2864_, v_contextDependent_2857_);
v___f_2866_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___boxed), 11, 1);
lean_closure_set(v___f_2866_, 0, v___x_2865_);
v___x_2867_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidable(v_p_2827_, v_inst_2828_, v___f_2866_, v_a_2829_, v_a_2830_, v_a_2831_, v_a_2832_, v_a_2833_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_);
if (lean_obj_tag(v___x_2867_) == 0)
{
lean_object* v_a_2868_; 
v_a_2868_ = lean_ctor_get(v___x_2867_, 0);
lean_inc(v_a_2868_);
lean_dec_ref_known(v___x_2867_, 1);
v_result_2854_ = v_a_2868_;
goto v___jp_2853_;
}
else
{
lean_dec_ref_known(v_a_2852_, 0);
return v___x_2867_;
}
}
else
{
lean_object* v___x_2869_; 
lean_dec_ref_known(v_a_2852_, 0);
lean_dec_ref(v_p_2827_);
v___x_2869_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_2832_);
if (lean_obj_tag(v___x_2869_) == 0)
{
lean_object* v_a_2870_; lean_object* v___x_2872_; uint8_t v_isShared_2873_; uint8_t v_isSharedCheck_2881_; 
v_a_2870_ = lean_ctor_get(v___x_2869_, 0);
v_isSharedCheck_2881_ = !lean_is_exclusive(v___x_2869_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2872_ = v___x_2869_;
v_isShared_2873_ = v_isSharedCheck_2881_;
goto v_resetjp_2871_;
}
else
{
lean_inc(v_a_2870_);
lean_dec(v___x_2869_);
v___x_2872_ = lean_box(0);
v_isShared_2873_ = v_isSharedCheck_2881_;
goto v_resetjp_2871_;
}
v_resetjp_2871_:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; uint8_t v___x_2877_; lean_object* v___x_2879_; 
v___x_2874_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__2, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__2);
v___x_2875_ = l_Lean_Expr_app___override(v___x_2874_, v_inst_2828_);
v___x_2876_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2876_, 0, v_a_2870_);
lean_ctor_set(v___x_2876_, 1, v___x_2875_);
v___x_2877_ = lean_unbox(v_a_2859_);
lean_dec(v_a_2859_);
lean_ctor_set_uint8(v___x_2876_, sizeof(void*)*2, v___x_2877_);
lean_ctor_set_uint8(v___x_2876_, sizeof(void*)*2 + 1, v_contextDependent_2857_);
if (v_isShared_2873_ == 0)
{
lean_ctor_set(v___x_2872_, 0, v___x_2876_);
v___x_2879_ = v___x_2872_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v___x_2876_);
v___x_2879_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
return v___x_2879_;
}
}
}
else
{
lean_object* v_a_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2889_; 
lean_dec(v_a_2859_);
lean_dec_ref(v_inst_2828_);
v_a_2882_ = lean_ctor_get(v___x_2869_, 0);
v_isSharedCheck_2889_ = !lean_is_exclusive(v___x_2869_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2884_ = v___x_2869_;
v_isShared_2885_ = v_isSharedCheck_2889_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_a_2882_);
lean_dec(v___x_2869_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2889_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v___x_2887_; 
if (v_isShared_2885_ == 0)
{
v___x_2887_ = v___x_2884_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v_a_2882_);
v___x_2887_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
return v___x_2887_;
}
}
}
}
}
else
{
lean_object* v_a_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2897_; 
lean_dec(v_a_2859_);
lean_dec_ref_known(v_a_2852_, 0);
lean_dec_ref(v_inst_2828_);
lean_dec_ref(v_p_2827_);
v_a_2890_ = lean_ctor_get(v___x_2861_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2861_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2892_ = v___x_2861_;
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_a_2890_);
lean_dec(v___x_2861_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2893_ == 0)
{
v___x_2895_ = v___x_2892_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_a_2890_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
}
else
{
lean_object* v___x_2898_; 
lean_dec(v_a_2859_);
lean_dec_ref_known(v_a_2852_, 0);
lean_dec_ref(v_p_2827_);
v___x_2898_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_2832_);
if (lean_obj_tag(v___x_2898_) == 0)
{
lean_object* v_a_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2910_; 
v_a_2899_ = lean_ctor_get(v___x_2898_, 0);
v_isSharedCheck_2910_ = !lean_is_exclusive(v___x_2898_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2901_ = v___x_2898_;
v_isShared_2902_ = v_isSharedCheck_2910_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_a_2899_);
lean_dec(v___x_2898_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2910_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; uint8_t v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2908_; 
v___x_2903_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__5, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__5_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__5);
v___x_2904_ = l_Lean_Expr_app___override(v___x_2903_, v_inst_2828_);
v___x_2905_ = 0;
v___x_2906_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2906_, 0, v_a_2899_);
lean_ctor_set(v___x_2906_, 1, v___x_2904_);
lean_ctor_set_uint8(v___x_2906_, sizeof(void*)*2, v___x_2905_);
lean_ctor_set_uint8(v___x_2906_, sizeof(void*)*2 + 1, v_contextDependent_2857_);
if (v_isShared_2902_ == 0)
{
lean_ctor_set(v___x_2901_, 0, v___x_2906_);
v___x_2908_ = v___x_2901_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v___x_2906_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
return v___x_2908_;
}
}
}
else
{
lean_object* v_a_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2918_; 
lean_dec_ref(v_inst_2828_);
v_a_2911_ = lean_ctor_get(v___x_2898_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v___x_2898_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2913_ = v___x_2898_;
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_a_2911_);
lean_dec(v___x_2898_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
lean_object* v___x_2916_; 
if (v_isShared_2914_ == 0)
{
v___x_2916_ = v___x_2913_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v_a_2911_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
return v___x_2916_;
}
}
}
}
}
else
{
lean_object* v_a_2919_; lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2926_; 
lean_dec_ref_known(v_a_2852_, 0);
lean_dec_ref(v_inst_2828_);
lean_dec_ref(v_p_2827_);
v_a_2919_ = lean_ctor_get(v___x_2858_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2921_ = v___x_2858_;
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
else
{
lean_inc(v_a_2919_);
lean_dec(v___x_2858_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2924_; 
if (v_isShared_2922_ == 0)
{
v___x_2924_ = v___x_2921_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_a_2919_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
}
else
{
lean_object* v_e_x27_2927_; lean_object* v_proof_2928_; uint8_t v_contextDependent_2929_; lean_object* v___x_2930_; 
v_e_x27_2927_ = lean_ctor_get(v_a_2852_, 0);
v_proof_2928_ = lean_ctor_get(v_a_2852_, 1);
v_contextDependent_2929_ = lean_ctor_get_uint8(v_a_2852_, sizeof(void*)*2 + 1);
v___x_2930_ = l_Lean_Meta_Sym_isTrueExpr___redArg(v_e_x27_2927_, v_a_2832_);
if (lean_obj_tag(v___x_2930_) == 0)
{
lean_object* v_a_2931_; uint8_t v___x_2932_; 
v_a_2931_ = lean_ctor_get(v___x_2930_, 0);
lean_inc(v_a_2931_);
lean_dec_ref_known(v___x_2930_, 1);
v___x_2932_ = lean_unbox(v_a_2931_);
if (v___x_2932_ == 0)
{
lean_object* v___x_2933_; 
v___x_2933_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_e_x27_2927_, v_a_2832_);
if (lean_obj_tag(v___x_2933_) == 0)
{
lean_object* v_a_2934_; uint8_t v___x_2935_; 
v_a_2934_ = lean_ctor_get(v___x_2933_, 0);
lean_inc(v_a_2934_);
lean_dec_ref_known(v___x_2933_, 1);
v___x_2935_ = lean_unbox(v_a_2934_);
lean_dec(v_a_2934_);
if (v___x_2935_ == 0)
{
lean_object* v___x_2936_; 
lean_dec(v_a_2931_);
lean_inc_ref(v_inst_2828_);
v___x_2936_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance(v_inst_2828_, v_a_2829_, v_a_2830_, v_a_2831_, v_a_2832_, v_a_2833_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_);
if (lean_obj_tag(v___x_2936_) == 0)
{
lean_object* v_a_2937_; lean_object* v_fst_2938_; 
v_a_2937_ = lean_ctor_get(v___x_2936_, 0);
lean_inc(v_a_2937_);
lean_dec_ref_known(v___x_2936_, 1);
v_fst_2938_ = lean_ctor_get(v_a_2937_, 0);
lean_inc(v_fst_2938_);
if (lean_obj_tag(v_fst_2938_) == 0)
{
uint8_t v_contextDependent_2939_; uint8_t v___x_2940_; lean_object* v___x_2941_; lean_object* v___f_2942_; lean_object* v___x_2943_; 
lean_dec(v_a_2937_);
v_contextDependent_2939_ = lean_ctor_get_uint8(v_fst_2938_, 1);
lean_dec_ref_known(v_fst_2938_, 0);
v___x_2940_ = 1;
v___x_2941_ = l_Lean_Meta_Sym_Simp_mkRflResult(v___x_2940_, v_contextDependent_2939_);
v___f_2942_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___lam__0___boxed), 11, 1);
lean_closure_set(v___f_2942_, 0, v___x_2941_);
v___x_2943_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidable(v_p_2827_, v_inst_2828_, v___f_2942_, v_a_2829_, v_a_2830_, v_a_2831_, v_a_2832_, v_a_2833_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_);
if (lean_obj_tag(v___x_2943_) == 0)
{
lean_object* v_a_2944_; 
v_a_2944_ = lean_ctor_get(v___x_2943_, 0);
lean_inc(v_a_2944_);
lean_dec_ref_known(v___x_2943_, 1);
v_result_2854_ = v_a_2944_;
goto v___jp_2853_;
}
else
{
lean_dec_ref_known(v_a_2852_, 2);
return v___x_2943_;
}
}
else
{
lean_object* v_snd_2945_; lean_object* v_e_x27_2946_; lean_object* v_proof_2947_; uint8_t v_contextDependent_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___f_2953_; lean_object* v___x_2954_; 
v_snd_2945_ = lean_ctor_get(v_a_2937_, 1);
lean_inc_n(v_snd_2945_, 2);
lean_dec(v_a_2937_);
v_e_x27_2946_ = lean_ctor_get(v_fst_2938_, 0);
lean_inc_ref_n(v_e_x27_2946_, 2);
v_proof_2947_ = lean_ctor_get(v_fst_2938_, 1);
lean_inc_ref_n(v_proof_2947_, 2);
v_contextDependent_2948_ = lean_ctor_get_uint8(v_fst_2938_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_fst_2938_, 2);
v___x_2949_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0));
v___x_2950_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__1));
v___x_2951_ = lean_unsigned_to_nat(0u);
v___x_2952_ = lean_box(v_contextDependent_2948_);
lean_inc_ref(v_inst_2828_);
lean_inc_ref(v_p_2827_);
v___f_2953_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___lam__2___boxed), 19, 9);
lean_closure_set(v___f_2953_, 0, v___x_2950_);
lean_closure_set(v___f_2953_, 1, v___x_2951_);
lean_closure_set(v___f_2953_, 2, v_snd_2945_);
lean_closure_set(v___f_2953_, 3, v___x_2949_);
lean_closure_set(v___f_2953_, 4, v_p_2827_);
lean_closure_set(v___f_2953_, 5, v_e_x27_2946_);
lean_closure_set(v___f_2953_, 6, v_proof_2947_);
lean_closure_set(v___f_2953_, 7, v_inst_2828_);
lean_closure_set(v___f_2953_, 8, v___x_2952_);
v___x_2954_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDecideDecidableCongr(v_p_2827_, v_e_x27_2946_, v_proof_2947_, v_inst_2828_, v_snd_2945_, v___f_2953_, v_a_2829_, v_a_2830_, v_a_2831_, v_a_2832_, v_a_2833_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_a_2955_; 
v_a_2955_ = lean_ctor_get(v___x_2954_, 0);
lean_inc(v_a_2955_);
lean_dec_ref_known(v___x_2954_, 1);
v_result_2854_ = v_a_2955_;
goto v___jp_2853_;
}
else
{
lean_dec_ref_known(v_a_2852_, 2);
return v___x_2954_;
}
}
}
else
{
lean_object* v_a_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2963_; 
lean_dec_ref_known(v_a_2852_, 2);
lean_dec_ref(v_inst_2828_);
lean_dec_ref(v_p_2827_);
v_a_2956_ = lean_ctor_get(v___x_2936_, 0);
v_isSharedCheck_2963_ = !lean_is_exclusive(v___x_2936_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2958_ = v___x_2936_;
v_isShared_2959_ = v_isSharedCheck_2963_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_a_2956_);
lean_dec(v___x_2936_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2963_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v___x_2961_; 
if (v_isShared_2959_ == 0)
{
v___x_2961_ = v___x_2958_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v_a_2956_);
v___x_2961_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
return v___x_2961_;
}
}
}
}
else
{
lean_object* v___x_2965_; uint8_t v_isShared_2966_; uint8_t v_isSharedCheck_2990_; 
lean_inc_ref(v_proof_2928_);
v_isSharedCheck_2990_ = !lean_is_exclusive(v_a_2852_);
if (v_isSharedCheck_2990_ == 0)
{
lean_object* v_unused_2991_; lean_object* v_unused_2992_; 
v_unused_2991_ = lean_ctor_get(v_a_2852_, 1);
lean_dec(v_unused_2991_);
v_unused_2992_ = lean_ctor_get(v_a_2852_, 0);
lean_dec(v_unused_2992_);
v___x_2965_ = v_a_2852_;
v_isShared_2966_ = v_isSharedCheck_2990_;
goto v_resetjp_2964_;
}
else
{
lean_dec(v_a_2852_);
v___x_2965_ = lean_box(0);
v_isShared_2966_ = v_isSharedCheck_2990_;
goto v_resetjp_2964_;
}
v_resetjp_2964_:
{
lean_object* v___x_2967_; 
v___x_2967_ = l_Lean_Meta_Sym_getBoolFalseExpr___redArg(v_a_2832_);
if (lean_obj_tag(v___x_2967_) == 0)
{
lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2981_; 
v_a_2968_ = lean_ctor_get(v___x_2967_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2967_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2970_ = v___x_2967_;
v_isShared_2971_ = v_isSharedCheck_2981_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_dec(v___x_2967_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2981_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2975_; 
v___x_2972_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__8, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__8_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__8);
v___x_2973_ = l_Lean_mkApp3(v___x_2972_, v_p_2827_, v_inst_2828_, v_proof_2928_);
if (v_isShared_2966_ == 0)
{
lean_ctor_set(v___x_2965_, 1, v___x_2973_);
lean_ctor_set(v___x_2965_, 0, v_a_2968_);
v___x_2975_ = v___x_2965_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2968_);
lean_ctor_set(v_reuseFailAlloc_2980_, 1, v___x_2973_);
v___x_2975_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
uint8_t v___x_2976_; lean_object* v___x_2978_; 
v___x_2976_ = lean_unbox(v_a_2931_);
lean_dec(v_a_2931_);
lean_ctor_set_uint8(v___x_2975_, sizeof(void*)*2, v___x_2976_);
lean_ctor_set_uint8(v___x_2975_, sizeof(void*)*2 + 1, v_contextDependent_2929_);
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 0, v___x_2975_);
v___x_2978_ = v___x_2970_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v___x_2975_);
v___x_2978_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
return v___x_2978_;
}
}
}
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2989_; 
lean_del_object(v___x_2965_);
lean_dec(v_a_2931_);
lean_dec_ref(v_proof_2928_);
lean_dec_ref(v_inst_2828_);
lean_dec_ref(v_p_2827_);
v_a_2982_ = lean_ctor_get(v___x_2967_, 0);
v_isSharedCheck_2989_ = !lean_is_exclusive(v___x_2967_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2984_ = v___x_2967_;
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_dec(v___x_2967_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2987_; 
if (v_isShared_2985_ == 0)
{
v___x_2987_ = v___x_2984_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v_a_2982_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
return v___x_2987_;
}
}
}
}
}
}
else
{
lean_object* v_a_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3000_; 
lean_dec(v_a_2931_);
lean_dec_ref_known(v_a_2852_, 2);
lean_dec_ref(v_inst_2828_);
lean_dec_ref(v_p_2827_);
v_a_2993_ = lean_ctor_get(v___x_2933_, 0);
v_isSharedCheck_3000_ = !lean_is_exclusive(v___x_2933_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2995_ = v___x_2933_;
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_a_2993_);
lean_dec(v___x_2933_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v___x_2998_; 
if (v_isShared_2996_ == 0)
{
v___x_2998_ = v___x_2995_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v_a_2993_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
return v___x_2998_;
}
}
}
}
else
{
lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3027_; 
lean_inc_ref(v_proof_2928_);
lean_dec(v_a_2931_);
v_isSharedCheck_3027_ = !lean_is_exclusive(v_a_2852_);
if (v_isSharedCheck_3027_ == 0)
{
lean_object* v_unused_3028_; lean_object* v_unused_3029_; 
v_unused_3028_ = lean_ctor_get(v_a_2852_, 1);
lean_dec(v_unused_3028_);
v_unused_3029_ = lean_ctor_get(v_a_2852_, 0);
lean_dec(v_unused_3029_);
v___x_3002_ = v_a_2852_;
v_isShared_3003_ = v_isSharedCheck_3027_;
goto v_resetjp_3001_;
}
else
{
lean_dec(v_a_2852_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3027_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3004_; 
v___x_3004_ = l_Lean_Meta_Sym_getBoolTrueExpr___redArg(v_a_2832_);
if (lean_obj_tag(v___x_3004_) == 0)
{
lean_object* v_a_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3018_; 
v_a_3005_ = lean_ctor_get(v___x_3004_, 0);
v_isSharedCheck_3018_ = !lean_is_exclusive(v___x_3004_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_3007_ = v___x_3004_;
v_isShared_3008_ = v_isSharedCheck_3018_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_a_3005_);
lean_dec(v___x_3004_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3018_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___x_3009_; lean_object* v___x_3010_; uint8_t v___x_3011_; lean_object* v___x_3013_; 
v___x_3009_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__11, &l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__11_once, _init_l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___closed__11);
v___x_3010_ = l_Lean_mkApp3(v___x_3009_, v_p_2827_, v_inst_2828_, v_proof_2928_);
v___x_3011_ = 0;
if (v_isShared_3003_ == 0)
{
lean_ctor_set(v___x_3002_, 1, v___x_3010_);
lean_ctor_set(v___x_3002_, 0, v_a_3005_);
v___x_3013_ = v___x_3002_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3017_; 
v_reuseFailAlloc_3017_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_3017_, 0, v_a_3005_);
lean_ctor_set(v_reuseFailAlloc_3017_, 1, v___x_3010_);
lean_ctor_set_uint8(v_reuseFailAlloc_3017_, sizeof(void*)*2 + 1, v_contextDependent_2929_);
v___x_3013_ = v_reuseFailAlloc_3017_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
lean_object* v___x_3015_; 
lean_ctor_set_uint8(v___x_3013_, sizeof(void*)*2, v___x_3011_);
if (v_isShared_3008_ == 0)
{
lean_ctor_set(v___x_3007_, 0, v___x_3013_);
v___x_3015_ = v___x_3007_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v___x_3013_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
}
else
{
lean_object* v_a_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3026_; 
lean_del_object(v___x_3002_);
lean_dec_ref(v_proof_2928_);
lean_dec_ref(v_inst_2828_);
lean_dec_ref(v_p_2827_);
v_a_3019_ = lean_ctor_get(v___x_3004_, 0);
v_isSharedCheck_3026_ = !lean_is_exclusive(v___x_3004_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_3021_ = v___x_3004_;
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_a_3019_);
lean_dec(v___x_3004_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3024_; 
if (v_isShared_3022_ == 0)
{
v___x_3024_ = v___x_3021_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_a_3019_);
v___x_3024_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
return v___x_3024_;
}
}
}
}
}
}
else
{
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3037_; 
lean_dec_ref_known(v_a_2852_, 2);
lean_dec_ref(v_inst_2828_);
lean_dec_ref(v_p_2827_);
v_a_3030_ = lean_ctor_get(v___x_2930_, 0);
v_isSharedCheck_3037_ = !lean_is_exclusive(v___x_2930_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3032_ = v___x_2930_;
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v___x_2930_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3035_; 
if (v_isShared_3033_ == 0)
{
v___x_3035_ = v___x_3032_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v_a_3030_);
v___x_3035_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
return v___x_3035_;
}
}
}
}
v___jp_2853_:
{
if (lean_obj_tag(v_a_2852_) == 0)
{
uint8_t v_contextDependent_2855_; 
v_contextDependent_2855_ = lean_ctor_get_uint8(v_a_2852_, 1);
lean_dec_ref_known(v_a_2852_, 0);
v___y_2846_ = v_result_2854_;
v___y_2847_ = v_contextDependent_2855_;
goto v___jp_2845_;
}
else
{
uint8_t v_contextDependent_2856_; 
v_contextDependent_2856_ = lean_ctor_get_uint8(v_a_2852_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_2852_, 2);
v___y_2846_ = v_result_2854_;
v___y_2847_ = v_contextDependent_2856_;
goto v___jp_2845_;
}
}
}
else
{
lean_dec_ref(v_inst_2828_);
lean_dec_ref(v_p_2827_);
return v___x_2851_;
}
v___jp_2839_:
{
if (v___y_2841_ == 0)
{
lean_object* v___x_2842_; lean_object* v___x_2843_; 
v___x_2842_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v___y_2840_);
v___x_2843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2842_);
return v___x_2843_;
}
else
{
lean_object* v___x_2844_; 
v___x_2844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2844_, 0, v___y_2840_);
return v___x_2844_;
}
}
v___jp_2845_:
{
if (v___y_2847_ == 0)
{
lean_object* v___x_2848_; 
v___x_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2848_, 0, v___y_2846_);
return v___x_2848_;
}
else
{
if (lean_obj_tag(v___y_2846_) == 0)
{
uint8_t v_contextDependent_2849_; 
v_contextDependent_2849_ = lean_ctor_get_uint8(v___y_2846_, 1);
v___y_2840_ = v___y_2846_;
v___y_2841_ = v_contextDependent_2849_;
goto v___jp_2839_;
}
else
{
uint8_t v_contextDependent_2850_; 
v_contextDependent_2850_ = lean_ctor_get_uint8(v___y_2846_, sizeof(void*)*2 + 1);
v___y_2840_ = v___y_2846_;
v___y_2841_ = v_contextDependent_2850_;
goto v___jp_2839_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv___boxed(lean_object* v_p_3038_, lean_object* v_inst_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_, lean_object* v_a_3044_, lean_object* v_a_3045_, lean_object* v_a_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_, lean_object* v_a_3049_){
_start:
{
lean_object* v_res_3050_; 
v_res_3050_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv(v_p_3038_, v_inst_3039_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_, v_a_3046_, v_a_3047_, v_a_3048_);
lean_dec(v_a_3048_);
lean_dec_ref(v_a_3047_);
lean_dec(v_a_3046_);
lean_dec_ref(v_a_3045_);
lean_dec(v_a_3044_);
lean_dec_ref(v_a_3043_);
lean_dec(v_a_3042_);
lean_dec_ref(v_a_3041_);
lean_dec(v_a_3040_);
return v_res_3050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0(uint8_t v___x_3051_, lean_object* v_e_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_){
_start:
{
lean_object* v___x_3066_; uint8_t v___x_3067_; 
v___x_3066_ = l_Lean_Expr_cleanupAnnotations(v_e_3052_);
v___x_3067_ = l_Lean_Expr_isApp(v___x_3066_);
if (v___x_3067_ == 0)
{
lean_dec_ref(v___x_3066_);
goto v___jp_3063_;
}
else
{
lean_object* v___x_3068_; uint8_t v___x_3069_; 
v___x_3068_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3066_);
v___x_3069_ = l_Lean_Expr_isApp(v___x_3068_);
if (v___x_3069_ == 0)
{
lean_dec_ref(v___x_3068_);
lean_dec_ref(v___x_3066_);
goto v___jp_3063_;
}
else
{
lean_object* v___x_3070_; lean_object* v___x_3071_; uint8_t v___x_3072_; 
v___x_3070_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3068_);
v___x_3071_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpAndMatchDIteDecidable___closed__1));
v___x_3072_ = l_Lean_Expr_isConstOf(v___x_3070_, v___x_3071_);
lean_dec_ref(v___x_3070_);
if (v___x_3072_ == 0)
{
lean_dec_ref(v___x_3068_);
lean_dec_ref(v___x_3066_);
goto v___jp_3063_;
}
else
{
lean_object* v_arg_3073_; lean_object* v_arg_3074_; lean_object* v___x_3075_; 
v_arg_3073_ = lean_ctor_get(v___x_3066_, 1);
lean_inc_ref(v_arg_3073_);
lean_dec_ref(v___x_3066_);
v_arg_3074_ = lean_ctor_get(v___x_3068_, 1);
lean_inc_ref(v_arg_3074_);
lean_dec_ref(v___x_3068_);
v___x_3075_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv(v_arg_3074_, v_arg_3073_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_, v___y_3061_);
return v___x_3075_;
}
}
}
v___jp_3063_:
{
lean_object* v___x_3064_; lean_object* v___x_3065_; 
v___x_3064_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_3064_, 0, v___x_3051_);
lean_ctor_set_uint8(v___x_3064_, 1, v___x_3051_);
v___x_3065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3064_);
return v___x_3065_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___boxed(lean_object* v___x_3076_, lean_object* v_e_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_){
_start:
{
uint8_t v___x_2587__boxed_3088_; lean_object* v_res_3089_; 
v___x_2587__boxed_3088_ = lean_unbox(v___x_3076_);
v_res_3089_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0(v___x_2587__boxed_3088_, v_e_3077_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___y_3084_);
lean_dec_ref(v___y_3083_);
lean_dec(v___y_3082_);
lean_dec_ref(v___y_3081_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v_e_3077_);
return v_res_3089_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv(lean_object* v_e_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_, lean_object* v_a_3093_, lean_object* v_a_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_){
_start:
{
lean_object* v___y_3102_; lean_object* v___y_3103_; lean_object* v___y_3104_; lean_object* v___y_3105_; lean_object* v___y_3106_; lean_object* v___y_3107_; lean_object* v___y_3108_; lean_object* v___y_3109_; lean_object* v___y_3110_; 
if (lean_obj_tag(v_e_3090_) == 11)
{
lean_object* v_typeName_3121_; 
v_typeName_3121_ = lean_ctor_get(v_e_3090_, 0);
if (lean_obj_tag(v_typeName_3121_) == 1)
{
lean_object* v_pre_3122_; 
v_pre_3122_ = lean_ctor_get(v_typeName_3121_, 0);
if (lean_obj_tag(v_pre_3122_) == 0)
{
lean_object* v_idx_3123_; lean_object* v_struct_3124_; lean_object* v_str_3125_; lean_object* v___x_3126_; uint8_t v___x_3127_; 
v_idx_3123_ = lean_ctor_get(v_e_3090_, 1);
v_struct_3124_ = lean_ctor_get(v_e_3090_, 2);
v_str_3125_ = lean_ctor_get(v_typeName_3121_, 1);
v___x_3126_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___lam__0___closed__0));
v___x_3127_ = lean_string_dec_eq(v_str_3125_, v___x_3126_);
if (v___x_3127_ == 0)
{
v___y_3102_ = v_a_3091_;
v___y_3103_ = v_a_3092_;
v___y_3104_ = v_a_3093_;
v___y_3105_ = v_a_3094_;
v___y_3106_ = v_a_3095_;
v___y_3107_ = v_a_3096_;
v___y_3108_ = v_a_3097_;
v___y_3109_ = v_a_3098_;
v___y_3110_ = v_a_3099_;
goto v___jp_3101_;
}
else
{
lean_object* v___x_3128_; uint8_t v___x_3129_; 
v___x_3128_ = lean_unsigned_to_nat(0u);
v___x_3129_ = lean_nat_dec_eq(v_idx_3123_, v___x_3128_);
if (v___x_3129_ == 0)
{
v___y_3102_ = v_a_3091_;
v___y_3103_ = v_a_3092_;
v___y_3104_ = v_a_3093_;
v___y_3105_ = v_a_3094_;
v___y_3106_ = v_a_3095_;
v___y_3107_ = v_a_3096_;
v___y_3108_ = v_a_3097_;
v___y_3109_ = v_a_3098_;
v___y_3110_ = v_a_3099_;
goto v___jp_3101_;
}
else
{
lean_object* v___x_3130_; 
lean_inc_ref(v_struct_3124_);
v___x_3130_ = l_Lean_Meta_getBoolDecision_x3f(v_e_3090_, v_a_3096_, v_a_3097_, v_a_3098_, v_a_3099_);
if (lean_obj_tag(v___x_3130_) == 0)
{
lean_object* v_a_3131_; lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3152_; 
v_a_3131_ = lean_ctor_get(v___x_3130_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3130_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3133_ = v___x_3130_;
v_isShared_3134_ = v_isSharedCheck_3152_;
goto v_resetjp_3132_;
}
else
{
lean_inc(v_a_3131_);
lean_dec(v___x_3130_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3152_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
if (lean_obj_tag(v_a_3131_) == 1)
{
lean_object* v_val_3135_; lean_object* v_fst_3136_; lean_object* v___x_3137_; 
lean_del_object(v___x_3133_);
v_val_3135_ = lean_ctor_get(v_a_3131_, 0);
lean_inc(v_val_3135_);
lean_dec_ref_known(v_a_3131_, 1);
v_fst_3136_ = lean_ctor_get(v_val_3135_, 0);
lean_inc(v_fst_3136_);
lean_dec(v_val_3135_);
v___x_3137_ = l_Lean_Meta_Sym_shareCommon(v_fst_3136_, v_a_3094_, v_a_3095_, v_a_3096_, v_a_3097_, v_a_3098_, v_a_3099_);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_object* v_a_3138_; lean_object* v___x_3139_; 
v_a_3138_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_a_3138_);
lean_dec_ref_known(v___x_3137_, 1);
v___x_3139_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecisionProjectionCbv(v_a_3138_, v_struct_3124_, v_a_3091_, v_a_3092_, v_a_3093_, v_a_3094_, v_a_3095_, v_a_3096_, v_a_3097_, v_a_3098_, v_a_3099_);
return v___x_3139_;
}
else
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3147_; 
lean_dec_ref(v_struct_3124_);
v_a_3140_ = lean_ctor_get(v___x_3137_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v___x_3137_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3142_ = v___x_3137_;
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3137_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3145_; 
if (v_isShared_3143_ == 0)
{
v___x_3145_ = v___x_3142_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_a_3140_);
v___x_3145_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
return v___x_3145_;
}
}
}
}
else
{
lean_object* v___x_3148_; lean_object* v___x_3150_; 
lean_dec(v_a_3131_);
lean_dec_ref(v_struct_3124_);
v___x_3148_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0));
if (v_isShared_3134_ == 0)
{
lean_ctor_set(v___x_3133_, 0, v___x_3148_);
v___x_3150_ = v___x_3133_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v___x_3148_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
}
else
{
lean_object* v_a_3153_; lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3160_; 
lean_dec_ref(v_struct_3124_);
v_a_3153_ = lean_ctor_get(v___x_3130_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3130_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3155_ = v___x_3130_;
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
else
{
lean_inc(v_a_3153_);
lean_dec(v___x_3130_);
v___x_3155_ = lean_box(0);
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
v_resetjp_3154_:
{
lean_object* v___x_3158_; 
if (v_isShared_3156_ == 0)
{
v___x_3158_ = v___x_3155_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v_a_3153_);
v___x_3158_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
return v___x_3158_;
}
}
}
}
}
}
else
{
v___y_3102_ = v_a_3091_;
v___y_3103_ = v_a_3092_;
v___y_3104_ = v_a_3093_;
v___y_3105_ = v_a_3094_;
v___y_3106_ = v_a_3095_;
v___y_3107_ = v_a_3096_;
v___y_3108_ = v_a_3097_;
v___y_3109_ = v_a_3098_;
v___y_3110_ = v_a_3099_;
goto v___jp_3101_;
}
}
else
{
v___y_3102_ = v_a_3091_;
v___y_3103_ = v_a_3092_;
v___y_3104_ = v_a_3093_;
v___y_3105_ = v_a_3094_;
v___y_3106_ = v_a_3095_;
v___y_3107_ = v_a_3096_;
v___y_3108_ = v_a_3097_;
v___y_3109_ = v_a_3098_;
v___y_3110_ = v_a_3099_;
goto v___jp_3101_;
}
}
else
{
v___y_3102_ = v_a_3091_;
v___y_3103_ = v_a_3092_;
v___y_3104_ = v_a_3093_;
v___y_3105_ = v_a_3094_;
v___y_3106_ = v_a_3095_;
v___y_3107_ = v_a_3096_;
v___y_3108_ = v_a_3097_;
v___y_3109_ = v_a_3098_;
v___y_3110_ = v_a_3099_;
goto v___jp_3101_;
}
v___jp_3101_:
{
lean_object* v_numArgs_3111_; lean_object* v___x_3112_; uint8_t v___x_3113_; 
v_numArgs_3111_ = l_Lean_Expr_getAppNumArgs(v_e_3090_);
v___x_3112_ = lean_unsigned_to_nat(2u);
v___x_3113_ = lean_nat_dec_lt(v_numArgs_3111_, v___x_3112_);
if (v___x_3113_ == 0)
{
lean_object* v___x_3114_; lean_object* v___f_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; 
v___x_3114_ = lean_box(v___x_3113_);
v___f_3115_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___lam__0___boxed), 12, 1);
lean_closure_set(v___f_3115_, 0, v___x_3114_);
v___x_3116_ = lean_nat_sub(v_numArgs_3111_, v___x_3112_);
lean_dec(v_numArgs_3111_);
v___x_3117_ = l_Lean_Meta_Sym_Simp_propagateOverApplied(v_e_3090_, v___x_3116_, v___f_3115_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_);
lean_dec(v___x_3116_);
return v___x_3117_;
}
else
{
uint8_t v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
lean_dec(v_numArgs_3111_);
lean_dec_ref(v_e_3090_);
v___x_3118_ = 0;
v___x_3119_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_3119_, 0, v___x_3113_);
lean_ctor_set_uint8(v___x_3119_, 1, v___x_3118_);
v___x_3120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3120_, 0, v___x_3119_);
return v___x_3120_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___boxed(lean_object* v_e_3161_, lean_object* v_a_3162_, lean_object* v_a_3163_, lean_object* v_a_3164_, lean_object* v_a_3165_, lean_object* v_a_3166_, lean_object* v_a_3167_, lean_object* v_a_3168_, lean_object* v_a_3169_, lean_object* v_a_3170_, lean_object* v_a_3171_){
_start:
{
lean_object* v_res_3172_; 
v_res_3172_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv(v_e_3161_, v_a_3162_, v_a_3163_, v_a_3164_, v_a_3165_, v_a_3166_, v_a_3167_, v_a_3168_, v_a_3169_, v_a_3170_);
lean_dec(v_a_3170_);
lean_dec_ref(v_a_3169_);
lean_dec(v_a_3168_);
lean_dec_ref(v_a_3167_);
lean_dec(v_a_3166_);
lean_dec_ref(v_a_3165_);
lean_dec(v_a_3164_);
lean_dec_ref(v_a_3163_);
lean_dec(v_a_3162_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14_(){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; 
v___x_3185_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14_));
v___x_3186_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14_));
v___x_3187_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___boxed), 11, 0);
v___x_3188_ = l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(v___x_3185_, v___x_3186_, v___x_3187_);
return v___x_3188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14____boxed(lean_object* v_a_3189_){
_start:
{
lean_object* v_res_3190_; 
v_res_3190_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14_();
return v_res_3190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_16_(){
_start:
{
lean_object* v___x_3192_; uint8_t v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; 
v___x_3192_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14_));
v___x_3193_ = 0;
v___x_3194_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___boxed), 11, 0);
v___x_3195_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(v___x_3192_, v___x_3193_, v___x_3194_);
return v___x_3195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_16____boxed(lean_object* v_a_3196_){
_start:
{
lean_object* v_res_3197_; 
v_res_3197_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_16_();
return v_res_3197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond(lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_, lean_object* v_a_3204_, lean_object* v_a_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_, lean_object* v_a_3208_){
_start:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; 
v___x_3210_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___closed__0));
v___x_3211_ = l_Lean_Meta_Sym_Simp_simpCondWith(v___x_3210_, v_a_3199_, v_a_3200_, v_a_3201_, v_a_3202_, v_a_3203_, v_a_3204_, v_a_3205_, v_a_3206_, v_a_3207_, v_a_3208_);
return v___x_3211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___boxed(lean_object* v_a_3212_, lean_object* v_a_3213_, lean_object* v_a_3214_, lean_object* v_a_3215_, lean_object* v_a_3216_, lean_object* v_a_3217_, lean_object* v_a_3218_, lean_object* v_a_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_){
_start:
{
lean_object* v_res_3223_; 
v_res_3223_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond(v_a_3212_, v_a_3213_, v_a_3214_, v_a_3215_, v_a_3216_, v_a_3217_, v_a_3218_, v_a_3219_, v_a_3220_, v_a_3221_);
lean_dec(v_a_3221_);
lean_dec_ref(v_a_3220_);
lean_dec(v_a_3219_);
lean_dec_ref(v_a_3218_);
lean_dec(v_a_3217_);
lean_dec_ref(v_a_3216_);
lean_dec(v_a_3215_);
lean_dec_ref(v_a_3214_);
lean_dec(v_a_3213_);
return v_res_3223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; 
v___x_3250_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_));
v___x_3251_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__7_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_));
v___x_3252_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___boxed), 11, 0);
v___x_3253_ = l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(v___x_3250_, v___x_3251_, v___x_3252_);
return v___x_3253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17____boxed(lean_object* v_a_3254_){
_start:
{
lean_object* v_res_3255_; 
v_res_3255_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_();
return v_res_3255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_19_(){
_start:
{
lean_object* v___x_3257_; uint8_t v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; 
v___x_3257_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59___closed__3_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_));
v___x_3258_ = 0;
v___x_3259_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___boxed), 11, 0);
v___x_3260_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(v___x_3257_, v___x_3258_, v___x_3259_);
return v___x_3260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_19____boxed(lean_object* v_a_3261_){
_start:
{
lean_object* v_res_3262_; 
v_res_3262_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_19_();
return v_res_3262_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0_spec__0(lean_object* v_msgData_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_){
_start:
{
lean_object* v___x_3269_; lean_object* v_env_3270_; uint8_t v___x_3271_; lean_object* v_env_3272_; lean_object* v___x_3273_; lean_object* v_toCold_3274_; lean_object* v_mctx_3275_; lean_object* v_lctx_3276_; lean_object* v_options_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3269_ = lean_st_ref_get(v___y_3267_);
v_env_3270_ = lean_ctor_get(v___x_3269_, 0);
lean_inc_ref(v_env_3270_);
lean_dec(v___x_3269_);
v___x_3271_ = 0;
v_env_3272_ = l_Lean_Environment_setRecordingDeps(v_env_3270_, v___x_3271_);
v___x_3273_ = lean_st_ref_get(v___y_3265_);
v_toCold_3274_ = lean_ctor_get(v___y_3266_, 0);
v_mctx_3275_ = lean_ctor_get(v___x_3273_, 0);
lean_inc_ref(v_mctx_3275_);
lean_dec(v___x_3273_);
v_lctx_3276_ = lean_ctor_get(v___y_3264_, 2);
v_options_3277_ = lean_ctor_get(v_toCold_3274_, 2);
lean_inc_ref(v_options_3277_);
lean_inc_ref(v_lctx_3276_);
v___x_3278_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3278_, 0, v_env_3272_);
lean_ctor_set(v___x_3278_, 1, v_mctx_3275_);
lean_ctor_set(v___x_3278_, 2, v_lctx_3276_);
lean_ctor_set(v___x_3278_, 3, v_options_3277_);
v___x_3279_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3278_);
lean_ctor_set(v___x_3279_, 1, v_msgData_3263_);
v___x_3280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3279_);
return v___x_3280_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0_spec__0___boxed(lean_object* v_msgData_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_){
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0_spec__0(v_msgData_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
lean_dec(v___y_3285_);
lean_dec_ref(v___y_3284_);
lean_dec(v___y_3283_);
lean_dec_ref(v___y_3282_);
return v_res_3287_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_3288_; double v___x_3289_; 
v___x_3288_ = lean_unsigned_to_nat(0u);
v___x_3289_ = lean_float_of_nat(v___x_3288_);
return v___x_3289_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg(lean_object* v_cls_3293_, lean_object* v_msg_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_){
_start:
{
lean_object* v_ref_3300_; lean_object* v___x_3301_; lean_object* v_a_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3347_; 
v_ref_3300_ = lean_ctor_get(v___y_3297_, 2);
v___x_3301_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0_spec__0(v_msg_3294_, v___y_3295_, v___y_3296_, v___y_3297_, v___y_3298_);
v_a_3302_ = lean_ctor_get(v___x_3301_, 0);
v_isSharedCheck_3347_ = !lean_is_exclusive(v___x_3301_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3304_ = v___x_3301_;
v_isShared_3305_ = v_isSharedCheck_3347_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_a_3302_);
lean_dec(v___x_3301_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3347_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v___x_3306_; lean_object* v_traceState_3307_; lean_object* v_env_3308_; lean_object* v_nextMacroScope_3309_; lean_object* v_ngen_3310_; lean_object* v_auxDeclNGen_3311_; lean_object* v_cache_3312_; lean_object* v_recordedDeps_3313_; lean_object* v_messages_3314_; lean_object* v_infoState_3315_; lean_object* v_snapshotTasks_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3346_; 
v___x_3306_ = lean_st_ref_take(v___y_3298_);
v_traceState_3307_ = lean_ctor_get(v___x_3306_, 4);
v_env_3308_ = lean_ctor_get(v___x_3306_, 0);
v_nextMacroScope_3309_ = lean_ctor_get(v___x_3306_, 1);
v_ngen_3310_ = lean_ctor_get(v___x_3306_, 2);
v_auxDeclNGen_3311_ = lean_ctor_get(v___x_3306_, 3);
v_cache_3312_ = lean_ctor_get(v___x_3306_, 5);
v_recordedDeps_3313_ = lean_ctor_get(v___x_3306_, 6);
v_messages_3314_ = lean_ctor_get(v___x_3306_, 7);
v_infoState_3315_ = lean_ctor_get(v___x_3306_, 8);
v_snapshotTasks_3316_ = lean_ctor_get(v___x_3306_, 9);
v_isSharedCheck_3346_ = !lean_is_exclusive(v___x_3306_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3318_ = v___x_3306_;
v_isShared_3319_ = v_isSharedCheck_3346_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_snapshotTasks_3316_);
lean_inc(v_infoState_3315_);
lean_inc(v_messages_3314_);
lean_inc(v_recordedDeps_3313_);
lean_inc(v_cache_3312_);
lean_inc(v_traceState_3307_);
lean_inc(v_auxDeclNGen_3311_);
lean_inc(v_ngen_3310_);
lean_inc(v_nextMacroScope_3309_);
lean_inc(v_env_3308_);
lean_dec(v___x_3306_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3346_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
uint64_t v_tid_3320_; lean_object* v_traces_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3345_; 
v_tid_3320_ = lean_ctor_get_uint64(v_traceState_3307_, sizeof(void*)*1);
v_traces_3321_ = lean_ctor_get(v_traceState_3307_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v_traceState_3307_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3323_ = v_traceState_3307_;
v_isShared_3324_ = v_isSharedCheck_3345_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_traces_3321_);
lean_dec(v_traceState_3307_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3345_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___x_3325_; lean_object* v___x_3326_; double v___x_3327_; uint8_t v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3336_; 
v___x_3325_ = lean_box(0);
v___x_3326_ = lean_box(0);
v___x_3327_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__0);
v___x_3328_ = 0;
v___x_3329_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__1));
v___x_3330_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3330_, 0, v_cls_3293_);
lean_ctor_set(v___x_3330_, 1, v___x_3326_);
lean_ctor_set(v___x_3330_, 2, v___x_3329_);
lean_ctor_set_float(v___x_3330_, sizeof(void*)*3, v___x_3327_);
lean_ctor_set_float(v___x_3330_, sizeof(void*)*3 + 8, v___x_3327_);
lean_ctor_set_uint8(v___x_3330_, sizeof(void*)*3 + 16, v___x_3328_);
v___x_3331_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___closed__2));
v___x_3332_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3330_);
lean_ctor_set(v___x_3332_, 1, v_a_3302_);
lean_ctor_set(v___x_3332_, 2, v___x_3331_);
lean_inc(v_ref_3300_);
v___x_3333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3333_, 0, v_ref_3300_);
lean_ctor_set(v___x_3333_, 1, v___x_3332_);
v___x_3334_ = l_Lean_PersistentArray_push___redArg(v_traces_3321_, v___x_3333_);
if (v_isShared_3324_ == 0)
{
lean_ctor_set(v___x_3323_, 0, v___x_3334_);
v___x_3336_ = v___x_3323_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v___x_3334_);
lean_ctor_set_uint64(v_reuseFailAlloc_3344_, sizeof(void*)*1, v_tid_3320_);
v___x_3336_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
lean_object* v___x_3338_; 
if (v_isShared_3319_ == 0)
{
lean_ctor_set(v___x_3318_, 4, v___x_3336_);
v___x_3338_ = v___x_3318_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v_env_3308_);
lean_ctor_set(v_reuseFailAlloc_3343_, 1, v_nextMacroScope_3309_);
lean_ctor_set(v_reuseFailAlloc_3343_, 2, v_ngen_3310_);
lean_ctor_set(v_reuseFailAlloc_3343_, 3, v_auxDeclNGen_3311_);
lean_ctor_set(v_reuseFailAlloc_3343_, 4, v___x_3336_);
lean_ctor_set(v_reuseFailAlloc_3343_, 5, v_cache_3312_);
lean_ctor_set(v_reuseFailAlloc_3343_, 6, v_recordedDeps_3313_);
lean_ctor_set(v_reuseFailAlloc_3343_, 7, v_messages_3314_);
lean_ctor_set(v_reuseFailAlloc_3343_, 8, v_infoState_3315_);
lean_ctor_set(v_reuseFailAlloc_3343_, 9, v_snapshotTasks_3316_);
v___x_3338_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
lean_object* v___x_3339_; lean_object* v___x_3341_; 
v___x_3339_ = lean_st_ref_put(v___y_3298_, v___x_3338_);
if (v_isShared_3305_ == 0)
{
lean_ctor_set(v___x_3304_, 0, v___x_3325_);
v___x_3341_ = v___x_3304_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3342_; 
v_reuseFailAlloc_3342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3342_, 0, v___x_3325_);
v___x_3341_ = v_reuseFailAlloc_3342_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
return v___x_3341_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg___boxed(lean_object* v_cls_3348_, lean_object* v_msg_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_){
_start:
{
lean_object* v_res_3355_; 
v_res_3355_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg(v_cls_3348_, v_msg_3349_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_);
lean_dec(v___y_3353_);
lean_dec_ref(v___y_3352_);
lean_dec(v___y_3351_);
lean_dec_ref(v___y_3350_);
return v_res_3355_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__5(void){
_start:
{
lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3366_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2));
v___x_3367_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__4));
v___x_3368_ = l_Lean_Name_append(v___x_3367_, v___x_3366_);
return v___x_3368_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__7(void){
_start:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; 
v___x_3370_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__6));
v___x_3371_ = l_Lean_stringToMessageData(v___x_3370_);
return v___x_3371_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9(void){
_start:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; 
v___x_3373_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__8));
v___x_3374_ = l_Lean_stringToMessageData(v___x_3373_);
return v___x_3374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher(lean_object* v_e_3375_, lean_object* v_a_3376_, lean_object* v_a_3377_, lean_object* v_a_3378_, lean_object* v_a_3379_, lean_object* v_a_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_, lean_object* v_a_3383_, lean_object* v_a_3384_){
_start:
{
lean_object* v___x_3386_; lean_object* v___x_3387_; 
lean_inc_ref(v_e_3375_);
v___x_3386_ = lean_alloc_closure((void*)(l_Lean_Meta_reduceRecMatcher_x3f___boxed), 6, 1);
lean_closure_set(v___x_3386_, 0, v_e_3375_);
v___x_3387_ = l_Lean_Meta_Tactic_Cbv_withCbvOpaqueGuard___redArg(v___x_3386_, v_a_3381_, v_a_3382_, v_a_3383_, v_a_3384_);
if (lean_obj_tag(v___x_3387_) == 0)
{
lean_object* v_a_3388_; lean_object* v___x_3390_; uint8_t v_isShared_3391_; uint8_t v_isSharedCheck_3446_; 
v_a_3388_ = lean_ctor_get(v___x_3387_, 0);
v_isSharedCheck_3446_ = !lean_is_exclusive(v___x_3387_);
if (v_isSharedCheck_3446_ == 0)
{
v___x_3390_ = v___x_3387_;
v_isShared_3391_ = v_isSharedCheck_3446_;
goto v_resetjp_3389_;
}
else
{
lean_inc(v_a_3388_);
lean_dec(v___x_3387_);
v___x_3390_ = lean_box(0);
v_isShared_3391_ = v_isSharedCheck_3446_;
goto v_resetjp_3389_;
}
v_resetjp_3389_:
{
if (lean_obj_tag(v_a_3388_) == 1)
{
lean_object* v_val_3392_; lean_object* v___y_3394_; lean_object* v___y_3395_; lean_object* v___y_3396_; lean_object* v___y_3397_; lean_object* v___y_3398_; lean_object* v___y_3399_; lean_object* v_toCold_3419_; lean_object* v_options_3420_; uint8_t v_hasTrace_3421_; 
lean_del_object(v___x_3390_);
v_val_3392_ = lean_ctor_get(v_a_3388_, 0);
lean_inc(v_val_3392_);
lean_dec_ref_known(v_a_3388_, 1);
v_toCold_3419_ = lean_ctor_get(v_a_3383_, 0);
v_options_3420_ = lean_ctor_get(v_toCold_3419_, 2);
v_hasTrace_3421_ = lean_ctor_get_uint8(v_options_3420_, sizeof(void*)*1);
if (v_hasTrace_3421_ == 0)
{
lean_dec_ref(v_e_3375_);
v___y_3394_ = v_a_3379_;
v___y_3395_ = v_a_3380_;
v___y_3396_ = v_a_3381_;
v___y_3397_ = v_a_3382_;
v___y_3398_ = v_a_3383_;
v___y_3399_ = v_a_3384_;
goto v___jp_3393_;
}
else
{
lean_object* v_inheritedTraceOptions_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; uint8_t v___x_3425_; 
v_inheritedTraceOptions_3422_ = lean_ctor_get(v_toCold_3419_, 11);
v___x_3423_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__2));
v___x_3424_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__5, &l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__5_once, _init_l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__5);
v___x_3425_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3422_, v_options_3420_, v___x_3424_);
if (v___x_3425_ == 0)
{
lean_dec_ref(v_e_3375_);
v___y_3394_ = v_a_3379_;
v___y_3395_ = v_a_3380_;
v___y_3396_ = v_a_3381_;
v___y_3397_ = v_a_3382_;
v___y_3398_ = v_a_3383_;
v___y_3399_ = v_a_3384_;
goto v___jp_3393_;
}
else
{
lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v___x_3426_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__7, &l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__7_once, _init_l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__7);
v___x_3427_ = l_Lean_indentExpr(v_e_3375_);
v___x_3428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3426_);
lean_ctor_set(v___x_3428_, 1, v___x_3427_);
v___x_3429_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9, &l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9_once, _init_l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9);
v___x_3430_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3430_, 0, v___x_3428_);
lean_ctor_set(v___x_3430_, 1, v___x_3429_);
lean_inc(v_val_3392_);
v___x_3431_ = l_Lean_indentExpr(v_val_3392_);
v___x_3432_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3432_, 0, v___x_3430_);
lean_ctor_set(v___x_3432_, 1, v___x_3431_);
v___x_3433_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg(v___x_3423_, v___x_3432_, v_a_3381_, v_a_3382_, v_a_3383_, v_a_3384_);
if (lean_obj_tag(v___x_3433_) == 0)
{
lean_dec_ref_known(v___x_3433_, 1);
v___y_3394_ = v_a_3379_;
v___y_3395_ = v_a_3380_;
v___y_3396_ = v_a_3381_;
v___y_3397_ = v_a_3382_;
v___y_3398_ = v_a_3383_;
v___y_3399_ = v_a_3384_;
goto v___jp_3393_;
}
else
{
lean_object* v_a_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3441_; 
lean_dec(v_val_3392_);
v_a_3434_ = lean_ctor_get(v___x_3433_, 0);
v_isSharedCheck_3441_ = !lean_is_exclusive(v___x_3433_);
if (v_isSharedCheck_3441_ == 0)
{
v___x_3436_ = v___x_3433_;
v_isShared_3437_ = v_isSharedCheck_3441_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_a_3434_);
lean_dec(v___x_3433_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3441_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v___x_3439_; 
if (v_isShared_3437_ == 0)
{
v___x_3439_ = v___x_3436_;
goto v_reusejp_3438_;
}
else
{
lean_object* v_reuseFailAlloc_3440_; 
v_reuseFailAlloc_3440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3440_, 0, v_a_3434_);
v___x_3439_ = v_reuseFailAlloc_3440_;
goto v_reusejp_3438_;
}
v_reusejp_3438_:
{
return v___x_3439_;
}
}
}
}
}
v___jp_3393_:
{
lean_object* v___x_3400_; 
lean_inc(v_val_3392_);
v___x_3400_ = l_Lean_Meta_Sym_mkEqRefl(v_val_3392_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3397_, v___y_3398_, v___y_3399_);
if (lean_obj_tag(v___x_3400_) == 0)
{
lean_object* v_a_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3410_; 
v_a_3401_ = lean_ctor_get(v___x_3400_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3400_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3403_ = v___x_3400_;
v_isShared_3404_ = v_isSharedCheck_3410_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_a_3401_);
lean_dec(v___x_3400_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3410_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
uint8_t v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3408_; 
v___x_3405_ = 0;
v___x_3406_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3406_, 0, v_val_3392_);
lean_ctor_set(v___x_3406_, 1, v_a_3401_);
lean_ctor_set_uint8(v___x_3406_, sizeof(void*)*2, v___x_3405_);
lean_ctor_set_uint8(v___x_3406_, sizeof(void*)*2 + 1, v___x_3405_);
if (v_isShared_3404_ == 0)
{
lean_ctor_set(v___x_3403_, 0, v___x_3406_);
v___x_3408_ = v___x_3403_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v___x_3406_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
lean_dec(v_val_3392_);
v_a_3411_ = lean_ctor_get(v___x_3400_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3400_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3400_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3400_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
}
}
else
{
lean_object* v___x_3442_; lean_object* v___x_3444_; 
lean_dec(v_a_3388_);
lean_dec_ref(v_e_3375_);
v___x_3442_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0));
if (v_isShared_3391_ == 0)
{
lean_ctor_set(v___x_3390_, 0, v___x_3442_);
v___x_3444_ = v___x_3390_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v___x_3442_);
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
lean_dec_ref(v_e_3375_);
v_a_3447_ = lean_ctor_get(v___x_3387_, 0);
v_isSharedCheck_3454_ = !lean_is_exclusive(v___x_3387_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3449_ = v___x_3387_;
v_isShared_3450_ = v_isSharedCheck_3454_;
goto v_resetjp_3448_;
}
else
{
lean_inc(v_a_3447_);
lean_dec(v___x_3387_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___boxed(lean_object* v_e_3455_, lean_object* v_a_3456_, lean_object* v_a_3457_, lean_object* v_a_3458_, lean_object* v_a_3459_, lean_object* v_a_3460_, lean_object* v_a_3461_, lean_object* v_a_3462_, lean_object* v_a_3463_, lean_object* v_a_3464_, lean_object* v_a_3465_){
_start:
{
lean_object* v_res_3466_; 
v_res_3466_ = l_Lean_Meta_Tactic_Cbv_reduceRecMatcher(v_e_3455_, v_a_3456_, v_a_3457_, v_a_3458_, v_a_3459_, v_a_3460_, v_a_3461_, v_a_3462_, v_a_3463_, v_a_3464_);
lean_dec(v_a_3464_);
lean_dec_ref(v_a_3463_);
lean_dec(v_a_3462_);
lean_dec_ref(v_a_3461_);
lean_dec(v_a_3460_);
lean_dec_ref(v_a_3459_);
lean_dec(v_a_3458_);
lean_dec_ref(v_a_3457_);
lean_dec(v_a_3456_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0(lean_object* v_cls_3467_, lean_object* v_msg_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_){
_start:
{
lean_object* v___x_3479_; 
v___x_3479_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg(v_cls_3467_, v_msg_3468_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_);
return v___x_3479_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___boxed(lean_object* v_cls_3480_, lean_object* v_msg_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_){
_start:
{
lean_object* v_res_3492_; 
v_res_3492_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0(v_cls_3480_, v_msg_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_, v___y_3487_, v___y_3488_, v___y_3489_, v___y_3490_);
lean_dec(v___y_3490_);
lean_dec_ref(v___y_3489_);
lean_dec(v___y_3488_);
lean_dec_ref(v___y_3487_);
lean_dec(v___y_3486_);
lean_dec_ref(v___y_3485_);
lean_dec(v___y_3484_);
lean_dec_ref(v___y_3483_);
lean_dec(v___y_3482_);
return v_res_3492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec(lean_object* v_x_3505_, lean_object* v_a_3506_, lean_object* v_a_3507_, lean_object* v_a_3508_, lean_object* v_a_3509_, lean_object* v_a_3510_, lean_object* v_a_3511_, lean_object* v_a_3512_, lean_object* v_a_3513_, lean_object* v_a_3514_){
_start:
{
uint8_t v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; 
v___x_3516_ = 0;
v___x_3517_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___closed__0));
lean_inc_ref(v_x_3505_);
v___x_3518_ = l_Lean_Meta_Sym_Simp_simpInterlaced(v_x_3505_, v___x_3517_, v_a_3506_, v_a_3507_, v_a_3508_, v_a_3509_, v_a_3510_, v_a_3511_, v_a_3512_, v_a_3513_, v_a_3514_);
if (lean_obj_tag(v___x_3518_) == 0)
{
lean_object* v_a_3519_; 
v_a_3519_ = lean_ctor_get(v___x_3518_, 0);
lean_inc(v_a_3519_);
if (lean_obj_tag(v_a_3519_) == 0)
{
uint8_t v_done_3520_; 
v_done_3520_ = lean_ctor_get_uint8(v_a_3519_, 0);
if (v_done_3520_ == 0)
{
lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3533_; 
v_isSharedCheck_3533_ = !lean_is_exclusive(v___x_3518_);
if (v_isSharedCheck_3533_ == 0)
{
lean_object* v_unused_3534_; 
v_unused_3534_ = lean_ctor_get(v___x_3518_, 0);
lean_dec(v_unused_3534_);
v___x_3522_ = v___x_3518_;
v_isShared_3523_ = v_isSharedCheck_3533_;
goto v_resetjp_3521_;
}
else
{
lean_dec(v___x_3518_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3533_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
uint8_t v_contextDependent_3524_; lean_object* v___x_3525_; 
v_contextDependent_3524_ = lean_ctor_get_uint8(v_a_3519_, 1);
lean_dec_ref_known(v_a_3519_, 0);
v___x_3525_ = l_Lean_Meta_Tactic_Cbv_reduceRecMatcher(v_x_3505_, v_a_3506_, v_a_3507_, v_a_3508_, v_a_3509_, v_a_3510_, v_a_3511_, v_a_3512_, v_a_3513_, v_a_3514_);
if (lean_obj_tag(v___x_3525_) == 0)
{
lean_object* v_a_3526_; uint8_t v___y_3528_; 
v_a_3526_ = lean_ctor_get(v___x_3525_, 0);
if (v_contextDependent_3524_ == 0)
{
lean_del_object(v___x_3522_);
return v___x_3525_;
}
else
{
lean_inc(v_a_3526_);
lean_dec_ref_known(v___x_3525_, 1);
v___y_3528_ = v___x_3516_;
goto v___jp_3527_;
}
v___jp_3527_:
{
lean_object* v___x_3529_; lean_object* v___x_3531_; 
v___x_3529_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_3526_);
if (v_isShared_3523_ == 0)
{
lean_ctor_set(v___x_3522_, 0, v___x_3529_);
v___x_3531_ = v___x_3522_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v___x_3529_);
v___x_3531_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
return v___x_3531_;
}
}
}
else
{
lean_del_object(v___x_3522_);
return v___x_3525_;
}
}
}
else
{
lean_dec_ref_known(v_a_3519_, 0);
lean_dec_ref(v_x_3505_);
return v___x_3518_;
}
}
else
{
uint8_t v_done_3535_; 
v_done_3535_ = lean_ctor_get_uint8(v_a_3519_, sizeof(void*)*2);
if (v_done_3535_ == 0)
{
lean_object* v_e_x27_3536_; lean_object* v_proof_3537_; uint8_t v_contextDependent_3538_; lean_object* v___x_3540_; uint8_t v_isShared_3541_; uint8_t v_isSharedCheck_3584_; 
lean_dec_ref_known(v___x_3518_, 1);
v_e_x27_3536_ = lean_ctor_get(v_a_3519_, 0);
v_proof_3537_ = lean_ctor_get(v_a_3519_, 1);
v_contextDependent_3538_ = lean_ctor_get_uint8(v_a_3519_, sizeof(void*)*2 + 1);
v_isSharedCheck_3584_ = !lean_is_exclusive(v_a_3519_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3540_ = v_a_3519_;
v_isShared_3541_ = v_isSharedCheck_3584_;
goto v_resetjp_3539_;
}
else
{
lean_inc(v_proof_3537_);
lean_inc(v_e_x27_3536_);
lean_dec(v_a_3519_);
v___x_3540_ = lean_box(0);
v_isShared_3541_ = v_isSharedCheck_3584_;
goto v_resetjp_3539_;
}
v_resetjp_3539_:
{
lean_object* v___x_3542_; 
lean_inc_ref(v_e_x27_3536_);
v___x_3542_ = l_Lean_Meta_Tactic_Cbv_reduceRecMatcher(v_e_x27_3536_, v_a_3506_, v_a_3507_, v_a_3508_, v_a_3509_, v_a_3510_, v_a_3511_, v_a_3512_, v_a_3513_, v_a_3514_);
if (lean_obj_tag(v___x_3542_) == 0)
{
lean_object* v_a_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3583_; 
v_a_3543_ = lean_ctor_get(v___x_3542_, 0);
v_isSharedCheck_3583_ = !lean_is_exclusive(v___x_3542_);
if (v_isSharedCheck_3583_ == 0)
{
v___x_3545_ = v___x_3542_;
v_isShared_3546_ = v_isSharedCheck_3583_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_a_3543_);
lean_dec(v___x_3542_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3583_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
if (lean_obj_tag(v_a_3543_) == 0)
{
uint8_t v___y_3548_; 
lean_dec_ref_known(v_a_3543_, 0);
lean_dec_ref(v_x_3505_);
if (v_contextDependent_3538_ == 0)
{
v___y_3548_ = v___x_3516_;
goto v___jp_3547_;
}
else
{
v___y_3548_ = v_contextDependent_3538_;
goto v___jp_3547_;
}
v___jp_3547_:
{
lean_object* v___x_3550_; 
if (v_isShared_3541_ == 0)
{
v___x_3550_ = v___x_3540_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3554_; 
v_reuseFailAlloc_3554_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_3554_, 0, v_e_x27_3536_);
lean_ctor_set(v_reuseFailAlloc_3554_, 1, v_proof_3537_);
v___x_3550_ = v_reuseFailAlloc_3554_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
lean_object* v___x_3552_; 
lean_ctor_set_uint8(v___x_3550_, sizeof(void*)*2, v___x_3516_);
lean_ctor_set_uint8(v___x_3550_, sizeof(void*)*2 + 1, v___y_3548_);
if (v_isShared_3546_ == 0)
{
lean_ctor_set(v___x_3545_, 0, v___x_3550_);
v___x_3552_ = v___x_3545_;
goto v_reusejp_3551_;
}
else
{
lean_object* v_reuseFailAlloc_3553_; 
v_reuseFailAlloc_3553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3553_, 0, v___x_3550_);
v___x_3552_ = v_reuseFailAlloc_3553_;
goto v_reusejp_3551_;
}
v_reusejp_3551_:
{
return v___x_3552_;
}
}
}
}
else
{
lean_object* v_e_x27_3555_; lean_object* v_proof_3556_; lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3582_; 
lean_del_object(v___x_3545_);
lean_del_object(v___x_3540_);
v_e_x27_3555_ = lean_ctor_get(v_a_3543_, 0);
v_proof_3556_ = lean_ctor_get(v_a_3543_, 1);
v_isSharedCheck_3582_ = !lean_is_exclusive(v_a_3543_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3558_ = v_a_3543_;
v_isShared_3559_ = v_isSharedCheck_3582_;
goto v_resetjp_3557_;
}
else
{
lean_inc(v_proof_3556_);
lean_inc(v_e_x27_3555_);
lean_dec(v_a_3543_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3582_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v___x_3560_; 
lean_inc_ref(v_e_x27_3555_);
v___x_3560_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v_x_3505_, v_e_x27_3536_, v_proof_3537_, v_e_x27_3555_, v_proof_3556_, v_a_3509_, v_a_3510_, v_a_3511_, v_a_3512_, v_a_3513_, v_a_3514_);
if (lean_obj_tag(v___x_3560_) == 0)
{
lean_object* v_a_3561_; lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3573_; 
v_a_3561_ = lean_ctor_get(v___x_3560_, 0);
v_isSharedCheck_3573_ = !lean_is_exclusive(v___x_3560_);
if (v_isSharedCheck_3573_ == 0)
{
v___x_3563_ = v___x_3560_;
v_isShared_3564_ = v_isSharedCheck_3573_;
goto v_resetjp_3562_;
}
else
{
lean_inc(v_a_3561_);
lean_dec(v___x_3560_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3573_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
uint8_t v___y_3566_; 
if (v_contextDependent_3538_ == 0)
{
v___y_3566_ = v___x_3516_;
goto v___jp_3565_;
}
else
{
v___y_3566_ = v_contextDependent_3538_;
goto v___jp_3565_;
}
v___jp_3565_:
{
lean_object* v___x_3568_; 
if (v_isShared_3559_ == 0)
{
lean_ctor_set(v___x_3558_, 1, v_a_3561_);
v___x_3568_ = v___x_3558_;
goto v_reusejp_3567_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v_e_x27_3555_);
lean_ctor_set(v_reuseFailAlloc_3572_, 1, v_a_3561_);
v___x_3568_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3567_;
}
v_reusejp_3567_:
{
lean_object* v___x_3570_; 
lean_ctor_set_uint8(v___x_3568_, sizeof(void*)*2, v___x_3516_);
lean_ctor_set_uint8(v___x_3568_, sizeof(void*)*2 + 1, v___y_3566_);
if (v_isShared_3564_ == 0)
{
lean_ctor_set(v___x_3563_, 0, v___x_3568_);
v___x_3570_ = v___x_3563_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v___x_3568_);
v___x_3570_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
return v___x_3570_;
}
}
}
}
}
else
{
lean_object* v_a_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3581_; 
lean_del_object(v___x_3558_);
lean_dec_ref(v_e_x27_3555_);
v_a_3574_ = lean_ctor_get(v___x_3560_, 0);
v_isSharedCheck_3581_ = !lean_is_exclusive(v___x_3560_);
if (v_isSharedCheck_3581_ == 0)
{
v___x_3576_ = v___x_3560_;
v_isShared_3577_ = v_isSharedCheck_3581_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_a_3574_);
lean_dec(v___x_3560_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3581_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v___x_3579_; 
if (v_isShared_3577_ == 0)
{
v___x_3579_ = v___x_3576_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v_a_3574_);
v___x_3579_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
return v___x_3579_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3540_);
lean_dec_ref(v_proof_3537_);
lean_dec_ref(v_e_x27_3536_);
lean_dec_ref(v_x_3505_);
return v___x_3542_;
}
}
}
else
{
lean_dec_ref_known(v_a_3519_, 2);
lean_dec_ref(v_x_3505_);
return v___x_3518_;
}
}
}
else
{
lean_dec_ref(v_x_3505_);
return v___x_3518_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___boxed(lean_object* v_x_3585_, lean_object* v_a_3586_, lean_object* v_a_3587_, lean_object* v_a_3588_, lean_object* v_a_3589_, lean_object* v_a_3590_, lean_object* v_a_3591_, lean_object* v_a_3592_, lean_object* v_a_3593_, lean_object* v_a_3594_, lean_object* v_a_3595_){
_start:
{
lean_object* v_res_3596_; 
v_res_3596_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec(v_x_3585_, v_a_3586_, v_a_3587_, v_a_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_);
lean_dec(v_a_3594_);
lean_dec_ref(v_a_3593_);
lean_dec(v_a_3592_);
lean_dec_ref(v_a_3591_);
lean_dec(v_a_3590_);
lean_dec_ref(v_a_3589_);
lean_dec(v_a_3588_);
lean_dec_ref(v_a_3587_);
lean_dec(v_a_3586_);
return v_res_3596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_(){
_start:
{
lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; 
v___x_3618_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_));
v___x_3619_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__5_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_));
v___x_3620_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___boxed), 11, 0);
v___x_3621_ = l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(v___x_3618_, v___x_3619_, v___x_3620_);
return v___x_3621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17____boxed(lean_object* v_a_3622_){
_start:
{
lean_object* v_res_3623_; 
v_res_3623_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_();
return v_res_3623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_19_(){
_start:
{
lean_object* v___x_3625_; uint8_t v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; 
v___x_3625_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67___closed__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_));
v___x_3626_ = 0;
v___x_3627_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___boxed), 11, 0);
v___x_3628_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(v___x_3625_, v___x_3626_, v___x_3627_);
return v___x_3628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_19____boxed(lean_object* v_a_3629_){
_start:
{
lean_object* v_res_3630_; 
v_res_3630_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_19_();
return v_res_3630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations(lean_object* v_appFn_3632_, lean_object* v_e_3633_, lean_object* v_a_3634_, lean_object* v_a_3635_, lean_object* v_a_3636_, lean_object* v_a_3637_, lean_object* v_a_3638_, lean_object* v_a_3639_, lean_object* v_a_3640_, lean_object* v_a_3641_, lean_object* v_a_3642_){
_start:
{
lean_object* v___x_3644_; 
v___x_3644_ = l_Lean_Meta_Sym_Simp_getMatchTheorems(v_appFn_3632_, v_a_3639_, v_a_3640_, v_a_3641_, v_a_3642_);
if (lean_obj_tag(v___x_3644_) == 0)
{
lean_object* v_a_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; 
v_a_3645_ = lean_ctor_get(v___x_3644_, 0);
lean_inc(v_a_3645_);
lean_dec_ref_known(v___x_3644_, 1);
v___x_3646_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations___closed__0));
v___x_3647_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_3645_, v___x_3646_, v_e_3633_, v_a_3634_, v_a_3635_, v_a_3636_, v_a_3637_, v_a_3638_, v_a_3639_, v_a_3640_, v_a_3641_, v_a_3642_);
lean_dec(v_a_3645_);
return v___x_3647_;
}
else
{
lean_object* v_a_3648_; lean_object* v___x_3650_; uint8_t v_isShared_3651_; uint8_t v_isSharedCheck_3655_; 
lean_dec_ref(v_e_3633_);
v_a_3648_ = lean_ctor_get(v___x_3644_, 0);
v_isSharedCheck_3655_ = !lean_is_exclusive(v___x_3644_);
if (v_isSharedCheck_3655_ == 0)
{
v___x_3650_ = v___x_3644_;
v_isShared_3651_ = v_isSharedCheck_3655_;
goto v_resetjp_3649_;
}
else
{
lean_inc(v_a_3648_);
lean_dec(v___x_3644_);
v___x_3650_ = lean_box(0);
v_isShared_3651_ = v_isSharedCheck_3655_;
goto v_resetjp_3649_;
}
v_resetjp_3649_:
{
lean_object* v___x_3653_; 
if (v_isShared_3651_ == 0)
{
v___x_3653_ = v___x_3650_;
goto v_reusejp_3652_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v_a_3648_);
v___x_3653_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3652_;
}
v_reusejp_3652_:
{
return v___x_3653_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations___boxed(lean_object* v_appFn_3656_, lean_object* v_e_3657_, lean_object* v_a_3658_, lean_object* v_a_3659_, lean_object* v_a_3660_, lean_object* v_a_3661_, lean_object* v_a_3662_, lean_object* v_a_3663_, lean_object* v_a_3664_, lean_object* v_a_3665_, lean_object* v_a_3666_, lean_object* v_a_3667_){
_start:
{
lean_object* v_res_3668_; 
v_res_3668_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations(v_appFn_3656_, v_e_3657_, v_a_3658_, v_a_3659_, v_a_3660_, v_a_3661_, v_a_3662_, v_a_3663_, v_a_3664_, v_a_3665_, v_a_3666_);
lean_dec(v_a_3666_);
lean_dec_ref(v_a_3665_);
lean_dec(v_a_3664_);
lean_dec_ref(v_a_3663_);
lean_dec(v_a_3662_);
lean_dec_ref(v_a_3661_);
lean_dec(v_a_3660_);
lean_dec_ref(v_a_3659_);
lean_dec(v_a_3658_);
return v_res_3668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___redArg(lean_object* v_declName_3669_, lean_object* v___y_3670_){
_start:
{
lean_object* v___x_3672_; lean_object* v_env_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; 
v___x_3672_ = lean_st_ref_get(v___y_3670_);
v_env_3673_ = lean_ctor_get(v___x_3672_, 0);
lean_inc_ref(v_env_3673_);
lean_dec(v___x_3672_);
v___x_3674_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_3673_, v_declName_3669_);
v___x_3675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3675_, 0, v___x_3674_);
return v___x_3675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___redArg___boxed(lean_object* v_declName_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_){
_start:
{
lean_object* v_res_3679_; 
v_res_3679_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___redArg(v_declName_3676_, v___y_3677_);
lean_dec(v___y_3677_);
return v_res_3679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0(lean_object* v_declName_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_){
_start:
{
lean_object* v___x_3691_; 
v___x_3691_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___redArg(v_declName_3680_, v___y_3689_);
return v___x_3691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___boxed(lean_object* v_declName_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_){
_start:
{
lean_object* v_res_3703_; 
v_res_3703_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0(v_declName_3692_, v___y_3693_, v___y_3694_, v___y_3695_, v___y_3696_, v___y_3697_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_);
lean_dec(v___y_3701_);
lean_dec_ref(v___y_3700_);
lean_dec(v___y_3699_);
lean_dec_ref(v___y_3698_);
lean_dec(v___y_3697_);
lean_dec_ref(v___y_3696_);
lean_dec(v___y_3695_);
lean_dec_ref(v___y_3694_);
lean_dec(v___y_3693_);
return v_res_3703_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__2(void){
_start:
{
lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; 
v___x_3710_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1));
v___x_3711_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__4));
v___x_3712_ = l_Lean_Name_append(v___x_3711_, v___x_3710_);
return v___x_3712_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__4(void){
_start:
{
lean_object* v___x_3714_; lean_object* v___x_3715_; 
v___x_3714_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__3));
v___x_3715_ = l_Lean_stringToMessageData(v___x_3714_);
return v___x_3715_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__6(void){
_start:
{
lean_object* v___x_3717_; lean_object* v___x_3718_; 
v___x_3717_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__5));
v___x_3718_ = l_Lean_stringToMessageData(v___x_3717_);
return v___x_3718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher(lean_object* v_e_3719_, lean_object* v_a_3720_, lean_object* v_a_3721_, lean_object* v_a_3722_, lean_object* v_a_3723_, lean_object* v_a_3724_, lean_object* v_a_3725_, lean_object* v_a_3726_, lean_object* v_a_3727_, lean_object* v_a_3728_){
_start:
{
uint8_t v___x_3730_; 
v___x_3730_ = l_Lean_Expr_isApp(v_e_3719_);
if (v___x_3730_ == 0)
{
lean_object* v___x_3731_; lean_object* v___x_3732_; 
lean_dec_ref(v_e_3719_);
v___x_3731_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_3731_, 0, v___x_3730_);
lean_ctor_set_uint8(v___x_3731_, 1, v___x_3730_);
v___x_3732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3731_);
return v___x_3732_;
}
else
{
lean_object* v___x_3733_; lean_object* v___x_3734_; 
v___x_3733_ = l_Lean_Expr_getAppFn(v_e_3719_);
v___x_3734_ = l_Lean_Expr_constName_x3f(v___x_3733_);
lean_dec_ref(v___x_3733_);
if (lean_obj_tag(v___x_3734_) == 1)
{
lean_object* v_val_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3879_; 
v_val_3735_ = lean_ctor_get(v___x_3734_, 0);
v_isSharedCheck_3879_ = !lean_is_exclusive(v___x_3734_);
if (v_isSharedCheck_3879_ == 0)
{
v___x_3737_ = v___x_3734_;
v_isShared_3738_ = v_isSharedCheck_3879_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_val_3735_);
lean_dec(v___x_3734_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3879_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v_a_3740_; lean_object* v_e_x27_3741_; lean_object* v___y_3784_; lean_object* v_a_3785_; lean_object* v___y_3788_; lean_object* v___y_3789_; uint8_t v___y_3790_; lean_object* v___y_3794_; lean_object* v_a_3795_; lean_object* v___x_3803_; lean_object* v_a_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3878_; 
lean_inc(v_val_3735_);
v___x_3803_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_Tactic_Cbv_tryMatcher_spec__0___redArg(v_val_3735_, v_a_3728_);
v_a_3804_ = lean_ctor_get(v___x_3803_, 0);
v_isSharedCheck_3878_ = !lean_is_exclusive(v___x_3803_);
if (v_isSharedCheck_3878_ == 0)
{
v___x_3806_ = v___x_3803_;
v_isShared_3807_ = v_isSharedCheck_3878_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_a_3804_);
lean_dec(v___x_3803_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3878_;
goto v_resetjp_3805_;
}
v___jp_3739_:
{
lean_object* v_toCold_3742_; lean_object* v_options_3743_; uint8_t v_hasTrace_3744_; 
v_toCold_3742_ = lean_ctor_get(v_a_3727_, 0);
v_options_3743_ = lean_ctor_get(v_toCold_3742_, 2);
v_hasTrace_3744_ = lean_ctor_get_uint8(v_options_3743_, sizeof(void*)*1);
if (v_hasTrace_3744_ == 0)
{
lean_object* v___x_3746_; 
lean_dec_ref(v_e_x27_3741_);
lean_dec(v_val_3735_);
lean_dec_ref(v_e_3719_);
if (v_isShared_3738_ == 0)
{
lean_ctor_set_tag(v___x_3737_, 0);
lean_ctor_set(v___x_3737_, 0, v_a_3740_);
v___x_3746_ = v___x_3737_;
goto v_reusejp_3745_;
}
else
{
lean_object* v_reuseFailAlloc_3747_; 
v_reuseFailAlloc_3747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3747_, 0, v_a_3740_);
v___x_3746_ = v_reuseFailAlloc_3747_;
goto v_reusejp_3745_;
}
v_reusejp_3745_:
{
return v___x_3746_;
}
}
else
{
lean_object* v_inheritedTraceOptions_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; uint8_t v___x_3751_; 
v_inheritedTraceOptions_3748_ = lean_ctor_get(v_toCold_3742_, 11);
v___x_3749_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__1));
v___x_3750_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__2, &l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__2);
v___x_3751_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3748_, v_options_3743_, v___x_3750_);
if (v___x_3751_ == 0)
{
lean_object* v___x_3753_; 
lean_dec_ref(v_e_x27_3741_);
lean_dec(v_val_3735_);
lean_dec_ref(v_e_3719_);
if (v_isShared_3738_ == 0)
{
lean_ctor_set_tag(v___x_3737_, 0);
lean_ctor_set(v___x_3737_, 0, v_a_3740_);
v___x_3753_ = v___x_3737_;
goto v_reusejp_3752_;
}
else
{
lean_object* v_reuseFailAlloc_3754_; 
v_reuseFailAlloc_3754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3754_, 0, v_a_3740_);
v___x_3753_ = v_reuseFailAlloc_3754_;
goto v_reusejp_3752_;
}
v_reusejp_3752_:
{
return v___x_3753_;
}
}
else
{
lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; 
lean_del_object(v___x_3737_);
v___x_3755_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__4, &l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__4_once, _init_l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__4);
v___x_3756_ = l_Lean_MessageData_ofName(v_val_3735_);
v___x_3757_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3757_, 0, v___x_3755_);
lean_ctor_set(v___x_3757_, 1, v___x_3756_);
v___x_3758_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__6, &l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__6_once, _init_l_Lean_Meta_Tactic_Cbv_tryMatcher___closed__6);
v___x_3759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3759_, 0, v___x_3757_);
lean_ctor_set(v___x_3759_, 1, v___x_3758_);
v___x_3760_ = l_Lean_indentExpr(v_e_3719_);
v___x_3761_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3761_, 0, v___x_3759_);
lean_ctor_set(v___x_3761_, 1, v___x_3760_);
v___x_3762_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9, &l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9_once, _init_l_Lean_Meta_Tactic_Cbv_reduceRecMatcher___closed__9);
v___x_3763_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3763_, 0, v___x_3761_);
lean_ctor_set(v___x_3763_, 1, v___x_3762_);
v___x_3764_ = l_Lean_indentExpr(v_e_x27_3741_);
v___x_3765_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3765_, 0, v___x_3763_);
lean_ctor_set(v___x_3765_, 1, v___x_3764_);
v___x_3766_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_Cbv_reduceRecMatcher_spec__0___redArg(v___x_3749_, v___x_3765_, v_a_3725_, v_a_3726_, v_a_3727_, v_a_3728_);
if (lean_obj_tag(v___x_3766_) == 0)
{
lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3773_; 
v_isSharedCheck_3773_ = !lean_is_exclusive(v___x_3766_);
if (v_isSharedCheck_3773_ == 0)
{
lean_object* v_unused_3774_; 
v_unused_3774_ = lean_ctor_get(v___x_3766_, 0);
lean_dec(v_unused_3774_);
v___x_3768_ = v___x_3766_;
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
else
{
lean_dec(v___x_3766_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3771_; 
if (v_isShared_3769_ == 0)
{
lean_ctor_set(v___x_3768_, 0, v_a_3740_);
v___x_3771_ = v___x_3768_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v_a_3740_);
v___x_3771_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
return v___x_3771_;
}
}
}
else
{
lean_object* v_a_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3782_; 
lean_dec_ref(v_a_3740_);
v_a_3775_ = lean_ctor_get(v___x_3766_, 0);
v_isSharedCheck_3782_ = !lean_is_exclusive(v___x_3766_);
if (v_isSharedCheck_3782_ == 0)
{
v___x_3777_ = v___x_3766_;
v_isShared_3778_ = v_isSharedCheck_3782_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_a_3775_);
lean_dec(v___x_3766_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3782_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v___x_3780_; 
if (v_isShared_3778_ == 0)
{
v___x_3780_ = v___x_3777_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3781_; 
v_reuseFailAlloc_3781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3781_, 0, v_a_3775_);
v___x_3780_ = v_reuseFailAlloc_3781_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
return v___x_3780_;
}
}
}
}
}
}
v___jp_3783_:
{
if (lean_obj_tag(v_a_3785_) == 1)
{
lean_object* v_e_x27_3786_; 
lean_dec_ref(v___y_3784_);
v_e_x27_3786_ = lean_ctor_get(v_a_3785_, 0);
lean_inc_ref(v_e_x27_3786_);
v_a_3740_ = v_a_3785_;
v_e_x27_3741_ = v_e_x27_3786_;
goto v___jp_3739_;
}
else
{
lean_dec_ref(v_a_3785_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_e_3719_);
return v___y_3784_;
}
}
v___jp_3787_:
{
lean_object* v___x_3791_; lean_object* v___x_3792_; 
lean_dec_ref(v___y_3788_);
v___x_3791_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v___y_3789_);
lean_inc_ref(v___x_3791_);
v___x_3792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3792_, 0, v___x_3791_);
v___y_3784_ = v___x_3792_;
v_a_3785_ = v___x_3791_;
goto v___jp_3783_;
}
v___jp_3793_:
{
if (lean_obj_tag(v_a_3795_) == 0)
{
uint8_t v_done_3796_; 
v_done_3796_ = lean_ctor_get_uint8(v_a_3795_, 0);
if (v_done_3796_ == 0)
{
uint8_t v_contextDependent_3797_; lean_object* v___x_3798_; 
lean_dec_ref(v___y_3794_);
v_contextDependent_3797_ = lean_ctor_get_uint8(v_a_3795_, 1);
lean_dec_ref_known(v_a_3795_, 0);
lean_inc_ref(v_e_3719_);
v___x_3798_ = l_Lean_Meta_Tactic_Cbv_reduceRecMatcher(v_e_3719_, v_a_3720_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_, v_a_3725_, v_a_3726_, v_a_3727_, v_a_3728_);
if (lean_obj_tag(v___x_3798_) == 0)
{
if (v_contextDependent_3797_ == 0)
{
lean_object* v_a_3799_; 
v_a_3799_ = lean_ctor_get(v___x_3798_, 0);
lean_inc(v_a_3799_);
v___y_3784_ = v___x_3798_;
v_a_3785_ = v_a_3799_;
goto v___jp_3783_;
}
else
{
lean_object* v_a_3800_; uint8_t v___x_3801_; 
v_a_3800_ = lean_ctor_get(v___x_3798_, 0);
lean_inc(v_a_3800_);
v___x_3801_ = 0;
v___y_3788_ = v___x_3798_;
v___y_3789_ = v_a_3800_;
v___y_3790_ = v___x_3801_;
goto v___jp_3787_;
}
}
else
{
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_e_3719_);
return v___x_3798_;
}
}
else
{
lean_dec_ref_known(v_a_3795_, 0);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_e_3719_);
return v___y_3794_;
}
}
else
{
lean_object* v_e_x27_3802_; 
lean_dec_ref(v___y_3794_);
v_e_x27_3802_ = lean_ctor_get(v_a_3795_, 0);
lean_inc_ref(v_e_x27_3802_);
v_a_3740_ = v_a_3795_;
v_e_x27_3741_ = v_e_x27_3802_;
goto v___jp_3739_;
}
}
v_resetjp_3805_:
{
if (lean_obj_tag(v_a_3804_) == 1)
{
lean_object* v_val_3808_; lean_object* v_numParams_3809_; lean_object* v_numDiscrs_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
lean_del_object(v___x_3806_);
v_val_3808_ = lean_ctor_get(v_a_3804_, 0);
lean_inc(v_val_3808_);
lean_dec_ref_known(v_a_3804_, 1);
v_numParams_3809_ = lean_ctor_get(v_val_3808_, 0);
lean_inc(v_numParams_3809_);
v_numDiscrs_3810_ = lean_ctor_get(v_val_3808_, 1);
lean_inc(v_numDiscrs_3810_);
lean_dec(v_val_3808_);
v___x_3811_ = lean_unsigned_to_nat(1u);
v___x_3812_ = lean_nat_add(v_numParams_3809_, v___x_3811_);
lean_dec(v_numParams_3809_);
v___x_3813_ = lean_nat_add(v___x_3812_, v_numDiscrs_3810_);
lean_dec(v_numDiscrs_3810_);
lean_inc_ref(v_e_3719_);
v___x_3814_ = l_Lean_Meta_Sym_Simp_simpAppArgRange(v_e_3719_, v___x_3812_, v___x_3813_, v_a_3720_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_, v_a_3725_, v_a_3726_, v_a_3727_, v_a_3728_);
lean_dec(v___x_3813_);
lean_dec(v___x_3812_);
if (lean_obj_tag(v___x_3814_) == 0)
{
lean_object* v_a_3815_; 
v_a_3815_ = lean_ctor_get(v___x_3814_, 0);
lean_inc(v_a_3815_);
if (lean_obj_tag(v_a_3815_) == 0)
{
uint8_t v_done_3816_; 
v_done_3816_ = lean_ctor_get_uint8(v_a_3815_, 0);
if (v_done_3816_ == 0)
{
uint8_t v_contextDependent_3817_; lean_object* v___x_3818_; 
lean_dec_ref_known(v___x_3814_, 1);
v_contextDependent_3817_ = lean_ctor_get_uint8(v_a_3815_, 1);
lean_dec_ref_known(v_a_3815_, 0);
lean_inc_ref(v_e_3719_);
lean_inc(v_val_3735_);
v___x_3818_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations(v_val_3735_, v_e_3719_, v_a_3720_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_, v_a_3725_, v_a_3726_, v_a_3727_, v_a_3728_);
if (lean_obj_tag(v___x_3818_) == 0)
{
lean_object* v_a_3819_; uint8_t v___y_3821_; 
v_a_3819_ = lean_ctor_get(v___x_3818_, 0);
lean_inc(v_a_3819_);
if (v_contextDependent_3817_ == 0)
{
v___y_3794_ = v___x_3818_;
v_a_3795_ = v_a_3819_;
goto v___jp_3793_;
}
else
{
if (lean_obj_tag(v_a_3819_) == 0)
{
uint8_t v_contextDependent_3831_; 
v_contextDependent_3831_ = lean_ctor_get_uint8(v_a_3819_, 1);
v___y_3821_ = v_contextDependent_3831_;
goto v___jp_3820_;
}
else
{
uint8_t v_contextDependent_3832_; 
v_contextDependent_3832_ = lean_ctor_get_uint8(v_a_3819_, sizeof(void*)*2 + 1);
v___y_3821_ = v_contextDependent_3832_;
goto v___jp_3820_;
}
}
v___jp_3820_:
{
if (v___y_3821_ == 0)
{
lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3829_; 
v_isSharedCheck_3829_ = !lean_is_exclusive(v___x_3818_);
if (v_isSharedCheck_3829_ == 0)
{
lean_object* v_unused_3830_; 
v_unused_3830_ = lean_ctor_get(v___x_3818_, 0);
lean_dec(v_unused_3830_);
v___x_3823_ = v___x_3818_;
v_isShared_3824_ = v_isSharedCheck_3829_;
goto v_resetjp_3822_;
}
else
{
lean_dec(v___x_3818_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3829_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v___x_3825_; lean_object* v___x_3827_; 
v___x_3825_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_3819_);
lean_inc_ref(v___x_3825_);
if (v_isShared_3824_ == 0)
{
lean_ctor_set(v___x_3823_, 0, v___x_3825_);
v___x_3827_ = v___x_3823_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v___x_3825_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
v___y_3794_ = v___x_3827_;
v_a_3795_ = v___x_3825_;
goto v___jp_3793_;
}
}
}
else
{
v___y_3794_ = v___x_3818_;
v_a_3795_ = v_a_3819_;
goto v___jp_3793_;
}
}
}
else
{
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_e_3719_);
return v___x_3818_;
}
}
else
{
lean_dec_ref_known(v_a_3815_, 0);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_e_3719_);
return v___x_3814_;
}
}
else
{
uint8_t v_done_3833_; 
lean_dec_ref_known(v___x_3814_, 1);
v_done_3833_ = lean_ctor_get_uint8(v_a_3815_, sizeof(void*)*2);
if (v_done_3833_ == 0)
{
lean_object* v_e_x27_3834_; lean_object* v_proof_3835_; uint8_t v_contextDependent_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3872_; 
v_e_x27_3834_ = lean_ctor_get(v_a_3815_, 0);
v_proof_3835_ = lean_ctor_get(v_a_3815_, 1);
v_contextDependent_3836_ = lean_ctor_get_uint8(v_a_3815_, sizeof(void*)*2 + 1);
v_isSharedCheck_3872_ = !lean_is_exclusive(v_a_3815_);
if (v_isSharedCheck_3872_ == 0)
{
v___x_3838_ = v_a_3815_;
v_isShared_3839_ = v_isSharedCheck_3872_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_proof_3835_);
lean_inc(v_e_x27_3834_);
lean_dec(v_a_3815_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3872_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3840_; 
lean_inc_ref(v_e_x27_3834_);
lean_inc(v_val_3735_);
v___x_3840_ = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_tryMatchEquations(v_val_3735_, v_e_x27_3834_, v_a_3720_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_, v_a_3725_, v_a_3726_, v_a_3727_, v_a_3728_);
if (lean_obj_tag(v___x_3840_) == 0)
{
lean_object* v_a_3841_; 
v_a_3841_ = lean_ctor_get(v___x_3840_, 0);
lean_inc(v_a_3841_);
lean_dec_ref_known(v___x_3840_, 1);
if (lean_obj_tag(v_a_3841_) == 0)
{
uint8_t v_done_3842_; uint8_t v_contextDependent_3843_; uint8_t v___y_3845_; 
v_done_3842_ = lean_ctor_get_uint8(v_a_3841_, 0);
v_contextDependent_3843_ = lean_ctor_get_uint8(v_a_3841_, 1);
lean_dec_ref_known(v_a_3841_, 0);
if (v_contextDependent_3836_ == 0)
{
v___y_3845_ = v_contextDependent_3843_;
goto v___jp_3844_;
}
else
{
v___y_3845_ = v_contextDependent_3836_;
goto v___jp_3844_;
}
v___jp_3844_:
{
lean_object* v___x_3847_; 
lean_inc_ref(v_e_x27_3834_);
if (v_isShared_3839_ == 0)
{
v___x_3847_ = v___x_3838_;
goto v_reusejp_3846_;
}
else
{
lean_object* v_reuseFailAlloc_3848_; 
v_reuseFailAlloc_3848_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_3848_, 0, v_e_x27_3834_);
lean_ctor_set(v_reuseFailAlloc_3848_, 1, v_proof_3835_);
v___x_3847_ = v_reuseFailAlloc_3848_;
goto v_reusejp_3846_;
}
v_reusejp_3846_:
{
lean_ctor_set_uint8(v___x_3847_, sizeof(void*)*2, v_done_3842_);
lean_ctor_set_uint8(v___x_3847_, sizeof(void*)*2 + 1, v___y_3845_);
v_a_3740_ = v___x_3847_;
v_e_x27_3741_ = v_e_x27_3834_;
goto v___jp_3739_;
}
}
}
else
{
lean_object* v_e_x27_3849_; lean_object* v_proof_3850_; uint8_t v_done_3851_; uint8_t v_contextDependent_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3871_; 
lean_del_object(v___x_3838_);
v_e_x27_3849_ = lean_ctor_get(v_a_3841_, 0);
v_proof_3850_ = lean_ctor_get(v_a_3841_, 1);
v_done_3851_ = lean_ctor_get_uint8(v_a_3841_, sizeof(void*)*2);
v_contextDependent_3852_ = lean_ctor_get_uint8(v_a_3841_, sizeof(void*)*2 + 1);
v_isSharedCheck_3871_ = !lean_is_exclusive(v_a_3841_);
if (v_isSharedCheck_3871_ == 0)
{
v___x_3854_ = v_a_3841_;
v_isShared_3855_ = v_isSharedCheck_3871_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_proof_3850_);
lean_inc(v_e_x27_3849_);
lean_dec(v_a_3841_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3871_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3856_; 
lean_inc_ref(v_e_x27_3849_);
lean_inc_ref(v_e_3719_);
v___x_3856_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v_e_3719_, v_e_x27_3834_, v_proof_3835_, v_e_x27_3849_, v_proof_3850_, v_a_3723_, v_a_3724_, v_a_3725_, v_a_3726_, v_a_3727_, v_a_3728_);
if (lean_obj_tag(v___x_3856_) == 0)
{
lean_object* v_a_3857_; uint8_t v___y_3859_; 
v_a_3857_ = lean_ctor_get(v___x_3856_, 0);
lean_inc(v_a_3857_);
lean_dec_ref_known(v___x_3856_, 1);
if (v_contextDependent_3836_ == 0)
{
v___y_3859_ = v_contextDependent_3852_;
goto v___jp_3858_;
}
else
{
v___y_3859_ = v_contextDependent_3836_;
goto v___jp_3858_;
}
v___jp_3858_:
{
lean_object* v___x_3861_; 
lean_inc_ref(v_e_x27_3849_);
if (v_isShared_3855_ == 0)
{
lean_ctor_set(v___x_3854_, 1, v_a_3857_);
v___x_3861_ = v___x_3854_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_e_x27_3849_);
lean_ctor_set(v_reuseFailAlloc_3862_, 1, v_a_3857_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, sizeof(void*)*2, v_done_3851_);
v___x_3861_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
lean_ctor_set_uint8(v___x_3861_, sizeof(void*)*2 + 1, v___y_3859_);
v_a_3740_ = v___x_3861_;
v_e_x27_3741_ = v_e_x27_3849_;
goto v___jp_3739_;
}
}
}
else
{
lean_object* v_a_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3870_; 
lean_del_object(v___x_3854_);
lean_dec_ref(v_e_x27_3849_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_e_3719_);
v_a_3863_ = lean_ctor_get(v___x_3856_, 0);
v_isSharedCheck_3870_ = !lean_is_exclusive(v___x_3856_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3865_ = v___x_3856_;
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_a_3863_);
lean_dec(v___x_3856_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3868_; 
if (v_isShared_3866_ == 0)
{
v___x_3868_ = v___x_3865_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v_a_3863_);
v___x_3868_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
return v___x_3868_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_3838_);
lean_dec_ref(v_proof_3835_);
lean_dec_ref(v_e_x27_3834_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_e_3719_);
return v___x_3840_;
}
}
}
else
{
lean_object* v_e_x27_3873_; 
v_e_x27_3873_ = lean_ctor_get(v_a_3815_, 0);
lean_inc_ref(v_e_x27_3873_);
v_a_3740_ = v_a_3815_;
v_e_x27_3741_ = v_e_x27_3873_;
goto v___jp_3739_;
}
}
}
else
{
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_e_3719_);
return v___x_3814_;
}
}
else
{
lean_object* v___x_3874_; lean_object* v___x_3876_; 
lean_dec(v_a_3804_);
lean_del_object(v___x_3737_);
lean_dec(v_val_3735_);
lean_dec_ref(v_e_3719_);
v___x_3874_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0));
if (v_isShared_3807_ == 0)
{
lean_ctor_set(v___x_3806_, 0, v___x_3874_);
v___x_3876_ = v___x_3806_;
goto v_reusejp_3875_;
}
else
{
lean_object* v_reuseFailAlloc_3877_; 
v_reuseFailAlloc_3877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3877_, 0, v___x_3874_);
v___x_3876_ = v_reuseFailAlloc_3877_;
goto v_reusejp_3875_;
}
v_reusejp_3875_:
{
return v___x_3876_;
}
}
}
}
}
else
{
lean_object* v___x_3880_; lean_object* v___x_3881_; 
lean_dec(v___x_3734_);
lean_dec_ref(v_e_3719_);
v___x_3880_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_rewriteDecidableInstance_spec__2___closed__0));
v___x_3881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3881_, 0, v___x_3880_);
return v___x_3881_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_tryMatcher___boxed(lean_object* v_e_3882_, lean_object* v_a_3883_, lean_object* v_a_3884_, lean_object* v_a_3885_, lean_object* v_a_3886_, lean_object* v_a_3887_, lean_object* v_a_3888_, lean_object* v_a_3889_, lean_object* v_a_3890_, lean_object* v_a_3891_, lean_object* v_a_3892_){
_start:
{
lean_object* v_res_3893_; 
v_res_3893_ = l_Lean_Meta_Tactic_Cbv_tryMatcher(v_e_3882_, v_a_3883_, v_a_3884_, v_a_3885_, v_a_3886_, v_a_3887_, v_a_3888_, v_a_3889_, v_a_3890_, v_a_3891_);
lean_dec(v_a_3891_);
lean_dec_ref(v_a_3890_);
lean_dec(v_a_3889_);
lean_dec_ref(v_a_3888_);
lean_dec(v_a_3887_);
lean_dec_ref(v_a_3886_);
lean_dec(v_a_3885_);
lean_dec_ref(v_a_3884_);
lean_dec(v_a_3883_);
return v_res_3893_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Result(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* runtime_initialize_Init_Sym_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_TheoremsLookup(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cbv_Opaque(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cbv_CbvEvalExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin);
lean_object* runtime_initialize_Init_CbvSimproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cbv_CbvSimproc(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Cbv_ControlFlow(uint8_t builtin) {
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
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
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
res = runtime_initialize_Lean_Meta_Sym_Simp_TheoremsLookup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cbv_Opaque(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cbv_CbvEvalExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_CbvSimproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cbv_CbvSimproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__14_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_1373354618____hygCtx___hyg_19_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__31_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDIteCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2250268465____hygCtx___hyg_19_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__51_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_14_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Sym_Simp_simpDecideCbv_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_4093261972____hygCtx___hyg_16_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__59_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpCbvCond_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_2557497774____hygCtx___hyg_19_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0____regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__67_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_17_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec___regBuiltin___private_Lean_Meta_Tactic_Cbv_ControlFlow_0__Lean_Meta_Tactic_Cbv_simpDecidableRec_declare__1_00___x40_Lean_Meta_Tactic_Cbv_ControlFlow_3437262075____hygCtx___hyg_19_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Cbv_ControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Result(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* initialize_Init_Sym_Lemmas(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_TheoremsLookup(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cbv_Opaque(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cbv_CbvEvalExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin);
lean_object* initialize_Init_CbvSimproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cbv_CbvSimproc(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Cbv_ControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
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
res = initialize_Lean_Meta_Sym_Simp_TheoremsLookup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cbv_Opaque(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cbv_CbvEvalExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_CbvSimproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cbv_CbvSimproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cbv_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Cbv_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Cbv_ControlFlow(builtin);
}
#ifdef __cplusplus
}
#endif
