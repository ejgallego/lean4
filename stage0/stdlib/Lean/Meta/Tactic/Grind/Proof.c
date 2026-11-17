// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Proof
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Decidable import Init.Grind.Lemmas import Init.Grind.Util
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_Grind_Goal_getENode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_congrPlaceholderProof;
uint8_t lean_expr_eqv(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_eqCongrSymmPlaceholderProof;
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_instInhabitedGoalM___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Goal_hasSameRoot(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Meta_Grind_getRootENode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_FunInfo_getArity(lean_object*);
lean_object* l_Lean_Meta_Grind_mkHCongrWithArity___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqNDRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_mkCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_useFunCC___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_hasSameTypeI(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecisionProjectionProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_hasSameType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommonPrefix(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommonPrefix___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_flipProof(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_flipProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkRefl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkRefl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkTrans(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkTrans___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkTrans_x27(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkTrans_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqOfHEqIfNeeded(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqOfHEqIfNeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Meta.Tactic.Grind.Proof"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "_private.Lean.Meta.Tactic.Grind.Proof.0.Lean.Meta.Grind.findCommon"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isCongrDefaultProofTarget_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isCongrDefaultProofTarget_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isCongrDefaultProofTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isCongrDefaultProofTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof_spec__13(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "`grind` currently cannot build congruence proofs for over-applied terms such as"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\nand"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "assertion violation: thm.argKinds.size == numArgs\n    "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "_private.Lean.Meta.Tactic.Grind.Proof.0.Lean.Meta.Grind.mkHCongrProof'"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 52, .m_data = "assertion violation: isSameExpr n₁.root n₂.root\n    "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "_private.Lean.Meta.Tactic.Grind.Proof.0.Lean.Meta.Grind.mkEqProofCore"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__2;
static const lean_string_object l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.Grind.mkEqCongrSymmProof"};
static const lean_object* l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__2;
static const lean_string_object l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 225, .m_capacity = 225, .m_length = 216, .m_data = "assertion violation: ( __do_lift._@.Lean.Meta.Tactic.Grind.Proof.1529172837._hygCtx._hyg.974.0 ).hasSameRoot a₁ b₂ && ( __do_lift._@.Lean.Meta.Tactic.Grind.Proof.1529172837._hygCtx._hyg.974.1 ).hasSameRoot b₁ a₂\n    "};
static const lean_object* l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__4;
static const lean_string_object l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "heq_congr'"};
static const lean_object* l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__5_value),LEAN_SCALAR_PTR_LITERAL(12, 59, 80, 84, 143, 62, 233, 44)}};
static const lean_object* l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eq_congr'"};
static const lean_object* l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__7_value),LEAN_SCALAR_PTR_LITERAL(203, 224, 251, 50, 71, 48, 5, 203)}};
static const lean_object* l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkEqCongrSymmProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "implies_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 71, 54, 187, 9, 73, 178, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "assertion violation: rhs.getAppNumArgs == numArgs\n    "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "_private.Lean.Meta.Tactic.Grind.Proof.0.Lean.Meta.Grind.mkHCongrProof"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_mkEqCongrProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.Grind.mkEqCongrProof"};
static const lean_object* l_Lean_Meta_Grind_mkEqCongrProof___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkEqCongrProof___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_mkEqCongrProof___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkEqCongrProof___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_mkEqCongrProof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkEqCongrProof___closed__2;
static const lean_string_object l_Lean_Meta_Grind_mkEqCongrProof___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 225, .m_capacity = 225, .m_length = 216, .m_data = "assertion violation: ( __do_lift._@.Lean.Meta.Tactic.Grind.Proof.1529172837._hygCtx._hyg.500.0 ).hasSameRoot a₁ a₂ && ( __do_lift._@.Lean.Meta.Tactic.Grind.Proof.1529172837._hygCtx._hyg.500.1 ).hasSameRoot b₁ b₂\n    "};
static const lean_object* l_Lean_Meta_Grind_mkEqCongrProof___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_mkEqCongrProof___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_mkEqCongrProof___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkEqCongrProof___closed__4;
static const lean_string_object l_Lean_Meta_Grind_mkEqCongrProof___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "heq_congr"};
static const lean_object* l_Lean_Meta_Grind_mkEqCongrProof___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_mkEqCongrProof___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkEqCongrProof___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkEqCongrProof___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkEqCongrProof___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkEqCongrProof___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkEqCongrProof___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_mkEqCongrProof___closed__5_value),LEAN_SCALAR_PTR_LITERAL(42, 237, 37, 65, 223, 91, 106, 181)}};
static const lean_object* l_Lean_Meta_Grind_mkEqCongrProof___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_mkEqCongrProof___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_mkEqCongrProof___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "eq_congr"};
static const lean_object* l_Lean_Meta_Grind_mkEqCongrProof___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_mkEqCongrProof___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkEqCongrProof___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkEqCongrProof___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkEqCongrProof___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkEqCongrProof___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkEqCongrProof___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_mkEqCongrProof___closed__7_value),LEAN_SCALAR_PTR_LITERAL(239, 157, 43, 237, 198, 146, 143, 97)}};
static const lean_object* l_Lean_Meta_Grind_mkEqCongrProof___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_mkEqCongrProof___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkEqCongrProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "nestedDecidable"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(65, 76, 105, 85, 179, 183, 200, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "nestedDecidable_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(215, 141, 232, 33, 101, 236, 126, 130)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "_private.Lean.Meta.Tactic.Grind.Proof.0.Lean.Meta.Grind.mkCongrProof"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "assertion violation: rhs.getAppNumArgs == numArgs\n      "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "nestedProof"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__8_value),LEAN_SCALAR_PTR_LITERAL(182, 140, 29, 19, 223, 104, 218, 25)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "nestedProof_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 120, 160, 223, 90, 155, 239, 231)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "decide_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__10_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__11_value),LEAN_SCALAR_PTR_LITERAL(61, 229, 9, 191, 122, 61, 70, 94)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__13;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_realizeEqProof(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "_private.Lean.Meta.Tactic.Grind.Proof.0.Lean.Meta.Grind.mkProofTo"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Meta.Tactic.Grind.Proof.0.Lean.Meta.Grind.mkProofFrom"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProofHelper(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__3_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 76, .m_data = "_private.Lean.Meta.Tactic.Grind.Proof.0.Lean.Meta.Grind.mkCongrProofFunCC.go"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_realizeEqProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProofHelper___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkEqCongrProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkEqCongrSymmProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_mkEqProofImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "internal `grind` error, `mkEqProof` invoked with terms of different types"};
static const lean_object* l_Lean_Meta_Grind_mkEqProofImpl___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkEqProofImpl___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_mkEqProofImpl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkEqProofImpl___closed__1;
static const lean_string_object l_Lean_Meta_Grind_mkEqProofImpl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "\nhas type"};
static const lean_object* l_Lean_Meta_Grind_mkEqProofImpl___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_mkEqProofImpl___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_mkEqProofImpl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkEqProofImpl___closed__3;
static const lean_string_object l_Lean_Meta_Grind_mkEqProofImpl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\nbut"};
static const lean_object* l_Lean_Meta_Grind_mkEqProofImpl___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_mkEqProofImpl___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_mkEqProofImpl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkEqProofImpl___closed__5;
LEAN_EXPORT lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkEqProofImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_grind_mk_heq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkHEqProofImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof(lean_object* v_h_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_){
_start:
{
lean_object* v___x_10_; 
lean_inc(v_a_8_);
lean_inc_ref(v_a_7_);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
v___x_10_ = lean_infer_type(v_h_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_);
if (lean_obj_tag(v___x_10_) == 0)
{
lean_object* v_a_11_; lean_object* v___x_12_; 
v_a_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_a_11_);
lean_dec_ref_known(v___x_10_, 1);
v___x_12_ = l_Lean_Meta_whnfD(v_a_11_, v_a_5_, v_a_6_, v_a_7_, v_a_8_);
if (lean_obj_tag(v___x_12_) == 0)
{
lean_object* v_a_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_23_; 
v_a_13_ = lean_ctor_get(v___x_12_, 0);
v_isSharedCheck_23_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_23_ == 0)
{
v___x_15_ = v___x_12_;
v_isShared_16_ = v_isSharedCheck_23_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_a_13_);
lean_dec(v___x_12_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_23_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v___x_17_; uint8_t v___x_18_; lean_object* v___x_19_; lean_object* v___x_21_; 
v___x_17_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof___closed__1));
v___x_18_ = l_Lean_Expr_isAppOf(v_a_13_, v___x_17_);
lean_dec(v_a_13_);
v___x_19_ = lean_box(v___x_18_);
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 0, v___x_19_);
v___x_21_ = v___x_15_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_22_; 
v_reuseFailAlloc_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_22_, 0, v___x_19_);
v___x_21_ = v_reuseFailAlloc_22_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
return v___x_21_;
}
}
}
else
{
lean_object* v_a_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_31_; 
v_a_24_ = lean_ctor_get(v___x_12_, 0);
v_isSharedCheck_31_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_31_ == 0)
{
v___x_26_ = v___x_12_;
v_isShared_27_ = v_isSharedCheck_31_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_a_24_);
lean_dec(v___x_12_);
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
v_reuseFailAlloc_30_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_39_; 
v_a_32_ = lean_ctor_get(v___x_10_, 0);
v_isSharedCheck_39_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_39_ == 0)
{
v___x_34_ = v___x_10_;
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_10_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof___boxed(lean_object* v_h_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof(v_h_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_);
lean_dec(v_a_44_);
lean_dec_ref(v_a_43_);
lean_dec(v_a_42_);
lean_dec_ref(v_a_41_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommonPrefix(lean_object* v_a_47_, lean_object* v_b_48_){
_start:
{
size_t v___x_49_; size_t v___x_50_; uint8_t v___x_51_; 
v___x_49_ = lean_ptr_addr(v_a_47_);
v___x_50_ = lean_ptr_addr(v_b_48_);
v___x_51_ = lean_usize_dec_eq(v___x_49_, v___x_50_);
if (v___x_51_ == 0)
{
uint8_t v___x_52_; 
v___x_52_ = l_Lean_Expr_isApp(v_a_47_);
if (v___x_52_ == 0)
{
lean_object* v___x_53_; 
lean_dec_ref(v_a_47_);
v___x_53_ = lean_box(0);
return v___x_53_;
}
else
{
uint8_t v___x_54_; 
v___x_54_ = l_Lean_Expr_isApp(v_b_48_);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; 
lean_dec_ref(v_a_47_);
v___x_55_ = lean_box(0);
return v___x_55_;
}
else
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = l_Lean_Expr_appFn_x21(v_a_47_);
lean_dec_ref(v_a_47_);
v___x_57_ = l_Lean_Expr_appFn_x21(v_b_48_);
v___x_58_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommonPrefix(v___x_56_, v___x_57_);
lean_dec_ref(v___x_57_);
if (lean_obj_tag(v___x_58_) == 1)
{
lean_object* v_val_59_; lean_object* v___x_61_; uint8_t v_isShared_62_; uint8_t v_isSharedCheck_77_; 
v_val_59_ = lean_ctor_get(v___x_58_, 0);
v_isSharedCheck_77_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_77_ == 0)
{
v___x_61_ = v___x_58_;
v_isShared_62_ = v_isSharedCheck_77_;
goto v_resetjp_60_;
}
else
{
lean_inc(v_val_59_);
lean_dec(v___x_58_);
v___x_61_ = lean_box(0);
v_isShared_62_ = v_isSharedCheck_77_;
goto v_resetjp_60_;
}
v_resetjp_60_:
{
lean_object* v_fst_63_; lean_object* v_snd_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_76_; 
v_fst_63_ = lean_ctor_get(v_val_59_, 0);
v_snd_64_ = lean_ctor_get(v_val_59_, 1);
v_isSharedCheck_76_ = !lean_is_exclusive(v_val_59_);
if (v_isSharedCheck_76_ == 0)
{
v___x_66_ = v_val_59_;
v_isShared_67_ = v_isSharedCheck_76_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_snd_64_);
lean_inc(v_fst_63_);
lean_dec(v_val_59_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_76_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_71_; 
v___x_68_ = lean_unsigned_to_nat(1u);
v___x_69_ = lean_nat_add(v_snd_64_, v___x_68_);
lean_dec(v_snd_64_);
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 1, v___x_69_);
v___x_71_ = v___x_66_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v_fst_63_);
lean_ctor_set(v_reuseFailAlloc_75_, 1, v___x_69_);
v___x_71_ = v_reuseFailAlloc_75_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
lean_object* v___x_73_; 
if (v_isShared_62_ == 0)
{
lean_ctor_set(v___x_61_, 0, v___x_71_);
v___x_73_ = v___x_61_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_71_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
}
else
{
lean_object* v___x_78_; 
lean_dec(v___x_58_);
v___x_78_ = lean_box(0);
return v___x_78_;
}
}
}
}
else
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_79_ = lean_unsigned_to_nat(0u);
v___x_80_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_80_, 0, v_a_47_);
lean_ctor_set(v___x_80_, 1, v___x_79_);
v___x_81_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommonPrefix___boxed(lean_object* v_a_82_, lean_object* v_b_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommonPrefix(v_a_82_, v_b_83_);
lean_dec_ref(v_b_83_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_flipProof(lean_object* v_h_85_, uint8_t v_flipped_86_, uint8_t v_heq_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
lean_object* v_h_x27_94_; lean_object* v___y_95_; lean_object* v___y_96_; lean_object* v___y_97_; lean_object* v___y_98_; 
if (v_heq_87_ == 0)
{
v_h_x27_94_ = v_h_85_;
v___y_95_ = v_a_88_;
v___y_96_ = v_a_89_;
v___y_97_ = v_a_90_;
v___y_98_ = v_a_91_;
goto v___jp_93_;
}
else
{
lean_object* v___x_102_; 
lean_inc_ref(v_h_85_);
v___x_102_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof(v_h_85_, v_a_88_, v_a_89_, v_a_90_, v_a_91_);
if (lean_obj_tag(v___x_102_) == 0)
{
lean_object* v_a_103_; uint8_t v___x_104_; 
v_a_103_ = lean_ctor_get(v___x_102_, 0);
lean_inc(v_a_103_);
lean_dec_ref_known(v___x_102_, 1);
v___x_104_ = lean_unbox(v_a_103_);
lean_dec(v_a_103_);
if (v___x_104_ == 0)
{
v_h_x27_94_ = v_h_85_;
v___y_95_ = v_a_88_;
v___y_96_ = v_a_89_;
v___y_97_ = v_a_90_;
v___y_98_ = v_a_91_;
goto v___jp_93_;
}
else
{
lean_object* v___x_105_; 
v___x_105_ = l_Lean_Meta_mkHEqOfEq(v_h_85_, v_a_88_, v_a_89_, v_a_90_, v_a_91_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_a_106_);
lean_dec_ref_known(v___x_105_, 1);
v_h_x27_94_ = v_a_106_;
v___y_95_ = v_a_88_;
v___y_96_ = v_a_89_;
v___y_97_ = v_a_90_;
v___y_98_ = v_a_91_;
goto v___jp_93_;
}
else
{
return v___x_105_;
}
}
}
else
{
lean_object* v_a_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_114_; 
lean_dec_ref(v_h_85_);
v_a_107_ = lean_ctor_get(v___x_102_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_102_);
if (v_isSharedCheck_114_ == 0)
{
v___x_109_ = v___x_102_;
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_a_107_);
lean_dec(v___x_102_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_112_; 
if (v_isShared_110_ == 0)
{
v___x_112_ = v___x_109_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_107_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
}
v___jp_93_:
{
if (v_flipped_86_ == 0)
{
lean_object* v___x_99_; 
v___x_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_99_, 0, v_h_x27_94_);
return v___x_99_;
}
else
{
if (v_heq_87_ == 0)
{
lean_object* v___x_100_; 
v___x_100_ = l_Lean_Meta_mkEqSymm(v_h_x27_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
return v___x_100_;
}
else
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_Meta_mkHEqSymm(v_h_x27_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
return v___x_101_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_flipProof___boxed(lean_object* v_h_115_, lean_object* v_flipped_116_, lean_object* v_heq_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_){
_start:
{
uint8_t v_flipped_boxed_123_; uint8_t v_heq_boxed_124_; lean_object* v_res_125_; 
v_flipped_boxed_123_ = lean_unbox(v_flipped_116_);
v_heq_boxed_124_ = lean_unbox(v_heq_117_);
v_res_125_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_flipProof(v_h_115_, v_flipped_boxed_123_, v_heq_boxed_124_, v_a_118_, v_a_119_, v_a_120_, v_a_121_);
lean_dec(v_a_121_);
lean_dec_ref(v_a_120_);
lean_dec(v_a_119_);
lean_dec_ref(v_a_118_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkRefl(lean_object* v_a_126_, uint8_t v_heq_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
if (v_heq_127_ == 0)
{
lean_object* v___x_133_; 
v___x_133_ = l_Lean_Meta_mkEqRefl(v_a_126_, v_a_128_, v_a_129_, v_a_130_, v_a_131_);
return v___x_133_;
}
else
{
lean_object* v___x_134_; 
v___x_134_ = l_Lean_Meta_mkHEqRefl(v_a_126_, v_a_128_, v_a_129_, v_a_130_, v_a_131_);
return v___x_134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkRefl___boxed(lean_object* v_a_135_, lean_object* v_heq_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_){
_start:
{
uint8_t v_heq_boxed_142_; lean_object* v_res_143_; 
v_heq_boxed_142_ = lean_unbox(v_heq_136_);
v_res_143_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkRefl(v_a_135_, v_heq_boxed_142_, v_a_137_, v_a_138_, v_a_139_, v_a_140_);
lean_dec(v_a_140_);
lean_dec_ref(v_a_139_);
lean_dec(v_a_138_);
lean_dec_ref(v_a_137_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkTrans(lean_object* v_h_u2081_144_, lean_object* v_h_u2082_145_, uint8_t v_heq_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_){
_start:
{
if (v_heq_146_ == 0)
{
lean_object* v___x_152_; 
v___x_152_ = l_Lean_Meta_mkEqTrans(v_h_u2081_144_, v_h_u2082_145_, v_a_147_, v_a_148_, v_a_149_, v_a_150_);
return v___x_152_;
}
else
{
lean_object* v___x_153_; 
v___x_153_ = l_Lean_Meta_mkHEqTrans(v_h_u2081_144_, v_h_u2082_145_, v_a_147_, v_a_148_, v_a_149_, v_a_150_);
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkTrans___boxed(lean_object* v_h_u2081_154_, lean_object* v_h_u2082_155_, lean_object* v_heq_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_){
_start:
{
uint8_t v_heq_boxed_162_; lean_object* v_res_163_; 
v_heq_boxed_162_ = lean_unbox(v_heq_156_);
v_res_163_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkTrans(v_h_u2081_154_, v_h_u2082_155_, v_heq_boxed_162_, v_a_157_, v_a_158_, v_a_159_, v_a_160_);
lean_dec(v_a_160_);
lean_dec_ref(v_a_159_);
lean_dec(v_a_158_);
lean_dec_ref(v_a_157_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkTrans_x27(lean_object* v_h_u2081_164_, lean_object* v_h_u2082_165_, uint8_t v_heq_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_){
_start:
{
if (lean_obj_tag(v_h_u2081_164_) == 1)
{
lean_object* v_val_172_; lean_object* v___x_173_; 
v_val_172_ = lean_ctor_get(v_h_u2081_164_, 0);
lean_inc(v_val_172_);
lean_dec_ref_known(v_h_u2081_164_, 1);
v___x_173_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkTrans(v_val_172_, v_h_u2082_165_, v_heq_166_, v_a_167_, v_a_168_, v_a_169_, v_a_170_);
return v___x_173_;
}
else
{
lean_object* v___x_174_; 
lean_dec(v_h_u2081_164_);
v___x_174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_174_, 0, v_h_u2082_165_);
return v___x_174_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkTrans_x27___boxed(lean_object* v_h_u2081_175_, lean_object* v_h_u2082_176_, lean_object* v_heq_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_){
_start:
{
uint8_t v_heq_boxed_183_; lean_object* v_res_184_; 
v_heq_boxed_183_ = lean_unbox(v_heq_177_);
v_res_184_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkTrans_x27(v_h_u2081_175_, v_h_u2082_176_, v_heq_boxed_183_, v_a_178_, v_a_179_, v_a_180_, v_a_181_);
lean_dec(v_a_181_);
lean_dec_ref(v_a_180_);
lean_dec(v_a_179_);
lean_dec_ref(v_a_178_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqOfHEqIfNeeded(lean_object* v_h_185_, uint8_t v_heq_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_){
_start:
{
if (v_heq_186_ == 0)
{
lean_object* v___x_192_; 
v___x_192_ = l_Lean_Meta_mkEqOfHEq(v_h_185_, v_heq_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_);
return v___x_192_;
}
else
{
lean_object* v___x_193_; 
v___x_193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_193_, 0, v_h_185_);
return v___x_193_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqOfHEqIfNeeded___boxed(lean_object* v_h_194_, lean_object* v_heq_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_){
_start:
{
uint8_t v_heq_boxed_201_; lean_object* v_res_202_; 
v_heq_boxed_201_ = lean_unbox(v_heq_195_);
v_res_202_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqOfHEqIfNeeded(v_h_194_, v_heq_boxed_201_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
lean_dec(v_a_199_);
lean_dec_ref(v_a_198_);
lean_dec(v_a_197_);
lean_dec_ref(v_a_196_);
return v_res_202_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3___closed__0(void){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lean_Meta_Grind_instInhabitedGoalM___redArg();
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3(lean_object* v_msg_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_){
_start:
{
lean_object* v___x_216_; lean_object* v___x_12252__overap_217_; lean_object* v___x_218_; 
v___x_216_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3___closed__0, &l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3___closed__0);
v___x_12252__overap_217_ = lean_panic_fn_borrowed(v___x_216_, v_msg_204_);
lean_inc(v___y_214_);
lean_inc_ref(v___y_213_);
lean_inc(v___y_212_);
lean_inc_ref(v___y_211_);
lean_inc(v___y_210_);
lean_inc_ref(v___y_209_);
lean_inc(v___y_208_);
lean_inc_ref(v___y_207_);
lean_inc(v___y_206_);
lean_inc(v___y_205_);
v___x_218_ = lean_apply_11(v___x_12252__overap_217_, v___y_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_, v___y_212_, v___y_213_, v___y_214_, lean_box(0));
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3___boxed(lean_object* v_msg_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3(v_msg_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
lean_dec(v___y_225_);
lean_dec_ref(v___y_224_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec(v___y_221_);
lean_dec(v___y_220_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(lean_object* v_msg_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v___x_244_; lean_object* v___x_13049__overap_245_; lean_object* v___x_246_; 
v___x_244_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3___closed__0, &l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3___closed__0);
v___x_13049__overap_245_ = lean_panic_fn_borrowed(v___x_244_, v_msg_232_);
lean_inc(v___y_242_);
lean_inc_ref(v___y_241_);
lean_inc(v___y_240_);
lean_inc_ref(v___y_239_);
lean_inc(v___y_238_);
lean_inc_ref(v___y_237_);
lean_inc(v___y_236_);
lean_inc_ref(v___y_235_);
lean_inc(v___y_234_);
lean_inc(v___y_233_);
v___x_246_ = lean_apply_11(v___x_13049__overap_245_, v___y_233_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_, lean_box(0));
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5___boxed(lean_object* v_msg_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v_msg_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_, v___y_256_, v___y_257_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
lean_dec(v___y_255_);
lean_dec_ref(v___y_254_);
lean_dec(v___y_253_);
lean_dec_ref(v___y_252_);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
lean_dec(v___y_249_);
lean_dec(v___y_248_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__2___redArg(lean_object* v_t_260_, lean_object* v_k_261_){
_start:
{
if (lean_obj_tag(v_t_260_) == 0)
{
lean_object* v_k_262_; lean_object* v_v_263_; lean_object* v_l_264_; lean_object* v_r_265_; uint8_t v___x_266_; 
v_k_262_ = lean_ctor_get(v_t_260_, 1);
v_v_263_ = lean_ctor_get(v_t_260_, 2);
v_l_264_ = lean_ctor_get(v_t_260_, 3);
v_r_265_ = lean_ctor_get(v_t_260_, 4);
v___x_266_ = lean_nat_dec_lt(v_k_261_, v_k_262_);
if (v___x_266_ == 0)
{
uint8_t v___x_267_; 
v___x_267_ = lean_nat_dec_eq(v_k_261_, v_k_262_);
if (v___x_267_ == 0)
{
v_t_260_ = v_r_265_;
goto _start;
}
else
{
lean_object* v___x_269_; 
lean_inc(v_v_263_);
v___x_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_269_, 0, v_v_263_);
return v___x_269_;
}
}
else
{
v_t_260_ = v_l_264_;
goto _start;
}
}
else
{
lean_object* v___x_271_; 
v___x_271_ = lean_box(0);
return v___x_271_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__2___redArg___boxed(lean_object* v_t_272_, lean_object* v_k_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__2___redArg(v_t_272_, v_k_273_);
lean_dec(v_k_273_);
lean_dec(v_t_272_);
return v_res_274_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_278_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_279_ = lean_unsigned_to_nat(35u);
v___x_280_ = lean_unsigned_to_nat(88u);
v___x_281_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__1));
v___x_282_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_283_ = l_mkPanicMessageWithDecl(v___x_282_, v___x_281_, v___x_280_, v___x_279_, v___x_278_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg(lean_object* v___x_284_, lean_object* v_a_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_){
_start:
{
lean_object* v_snd_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_345_; 
v_snd_297_ = lean_ctor_get(v_a_285_, 1);
v_isSharedCheck_345_ = !lean_is_exclusive(v_a_285_);
if (v_isSharedCheck_345_ == 0)
{
lean_object* v_unused_346_; 
v_unused_346_ = lean_ctor_get(v_a_285_, 0);
lean_dec(v_unused_346_);
v___x_299_ = v_a_285_;
v_isShared_300_ = v_isSharedCheck_345_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_snd_297_);
lean_dec(v_a_285_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_345_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_301_ = lean_box(0);
v___x_302_ = lean_st_ref_get(v___y_286_);
lean_inc(v_snd_297_);
v___x_303_ = l_Lean_Meta_Grind_Goal_getENode(v___x_302_, v_snd_297_, v___y_292_, v___y_293_, v___y_294_, v___y_295_);
lean_dec(v___x_302_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v_a_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_336_; 
v_a_304_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_336_ == 0)
{
v___x_306_ = v___x_303_;
v_isShared_307_ = v_isSharedCheck_336_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_a_304_);
lean_dec(v___x_303_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_336_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v_target_x3f_308_; lean_object* v_idx_309_; lean_object* v___x_310_; 
v_target_x3f_308_ = lean_ctor_get(v_a_304_, 4);
lean_inc(v_target_x3f_308_);
v_idx_309_ = lean_ctor_get(v_a_304_, 7);
lean_inc(v_idx_309_);
lean_dec(v_a_304_);
v___x_310_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__2___redArg(v___x_284_, v_idx_309_);
lean_dec(v_idx_309_);
if (lean_obj_tag(v___x_310_) == 1)
{
lean_object* v___x_312_; 
lean_dec(v_target_x3f_308_);
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 0, v___x_310_);
v___x_312_ = v___x_299_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v___x_310_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v_snd_297_);
v___x_312_ = v_reuseFailAlloc_316_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
lean_object* v___x_314_; 
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 0, v___x_312_);
v___x_314_ = v___x_306_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v___x_312_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
else
{
lean_dec(v___x_310_);
lean_del_object(v___x_306_);
if (lean_obj_tag(v_target_x3f_308_) == 1)
{
lean_object* v_val_317_; lean_object* v___x_319_; 
lean_dec(v_snd_297_);
v_val_317_ = lean_ctor_get(v_target_x3f_308_, 0);
lean_inc(v_val_317_);
lean_dec_ref_known(v_target_x3f_308_, 1);
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 1, v_val_317_);
lean_ctor_set(v___x_299_, 0, v___x_301_);
v___x_319_ = v___x_299_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_301_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v_val_317_);
v___x_319_ = v_reuseFailAlloc_321_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
v_a_285_ = v___x_319_;
goto _start;
}
}
else
{
lean_object* v___x_322_; lean_object* v___x_323_; 
lean_dec(v_target_x3f_308_);
v___x_322_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__3, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__3_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__3);
v___x_323_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3(v___x_322_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v___x_325_; 
lean_dec_ref_known(v___x_323_, 1);
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 0, v___x_301_);
v___x_325_ = v___x_299_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v___x_301_);
lean_ctor_set(v_reuseFailAlloc_327_, 1, v_snd_297_);
v___x_325_ = v_reuseFailAlloc_327_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
v_a_285_ = v___x_325_;
goto _start;
}
}
else
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_335_; 
lean_del_object(v___x_299_);
lean_dec(v_snd_297_);
v_a_328_ = lean_ctor_get(v___x_323_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_335_ == 0)
{
v___x_330_ = v___x_323_;
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_323_);
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
}
}
}
else
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_344_; 
lean_del_object(v___x_299_);
lean_dec(v_snd_297_);
v_a_337_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_344_ == 0)
{
v___x_339_ = v___x_303_;
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___x_303_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_a_337_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___boxed(lean_object* v___x_347_, lean_object* v_a_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg(v___x_347_, v_a_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
lean_dec(v___y_350_);
lean_dec(v___y_349_);
lean_dec(v___x_347_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__0___redArg(lean_object* v_k_361_, lean_object* v_v_362_, lean_object* v_t_363_){
_start:
{
if (lean_obj_tag(v_t_363_) == 0)
{
lean_object* v_size_364_; lean_object* v_k_365_; lean_object* v_v_366_; lean_object* v_l_367_; lean_object* v_r_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_649_; 
v_size_364_ = lean_ctor_get(v_t_363_, 0);
v_k_365_ = lean_ctor_get(v_t_363_, 1);
v_v_366_ = lean_ctor_get(v_t_363_, 2);
v_l_367_ = lean_ctor_get(v_t_363_, 3);
v_r_368_ = lean_ctor_get(v_t_363_, 4);
v_isSharedCheck_649_ = !lean_is_exclusive(v_t_363_);
if (v_isSharedCheck_649_ == 0)
{
v___x_370_ = v_t_363_;
v_isShared_371_ = v_isSharedCheck_649_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_r_368_);
lean_inc(v_l_367_);
lean_inc(v_v_366_);
lean_inc(v_k_365_);
lean_inc(v_size_364_);
lean_dec(v_t_363_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_649_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
uint8_t v___x_372_; 
v___x_372_ = lean_nat_dec_lt(v_k_361_, v_k_365_);
if (v___x_372_ == 0)
{
uint8_t v___x_373_; 
v___x_373_ = lean_nat_dec_eq(v_k_361_, v_k_365_);
if (v___x_373_ == 0)
{
lean_object* v_impl_374_; lean_object* v___x_375_; 
lean_dec(v_size_364_);
v_impl_374_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__0___redArg(v_k_361_, v_v_362_, v_r_368_);
v___x_375_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_367_) == 0)
{
lean_object* v_size_376_; lean_object* v_size_377_; lean_object* v_k_378_; lean_object* v_v_379_; lean_object* v_l_380_; lean_object* v_r_381_; lean_object* v___x_382_; lean_object* v___x_383_; uint8_t v___x_384_; 
v_size_376_ = lean_ctor_get(v_l_367_, 0);
v_size_377_ = lean_ctor_get(v_impl_374_, 0);
v_k_378_ = lean_ctor_get(v_impl_374_, 1);
v_v_379_ = lean_ctor_get(v_impl_374_, 2);
v_l_380_ = lean_ctor_get(v_impl_374_, 3);
lean_inc(v_l_380_);
v_r_381_ = lean_ctor_get(v_impl_374_, 4);
v___x_382_ = lean_unsigned_to_nat(3u);
v___x_383_ = lean_nat_mul(v___x_382_, v_size_376_);
v___x_384_ = lean_nat_dec_lt(v___x_383_, v_size_377_);
lean_dec(v___x_383_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_388_; 
lean_dec(v_l_380_);
v___x_385_ = lean_nat_add(v___x_375_, v_size_376_);
v___x_386_ = lean_nat_add(v___x_385_, v_size_377_);
lean_dec(v___x_385_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 4, v_impl_374_);
lean_ctor_set(v___x_370_, 0, v___x_386_);
v___x_388_ = v___x_370_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_386_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v_k_365_);
lean_ctor_set(v_reuseFailAlloc_389_, 2, v_v_366_);
lean_ctor_set(v_reuseFailAlloc_389_, 3, v_l_367_);
lean_ctor_set(v_reuseFailAlloc_389_, 4, v_impl_374_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
else
{
lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_453_; 
lean_inc(v_r_381_);
lean_inc(v_v_379_);
lean_inc(v_k_378_);
lean_inc(v_size_377_);
v_isSharedCheck_453_ = !lean_is_exclusive(v_impl_374_);
if (v_isSharedCheck_453_ == 0)
{
lean_object* v_unused_454_; lean_object* v_unused_455_; lean_object* v_unused_456_; lean_object* v_unused_457_; lean_object* v_unused_458_; 
v_unused_454_ = lean_ctor_get(v_impl_374_, 4);
lean_dec(v_unused_454_);
v_unused_455_ = lean_ctor_get(v_impl_374_, 3);
lean_dec(v_unused_455_);
v_unused_456_ = lean_ctor_get(v_impl_374_, 2);
lean_dec(v_unused_456_);
v_unused_457_ = lean_ctor_get(v_impl_374_, 1);
lean_dec(v_unused_457_);
v_unused_458_ = lean_ctor_get(v_impl_374_, 0);
lean_dec(v_unused_458_);
v___x_391_ = v_impl_374_;
v_isShared_392_ = v_isSharedCheck_453_;
goto v_resetjp_390_;
}
else
{
lean_dec(v_impl_374_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_453_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v_size_393_; lean_object* v_k_394_; lean_object* v_v_395_; lean_object* v_l_396_; lean_object* v_r_397_; lean_object* v_size_398_; lean_object* v___x_399_; lean_object* v___x_400_; uint8_t v___x_401_; 
v_size_393_ = lean_ctor_get(v_l_380_, 0);
v_k_394_ = lean_ctor_get(v_l_380_, 1);
v_v_395_ = lean_ctor_get(v_l_380_, 2);
v_l_396_ = lean_ctor_get(v_l_380_, 3);
v_r_397_ = lean_ctor_get(v_l_380_, 4);
v_size_398_ = lean_ctor_get(v_r_381_, 0);
v___x_399_ = lean_unsigned_to_nat(2u);
v___x_400_ = lean_nat_mul(v___x_399_, v_size_398_);
v___x_401_ = lean_nat_dec_lt(v_size_393_, v___x_400_);
lean_dec(v___x_400_);
if (v___x_401_ == 0)
{
lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_429_; 
lean_inc(v_r_397_);
lean_inc(v_l_396_);
lean_inc(v_v_395_);
lean_inc(v_k_394_);
v_isSharedCheck_429_ = !lean_is_exclusive(v_l_380_);
if (v_isSharedCheck_429_ == 0)
{
lean_object* v_unused_430_; lean_object* v_unused_431_; lean_object* v_unused_432_; lean_object* v_unused_433_; lean_object* v_unused_434_; 
v_unused_430_ = lean_ctor_get(v_l_380_, 4);
lean_dec(v_unused_430_);
v_unused_431_ = lean_ctor_get(v_l_380_, 3);
lean_dec(v_unused_431_);
v_unused_432_ = lean_ctor_get(v_l_380_, 2);
lean_dec(v_unused_432_);
v_unused_433_ = lean_ctor_get(v_l_380_, 1);
lean_dec(v_unused_433_);
v_unused_434_ = lean_ctor_get(v_l_380_, 0);
lean_dec(v_unused_434_);
v___x_403_ = v_l_380_;
v_isShared_404_ = v_isSharedCheck_429_;
goto v_resetjp_402_;
}
else
{
lean_dec(v_l_380_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_429_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___y_408_; lean_object* v___y_409_; lean_object* v___y_410_; lean_object* v___y_419_; 
v___x_405_ = lean_nat_add(v___x_375_, v_size_376_);
v___x_406_ = lean_nat_add(v___x_405_, v_size_377_);
lean_dec(v_size_377_);
if (lean_obj_tag(v_l_396_) == 0)
{
lean_object* v_size_427_; 
v_size_427_ = lean_ctor_get(v_l_396_, 0);
lean_inc(v_size_427_);
v___y_419_ = v_size_427_;
goto v___jp_418_;
}
else
{
lean_object* v___x_428_; 
v___x_428_ = lean_unsigned_to_nat(0u);
v___y_419_ = v___x_428_;
goto v___jp_418_;
}
v___jp_407_:
{
lean_object* v___x_411_; lean_object* v___x_413_; 
v___x_411_ = lean_nat_add(v___y_409_, v___y_410_);
lean_dec(v___y_410_);
lean_dec(v___y_409_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v_r_381_);
lean_ctor_set(v___x_403_, 3, v_r_397_);
lean_ctor_set(v___x_403_, 2, v_v_379_);
lean_ctor_set(v___x_403_, 1, v_k_378_);
lean_ctor_set(v___x_403_, 0, v___x_411_);
v___x_413_ = v___x_403_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v___x_411_);
lean_ctor_set(v_reuseFailAlloc_417_, 1, v_k_378_);
lean_ctor_set(v_reuseFailAlloc_417_, 2, v_v_379_);
lean_ctor_set(v_reuseFailAlloc_417_, 3, v_r_397_);
lean_ctor_set(v_reuseFailAlloc_417_, 4, v_r_381_);
v___x_413_ = v_reuseFailAlloc_417_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
lean_object* v___x_415_; 
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 4, v___x_413_);
lean_ctor_set(v___x_391_, 3, v___y_408_);
lean_ctor_set(v___x_391_, 2, v_v_395_);
lean_ctor_set(v___x_391_, 1, v_k_394_);
lean_ctor_set(v___x_391_, 0, v___x_406_);
v___x_415_ = v___x_391_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v___x_406_);
lean_ctor_set(v_reuseFailAlloc_416_, 1, v_k_394_);
lean_ctor_set(v_reuseFailAlloc_416_, 2, v_v_395_);
lean_ctor_set(v_reuseFailAlloc_416_, 3, v___y_408_);
lean_ctor_set(v_reuseFailAlloc_416_, 4, v___x_413_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
v___jp_418_:
{
lean_object* v___x_420_; lean_object* v___x_422_; 
v___x_420_ = lean_nat_add(v___x_405_, v___y_419_);
lean_dec(v___y_419_);
lean_dec(v___x_405_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 4, v_l_396_);
lean_ctor_set(v___x_370_, 0, v___x_420_);
v___x_422_ = v___x_370_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_420_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v_k_365_);
lean_ctor_set(v_reuseFailAlloc_426_, 2, v_v_366_);
lean_ctor_set(v_reuseFailAlloc_426_, 3, v_l_367_);
lean_ctor_set(v_reuseFailAlloc_426_, 4, v_l_396_);
v___x_422_ = v_reuseFailAlloc_426_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
lean_object* v___x_423_; 
v___x_423_ = lean_nat_add(v___x_375_, v_size_398_);
if (lean_obj_tag(v_r_397_) == 0)
{
lean_object* v_size_424_; 
v_size_424_ = lean_ctor_get(v_r_397_, 0);
lean_inc(v_size_424_);
v___y_408_ = v___x_422_;
v___y_409_ = v___x_423_;
v___y_410_ = v_size_424_;
goto v___jp_407_;
}
else
{
lean_object* v___x_425_; 
v___x_425_ = lean_unsigned_to_nat(0u);
v___y_408_ = v___x_422_;
v___y_409_ = v___x_423_;
v___y_410_ = v___x_425_;
goto v___jp_407_;
}
}
}
}
}
else
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_439_; 
lean_del_object(v___x_370_);
v___x_435_ = lean_nat_add(v___x_375_, v_size_376_);
v___x_436_ = lean_nat_add(v___x_435_, v_size_377_);
lean_dec(v_size_377_);
v___x_437_ = lean_nat_add(v___x_435_, v_size_393_);
lean_dec(v___x_435_);
lean_inc_ref(v_l_367_);
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 4, v_l_380_);
lean_ctor_set(v___x_391_, 3, v_l_367_);
lean_ctor_set(v___x_391_, 2, v_v_366_);
lean_ctor_set(v___x_391_, 1, v_k_365_);
lean_ctor_set(v___x_391_, 0, v___x_437_);
v___x_439_ = v___x_391_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v___x_437_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v_k_365_);
lean_ctor_set(v_reuseFailAlloc_452_, 2, v_v_366_);
lean_ctor_set(v_reuseFailAlloc_452_, 3, v_l_367_);
lean_ctor_set(v_reuseFailAlloc_452_, 4, v_l_380_);
v___x_439_ = v_reuseFailAlloc_452_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_446_; 
v_isSharedCheck_446_ = !lean_is_exclusive(v_l_367_);
if (v_isSharedCheck_446_ == 0)
{
lean_object* v_unused_447_; lean_object* v_unused_448_; lean_object* v_unused_449_; lean_object* v_unused_450_; lean_object* v_unused_451_; 
v_unused_447_ = lean_ctor_get(v_l_367_, 4);
lean_dec(v_unused_447_);
v_unused_448_ = lean_ctor_get(v_l_367_, 3);
lean_dec(v_unused_448_);
v_unused_449_ = lean_ctor_get(v_l_367_, 2);
lean_dec(v_unused_449_);
v_unused_450_ = lean_ctor_get(v_l_367_, 1);
lean_dec(v_unused_450_);
v_unused_451_ = lean_ctor_get(v_l_367_, 0);
lean_dec(v_unused_451_);
v___x_441_ = v_l_367_;
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
else
{
lean_dec(v_l_367_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_444_; 
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 4, v_r_381_);
lean_ctor_set(v___x_441_, 3, v___x_439_);
lean_ctor_set(v___x_441_, 2, v_v_379_);
lean_ctor_set(v___x_441_, 1, v_k_378_);
lean_ctor_set(v___x_441_, 0, v___x_436_);
v___x_444_ = v___x_441_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_436_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v_k_378_);
lean_ctor_set(v_reuseFailAlloc_445_, 2, v_v_379_);
lean_ctor_set(v_reuseFailAlloc_445_, 3, v___x_439_);
lean_ctor_set(v_reuseFailAlloc_445_, 4, v_r_381_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_459_; 
v_l_459_ = lean_ctor_get(v_impl_374_, 3);
lean_inc(v_l_459_);
if (lean_obj_tag(v_l_459_) == 0)
{
lean_object* v_r_460_; lean_object* v_k_461_; lean_object* v_v_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_485_; 
v_r_460_ = lean_ctor_get(v_impl_374_, 4);
v_k_461_ = lean_ctor_get(v_impl_374_, 1);
v_v_462_ = lean_ctor_get(v_impl_374_, 2);
v_isSharedCheck_485_ = !lean_is_exclusive(v_impl_374_);
if (v_isSharedCheck_485_ == 0)
{
lean_object* v_unused_486_; lean_object* v_unused_487_; 
v_unused_486_ = lean_ctor_get(v_impl_374_, 3);
lean_dec(v_unused_486_);
v_unused_487_ = lean_ctor_get(v_impl_374_, 0);
lean_dec(v_unused_487_);
v___x_464_ = v_impl_374_;
v_isShared_465_ = v_isSharedCheck_485_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_r_460_);
lean_inc(v_v_462_);
lean_inc(v_k_461_);
lean_dec(v_impl_374_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_485_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v_k_466_; lean_object* v_v_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_481_; 
v_k_466_ = lean_ctor_get(v_l_459_, 1);
v_v_467_ = lean_ctor_get(v_l_459_, 2);
v_isSharedCheck_481_ = !lean_is_exclusive(v_l_459_);
if (v_isSharedCheck_481_ == 0)
{
lean_object* v_unused_482_; lean_object* v_unused_483_; lean_object* v_unused_484_; 
v_unused_482_ = lean_ctor_get(v_l_459_, 4);
lean_dec(v_unused_482_);
v_unused_483_ = lean_ctor_get(v_l_459_, 3);
lean_dec(v_unused_483_);
v_unused_484_ = lean_ctor_get(v_l_459_, 0);
lean_dec(v_unused_484_);
v___x_469_ = v_l_459_;
v_isShared_470_ = v_isSharedCheck_481_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_v_467_);
lean_inc(v_k_466_);
lean_dec(v_l_459_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_481_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_471_; lean_object* v___x_473_; 
v___x_471_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_460_, 2);
if (v_isShared_470_ == 0)
{
lean_ctor_set(v___x_469_, 4, v_r_460_);
lean_ctor_set(v___x_469_, 3, v_r_460_);
lean_ctor_set(v___x_469_, 2, v_v_366_);
lean_ctor_set(v___x_469_, 1, v_k_365_);
lean_ctor_set(v___x_469_, 0, v___x_375_);
v___x_473_ = v___x_469_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_375_);
lean_ctor_set(v_reuseFailAlloc_480_, 1, v_k_365_);
lean_ctor_set(v_reuseFailAlloc_480_, 2, v_v_366_);
lean_ctor_set(v_reuseFailAlloc_480_, 3, v_r_460_);
lean_ctor_set(v_reuseFailAlloc_480_, 4, v_r_460_);
v___x_473_ = v_reuseFailAlloc_480_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
lean_object* v___x_475_; 
lean_inc(v_r_460_);
if (v_isShared_465_ == 0)
{
lean_ctor_set(v___x_464_, 3, v_r_460_);
lean_ctor_set(v___x_464_, 0, v___x_375_);
v___x_475_ = v___x_464_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_375_);
lean_ctor_set(v_reuseFailAlloc_479_, 1, v_k_461_);
lean_ctor_set(v_reuseFailAlloc_479_, 2, v_v_462_);
lean_ctor_set(v_reuseFailAlloc_479_, 3, v_r_460_);
lean_ctor_set(v_reuseFailAlloc_479_, 4, v_r_460_);
v___x_475_ = v_reuseFailAlloc_479_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
lean_object* v___x_477_; 
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 4, v___x_475_);
lean_ctor_set(v___x_370_, 3, v___x_473_);
lean_ctor_set(v___x_370_, 2, v_v_467_);
lean_ctor_set(v___x_370_, 1, v_k_466_);
lean_ctor_set(v___x_370_, 0, v___x_471_);
v___x_477_ = v___x_370_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v___x_471_);
lean_ctor_set(v_reuseFailAlloc_478_, 1, v_k_466_);
lean_ctor_set(v_reuseFailAlloc_478_, 2, v_v_467_);
lean_ctor_set(v_reuseFailAlloc_478_, 3, v___x_473_);
lean_ctor_set(v_reuseFailAlloc_478_, 4, v___x_475_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
}
}
else
{
lean_object* v_r_488_; 
v_r_488_ = lean_ctor_get(v_impl_374_, 4);
lean_inc(v_r_488_);
if (lean_obj_tag(v_r_488_) == 0)
{
lean_object* v_k_489_; lean_object* v_v_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_501_; 
v_k_489_ = lean_ctor_get(v_impl_374_, 1);
v_v_490_ = lean_ctor_get(v_impl_374_, 2);
v_isSharedCheck_501_ = !lean_is_exclusive(v_impl_374_);
if (v_isSharedCheck_501_ == 0)
{
lean_object* v_unused_502_; lean_object* v_unused_503_; lean_object* v_unused_504_; 
v_unused_502_ = lean_ctor_get(v_impl_374_, 4);
lean_dec(v_unused_502_);
v_unused_503_ = lean_ctor_get(v_impl_374_, 3);
lean_dec(v_unused_503_);
v_unused_504_ = lean_ctor_get(v_impl_374_, 0);
lean_dec(v_unused_504_);
v___x_492_ = v_impl_374_;
v_isShared_493_ = v_isSharedCheck_501_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_v_490_);
lean_inc(v_k_489_);
lean_dec(v_impl_374_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_501_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_494_; lean_object* v___x_496_; 
v___x_494_ = lean_unsigned_to_nat(3u);
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 4, v_l_459_);
lean_ctor_set(v___x_492_, 2, v_v_366_);
lean_ctor_set(v___x_492_, 1, v_k_365_);
lean_ctor_set(v___x_492_, 0, v___x_375_);
v___x_496_ = v___x_492_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_375_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v_k_365_);
lean_ctor_set(v_reuseFailAlloc_500_, 2, v_v_366_);
lean_ctor_set(v_reuseFailAlloc_500_, 3, v_l_459_);
lean_ctor_set(v_reuseFailAlloc_500_, 4, v_l_459_);
v___x_496_ = v_reuseFailAlloc_500_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
lean_object* v___x_498_; 
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 4, v_r_488_);
lean_ctor_set(v___x_370_, 3, v___x_496_);
lean_ctor_set(v___x_370_, 2, v_v_490_);
lean_ctor_set(v___x_370_, 1, v_k_489_);
lean_ctor_set(v___x_370_, 0, v___x_494_);
v___x_498_ = v___x_370_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_494_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_k_489_);
lean_ctor_set(v_reuseFailAlloc_499_, 2, v_v_490_);
lean_ctor_set(v_reuseFailAlloc_499_, 3, v___x_496_);
lean_ctor_set(v_reuseFailAlloc_499_, 4, v_r_488_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
else
{
lean_object* v___x_505_; lean_object* v___x_507_; 
v___x_505_ = lean_unsigned_to_nat(2u);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 4, v_impl_374_);
lean_ctor_set(v___x_370_, 3, v_r_488_);
lean_ctor_set(v___x_370_, 0, v___x_505_);
v___x_507_ = v___x_370_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v___x_505_);
lean_ctor_set(v_reuseFailAlloc_508_, 1, v_k_365_);
lean_ctor_set(v_reuseFailAlloc_508_, 2, v_v_366_);
lean_ctor_set(v_reuseFailAlloc_508_, 3, v_r_488_);
lean_ctor_set(v_reuseFailAlloc_508_, 4, v_impl_374_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
}
}
}
else
{
lean_object* v___x_510_; 
lean_dec(v_v_366_);
lean_dec(v_k_365_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 2, v_v_362_);
lean_ctor_set(v___x_370_, 1, v_k_361_);
v___x_510_ = v___x_370_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_size_364_);
lean_ctor_set(v_reuseFailAlloc_511_, 1, v_k_361_);
lean_ctor_set(v_reuseFailAlloc_511_, 2, v_v_362_);
lean_ctor_set(v_reuseFailAlloc_511_, 3, v_l_367_);
lean_ctor_set(v_reuseFailAlloc_511_, 4, v_r_368_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
else
{
lean_object* v_impl_512_; lean_object* v___x_513_; 
lean_dec(v_size_364_);
v_impl_512_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__0___redArg(v_k_361_, v_v_362_, v_l_367_);
v___x_513_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_368_) == 0)
{
lean_object* v_size_514_; lean_object* v_size_515_; lean_object* v_k_516_; lean_object* v_v_517_; lean_object* v_l_518_; lean_object* v_r_519_; lean_object* v___x_520_; lean_object* v___x_521_; uint8_t v___x_522_; 
v_size_514_ = lean_ctor_get(v_r_368_, 0);
v_size_515_ = lean_ctor_get(v_impl_512_, 0);
v_k_516_ = lean_ctor_get(v_impl_512_, 1);
v_v_517_ = lean_ctor_get(v_impl_512_, 2);
v_l_518_ = lean_ctor_get(v_impl_512_, 3);
v_r_519_ = lean_ctor_get(v_impl_512_, 4);
lean_inc(v_r_519_);
v___x_520_ = lean_unsigned_to_nat(3u);
v___x_521_ = lean_nat_mul(v___x_520_, v_size_514_);
v___x_522_ = lean_nat_dec_lt(v___x_521_, v_size_515_);
lean_dec(v___x_521_);
if (v___x_522_ == 0)
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_526_; 
lean_dec(v_r_519_);
v___x_523_ = lean_nat_add(v___x_513_, v_size_515_);
v___x_524_ = lean_nat_add(v___x_523_, v_size_514_);
lean_dec(v___x_523_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 3, v_impl_512_);
lean_ctor_set(v___x_370_, 0, v___x_524_);
v___x_526_ = v___x_370_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v___x_524_);
lean_ctor_set(v_reuseFailAlloc_527_, 1, v_k_365_);
lean_ctor_set(v_reuseFailAlloc_527_, 2, v_v_366_);
lean_ctor_set(v_reuseFailAlloc_527_, 3, v_impl_512_);
lean_ctor_set(v_reuseFailAlloc_527_, 4, v_r_368_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
else
{
lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_593_; 
lean_inc(v_l_518_);
lean_inc(v_v_517_);
lean_inc(v_k_516_);
lean_inc(v_size_515_);
v_isSharedCheck_593_ = !lean_is_exclusive(v_impl_512_);
if (v_isSharedCheck_593_ == 0)
{
lean_object* v_unused_594_; lean_object* v_unused_595_; lean_object* v_unused_596_; lean_object* v_unused_597_; lean_object* v_unused_598_; 
v_unused_594_ = lean_ctor_get(v_impl_512_, 4);
lean_dec(v_unused_594_);
v_unused_595_ = lean_ctor_get(v_impl_512_, 3);
lean_dec(v_unused_595_);
v_unused_596_ = lean_ctor_get(v_impl_512_, 2);
lean_dec(v_unused_596_);
v_unused_597_ = lean_ctor_get(v_impl_512_, 1);
lean_dec(v_unused_597_);
v_unused_598_ = lean_ctor_get(v_impl_512_, 0);
lean_dec(v_unused_598_);
v___x_529_ = v_impl_512_;
v_isShared_530_ = v_isSharedCheck_593_;
goto v_resetjp_528_;
}
else
{
lean_dec(v_impl_512_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_593_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v_size_531_; lean_object* v_size_532_; lean_object* v_k_533_; lean_object* v_v_534_; lean_object* v_l_535_; lean_object* v_r_536_; lean_object* v___x_537_; lean_object* v___x_538_; uint8_t v___x_539_; 
v_size_531_ = lean_ctor_get(v_l_518_, 0);
v_size_532_ = lean_ctor_get(v_r_519_, 0);
v_k_533_ = lean_ctor_get(v_r_519_, 1);
v_v_534_ = lean_ctor_get(v_r_519_, 2);
v_l_535_ = lean_ctor_get(v_r_519_, 3);
v_r_536_ = lean_ctor_get(v_r_519_, 4);
v___x_537_ = lean_unsigned_to_nat(2u);
v___x_538_ = lean_nat_mul(v___x_537_, v_size_531_);
v___x_539_ = lean_nat_dec_lt(v_size_532_, v___x_538_);
lean_dec(v___x_538_);
if (v___x_539_ == 0)
{
lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_568_; 
lean_inc(v_r_536_);
lean_inc(v_l_535_);
lean_inc(v_v_534_);
lean_inc(v_k_533_);
v_isSharedCheck_568_ = !lean_is_exclusive(v_r_519_);
if (v_isSharedCheck_568_ == 0)
{
lean_object* v_unused_569_; lean_object* v_unused_570_; lean_object* v_unused_571_; lean_object* v_unused_572_; lean_object* v_unused_573_; 
v_unused_569_ = lean_ctor_get(v_r_519_, 4);
lean_dec(v_unused_569_);
v_unused_570_ = lean_ctor_get(v_r_519_, 3);
lean_dec(v_unused_570_);
v_unused_571_ = lean_ctor_get(v_r_519_, 2);
lean_dec(v_unused_571_);
v_unused_572_ = lean_ctor_get(v_r_519_, 1);
lean_dec(v_unused_572_);
v_unused_573_ = lean_ctor_get(v_r_519_, 0);
lean_dec(v_unused_573_);
v___x_541_ = v_r_519_;
v_isShared_542_ = v_isSharedCheck_568_;
goto v_resetjp_540_;
}
else
{
lean_dec(v_r_519_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_568_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___y_546_; lean_object* v___y_547_; lean_object* v___y_548_; lean_object* v___x_556_; lean_object* v___y_558_; 
v___x_543_ = lean_nat_add(v___x_513_, v_size_515_);
lean_dec(v_size_515_);
v___x_544_ = lean_nat_add(v___x_543_, v_size_514_);
lean_dec(v___x_543_);
v___x_556_ = lean_nat_add(v___x_513_, v_size_531_);
if (lean_obj_tag(v_l_535_) == 0)
{
lean_object* v_size_566_; 
v_size_566_ = lean_ctor_get(v_l_535_, 0);
lean_inc(v_size_566_);
v___y_558_ = v_size_566_;
goto v___jp_557_;
}
else
{
lean_object* v___x_567_; 
v___x_567_ = lean_unsigned_to_nat(0u);
v___y_558_ = v___x_567_;
goto v___jp_557_;
}
v___jp_545_:
{
lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_549_ = lean_nat_add(v___y_546_, v___y_548_);
lean_dec(v___y_548_);
lean_dec(v___y_546_);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 4, v_r_368_);
lean_ctor_set(v___x_541_, 3, v_r_536_);
lean_ctor_set(v___x_541_, 2, v_v_366_);
lean_ctor_set(v___x_541_, 1, v_k_365_);
lean_ctor_set(v___x_541_, 0, v___x_549_);
v___x_551_ = v___x_541_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___x_549_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_k_365_);
lean_ctor_set(v_reuseFailAlloc_555_, 2, v_v_366_);
lean_ctor_set(v_reuseFailAlloc_555_, 3, v_r_536_);
lean_ctor_set(v_reuseFailAlloc_555_, 4, v_r_368_);
v___x_551_ = v_reuseFailAlloc_555_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
lean_object* v___x_553_; 
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 4, v___x_551_);
lean_ctor_set(v___x_529_, 3, v___y_547_);
lean_ctor_set(v___x_529_, 2, v_v_534_);
lean_ctor_set(v___x_529_, 1, v_k_533_);
lean_ctor_set(v___x_529_, 0, v___x_544_);
v___x_553_ = v___x_529_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_544_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v_k_533_);
lean_ctor_set(v_reuseFailAlloc_554_, 2, v_v_534_);
lean_ctor_set(v_reuseFailAlloc_554_, 3, v___y_547_);
lean_ctor_set(v_reuseFailAlloc_554_, 4, v___x_551_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
v___jp_557_:
{
lean_object* v___x_559_; lean_object* v___x_561_; 
v___x_559_ = lean_nat_add(v___x_556_, v___y_558_);
lean_dec(v___y_558_);
lean_dec(v___x_556_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 4, v_l_535_);
lean_ctor_set(v___x_370_, 3, v_l_518_);
lean_ctor_set(v___x_370_, 2, v_v_517_);
lean_ctor_set(v___x_370_, 1, v_k_516_);
lean_ctor_set(v___x_370_, 0, v___x_559_);
v___x_561_ = v___x_370_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_559_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v_k_516_);
lean_ctor_set(v_reuseFailAlloc_565_, 2, v_v_517_);
lean_ctor_set(v_reuseFailAlloc_565_, 3, v_l_518_);
lean_ctor_set(v_reuseFailAlloc_565_, 4, v_l_535_);
v___x_561_ = v_reuseFailAlloc_565_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
lean_object* v___x_562_; 
v___x_562_ = lean_nat_add(v___x_513_, v_size_514_);
if (lean_obj_tag(v_r_536_) == 0)
{
lean_object* v_size_563_; 
v_size_563_ = lean_ctor_get(v_r_536_, 0);
lean_inc(v_size_563_);
v___y_546_ = v___x_562_;
v___y_547_ = v___x_561_;
v___y_548_ = v_size_563_;
goto v___jp_545_;
}
else
{
lean_object* v___x_564_; 
v___x_564_ = lean_unsigned_to_nat(0u);
v___y_546_ = v___x_562_;
v___y_547_ = v___x_561_;
v___y_548_ = v___x_564_;
goto v___jp_545_;
}
}
}
}
}
else
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_579_; 
lean_del_object(v___x_370_);
v___x_574_ = lean_nat_add(v___x_513_, v_size_515_);
lean_dec(v_size_515_);
v___x_575_ = lean_nat_add(v___x_574_, v_size_514_);
lean_dec(v___x_574_);
v___x_576_ = lean_nat_add(v___x_513_, v_size_514_);
v___x_577_ = lean_nat_add(v___x_576_, v_size_532_);
lean_dec(v___x_576_);
lean_inc_ref(v_r_368_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 4, v_r_368_);
lean_ctor_set(v___x_529_, 3, v_r_519_);
lean_ctor_set(v___x_529_, 2, v_v_366_);
lean_ctor_set(v___x_529_, 1, v_k_365_);
lean_ctor_set(v___x_529_, 0, v___x_577_);
v___x_579_ = v___x_529_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_577_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_k_365_);
lean_ctor_set(v_reuseFailAlloc_592_, 2, v_v_366_);
lean_ctor_set(v_reuseFailAlloc_592_, 3, v_r_519_);
lean_ctor_set(v_reuseFailAlloc_592_, 4, v_r_368_);
v___x_579_ = v_reuseFailAlloc_592_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_586_; 
v_isSharedCheck_586_ = !lean_is_exclusive(v_r_368_);
if (v_isSharedCheck_586_ == 0)
{
lean_object* v_unused_587_; lean_object* v_unused_588_; lean_object* v_unused_589_; lean_object* v_unused_590_; lean_object* v_unused_591_; 
v_unused_587_ = lean_ctor_get(v_r_368_, 4);
lean_dec(v_unused_587_);
v_unused_588_ = lean_ctor_get(v_r_368_, 3);
lean_dec(v_unused_588_);
v_unused_589_ = lean_ctor_get(v_r_368_, 2);
lean_dec(v_unused_589_);
v_unused_590_ = lean_ctor_get(v_r_368_, 1);
lean_dec(v_unused_590_);
v_unused_591_ = lean_ctor_get(v_r_368_, 0);
lean_dec(v_unused_591_);
v___x_581_ = v_r_368_;
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
else
{
lean_dec(v_r_368_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_584_; 
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 4, v___x_579_);
lean_ctor_set(v___x_581_, 3, v_l_518_);
lean_ctor_set(v___x_581_, 2, v_v_517_);
lean_ctor_set(v___x_581_, 1, v_k_516_);
lean_ctor_set(v___x_581_, 0, v___x_575_);
v___x_584_ = v___x_581_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___x_575_);
lean_ctor_set(v_reuseFailAlloc_585_, 1, v_k_516_);
lean_ctor_set(v_reuseFailAlloc_585_, 2, v_v_517_);
lean_ctor_set(v_reuseFailAlloc_585_, 3, v_l_518_);
lean_ctor_set(v_reuseFailAlloc_585_, 4, v___x_579_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_599_; 
v_l_599_ = lean_ctor_get(v_impl_512_, 3);
if (lean_obj_tag(v_l_599_) == 0)
{
lean_object* v_r_600_; lean_object* v_k_601_; lean_object* v_v_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_613_; 
lean_inc_ref(v_l_599_);
v_r_600_ = lean_ctor_get(v_impl_512_, 4);
v_k_601_ = lean_ctor_get(v_impl_512_, 1);
v_v_602_ = lean_ctor_get(v_impl_512_, 2);
v_isSharedCheck_613_ = !lean_is_exclusive(v_impl_512_);
if (v_isSharedCheck_613_ == 0)
{
lean_object* v_unused_614_; lean_object* v_unused_615_; 
v_unused_614_ = lean_ctor_get(v_impl_512_, 3);
lean_dec(v_unused_614_);
v_unused_615_ = lean_ctor_get(v_impl_512_, 0);
lean_dec(v_unused_615_);
v___x_604_ = v_impl_512_;
v_isShared_605_ = v_isSharedCheck_613_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_r_600_);
lean_inc(v_v_602_);
lean_inc(v_k_601_);
lean_dec(v_impl_512_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_613_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_606_; lean_object* v___x_608_; 
v___x_606_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_600_);
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 3, v_r_600_);
lean_ctor_set(v___x_604_, 2, v_v_366_);
lean_ctor_set(v___x_604_, 1, v_k_365_);
lean_ctor_set(v___x_604_, 0, v___x_513_);
v___x_608_ = v___x_604_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v___x_513_);
lean_ctor_set(v_reuseFailAlloc_612_, 1, v_k_365_);
lean_ctor_set(v_reuseFailAlloc_612_, 2, v_v_366_);
lean_ctor_set(v_reuseFailAlloc_612_, 3, v_r_600_);
lean_ctor_set(v_reuseFailAlloc_612_, 4, v_r_600_);
v___x_608_ = v_reuseFailAlloc_612_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
lean_object* v___x_610_; 
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 4, v___x_608_);
lean_ctor_set(v___x_370_, 3, v_l_599_);
lean_ctor_set(v___x_370_, 2, v_v_602_);
lean_ctor_set(v___x_370_, 1, v_k_601_);
lean_ctor_set(v___x_370_, 0, v___x_606_);
v___x_610_ = v___x_370_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_606_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v_k_601_);
lean_ctor_set(v_reuseFailAlloc_611_, 2, v_v_602_);
lean_ctor_set(v_reuseFailAlloc_611_, 3, v_l_599_);
lean_ctor_set(v_reuseFailAlloc_611_, 4, v___x_608_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
else
{
lean_object* v_r_616_; 
v_r_616_ = lean_ctor_get(v_impl_512_, 4);
lean_inc(v_r_616_);
if (lean_obj_tag(v_r_616_) == 0)
{
lean_object* v_k_617_; lean_object* v_v_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_641_; 
lean_inc(v_l_599_);
v_k_617_ = lean_ctor_get(v_impl_512_, 1);
v_v_618_ = lean_ctor_get(v_impl_512_, 2);
v_isSharedCheck_641_ = !lean_is_exclusive(v_impl_512_);
if (v_isSharedCheck_641_ == 0)
{
lean_object* v_unused_642_; lean_object* v_unused_643_; lean_object* v_unused_644_; 
v_unused_642_ = lean_ctor_get(v_impl_512_, 4);
lean_dec(v_unused_642_);
v_unused_643_ = lean_ctor_get(v_impl_512_, 3);
lean_dec(v_unused_643_);
v_unused_644_ = lean_ctor_get(v_impl_512_, 0);
lean_dec(v_unused_644_);
v___x_620_ = v_impl_512_;
v_isShared_621_ = v_isSharedCheck_641_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_v_618_);
lean_inc(v_k_617_);
lean_dec(v_impl_512_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_641_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v_k_622_; lean_object* v_v_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_637_; 
v_k_622_ = lean_ctor_get(v_r_616_, 1);
v_v_623_ = lean_ctor_get(v_r_616_, 2);
v_isSharedCheck_637_ = !lean_is_exclusive(v_r_616_);
if (v_isSharedCheck_637_ == 0)
{
lean_object* v_unused_638_; lean_object* v_unused_639_; lean_object* v_unused_640_; 
v_unused_638_ = lean_ctor_get(v_r_616_, 4);
lean_dec(v_unused_638_);
v_unused_639_ = lean_ctor_get(v_r_616_, 3);
lean_dec(v_unused_639_);
v_unused_640_ = lean_ctor_get(v_r_616_, 0);
lean_dec(v_unused_640_);
v___x_625_ = v_r_616_;
v_isShared_626_ = v_isSharedCheck_637_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_v_623_);
lean_inc(v_k_622_);
lean_dec(v_r_616_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_637_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_627_; lean_object* v___x_629_; 
v___x_627_ = lean_unsigned_to_nat(3u);
if (v_isShared_626_ == 0)
{
lean_ctor_set(v___x_625_, 4, v_l_599_);
lean_ctor_set(v___x_625_, 3, v_l_599_);
lean_ctor_set(v___x_625_, 2, v_v_618_);
lean_ctor_set(v___x_625_, 1, v_k_617_);
lean_ctor_set(v___x_625_, 0, v___x_513_);
v___x_629_ = v___x_625_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v___x_513_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v_k_617_);
lean_ctor_set(v_reuseFailAlloc_636_, 2, v_v_618_);
lean_ctor_set(v_reuseFailAlloc_636_, 3, v_l_599_);
lean_ctor_set(v_reuseFailAlloc_636_, 4, v_l_599_);
v___x_629_ = v_reuseFailAlloc_636_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
lean_object* v___x_631_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v_l_599_);
lean_ctor_set(v___x_620_, 2, v_v_366_);
lean_ctor_set(v___x_620_, 1, v_k_365_);
lean_ctor_set(v___x_620_, 0, v___x_513_);
v___x_631_ = v___x_620_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v___x_513_);
lean_ctor_set(v_reuseFailAlloc_635_, 1, v_k_365_);
lean_ctor_set(v_reuseFailAlloc_635_, 2, v_v_366_);
lean_ctor_set(v_reuseFailAlloc_635_, 3, v_l_599_);
lean_ctor_set(v_reuseFailAlloc_635_, 4, v_l_599_);
v___x_631_ = v_reuseFailAlloc_635_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
lean_object* v___x_633_; 
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 4, v___x_631_);
lean_ctor_set(v___x_370_, 3, v___x_629_);
lean_ctor_set(v___x_370_, 2, v_v_623_);
lean_ctor_set(v___x_370_, 1, v_k_622_);
lean_ctor_set(v___x_370_, 0, v___x_627_);
v___x_633_ = v___x_370_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v___x_627_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v_k_622_);
lean_ctor_set(v_reuseFailAlloc_634_, 2, v_v_623_);
lean_ctor_set(v_reuseFailAlloc_634_, 3, v___x_629_);
lean_ctor_set(v_reuseFailAlloc_634_, 4, v___x_631_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
}
}
else
{
lean_object* v___x_645_; lean_object* v___x_647_; 
v___x_645_ = lean_unsigned_to_nat(2u);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 4, v_r_616_);
lean_ctor_set(v___x_370_, 3, v_impl_512_);
lean_ctor_set(v___x_370_, 0, v___x_645_);
v___x_647_ = v___x_370_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v___x_645_);
lean_ctor_set(v_reuseFailAlloc_648_, 1, v_k_365_);
lean_ctor_set(v_reuseFailAlloc_648_, 2, v_v_366_);
lean_ctor_set(v_reuseFailAlloc_648_, 3, v_impl_512_);
lean_ctor_set(v_reuseFailAlloc_648_, 4, v_r_616_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_unsigned_to_nat(1u);
v___x_651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
lean_ctor_set(v___x_651_, 1, v_k_361_);
lean_ctor_set(v___x_651_, 2, v_v_362_);
lean_ctor_set(v___x_651_, 3, v_t_363_);
lean_ctor_set(v___x_651_, 4, v_t_363_);
return v___x_651_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__1___redArg(lean_object* v_a_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
lean_object* v_fst_659_; lean_object* v_snd_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_694_; 
v_fst_659_ = lean_ctor_get(v_a_652_, 0);
v_snd_660_ = lean_ctor_get(v_a_652_, 1);
v_isSharedCheck_694_ = !lean_is_exclusive(v_a_652_);
if (v_isSharedCheck_694_ == 0)
{
v___x_662_ = v_a_652_;
v_isShared_663_ = v_isSharedCheck_694_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_snd_660_);
lean_inc(v_fst_659_);
lean_dec(v_a_652_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_694_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_664_ = lean_st_ref_get(v___y_653_);
lean_inc(v_snd_660_);
v___x_665_ = l_Lean_Meta_Grind_Goal_getENode(v___x_664_, v_snd_660_, v___y_654_, v___y_655_, v___y_656_, v___y_657_);
lean_dec(v___x_664_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_685_; 
v_a_666_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_685_ == 0)
{
v___x_668_ = v___x_665_;
v_isShared_669_ = v_isSharedCheck_685_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_665_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_685_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v_self_670_; lean_object* v_target_x3f_671_; lean_object* v_idx_672_; lean_object* v___x_673_; 
v_self_670_ = lean_ctor_get(v_a_666_, 0);
lean_inc_ref(v_self_670_);
v_target_x3f_671_ = lean_ctor_get(v_a_666_, 4);
lean_inc(v_target_x3f_671_);
v_idx_672_ = lean_ctor_get(v_a_666_, 7);
lean_inc(v_idx_672_);
lean_dec(v_a_666_);
v___x_673_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__0___redArg(v_idx_672_, v_self_670_, v_fst_659_);
if (lean_obj_tag(v_target_x3f_671_) == 1)
{
lean_object* v_val_674_; lean_object* v___x_676_; 
lean_del_object(v___x_668_);
lean_dec(v_snd_660_);
v_val_674_ = lean_ctor_get(v_target_x3f_671_, 0);
lean_inc(v_val_674_);
lean_dec_ref_known(v_target_x3f_671_, 1);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 1, v_val_674_);
lean_ctor_set(v___x_662_, 0, v___x_673_);
v___x_676_ = v___x_662_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_673_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v_val_674_);
v___x_676_ = v_reuseFailAlloc_678_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
v_a_652_ = v___x_676_;
goto _start;
}
}
else
{
lean_object* v___x_680_; 
lean_dec(v_target_x3f_671_);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 0, v___x_673_);
v___x_680_ = v___x_662_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_673_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v_snd_660_);
v___x_680_ = v_reuseFailAlloc_684_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
lean_object* v___x_682_; 
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 0, v___x_680_);
v___x_682_ = v___x_668_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v___x_680_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
}
}
else
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_693_; 
lean_del_object(v___x_662_);
lean_dec(v_snd_660_);
lean_dec(v_fst_659_);
v_a_686_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_693_ == 0)
{
v___x_688_ = v___x_665_;
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_665_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_691_; 
if (v_isShared_689_ == 0)
{
v___x_691_ = v___x_688_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_686_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__1___redArg___boxed(lean_object* v_a_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__1___redArg(v_a_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_);
lean_dec(v___y_700_);
lean_dec_ref(v___y_699_);
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
lean_dec(v___y_696_);
return v_res_702_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon___closed__0(void){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_703_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_704_ = lean_unsigned_to_nat(2u);
v___x_705_ = lean_unsigned_to_nat(90u);
v___x_706_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__1));
v___x_707_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_708_ = l_mkPanicMessageWithDecl(v___x_707_, v___x_706_, v___x_705_, v___x_704_, v___x_703_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon(lean_object* v_lhs_709_, lean_object* v_rhs_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_){
_start:
{
lean_object* v_visited_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v_visited_722_ = lean_box(1);
v___x_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_723_, 0, v_visited_722_);
lean_ctor_set(v___x_723_, 1, v_lhs_709_);
v___x_724_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__1___redArg(v___x_723_, v_a_711_, v_a_717_, v_a_718_, v_a_719_, v_a_720_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v_fst_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_755_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_725_);
lean_dec_ref_known(v___x_724_, 1);
v_fst_726_ = lean_ctor_get(v_a_725_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v_a_725_);
if (v_isSharedCheck_755_ == 0)
{
lean_object* v_unused_756_; 
v_unused_756_ = lean_ctor_get(v_a_725_, 1);
lean_dec(v_unused_756_);
v___x_728_ = v_a_725_;
v_isShared_729_ = v_isSharedCheck_755_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_fst_726_);
lean_dec(v_a_725_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_755_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_730_; lean_object* v___x_732_; 
v___x_730_ = lean_box(0);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 1, v_rhs_710_);
lean_ctor_set(v___x_728_, 0, v___x_730_);
v___x_732_ = v___x_728_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_730_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v_rhs_710_);
v___x_732_ = v_reuseFailAlloc_754_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
lean_object* v___x_733_; 
v___x_733_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg(v_fst_726_, v___x_732_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_);
lean_dec(v_fst_726_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_745_; 
v_a_734_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_745_ == 0)
{
v___x_736_ = v___x_733_;
v_isShared_737_ = v_isSharedCheck_745_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v___x_733_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_745_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v_fst_738_; 
v_fst_738_ = lean_ctor_get(v_a_734_, 0);
lean_inc(v_fst_738_);
lean_dec(v_a_734_);
if (lean_obj_tag(v_fst_738_) == 0)
{
lean_object* v___x_739_; lean_object* v___x_740_; 
lean_del_object(v___x_736_);
v___x_739_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon___closed__0, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon___closed__0);
v___x_740_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_739_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_);
return v___x_740_;
}
else
{
lean_object* v_val_741_; lean_object* v___x_743_; 
v_val_741_ = lean_ctor_get(v_fst_738_, 0);
lean_inc(v_val_741_);
lean_dec_ref_known(v_fst_738_, 1);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v_val_741_);
v___x_743_ = v___x_736_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_val_741_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
else
{
lean_object* v_a_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_753_; 
v_a_746_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_753_ == 0)
{
v___x_748_ = v___x_733_;
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_a_746_);
lean_dec(v___x_733_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_751_; 
if (v_isShared_749_ == 0)
{
v___x_751_ = v___x_748_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_a_746_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
}
}
else
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_764_; 
lean_dec_ref(v_rhs_710_);
v_a_757_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_764_ == 0)
{
v___x_759_ = v___x_724_;
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_724_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_757_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon___boxed(lean_object* v_lhs_765_, lean_object* v_rhs_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon(v_lhs_765_, v_rhs_766_, v_a_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_, v_a_775_, v_a_776_);
lean_dec(v_a_776_);
lean_dec_ref(v_a_775_);
lean_dec(v_a_774_);
lean_dec_ref(v_a_773_);
lean_dec(v_a_772_);
lean_dec_ref(v_a_771_);
lean_dec(v_a_770_);
lean_dec_ref(v_a_769_);
lean_dec(v_a_768_);
lean_dec(v_a_767_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__0(lean_object* v_00_u03b2_779_, lean_object* v_k_780_, lean_object* v_v_781_, lean_object* v_t_782_, lean_object* v_hl_783_){
_start:
{
lean_object* v___x_784_; 
v___x_784_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__0___redArg(v_k_780_, v_v_781_, v_t_782_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__1(lean_object* v_inst_785_, lean_object* v_a_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_){
_start:
{
lean_object* v___x_798_; 
v___x_798_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__1___redArg(v_a_786_, v___y_787_, v___y_793_, v___y_794_, v___y_795_, v___y_796_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__1___boxed(lean_object* v_inst_799_, lean_object* v_a_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__1(v_inst_799_, v_a_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec(v___y_801_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__2(lean_object* v_00_u03b4_813_, lean_object* v_t_814_, lean_object* v_k_815_){
_start:
{
lean_object* v___x_816_; 
v___x_816_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__2___redArg(v_t_814_, v_k_815_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__2___boxed(lean_object* v_00_u03b4_817_, lean_object* v_t_818_, lean_object* v_k_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__2(v_00_u03b4_817_, v_t_818_, v_k_819_);
lean_dec(v_k_819_);
lean_dec(v_t_818_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4(lean_object* v___x_821_, lean_object* v_inst_822_, lean_object* v_a_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg(v___x_821_, v_a_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___boxed(lean_object* v___x_836_, lean_object* v_inst_837_, lean_object* v_a_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4(v___x_836_, v_inst_837_, v_a_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
lean_dec(v___y_844_);
lean_dec_ref(v___y_843_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec(v___y_840_);
lean_dec(v___y_839_);
lean_dec(v___x_836_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isCongrDefaultProofTarget_loop(lean_object* v_info_851_, lean_object* v_lhs_852_, lean_object* v_rhs_853_, lean_object* v_i_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_){
_start:
{
uint8_t v___x_866_; 
v___x_866_ = l_Lean_Expr_isApp(v_lhs_852_);
if (v___x_866_ == 0)
{
uint8_t v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
lean_dec(v_i_854_);
lean_dec_ref(v_rhs_853_);
lean_dec_ref(v_lhs_852_);
v___x_867_ = 1;
v___x_868_ = lean_box(v___x_867_);
v___x_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
return v___x_869_;
}
else
{
lean_object* v_a_u2081_870_; lean_object* v_a_u2082_871_; lean_object* v___x_872_; lean_object* v_i_873_; lean_object* v___y_875_; lean_object* v___y_876_; lean_object* v___y_877_; lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_882_; lean_object* v___y_883_; lean_object* v___y_884_; size_t v___x_888_; size_t v___x_889_; uint8_t v___x_890_; 
v_a_u2081_870_ = l_Lean_Expr_appArg_x21(v_lhs_852_);
v_a_u2082_871_ = l_Lean_Expr_appArg_x21(v_rhs_853_);
v___x_872_ = lean_unsigned_to_nat(1u);
v_i_873_ = lean_nat_sub(v_i_854_, v___x_872_);
lean_dec(v_i_854_);
v___x_888_ = lean_ptr_addr(v_a_u2081_870_);
lean_dec_ref(v_a_u2081_870_);
v___x_889_ = lean_ptr_addr(v_a_u2082_871_);
lean_dec_ref(v_a_u2082_871_);
v___x_890_ = lean_usize_dec_eq(v___x_888_, v___x_889_);
if (v___x_890_ == 0)
{
lean_object* v___x_891_; uint8_t v___x_892_; 
v___x_891_ = lean_array_get_size(v_info_851_);
v___x_892_ = lean_nat_dec_lt(v_i_873_, v___x_891_);
if (v___x_892_ == 0)
{
lean_object* v___x_893_; lean_object* v___x_894_; 
lean_dec(v_i_873_);
lean_dec_ref(v_rhs_853_);
lean_dec_ref(v_lhs_852_);
v___x_893_ = lean_box(v___x_892_);
v___x_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_894_, 0, v___x_893_);
return v___x_894_;
}
else
{
lean_object* v___x_895_; uint8_t v_hasFwdDeps_896_; 
v___x_895_ = lean_array_fget_borrowed(v_info_851_, v_i_873_);
v_hasFwdDeps_896_ = lean_ctor_get_uint8(v___x_895_, sizeof(void*)*1 + 1);
if (v_hasFwdDeps_896_ == 0)
{
v___y_875_ = v_a_855_;
v___y_876_ = v_a_856_;
v___y_877_ = v_a_857_;
v___y_878_ = v_a_858_;
v___y_879_ = v_a_859_;
v___y_880_ = v_a_860_;
v___y_881_ = v_a_861_;
v___y_882_ = v_a_862_;
v___y_883_ = v_a_863_;
v___y_884_ = v_a_864_;
goto v___jp_874_;
}
else
{
lean_object* v___x_897_; lean_object* v___x_898_; 
lean_dec(v_i_873_);
lean_dec_ref(v_rhs_853_);
lean_dec_ref(v_lhs_852_);
v___x_897_ = lean_box(v___x_890_);
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
return v___x_898_;
}
}
}
else
{
v___y_875_ = v_a_855_;
v___y_876_ = v_a_856_;
v___y_877_ = v_a_857_;
v___y_878_ = v_a_858_;
v___y_879_ = v_a_859_;
v___y_880_ = v_a_860_;
v___y_881_ = v_a_861_;
v___y_882_ = v_a_862_;
v___y_883_ = v_a_863_;
v___y_884_ = v_a_864_;
goto v___jp_874_;
}
v___jp_874_:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = l_Lean_Expr_appFn_x21(v_lhs_852_);
lean_dec_ref(v_lhs_852_);
v___x_886_ = l_Lean_Expr_appFn_x21(v_rhs_853_);
lean_dec_ref(v_rhs_853_);
v_lhs_852_ = v___x_885_;
v_rhs_853_ = v___x_886_;
v_i_854_ = v_i_873_;
v_a_855_ = v___y_875_;
v_a_856_ = v___y_876_;
v_a_857_ = v___y_877_;
v_a_858_ = v___y_878_;
v_a_859_ = v___y_879_;
v_a_860_ = v___y_880_;
v_a_861_ = v___y_881_;
v_a_862_ = v___y_882_;
v_a_863_ = v___y_883_;
v_a_864_ = v___y_884_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isCongrDefaultProofTarget_loop___boxed(lean_object* v_info_899_, lean_object* v_lhs_900_, lean_object* v_rhs_901_, lean_object* v_i_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isCongrDefaultProofTarget_loop(v_info_899_, v_lhs_900_, v_rhs_901_, v_i_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_, v_a_911_, v_a_912_);
lean_dec(v_a_912_);
lean_dec_ref(v_a_911_);
lean_dec(v_a_910_);
lean_dec_ref(v_a_909_);
lean_dec(v_a_908_);
lean_dec_ref(v_a_907_);
lean_dec(v_a_906_);
lean_dec_ref(v_a_905_);
lean_dec(v_a_904_);
lean_dec(v_a_903_);
lean_dec_ref(v_info_899_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isCongrDefaultProofTarget(lean_object* v_lhs_915_, lean_object* v_rhs_916_, lean_object* v_f_917_, lean_object* v_g_918_, lean_object* v_numArgs_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_){
_start:
{
size_t v___x_931_; size_t v___x_932_; uint8_t v___x_933_; 
v___x_931_ = lean_ptr_addr(v_f_917_);
v___x_932_ = lean_ptr_addr(v_g_918_);
v___x_933_ = lean_usize_dec_eq(v___x_931_, v___x_932_);
if (v___x_933_ == 0)
{
lean_object* v___x_934_; lean_object* v___x_935_; 
lean_dec(v_numArgs_919_);
lean_dec_ref(v_f_917_);
lean_dec_ref(v_rhs_916_);
lean_dec_ref(v_lhs_915_);
v___x_934_ = lean_box(v___x_933_);
v___x_935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_935_, 0, v___x_934_);
return v___x_935_;
}
else
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = lean_box(0);
v___x_937_ = l_Lean_Meta_getFunInfo(v_f_917_, v___x_936_, v_a_926_, v_a_927_, v_a_928_, v_a_929_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; lean_object* v_paramInfo_939_; lean_object* v___x_940_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
lean_inc(v_a_938_);
lean_dec_ref_known(v___x_937_, 1);
v_paramInfo_939_ = lean_ctor_get(v_a_938_, 0);
lean_inc_ref(v_paramInfo_939_);
lean_dec(v_a_938_);
v___x_940_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isCongrDefaultProofTarget_loop(v_paramInfo_939_, v_lhs_915_, v_rhs_916_, v_numArgs_919_, v_a_920_, v_a_921_, v_a_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_);
lean_dec_ref(v_paramInfo_939_);
return v___x_940_;
}
else
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
lean_dec(v_numArgs_919_);
lean_dec_ref(v_rhs_916_);
lean_dec_ref(v_lhs_915_);
v_a_941_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_948_ == 0)
{
v___x_943_ = v___x_937_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_937_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_941_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isCongrDefaultProofTarget___boxed(lean_object* v_lhs_949_, lean_object* v_rhs_950_, lean_object* v_f_951_, lean_object* v_g_952_, lean_object* v_numArgs_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isCongrDefaultProofTarget(v_lhs_949_, v_rhs_950_, v_f_951_, v_g_952_, v_numArgs_953_, v_a_954_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec_ref(v_a_956_);
lean_dec(v_a_955_);
lean_dec(v_a_954_);
lean_dec_ref(v_g_952_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom_spec__4(lean_object* v_msg_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___x_978_; lean_object* v___x_118033__overap_979_; lean_object* v___x_980_; 
v___x_978_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3___closed__0, &l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__3___closed__0);
v___x_118033__overap_979_ = lean_panic_fn_borrowed(v___x_978_, v_msg_966_);
lean_inc(v___y_976_);
lean_inc_ref(v___y_975_);
lean_inc(v___y_974_);
lean_inc_ref(v___y_973_);
lean_inc(v___y_972_);
lean_inc_ref(v___y_971_);
lean_inc(v___y_970_);
lean_inc_ref(v___y_969_);
lean_inc(v___y_968_);
lean_inc(v___y_967_);
v___x_980_ = lean_apply_11(v___x_118033__overap_979_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_, lean_box(0));
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom_spec__4___boxed(lean_object* v_msg_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom_spec__4(v_msg_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec(v___y_983_);
lean_dec(v___y_982_);
return v_res_993_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = l_Lean_maxRecDepthErrorMessage;
v___x_1000_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
return v___x_1000_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1001_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__3);
v___x_1002_ = l_Lean_MessageData_ofFormat(v___x_1001_);
return v___x_1002_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1003_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__4);
v___x_1004_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__2));
v___x_1005_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
lean_ctor_set(v___x_1005_, 1, v___x_1003_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg(lean_object* v_ref_1006_){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1008_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___closed__5);
v___x_1009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1009_, 0, v_ref_1006_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
v___x_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg___boxed(lean_object* v_ref_1011_, lean_object* v___y_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg(v_ref_1011_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___redArg___lam__0(lean_object* v_k_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v_b_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v___x_1027_; 
lean_inc(v___y_1025_);
lean_inc_ref(v___y_1024_);
lean_inc(v___y_1023_);
lean_inc_ref(v___y_1022_);
lean_inc(v___y_1020_);
lean_inc_ref(v___y_1019_);
lean_inc(v___y_1018_);
lean_inc_ref(v___y_1017_);
lean_inc(v___y_1016_);
lean_inc(v___y_1015_);
v___x_1027_ = lean_apply_12(v_k_1014_, v_b_1021_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, lean_box(0));
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___redArg___lam__0___boxed(lean_object* v_k_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v_b_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___redArg___lam__0(v_k_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v_b_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v___y_1034_);
lean_dec_ref(v___y_1033_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec(v___y_1029_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___redArg(lean_object* v_name_1042_, uint8_t v_bi_1043_, lean_object* v_type_1044_, lean_object* v_k_1045_, uint8_t v_kind_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
lean_object* v___f_1058_; lean_object* v___x_1059_; 
lean_inc(v___y_1052_);
lean_inc_ref(v___y_1051_);
lean_inc(v___y_1050_);
lean_inc_ref(v___y_1049_);
lean_inc(v___y_1048_);
lean_inc(v___y_1047_);
v___f_1058_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___redArg___lam__0___boxed), 13, 7);
lean_closure_set(v___f_1058_, 0, v_k_1045_);
lean_closure_set(v___f_1058_, 1, v___y_1047_);
lean_closure_set(v___f_1058_, 2, v___y_1048_);
lean_closure_set(v___f_1058_, 3, v___y_1049_);
lean_closure_set(v___f_1058_, 4, v___y_1050_);
lean_closure_set(v___f_1058_, 5, v___y_1051_);
lean_closure_set(v___f_1058_, 6, v___y_1052_);
v___x_1059_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1042_, v_bi_1043_, v_type_1044_, v___f_1058_, v_kind_1046_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_);
if (lean_obj_tag(v___x_1059_) == 0)
{
return v___x_1059_;
}
else
{
lean_object* v_a_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
v_a_1060_ = lean_ctor_get(v___x_1059_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1059_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1062_ = v___x_1059_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_a_1060_);
lean_dec(v___x_1059_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1060_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___redArg___boxed(lean_object* v_name_1068_, lean_object* v_bi_1069_, lean_object* v_type_1070_, lean_object* v_k_1071_, lean_object* v_kind_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_){
_start:
{
uint8_t v_bi_boxed_1084_; uint8_t v_kind_boxed_1085_; lean_object* v_res_1086_; 
v_bi_boxed_1084_ = lean_unbox(v_bi_1069_);
v_kind_boxed_1085_ = lean_unbox(v_kind_1072_);
v_res_1086_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___redArg(v_name_1068_, v_bi_boxed_1084_, v_type_1070_, v_k_1071_, v_kind_boxed_1085_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec(v___y_1073_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1___redArg(lean_object* v_name_1087_, lean_object* v_type_1088_, lean_object* v_k_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
uint8_t v___x_1101_; uint8_t v___x_1102_; lean_object* v___x_1103_; 
v___x_1101_ = 0;
v___x_1102_ = 0;
v___x_1103_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___redArg(v_name_1087_, v___x_1101_, v_type_1088_, v_k_1089_, v___x_1102_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1___redArg___boxed(lean_object* v_name_1104_, lean_object* v_type_1105_, lean_object* v_k_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1___redArg(v_name_1104_, v_type_1105_, v_k_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
lean_dec(v___y_1114_);
lean_dec_ref(v___y_1113_);
lean_dec(v___y_1112_);
lean_dec_ref(v___y_1111_);
lean_dec(v___y_1110_);
lean_dec_ref(v___y_1109_);
lean_dec(v___y_1108_);
lean_dec(v___y_1107_);
return v_res_1118_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1119_; lean_object* v_dummy_1120_; 
v___x_1119_ = lean_box(0);
v_dummy_1120_ = l_Lean_Expr_sort___override(v___x_1119_);
return v_dummy_1120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___lam__0(lean_object* v_numArgs_1121_, lean_object* v_rhs_1122_, lean_object* v_lhs_1123_, uint8_t v___x_1124_, uint8_t v___x_1125_, lean_object* v_x_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
lean_object* v_dummy_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v_dummy_1138_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___lam__0___closed__0);
lean_inc(v_numArgs_1121_);
v___x_1139_ = lean_mk_array(v_numArgs_1121_, v_dummy_1138_);
v___x_1140_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsN_loop(v_numArgs_1121_, v_rhs_1122_, v___x_1139_);
lean_inc_ref(v_x_1126_);
v___x_1141_ = l_Lean_mkAppN(v_x_1126_, v___x_1140_);
lean_dec_ref(v___x_1140_);
v___x_1142_ = l_Lean_Meta_mkHEq(v_lhs_1123_, v___x_1141_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; lean_object* v___x_1148_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
lean_inc(v_a_1143_);
lean_dec_ref_known(v___x_1142_, 1);
v___x_1144_ = lean_unsigned_to_nat(1u);
v___x_1145_ = lean_mk_empty_array_with_capacity(v___x_1144_);
v___x_1146_ = lean_array_push(v___x_1145_, v_x_1126_);
v___x_1147_ = 1;
v___x_1148_ = l_Lean_Meta_mkLambdaFVars(v___x_1146_, v_a_1143_, v___x_1124_, v___x_1125_, v___x_1124_, v___x_1125_, v___x_1147_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_);
lean_dec_ref(v___x_1146_);
return v___x_1148_;
}
else
{
lean_dec_ref(v_x_1126_);
return v___x_1142_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___lam__0___boxed(lean_object** _args){
lean_object* v_numArgs_1149_ = _args[0];
lean_object* v_rhs_1150_ = _args[1];
lean_object* v_lhs_1151_ = _args[2];
lean_object* v___x_1152_ = _args[3];
lean_object* v___x_1153_ = _args[4];
lean_object* v_x_1154_ = _args[5];
lean_object* v___y_1155_ = _args[6];
lean_object* v___y_1156_ = _args[7];
lean_object* v___y_1157_ = _args[8];
lean_object* v___y_1158_ = _args[9];
lean_object* v___y_1159_ = _args[10];
lean_object* v___y_1160_ = _args[11];
lean_object* v___y_1161_ = _args[12];
lean_object* v___y_1162_ = _args[13];
lean_object* v___y_1163_ = _args[14];
lean_object* v___y_1164_ = _args[15];
lean_object* v___y_1165_ = _args[16];
_start:
{
uint8_t v___x_125707__boxed_1166_; uint8_t v___x_125708__boxed_1167_; lean_object* v_res_1168_; 
v___x_125707__boxed_1166_ = lean_unbox(v___x_1152_);
v___x_125708__boxed_1167_ = lean_unbox(v___x_1153_);
v_res_1168_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___lam__0(v_numArgs_1149_, v_rhs_1150_, v_lhs_1151_, v___x_125707__boxed_1166_, v___x_125708__boxed_1167_, v_x_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_);
lean_dec(v___y_1164_);
lean_dec_ref(v___y_1163_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1157_);
lean_dec(v___y_1156_);
lean_dec(v___y_1155_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof_spec__13(lean_object* v_msg_1169_){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = l_Lean_instInhabitedExpr;
v___x_1171_ = lean_panic_fn_borrowed(v___x_1170_, v_msg_1169_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10_spec__16(lean_object* v_msgData_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_){
_start:
{
lean_object* v___x_1178_; lean_object* v_env_1179_; uint8_t v___x_1180_; lean_object* v_env_1181_; lean_object* v___x_1182_; lean_object* v_toCold_1183_; lean_object* v_mctx_1184_; lean_object* v_lctx_1185_; lean_object* v_options_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1178_ = lean_st_ref_get(v___y_1176_);
v_env_1179_ = lean_ctor_get(v___x_1178_, 0);
lean_inc_ref(v_env_1179_);
lean_dec(v___x_1178_);
v___x_1180_ = 0;
v_env_1181_ = l_Lean_Environment_setRecordingDeps(v_env_1179_, v___x_1180_);
v___x_1182_ = lean_st_ref_get(v___y_1174_);
v_toCold_1183_ = lean_ctor_get(v___y_1175_, 0);
v_mctx_1184_ = lean_ctor_get(v___x_1182_, 0);
lean_inc_ref(v_mctx_1184_);
lean_dec(v___x_1182_);
v_lctx_1185_ = lean_ctor_get(v___y_1173_, 2);
v_options_1186_ = lean_ctor_get(v_toCold_1183_, 2);
lean_inc_ref(v_options_1186_);
lean_inc_ref(v_lctx_1185_);
v___x_1187_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1187_, 0, v_env_1181_);
lean_ctor_set(v___x_1187_, 1, v_mctx_1184_);
lean_ctor_set(v___x_1187_, 2, v_lctx_1185_);
lean_ctor_set(v___x_1187_, 3, v_options_1186_);
v___x_1188_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1187_);
lean_ctor_set(v___x_1188_, 1, v_msgData_1172_);
v___x_1189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1188_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10_spec__16___boxed(lean_object* v_msgData_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10_spec__16(v_msgData_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10___redArg(lean_object* v_msg_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_){
_start:
{
lean_object* v_ref_1203_; lean_object* v___x_1204_; lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1213_; 
v_ref_1203_ = lean_ctor_get(v___y_1200_, 2);
v___x_1204_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10_spec__16(v_msg_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_);
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1207_ = v___x_1204_;
v_isShared_1208_ = v_isSharedCheck_1213_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1213_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1209_; lean_object* v___x_1211_; 
lean_inc(v_ref_1203_);
v___x_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1209_, 0, v_ref_1203_);
lean_ctor_set(v___x_1209_, 1, v_a_1205_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set_tag(v___x_1207_, 1);
lean_ctor_set(v___x_1207_, 0, v___x_1209_);
v___x_1211_ = v___x_1207_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1209_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10___redArg___boxed(lean_object* v_msg_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v_res_1220_; 
v_res_1220_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10___redArg(v_msg_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
return v_res_1220_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1222_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__0));
v___x_1223_ = l_Lean_stringToMessageData(v___x_1222_);
return v___x_1223_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__2));
v___x_1226_ = l_Lean_stringToMessageData(v___x_1225_);
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0(lean_object* v_lhs_1227_, lean_object* v_rhs_1228_, lean_object* v_00_u03b1_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_){
_start:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
v___x_1241_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__1);
v___x_1242_ = l_Lean_indentExpr(v_lhs_1227_);
v___x_1243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1241_);
lean_ctor_set(v___x_1243_, 1, v___x_1242_);
v___x_1244_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___closed__3);
v___x_1245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1243_);
lean_ctor_set(v___x_1245_, 1, v___x_1244_);
v___x_1246_ = l_Lean_indentExpr(v_rhs_1228_);
v___x_1247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1245_);
lean_ctor_set(v___x_1247_, 1, v___x_1246_);
v___x_1248_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10___redArg(v___x_1247_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_);
return v___x_1248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0___boxed(lean_object* v_lhs_1249_, lean_object* v_rhs_1250_, lean_object* v_00_u03b1_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_){
_start:
{
lean_object* v_res_1263_; 
v_res_1263_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0(v_lhs_1249_, v_rhs_1250_, v_00_u03b1_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_);
lean_dec(v___y_1261_);
lean_dec_ref(v___y_1260_);
lean_dec(v___y_1259_);
lean_dec_ref(v___y_1258_);
lean_dec(v___y_1257_);
lean_dec_ref(v___y_1256_);
lean_dec(v___y_1255_);
lean_dec_ref(v___y_1254_);
lean_dec(v___y_1253_);
lean_dec(v___y_1252_);
return v_res_1263_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__2(void){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1266_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__1));
v___x_1267_ = lean_unsigned_to_nat(4u);
v___x_1268_ = lean_unsigned_to_nat(199u);
v___x_1269_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__0));
v___x_1270_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_1271_ = l_mkPanicMessageWithDecl(v___x_1270_, v___x_1269_, v___x_1268_, v___x_1267_, v___x_1266_);
return v___x_1271_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__2(void){
_start:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1274_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__1));
v___x_1275_ = lean_unsigned_to_nat(4u);
v___x_1276_ = lean_unsigned_to_nat(328u);
v___x_1277_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__0));
v___x_1278_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_1279_ = l_mkPanicMessageWithDecl(v___x_1278_, v___x_1277_, v___x_1276_, v___x_1275_, v___x_1274_);
return v___x_1279_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__1(void){
_start:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1281_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_1282_ = lean_unsigned_to_nat(36u);
v___x_1283_ = lean_unsigned_to_nat(154u);
v___x_1284_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__0));
v___x_1285_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_1286_ = l_mkPanicMessageWithDecl(v___x_1285_, v___x_1284_, v___x_1283_, v___x_1282_, v___x_1281_);
return v___x_1286_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__2(void){
_start:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1287_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_1288_ = lean_unsigned_to_nat(34u);
v___x_1289_ = lean_unsigned_to_nat(155u);
v___x_1290_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__0));
v___x_1291_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_1292_ = l_mkPanicMessageWithDecl(v___x_1291_, v___x_1290_, v___x_1289_, v___x_1288_, v___x_1287_);
return v___x_1292_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__4(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1294_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__3));
v___x_1295_ = lean_unsigned_to_nat(4u);
v___x_1296_ = lean_unsigned_to_nat(156u);
v___x_1297_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__0));
v___x_1298_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_1299_ = l_mkPanicMessageWithDecl(v___x_1298_, v___x_1297_, v___x_1296_, v___x_1295_, v___x_1294_);
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkEqCongrSymmProof(lean_object* v_lhs_1312_, lean_object* v_rhs_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_){
_start:
{
lean_object* v___y_1326_; lean_object* v___y_1327_; lean_object* v___y_1328_; lean_object* v___y_1329_; lean_object* v___y_1330_; lean_object* v___y_1331_; lean_object* v___y_1332_; lean_object* v___y_1333_; lean_object* v___y_1334_; lean_object* v___y_1335_; lean_object* v___y_1339_; lean_object* v___y_1340_; lean_object* v___y_1341_; lean_object* v___y_1342_; lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v___y_1346_; lean_object* v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1352_; lean_object* v_toCold_1355_; lean_object* v_currRecDepth_1356_; lean_object* v_ref_1357_; uint16_t v_optionFlags_1358_; uint8_t v_suppressElabErrors_1359_; uint8_t v_checkDeprecated_1360_; uint8_t v_isRecordingDeps_1361_; lean_object* v_maxRecDepth_1362_; lean_object* v___x_1363_; uint8_t v___x_1364_; lean_object* v___x_1427_; uint8_t v___x_1428_; 
v_toCold_1355_ = lean_ctor_get(v_a_1322_, 0);
v_currRecDepth_1356_ = lean_ctor_get(v_a_1322_, 1);
v_ref_1357_ = lean_ctor_get(v_a_1322_, 2);
v_optionFlags_1358_ = lean_ctor_get_uint16(v_a_1322_, sizeof(void*)*3);
v_suppressElabErrors_1359_ = lean_ctor_get_uint8(v_a_1322_, sizeof(void*)*3 + 2);
v_checkDeprecated_1360_ = lean_ctor_get_uint8(v_a_1322_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1361_ = lean_ctor_get_uint8(v_a_1322_, sizeof(void*)*3 + 4);
v_maxRecDepth_1362_ = lean_ctor_get(v_toCold_1355_, 3);
v___x_1363_ = l_Lean_Expr_cleanupAnnotations(v_lhs_1312_);
v___x_1364_ = l_Lean_Expr_isApp(v___x_1363_);
v___x_1427_ = lean_unsigned_to_nat(0u);
v___x_1428_ = lean_nat_dec_eq(v_maxRecDepth_1362_, v___x_1427_);
if (v___x_1428_ == 0)
{
uint8_t v___x_1429_; 
v___x_1429_ = lean_nat_dec_eq(v_currRecDepth_1356_, v_maxRecDepth_1362_);
if (v___x_1429_ == 0)
{
goto v___jp_1365_;
}
else
{
lean_object* v___x_1430_; 
lean_dec_ref(v___x_1363_);
lean_inc(v_ref_1357_);
v___x_1430_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg(v_ref_1357_);
return v___x_1430_;
}
}
else
{
goto v___jp_1365_;
}
v___jp_1325_:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1336_ = lean_obj_once(&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__1, &l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__1_once, _init_l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__1);
v___x_1337_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_1336_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
lean_dec_ref(v___y_1334_);
return v___x_1337_;
}
v___jp_1338_:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1349_ = lean_obj_once(&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__2, &l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__2_once, _init_l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__2);
v___x_1350_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_1349_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_);
lean_dec_ref(v___y_1347_);
return v___x_1350_;
}
v___jp_1351_:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1353_ = lean_obj_once(&l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__4, &l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__4_once, _init_l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__4);
v___x_1354_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_1353_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_, v___y_1352_, v_a_1323_);
lean_dec_ref(v___y_1352_);
return v___x_1354_;
}
v___jp_1365_:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1366_ = lean_unsigned_to_nat(1u);
v___x_1367_ = lean_nat_add(v_currRecDepth_1356_, v___x_1366_);
lean_inc(v_ref_1357_);
lean_inc_ref(v_toCold_1355_);
v___x_1368_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1368_, 0, v_toCold_1355_);
lean_ctor_set(v___x_1368_, 1, v___x_1367_);
lean_ctor_set(v___x_1368_, 2, v_ref_1357_);
lean_ctor_set_uint16(v___x_1368_, sizeof(void*)*3, v_optionFlags_1358_);
lean_ctor_set_uint8(v___x_1368_, sizeof(void*)*3 + 2, v_suppressElabErrors_1359_);
lean_ctor_set_uint8(v___x_1368_, sizeof(void*)*3 + 3, v_checkDeprecated_1360_);
lean_ctor_set_uint8(v___x_1368_, sizeof(void*)*3 + 4, v_isRecordingDeps_1361_);
if (v___x_1364_ == 0)
{
lean_dec_ref(v___x_1363_);
v___y_1326_ = v_a_1314_;
v___y_1327_ = v_a_1315_;
v___y_1328_ = v_a_1316_;
v___y_1329_ = v_a_1317_;
v___y_1330_ = v_a_1318_;
v___y_1331_ = v_a_1319_;
v___y_1332_ = v_a_1320_;
v___y_1333_ = v_a_1321_;
v___y_1334_ = v___x_1368_;
v___y_1335_ = v_a_1323_;
goto v___jp_1325_;
}
else
{
lean_object* v___x_1369_; uint8_t v___x_1370_; 
v___x_1369_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1363_);
v___x_1370_ = l_Lean_Expr_isApp(v___x_1369_);
if (v___x_1370_ == 0)
{
lean_dec_ref(v___x_1369_);
lean_dec_ref(v___x_1363_);
v___y_1326_ = v_a_1314_;
v___y_1327_ = v_a_1315_;
v___y_1328_ = v_a_1316_;
v___y_1329_ = v_a_1317_;
v___y_1330_ = v_a_1318_;
v___y_1331_ = v_a_1319_;
v___y_1332_ = v_a_1320_;
v___y_1333_ = v_a_1321_;
v___y_1334_ = v___x_1368_;
v___y_1335_ = v_a_1323_;
goto v___jp_1325_;
}
else
{
lean_object* v___x_1371_; uint8_t v___x_1372_; 
v___x_1371_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1369_);
v___x_1372_ = l_Lean_Expr_isApp(v___x_1371_);
if (v___x_1372_ == 0)
{
lean_dec_ref(v___x_1371_);
lean_dec_ref(v___x_1369_);
lean_dec_ref(v___x_1363_);
v___y_1326_ = v_a_1314_;
v___y_1327_ = v_a_1315_;
v___y_1328_ = v_a_1316_;
v___y_1329_ = v_a_1317_;
v___y_1330_ = v_a_1318_;
v___y_1331_ = v_a_1319_;
v___y_1332_ = v_a_1320_;
v___y_1333_ = v_a_1321_;
v___y_1334_ = v___x_1368_;
v___y_1335_ = v_a_1323_;
goto v___jp_1325_;
}
else
{
lean_object* v___x_1373_; lean_object* v___x_1374_; uint8_t v___x_1375_; 
v___x_1373_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1371_);
v___x_1374_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof___closed__1));
v___x_1375_ = l_Lean_Expr_isConstOf(v___x_1373_, v___x_1374_);
if (v___x_1375_ == 0)
{
lean_dec_ref(v___x_1373_);
lean_dec_ref(v___x_1371_);
lean_dec_ref(v___x_1369_);
lean_dec_ref(v___x_1363_);
v___y_1326_ = v_a_1314_;
v___y_1327_ = v_a_1315_;
v___y_1328_ = v_a_1316_;
v___y_1329_ = v_a_1317_;
v___y_1330_ = v_a_1318_;
v___y_1331_ = v_a_1319_;
v___y_1332_ = v_a_1320_;
v___y_1333_ = v_a_1321_;
v___y_1334_ = v___x_1368_;
v___y_1335_ = v_a_1323_;
goto v___jp_1325_;
}
else
{
lean_object* v___x_1376_; uint8_t v___x_1377_; 
v___x_1376_ = l_Lean_Expr_cleanupAnnotations(v_rhs_1313_);
v___x_1377_ = l_Lean_Expr_isApp(v___x_1376_);
if (v___x_1377_ == 0)
{
lean_dec_ref(v___x_1376_);
lean_dec_ref(v___x_1373_);
lean_dec_ref(v___x_1371_);
lean_dec_ref(v___x_1369_);
lean_dec_ref(v___x_1363_);
v___y_1339_ = v_a_1314_;
v___y_1340_ = v_a_1315_;
v___y_1341_ = v_a_1316_;
v___y_1342_ = v_a_1317_;
v___y_1343_ = v_a_1318_;
v___y_1344_ = v_a_1319_;
v___y_1345_ = v_a_1320_;
v___y_1346_ = v_a_1321_;
v___y_1347_ = v___x_1368_;
v___y_1348_ = v_a_1323_;
goto v___jp_1338_;
}
else
{
lean_object* v___x_1378_; uint8_t v___x_1379_; 
v___x_1378_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1376_);
v___x_1379_ = l_Lean_Expr_isApp(v___x_1378_);
if (v___x_1379_ == 0)
{
lean_dec_ref(v___x_1378_);
lean_dec_ref(v___x_1376_);
lean_dec_ref(v___x_1373_);
lean_dec_ref(v___x_1371_);
lean_dec_ref(v___x_1369_);
lean_dec_ref(v___x_1363_);
v___y_1339_ = v_a_1314_;
v___y_1340_ = v_a_1315_;
v___y_1341_ = v_a_1316_;
v___y_1342_ = v_a_1317_;
v___y_1343_ = v_a_1318_;
v___y_1344_ = v_a_1319_;
v___y_1345_ = v_a_1320_;
v___y_1346_ = v_a_1321_;
v___y_1347_ = v___x_1368_;
v___y_1348_ = v_a_1323_;
goto v___jp_1338_;
}
else
{
lean_object* v___x_1380_; uint8_t v___x_1381_; 
v___x_1380_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1378_);
v___x_1381_ = l_Lean_Expr_isApp(v___x_1380_);
if (v___x_1381_ == 0)
{
lean_dec_ref(v___x_1380_);
lean_dec_ref(v___x_1378_);
lean_dec_ref(v___x_1376_);
lean_dec_ref(v___x_1373_);
lean_dec_ref(v___x_1371_);
lean_dec_ref(v___x_1369_);
lean_dec_ref(v___x_1363_);
v___y_1339_ = v_a_1314_;
v___y_1340_ = v_a_1315_;
v___y_1341_ = v_a_1316_;
v___y_1342_ = v_a_1317_;
v___y_1343_ = v_a_1318_;
v___y_1344_ = v_a_1319_;
v___y_1345_ = v_a_1320_;
v___y_1346_ = v_a_1321_;
v___y_1347_ = v___x_1368_;
v___y_1348_ = v_a_1323_;
goto v___jp_1338_;
}
else
{
lean_object* v___x_1382_; uint8_t v___x_1383_; 
v___x_1382_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1380_);
v___x_1383_ = l_Lean_Expr_isConstOf(v___x_1382_, v___x_1374_);
lean_dec_ref(v___x_1382_);
if (v___x_1383_ == 0)
{
lean_dec_ref(v___x_1380_);
lean_dec_ref(v___x_1378_);
lean_dec_ref(v___x_1376_);
lean_dec_ref(v___x_1373_);
lean_dec_ref(v___x_1371_);
lean_dec_ref(v___x_1369_);
lean_dec_ref(v___x_1363_);
v___y_1339_ = v_a_1314_;
v___y_1340_ = v_a_1315_;
v___y_1341_ = v_a_1316_;
v___y_1342_ = v_a_1317_;
v___y_1343_ = v_a_1318_;
v___y_1344_ = v_a_1319_;
v___y_1345_ = v_a_1320_;
v___y_1346_ = v_a_1321_;
v___y_1347_ = v___x_1368_;
v___y_1348_ = v_a_1323_;
goto v___jp_1338_;
}
else
{
lean_object* v_arg_1384_; lean_object* v_arg_1385_; lean_object* v_arg_1386_; lean_object* v_arg_1387_; lean_object* v_arg_1388_; lean_object* v_arg_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; uint8_t v___x_1392_; 
v_arg_1384_ = lean_ctor_get(v___x_1363_, 1);
lean_inc_ref(v_arg_1384_);
lean_dec_ref(v___x_1363_);
v_arg_1385_ = lean_ctor_get(v___x_1369_, 1);
lean_inc_ref(v_arg_1385_);
lean_dec_ref(v___x_1369_);
v_arg_1386_ = lean_ctor_get(v___x_1371_, 1);
lean_inc_ref(v_arg_1386_);
lean_dec_ref(v___x_1371_);
v_arg_1387_ = lean_ctor_get(v___x_1376_, 1);
lean_inc_ref(v_arg_1387_);
lean_dec_ref(v___x_1376_);
v_arg_1388_ = lean_ctor_get(v___x_1378_, 1);
lean_inc_ref(v_arg_1388_);
lean_dec_ref(v___x_1378_);
v_arg_1389_ = lean_ctor_get(v___x_1380_, 1);
lean_inc_ref(v_arg_1389_);
lean_dec_ref(v___x_1380_);
v___x_1390_ = lean_st_ref_get(v_a_1314_);
v___x_1391_ = lean_st_ref_get(v_a_1314_);
v___x_1392_ = l_Lean_Meta_Grind_Goal_hasSameRoot(v___x_1390_, v_arg_1385_, v_arg_1387_);
lean_dec(v___x_1390_);
if (v___x_1392_ == 0)
{
lean_dec(v___x_1391_);
lean_dec_ref(v_arg_1389_);
lean_dec_ref(v_arg_1388_);
lean_dec_ref(v_arg_1387_);
lean_dec_ref(v_arg_1386_);
lean_dec_ref(v_arg_1385_);
lean_dec_ref(v_arg_1384_);
lean_dec_ref(v___x_1373_);
v___y_1352_ = v___x_1368_;
goto v___jp_1351_;
}
else
{
uint8_t v___x_1393_; 
v___x_1393_ = l_Lean_Meta_Grind_Goal_hasSameRoot(v___x_1391_, v_arg_1384_, v_arg_1388_);
lean_dec(v___x_1391_);
if (v___x_1393_ == 0)
{
lean_dec_ref(v_arg_1389_);
lean_dec_ref(v_arg_1388_);
lean_dec_ref(v_arg_1387_);
lean_dec_ref(v_arg_1386_);
lean_dec_ref(v_arg_1385_);
lean_dec_ref(v_arg_1384_);
lean_dec_ref(v___x_1373_);
v___y_1352_ = v___x_1368_;
goto v___jp_1351_;
}
else
{
lean_object* v___x_1394_; size_t v___x_1395_; size_t v___x_1396_; uint8_t v___x_1397_; 
v___x_1394_ = l_Lean_Expr_constLevels_x21(v___x_1373_);
lean_dec_ref(v___x_1373_);
v___x_1395_ = lean_ptr_addr(v_arg_1386_);
v___x_1396_ = lean_ptr_addr(v_arg_1389_);
v___x_1397_ = lean_usize_dec_eq(v___x_1395_, v___x_1396_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1398_; 
lean_inc_ref(v_arg_1387_);
lean_inc_ref(v_arg_1385_);
v___x_1398_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_arg_1385_, v_arg_1387_, v___x_1393_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_, v___x_1368_, v_a_1323_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v___x_1400_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
lean_inc(v_a_1399_);
lean_dec_ref_known(v___x_1398_, 1);
lean_inc_ref(v_arg_1388_);
lean_inc_ref(v_arg_1384_);
v___x_1400_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_arg_1384_, v_arg_1388_, v___x_1393_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_, v___x_1368_, v_a_1323_);
lean_dec_ref_known(v___x_1368_, 3);
if (lean_obj_tag(v___x_1400_) == 0)
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1411_; 
v_a_1401_ = lean_ctor_get(v___x_1400_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1400_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1403_ = v___x_1400_;
v_isShared_1404_ = v_isSharedCheck_1411_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1400_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1411_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1409_; 
v___x_1405_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__6));
v___x_1406_ = l_Lean_mkConst(v___x_1405_, v___x_1394_);
v___x_1407_ = l_Lean_mkApp8(v___x_1406_, v_arg_1386_, v_arg_1389_, v_arg_1385_, v_arg_1384_, v_arg_1388_, v_arg_1387_, v_a_1399_, v_a_1401_);
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 0, v___x_1407_);
v___x_1409_ = v___x_1403_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
else
{
lean_dec(v_a_1399_);
lean_dec(v___x_1394_);
lean_dec_ref(v_arg_1389_);
lean_dec_ref(v_arg_1388_);
lean_dec_ref(v_arg_1387_);
lean_dec_ref(v_arg_1386_);
lean_dec_ref(v_arg_1385_);
lean_dec_ref(v_arg_1384_);
return v___x_1400_;
}
}
else
{
lean_dec(v___x_1394_);
lean_dec_ref(v_arg_1389_);
lean_dec_ref(v_arg_1388_);
lean_dec_ref(v_arg_1387_);
lean_dec_ref(v_arg_1386_);
lean_dec_ref(v_arg_1385_);
lean_dec_ref(v_arg_1384_);
lean_dec_ref_known(v___x_1368_, 3);
return v___x_1398_;
}
}
else
{
uint8_t v___x_1412_; lean_object* v___x_1413_; 
lean_dec_ref(v_arg_1389_);
v___x_1412_ = 0;
lean_inc_ref(v_arg_1387_);
lean_inc_ref(v_arg_1385_);
v___x_1413_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_arg_1385_, v_arg_1387_, v___x_1412_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_, v___x_1368_, v_a_1323_);
if (lean_obj_tag(v___x_1413_) == 0)
{
lean_object* v_a_1414_; lean_object* v___x_1415_; 
v_a_1414_ = lean_ctor_get(v___x_1413_, 0);
lean_inc(v_a_1414_);
lean_dec_ref_known(v___x_1413_, 1);
lean_inc_ref(v_arg_1388_);
lean_inc_ref(v_arg_1384_);
v___x_1415_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_arg_1384_, v_arg_1388_, v___x_1412_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_, v___x_1368_, v_a_1323_);
lean_dec_ref_known(v___x_1368_, 3);
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_object* v_a_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1426_; 
v_a_1416_ = lean_ctor_get(v___x_1415_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1418_ = v___x_1415_;
v_isShared_1419_ = v_isSharedCheck_1426_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_a_1416_);
lean_dec(v___x_1415_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1426_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1424_; 
v___x_1420_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqCongrSymmProof___closed__8));
v___x_1421_ = l_Lean_mkConst(v___x_1420_, v___x_1394_);
v___x_1422_ = l_Lean_mkApp7(v___x_1421_, v_arg_1386_, v_arg_1385_, v_arg_1384_, v_arg_1388_, v_arg_1387_, v_a_1414_, v_a_1416_);
if (v_isShared_1419_ == 0)
{
lean_ctor_set(v___x_1418_, 0, v___x_1422_);
v___x_1424_ = v___x_1418_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v___x_1422_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
else
{
lean_dec(v_a_1414_);
lean_dec(v___x_1394_);
lean_dec_ref(v_arg_1388_);
lean_dec_ref(v_arg_1387_);
lean_dec_ref(v_arg_1386_);
lean_dec_ref(v_arg_1385_);
lean_dec_ref(v_arg_1384_);
return v___x_1415_;
}
}
else
{
lean_dec(v___x_1394_);
lean_dec_ref(v_arg_1388_);
lean_dec_ref(v_arg_1387_);
lean_dec_ref(v_arg_1386_);
lean_dec_ref(v_arg_1385_);
lean_dec_ref(v_arg_1384_);
lean_dec_ref_known(v___x_1368_, 3);
return v___x_1413_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___closed__2(void){
_start:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; 
v___x_1436_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___closed__1));
v___x_1437_ = lean_unsigned_to_nat(4u);
v___x_1438_ = lean_unsigned_to_nat(220u);
v___x_1439_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___closed__0));
v___x_1440_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_1441_ = l_mkPanicMessageWithDecl(v___x_1440_, v___x_1439_, v___x_1438_, v___x_1437_, v___x_1436_);
return v___x_1441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof(lean_object* v_lhs_1442_, lean_object* v_rhs_1443_, uint8_t v_heq_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_){
_start:
{
lean_object* v_numArgs_1456_; lean_object* v___x_1457_; uint8_t v___x_1458_; 
v_numArgs_1456_ = l_Lean_Expr_getAppNumArgs(v_lhs_1442_);
v___x_1457_ = l_Lean_Expr_getAppNumArgs(v_rhs_1443_);
v___x_1458_ = lean_nat_dec_eq(v___x_1457_, v_numArgs_1456_);
lean_dec(v___x_1457_);
if (v___x_1458_ == 0)
{
lean_object* v___x_1459_; lean_object* v___x_1460_; 
lean_dec(v_numArgs_1456_);
lean_dec_ref(v_rhs_1443_);
lean_dec_ref(v_lhs_1442_);
v___x_1459_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___closed__2, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___closed__2);
v___x_1460_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_1459_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_, v_a_1453_, v_a_1454_);
return v___x_1460_;
}
else
{
lean_object* v_f_1461_; lean_object* v_g_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
v_f_1461_ = l_Lean_Expr_getAppFn(v_lhs_1442_);
v_g_1462_ = l_Lean_Expr_getAppFn(v_rhs_1443_);
v___x_1463_ = lean_box(0);
lean_inc_ref(v_f_1461_);
v___x_1464_ = l_Lean_Meta_getFunInfo(v_f_1461_, v___x_1463_, v_a_1451_, v_a_1452_, v_a_1453_, v_a_1454_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v_a_1465_; lean_object* v___x_1466_; uint8_t v___x_1467_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v___x_1464_, 1);
v___x_1466_ = l_Lean_Meta_FunInfo_getArity(v_a_1465_);
lean_dec(v_a_1465_);
v___x_1467_ = lean_nat_dec_lt(v___x_1466_, v_numArgs_1456_);
lean_dec(v___x_1466_);
if (v___x_1467_ == 0)
{
lean_object* v___x_1468_; 
v___x_1468_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27(v_f_1461_, v_g_1462_, v_numArgs_1456_, v_lhs_1442_, v_rhs_1443_, v_heq_1444_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_, v_a_1453_, v_a_1454_);
return v___x_1468_;
}
else
{
lean_object* v___x_1469_; 
lean_dec_ref(v_g_1462_);
lean_dec_ref(v_f_1461_);
lean_dec(v_numArgs_1456_);
lean_inc_ref(v_lhs_1442_);
v___x_1469_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommonPrefix(v_lhs_1442_, v_rhs_1443_);
if (lean_obj_tag(v___x_1469_) == 1)
{
lean_object* v_val_1470_; lean_object* v_fst_1471_; lean_object* v_snd_1472_; lean_object* v_a_1474_; lean_object* v___x_1478_; 
v_val_1470_ = lean_ctor_get(v___x_1469_, 0);
lean_inc(v_val_1470_);
lean_dec_ref_known(v___x_1469_, 1);
v_fst_1471_ = lean_ctor_get(v_val_1470_, 0);
lean_inc(v_fst_1471_);
v_snd_1472_ = lean_ctor_get(v_val_1470_, 1);
lean_inc_n(v_snd_1472_, 2);
lean_dec(v_val_1470_);
v___x_1478_ = l_Lean_Meta_Grind_mkHCongrWithArity___redArg(v_fst_1471_, v_snd_1472_, v_a_1448_, v_a_1451_, v_a_1452_, v_a_1453_, v_a_1454_);
if (lean_obj_tag(v___x_1478_) == 0)
{
lean_object* v_a_1479_; 
v_a_1479_ = lean_ctor_get(v___x_1478_, 0);
lean_inc(v_a_1479_);
lean_dec_ref_known(v___x_1478_, 1);
v_a_1474_ = v_a_1479_;
goto v___jp_1473_;
}
else
{
lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1502_; 
v_a_1480_ = lean_ctor_get(v___x_1478_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1482_ = v___x_1478_;
v_isShared_1483_ = v_isSharedCheck_1502_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v___x_1478_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1502_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
uint8_t v___x_1484_; 
v___x_1484_ = l_Lean_Exception_isInterrupt(v_a_1480_);
if (v___x_1484_ == 0)
{
uint8_t v___x_1485_; 
lean_inc(v_a_1480_);
v___x_1485_ = l_Lean_Exception_isRuntime(v_a_1480_);
if (v___x_1485_ == 0)
{
lean_object* v___x_1486_; 
lean_del_object(v___x_1482_);
lean_dec(v_a_1480_);
lean_inc_ref(v_rhs_1443_);
lean_inc_ref(v_lhs_1442_);
v___x_1486_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0(v_lhs_1442_, v_rhs_1443_, lean_box(0), v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_, v_a_1453_, v_a_1454_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v_a_1487_; 
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
lean_inc(v_a_1487_);
lean_dec_ref_known(v___x_1486_, 1);
v_a_1474_ = v_a_1487_;
goto v___jp_1473_;
}
else
{
lean_object* v_a_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1495_; 
lean_dec(v_snd_1472_);
lean_dec_ref(v_rhs_1443_);
lean_dec_ref(v_lhs_1442_);
v_a_1488_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1490_ = v___x_1486_;
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_a_1488_);
lean_dec(v___x_1486_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1493_; 
if (v_isShared_1491_ == 0)
{
v___x_1493_ = v___x_1490_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_a_1488_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
}
else
{
lean_object* v___x_1497_; 
lean_dec(v_snd_1472_);
lean_dec_ref(v_rhs_1443_);
lean_dec_ref(v_lhs_1442_);
if (v_isShared_1483_ == 0)
{
v___x_1497_ = v___x_1482_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v_a_1480_);
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
lean_object* v___x_1500_; 
lean_dec(v_snd_1472_);
lean_dec_ref(v_rhs_1443_);
lean_dec_ref(v_lhs_1442_);
if (v_isShared_1483_ == 0)
{
v___x_1500_ = v___x_1482_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1480_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
}
v___jp_1473_:
{
lean_object* v___x_1475_; 
v___x_1475_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProofHelper(v_a_1474_, v_lhs_1442_, v_rhs_1443_, v_snd_1472_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_, v_a_1453_, v_a_1454_);
lean_dec(v_snd_1472_);
lean_dec_ref(v_rhs_1443_);
lean_dec_ref(v_lhs_1442_);
lean_dec_ref(v_a_1474_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_a_1476_; lean_object* v___x_1477_; 
v_a_1476_ = lean_ctor_get(v___x_1475_, 0);
lean_inc(v_a_1476_);
lean_dec_ref_known(v___x_1475_, 1);
v___x_1477_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqOfHEqIfNeeded(v_a_1476_, v_heq_1444_, v_a_1451_, v_a_1452_, v_a_1453_, v_a_1454_);
return v___x_1477_;
}
else
{
return v___x_1475_;
}
}
}
else
{
lean_object* v___x_1503_; 
lean_dec(v___x_1469_);
v___x_1503_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___lam__0(v_lhs_1442_, v_rhs_1443_, lean_box(0), v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_, v_a_1453_, v_a_1454_);
return v___x_1503_;
}
}
}
else
{
lean_object* v_a_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1511_; 
lean_dec_ref(v_g_1462_);
lean_dec_ref(v_f_1461_);
lean_dec(v_numArgs_1456_);
lean_dec_ref(v_rhs_1443_);
lean_dec_ref(v_lhs_1442_);
v_a_1504_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1506_ = v___x_1464_;
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_a_1504_);
lean_dec(v___x_1464_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1509_; 
if (v_isShared_1507_ == 0)
{
v___x_1509_ = v___x_1506_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v_a_1504_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof_loop(lean_object* v_lhs_1512_, lean_object* v_rhs_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_){
_start:
{
uint8_t v___x_1525_; 
v___x_1525_ = l_Lean_Expr_isApp(v_lhs_1512_);
if (v___x_1525_ == 0)
{
lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1526_ = lean_box(0);
v___x_1527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1526_);
return v___x_1527_;
}
else
{
lean_object* v_a_u2081_1528_; lean_object* v_a_u2082_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v_a_u2081_1528_ = l_Lean_Expr_appArg_x21(v_lhs_1512_);
v_a_u2082_1529_ = l_Lean_Expr_appArg_x21(v_rhs_1513_);
v___x_1530_ = l_Lean_Expr_appFn_x21(v_lhs_1512_);
v___x_1531_ = l_Lean_Expr_appFn_x21(v_rhs_1513_);
v___x_1532_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof_loop(v___x_1530_, v___x_1531_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
lean_dec_ref(v___x_1531_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1630_; 
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1535_ = v___x_1532_;
v_isShared_1536_ = v_isSharedCheck_1630_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1532_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1630_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
if (lean_obj_tag(v_a_1533_) == 1)
{
lean_object* v_val_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1594_; 
lean_del_object(v___x_1535_);
lean_dec_ref(v___x_1530_);
v_val_1537_ = lean_ctor_get(v_a_1533_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v_a_1533_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1539_ = v_a_1533_;
v_isShared_1540_ = v_isSharedCheck_1594_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_val_1537_);
lean_dec(v_a_1533_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1594_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
size_t v___x_1541_; size_t v___x_1542_; uint8_t v___x_1543_; 
v___x_1541_ = lean_ptr_addr(v_a_u2081_1528_);
v___x_1542_ = lean_ptr_addr(v_a_u2082_1529_);
v___x_1543_ = lean_usize_dec_eq(v___x_1541_, v___x_1542_);
if (v___x_1543_ == 0)
{
lean_object* v___x_1544_; 
v___x_1544_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_a_u2081_1528_, v_a_u2082_1529_, v___x_1543_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
if (lean_obj_tag(v___x_1544_) == 0)
{
lean_object* v_a_1545_; lean_object* v___x_1546_; 
v_a_1545_ = lean_ctor_get(v___x_1544_, 0);
lean_inc(v_a_1545_);
lean_dec_ref_known(v___x_1544_, 1);
v___x_1546_ = l_Lean_Meta_mkCongr(v_val_1537_, v_a_1545_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
if (lean_obj_tag(v___x_1546_) == 0)
{
lean_object* v_a_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1557_; 
v_a_1547_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1557_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1549_ = v___x_1546_;
v_isShared_1550_ = v_isSharedCheck_1557_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_a_1547_);
lean_dec(v___x_1546_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1557_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1552_; 
if (v_isShared_1540_ == 0)
{
lean_ctor_set(v___x_1539_, 0, v_a_1547_);
v___x_1552_ = v___x_1539_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v_a_1547_);
v___x_1552_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
lean_object* v___x_1554_; 
if (v_isShared_1550_ == 0)
{
lean_ctor_set(v___x_1549_, 0, v___x_1552_);
v___x_1554_ = v___x_1549_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___x_1552_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
}
else
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
lean_del_object(v___x_1539_);
v_a_1558_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1560_ = v___x_1546_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v___x_1546_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
if (v_isShared_1561_ == 0)
{
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1558_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
}
else
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1573_; 
lean_del_object(v___x_1539_);
lean_dec(v_val_1537_);
v_a_1566_ = lean_ctor_get(v___x_1544_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1568_ = v___x_1544_;
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1544_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1571_; 
if (v_isShared_1569_ == 0)
{
v___x_1571_ = v___x_1568_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1566_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
}
}
else
{
lean_object* v___x_1574_; 
lean_dec_ref(v_a_u2082_1529_);
v___x_1574_ = l_Lean_Meta_mkCongrFun(v_val_1537_, v_a_u2081_1528_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1585_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1577_ = v___x_1574_;
v_isShared_1578_ = v_isSharedCheck_1585_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1574_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1585_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1540_ == 0)
{
lean_ctor_set(v___x_1539_, 0, v_a_1575_);
v___x_1580_ = v___x_1539_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1575_);
v___x_1580_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
lean_object* v___x_1582_; 
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 0, v___x_1580_);
v___x_1582_ = v___x_1577_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v___x_1580_);
v___x_1582_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
return v___x_1582_;
}
}
}
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1593_; 
lean_del_object(v___x_1539_);
v_a_1586_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1588_ = v___x_1574_;
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v___x_1574_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
if (v_isShared_1589_ == 0)
{
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_a_1586_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
return v___x_1591_;
}
}
}
}
}
}
else
{
size_t v___x_1595_; size_t v___x_1596_; uint8_t v___x_1597_; 
lean_dec(v_a_1533_);
v___x_1595_ = lean_ptr_addr(v_a_u2081_1528_);
v___x_1596_ = lean_ptr_addr(v_a_u2082_1529_);
v___x_1597_ = lean_usize_dec_eq(v___x_1595_, v___x_1596_);
if (v___x_1597_ == 0)
{
lean_object* v___x_1598_; 
lean_del_object(v___x_1535_);
v___x_1598_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_a_u2081_1528_, v_a_u2082_1529_, v___x_1597_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_object* v_a_1599_; lean_object* v___x_1600_; 
v_a_1599_ = lean_ctor_get(v___x_1598_, 0);
lean_inc(v_a_1599_);
lean_dec_ref_known(v___x_1598_, 1);
v___x_1600_ = l_Lean_Meta_mkCongrArg(v___x_1530_, v_a_1599_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
if (lean_obj_tag(v___x_1600_) == 0)
{
lean_object* v_a_1601_; lean_object* v___x_1603_; uint8_t v_isShared_1604_; uint8_t v_isSharedCheck_1609_; 
v_a_1601_ = lean_ctor_get(v___x_1600_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1603_ = v___x_1600_;
v_isShared_1604_ = v_isSharedCheck_1609_;
goto v_resetjp_1602_;
}
else
{
lean_inc(v_a_1601_);
lean_dec(v___x_1600_);
v___x_1603_ = lean_box(0);
v_isShared_1604_ = v_isSharedCheck_1609_;
goto v_resetjp_1602_;
}
v_resetjp_1602_:
{
lean_object* v___x_1605_; lean_object* v___x_1607_; 
v___x_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1605_, 0, v_a_1601_);
if (v_isShared_1604_ == 0)
{
lean_ctor_set(v___x_1603_, 0, v___x_1605_);
v___x_1607_ = v___x_1603_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1605_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
else
{
lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1617_; 
v_a_1610_ = lean_ctor_get(v___x_1600_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1612_ = v___x_1600_;
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v___x_1600_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1615_; 
if (v_isShared_1613_ == 0)
{
v___x_1615_ = v___x_1612_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_a_1610_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
}
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
lean_dec_ref(v___x_1530_);
v_a_1618_ = lean_ctor_get(v___x_1598_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1620_ = v___x_1598_;
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1598_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1623_; 
if (v_isShared_1621_ == 0)
{
v___x_1623_ = v___x_1620_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1618_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
}
else
{
lean_object* v___x_1626_; lean_object* v___x_1628_; 
lean_dec_ref(v___x_1530_);
lean_dec_ref(v_a_u2082_1529_);
lean_dec_ref(v_a_u2081_1528_);
v___x_1626_ = lean_box(0);
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 0, v___x_1626_);
v___x_1628_ = v___x_1535_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v___x_1626_);
v___x_1628_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
return v___x_1628_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1530_);
lean_dec_ref(v_a_u2082_1529_);
lean_dec_ref(v_a_u2081_1528_);
return v___x_1532_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__3(void){
_start:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
v___x_1634_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__2));
v___x_1635_ = lean_unsigned_to_nat(14u);
v___x_1636_ = lean_unsigned_to_nat(22u);
v___x_1637_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__1));
v___x_1638_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__0));
v___x_1639_ = l_mkPanicMessageWithDecl(v___x_1638_, v___x_1637_, v___x_1636_, v___x_1635_, v___x_1634_);
return v___x_1639_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof(lean_object* v_lhs_1640_, lean_object* v_rhs_1641_, uint8_t v_heq_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_){
_start:
{
lean_object* v___x_1654_; 
v___x_1654_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof_loop(v_lhs_1640_, v_rhs_1641_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1668_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1657_ = v___x_1654_;
v_isShared_1658_ = v_isSharedCheck_1668_;
goto v_resetjp_1656_;
}
else
{
lean_inc(v_a_1655_);
lean_dec(v___x_1654_);
v___x_1657_ = lean_box(0);
v_isShared_1658_ = v_isSharedCheck_1668_;
goto v_resetjp_1656_;
}
v_resetjp_1656_:
{
lean_object* v___y_1660_; 
if (lean_obj_tag(v_a_1655_) == 0)
{
lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1665_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__3, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___closed__3);
v___x_1666_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof_spec__13(v___x_1665_);
v___y_1660_ = v___x_1666_;
goto v___jp_1659_;
}
else
{
lean_object* v_val_1667_; 
v_val_1667_ = lean_ctor_get(v_a_1655_, 0);
lean_inc(v_val_1667_);
lean_dec_ref_known(v_a_1655_, 1);
v___y_1660_ = v_val_1667_;
goto v___jp_1659_;
}
v___jp_1659_:
{
if (v_heq_1642_ == 0)
{
lean_object* v___x_1662_; 
if (v_isShared_1658_ == 0)
{
lean_ctor_set(v___x_1657_, 0, v___y_1660_);
v___x_1662_ = v___x_1657_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v___y_1660_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
else
{
lean_object* v___x_1664_; 
lean_del_object(v___x_1657_);
v___x_1664_ = l_Lean_Meta_mkHEqOfEq(v___y_1660_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_);
return v___x_1664_;
}
}
}
}
else
{
lean_object* v_a_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1676_; 
v_a_1669_ = lean_ctor_get(v___x_1654_, 0);
v_isSharedCheck_1676_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1676_ == 0)
{
v___x_1671_ = v___x_1654_;
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_a_1669_);
lean_dec(v___x_1654_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1674_; 
if (v_isShared_1672_ == 0)
{
v___x_1674_ = v___x_1671_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_a_1669_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkEqCongrProof___closed__1(void){
_start:
{
lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1678_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_1679_ = lean_unsigned_to_nat(36u);
v___x_1680_ = lean_unsigned_to_nat(144u);
v___x_1681_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqCongrProof___closed__0));
v___x_1682_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_1683_ = l_mkPanicMessageWithDecl(v___x_1682_, v___x_1681_, v___x_1680_, v___x_1679_, v___x_1678_);
return v___x_1683_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkEqCongrProof___closed__2(void){
_start:
{
lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1684_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_1685_ = lean_unsigned_to_nat(34u);
v___x_1686_ = lean_unsigned_to_nat(145u);
v___x_1687_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqCongrProof___closed__0));
v___x_1688_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_1689_ = l_mkPanicMessageWithDecl(v___x_1688_, v___x_1687_, v___x_1686_, v___x_1685_, v___x_1684_);
return v___x_1689_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkEqCongrProof___closed__4(void){
_start:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1691_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqCongrProof___closed__3));
v___x_1692_ = lean_unsigned_to_nat(4u);
v___x_1693_ = lean_unsigned_to_nat(146u);
v___x_1694_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqCongrProof___closed__0));
v___x_1695_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_1696_ = l_mkPanicMessageWithDecl(v___x_1695_, v___x_1694_, v___x_1693_, v___x_1692_, v___x_1691_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkEqCongrProof(lean_object* v_lhs_1707_, lean_object* v_rhs_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_){
_start:
{
lean_object* v___y_1721_; lean_object* v___y_1722_; lean_object* v___y_1723_; lean_object* v___y_1724_; lean_object* v___y_1725_; lean_object* v___y_1726_; lean_object* v___y_1727_; lean_object* v___y_1728_; lean_object* v___y_1729_; lean_object* v___y_1730_; lean_object* v___y_1734_; lean_object* v___y_1735_; lean_object* v___y_1736_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v___y_1739_; lean_object* v___y_1740_; lean_object* v___y_1741_; lean_object* v___y_1742_; lean_object* v___y_1743_; lean_object* v___y_1747_; lean_object* v_toCold_1750_; lean_object* v_currRecDepth_1751_; lean_object* v_ref_1752_; uint16_t v_optionFlags_1753_; uint8_t v_suppressElabErrors_1754_; uint8_t v_checkDeprecated_1755_; uint8_t v_isRecordingDeps_1756_; lean_object* v_maxRecDepth_1757_; lean_object* v___x_1758_; uint8_t v___x_1759_; lean_object* v___x_1822_; uint8_t v___x_1823_; 
v_toCold_1750_ = lean_ctor_get(v_a_1717_, 0);
v_currRecDepth_1751_ = lean_ctor_get(v_a_1717_, 1);
v_ref_1752_ = lean_ctor_get(v_a_1717_, 2);
v_optionFlags_1753_ = lean_ctor_get_uint16(v_a_1717_, sizeof(void*)*3);
v_suppressElabErrors_1754_ = lean_ctor_get_uint8(v_a_1717_, sizeof(void*)*3 + 2);
v_checkDeprecated_1755_ = lean_ctor_get_uint8(v_a_1717_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1756_ = lean_ctor_get_uint8(v_a_1717_, sizeof(void*)*3 + 4);
v_maxRecDepth_1757_ = lean_ctor_get(v_toCold_1750_, 3);
v___x_1758_ = l_Lean_Expr_cleanupAnnotations(v_lhs_1707_);
v___x_1759_ = l_Lean_Expr_isApp(v___x_1758_);
v___x_1822_ = lean_unsigned_to_nat(0u);
v___x_1823_ = lean_nat_dec_eq(v_maxRecDepth_1757_, v___x_1822_);
if (v___x_1823_ == 0)
{
uint8_t v___x_1824_; 
v___x_1824_ = lean_nat_dec_eq(v_currRecDepth_1751_, v_maxRecDepth_1757_);
if (v___x_1824_ == 0)
{
goto v___jp_1760_;
}
else
{
lean_object* v___x_1825_; 
lean_dec_ref(v___x_1758_);
lean_inc(v_ref_1752_);
v___x_1825_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg(v_ref_1752_);
return v___x_1825_;
}
}
else
{
goto v___jp_1760_;
}
v___jp_1720_:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1731_ = lean_obj_once(&l_Lean_Meta_Grind_mkEqCongrProof___closed__1, &l_Lean_Meta_Grind_mkEqCongrProof___closed__1_once, _init_l_Lean_Meta_Grind_mkEqCongrProof___closed__1);
v___x_1732_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_1731_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_);
lean_dec_ref(v___y_1729_);
return v___x_1732_;
}
v___jp_1733_:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1744_ = lean_obj_once(&l_Lean_Meta_Grind_mkEqCongrProof___closed__2, &l_Lean_Meta_Grind_mkEqCongrProof___closed__2_once, _init_l_Lean_Meta_Grind_mkEqCongrProof___closed__2);
v___x_1745_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_1744_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
lean_dec_ref(v___y_1742_);
return v___x_1745_;
}
v___jp_1746_:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1748_ = lean_obj_once(&l_Lean_Meta_Grind_mkEqCongrProof___closed__4, &l_Lean_Meta_Grind_mkEqCongrProof___closed__4_once, _init_l_Lean_Meta_Grind_mkEqCongrProof___closed__4);
v___x_1749_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_1748_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v___y_1747_, v_a_1718_);
lean_dec_ref(v___y_1747_);
return v___x_1749_;
}
v___jp_1760_:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
v___x_1761_ = lean_unsigned_to_nat(1u);
v___x_1762_ = lean_nat_add(v_currRecDepth_1751_, v___x_1761_);
lean_inc(v_ref_1752_);
lean_inc_ref(v_toCold_1750_);
v___x_1763_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1763_, 0, v_toCold_1750_);
lean_ctor_set(v___x_1763_, 1, v___x_1762_);
lean_ctor_set(v___x_1763_, 2, v_ref_1752_);
lean_ctor_set_uint16(v___x_1763_, sizeof(void*)*3, v_optionFlags_1753_);
lean_ctor_set_uint8(v___x_1763_, sizeof(void*)*3 + 2, v_suppressElabErrors_1754_);
lean_ctor_set_uint8(v___x_1763_, sizeof(void*)*3 + 3, v_checkDeprecated_1755_);
lean_ctor_set_uint8(v___x_1763_, sizeof(void*)*3 + 4, v_isRecordingDeps_1756_);
if (v___x_1759_ == 0)
{
lean_dec_ref(v___x_1758_);
v___y_1721_ = v_a_1709_;
v___y_1722_ = v_a_1710_;
v___y_1723_ = v_a_1711_;
v___y_1724_ = v_a_1712_;
v___y_1725_ = v_a_1713_;
v___y_1726_ = v_a_1714_;
v___y_1727_ = v_a_1715_;
v___y_1728_ = v_a_1716_;
v___y_1729_ = v___x_1763_;
v___y_1730_ = v_a_1718_;
goto v___jp_1720_;
}
else
{
lean_object* v___x_1764_; uint8_t v___x_1765_; 
v___x_1764_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1758_);
v___x_1765_ = l_Lean_Expr_isApp(v___x_1764_);
if (v___x_1765_ == 0)
{
lean_dec_ref(v___x_1764_);
lean_dec_ref(v___x_1758_);
v___y_1721_ = v_a_1709_;
v___y_1722_ = v_a_1710_;
v___y_1723_ = v_a_1711_;
v___y_1724_ = v_a_1712_;
v___y_1725_ = v_a_1713_;
v___y_1726_ = v_a_1714_;
v___y_1727_ = v_a_1715_;
v___y_1728_ = v_a_1716_;
v___y_1729_ = v___x_1763_;
v___y_1730_ = v_a_1718_;
goto v___jp_1720_;
}
else
{
lean_object* v___x_1766_; uint8_t v___x_1767_; 
v___x_1766_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1764_);
v___x_1767_ = l_Lean_Expr_isApp(v___x_1766_);
if (v___x_1767_ == 0)
{
lean_dec_ref(v___x_1766_);
lean_dec_ref(v___x_1764_);
lean_dec_ref(v___x_1758_);
v___y_1721_ = v_a_1709_;
v___y_1722_ = v_a_1710_;
v___y_1723_ = v_a_1711_;
v___y_1724_ = v_a_1712_;
v___y_1725_ = v_a_1713_;
v___y_1726_ = v_a_1714_;
v___y_1727_ = v_a_1715_;
v___y_1728_ = v_a_1716_;
v___y_1729_ = v___x_1763_;
v___y_1730_ = v_a_1718_;
goto v___jp_1720_;
}
else
{
lean_object* v___x_1768_; lean_object* v___x_1769_; uint8_t v___x_1770_; 
v___x_1768_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1766_);
v___x_1769_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof___closed__1));
v___x_1770_ = l_Lean_Expr_isConstOf(v___x_1768_, v___x_1769_);
if (v___x_1770_ == 0)
{
lean_dec_ref(v___x_1768_);
lean_dec_ref(v___x_1766_);
lean_dec_ref(v___x_1764_);
lean_dec_ref(v___x_1758_);
v___y_1721_ = v_a_1709_;
v___y_1722_ = v_a_1710_;
v___y_1723_ = v_a_1711_;
v___y_1724_ = v_a_1712_;
v___y_1725_ = v_a_1713_;
v___y_1726_ = v_a_1714_;
v___y_1727_ = v_a_1715_;
v___y_1728_ = v_a_1716_;
v___y_1729_ = v___x_1763_;
v___y_1730_ = v_a_1718_;
goto v___jp_1720_;
}
else
{
lean_object* v___x_1771_; uint8_t v___x_1772_; 
v___x_1771_ = l_Lean_Expr_cleanupAnnotations(v_rhs_1708_);
v___x_1772_ = l_Lean_Expr_isApp(v___x_1771_);
if (v___x_1772_ == 0)
{
lean_dec_ref(v___x_1771_);
lean_dec_ref(v___x_1768_);
lean_dec_ref(v___x_1766_);
lean_dec_ref(v___x_1764_);
lean_dec_ref(v___x_1758_);
v___y_1734_ = v_a_1709_;
v___y_1735_ = v_a_1710_;
v___y_1736_ = v_a_1711_;
v___y_1737_ = v_a_1712_;
v___y_1738_ = v_a_1713_;
v___y_1739_ = v_a_1714_;
v___y_1740_ = v_a_1715_;
v___y_1741_ = v_a_1716_;
v___y_1742_ = v___x_1763_;
v___y_1743_ = v_a_1718_;
goto v___jp_1733_;
}
else
{
lean_object* v___x_1773_; uint8_t v___x_1774_; 
v___x_1773_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1771_);
v___x_1774_ = l_Lean_Expr_isApp(v___x_1773_);
if (v___x_1774_ == 0)
{
lean_dec_ref(v___x_1773_);
lean_dec_ref(v___x_1771_);
lean_dec_ref(v___x_1768_);
lean_dec_ref(v___x_1766_);
lean_dec_ref(v___x_1764_);
lean_dec_ref(v___x_1758_);
v___y_1734_ = v_a_1709_;
v___y_1735_ = v_a_1710_;
v___y_1736_ = v_a_1711_;
v___y_1737_ = v_a_1712_;
v___y_1738_ = v_a_1713_;
v___y_1739_ = v_a_1714_;
v___y_1740_ = v_a_1715_;
v___y_1741_ = v_a_1716_;
v___y_1742_ = v___x_1763_;
v___y_1743_ = v_a_1718_;
goto v___jp_1733_;
}
else
{
lean_object* v___x_1775_; uint8_t v___x_1776_; 
v___x_1775_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1773_);
v___x_1776_ = l_Lean_Expr_isApp(v___x_1775_);
if (v___x_1776_ == 0)
{
lean_dec_ref(v___x_1775_);
lean_dec_ref(v___x_1773_);
lean_dec_ref(v___x_1771_);
lean_dec_ref(v___x_1768_);
lean_dec_ref(v___x_1766_);
lean_dec_ref(v___x_1764_);
lean_dec_ref(v___x_1758_);
v___y_1734_ = v_a_1709_;
v___y_1735_ = v_a_1710_;
v___y_1736_ = v_a_1711_;
v___y_1737_ = v_a_1712_;
v___y_1738_ = v_a_1713_;
v___y_1739_ = v_a_1714_;
v___y_1740_ = v_a_1715_;
v___y_1741_ = v_a_1716_;
v___y_1742_ = v___x_1763_;
v___y_1743_ = v_a_1718_;
goto v___jp_1733_;
}
else
{
lean_object* v___x_1777_; uint8_t v___x_1778_; 
v___x_1777_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1775_);
v___x_1778_ = l_Lean_Expr_isConstOf(v___x_1777_, v___x_1769_);
lean_dec_ref(v___x_1777_);
if (v___x_1778_ == 0)
{
lean_dec_ref(v___x_1775_);
lean_dec_ref(v___x_1773_);
lean_dec_ref(v___x_1771_);
lean_dec_ref(v___x_1768_);
lean_dec_ref(v___x_1766_);
lean_dec_ref(v___x_1764_);
lean_dec_ref(v___x_1758_);
v___y_1734_ = v_a_1709_;
v___y_1735_ = v_a_1710_;
v___y_1736_ = v_a_1711_;
v___y_1737_ = v_a_1712_;
v___y_1738_ = v_a_1713_;
v___y_1739_ = v_a_1714_;
v___y_1740_ = v_a_1715_;
v___y_1741_ = v_a_1716_;
v___y_1742_ = v___x_1763_;
v___y_1743_ = v_a_1718_;
goto v___jp_1733_;
}
else
{
lean_object* v_arg_1779_; lean_object* v_arg_1780_; lean_object* v_arg_1781_; lean_object* v_arg_1782_; lean_object* v_arg_1783_; lean_object* v_arg_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; uint8_t v___x_1787_; 
v_arg_1779_ = lean_ctor_get(v___x_1758_, 1);
lean_inc_ref(v_arg_1779_);
lean_dec_ref(v___x_1758_);
v_arg_1780_ = lean_ctor_get(v___x_1764_, 1);
lean_inc_ref(v_arg_1780_);
lean_dec_ref(v___x_1764_);
v_arg_1781_ = lean_ctor_get(v___x_1766_, 1);
lean_inc_ref(v_arg_1781_);
lean_dec_ref(v___x_1766_);
v_arg_1782_ = lean_ctor_get(v___x_1771_, 1);
lean_inc_ref(v_arg_1782_);
lean_dec_ref(v___x_1771_);
v_arg_1783_ = lean_ctor_get(v___x_1773_, 1);
lean_inc_ref(v_arg_1783_);
lean_dec_ref(v___x_1773_);
v_arg_1784_ = lean_ctor_get(v___x_1775_, 1);
lean_inc_ref(v_arg_1784_);
lean_dec_ref(v___x_1775_);
v___x_1785_ = lean_st_ref_get(v_a_1709_);
v___x_1786_ = lean_st_ref_get(v_a_1709_);
v___x_1787_ = l_Lean_Meta_Grind_Goal_hasSameRoot(v___x_1785_, v_arg_1780_, v_arg_1783_);
lean_dec(v___x_1785_);
if (v___x_1787_ == 0)
{
lean_dec(v___x_1786_);
lean_dec_ref(v_arg_1784_);
lean_dec_ref(v_arg_1783_);
lean_dec_ref(v_arg_1782_);
lean_dec_ref(v_arg_1781_);
lean_dec_ref(v_arg_1780_);
lean_dec_ref(v_arg_1779_);
lean_dec_ref(v___x_1768_);
v___y_1747_ = v___x_1763_;
goto v___jp_1746_;
}
else
{
uint8_t v___x_1788_; 
v___x_1788_ = l_Lean_Meta_Grind_Goal_hasSameRoot(v___x_1786_, v_arg_1779_, v_arg_1782_);
lean_dec(v___x_1786_);
if (v___x_1788_ == 0)
{
lean_dec_ref(v_arg_1784_);
lean_dec_ref(v_arg_1783_);
lean_dec_ref(v_arg_1782_);
lean_dec_ref(v_arg_1781_);
lean_dec_ref(v_arg_1780_);
lean_dec_ref(v_arg_1779_);
lean_dec_ref(v___x_1768_);
v___y_1747_ = v___x_1763_;
goto v___jp_1746_;
}
else
{
lean_object* v___x_1789_; size_t v___x_1790_; size_t v___x_1791_; uint8_t v___x_1792_; 
v___x_1789_ = l_Lean_Expr_constLevels_x21(v___x_1768_);
lean_dec_ref(v___x_1768_);
v___x_1790_ = lean_ptr_addr(v_arg_1781_);
v___x_1791_ = lean_ptr_addr(v_arg_1784_);
v___x_1792_ = lean_usize_dec_eq(v___x_1790_, v___x_1791_);
if (v___x_1792_ == 0)
{
lean_object* v___x_1793_; 
lean_inc_ref(v_arg_1783_);
lean_inc_ref(v_arg_1780_);
v___x_1793_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_arg_1780_, v_arg_1783_, v___x_1788_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v___x_1763_, v_a_1718_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v_a_1794_; lean_object* v___x_1795_; 
v_a_1794_ = lean_ctor_get(v___x_1793_, 0);
lean_inc(v_a_1794_);
lean_dec_ref_known(v___x_1793_, 1);
lean_inc_ref(v_arg_1782_);
lean_inc_ref(v_arg_1779_);
v___x_1795_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_arg_1779_, v_arg_1782_, v___x_1788_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v___x_1763_, v_a_1718_);
lean_dec_ref_known(v___x_1763_, 3);
if (lean_obj_tag(v___x_1795_) == 0)
{
lean_object* v_a_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1806_; 
v_a_1796_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1806_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1798_ = v___x_1795_;
v_isShared_1799_ = v_isSharedCheck_1806_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_a_1796_);
lean_dec(v___x_1795_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1806_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1804_; 
v___x_1800_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqCongrProof___closed__6));
v___x_1801_ = l_Lean_mkConst(v___x_1800_, v___x_1789_);
v___x_1802_ = l_Lean_mkApp8(v___x_1801_, v_arg_1781_, v_arg_1784_, v_arg_1780_, v_arg_1779_, v_arg_1783_, v_arg_1782_, v_a_1794_, v_a_1796_);
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 0, v___x_1802_);
v___x_1804_ = v___x_1798_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v___x_1802_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
return v___x_1804_;
}
}
}
else
{
lean_dec(v_a_1794_);
lean_dec(v___x_1789_);
lean_dec_ref(v_arg_1784_);
lean_dec_ref(v_arg_1783_);
lean_dec_ref(v_arg_1782_);
lean_dec_ref(v_arg_1781_);
lean_dec_ref(v_arg_1780_);
lean_dec_ref(v_arg_1779_);
return v___x_1795_;
}
}
else
{
lean_dec(v___x_1789_);
lean_dec_ref(v_arg_1784_);
lean_dec_ref(v_arg_1783_);
lean_dec_ref(v_arg_1782_);
lean_dec_ref(v_arg_1781_);
lean_dec_ref(v_arg_1780_);
lean_dec_ref(v_arg_1779_);
lean_dec_ref_known(v___x_1763_, 3);
return v___x_1793_;
}
}
else
{
uint8_t v___x_1807_; lean_object* v___x_1808_; 
lean_dec_ref(v_arg_1784_);
v___x_1807_ = 0;
lean_inc_ref(v_arg_1783_);
lean_inc_ref(v_arg_1780_);
v___x_1808_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_arg_1780_, v_arg_1783_, v___x_1807_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v___x_1763_, v_a_1718_);
if (lean_obj_tag(v___x_1808_) == 0)
{
lean_object* v_a_1809_; lean_object* v___x_1810_; 
v_a_1809_ = lean_ctor_get(v___x_1808_, 0);
lean_inc(v_a_1809_);
lean_dec_ref_known(v___x_1808_, 1);
lean_inc_ref(v_arg_1782_);
lean_inc_ref(v_arg_1779_);
v___x_1810_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_arg_1779_, v_arg_1782_, v___x_1807_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v___x_1763_, v_a_1718_);
lean_dec_ref_known(v___x_1763_, 3);
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1821_; 
v_a_1811_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1813_ = v___x_1810_;
v_isShared_1814_ = v_isSharedCheck_1821_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v___x_1810_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1821_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1819_; 
v___x_1815_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqCongrProof___closed__8));
v___x_1816_ = l_Lean_mkConst(v___x_1815_, v___x_1789_);
v___x_1817_ = l_Lean_mkApp7(v___x_1816_, v_arg_1781_, v_arg_1780_, v_arg_1779_, v_arg_1783_, v_arg_1782_, v_a_1809_, v_a_1811_);
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 0, v___x_1817_);
v___x_1819_ = v___x_1813_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v___x_1817_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
}
else
{
lean_dec(v_a_1809_);
lean_dec(v___x_1789_);
lean_dec_ref(v_arg_1783_);
lean_dec_ref(v_arg_1782_);
lean_dec_ref(v_arg_1781_);
lean_dec_ref(v_arg_1780_);
lean_dec_ref(v_arg_1779_);
return v___x_1810_;
}
}
else
{
lean_dec(v___x_1789_);
lean_dec_ref(v_arg_1783_);
lean_dec_ref(v_arg_1782_);
lean_dec_ref(v_arg_1781_);
lean_dec_ref(v_arg_1780_);
lean_dec_ref(v_arg_1779_);
lean_dec_ref_known(v___x_1763_, 3);
return v___x_1808_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__4(void){
_start:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1836_ = lean_box(0);
v___x_1837_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__3));
v___x_1838_ = l_Lean_mkConst(v___x_1837_, v___x_1836_);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr(lean_object* v_lhs_1839_, lean_object* v_rhs_1840_, uint8_t v_heq_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_){
_start:
{
lean_object* v___x_1853_; lean_object* v_p_1854_; lean_object* v_hp_1855_; lean_object* v___x_1856_; lean_object* v_q_1857_; lean_object* v_hq_1858_; uint8_t v___x_1859_; lean_object* v___x_1860_; 
v___x_1853_ = l_Lean_Expr_appFn_x21(v_lhs_1839_);
v_p_1854_ = l_Lean_Expr_appArg_x21(v___x_1853_);
lean_dec_ref(v___x_1853_);
v_hp_1855_ = l_Lean_Expr_appArg_x21(v_lhs_1839_);
v___x_1856_ = l_Lean_Expr_appFn_x21(v_rhs_1840_);
v_q_1857_ = l_Lean_Expr_appArg_x21(v___x_1856_);
lean_dec_ref(v___x_1856_);
v_hq_1858_ = l_Lean_Expr_appArg_x21(v_rhs_1840_);
v___x_1859_ = 0;
lean_inc_ref(v_q_1857_);
lean_inc_ref(v_p_1854_);
v___x_1860_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_p_1854_, v_q_1857_, v___x_1859_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_);
if (lean_obj_tag(v___x_1860_) == 0)
{
lean_object* v_a_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v_a_1861_ = lean_ctor_get(v___x_1860_, 0);
lean_inc(v_a_1861_);
lean_dec_ref_known(v___x_1860_, 1);
v___x_1862_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__4, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___closed__4);
v___x_1863_ = l_Lean_mkApp5(v___x_1862_, v_p_1854_, v_q_1857_, v_a_1861_, v_hp_1855_, v_hq_1858_);
v___x_1864_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqOfHEqIfNeeded(v___x_1863_, v_heq_1841_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_);
return v___x_1864_;
}
else
{
lean_dec_ref(v_hq_1858_);
lean_dec_ref(v_q_1857_);
lean_dec_ref(v_hp_1855_);
lean_dec_ref(v_p_1854_);
return v___x_1860_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__5(void){
_start:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1866_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_1867_ = lean_unsigned_to_nat(38u);
v___x_1868_ = lean_unsigned_to_nat(260u);
v___x_1869_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__4));
v___x_1870_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_1871_ = l_mkPanicMessageWithDecl(v___x_1870_, v___x_1869_, v___x_1868_, v___x_1867_, v___x_1866_);
return v___x_1871_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__7(void){
_start:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1873_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__6));
v___x_1874_ = lean_unsigned_to_nat(6u);
v___x_1875_ = lean_unsigned_to_nat(270u);
v___x_1876_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__4));
v___x_1877_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_1878_ = l_mkPanicMessageWithDecl(v___x_1877_, v___x_1876_, v___x_1875_, v___x_1874_, v___x_1873_);
return v___x_1878_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__2(void){
_start:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1889_ = lean_box(0);
v___x_1890_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__1));
v___x_1891_ = l_Lean_mkConst(v___x_1890_, v___x_1889_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr(lean_object* v_lhs_1892_, lean_object* v_rhs_1893_, uint8_t v_heq_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_){
_start:
{
lean_object* v___x_1906_; lean_object* v_p_1907_; lean_object* v_hp_1908_; lean_object* v___x_1909_; lean_object* v_q_1910_; lean_object* v_hq_1911_; uint8_t v___x_1912_; lean_object* v___x_1913_; 
v___x_1906_ = l_Lean_Expr_appFn_x21(v_lhs_1892_);
v_p_1907_ = l_Lean_Expr_appArg_x21(v___x_1906_);
lean_dec_ref(v___x_1906_);
v_hp_1908_ = l_Lean_Expr_appArg_x21(v_lhs_1892_);
v___x_1909_ = l_Lean_Expr_appFn_x21(v_rhs_1893_);
v_q_1910_ = l_Lean_Expr_appArg_x21(v___x_1909_);
lean_dec_ref(v___x_1909_);
v_hq_1911_ = l_Lean_Expr_appArg_x21(v_rhs_1893_);
v___x_1912_ = 0;
lean_inc_ref(v_q_1910_);
lean_inc_ref(v_p_1907_);
v___x_1913_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_p_1907_, v_q_1910_, v___x_1912_, v_a_1895_, v_a_1896_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_);
if (lean_obj_tag(v___x_1913_) == 0)
{
lean_object* v_a_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
v_a_1914_ = lean_ctor_get(v___x_1913_, 0);
lean_inc(v_a_1914_);
lean_dec_ref_known(v___x_1913_, 1);
v___x_1915_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__2, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___closed__2);
v___x_1916_ = l_Lean_mkApp5(v___x_1915_, v_p_1907_, v_q_1910_, v_a_1914_, v_hp_1908_, v_hq_1911_);
v___x_1917_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqOfHEqIfNeeded(v___x_1916_, v_heq_1894_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_);
return v___x_1917_;
}
else
{
lean_dec_ref(v_hq_1911_);
lean_dec_ref(v_q_1910_);
lean_dec_ref(v_hp_1908_);
lean_dec_ref(v_p_1907_);
return v___x_1913_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__13(void){
_start:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1923_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_1924_ = lean_unsigned_to_nat(48u);
v___x_1925_ = lean_unsigned_to_nat(253u);
v___x_1926_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__4));
v___x_1927_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_1928_ = l_mkPanicMessageWithDecl(v___x_1927_, v___x_1926_, v___x_1925_, v___x_1924_, v___x_1923_);
return v___x_1928_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__14(void){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v___x_1929_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_1930_ = lean_unsigned_to_nat(47u);
v___x_1931_ = lean_unsigned_to_nat(252u);
v___x_1932_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__4));
v___x_1933_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_1934_ = l_mkPanicMessageWithDecl(v___x_1933_, v___x_1932_, v___x_1931_, v___x_1930_, v___x_1929_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof(lean_object* v_lhs_1935_, lean_object* v_rhs_1936_, uint8_t v_heq_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_, lean_object* v_a_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_){
_start:
{
lean_object* v___y_1950_; lean_object* v___y_1951_; lean_object* v___y_1952_; lean_object* v___y_1953_; lean_object* v___y_1954_; lean_object* v___y_1955_; lean_object* v___y_1984_; lean_object* v___y_1985_; lean_object* v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___y_2018_; lean_object* v___y_2019_; lean_object* v___y_2020_; lean_object* v___y_2035_; lean_object* v___y_2036_; lean_object* v___y_2037_; lean_object* v___y_2047_; lean_object* v___y_2048_; lean_object* v___y_2049_; 
if (lean_obj_tag(v_lhs_1935_) == 11)
{
lean_object* v_typeName_2107_; 
v_typeName_2107_ = lean_ctor_get(v_lhs_1935_, 0);
if (lean_obj_tag(v_typeName_2107_) == 1)
{
lean_object* v_pre_2108_; 
v_pre_2108_ = lean_ctor_get(v_typeName_2107_, 0);
if (lean_obj_tag(v_pre_2108_) == 0)
{
lean_object* v_idx_2109_; lean_object* v_str_2110_; lean_object* v___x_2111_; uint8_t v___x_2112_; 
v_idx_2109_ = lean_ctor_get(v_lhs_1935_, 1);
v_str_2110_ = lean_ctor_get(v_typeName_2107_, 1);
v___x_2111_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__10));
v___x_2112_ = lean_string_dec_eq(v_str_2110_, v___x_2111_);
if (v___x_2112_ == 0)
{
goto v___jp_2056_;
}
else
{
lean_object* v___x_2113_; uint8_t v___x_2114_; 
v___x_2113_ = lean_unsigned_to_nat(0u);
v___x_2114_ = lean_nat_dec_eq(v_idx_2109_, v___x_2113_);
if (v___x_2114_ == 0)
{
goto v___jp_2056_;
}
else
{
lean_object* v___x_2115_; 
v___x_2115_ = l_Lean_Meta_getBoolDecision_x3f(v_lhs_1935_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v_a_2116_; 
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
lean_inc(v_a_2116_);
lean_dec_ref_known(v___x_2115_, 1);
if (lean_obj_tag(v_a_2116_) == 1)
{
lean_object* v_val_2117_; lean_object* v_fst_2118_; lean_object* v_snd_2119_; lean_object* v___x_2120_; 
v_val_2117_ = lean_ctor_get(v_a_2116_, 0);
lean_inc(v_val_2117_);
lean_dec_ref_known(v_a_2116_, 1);
v_fst_2118_ = lean_ctor_get(v_val_2117_, 0);
lean_inc(v_fst_2118_);
v_snd_2119_ = lean_ctor_get(v_val_2117_, 1);
lean_inc(v_snd_2119_);
lean_dec(v_val_2117_);
v___x_2120_ = l_Lean_Meta_getBoolDecision_x3f(v_rhs_1936_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_2120_) == 0)
{
lean_object* v_a_2121_; 
v_a_2121_ = lean_ctor_get(v___x_2120_, 0);
lean_inc(v_a_2121_);
lean_dec_ref_known(v___x_2120_, 1);
if (lean_obj_tag(v_a_2121_) == 1)
{
lean_object* v_val_2122_; lean_object* v_fst_2123_; lean_object* v_snd_2124_; lean_object* v___x_2125_; 
v_val_2122_ = lean_ctor_get(v_a_2121_, 0);
lean_inc(v_val_2122_);
lean_dec_ref_known(v_a_2121_, 1);
v_fst_2123_ = lean_ctor_get(v_val_2122_, 0);
lean_inc(v_fst_2123_);
v_snd_2124_ = lean_ctor_get(v_val_2122_, 1);
lean_inc(v_snd_2124_);
lean_dec(v_val_2122_);
v___x_2125_ = l_Lean_Meta_Sym_shareCommon(v_fst_2118_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_2125_) == 0)
{
lean_object* v_a_2126_; lean_object* v___x_2127_; 
v_a_2126_ = lean_ctor_get(v___x_2125_, 0);
lean_inc(v_a_2126_);
lean_dec_ref_known(v___x_2125_, 1);
v___x_2127_ = l_Lean_Meta_Sym_shareCommon(v_fst_2123_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_2127_) == 0)
{
lean_object* v_a_2128_; uint8_t v___x_2129_; lean_object* v___x_2130_; 
v_a_2128_ = lean_ctor_get(v___x_2127_, 0);
lean_inc_n(v_a_2128_, 2);
lean_dec_ref_known(v___x_2127_, 1);
v___x_2129_ = 0;
lean_inc(v_a_2126_);
v___x_2130_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_a_2126_, v_a_2128_, v___x_2129_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v_a_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
lean_inc(v_a_2131_);
lean_dec_ref_known(v___x_2130_, 1);
v___x_2132_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__12));
v___x_2133_ = lean_box(0);
v___x_2134_ = l_Lean_Meta_mkDecisionProjectionProof(v___x_2132_, v___x_2133_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2144_; 
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2137_ = v___x_2134_;
v_isShared_2138_ = v_isSharedCheck_2144_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_a_2135_);
lean_dec(v___x_2134_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2144_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
lean_object* v___x_2139_; 
v___x_2139_ = l_Lean_mkApp5(v_a_2135_, v_a_2126_, v_a_2128_, v_a_2131_, v_snd_2119_, v_snd_2124_);
if (v_heq_1937_ == 0)
{
lean_object* v___x_2141_; 
if (v_isShared_2138_ == 0)
{
lean_ctor_set(v___x_2137_, 0, v___x_2139_);
v___x_2141_ = v___x_2137_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v___x_2139_);
v___x_2141_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
return v___x_2141_;
}
}
else
{
lean_object* v___x_2143_; 
lean_del_object(v___x_2137_);
v___x_2143_ = l_Lean_Meta_mkHEqOfEq(v___x_2139_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
return v___x_2143_;
}
}
}
else
{
lean_dec(v_a_2131_);
lean_dec(v_a_2128_);
lean_dec(v_a_2126_);
lean_dec(v_snd_2124_);
lean_dec(v_snd_2119_);
return v___x_2134_;
}
}
else
{
lean_dec(v_a_2128_);
lean_dec(v_a_2126_);
lean_dec(v_snd_2124_);
lean_dec(v_snd_2119_);
return v___x_2130_;
}
}
else
{
lean_dec(v_a_2126_);
lean_dec(v_snd_2124_);
lean_dec(v_snd_2119_);
return v___x_2127_;
}
}
else
{
lean_dec(v_snd_2124_);
lean_dec(v_fst_2123_);
lean_dec(v_snd_2119_);
return v___x_2125_;
}
}
else
{
lean_object* v___x_2145_; lean_object* v___x_2146_; 
lean_dec(v_a_2121_);
lean_dec(v_snd_2119_);
lean_dec(v_fst_2118_);
v___x_2145_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__13, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__13);
v___x_2146_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_2145_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
return v___x_2146_;
}
}
else
{
lean_object* v_a_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2154_; 
lean_dec(v_snd_2119_);
lean_dec(v_fst_2118_);
v_a_2147_ = lean_ctor_get(v___x_2120_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2120_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2149_ = v___x_2120_;
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_a_2147_);
lean_dec(v___x_2120_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2152_; 
if (v_isShared_2150_ == 0)
{
v___x_2152_ = v___x_2149_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_a_2147_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
}
else
{
lean_object* v___x_2155_; lean_object* v___x_2156_; 
lean_dec(v_a_2116_);
lean_dec_ref(v_rhs_1936_);
v___x_2155_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__14, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__14);
v___x_2156_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_2155_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
return v___x_2156_;
}
}
else
{
lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2164_; 
lean_dec_ref(v_rhs_1936_);
v_a_2157_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2159_ = v___x_2115_;
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_dec(v___x_2115_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2162_; 
if (v_isShared_2160_ == 0)
{
v___x_2162_ = v___x_2159_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v_a_2157_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
}
}
}
}
}
}
else
{
goto v___jp_2056_;
}
}
else
{
goto v___jp_2056_;
}
}
else
{
goto v___jp_2056_;
}
v___jp_1949_:
{
if (lean_obj_tag(v___y_1955_) == 0)
{
lean_object* v_a_1956_; uint8_t v___x_1957_; lean_object* v___x_1958_; 
v_a_1956_ = lean_ctor_get(v___y_1955_, 0);
lean_inc(v_a_1956_);
lean_dec_ref_known(v___y_1955_, 1);
v___x_1957_ = 0;
lean_inc_ref(v___y_1954_);
lean_inc_ref(v___y_1951_);
v___x_1958_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v___y_1951_, v___y_1954_, v___x_1957_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v_a_1959_; lean_object* v___x_1960_; 
v_a_1959_ = lean_ctor_get(v___x_1958_, 0);
lean_inc(v_a_1959_);
lean_dec_ref_known(v___x_1958_, 1);
lean_inc_ref(v___y_1953_);
lean_inc_ref(v___y_1952_);
v___x_1960_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v___y_1952_, v___y_1953_, v___x_1957_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_1960_) == 0)
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1974_; 
v_a_1961_ = lean_ctor_get(v___x_1960_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1960_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1963_ = v___x_1960_;
v_isShared_1964_ = v_isSharedCheck_1974_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1960_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1974_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1972_; 
v___x_1965_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__1));
v___x_1966_ = lean_box(0);
v___x_1967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1967_, 0, v_a_1956_);
lean_ctor_set(v___x_1967_, 1, v___x_1966_);
v___x_1968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1968_, 0, v___y_1950_);
lean_ctor_set(v___x_1968_, 1, v___x_1967_);
v___x_1969_ = l_Lean_mkConst(v___x_1965_, v___x_1968_);
v___x_1970_ = l_Lean_mkApp6(v___x_1969_, v___y_1951_, v___y_1954_, v___y_1952_, v___y_1953_, v_a_1959_, v_a_1961_);
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 0, v___x_1970_);
v___x_1972_ = v___x_1963_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v___x_1970_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
else
{
lean_dec(v_a_1959_);
lean_dec(v_a_1956_);
lean_dec_ref(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec_ref(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_dec(v___y_1950_);
return v___x_1960_;
}
}
else
{
lean_dec(v_a_1956_);
lean_dec_ref(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec_ref(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_dec(v___y_1950_);
return v___x_1958_;
}
}
else
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1982_; 
lean_dec_ref(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec_ref(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_dec(v___y_1950_);
v_a_1975_ = lean_ctor_get(v___y_1955_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___y_1955_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1977_ = v___y_1955_;
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v___y_1955_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1980_; 
if (v_isShared_1978_ == 0)
{
v___x_1980_ = v___x_1977_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_a_1975_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
v___jp_1983_:
{
if (lean_obj_tag(v___y_1988_) == 0)
{
lean_object* v_a_1989_; lean_object* v___x_1990_; uint8_t v_transparency_1991_; uint8_t v___x_1992_; uint8_t v___x_1993_; 
v_a_1989_ = lean_ctor_get(v___y_1988_, 0);
lean_inc(v_a_1989_);
lean_dec_ref_known(v___y_1988_, 1);
v___x_1990_ = l_Lean_Meta_Context_config(v_a_1944_);
v_transparency_1991_ = lean_ctor_get_uint8(v___x_1990_, 9);
lean_dec_ref(v___x_1990_);
v___x_1992_ = 1;
v___x_1993_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1991_, v___x_1992_);
if (v___x_1993_ == 0)
{
lean_object* v_keyedConfig_1994_; uint8_t v_trackZetaDelta_1995_; lean_object* v_zetaDeltaSet_1996_; lean_object* v_lctx_1997_; lean_object* v_localInstances_1998_; lean_object* v_defEqCtx_x3f_1999_; lean_object* v_synthPendingDepth_2000_; lean_object* v_customCanUnfoldPredicate_x3f_2001_; uint8_t v_univApprox_2002_; uint8_t v_inTypeClassResolution_2003_; uint8_t v_cacheInferType_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; 
v_keyedConfig_1994_ = lean_ctor_get(v_a_1944_, 0);
v_trackZetaDelta_1995_ = lean_ctor_get_uint8(v_a_1944_, sizeof(void*)*7);
v_zetaDeltaSet_1996_ = lean_ctor_get(v_a_1944_, 1);
v_lctx_1997_ = lean_ctor_get(v_a_1944_, 2);
v_localInstances_1998_ = lean_ctor_get(v_a_1944_, 3);
v_defEqCtx_x3f_1999_ = lean_ctor_get(v_a_1944_, 4);
v_synthPendingDepth_2000_ = lean_ctor_get(v_a_1944_, 5);
v_customCanUnfoldPredicate_x3f_2001_ = lean_ctor_get(v_a_1944_, 6);
v_univApprox_2002_ = lean_ctor_get_uint8(v_a_1944_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2003_ = lean_ctor_get_uint8(v_a_1944_, sizeof(void*)*7 + 2);
v_cacheInferType_2004_ = lean_ctor_get_uint8(v_a_1944_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1994_);
v___x_2005_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1992_, v_keyedConfig_1994_);
lean_inc(v_customCanUnfoldPredicate_x3f_2001_);
lean_inc(v_synthPendingDepth_2000_);
lean_inc(v_defEqCtx_x3f_1999_);
lean_inc_ref(v_localInstances_1998_);
lean_inc_ref(v_lctx_1997_);
lean_inc(v_zetaDeltaSet_1996_);
v___x_2006_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2006_, 0, v___x_2005_);
lean_ctor_set(v___x_2006_, 1, v_zetaDeltaSet_1996_);
lean_ctor_set(v___x_2006_, 2, v_lctx_1997_);
lean_ctor_set(v___x_2006_, 3, v_localInstances_1998_);
lean_ctor_set(v___x_2006_, 4, v_defEqCtx_x3f_1999_);
lean_ctor_set(v___x_2006_, 5, v_synthPendingDepth_2000_);
lean_ctor_set(v___x_2006_, 6, v_customCanUnfoldPredicate_x3f_2001_);
lean_ctor_set_uint8(v___x_2006_, sizeof(void*)*7, v_trackZetaDelta_1995_);
lean_ctor_set_uint8(v___x_2006_, sizeof(void*)*7 + 1, v_univApprox_2002_);
lean_ctor_set_uint8(v___x_2006_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2003_);
lean_ctor_set_uint8(v___x_2006_, sizeof(void*)*7 + 3, v_cacheInferType_2004_);
lean_inc_ref(v___y_1985_);
v___x_2007_ = l_Lean_Meta_getLevel(v___y_1985_, v___x_2006_, v_a_1945_, v_a_1946_, v_a_1947_);
lean_dec_ref_known(v___x_2006_, 7);
v___y_1950_ = v_a_1989_;
v___y_1951_ = v___y_1984_;
v___y_1952_ = v___y_1985_;
v___y_1953_ = v___y_1987_;
v___y_1954_ = v___y_1986_;
v___y_1955_ = v___x_2007_;
goto v___jp_1949_;
}
else
{
lean_object* v___x_2008_; 
lean_inc_ref(v___y_1985_);
v___x_2008_ = l_Lean_Meta_getLevel(v___y_1985_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
v___y_1950_ = v_a_1989_;
v___y_1951_ = v___y_1984_;
v___y_1952_ = v___y_1985_;
v___y_1953_ = v___y_1987_;
v___y_1954_ = v___y_1986_;
v___y_1955_ = v___x_2008_;
goto v___jp_1949_;
}
}
else
{
lean_object* v_a_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2016_; 
lean_dec_ref(v___y_1987_);
lean_dec_ref(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec_ref(v___y_1984_);
v_a_2009_ = lean_ctor_get(v___y_1988_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___y_1988_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_2011_ = v___y_1988_;
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_a_2009_);
lean_dec(v___y_1988_);
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
v___jp_2017_:
{
lean_object* v___x_2021_; 
lean_inc_ref(v_rhs_1936_);
lean_inc_ref(v_lhs_1935_);
v___x_2021_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isCongrDefaultProofTarget(v_lhs_1935_, v_rhs_1936_, v___y_2019_, v___y_2020_, v___y_2018_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
lean_dec_ref(v___y_2020_);
if (lean_obj_tag(v___x_2021_) == 0)
{
lean_object* v_a_2022_; uint8_t v___x_2023_; 
v_a_2022_ = lean_ctor_get(v___x_2021_, 0);
lean_inc(v_a_2022_);
lean_dec_ref_known(v___x_2021_, 1);
v___x_2023_ = lean_unbox(v_a_2022_);
lean_dec(v_a_2022_);
if (v___x_2023_ == 0)
{
lean_object* v___x_2024_; 
v___x_2024_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof(v_lhs_1935_, v_rhs_1936_, v_heq_1937_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
return v___x_2024_;
}
else
{
lean_object* v___x_2025_; 
v___x_2025_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof(v_lhs_1935_, v_rhs_1936_, v_heq_1937_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
lean_dec_ref(v_rhs_1936_);
lean_dec_ref(v_lhs_1935_);
return v___x_2025_;
}
}
else
{
lean_object* v_a_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2033_; 
lean_dec_ref(v_rhs_1936_);
lean_dec_ref(v_lhs_1935_);
v_a_2026_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2028_ = v___x_2021_;
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_a_2026_);
lean_dec(v___x_2021_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2031_; 
if (v_isShared_2029_ == 0)
{
v___x_2031_ = v___x_2028_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v_a_2026_);
v___x_2031_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
return v___x_2031_;
}
}
}
}
v___jp_2034_:
{
lean_object* v___x_2038_; uint8_t v___x_2039_; 
v___x_2038_ = lean_unsigned_to_nat(3u);
v___x_2039_ = lean_nat_dec_eq(v___y_2035_, v___x_2038_);
if (v___x_2039_ == 0)
{
v___y_2018_ = v___y_2035_;
v___y_2019_ = v___y_2036_;
v___y_2020_ = v___y_2037_;
goto v___jp_2017_;
}
else
{
lean_object* v___x_2040_; uint8_t v___x_2041_; 
v___x_2040_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_isEqProof___closed__1));
v___x_2041_ = l_Lean_Expr_isConstOf(v___y_2036_, v___x_2040_);
if (v___x_2041_ == 0)
{
v___y_2018_ = v___y_2035_;
v___y_2019_ = v___y_2036_;
v___y_2020_ = v___y_2037_;
goto v___jp_2017_;
}
else
{
uint8_t v___x_2042_; 
v___x_2042_ = l_Lean_Expr_isConstOf(v___y_2037_, v___x_2040_);
if (v___x_2042_ == 0)
{
v___y_2018_ = v___y_2035_;
v___y_2019_ = v___y_2036_;
v___y_2020_ = v___y_2037_;
goto v___jp_2017_;
}
else
{
lean_object* v___x_2043_; 
lean_dec_ref(v___y_2037_);
lean_dec_ref(v___y_2036_);
lean_dec(v___y_2035_);
v___x_2043_ = l_Lean_Meta_Grind_mkEqCongrProof(v_lhs_1935_, v_rhs_1936_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
lean_dec_ref(v_rhs_1936_);
lean_dec_ref(v_lhs_1935_);
if (lean_obj_tag(v___x_2043_) == 0)
{
if (v_heq_1937_ == 0)
{
return v___x_2043_;
}
else
{
lean_object* v_a_2044_; lean_object* v___x_2045_; 
v_a_2044_ = lean_ctor_get(v___x_2043_, 0);
lean_inc(v_a_2044_);
lean_dec_ref_known(v___x_2043_, 1);
v___x_2045_ = l_Lean_Meta_mkHEqOfEq(v_a_2044_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
return v___x_2045_;
}
}
else
{
return v___x_2043_;
}
}
}
}
}
v___jp_2046_:
{
lean_object* v___x_2050_; uint8_t v___x_2051_; 
v___x_2050_ = lean_unsigned_to_nat(2u);
v___x_2051_ = lean_nat_dec_eq(v___y_2047_, v___x_2050_);
if (v___x_2051_ == 0)
{
v___y_2035_ = v___y_2047_;
v___y_2036_ = v___y_2048_;
v___y_2037_ = v___y_2049_;
goto v___jp_2034_;
}
else
{
lean_object* v___x_2052_; uint8_t v___x_2053_; 
v___x_2052_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__3));
v___x_2053_ = l_Lean_Expr_isConstOf(v___y_2048_, v___x_2052_);
if (v___x_2053_ == 0)
{
v___y_2035_ = v___y_2047_;
v___y_2036_ = v___y_2048_;
v___y_2037_ = v___y_2049_;
goto v___jp_2034_;
}
else
{
uint8_t v___x_2054_; 
v___x_2054_ = l_Lean_Expr_isConstOf(v___y_2049_, v___x_2052_);
if (v___x_2054_ == 0)
{
v___y_2035_ = v___y_2047_;
v___y_2036_ = v___y_2048_;
v___y_2037_ = v___y_2049_;
goto v___jp_2034_;
}
else
{
lean_object* v___x_2055_; 
lean_dec_ref(v___y_2049_);
lean_dec_ref(v___y_2048_);
lean_dec(v___y_2047_);
v___x_2055_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr(v_lhs_1935_, v_rhs_1936_, v_heq_1937_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
lean_dec_ref(v_rhs_1936_);
lean_dec_ref(v_lhs_1935_);
return v___x_2055_;
}
}
}
}
v___jp_2056_:
{
if (lean_obj_tag(v_lhs_1935_) == 7)
{
if (lean_obj_tag(v_rhs_1936_) == 7)
{
lean_object* v_binderType_2057_; lean_object* v_body_2058_; lean_object* v_binderType_2059_; lean_object* v_body_2060_; lean_object* v___x_2061_; uint8_t v_transparency_2062_; uint8_t v___x_2063_; uint8_t v___x_2064_; 
v_binderType_2057_ = lean_ctor_get(v_lhs_1935_, 1);
lean_inc_ref(v_binderType_2057_);
v_body_2058_ = lean_ctor_get(v_lhs_1935_, 2);
lean_inc_ref(v_body_2058_);
lean_dec_ref_known(v_lhs_1935_, 3);
v_binderType_2059_ = lean_ctor_get(v_rhs_1936_, 1);
lean_inc_ref(v_binderType_2059_);
v_body_2060_ = lean_ctor_get(v_rhs_1936_, 2);
lean_inc_ref(v_body_2060_);
lean_dec_ref_known(v_rhs_1936_, 3);
v___x_2061_ = l_Lean_Meta_Context_config(v_a_1944_);
v_transparency_2062_ = lean_ctor_get_uint8(v___x_2061_, 9);
lean_dec_ref(v___x_2061_);
v___x_2063_ = 1;
v___x_2064_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2062_, v___x_2063_);
if (v___x_2064_ == 0)
{
lean_object* v_keyedConfig_2065_; uint8_t v_trackZetaDelta_2066_; lean_object* v_zetaDeltaSet_2067_; lean_object* v_lctx_2068_; lean_object* v_localInstances_2069_; lean_object* v_defEqCtx_x3f_2070_; lean_object* v_synthPendingDepth_2071_; lean_object* v_customCanUnfoldPredicate_x3f_2072_; uint8_t v_univApprox_2073_; uint8_t v_inTypeClassResolution_2074_; uint8_t v_cacheInferType_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
v_keyedConfig_2065_ = lean_ctor_get(v_a_1944_, 0);
v_trackZetaDelta_2066_ = lean_ctor_get_uint8(v_a_1944_, sizeof(void*)*7);
v_zetaDeltaSet_2067_ = lean_ctor_get(v_a_1944_, 1);
v_lctx_2068_ = lean_ctor_get(v_a_1944_, 2);
v_localInstances_2069_ = lean_ctor_get(v_a_1944_, 3);
v_defEqCtx_x3f_2070_ = lean_ctor_get(v_a_1944_, 4);
v_synthPendingDepth_2071_ = lean_ctor_get(v_a_1944_, 5);
v_customCanUnfoldPredicate_x3f_2072_ = lean_ctor_get(v_a_1944_, 6);
v_univApprox_2073_ = lean_ctor_get_uint8(v_a_1944_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2074_ = lean_ctor_get_uint8(v_a_1944_, sizeof(void*)*7 + 2);
v_cacheInferType_2075_ = lean_ctor_get_uint8(v_a_1944_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2065_);
v___x_2076_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2063_, v_keyedConfig_2065_);
lean_inc(v_customCanUnfoldPredicate_x3f_2072_);
lean_inc(v_synthPendingDepth_2071_);
lean_inc(v_defEqCtx_x3f_2070_);
lean_inc_ref(v_localInstances_2069_);
lean_inc_ref(v_lctx_2068_);
lean_inc(v_zetaDeltaSet_2067_);
v___x_2077_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2077_, 0, v___x_2076_);
lean_ctor_set(v___x_2077_, 1, v_zetaDeltaSet_2067_);
lean_ctor_set(v___x_2077_, 2, v_lctx_2068_);
lean_ctor_set(v___x_2077_, 3, v_localInstances_2069_);
lean_ctor_set(v___x_2077_, 4, v_defEqCtx_x3f_2070_);
lean_ctor_set(v___x_2077_, 5, v_synthPendingDepth_2071_);
lean_ctor_set(v___x_2077_, 6, v_customCanUnfoldPredicate_x3f_2072_);
lean_ctor_set_uint8(v___x_2077_, sizeof(void*)*7, v_trackZetaDelta_2066_);
lean_ctor_set_uint8(v___x_2077_, sizeof(void*)*7 + 1, v_univApprox_2073_);
lean_ctor_set_uint8(v___x_2077_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2074_);
lean_ctor_set_uint8(v___x_2077_, sizeof(void*)*7 + 3, v_cacheInferType_2075_);
lean_inc_ref(v_binderType_2057_);
v___x_2078_ = l_Lean_Meta_getLevel(v_binderType_2057_, v___x_2077_, v_a_1945_, v_a_1946_, v_a_1947_);
lean_dec_ref_known(v___x_2077_, 7);
v___y_1984_ = v_binderType_2057_;
v___y_1985_ = v_body_2058_;
v___y_1986_ = v_binderType_2059_;
v___y_1987_ = v_body_2060_;
v___y_1988_ = v___x_2078_;
goto v___jp_1983_;
}
else
{
lean_object* v___x_2079_; 
lean_inc_ref(v_binderType_2057_);
v___x_2079_ = l_Lean_Meta_getLevel(v_binderType_2057_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
v___y_1984_ = v_binderType_2057_;
v___y_1985_ = v_body_2058_;
v___y_1986_ = v_binderType_2059_;
v___y_1987_ = v_body_2060_;
v___y_1988_ = v___x_2079_;
goto v___jp_1983_;
}
}
else
{
lean_object* v___x_2080_; lean_object* v___x_2081_; 
lean_dec_ref_known(v_lhs_1935_, 3);
lean_dec_ref(v_rhs_1936_);
v___x_2080_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__5, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__5);
v___x_2081_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_2080_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
return v___x_2081_;
}
}
else
{
lean_object* v___x_2082_; 
lean_inc_ref(v_lhs_1935_);
v___x_2082_ = l_Lean_Meta_Grind_useFunCC___redArg(v_lhs_1935_, v_a_1938_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
if (lean_obj_tag(v___x_2082_) == 0)
{
lean_object* v_a_2083_; uint8_t v___x_2084_; 
v_a_2083_ = lean_ctor_get(v___x_2082_, 0);
lean_inc(v_a_2083_);
lean_dec_ref_known(v___x_2082_, 1);
v___x_2084_ = lean_unbox(v_a_2083_);
lean_dec(v_a_2083_);
if (v___x_2084_ == 0)
{
lean_object* v___x_2085_; lean_object* v___x_2086_; uint8_t v___x_2087_; 
v___x_2085_ = l_Lean_Expr_getAppNumArgs(v_lhs_1935_);
v___x_2086_ = l_Lean_Expr_getAppNumArgs(v_rhs_1936_);
v___x_2087_ = lean_nat_dec_eq(v___x_2086_, v___x_2085_);
lean_dec(v___x_2086_);
if (v___x_2087_ == 0)
{
lean_object* v___x_2088_; lean_object* v___x_2089_; 
lean_dec(v___x_2085_);
lean_dec_ref(v_rhs_1936_);
lean_dec_ref(v_lhs_1935_);
v___x_2088_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__7, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__7);
v___x_2089_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_2088_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
return v___x_2089_;
}
else
{
lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; uint8_t v___x_2093_; 
v___x_2090_ = l_Lean_Expr_getAppFn(v_lhs_1935_);
v___x_2091_ = l_Lean_Expr_getAppFn(v_rhs_1936_);
v___x_2092_ = lean_unsigned_to_nat(2u);
v___x_2093_ = lean_nat_dec_eq(v___x_2085_, v___x_2092_);
if (v___x_2093_ == 0)
{
v___y_2047_ = v___x_2085_;
v___y_2048_ = v___x_2090_;
v___y_2049_ = v___x_2091_;
goto v___jp_2046_;
}
else
{
lean_object* v___x_2094_; uint8_t v___x_2095_; 
v___x_2094_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___closed__9));
v___x_2095_ = l_Lean_Expr_isConstOf(v___x_2090_, v___x_2094_);
if (v___x_2095_ == 0)
{
v___y_2047_ = v___x_2085_;
v___y_2048_ = v___x_2090_;
v___y_2049_ = v___x_2091_;
goto v___jp_2046_;
}
else
{
uint8_t v___x_2096_; 
v___x_2096_ = l_Lean_Expr_isConstOf(v___x_2091_, v___x_2094_);
if (v___x_2096_ == 0)
{
v___y_2047_ = v___x_2085_;
v___y_2048_ = v___x_2090_;
v___y_2049_ = v___x_2091_;
goto v___jp_2046_;
}
else
{
lean_object* v___x_2097_; 
lean_dec_ref(v___x_2091_);
lean_dec_ref(v___x_2090_);
lean_dec(v___x_2085_);
v___x_2097_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr(v_lhs_1935_, v_rhs_1936_, v_heq_1937_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
lean_dec_ref(v_rhs_1936_);
lean_dec_ref(v_lhs_1935_);
return v___x_2097_;
}
}
}
}
}
else
{
lean_object* v___x_2098_; 
v___x_2098_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC(v_lhs_1935_, v_rhs_1936_, v_heq_1937_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
return v___x_2098_;
}
}
else
{
lean_object* v_a_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2106_; 
lean_dec_ref(v_rhs_1936_);
lean_dec_ref(v_lhs_1935_);
v_a_2099_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2101_ = v___x_2082_;
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_a_2099_);
lean_dec(v___x_2082_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
lean_object* v___x_2104_; 
if (v_isShared_2102_ == 0)
{
v___x_2104_ = v___x_2101_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_a_2099_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
return v___x_2104_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_realizeEqProof(lean_object* v_lhs_2165_, lean_object* v_rhs_2166_, lean_object* v_h_2167_, uint8_t v_flipped_2168_, uint8_t v_heq_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_, lean_object* v_a_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_){
_start:
{
lean_object* v___x_2181_; uint8_t v___x_2182_; 
v___x_2181_ = l_Lean_Meta_Grind_congrPlaceholderProof;
v___x_2182_ = lean_expr_eqv(v_h_2167_, v___x_2181_);
if (v___x_2182_ == 0)
{
lean_object* v___x_2183_; uint8_t v___x_2184_; 
v___x_2183_ = l_Lean_Meta_Grind_eqCongrSymmPlaceholderProof;
v___x_2184_ = lean_expr_eqv(v_h_2167_, v___x_2183_);
if (v___x_2184_ == 0)
{
lean_object* v___x_2185_; 
lean_dec_ref(v_rhs_2166_);
lean_dec_ref(v_lhs_2165_);
v___x_2185_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_flipProof(v_h_2167_, v_flipped_2168_, v_heq_2169_, v_a_2176_, v_a_2177_, v_a_2178_, v_a_2179_);
return v___x_2185_;
}
else
{
lean_object* v___x_2186_; 
lean_dec_ref(v_h_2167_);
v___x_2186_ = l_Lean_Meta_Grind_mkEqCongrSymmProof(v_lhs_2165_, v_rhs_2166_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_, v_a_2177_, v_a_2178_, v_a_2179_);
lean_dec_ref(v_rhs_2166_);
lean_dec_ref(v_lhs_2165_);
if (lean_obj_tag(v___x_2186_) == 0)
{
if (v_heq_2169_ == 0)
{
return v___x_2186_;
}
else
{
lean_object* v_a_2187_; lean_object* v___x_2188_; 
v_a_2187_ = lean_ctor_get(v___x_2186_, 0);
lean_inc(v_a_2187_);
lean_dec_ref_known(v___x_2186_, 1);
v___x_2188_ = l_Lean_Meta_mkHEqOfEq(v_a_2187_, v_a_2176_, v_a_2177_, v_a_2178_, v_a_2179_);
return v___x_2188_;
}
}
else
{
return v___x_2186_;
}
}
}
else
{
lean_object* v___x_2189_; 
lean_dec_ref(v_h_2167_);
v___x_2189_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof(v_lhs_2165_, v_rhs_2166_, v_heq_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_, v_a_2177_, v_a_2178_, v_a_2179_);
return v___x_2189_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__1(void){
_start:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___x_2191_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_2192_ = lean_unsigned_to_nat(29u);
v___x_2193_ = lean_unsigned_to_nat(298u);
v___x_2194_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__0));
v___x_2195_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_2196_ = l_mkPanicMessageWithDecl(v___x_2195_, v___x_2194_, v___x_2193_, v___x_2192_, v___x_2191_);
return v___x_2196_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__2(void){
_start:
{
lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2197_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_2198_ = lean_unsigned_to_nat(35u);
v___x_2199_ = lean_unsigned_to_nat(297u);
v___x_2200_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__0));
v___x_2201_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_2202_ = l_mkPanicMessageWithDecl(v___x_2201_, v___x_2200_, v___x_2199_, v___x_2198_, v___x_2197_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo(lean_object* v_lhs_2203_, lean_object* v_common_2204_, lean_object* v_acc_2205_, uint8_t v_heq_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_, lean_object* v_a_2214_, lean_object* v_a_2215_, lean_object* v_a_2216_){
_start:
{
size_t v___x_2218_; size_t v___x_2219_; uint8_t v___x_2220_; 
v___x_2218_ = lean_ptr_addr(v_lhs_2203_);
v___x_2219_ = lean_ptr_addr(v_common_2204_);
v___x_2220_ = lean_usize_dec_eq(v___x_2218_, v___x_2219_);
if (v___x_2220_ == 0)
{
lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2221_ = lean_st_ref_get(v_a_2207_);
lean_inc_ref(v_lhs_2203_);
v___x_2222_ = l_Lean_Meta_Grind_Goal_getENode(v___x_2221_, v_lhs_2203_, v_a_2213_, v_a_2214_, v_a_2215_, v_a_2216_);
lean_dec(v___x_2221_);
if (lean_obj_tag(v___x_2222_) == 0)
{
lean_object* v_a_2223_; lean_object* v_target_x3f_2224_; 
v_a_2223_ = lean_ctor_get(v___x_2222_, 0);
lean_inc(v_a_2223_);
lean_dec_ref_known(v___x_2222_, 1);
v_target_x3f_2224_ = lean_ctor_get(v_a_2223_, 4);
lean_inc(v_target_x3f_2224_);
if (lean_obj_tag(v_target_x3f_2224_) == 1)
{
lean_object* v_proof_x3f_2225_; 
v_proof_x3f_2225_ = lean_ctor_get(v_a_2223_, 5);
lean_inc(v_proof_x3f_2225_);
if (lean_obj_tag(v_proof_x3f_2225_) == 1)
{
uint8_t v_flipped_2226_; lean_object* v_val_2227_; lean_object* v_val_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2256_; 
v_flipped_2226_ = lean_ctor_get_uint8(v_a_2223_, sizeof(void*)*12);
lean_dec(v_a_2223_);
v_val_2227_ = lean_ctor_get(v_target_x3f_2224_, 0);
lean_inc(v_val_2227_);
lean_dec_ref_known(v_target_x3f_2224_, 1);
v_val_2228_ = lean_ctor_get(v_proof_x3f_2225_, 0);
v_isSharedCheck_2256_ = !lean_is_exclusive(v_proof_x3f_2225_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2230_ = v_proof_x3f_2225_;
v_isShared_2231_ = v_isSharedCheck_2256_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_val_2228_);
lean_dec(v_proof_x3f_2225_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2256_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2232_; 
lean_inc(v_val_2227_);
v___x_2232_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_realizeEqProof(v_lhs_2203_, v_val_2227_, v_val_2228_, v_flipped_2226_, v_heq_2206_, v_a_2207_, v_a_2208_, v_a_2209_, v_a_2210_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_, v_a_2215_, v_a_2216_);
if (lean_obj_tag(v___x_2232_) == 0)
{
lean_object* v_a_2233_; lean_object* v___x_2234_; 
v_a_2233_ = lean_ctor_get(v___x_2232_, 0);
lean_inc(v_a_2233_);
lean_dec_ref_known(v___x_2232_, 1);
v___x_2234_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkTrans_x27(v_acc_2205_, v_a_2233_, v_heq_2206_, v_a_2213_, v_a_2214_, v_a_2215_, v_a_2216_);
if (lean_obj_tag(v___x_2234_) == 0)
{
lean_object* v_a_2235_; lean_object* v___x_2237_; 
v_a_2235_ = lean_ctor_get(v___x_2234_, 0);
lean_inc(v_a_2235_);
lean_dec_ref_known(v___x_2234_, 1);
if (v_isShared_2231_ == 0)
{
lean_ctor_set(v___x_2230_, 0, v_a_2235_);
v___x_2237_ = v___x_2230_;
goto v_reusejp_2236_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v_a_2235_);
v___x_2237_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2236_;
}
v_reusejp_2236_:
{
v_lhs_2203_ = v_val_2227_;
v_acc_2205_ = v___x_2237_;
goto _start;
}
}
else
{
lean_object* v_a_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2247_; 
lean_del_object(v___x_2230_);
lean_dec(v_val_2227_);
v_a_2240_ = lean_ctor_get(v___x_2234_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2234_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2242_ = v___x_2234_;
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_a_2240_);
lean_dec(v___x_2234_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
lean_object* v___x_2245_; 
if (v_isShared_2243_ == 0)
{
v___x_2245_ = v___x_2242_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_a_2240_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
}
else
{
lean_object* v_a_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2255_; 
lean_del_object(v___x_2230_);
lean_dec(v_val_2227_);
lean_dec(v_acc_2205_);
v_a_2248_ = lean_ctor_get(v___x_2232_, 0);
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2232_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2250_ = v___x_2232_;
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_a_2248_);
lean_dec(v___x_2232_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2253_; 
if (v_isShared_2251_ == 0)
{
v___x_2253_ = v___x_2250_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v_a_2248_);
v___x_2253_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
return v___x_2253_;
}
}
}
}
}
else
{
lean_object* v___x_2257_; lean_object* v___x_2258_; 
lean_dec_ref_known(v_target_x3f_2224_, 1);
lean_dec(v_proof_x3f_2225_);
lean_dec(v_a_2223_);
lean_dec(v_acc_2205_);
lean_dec_ref(v_lhs_2203_);
v___x_2257_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__1, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__1);
v___x_2258_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom_spec__4(v___x_2257_, v_a_2207_, v_a_2208_, v_a_2209_, v_a_2210_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_, v_a_2215_, v_a_2216_);
return v___x_2258_;
}
}
else
{
lean_object* v___x_2259_; lean_object* v___x_2260_; 
lean_dec(v_target_x3f_2224_);
lean_dec(v_a_2223_);
lean_dec(v_acc_2205_);
lean_dec_ref(v_lhs_2203_);
v___x_2259_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__2, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___closed__2);
v___x_2260_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom_spec__4(v___x_2259_, v_a_2207_, v_a_2208_, v_a_2209_, v_a_2210_, v_a_2211_, v_a_2212_, v_a_2213_, v_a_2214_, v_a_2215_, v_a_2216_);
return v___x_2260_;
}
}
else
{
lean_object* v_a_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2268_; 
lean_dec(v_acc_2205_);
lean_dec_ref(v_lhs_2203_);
v_a_2261_ = lean_ctor_get(v___x_2222_, 0);
v_isSharedCheck_2268_ = !lean_is_exclusive(v___x_2222_);
if (v_isSharedCheck_2268_ == 0)
{
v___x_2263_ = v___x_2222_;
v_isShared_2264_ = v_isSharedCheck_2268_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_a_2261_);
lean_dec(v___x_2222_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2268_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
lean_object* v___x_2266_; 
if (v_isShared_2264_ == 0)
{
v___x_2266_ = v___x_2263_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v_a_2261_);
v___x_2266_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
return v___x_2266_;
}
}
}
}
else
{
lean_object* v___x_2269_; 
lean_dec_ref(v_lhs_2203_);
v___x_2269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2269_, 0, v_acc_2205_);
return v___x_2269_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__1(void){
_start:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2271_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_2272_ = lean_unsigned_to_nat(29u);
v___x_2273_ = lean_unsigned_to_nat(310u);
v___x_2274_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__0));
v___x_2275_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_2276_ = l_mkPanicMessageWithDecl(v___x_2275_, v___x_2274_, v___x_2273_, v___x_2272_, v___x_2271_);
return v___x_2276_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__2(void){
_start:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2277_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_2278_ = lean_unsigned_to_nat(35u);
v___x_2279_ = lean_unsigned_to_nat(309u);
v___x_2280_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__0));
v___x_2281_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_2282_ = l_mkPanicMessageWithDecl(v___x_2281_, v___x_2280_, v___x_2279_, v___x_2278_, v___x_2277_);
return v___x_2282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom(lean_object* v_rhs_2283_, lean_object* v_common_2284_, lean_object* v_lhsEqCommon_x3f_2285_, uint8_t v_heq_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_){
_start:
{
size_t v___x_2298_; size_t v___x_2299_; uint8_t v___x_2300_; 
v___x_2298_ = lean_ptr_addr(v_rhs_2283_);
v___x_2299_ = lean_ptr_addr(v_common_2284_);
v___x_2300_ = lean_usize_dec_eq(v___x_2298_, v___x_2299_);
if (v___x_2300_ == 0)
{
lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2301_ = lean_st_ref_get(v_a_2287_);
lean_inc_ref(v_rhs_2283_);
v___x_2302_ = l_Lean_Meta_Grind_Goal_getENode(v___x_2301_, v_rhs_2283_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_);
lean_dec(v___x_2301_);
if (lean_obj_tag(v___x_2302_) == 0)
{
lean_object* v_a_2303_; lean_object* v_target_x3f_2304_; 
v_a_2303_ = lean_ctor_get(v___x_2302_, 0);
lean_inc(v_a_2303_);
lean_dec_ref_known(v___x_2302_, 1);
v_target_x3f_2304_ = lean_ctor_get(v_a_2303_, 4);
lean_inc(v_target_x3f_2304_);
if (lean_obj_tag(v_target_x3f_2304_) == 1)
{
lean_object* v_proof_x3f_2305_; 
v_proof_x3f_2305_ = lean_ctor_get(v_a_2303_, 5);
lean_inc(v_proof_x3f_2305_);
if (lean_obj_tag(v_proof_x3f_2305_) == 1)
{
uint8_t v_flipped_2306_; lean_object* v_val_2307_; lean_object* v_val_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2347_; 
v_flipped_2306_ = lean_ctor_get_uint8(v_a_2303_, sizeof(void*)*12);
lean_dec(v_a_2303_);
v_val_2307_ = lean_ctor_get(v_target_x3f_2304_, 0);
lean_inc(v_val_2307_);
lean_dec_ref_known(v_target_x3f_2304_, 1);
v_val_2308_ = lean_ctor_get(v_proof_x3f_2305_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v_proof_x3f_2305_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2310_ = v_proof_x3f_2305_;
v_isShared_2311_ = v_isSharedCheck_2347_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_val_2308_);
lean_dec(v_proof_x3f_2305_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2347_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
uint8_t v___y_2313_; 
if (v_flipped_2306_ == 0)
{
uint8_t v___x_2346_; 
v___x_2346_ = 1;
v___y_2313_ = v___x_2346_;
goto v___jp_2312_;
}
else
{
v___y_2313_ = v___x_2300_;
goto v___jp_2312_;
}
v___jp_2312_:
{
lean_object* v___x_2314_; 
lean_inc(v_val_2307_);
v___x_2314_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_realizeEqProof(v_val_2307_, v_rhs_2283_, v_val_2308_, v___y_2313_, v_heq_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_);
if (lean_obj_tag(v___x_2314_) == 0)
{
lean_object* v_a_2315_; lean_object* v___x_2316_; 
v_a_2315_ = lean_ctor_get(v___x_2314_, 0);
lean_inc(v_a_2315_);
lean_dec_ref_known(v___x_2314_, 1);
v___x_2316_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom(v_val_2307_, v_common_2284_, v_lhsEqCommon_x3f_2285_, v_heq_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_);
if (lean_obj_tag(v___x_2316_) == 0)
{
lean_object* v_a_2317_; lean_object* v___x_2318_; 
v_a_2317_ = lean_ctor_get(v___x_2316_, 0);
lean_inc(v_a_2317_);
lean_dec_ref_known(v___x_2316_, 1);
v___x_2318_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkTrans_x27(v_a_2317_, v_a_2315_, v_heq_2286_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2329_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2321_ = v___x_2318_;
v_isShared_2322_ = v_isSharedCheck_2329_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_a_2319_);
lean_dec(v___x_2318_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2329_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2324_; 
if (v_isShared_2311_ == 0)
{
lean_ctor_set(v___x_2310_, 0, v_a_2319_);
v___x_2324_ = v___x_2310_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_a_2319_);
v___x_2324_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
lean_object* v___x_2326_; 
if (v_isShared_2322_ == 0)
{
lean_ctor_set(v___x_2321_, 0, v___x_2324_);
v___x_2326_ = v___x_2321_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v___x_2324_);
v___x_2326_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
return v___x_2326_;
}
}
}
}
else
{
lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2337_; 
lean_del_object(v___x_2310_);
v_a_2330_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2332_ = v___x_2318_;
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v___x_2318_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_a_2330_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
}
else
{
lean_dec(v_a_2315_);
lean_del_object(v___x_2310_);
return v___x_2316_;
}
}
else
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2345_; 
lean_del_object(v___x_2310_);
lean_dec(v_val_2307_);
lean_dec(v_lhsEqCommon_x3f_2285_);
v_a_2338_ = lean_ctor_get(v___x_2314_, 0);
v_isSharedCheck_2345_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2345_ == 0)
{
v___x_2340_ = v___x_2314_;
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v___x_2314_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2345_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2343_; 
if (v_isShared_2341_ == 0)
{
v___x_2343_ = v___x_2340_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2344_; 
v_reuseFailAlloc_2344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2344_, 0, v_a_2338_);
v___x_2343_ = v_reuseFailAlloc_2344_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
return v___x_2343_;
}
}
}
}
}
}
else
{
lean_object* v___x_2348_; lean_object* v___x_2349_; 
lean_dec_ref_known(v_target_x3f_2304_, 1);
lean_dec(v_proof_x3f_2305_);
lean_dec(v_a_2303_);
lean_dec(v_lhsEqCommon_x3f_2285_);
lean_dec_ref(v_rhs_2283_);
v___x_2348_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__1, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__1);
v___x_2349_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom_spec__4(v___x_2348_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_);
return v___x_2349_;
}
}
else
{
lean_object* v___x_2350_; lean_object* v___x_2351_; 
lean_dec(v_target_x3f_2304_);
lean_dec(v_a_2303_);
lean_dec(v_lhsEqCommon_x3f_2285_);
lean_dec_ref(v_rhs_2283_);
v___x_2350_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__2, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___closed__2);
v___x_2351_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom_spec__4(v___x_2350_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_);
return v___x_2351_;
}
}
else
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2359_; 
lean_dec(v_lhsEqCommon_x3f_2285_);
lean_dec_ref(v_rhs_2283_);
v_a_2352_ = lean_ctor_get(v___x_2302_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2354_ = v___x_2302_;
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2302_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
if (v_isShared_2355_ == 0)
{
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_a_2352_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
}
else
{
lean_object* v___x_2360_; 
lean_dec_ref(v_rhs_2283_);
v___x_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2360_, 0, v_lhsEqCommon_x3f_2285_);
return v___x_2360_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__3(void){
_start:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2361_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_2362_ = lean_unsigned_to_nat(72u);
v___x_2363_ = lean_unsigned_to_nat(331u);
v___x_2364_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__0));
v___x_2365_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_2366_ = l_mkPanicMessageWithDecl(v___x_2365_, v___x_2364_, v___x_2363_, v___x_2362_, v___x_2361_);
return v___x_2366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(lean_object* v_lhs_2367_, lean_object* v_rhs_2368_, uint8_t v_heq_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_){
_start:
{
size_t v___x_2381_; size_t v___x_2382_; uint8_t v___x_2383_; 
v___x_2381_ = lean_ptr_addr(v_lhs_2367_);
v___x_2382_ = lean_ptr_addr(v_rhs_2368_);
v___x_2383_ = lean_usize_dec_eq(v___x_2381_, v___x_2382_);
if (v___x_2383_ == 0)
{
lean_object* v___x_2384_; 
lean_inc_ref(v_lhs_2367_);
v___x_2384_ = l_Lean_Meta_Grind_getRootENode___redArg(v_lhs_2367_, v_a_2370_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
if (lean_obj_tag(v___x_2384_) == 0)
{
lean_object* v_a_2385_; uint8_t v_heqProofs_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; 
v_a_2385_ = lean_ctor_get(v___x_2384_, 0);
lean_inc(v_a_2385_);
lean_dec_ref_known(v___x_2384_, 1);
v_heqProofs_2386_ = lean_ctor_get_uint8(v_a_2385_, sizeof(void*)*12 + 4);
lean_dec(v_a_2385_);
v___x_2387_ = lean_st_ref_get(v_a_2370_);
lean_inc_ref(v_lhs_2367_);
v___x_2388_ = l_Lean_Meta_Grind_Goal_getENode(v___x_2387_, v_lhs_2367_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
lean_dec(v___x_2387_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v_a_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; 
v_a_2389_ = lean_ctor_get(v___x_2388_, 0);
lean_inc(v_a_2389_);
lean_dec_ref_known(v___x_2388_, 1);
v___x_2390_ = lean_st_ref_get(v_a_2370_);
lean_inc_ref(v_rhs_2368_);
v___x_2391_ = l_Lean_Meta_Grind_Goal_getENode(v___x_2390_, v_rhs_2368_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
lean_dec(v___x_2390_);
if (lean_obj_tag(v___x_2391_) == 0)
{
lean_object* v_a_2392_; lean_object* v_root_2393_; lean_object* v_root_2394_; size_t v___x_2395_; size_t v___x_2396_; uint8_t v___x_2397_; 
v_a_2392_ = lean_ctor_get(v___x_2391_, 0);
lean_inc(v_a_2392_);
lean_dec_ref_known(v___x_2391_, 1);
v_root_2393_ = lean_ctor_get(v_a_2389_, 2);
lean_inc_ref(v_root_2393_);
lean_dec(v_a_2389_);
v_root_2394_ = lean_ctor_get(v_a_2392_, 2);
lean_inc_ref(v_root_2394_);
lean_dec(v_a_2392_);
v___x_2395_ = lean_ptr_addr(v_root_2393_);
lean_dec_ref(v_root_2393_);
v___x_2396_ = lean_ptr_addr(v_root_2394_);
lean_dec_ref(v_root_2394_);
v___x_2397_ = lean_usize_dec_eq(v___x_2395_, v___x_2396_);
if (v___x_2397_ == 0)
{
lean_object* v___x_2398_; lean_object* v___x_2399_; 
lean_dec_ref(v_rhs_2368_);
lean_dec_ref(v_lhs_2367_);
v___x_2398_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__2, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__2);
v___x_2399_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_2398_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
return v___x_2399_;
}
else
{
lean_object* v___x_2400_; 
lean_inc_ref(v_rhs_2368_);
lean_inc_ref(v_lhs_2367_);
v___x_2400_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon(v_lhs_2367_, v_rhs_2368_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
if (lean_obj_tag(v___x_2400_) == 0)
{
lean_object* v_a_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v_a_2401_ = lean_ctor_get(v___x_2400_, 0);
lean_inc(v_a_2401_);
lean_dec_ref_known(v___x_2400_, 1);
v___x_2402_ = lean_box(0);
v___x_2403_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo(v_lhs_2367_, v_a_2401_, v___x_2402_, v_heqProofs_2386_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
if (lean_obj_tag(v___x_2403_) == 0)
{
lean_object* v_a_2404_; lean_object* v___x_2405_; 
v_a_2404_ = lean_ctor_get(v___x_2403_, 0);
lean_inc(v_a_2404_);
lean_dec_ref_known(v___x_2403_, 1);
v___x_2405_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom(v_rhs_2368_, v_a_2401_, v_a_2404_, v_heqProofs_2386_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
lean_dec(v_a_2401_);
if (lean_obj_tag(v___x_2405_) == 0)
{
lean_object* v_a_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2422_; 
v_a_2406_ = lean_ctor_get(v___x_2405_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2405_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2408_ = v___x_2405_;
v_isShared_2409_ = v_isSharedCheck_2422_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_a_2406_);
lean_dec(v___x_2405_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2422_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
if (lean_obj_tag(v_a_2406_) == 1)
{
lean_object* v_val_2410_; 
v_val_2410_ = lean_ctor_get(v_a_2406_, 0);
lean_inc(v_val_2410_);
lean_dec_ref_known(v_a_2406_, 1);
if (v_heqProofs_2386_ == 0)
{
if (v_heq_2369_ == 0)
{
lean_object* v___x_2415_; 
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 0, v_val_2410_);
v___x_2415_ = v___x_2408_;
goto v_reusejp_2414_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v_val_2410_);
v___x_2415_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2414_;
}
v_reusejp_2414_:
{
return v___x_2415_;
}
}
else
{
lean_del_object(v___x_2408_);
goto v___jp_2411_;
}
}
else
{
if (v_heq_2369_ == 0)
{
lean_del_object(v___x_2408_);
goto v___jp_2411_;
}
else
{
lean_object* v___x_2418_; 
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 0, v_val_2410_);
v___x_2418_ = v___x_2408_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v_val_2410_);
v___x_2418_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
return v___x_2418_;
}
}
}
v___jp_2411_:
{
if (v_heq_2369_ == 0)
{
lean_object* v___x_2412_; 
v___x_2412_ = l_Lean_Meta_mkEqOfHEq(v_val_2410_, v_heq_2369_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
return v___x_2412_;
}
else
{
lean_object* v___x_2413_; 
v___x_2413_ = l_Lean_Meta_mkHEqOfEq(v_val_2410_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
return v___x_2413_;
}
}
}
else
{
lean_object* v___x_2420_; lean_object* v___x_2421_; 
lean_del_object(v___x_2408_);
lean_dec(v_a_2406_);
v___x_2420_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__3, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___closed__3);
v___x_2421_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_2420_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
return v___x_2421_;
}
}
}
else
{
lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2430_; 
v_a_2423_ = lean_ctor_get(v___x_2405_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v___x_2405_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2425_ = v___x_2405_;
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2405_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2428_; 
if (v_isShared_2426_ == 0)
{
v___x_2428_ = v___x_2425_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v_a_2423_);
v___x_2428_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
return v___x_2428_;
}
}
}
}
else
{
lean_object* v_a_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2438_; 
lean_dec(v_a_2401_);
lean_dec_ref(v_rhs_2368_);
v_a_2431_ = lean_ctor_get(v___x_2403_, 0);
v_isSharedCheck_2438_ = !lean_is_exclusive(v___x_2403_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2433_ = v___x_2403_;
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_a_2431_);
lean_dec(v___x_2403_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2436_; 
if (v_isShared_2434_ == 0)
{
v___x_2436_ = v___x_2433_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_a_2431_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
}
}
else
{
lean_dec_ref(v_rhs_2368_);
lean_dec_ref(v_lhs_2367_);
return v___x_2400_;
}
}
}
else
{
lean_object* v_a_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2446_; 
lean_dec(v_a_2389_);
lean_dec_ref(v_rhs_2368_);
lean_dec_ref(v_lhs_2367_);
v_a_2439_ = lean_ctor_get(v___x_2391_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v___x_2391_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2441_ = v___x_2391_;
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_a_2439_);
lean_dec(v___x_2391_);
v___x_2441_ = lean_box(0);
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
v_resetjp_2440_:
{
lean_object* v___x_2444_; 
if (v_isShared_2442_ == 0)
{
v___x_2444_ = v___x_2441_;
goto v_reusejp_2443_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v_a_2439_);
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
lean_dec_ref(v_rhs_2368_);
lean_dec_ref(v_lhs_2367_);
v_a_2447_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2449_ = v___x_2388_;
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___x_2388_);
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
else
{
lean_object* v_a_2455_; lean_object* v___x_2457_; uint8_t v_isShared_2458_; uint8_t v_isSharedCheck_2462_; 
lean_dec_ref(v_rhs_2368_);
lean_dec_ref(v_lhs_2367_);
v_a_2455_ = lean_ctor_get(v___x_2384_, 0);
v_isSharedCheck_2462_ = !lean_is_exclusive(v___x_2384_);
if (v_isSharedCheck_2462_ == 0)
{
v___x_2457_ = v___x_2384_;
v_isShared_2458_ = v_isSharedCheck_2462_;
goto v_resetjp_2456_;
}
else
{
lean_inc(v_a_2455_);
lean_dec(v___x_2384_);
v___x_2457_ = lean_box(0);
v_isShared_2458_ = v_isSharedCheck_2462_;
goto v_resetjp_2456_;
}
v_resetjp_2456_:
{
lean_object* v___x_2460_; 
if (v_isShared_2458_ == 0)
{
v___x_2460_ = v___x_2457_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v_a_2455_);
v___x_2460_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
return v___x_2460_;
}
}
}
}
else
{
lean_object* v___x_2463_; 
lean_dec_ref(v_rhs_2368_);
v___x_2463_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkRefl(v_lhs_2367_, v_heq_2369_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
return v___x_2463_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProofHelper(lean_object* v_thm_2464_, lean_object* v_lhs_2465_, lean_object* v_rhs_2466_, lean_object* v_i_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_){
_start:
{
lean_object* v___x_2479_; uint8_t v___x_2480_; 
v___x_2479_ = lean_unsigned_to_nat(0u);
v___x_2480_ = lean_nat_dec_lt(v___x_2479_, v_i_2467_);
if (v___x_2480_ == 0)
{
lean_object* v_proof_2481_; lean_object* v___x_2482_; 
v_proof_2481_ = lean_ctor_get(v_thm_2464_, 1);
lean_inc_ref(v_proof_2481_);
v___x_2482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2482_, 0, v_proof_2481_);
return v___x_2482_;
}
else
{
uint8_t v___x_2483_; lean_object* v___x_2484_; lean_object* v_i_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2483_ = 0;
v___x_2484_ = lean_unsigned_to_nat(1u);
v_i_2485_ = lean_nat_sub(v_i_2467_, v___x_2484_);
v___x_2486_ = l_Lean_Expr_appFn_x21(v_lhs_2465_);
v___x_2487_ = l_Lean_Expr_appFn_x21(v_rhs_2466_);
v___x_2488_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProofHelper(v_thm_2464_, v___x_2486_, v___x_2487_, v_i_2485_, v_a_2468_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_);
lean_dec_ref(v___x_2487_);
lean_dec_ref(v___x_2486_);
if (lean_obj_tag(v___x_2488_) == 0)
{
lean_object* v_a_2489_; lean_object* v_argKinds_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; uint8_t v___y_2494_; lean_object* v___x_2505_; lean_object* v___x_2506_; uint8_t v___x_2507_; 
v_a_2489_ = lean_ctor_get(v___x_2488_, 0);
lean_inc(v_a_2489_);
lean_dec_ref_known(v___x_2488_, 1);
v_argKinds_2490_ = lean_ctor_get(v_thm_2464_, 2);
v___x_2491_ = l_Lean_Expr_appArg_x21(v_lhs_2465_);
v___x_2492_ = l_Lean_Expr_appArg_x21(v_rhs_2466_);
v___x_2505_ = lean_box(v___x_2483_);
v___x_2506_ = lean_array_get(v___x_2505_, v_argKinds_2490_, v_i_2485_);
lean_dec(v_i_2485_);
lean_dec(v___x_2505_);
v___x_2507_ = lean_unbox(v___x_2506_);
lean_dec(v___x_2506_);
if (v___x_2507_ == 4)
{
v___y_2494_ = v___x_2480_;
goto v___jp_2493_;
}
else
{
uint8_t v___x_2508_; 
v___x_2508_ = 0;
v___y_2494_ = v___x_2508_;
goto v___jp_2493_;
}
v___jp_2493_:
{
lean_object* v___x_2495_; 
lean_inc_ref(v___x_2492_);
lean_inc_ref(v___x_2491_);
v___x_2495_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v___x_2491_, v___x_2492_, v___y_2494_, v_a_2468_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_);
if (lean_obj_tag(v___x_2495_) == 0)
{
lean_object* v_a_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2504_; 
v_a_2496_ = lean_ctor_get(v___x_2495_, 0);
v_isSharedCheck_2504_ = !lean_is_exclusive(v___x_2495_);
if (v_isSharedCheck_2504_ == 0)
{
v___x_2498_ = v___x_2495_;
v_isShared_2499_ = v_isSharedCheck_2504_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_a_2496_);
lean_dec(v___x_2495_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2504_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2500_; lean_object* v___x_2502_; 
v___x_2500_ = l_Lean_mkApp3(v_a_2489_, v___x_2491_, v___x_2492_, v_a_2496_);
if (v_isShared_2499_ == 0)
{
lean_ctor_set(v___x_2498_, 0, v___x_2500_);
v___x_2502_ = v___x_2498_;
goto v_reusejp_2501_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v___x_2500_);
v___x_2502_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2501_;
}
v_reusejp_2501_:
{
return v___x_2502_;
}
}
}
else
{
lean_dec_ref(v___x_2492_);
lean_dec_ref(v___x_2491_);
lean_dec(v_a_2489_);
return v___x_2495_;
}
}
}
else
{
lean_dec(v_i_2485_);
return v___x_2488_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27(lean_object* v_f_2512_, lean_object* v_g_2513_, lean_object* v_numArgs_2514_, lean_object* v_lhs_2515_, lean_object* v_rhs_2516_, uint8_t v_heq_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_, lean_object* v_a_2521_, lean_object* v_a_2522_, lean_object* v_a_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_){
_start:
{
lean_object* v___x_2529_; 
lean_inc(v_numArgs_2514_);
lean_inc_ref(v_f_2512_);
v___x_2529_ = l_Lean_Meta_Grind_mkHCongrWithArity___redArg(v_f_2512_, v_numArgs_2514_, v_a_2521_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_);
if (lean_obj_tag(v___x_2529_) == 0)
{
lean_object* v_a_2530_; lean_object* v_argKinds_2531_; lean_object* v___x_2532_; uint8_t v___x_2533_; 
v_a_2530_ = lean_ctor_get(v___x_2529_, 0);
lean_inc(v_a_2530_);
lean_dec_ref_known(v___x_2529_, 1);
v_argKinds_2531_ = lean_ctor_get(v_a_2530_, 2);
v___x_2532_ = lean_array_get_size(v_argKinds_2531_);
v___x_2533_ = lean_nat_dec_eq(v___x_2532_, v_numArgs_2514_);
if (v___x_2533_ == 0)
{
lean_object* v___x_2534_; lean_object* v___x_2535_; 
lean_dec(v_a_2530_);
lean_dec_ref(v_rhs_2516_);
lean_dec_ref(v_lhs_2515_);
lean_dec(v_numArgs_2514_);
lean_dec_ref(v_g_2513_);
lean_dec_ref(v_f_2512_);
v___x_2534_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__2, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__2);
v___x_2535_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_2534_, v_a_2518_, v_a_2519_, v_a_2520_, v_a_2521_, v_a_2522_, v_a_2523_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_);
return v___x_2535_;
}
else
{
lean_object* v___x_2536_; 
v___x_2536_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProofHelper(v_a_2530_, v_lhs_2515_, v_rhs_2516_, v_numArgs_2514_, v_a_2518_, v_a_2519_, v_a_2520_, v_a_2521_, v_a_2522_, v_a_2523_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_);
lean_dec(v_a_2530_);
if (lean_obj_tag(v___x_2536_) == 0)
{
lean_object* v_a_2537_; size_t v___x_2538_; size_t v___x_2539_; uint8_t v___x_2540_; 
v_a_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_a_2537_);
lean_dec_ref_known(v___x_2536_, 1);
v___x_2538_ = lean_ptr_addr(v_f_2512_);
v___x_2539_ = lean_ptr_addr(v_g_2513_);
v___x_2540_ = lean_usize_dec_eq(v___x_2538_, v___x_2539_);
if (v___x_2540_ == 0)
{
lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___f_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; 
v___x_2541_ = lean_box(v___x_2540_);
v___x_2542_ = lean_box(v___x_2533_);
v___f_2543_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___lam__0___boxed), 17, 5);
lean_closure_set(v___f_2543_, 0, v_numArgs_2514_);
lean_closure_set(v___f_2543_, 1, v_rhs_2516_);
lean_closure_set(v___f_2543_, 2, v_lhs_2515_);
lean_closure_set(v___f_2543_, 3, v___x_2541_);
lean_closure_set(v___f_2543_, 4, v___x_2542_);
v___x_2544_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___closed__4));
v___x_2545_ = l_Lean_Core_mkFreshUserName(v___x_2544_, v_a_2526_, v_a_2527_);
if (lean_obj_tag(v___x_2545_) == 0)
{
lean_object* v_a_2546_; lean_object* v___x_2547_; 
v_a_2546_ = lean_ctor_get(v___x_2545_, 0);
lean_inc(v_a_2546_);
lean_dec_ref_known(v___x_2545_, 1);
lean_inc(v_a_2527_);
lean_inc_ref(v_a_2526_);
lean_inc(v_a_2525_);
lean_inc_ref(v_a_2524_);
lean_inc_ref(v_f_2512_);
v___x_2547_ = lean_infer_type(v_f_2512_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_);
if (lean_obj_tag(v___x_2547_) == 0)
{
lean_object* v_a_2548_; lean_object* v___x_2549_; 
v_a_2548_ = lean_ctor_get(v___x_2547_, 0);
lean_inc(v_a_2548_);
lean_dec_ref_known(v___x_2547_, 1);
v___x_2549_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1___redArg(v_a_2546_, v_a_2548_, v___f_2543_, v_a_2518_, v_a_2519_, v_a_2520_, v_a_2521_, v_a_2522_, v_a_2523_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_);
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v_a_2550_; lean_object* v___x_2551_; 
v_a_2550_ = lean_ctor_get(v___x_2549_, 0);
lean_inc(v_a_2550_);
lean_dec_ref_known(v___x_2549_, 1);
v___x_2551_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_f_2512_, v_g_2513_, v___x_2540_, v_a_2518_, v_a_2519_, v_a_2520_, v_a_2521_, v_a_2522_, v_a_2523_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_);
if (lean_obj_tag(v___x_2551_) == 0)
{
lean_object* v_a_2552_; lean_object* v___x_2553_; 
v_a_2552_ = lean_ctor_get(v___x_2551_, 0);
lean_inc(v_a_2552_);
lean_dec_ref_known(v___x_2551_, 1);
v___x_2553_ = l_Lean_Meta_mkEqNDRec(v_a_2550_, v_a_2537_, v_a_2552_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_);
if (lean_obj_tag(v___x_2553_) == 0)
{
lean_object* v_a_2554_; lean_object* v___x_2555_; 
v_a_2554_ = lean_ctor_get(v___x_2553_, 0);
lean_inc(v_a_2554_);
lean_dec_ref_known(v___x_2553_, 1);
v___x_2555_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqOfHEqIfNeeded(v_a_2554_, v_heq_2517_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_);
return v___x_2555_;
}
else
{
return v___x_2553_;
}
}
else
{
lean_dec(v_a_2550_);
lean_dec(v_a_2537_);
return v___x_2551_;
}
}
else
{
lean_dec(v_a_2537_);
lean_dec_ref(v_g_2513_);
lean_dec_ref(v_f_2512_);
return v___x_2549_;
}
}
else
{
lean_dec(v_a_2546_);
lean_dec_ref(v___f_2543_);
lean_dec(v_a_2537_);
lean_dec_ref(v_g_2513_);
lean_dec_ref(v_f_2512_);
return v___x_2547_;
}
}
else
{
lean_object* v_a_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2563_; 
lean_dec_ref(v___f_2543_);
lean_dec(v_a_2537_);
lean_dec_ref(v_g_2513_);
lean_dec_ref(v_f_2512_);
v_a_2556_ = lean_ctor_get(v___x_2545_, 0);
v_isSharedCheck_2563_ = !lean_is_exclusive(v___x_2545_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2558_ = v___x_2545_;
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_a_2556_);
lean_dec(v___x_2545_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v___x_2561_; 
if (v_isShared_2559_ == 0)
{
v___x_2561_ = v___x_2558_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v_a_2556_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
return v___x_2561_;
}
}
}
}
else
{
lean_object* v___x_2564_; 
lean_dec_ref(v_rhs_2516_);
lean_dec_ref(v_lhs_2515_);
lean_dec(v_numArgs_2514_);
lean_dec_ref(v_g_2513_);
lean_dec_ref(v_f_2512_);
v___x_2564_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqOfHEqIfNeeded(v_a_2537_, v_heq_2517_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_);
return v___x_2564_;
}
}
else
{
lean_dec_ref(v_rhs_2516_);
lean_dec_ref(v_lhs_2515_);
lean_dec(v_numArgs_2514_);
lean_dec_ref(v_g_2513_);
lean_dec_ref(v_f_2512_);
return v___x_2536_;
}
}
}
else
{
lean_object* v_a_2565_; lean_object* v___x_2567_; uint8_t v_isShared_2568_; uint8_t v_isSharedCheck_2572_; 
lean_dec_ref(v_rhs_2516_);
lean_dec_ref(v_lhs_2515_);
lean_dec(v_numArgs_2514_);
lean_dec_ref(v_g_2513_);
lean_dec_ref(v_f_2512_);
v_a_2565_ = lean_ctor_get(v___x_2529_, 0);
v_isSharedCheck_2572_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2572_ == 0)
{
v___x_2567_ = v___x_2529_;
v_isShared_2568_ = v_isSharedCheck_2572_;
goto v_resetjp_2566_;
}
else
{
lean_inc(v_a_2565_);
lean_dec(v___x_2529_);
v___x_2567_ = lean_box(0);
v_isShared_2568_ = v_isSharedCheck_2572_;
goto v_resetjp_2566_;
}
v_resetjp_2566_:
{
lean_object* v___x_2570_; 
if (v_isShared_2568_ == 0)
{
v___x_2570_ = v___x_2567_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_a_2565_);
v___x_2570_ = v_reuseFailAlloc_2571_;
goto v_reusejp_2569_;
}
v_reusejp_2569_:
{
return v___x_2570_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__1(void){
_start:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2574_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_2575_ = lean_unsigned_to_nat(27u);
v___x_2576_ = lean_unsigned_to_nat(238u);
v___x_2577_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__0));
v___x_2578_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_2579_ = l_mkPanicMessageWithDecl(v___x_2578_, v___x_2577_, v___x_2576_, v___x_2575_, v___x_2574_);
return v___x_2579_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__2(void){
_start:
{
lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2580_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__2));
v___x_2581_ = lean_unsigned_to_nat(27u);
v___x_2582_ = lean_unsigned_to_nat(237u);
v___x_2583_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__0));
v___x_2584_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__4___redArg___closed__0));
v___x_2585_ = l_mkPanicMessageWithDecl(v___x_2584_, v___x_2583_, v___x_2582_, v___x_2581_, v___x_2580_);
return v___x_2585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go(lean_object* v_lhs_2586_, lean_object* v_rhs_2587_, uint8_t v_heq_2588_, lean_object* v_e_u2081_2589_, lean_object* v_e_u2082_2590_, lean_object* v_numArgs_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_){
_start:
{
if (lean_obj_tag(v_e_u2081_2589_) == 5)
{
if (lean_obj_tag(v_e_u2082_2590_) == 5)
{
lean_object* v_fn_2603_; lean_object* v_fn_2604_; lean_object* v___x_2605_; lean_object* v_numArgs_2606_; size_t v___x_2607_; size_t v___x_2608_; uint8_t v___x_2609_; 
v_fn_2603_ = lean_ctor_get(v_e_u2081_2589_, 0);
lean_inc_ref(v_fn_2603_);
lean_dec_ref_known(v_e_u2081_2589_, 2);
v_fn_2604_ = lean_ctor_get(v_e_u2082_2590_, 0);
lean_inc_ref(v_fn_2604_);
lean_dec_ref_known(v_e_u2082_2590_, 2);
v___x_2605_ = lean_unsigned_to_nat(1u);
v_numArgs_2606_ = lean_nat_add(v_numArgs_2591_, v___x_2605_);
lean_dec(v_numArgs_2591_);
v___x_2607_ = lean_ptr_addr(v_fn_2603_);
v___x_2608_ = lean_ptr_addr(v_fn_2604_);
v___x_2609_ = lean_usize_dec_eq(v___x_2607_, v___x_2608_);
if (v___x_2609_ == 0)
{
lean_object* v___x_2610_; 
lean_inc_ref(v_fn_2604_);
lean_inc_ref(v_fn_2603_);
v___x_2610_ = l_Lean_Meta_Grind_hasSameTypeI(v_fn_2603_, v_fn_2604_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_);
if (lean_obj_tag(v___x_2610_) == 0)
{
lean_object* v_a_2611_; uint8_t v___x_2612_; 
v_a_2611_ = lean_ctor_get(v___x_2610_, 0);
lean_inc(v_a_2611_);
lean_dec_ref_known(v___x_2610_, 1);
v___x_2612_ = lean_unbox(v_a_2611_);
lean_dec(v_a_2611_);
if (v___x_2612_ == 0)
{
v_e_u2081_2589_ = v_fn_2603_;
v_e_u2082_2590_ = v_fn_2604_;
v_numArgs_2591_ = v_numArgs_2606_;
goto _start;
}
else
{
lean_object* v___x_2614_; 
v___x_2614_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27(v_fn_2603_, v_fn_2604_, v_numArgs_2606_, v_lhs_2586_, v_rhs_2587_, v_heq_2588_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_);
return v___x_2614_;
}
}
else
{
lean_object* v_a_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2622_; 
lean_dec(v_numArgs_2606_);
lean_dec_ref(v_fn_2604_);
lean_dec_ref(v_fn_2603_);
lean_dec_ref(v_rhs_2587_);
lean_dec_ref(v_lhs_2586_);
v_a_2615_ = lean_ctor_get(v___x_2610_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v___x_2610_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2617_ = v___x_2610_;
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_a_2615_);
lean_dec(v___x_2610_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2620_; 
if (v_isShared_2618_ == 0)
{
v___x_2620_ = v___x_2617_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v_a_2615_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
}
}
else
{
lean_object* v___x_2623_; 
v___x_2623_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27(v_fn_2603_, v_fn_2604_, v_numArgs_2606_, v_lhs_2586_, v_rhs_2587_, v_heq_2588_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_);
return v___x_2623_;
}
}
else
{
lean_object* v___x_2624_; lean_object* v___x_2625_; 
lean_dec_ref_known(v_e_u2081_2589_, 2);
lean_dec(v_numArgs_2591_);
lean_dec_ref(v_e_u2082_2590_);
lean_dec_ref(v_rhs_2587_);
lean_dec_ref(v_lhs_2586_);
v___x_2624_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__1);
v___x_2625_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_2624_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_);
return v___x_2625_;
}
}
else
{
lean_object* v___x_2626_; lean_object* v___x_2627_; 
lean_dec(v_numArgs_2591_);
lean_dec_ref(v_e_u2082_2590_);
lean_dec_ref(v_e_u2081_2589_);
lean_dec_ref(v_rhs_2587_);
lean_dec_ref(v_lhs_2586_);
v___x_2626_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__2, &l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___closed__2);
v___x_2627_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_findCommon_spec__5(v___x_2626_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_);
return v___x_2627_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC(lean_object* v_lhs_2628_, lean_object* v_rhs_2629_, uint8_t v_heq_2630_, lean_object* v_a_2631_, lean_object* v_a_2632_, lean_object* v_a_2633_, lean_object* v_a_2634_, lean_object* v_a_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_, lean_object* v_a_2638_, lean_object* v_a_2639_, lean_object* v_a_2640_){
_start:
{
lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2642_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_rhs_2629_);
lean_inc_ref(v_lhs_2628_);
v___x_2643_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go(v_lhs_2628_, v_rhs_2629_, v_heq_2630_, v_lhs_2628_, v_rhs_2629_, v___x_2642_, v_a_2631_, v_a_2632_, v_a_2633_, v_a_2634_, v_a_2635_, v_a_2636_, v_a_2637_, v_a_2638_, v_a_2639_, v_a_2640_);
return v___x_2643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC___boxed(lean_object* v_lhs_2644_, lean_object* v_rhs_2645_, lean_object* v_heq_2646_, lean_object* v_a_2647_, lean_object* v_a_2648_, lean_object* v_a_2649_, lean_object* v_a_2650_, lean_object* v_a_2651_, lean_object* v_a_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_){
_start:
{
uint8_t v_heq_boxed_2658_; lean_object* v_res_2659_; 
v_heq_boxed_2658_ = lean_unbox(v_heq_2646_);
v_res_2659_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC(v_lhs_2644_, v_rhs_2645_, v_heq_boxed_2658_, v_a_2647_, v_a_2648_, v_a_2649_, v_a_2650_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_, v_a_2655_, v_a_2656_);
lean_dec(v_a_2656_);
lean_dec_ref(v_a_2655_);
lean_dec(v_a_2654_);
lean_dec_ref(v_a_2653_);
lean_dec(v_a_2652_);
lean_dec_ref(v_a_2651_);
lean_dec(v_a_2650_);
lean_dec_ref(v_a_2649_);
lean_dec(v_a_2648_);
lean_dec(v_a_2647_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr___boxed(lean_object* v_lhs_2660_, lean_object* v_rhs_2661_, lean_object* v_heq_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_){
_start:
{
uint8_t v_heq_boxed_2674_; lean_object* v_res_2675_; 
v_heq_boxed_2674_ = lean_unbox(v_heq_2662_);
v_res_2675_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedDecidableCongr(v_lhs_2660_, v_rhs_2661_, v_heq_boxed_2674_, v_a_2663_, v_a_2664_, v_a_2665_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_);
lean_dec(v_a_2672_);
lean_dec_ref(v_a_2671_);
lean_dec(v_a_2670_);
lean_dec_ref(v_a_2669_);
lean_dec(v_a_2668_);
lean_dec_ref(v_a_2667_);
lean_dec(v_a_2666_);
lean_dec_ref(v_a_2665_);
lean_dec(v_a_2664_);
lean_dec(v_a_2663_);
lean_dec_ref(v_rhs_2661_);
lean_dec_ref(v_lhs_2660_);
return v_res_2675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr___boxed(lean_object* v_lhs_2676_, lean_object* v_rhs_2677_, lean_object* v_heq_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_, lean_object* v_a_2686_, lean_object* v_a_2687_, lean_object* v_a_2688_, lean_object* v_a_2689_){
_start:
{
uint8_t v_heq_boxed_2690_; lean_object* v_res_2691_; 
v_heq_boxed_2690_ = lean_unbox(v_heq_2678_);
v_res_2691_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkNestedProofCongr(v_lhs_2676_, v_rhs_2677_, v_heq_boxed_2690_, v_a_2679_, v_a_2680_, v_a_2681_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_, v_a_2686_, v_a_2687_, v_a_2688_);
lean_dec(v_a_2688_);
lean_dec_ref(v_a_2687_);
lean_dec(v_a_2686_);
lean_dec_ref(v_a_2685_);
lean_dec(v_a_2684_);
lean_dec_ref(v_a_2683_);
lean_dec(v_a_2682_);
lean_dec_ref(v_a_2681_);
lean_dec(v_a_2680_);
lean_dec(v_a_2679_);
lean_dec_ref(v_rhs_2677_);
lean_dec_ref(v_lhs_2676_);
return v_res_2691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_realizeEqProof___boxed(lean_object* v_lhs_2692_, lean_object* v_rhs_2693_, lean_object* v_h_2694_, lean_object* v_flipped_2695_, lean_object* v_heq_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_, lean_object* v_a_2699_, lean_object* v_a_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_, lean_object* v_a_2705_, lean_object* v_a_2706_, lean_object* v_a_2707_){
_start:
{
uint8_t v_flipped_boxed_2708_; uint8_t v_heq_boxed_2709_; lean_object* v_res_2710_; 
v_flipped_boxed_2708_ = lean_unbox(v_flipped_2695_);
v_heq_boxed_2709_ = lean_unbox(v_heq_2696_);
v_res_2710_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_realizeEqProof(v_lhs_2692_, v_rhs_2693_, v_h_2694_, v_flipped_boxed_2708_, v_heq_boxed_2709_, v_a_2697_, v_a_2698_, v_a_2699_, v_a_2700_, v_a_2701_, v_a_2702_, v_a_2703_, v_a_2704_, v_a_2705_, v_a_2706_);
lean_dec(v_a_2706_);
lean_dec_ref(v_a_2705_);
lean_dec(v_a_2704_);
lean_dec_ref(v_a_2703_);
lean_dec(v_a_2702_);
lean_dec_ref(v_a_2701_);
lean_dec(v_a_2700_);
lean_dec_ref(v_a_2699_);
lean_dec(v_a_2698_);
lean_dec(v_a_2697_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof___boxed(lean_object* v_lhs_2711_, lean_object* v_rhs_2712_, lean_object* v_heq_2713_, lean_object* v_a_2714_, lean_object* v_a_2715_, lean_object* v_a_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_, lean_object* v_a_2724_){
_start:
{
uint8_t v_heq_boxed_2725_; lean_object* v_res_2726_; 
v_heq_boxed_2725_ = lean_unbox(v_heq_2713_);
v_res_2726_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof(v_lhs_2711_, v_rhs_2712_, v_heq_boxed_2725_, v_a_2714_, v_a_2715_, v_a_2716_, v_a_2717_, v_a_2718_, v_a_2719_, v_a_2720_, v_a_2721_, v_a_2722_, v_a_2723_);
lean_dec(v_a_2723_);
lean_dec_ref(v_a_2722_);
lean_dec(v_a_2721_);
lean_dec_ref(v_a_2720_);
lean_dec(v_a_2719_);
lean_dec_ref(v_a_2718_);
lean_dec(v_a_2717_);
lean_dec_ref(v_a_2716_);
lean_dec(v_a_2715_);
lean_dec(v_a_2714_);
lean_dec_ref(v_rhs_2712_);
lean_dec_ref(v_lhs_2711_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProofHelper___boxed(lean_object* v_thm_2727_, lean_object* v_lhs_2728_, lean_object* v_rhs_2729_, lean_object* v_i_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_, lean_object* v_a_2741_){
_start:
{
lean_object* v_res_2742_; 
v_res_2742_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProofHelper(v_thm_2727_, v_lhs_2728_, v_rhs_2729_, v_i_2730_, v_a_2731_, v_a_2732_, v_a_2733_, v_a_2734_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_, v_a_2739_, v_a_2740_);
lean_dec(v_a_2740_);
lean_dec_ref(v_a_2739_);
lean_dec(v_a_2738_);
lean_dec_ref(v_a_2737_);
lean_dec(v_a_2736_);
lean_dec_ref(v_a_2735_);
lean_dec(v_a_2734_);
lean_dec_ref(v_a_2733_);
lean_dec(v_a_2732_);
lean_dec(v_a_2731_);
lean_dec(v_i_2730_);
lean_dec_ref(v_rhs_2729_);
lean_dec_ref(v_lhs_2728_);
lean_dec_ref(v_thm_2727_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go___boxed(lean_object** _args){
lean_object* v_lhs_2743_ = _args[0];
lean_object* v_rhs_2744_ = _args[1];
lean_object* v_heq_2745_ = _args[2];
lean_object* v_e_u2081_2746_ = _args[3];
lean_object* v_e_u2082_2747_ = _args[4];
lean_object* v_numArgs_2748_ = _args[5];
lean_object* v_a_2749_ = _args[6];
lean_object* v_a_2750_ = _args[7];
lean_object* v_a_2751_ = _args[8];
lean_object* v_a_2752_ = _args[9];
lean_object* v_a_2753_ = _args[10];
lean_object* v_a_2754_ = _args[11];
lean_object* v_a_2755_ = _args[12];
lean_object* v_a_2756_ = _args[13];
lean_object* v_a_2757_ = _args[14];
lean_object* v_a_2758_ = _args[15];
lean_object* v_a_2759_ = _args[16];
_start:
{
uint8_t v_heq_boxed_2760_; lean_object* v_res_2761_; 
v_heq_boxed_2760_ = lean_unbox(v_heq_2745_);
v_res_2761_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProofFunCC_go(v_lhs_2743_, v_rhs_2744_, v_heq_boxed_2760_, v_e_u2081_2746_, v_e_u2082_2747_, v_numArgs_2748_, v_a_2749_, v_a_2750_, v_a_2751_, v_a_2752_, v_a_2753_, v_a_2754_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_);
lean_dec(v_a_2758_);
lean_dec_ref(v_a_2757_);
lean_dec(v_a_2756_);
lean_dec_ref(v_a_2755_);
lean_dec(v_a_2754_);
lean_dec_ref(v_a_2753_);
lean_dec(v_a_2752_);
lean_dec_ref(v_a_2751_);
lean_dec(v_a_2750_);
lean_dec(v_a_2749_);
return v_res_2761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo___boxed(lean_object* v_lhs_2762_, lean_object* v_common_2763_, lean_object* v_acc_2764_, lean_object* v_heq_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_, lean_object* v_a_2768_, lean_object* v_a_2769_, lean_object* v_a_2770_, lean_object* v_a_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_){
_start:
{
uint8_t v_heq_boxed_2777_; lean_object* v_res_2778_; 
v_heq_boxed_2777_ = lean_unbox(v_heq_2765_);
v_res_2778_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofTo(v_lhs_2762_, v_common_2763_, v_acc_2764_, v_heq_boxed_2777_, v_a_2766_, v_a_2767_, v_a_2768_, v_a_2769_, v_a_2770_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_);
lean_dec(v_a_2775_);
lean_dec_ref(v_a_2774_);
lean_dec(v_a_2773_);
lean_dec_ref(v_a_2772_);
lean_dec(v_a_2771_);
lean_dec_ref(v_a_2770_);
lean_dec(v_a_2769_);
lean_dec_ref(v_a_2768_);
lean_dec(v_a_2767_);
lean_dec(v_a_2766_);
lean_dec_ref(v_common_2763_);
return v_res_2778_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27___boxed(lean_object** _args){
lean_object* v_f_2779_ = _args[0];
lean_object* v_g_2780_ = _args[1];
lean_object* v_numArgs_2781_ = _args[2];
lean_object* v_lhs_2782_ = _args[3];
lean_object* v_rhs_2783_ = _args[4];
lean_object* v_heq_2784_ = _args[5];
lean_object* v_a_2785_ = _args[6];
lean_object* v_a_2786_ = _args[7];
lean_object* v_a_2787_ = _args[8];
lean_object* v_a_2788_ = _args[9];
lean_object* v_a_2789_ = _args[10];
lean_object* v_a_2790_ = _args[11];
lean_object* v_a_2791_ = _args[12];
lean_object* v_a_2792_ = _args[13];
lean_object* v_a_2793_ = _args[14];
lean_object* v_a_2794_ = _args[15];
lean_object* v_a_2795_ = _args[16];
_start:
{
uint8_t v_heq_boxed_2796_; lean_object* v_res_2797_; 
v_heq_boxed_2796_ = lean_unbox(v_heq_2784_);
v_res_2797_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27(v_f_2779_, v_g_2780_, v_numArgs_2781_, v_lhs_2782_, v_rhs_2783_, v_heq_boxed_2796_, v_a_2785_, v_a_2786_, v_a_2787_, v_a_2788_, v_a_2789_, v_a_2790_, v_a_2791_, v_a_2792_, v_a_2793_, v_a_2794_);
lean_dec(v_a_2794_);
lean_dec_ref(v_a_2793_);
lean_dec(v_a_2792_);
lean_dec_ref(v_a_2791_);
lean_dec(v_a_2790_);
lean_dec_ref(v_a_2789_);
lean_dec(v_a_2788_);
lean_dec_ref(v_a_2787_);
lean_dec(v_a_2786_);
lean_dec(v_a_2785_);
return v_res_2797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom___boxed(lean_object* v_rhs_2798_, lean_object* v_common_2799_, lean_object* v_lhsEqCommon_x3f_2800_, lean_object* v_heq_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_, lean_object* v_a_2804_, lean_object* v_a_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_, lean_object* v_a_2808_, lean_object* v_a_2809_, lean_object* v_a_2810_, lean_object* v_a_2811_, lean_object* v_a_2812_){
_start:
{
uint8_t v_heq_boxed_2813_; lean_object* v_res_2814_; 
v_heq_boxed_2813_ = lean_unbox(v_heq_2801_);
v_res_2814_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkProofFrom(v_rhs_2798_, v_common_2799_, v_lhsEqCommon_x3f_2800_, v_heq_boxed_2813_, v_a_2802_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_, v_a_2807_, v_a_2808_, v_a_2809_, v_a_2810_, v_a_2811_);
lean_dec(v_a_2811_);
lean_dec_ref(v_a_2810_);
lean_dec(v_a_2809_);
lean_dec_ref(v_a_2808_);
lean_dec(v_a_2807_);
lean_dec_ref(v_a_2806_);
lean_dec(v_a_2805_);
lean_dec_ref(v_a_2804_);
lean_dec(v_a_2803_);
lean_dec(v_a_2802_);
lean_dec_ref(v_common_2799_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof___boxed(lean_object* v_lhs_2815_, lean_object* v_rhs_2816_, lean_object* v_heq_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_, lean_object* v_a_2826_, lean_object* v_a_2827_, lean_object* v_a_2828_){
_start:
{
uint8_t v_heq_boxed_2829_; lean_object* v_res_2830_; 
v_heq_boxed_2829_ = lean_unbox(v_heq_2817_);
v_res_2830_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof(v_lhs_2815_, v_rhs_2816_, v_heq_boxed_2829_, v_a_2818_, v_a_2819_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_, v_a_2824_, v_a_2825_, v_a_2826_, v_a_2827_);
lean_dec(v_a_2827_);
lean_dec_ref(v_a_2826_);
lean_dec(v_a_2825_);
lean_dec_ref(v_a_2824_);
lean_dec(v_a_2823_);
lean_dec_ref(v_a_2822_);
lean_dec(v_a_2821_);
lean_dec_ref(v_a_2820_);
lean_dec(v_a_2819_);
lean_dec(v_a_2818_);
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof_loop___boxed(lean_object* v_lhs_2831_, lean_object* v_rhs_2832_, lean_object* v_a_2833_, lean_object* v_a_2834_, lean_object* v_a_2835_, lean_object* v_a_2836_, lean_object* v_a_2837_, lean_object* v_a_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_){
_start:
{
lean_object* v_res_2844_; 
v_res_2844_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrDefaultProof_loop(v_lhs_2831_, v_rhs_2832_, v_a_2833_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_);
lean_dec(v_a_2842_);
lean_dec_ref(v_a_2841_);
lean_dec(v_a_2840_);
lean_dec_ref(v_a_2839_);
lean_dec(v_a_2838_);
lean_dec_ref(v_a_2837_);
lean_dec(v_a_2836_);
lean_dec_ref(v_a_2835_);
lean_dec(v_a_2834_);
lean_dec(v_a_2833_);
lean_dec_ref(v_rhs_2832_);
lean_dec_ref(v_lhs_2831_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore___boxed(lean_object* v_lhs_2845_, lean_object* v_rhs_2846_, lean_object* v_heq_2847_, lean_object* v_a_2848_, lean_object* v_a_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_, lean_object* v_a_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_){
_start:
{
uint8_t v_heq_boxed_2859_; lean_object* v_res_2860_; 
v_heq_boxed_2859_ = lean_unbox(v_heq_2847_);
v_res_2860_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_lhs_2845_, v_rhs_2846_, v_heq_boxed_2859_, v_a_2848_, v_a_2849_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_, v_a_2857_);
lean_dec(v_a_2857_);
lean_dec_ref(v_a_2856_);
lean_dec(v_a_2855_);
lean_dec_ref(v_a_2854_);
lean_dec(v_a_2853_);
lean_dec_ref(v_a_2852_);
lean_dec(v_a_2851_);
lean_dec_ref(v_a_2850_);
lean_dec(v_a_2849_);
lean_dec(v_a_2848_);
return v_res_2860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkEqCongrProof___boxed(lean_object* v_lhs_2861_, lean_object* v_rhs_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_, lean_object* v_a_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_, lean_object* v_a_2873_){
_start:
{
lean_object* v_res_2874_; 
v_res_2874_ = l_Lean_Meta_Grind_mkEqCongrProof(v_lhs_2861_, v_rhs_2862_, v_a_2863_, v_a_2864_, v_a_2865_, v_a_2866_, v_a_2867_, v_a_2868_, v_a_2869_, v_a_2870_, v_a_2871_, v_a_2872_);
lean_dec(v_a_2872_);
lean_dec_ref(v_a_2871_);
lean_dec(v_a_2870_);
lean_dec_ref(v_a_2869_);
lean_dec(v_a_2868_);
lean_dec_ref(v_a_2867_);
lean_dec(v_a_2866_);
lean_dec_ref(v_a_2865_);
lean_dec(v_a_2864_);
lean_dec(v_a_2863_);
lean_dec_ref(v_rhs_2862_);
lean_dec_ref(v_lhs_2861_);
return v_res_2874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkEqCongrSymmProof___boxed(lean_object* v_lhs_2875_, lean_object* v_rhs_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_, lean_object* v_a_2881_, lean_object* v_a_2882_, lean_object* v_a_2883_, lean_object* v_a_2884_, lean_object* v_a_2885_, lean_object* v_a_2886_, lean_object* v_a_2887_){
_start:
{
lean_object* v_res_2888_; 
v_res_2888_ = l_Lean_Meta_Grind_mkEqCongrSymmProof(v_lhs_2875_, v_rhs_2876_, v_a_2877_, v_a_2878_, v_a_2879_, v_a_2880_, v_a_2881_, v_a_2882_, v_a_2883_, v_a_2884_, v_a_2885_, v_a_2886_);
lean_dec(v_a_2886_);
lean_dec_ref(v_a_2885_);
lean_dec(v_a_2884_);
lean_dec_ref(v_a_2883_);
lean_dec(v_a_2882_);
lean_dec_ref(v_a_2881_);
lean_dec(v_a_2880_);
lean_dec_ref(v_a_2879_);
lean_dec(v_a_2878_);
lean_dec(v_a_2877_);
lean_dec_ref(v_rhs_2876_);
lean_dec_ref(v_lhs_2875_);
return v_res_2888_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof___boxed(lean_object* v_lhs_2889_, lean_object* v_rhs_2890_, lean_object* v_heq_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_, lean_object* v_a_2895_, lean_object* v_a_2896_, lean_object* v_a_2897_, lean_object* v_a_2898_, lean_object* v_a_2899_, lean_object* v_a_2900_, lean_object* v_a_2901_, lean_object* v_a_2902_){
_start:
{
uint8_t v_heq_boxed_2903_; lean_object* v_res_2904_; 
v_heq_boxed_2903_ = lean_unbox(v_heq_2891_);
v_res_2904_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkCongrProof(v_lhs_2889_, v_rhs_2890_, v_heq_boxed_2903_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_, v_a_2899_, v_a_2900_, v_a_2901_);
lean_dec(v_a_2901_);
lean_dec_ref(v_a_2900_);
lean_dec(v_a_2899_);
lean_dec_ref(v_a_2898_);
lean_dec(v_a_2897_);
lean_dec_ref(v_a_2896_);
lean_dec(v_a_2895_);
lean_dec_ref(v_a_2894_);
lean_dec(v_a_2893_);
lean_dec(v_a_2892_);
return v_res_2904_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7(lean_object* v_00_u03b1_2905_, lean_object* v_ref_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_){
_start:
{
lean_object* v___x_2918_; 
v___x_2918_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___redArg(v_ref_2906_);
return v___x_2918_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7___boxed(lean_object* v_00_u03b1_2919_, lean_object* v_ref_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_){
_start:
{
lean_object* v_res_2932_; 
v_res_2932_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_mkEqCongrSymmProof_spec__7(v_00_u03b1_2919_, v_ref_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_);
lean_dec(v___y_2930_);
lean_dec_ref(v___y_2929_);
lean_dec(v___y_2928_);
lean_dec_ref(v___y_2927_);
lean_dec(v___y_2926_);
lean_dec_ref(v___y_2925_);
lean_dec(v___y_2924_);
lean_dec_ref(v___y_2923_);
lean_dec(v___y_2922_);
lean_dec(v___y_2921_);
return v_res_2932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7(lean_object* v_00_u03b1_2933_, lean_object* v_name_2934_, uint8_t v_bi_2935_, lean_object* v_type_2936_, lean_object* v_k_2937_, uint8_t v_kind_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_){
_start:
{
lean_object* v___x_2950_; 
v___x_2950_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___redArg(v_name_2934_, v_bi_2935_, v_type_2936_, v_k_2937_, v_kind_2938_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_);
return v___x_2950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7___boxed(lean_object** _args){
lean_object* v_00_u03b1_2951_ = _args[0];
lean_object* v_name_2952_ = _args[1];
lean_object* v_bi_2953_ = _args[2];
lean_object* v_type_2954_ = _args[3];
lean_object* v_k_2955_ = _args[4];
lean_object* v_kind_2956_ = _args[5];
lean_object* v___y_2957_ = _args[6];
lean_object* v___y_2958_ = _args[7];
lean_object* v___y_2959_ = _args[8];
lean_object* v___y_2960_ = _args[9];
lean_object* v___y_2961_ = _args[10];
lean_object* v___y_2962_ = _args[11];
lean_object* v___y_2963_ = _args[12];
lean_object* v___y_2964_ = _args[13];
lean_object* v___y_2965_ = _args[14];
lean_object* v___y_2966_ = _args[15];
lean_object* v___y_2967_ = _args[16];
_start:
{
uint8_t v_bi_boxed_2968_; uint8_t v_kind_boxed_2969_; lean_object* v_res_2970_; 
v_bi_boxed_2968_ = lean_unbox(v_bi_2953_);
v_kind_boxed_2969_ = lean_unbox(v_kind_2956_);
v_res_2970_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1_spec__7(v_00_u03b1_2951_, v_name_2952_, v_bi_boxed_2968_, v_type_2954_, v_k_2955_, v_kind_boxed_2969_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_, v___y_2964_, v___y_2965_, v___y_2966_);
lean_dec(v___y_2966_);
lean_dec_ref(v___y_2965_);
lean_dec(v___y_2964_);
lean_dec_ref(v___y_2963_);
lean_dec(v___y_2962_);
lean_dec_ref(v___y_2961_);
lean_dec(v___y_2960_);
lean_dec_ref(v___y_2959_);
lean_dec(v___y_2958_);
lean_dec(v___y_2957_);
return v_res_2970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1(lean_object* v_00_u03b1_2971_, lean_object* v_name_2972_, lean_object* v_type_2973_, lean_object* v_k_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_){
_start:
{
lean_object* v___x_2986_; 
v___x_2986_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1___redArg(v_name_2972_, v_type_2973_, v_k_2974_, v___y_2975_, v___y_2976_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_);
return v___x_2986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1___boxed(lean_object* v_00_u03b1_2987_, lean_object* v_name_2988_, lean_object* v_type_2989_, lean_object* v_k_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_){
_start:
{
lean_object* v_res_3002_; 
v_res_3002_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_x27_spec__1(v_00_u03b1_2987_, v_name_2988_, v_type_2989_, v_k_2990_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_, v___y_3000_);
lean_dec(v___y_3000_);
lean_dec_ref(v___y_2999_);
lean_dec(v___y_2998_);
lean_dec_ref(v___y_2997_);
lean_dec(v___y_2996_);
lean_dec_ref(v___y_2995_);
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
lean_dec(v___y_2992_);
lean_dec(v___y_2991_);
return v_res_3002_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10(lean_object* v_00_u03b1_3003_, lean_object* v_msg_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_){
_start:
{
lean_object* v___x_3016_; 
v___x_3016_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10___redArg(v_msg_3004_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_);
return v___x_3016_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10___boxed(lean_object* v_00_u03b1_3017_, lean_object* v_msg_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_){
_start:
{
lean_object* v_res_3030_; 
v_res_3030_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10(v_00_u03b1_3017_, v_msg_3018_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_);
lean_dec(v___y_3028_);
lean_dec_ref(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3025_);
lean_dec(v___y_3024_);
lean_dec_ref(v___y_3023_);
lean_dec(v___y_3022_);
lean_dec_ref(v___y_3021_);
lean_dec(v___y_3020_);
lean_dec(v___y_3019_);
return v_res_3030_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkEqProofImpl___closed__1(void){
_start:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; 
v___x_3032_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqProofImpl___closed__0));
v___x_3033_ = l_Lean_stringToMessageData(v___x_3032_);
return v___x_3033_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkEqProofImpl___closed__3(void){
_start:
{
lean_object* v___x_3035_; lean_object* v___x_3036_; 
v___x_3035_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqProofImpl___closed__2));
v___x_3036_ = l_Lean_stringToMessageData(v___x_3035_);
return v___x_3036_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkEqProofImpl___closed__5(void){
_start:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; 
v___x_3038_ = ((lean_object*)(l_Lean_Meta_Grind_mkEqProofImpl___closed__4));
v___x_3039_ = l_Lean_stringToMessageData(v___x_3038_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* lean_grind_mk_eq_proof(lean_object* v_a_3040_, lean_object* v_b_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_, lean_object* v_a_3044_, lean_object* v_a_3045_, lean_object* v_a_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_, lean_object* v_a_3049_, lean_object* v_a_3050_, lean_object* v_a_3051_){
_start:
{
lean_object* v___y_3054_; lean_object* v___y_3055_; lean_object* v___y_3056_; lean_object* v___y_3057_; lean_object* v___y_3058_; lean_object* v___y_3059_; lean_object* v___y_3060_; lean_object* v___y_3061_; lean_object* v___y_3062_; lean_object* v___y_3063_; lean_object* v___x_3066_; 
lean_inc_ref(v_b_3041_);
lean_inc_ref(v_a_3040_);
v___x_3066_ = l_Lean_Meta_Grind_hasSameType(v_a_3040_, v_b_3041_, v_a_3048_, v_a_3049_, v_a_3050_, v_a_3051_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v_a_3067_; uint8_t v___x_3068_; 
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3067_);
lean_dec_ref_known(v___x_3066_, 1);
v___x_3068_ = lean_unbox(v_a_3067_);
lean_dec(v_a_3067_);
if (v___x_3068_ == 0)
{
lean_object* v___x_3069_; 
lean_dec(v_a_3047_);
lean_dec_ref(v_a_3046_);
lean_dec(v_a_3045_);
lean_dec_ref(v_a_3044_);
lean_dec(v_a_3043_);
lean_dec(v_a_3042_);
lean_inc(v_a_3051_);
lean_inc_ref(v_a_3050_);
lean_inc(v_a_3049_);
lean_inc_ref(v_a_3048_);
lean_inc_ref(v_a_3040_);
v___x_3069_ = lean_infer_type(v_a_3040_, v_a_3048_, v_a_3049_, v_a_3050_, v_a_3051_);
if (lean_obj_tag(v___x_3069_) == 0)
{
lean_object* v_a_3070_; lean_object* v___x_3071_; 
v_a_3070_ = lean_ctor_get(v___x_3069_, 0);
lean_inc(v_a_3070_);
lean_dec_ref_known(v___x_3069_, 1);
lean_inc(v_a_3051_);
lean_inc_ref(v_a_3050_);
lean_inc(v_a_3049_);
lean_inc_ref(v_a_3048_);
lean_inc_ref(v_b_3041_);
v___x_3071_ = lean_infer_type(v_b_3041_, v_a_3048_, v_a_3049_, v_a_3050_, v_a_3051_);
if (lean_obj_tag(v___x_3071_) == 0)
{
lean_object* v_a_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v_a_3088_; lean_object* v___x_3090_; uint8_t v_isShared_3091_; uint8_t v_isSharedCheck_3095_; 
v_a_3072_ = lean_ctor_get(v___x_3071_, 0);
lean_inc(v_a_3072_);
lean_dec_ref_known(v___x_3071_, 1);
v___x_3073_ = lean_obj_once(&l_Lean_Meta_Grind_mkEqProofImpl___closed__1, &l_Lean_Meta_Grind_mkEqProofImpl___closed__1_once, _init_l_Lean_Meta_Grind_mkEqProofImpl___closed__1);
v___x_3074_ = l_Lean_indentExpr(v_a_3040_);
v___x_3075_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3073_);
lean_ctor_set(v___x_3075_, 1, v___x_3074_);
v___x_3076_ = lean_obj_once(&l_Lean_Meta_Grind_mkEqProofImpl___closed__3, &l_Lean_Meta_Grind_mkEqProofImpl___closed__3_once, _init_l_Lean_Meta_Grind_mkEqProofImpl___closed__3);
v___x_3077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3077_, 0, v___x_3075_);
lean_ctor_set(v___x_3077_, 1, v___x_3076_);
v___x_3078_ = l_Lean_indentExpr(v_a_3070_);
v___x_3079_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3079_, 0, v___x_3077_);
lean_ctor_set(v___x_3079_, 1, v___x_3078_);
v___x_3080_ = lean_obj_once(&l_Lean_Meta_Grind_mkEqProofImpl___closed__5, &l_Lean_Meta_Grind_mkEqProofImpl___closed__5_once, _init_l_Lean_Meta_Grind_mkEqProofImpl___closed__5);
v___x_3081_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3081_, 0, v___x_3079_);
lean_ctor_set(v___x_3081_, 1, v___x_3080_);
v___x_3082_ = l_Lean_indentExpr(v_b_3041_);
v___x_3083_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3083_, 0, v___x_3081_);
lean_ctor_set(v___x_3083_, 1, v___x_3082_);
v___x_3084_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3084_, 0, v___x_3083_);
lean_ctor_set(v___x_3084_, 1, v___x_3076_);
v___x_3085_ = l_Lean_indentExpr(v_a_3072_);
v___x_3086_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3086_, 0, v___x_3084_);
lean_ctor_set(v___x_3086_, 1, v___x_3085_);
v___x_3087_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkHCongrProof_spec__10___redArg(v___x_3086_, v_a_3048_, v_a_3049_, v_a_3050_, v_a_3051_);
lean_dec(v_a_3051_);
lean_dec_ref(v_a_3050_);
lean_dec(v_a_3049_);
lean_dec_ref(v_a_3048_);
v_a_3088_ = lean_ctor_get(v___x_3087_, 0);
v_isSharedCheck_3095_ = !lean_is_exclusive(v___x_3087_);
if (v_isSharedCheck_3095_ == 0)
{
v___x_3090_ = v___x_3087_;
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
else
{
lean_inc(v_a_3088_);
lean_dec(v___x_3087_);
v___x_3090_ = lean_box(0);
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
v_resetjp_3089_:
{
lean_object* v___x_3093_; 
if (v_isShared_3091_ == 0)
{
v___x_3093_ = v___x_3090_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v_a_3088_);
v___x_3093_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
return v___x_3093_;
}
}
}
else
{
lean_dec(v_a_3070_);
lean_dec(v_a_3051_);
lean_dec_ref(v_a_3050_);
lean_dec(v_a_3049_);
lean_dec_ref(v_a_3048_);
lean_dec_ref(v_b_3041_);
lean_dec_ref(v_a_3040_);
return v___x_3071_;
}
}
else
{
lean_dec(v_a_3051_);
lean_dec_ref(v_a_3050_);
lean_dec(v_a_3049_);
lean_dec_ref(v_a_3048_);
lean_dec_ref(v_b_3041_);
lean_dec_ref(v_a_3040_);
return v___x_3069_;
}
}
else
{
v___y_3054_ = v_a_3042_;
v___y_3055_ = v_a_3043_;
v___y_3056_ = v_a_3044_;
v___y_3057_ = v_a_3045_;
v___y_3058_ = v_a_3046_;
v___y_3059_ = v_a_3047_;
v___y_3060_ = v_a_3048_;
v___y_3061_ = v_a_3049_;
v___y_3062_ = v_a_3050_;
v___y_3063_ = v_a_3051_;
goto v___jp_3053_;
}
}
else
{
lean_object* v_a_3096_; lean_object* v___x_3098_; uint8_t v_isShared_3099_; uint8_t v_isSharedCheck_3103_; 
lean_dec(v_a_3051_);
lean_dec_ref(v_a_3050_);
lean_dec(v_a_3049_);
lean_dec_ref(v_a_3048_);
lean_dec(v_a_3047_);
lean_dec_ref(v_a_3046_);
lean_dec(v_a_3045_);
lean_dec_ref(v_a_3044_);
lean_dec(v_a_3043_);
lean_dec(v_a_3042_);
lean_dec_ref(v_b_3041_);
lean_dec_ref(v_a_3040_);
v_a_3096_ = lean_ctor_get(v___x_3066_, 0);
v_isSharedCheck_3103_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3103_ == 0)
{
v___x_3098_ = v___x_3066_;
v_isShared_3099_ = v_isSharedCheck_3103_;
goto v_resetjp_3097_;
}
else
{
lean_inc(v_a_3096_);
lean_dec(v___x_3066_);
v___x_3098_ = lean_box(0);
v_isShared_3099_ = v_isSharedCheck_3103_;
goto v_resetjp_3097_;
}
v_resetjp_3097_:
{
lean_object* v___x_3101_; 
if (v_isShared_3099_ == 0)
{
v___x_3101_ = v___x_3098_;
goto v_reusejp_3100_;
}
else
{
lean_object* v_reuseFailAlloc_3102_; 
v_reuseFailAlloc_3102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3102_, 0, v_a_3096_);
v___x_3101_ = v_reuseFailAlloc_3102_;
goto v_reusejp_3100_;
}
v_reusejp_3100_:
{
return v___x_3101_;
}
}
}
v___jp_3053_:
{
uint8_t v___x_3064_; lean_object* v___x_3065_; 
v___x_3064_ = 0;
v___x_3065_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_a_3040_, v_b_3041_, v___x_3064_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_, v___y_3061_, v___y_3062_, v___y_3063_);
lean_dec(v___y_3063_);
lean_dec_ref(v___y_3062_);
lean_dec(v___y_3061_);
lean_dec_ref(v___y_3060_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
lean_dec(v___y_3055_);
lean_dec(v___y_3054_);
return v___x_3065_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkEqProofImpl___boxed(lean_object* v_a_3104_, lean_object* v_b_3105_, lean_object* v_a_3106_, lean_object* v_a_3107_, lean_object* v_a_3108_, lean_object* v_a_3109_, lean_object* v_a_3110_, lean_object* v_a_3111_, lean_object* v_a_3112_, lean_object* v_a_3113_, lean_object* v_a_3114_, lean_object* v_a_3115_, lean_object* v_a_3116_){
_start:
{
lean_object* v_res_3117_; 
v_res_3117_ = lean_grind_mk_eq_proof(v_a_3104_, v_b_3105_, v_a_3106_, v_a_3107_, v_a_3108_, v_a_3109_, v_a_3110_, v_a_3111_, v_a_3112_, v_a_3113_, v_a_3114_, v_a_3115_);
return v_res_3117_;
}
}
LEAN_EXPORT lean_object* lean_grind_mk_heq_proof(lean_object* v_a_3118_, lean_object* v_b_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_, lean_object* v_a_3127_, lean_object* v_a_3128_, lean_object* v_a_3129_){
_start:
{
uint8_t v___x_3131_; lean_object* v___x_3132_; 
v___x_3131_ = 1;
v___x_3132_ = l___private_Lean_Meta_Tactic_Grind_Proof_0__Lean_Meta_Grind_mkEqProofCore(v_a_3118_, v_b_3119_, v___x_3131_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_, v_a_3129_);
lean_dec(v_a_3129_);
lean_dec_ref(v_a_3128_);
lean_dec(v_a_3127_);
lean_dec_ref(v_a_3126_);
lean_dec(v_a_3125_);
lean_dec_ref(v_a_3124_);
lean_dec(v_a_3123_);
lean_dec_ref(v_a_3122_);
lean_dec(v_a_3121_);
lean_dec(v_a_3120_);
return v___x_3132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkHEqProofImpl___boxed(lean_object* v_a_3133_, lean_object* v_b_3134_, lean_object* v_a_3135_, lean_object* v_a_3136_, lean_object* v_a_3137_, lean_object* v_a_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_, lean_object* v_a_3144_, lean_object* v_a_3145_){
_start:
{
lean_object* v_res_3146_; 
v_res_3146_ = lean_grind_mk_heq_proof(v_a_3133_, v_b_3134_, v_a_3135_, v_a_3136_, v_a_3137_, v_a_3138_, v_a_3139_, v_a_3140_, v_a_3141_, v_a_3142_, v_a_3143_, v_a_3144_);
return v_res_3146_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Proof(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Proof(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* initialize_Init_Grind_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Proof(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Proof(builtin);
}
#ifdef __cplusplus
}
#endif
