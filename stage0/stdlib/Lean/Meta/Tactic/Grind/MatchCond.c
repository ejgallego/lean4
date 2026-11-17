// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.MatchCond
// Imports: import Init.Grind import Lean.Meta.Tactic.Contradiction import Lean.Meta.Tactic.Grind.ProveEq public import Lean.Meta.Tactic.Grind.PropagatorAttr
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
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Meta_Grind_getRootENode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isConstructorApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkGenDiseqMask(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_proveEq_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_proveHEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isLitValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* l_Lean_Meta_Grind_isEqv___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_hasAssignableMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrueCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isBVar(lean_object*);
lean_object* l_Lean_Meta_Grind_registerParent___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_normLitValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Meta_mkDecideProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_hasSameType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_mk_heq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getRootENode_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_closeGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss_spec__0___redArg(lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_replaceLhss(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_replaceLhss___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ty"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(73, 30, 115, 12, 44, 231, 45, 94)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_match__3_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_match__3_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "MatchCond"};
static const lean_object* l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__2_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__3_value),LEAN_SCALAR_PTR_LITERAL(109, 233, 187, 249, 156, 65, 204, 232)}};
static const lean_object* l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchCond"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(181, 170, 56, 23, 185, 62, 169, 45)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__3_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__4 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__5 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__5_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "satifised"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__7 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__7_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__8;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "\nthe following equality is false"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__9 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__9_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__10;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___lam__0___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "found term that has not been internalized"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "\nwhile trying to construct a proof for `MatchCond`"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "go\?: "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ">>> "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isPatternLike___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isPatternLike___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isPatternLike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isPatternLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_tryToProveFalse_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_tryToProveFalse_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_tryToProveFalse_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_tryToProveFalse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_tryToProveFalse___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_tryToProveFalse___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "proveFalse"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(181, 170, 56, 23, 185, 62, 169, 45)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(234, 57, 131, 114, 246, 81, 253, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " =\?= "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_tryToProveFalse___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_Meta_Grind_tryToProveFalse___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_tryToProveFalse___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_tryToProveFalse___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_tryToProveFalse___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_tryToProveFalse___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_tryToProveFalse___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_tryToProveFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_tryToProveFalse___lam__0___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__1_value)} };
static const lean_object* l_Lean_Meta_Grind_tryToProveFalse___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_tryToProveFalse___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_tryToProveFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_tryToProveFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_propagateMatchCondUp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "failed to construct proof for"};
static const lean_object* l_Lean_Meta_Grind_propagateMatchCondUp___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateMatchCondUp___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateMatchCondUp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateMatchCondUp___closed__1;
static const lean_string_object l_Lean_Meta_Grind_propagateMatchCondUp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "visiting"};
static const lean_object* l_Lean_Meta_Grind_propagateMatchCondUp___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateMatchCondUp___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateMatchCondUp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateMatchCondUp___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateMatchCondUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateMatchCondUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_propagateMatchCondUp___regBuiltin_Lean_Meta_Grind_propagateMatchCondUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_MatchCond_1804808425____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_propagateMatchCondUp___regBuiltin_Lean_Meta_Grind_propagateMatchCondUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_MatchCond_1804808425____hygCtx___hyg_9____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateMatchCondDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateMatchCondDown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_propagateMatchCondDown___regBuiltin_Lean_Meta_Grind_propagateMatchCondDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_MatchCond_2992396906____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_propagateMatchCondDown___regBuiltin_Lean_Meta_Grind_propagateMatchCondDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_MatchCond_2992396906____hygCtx___hyg_9____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f(lean_object* v_e_7_){
_start:
{
lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_8_ = l_Lean_Expr_cleanupAnnotations(v_e_7_);
v___x_9_ = l_Lean_Expr_isApp(v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; 
lean_dec_ref(v___x_8_);
v___x_10_ = lean_box(0);
return v___x_10_;
}
else
{
lean_object* v___x_11_; uint8_t v___x_12_; 
v___x_11_ = l_Lean_Expr_appFnCleanup___redArg(v___x_8_);
v___x_12_ = l_Lean_Expr_isApp(v___x_11_);
if (v___x_12_ == 0)
{
lean_object* v___x_13_; 
lean_dec_ref(v___x_11_);
lean_dec_ref(v___x_8_);
v___x_13_ = lean_box(0);
return v___x_13_;
}
else
{
lean_object* v___x_14_; uint8_t v___x_15_; 
v___x_14_ = l_Lean_Expr_appFnCleanup___redArg(v___x_11_);
v___x_15_ = l_Lean_Expr_isApp(v___x_14_);
if (v___x_15_ == 0)
{
lean_object* v___x_16_; 
lean_dec_ref(v___x_14_);
lean_dec_ref(v___x_11_);
lean_dec_ref(v___x_8_);
v___x_16_ = lean_box(0);
return v___x_16_;
}
else
{
lean_object* v_arg_17_; lean_object* v___x_18_; lean_object* v___x_19_; uint8_t v___x_20_; 
v_arg_17_ = lean_ctor_get(v___x_8_, 1);
lean_inc_ref(v_arg_17_);
lean_dec_ref(v___x_8_);
v___x_18_ = l_Lean_Expr_appFnCleanup___redArg(v___x_14_);
v___x_19_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__1));
v___x_20_ = l_Lean_Expr_isConstOf(v___x_18_, v___x_19_);
if (v___x_20_ == 0)
{
uint8_t v___x_21_; 
lean_dec_ref(v___x_11_);
v___x_21_ = l_Lean_Expr_isApp(v___x_18_);
if (v___x_21_ == 0)
{
lean_object* v___x_22_; 
lean_dec_ref(v___x_18_);
lean_dec_ref(v_arg_17_);
lean_dec_ref(v___x_14_);
v___x_22_ = lean_box(0);
return v___x_22_;
}
else
{
lean_object* v___x_23_; lean_object* v___x_24_; uint8_t v___x_25_; 
v___x_23_ = l_Lean_Expr_appFnCleanup___redArg(v___x_18_);
v___x_24_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__3));
v___x_25_ = l_Lean_Expr_isConstOf(v___x_23_, v___x_24_);
lean_dec_ref(v___x_23_);
if (v___x_25_ == 0)
{
lean_object* v___x_26_; 
lean_dec_ref(v___x_18_);
lean_dec_ref(v_arg_17_);
lean_dec_ref(v___x_14_);
v___x_26_ = lean_box(0);
return v___x_26_;
}
else
{
lean_object* v_arg_27_; lean_object* v_arg_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v_arg_27_ = lean_ctor_get(v___x_14_, 1);
lean_inc_ref(v_arg_27_);
lean_dec_ref(v___x_14_);
v_arg_28_ = lean_ctor_get(v___x_18_, 1);
lean_inc_ref(v_arg_28_);
lean_dec_ref(v___x_18_);
v___x_29_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_29_, 0, v_arg_28_);
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v_arg_27_);
lean_ctor_set(v___x_30_, 1, v_arg_17_);
v___x_31_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_31_, 0, v___x_29_);
lean_ctor_set(v___x_31_, 1, v___x_30_);
v___x_32_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
return v___x_32_;
}
}
}
else
{
lean_object* v_arg_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
lean_dec_ref(v___x_18_);
lean_dec_ref(v___x_14_);
v_arg_33_ = lean_ctor_get(v___x_11_, 1);
lean_inc_ref(v_arg_33_);
lean_dec_ref(v___x_11_);
v___x_34_ = lean_box(0);
v___x_35_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_35_, 0, v_arg_33_);
lean_ctor_set(v___x_35_, 1, v_arg_17_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v___x_34_);
lean_ctor_set(v___x_36_, 1, v___x_35_);
v___x_37_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
return v___x_37_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___boxed(lean_object* v_e_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f(v_e_38_);
lean_dec_ref(v_e_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss_spec__0___redArg___lam__0(lean_object* v_body_40_, lean_object* v___x_41_, lean_object* v_____r_42_, lean_object* v_r_43_){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_44_, 0, v_r_43_);
lean_ctor_set(v___x_44_, 1, v_body_40_);
v___x_45_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_45_, 0, v___x_41_);
lean_ctor_set(v___x_45_, 1, v___x_44_);
v___x_46_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss_spec__0___redArg(lean_object* v_a_47_){
_start:
{
lean_object* v___y_49_; lean_object* v_snd_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_96_; 
v_snd_53_ = lean_ctor_get(v_a_47_, 1);
v_isSharedCheck_96_ = !lean_is_exclusive(v_a_47_);
if (v_isSharedCheck_96_ == 0)
{
lean_object* v_unused_97_; 
v_unused_97_ = lean_ctor_get(v_a_47_, 0);
lean_dec(v_unused_97_);
v___x_55_ = v_a_47_;
v_isShared_56_ = v_isSharedCheck_96_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_snd_53_);
lean_dec(v_a_47_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_96_;
goto v_resetjp_54_;
}
v___jp_48_:
{
if (lean_obj_tag(v___y_49_) == 0)
{
lean_object* v_a_50_; 
v_a_50_ = lean_ctor_get(v___y_49_, 0);
lean_inc(v_a_50_);
lean_dec_ref_known(v___y_49_, 1);
return v_a_50_;
}
else
{
lean_object* v_a_51_; 
v_a_51_ = lean_ctor_get(v___y_49_, 0);
lean_inc(v_a_51_);
lean_dec_ref_known(v___y_49_, 1);
v_a_47_ = v_a_51_;
goto _start;
}
}
v_resetjp_54_:
{
lean_object* v_snd_57_; 
v_snd_57_ = lean_ctor_get(v_snd_53_, 1);
lean_inc(v_snd_57_);
if (lean_obj_tag(v_snd_57_) == 7)
{
lean_object* v_fst_58_; lean_object* v_binderType_59_; lean_object* v_body_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
lean_del_object(v___x_55_);
v_fst_58_ = lean_ctor_get(v_snd_53_, 0);
lean_inc(v_fst_58_);
lean_dec(v_snd_53_);
v_binderType_59_ = lean_ctor_get(v_snd_57_, 1);
lean_inc_ref(v_binderType_59_);
v_body_60_ = lean_ctor_get(v_snd_57_, 2);
lean_inc_ref(v_body_60_);
lean_dec_ref_known(v_snd_57_, 3);
v___x_61_ = lean_box(0);
v___x_62_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f(v_binderType_59_);
lean_dec_ref(v_binderType_59_);
if (lean_obj_tag(v___x_62_) == 1)
{
lean_object* v_val_63_; lean_object* v_snd_64_; lean_object* v_fst_65_; lean_object* v_fst_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_79_; 
v_val_63_ = lean_ctor_get(v___x_62_, 0);
lean_inc(v_val_63_);
lean_dec_ref_known(v___x_62_, 1);
v_snd_64_ = lean_ctor_get(v_val_63_, 1);
lean_inc(v_snd_64_);
v_fst_65_ = lean_ctor_get(v_val_63_, 0);
lean_inc(v_fst_65_);
lean_dec(v_val_63_);
v_fst_66_ = lean_ctor_get(v_snd_64_, 0);
v_isSharedCheck_79_ = !lean_is_exclusive(v_snd_64_);
if (v_isSharedCheck_79_ == 0)
{
lean_object* v_unused_80_; 
v_unused_80_ = lean_ctor_get(v_snd_64_, 1);
lean_dec(v_unused_80_);
v___x_68_ = v_snd_64_;
v_isShared_69_ = v_isSharedCheck_79_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_fst_66_);
lean_dec(v_snd_64_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_79_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
uint8_t v___x_70_; 
v___x_70_ = l_Lean_Expr_hasLooseBVars(v_fst_66_);
if (v___x_70_ == 0)
{
lean_object* v___x_72_; 
if (v_isShared_69_ == 0)
{
lean_ctor_set(v___x_68_, 1, v_fst_65_);
v___x_72_ = v___x_68_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_fst_66_);
lean_ctor_set(v_reuseFailAlloc_76_, 1, v_fst_65_);
v___x_72_ = v_reuseFailAlloc_76_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_73_ = lean_array_push(v_fst_58_, v___x_72_);
v___x_74_ = lean_box(0);
v___x_75_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss_spec__0___redArg___lam__0(v_body_60_, v___x_61_, v___x_74_, v___x_73_);
v___y_49_ = v___x_75_;
goto v___jp_48_;
}
}
else
{
lean_object* v___x_77_; lean_object* v___x_78_; 
lean_del_object(v___x_68_);
lean_dec(v_fst_66_);
lean_dec(v_fst_65_);
v___x_77_ = lean_box(0);
v___x_78_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss_spec__0___redArg___lam__0(v_body_60_, v___x_61_, v___x_77_, v_fst_58_);
v___y_49_ = v___x_78_;
goto v___jp_48_;
}
}
}
else
{
lean_object* v___x_81_; lean_object* v___x_82_; 
lean_dec(v___x_62_);
v___x_81_ = lean_box(0);
v___x_82_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss_spec__0___redArg___lam__0(v_body_60_, v___x_61_, v___x_81_, v_fst_58_);
v___y_49_ = v___x_82_;
goto v___jp_48_;
}
}
else
{
lean_object* v_fst_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_94_; 
v_fst_83_ = lean_ctor_get(v_snd_53_, 0);
v_isSharedCheck_94_ = !lean_is_exclusive(v_snd_53_);
if (v_isSharedCheck_94_ == 0)
{
lean_object* v_unused_95_; 
v_unused_95_ = lean_ctor_get(v_snd_53_, 1);
lean_dec(v_unused_95_);
v___x_85_ = v_snd_53_;
v_isShared_86_ = v_isSharedCheck_94_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_fst_83_);
lean_dec(v_snd_53_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_94_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_87_; lean_object* v___x_89_; 
lean_inc(v_fst_83_);
v___x_87_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_87_, 0, v_fst_83_);
if (v_isShared_86_ == 0)
{
v___x_89_ = v___x_85_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v_fst_83_);
lean_ctor_set(v_reuseFailAlloc_93_, 1, v_snd_57_);
v___x_89_ = v_reuseFailAlloc_93_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
lean_object* v___x_91_; 
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 1, v___x_89_);
lean_ctor_set(v___x_55_, 0, v___x_87_);
v___x_91_ = v___x_55_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v___x_87_);
lean_ctor_set(v_reuseFailAlloc_92_, 1, v___x_89_);
v___x_91_ = v_reuseFailAlloc_92_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
return v___x_91_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss(lean_object* v_e_100_){
_start:
{
lean_object* v_r_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v_fst_106_; 
v_r_101_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss___closed__0));
v___x_102_ = lean_box(0);
v___x_103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_103_, 0, v_r_101_);
lean_ctor_set(v___x_103_, 1, v_e_100_);
v___x_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_102_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
v___x_105_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss_spec__0___redArg(v___x_104_);
v_fst_106_ = lean_ctor_get(v___x_105_, 0);
if (lean_obj_tag(v_fst_106_) == 0)
{
lean_object* v_snd_107_; lean_object* v_fst_108_; 
v_snd_107_ = lean_ctor_get(v___x_105_, 1);
lean_inc(v_snd_107_);
lean_dec_ref(v___x_105_);
v_fst_108_ = lean_ctor_get(v_snd_107_, 0);
lean_inc(v_fst_108_);
lean_dec(v_snd_107_);
return v_fst_108_;
}
else
{
lean_object* v_val_109_; 
lean_inc_ref(v_fst_106_);
lean_dec_ref(v___x_105_);
v_val_109_ = lean_ctor_get(v_fst_106_, 0);
lean_inc(v_val_109_);
lean_dec_ref_known(v_fst_106_, 1);
return v_val_109_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss_spec__0(lean_object* v_inst_110_, lean_object* v_a_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss_spec__0___redArg(v_a_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f_spec__0(lean_object* v_msg_113_){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = l_Lean_instInhabitedExpr;
v___x_115_ = lean_panic_fn_borrowed(v___x_114_, v_msg_113_);
return v___x_115_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__3(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_119_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__2));
v___x_120_ = lean_unsigned_to_nat(14u);
v___x_121_ = lean_unsigned_to_nat(22u);
v___x_122_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__1));
v___x_123_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__0));
v___x_124_ = l_mkPanicMessageWithDecl(v___x_123_, v___x_122_, v___x_121_, v___x_120_, v___x_119_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f(lean_object* v_e_125_, lean_object* v_lhsNew_126_, lean_object* v_ty_x3f_127_){
_start:
{
lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_128_ = l_Lean_Expr_cleanupAnnotations(v_e_125_);
v___x_129_ = l_Lean_Expr_isApp(v___x_128_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; 
lean_dec_ref(v___x_128_);
lean_dec(v_ty_x3f_127_);
lean_dec_ref(v_lhsNew_126_);
v___x_130_ = lean_box(0);
return v___x_130_;
}
else
{
lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_131_ = l_Lean_Expr_appFnCleanup___redArg(v___x_128_);
v___x_132_ = l_Lean_Expr_isApp(v___x_131_);
if (v___x_132_ == 0)
{
lean_object* v___x_133_; 
lean_dec_ref(v___x_131_);
lean_dec_ref(v___x_128_);
lean_dec(v_ty_x3f_127_);
lean_dec_ref(v_lhsNew_126_);
v___x_133_ = lean_box(0);
return v___x_133_;
}
else
{
lean_object* v___x_134_; uint8_t v___x_135_; 
v___x_134_ = l_Lean_Expr_appFnCleanup___redArg(v___x_131_);
v___x_135_ = l_Lean_Expr_isApp(v___x_134_);
if (v___x_135_ == 0)
{
lean_object* v___x_136_; 
lean_dec_ref(v___x_134_);
lean_dec_ref(v___x_131_);
lean_dec_ref(v___x_128_);
lean_dec(v_ty_x3f_127_);
lean_dec_ref(v_lhsNew_126_);
v___x_136_ = lean_box(0);
return v___x_136_;
}
else
{
lean_object* v_arg_137_; lean_object* v_arg_138_; lean_object* v_arg_139_; lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v_arg_137_ = lean_ctor_get(v___x_128_, 1);
lean_inc_ref(v_arg_137_);
lean_dec_ref(v___x_128_);
v_arg_138_ = lean_ctor_get(v___x_131_, 1);
lean_inc_ref(v_arg_138_);
lean_dec_ref(v___x_131_);
v_arg_139_ = lean_ctor_get(v___x_134_, 1);
lean_inc_ref(v_arg_139_);
v___x_140_ = l_Lean_Expr_appFnCleanup___redArg(v___x_134_);
lean_dec_ref(v___x_134_);
v___x_141_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__1));
v___x_142_ = l_Lean_Expr_isConstOf(v___x_140_, v___x_141_);
if (v___x_142_ == 0)
{
uint8_t v___x_143_; 
v___x_143_ = l_Lean_Expr_isApp(v___x_140_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; 
lean_dec_ref(v___x_140_);
lean_dec_ref(v_arg_139_);
lean_dec_ref(v_arg_138_);
lean_dec_ref(v_arg_137_);
lean_dec(v_ty_x3f_127_);
lean_dec_ref(v_lhsNew_126_);
v___x_144_ = lean_box(0);
return v___x_144_;
}
else
{
lean_object* v___x_145_; lean_object* v___y_147_; lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_145_ = l_Lean_Expr_appFnCleanup___redArg(v___x_140_);
lean_dec_ref(v___x_140_);
v___x_150_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f___closed__3));
v___x_151_ = l_Lean_Expr_isConstOf(v___x_145_, v___x_150_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; 
lean_dec_ref(v___x_145_);
lean_dec_ref(v_arg_139_);
lean_dec_ref(v_arg_138_);
lean_dec_ref(v_arg_137_);
lean_dec(v_ty_x3f_127_);
lean_dec_ref(v_lhsNew_126_);
v___x_152_ = lean_box(0);
return v___x_152_;
}
else
{
uint8_t v___x_153_; 
v___x_153_ = l_Lean_Expr_hasLooseBVars(v_arg_139_);
lean_dec_ref(v_arg_139_);
if (v___x_153_ == 0)
{
if (lean_obj_tag(v_ty_x3f_127_) == 0)
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__3, &l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___closed__3);
v___x_155_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f_spec__0(v___x_154_);
v___y_147_ = v___x_155_;
goto v___jp_146_;
}
else
{
lean_object* v_val_156_; 
v_val_156_ = lean_ctor_get(v_ty_x3f_127_, 0);
lean_inc(v_val_156_);
lean_dec_ref_known(v_ty_x3f_127_, 1);
v___y_147_ = v_val_156_;
goto v___jp_146_;
}
}
else
{
lean_object* v___x_157_; 
lean_dec_ref(v___x_145_);
lean_dec_ref(v_arg_138_);
lean_dec_ref(v_arg_137_);
lean_dec(v_ty_x3f_127_);
lean_dec_ref(v_lhsNew_126_);
v___x_157_ = lean_box(0);
return v___x_157_;
}
}
v___jp_146_:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = l_Lean_mkApp4(v___x_145_, v___y_147_, v_lhsNew_126_, v_arg_138_, v_arg_137_);
v___x_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
return v___x_149_;
}
}
}
else
{
uint8_t v___x_158_; 
lean_dec(v_ty_x3f_127_);
v___x_158_ = l_Lean_Expr_hasLooseBVars(v_arg_138_);
lean_dec_ref(v_arg_138_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = l_Lean_mkApp3(v___x_140_, v_arg_139_, v_lhsNew_126_, v_arg_137_);
v___x_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
return v___x_160_;
}
else
{
lean_object* v___x_161_; 
lean_dec_ref(v___x_140_);
lean_dec_ref(v_arg_139_);
lean_dec_ref(v_arg_137_);
lean_dec_ref(v_lhsNew_126_);
v___x_161_ = lean_box(0);
return v___x_161_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f___boxed(lean_object* v_e_162_, lean_object* v_lhsNew_163_, lean_object* v_ty_x3f_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f(v_e_162_, v_lhsNew_163_, v_ty_x3f_164_);
lean_dec_ref(v_e_162_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_replaceLhss(lean_object* v_xs_166_, lean_object* v_tys_167_, lean_object* v_e_168_, lean_object* v_i_169_){
_start:
{
if (lean_obj_tag(v_e_168_) == 7)
{
lean_object* v_binderName_170_; lean_object* v_binderType_171_; lean_object* v_body_172_; uint8_t v_binderInfo_173_; lean_object* v___x_174_; uint8_t v___x_175_; 
v_binderName_170_ = lean_ctor_get(v_e_168_, 0);
v_binderType_171_ = lean_ctor_get(v_e_168_, 1);
v_body_172_ = lean_ctor_get(v_e_168_, 2);
v_binderInfo_173_ = lean_ctor_get_uint8(v_e_168_, sizeof(void*)*3 + 8);
v___x_174_ = lean_array_get_size(v_xs_166_);
v___x_175_ = lean_nat_dec_lt(v_i_169_, v___x_174_);
if (v___x_175_ == 0)
{
return v_e_168_;
}
else
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_176_ = lean_box(0);
v___x_177_ = lean_array_fget_borrowed(v_xs_166_, v_i_169_);
v___x_178_ = lean_array_get_borrowed(v___x_176_, v_tys_167_, v_i_169_);
lean_inc(v___x_178_);
lean_inc(v___x_177_);
v___x_179_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_replaceLhs_x3f(v_binderType_171_, v___x_177_, v___x_178_);
if (lean_obj_tag(v___x_179_) == 1)
{
lean_object* v_val_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; size_t v___x_184_; size_t v___x_185_; uint8_t v___x_186_; 
v_val_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc(v_val_180_);
lean_dec_ref_known(v___x_179_, 1);
v___x_181_ = lean_unsigned_to_nat(1u);
v___x_182_ = lean_nat_add(v_i_169_, v___x_181_);
lean_inc_ref(v_body_172_);
v___x_183_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_replaceLhss(v_xs_166_, v_tys_167_, v_body_172_, v___x_182_);
lean_dec(v___x_182_);
v___x_184_ = lean_ptr_addr(v_binderType_171_);
v___x_185_ = lean_ptr_addr(v_val_180_);
v___x_186_ = lean_usize_dec_eq(v___x_184_, v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; 
lean_inc(v_binderName_170_);
lean_dec_ref_known(v_e_168_, 3);
v___x_187_ = l_Lean_Expr_forallE___override(v_binderName_170_, v_val_180_, v___x_183_, v_binderInfo_173_);
return v___x_187_;
}
else
{
size_t v___x_188_; size_t v___x_189_; uint8_t v___x_190_; 
v___x_188_ = lean_ptr_addr(v_body_172_);
v___x_189_ = lean_ptr_addr(v___x_183_);
v___x_190_ = lean_usize_dec_eq(v___x_188_, v___x_189_);
if (v___x_190_ == 0)
{
lean_object* v___x_191_; 
lean_inc(v_binderName_170_);
lean_dec_ref_known(v_e_168_, 3);
v___x_191_ = l_Lean_Expr_forallE___override(v_binderName_170_, v_val_180_, v___x_183_, v_binderInfo_173_);
return v___x_191_;
}
else
{
uint8_t v___x_192_; 
v___x_192_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_173_, v_binderInfo_173_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; 
lean_inc(v_binderName_170_);
lean_dec_ref_known(v_e_168_, 3);
v___x_193_ = l_Lean_Expr_forallE___override(v_binderName_170_, v_val_180_, v___x_183_, v_binderInfo_173_);
return v___x_193_;
}
else
{
lean_dec_ref(v___x_183_);
lean_dec(v_val_180_);
return v_e_168_;
}
}
}
}
else
{
lean_object* v___x_194_; size_t v___x_195_; size_t v___x_196_; uint8_t v___x_197_; 
lean_dec(v___x_179_);
lean_inc_ref(v_body_172_);
v___x_194_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_replaceLhss(v_xs_166_, v_tys_167_, v_body_172_, v_i_169_);
v___x_195_ = lean_ptr_addr(v_binderType_171_);
v___x_196_ = lean_ptr_addr(v_binderType_171_);
v___x_197_ = lean_usize_dec_eq(v___x_195_, v___x_196_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; 
lean_inc_ref(v_binderType_171_);
lean_inc(v_binderName_170_);
lean_dec_ref_known(v_e_168_, 3);
v___x_198_ = l_Lean_Expr_forallE___override(v_binderName_170_, v_binderType_171_, v___x_194_, v_binderInfo_173_);
return v___x_198_;
}
else
{
size_t v___x_199_; size_t v___x_200_; uint8_t v___x_201_; 
v___x_199_ = lean_ptr_addr(v_body_172_);
v___x_200_ = lean_ptr_addr(v___x_194_);
v___x_201_ = lean_usize_dec_eq(v___x_199_, v___x_200_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; 
lean_inc_ref(v_binderType_171_);
lean_inc(v_binderName_170_);
lean_dec_ref_known(v_e_168_, 3);
v___x_202_ = l_Lean_Expr_forallE___override(v_binderName_170_, v_binderType_171_, v___x_194_, v_binderInfo_173_);
return v___x_202_;
}
else
{
uint8_t v___x_203_; 
v___x_203_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_173_, v_binderInfo_173_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; 
lean_inc_ref(v_binderType_171_);
lean_inc(v_binderName_170_);
lean_dec_ref_known(v_e_168_, 3);
v___x_204_ = l_Lean_Expr_forallE___override(v_binderName_170_, v_binderType_171_, v___x_194_, v_binderInfo_173_);
return v___x_204_;
}
else
{
lean_dec_ref(v___x_194_);
return v_e_168_;
}
}
}
}
}
}
else
{
return v_e_168_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_replaceLhss___boxed(lean_object* v_xs_205_, lean_object* v_tys_206_, lean_object* v_e_207_, lean_object* v_i_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_replaceLhss(v_xs_205_, v_tys_206_, v_e_207_, v_i_208_);
lean_dec(v_i_208_);
lean_dec_ref(v_tys_206_);
lean_dec_ref(v_xs_205_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___redArg___lam__0(lean_object* v_k_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v_b_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
lean_object* v___x_223_; 
lean_inc(v___y_221_);
lean_inc_ref(v___y_220_);
lean_inc(v___y_219_);
lean_inc_ref(v___y_218_);
lean_inc(v___y_216_);
lean_inc_ref(v___y_215_);
lean_inc(v___y_214_);
lean_inc_ref(v___y_213_);
lean_inc(v___y_212_);
lean_inc(v___y_211_);
v___x_223_ = lean_apply_12(v_k_210_, v_b_217_, v___y_211_, v___y_212_, v___y_213_, v___y_214_, v___y_215_, v___y_216_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, lean_box(0));
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v_b_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___redArg___lam__0(v_k_224_, v___y_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_, v_b_231_, v___y_232_, v___y_233_, v___y_234_, v___y_235_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
lean_dec(v___y_233_);
lean_dec_ref(v___y_232_);
lean_dec(v___y_230_);
lean_dec_ref(v___y_229_);
lean_dec(v___y_228_);
lean_dec_ref(v___y_227_);
lean_dec(v___y_226_);
lean_dec(v___y_225_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___redArg(lean_object* v_name_238_, uint8_t v_bi_239_, lean_object* v_type_240_, lean_object* v_k_241_, uint8_t v_kind_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v___f_254_; lean_object* v___x_255_; 
lean_inc(v___y_248_);
lean_inc_ref(v___y_247_);
lean_inc(v___y_246_);
lean_inc_ref(v___y_245_);
lean_inc(v___y_244_);
lean_inc(v___y_243_);
v___f_254_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___redArg___lam__0___boxed), 13, 7);
lean_closure_set(v___f_254_, 0, v_k_241_);
lean_closure_set(v___f_254_, 1, v___y_243_);
lean_closure_set(v___f_254_, 2, v___y_244_);
lean_closure_set(v___f_254_, 3, v___y_245_);
lean_closure_set(v___f_254_, 4, v___y_246_);
lean_closure_set(v___f_254_, 5, v___y_247_);
lean_closure_set(v___f_254_, 6, v___y_248_);
v___x_255_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_238_, v_bi_239_, v_type_240_, v___f_254_, v_kind_242_, v___y_249_, v___y_250_, v___y_251_, v___y_252_);
if (lean_obj_tag(v___x_255_) == 0)
{
return v___x_255_;
}
else
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_263_; 
v_a_256_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_263_ == 0)
{
v___x_258_ = v___x_255_;
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_255_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_261_; 
if (v_isShared_259_ == 0)
{
v___x_261_ = v___x_258_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_a_256_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___redArg___boxed(lean_object* v_name_264_, lean_object* v_bi_265_, lean_object* v_type_266_, lean_object* v_k_267_, lean_object* v_kind_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
uint8_t v_bi_boxed_280_; uint8_t v_kind_boxed_281_; lean_object* v_res_282_; 
v_bi_boxed_280_ = lean_unbox(v_bi_265_);
v_kind_boxed_281_ = lean_unbox(v_kind_268_);
v_res_282_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___redArg(v_name_264_, v_bi_boxed_280_, v_type_266_, v_k_267_, v_kind_boxed_281_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_);
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
lean_dec(v___y_276_);
lean_dec_ref(v___y_275_);
lean_dec(v___y_274_);
lean_dec_ref(v___y_273_);
lean_dec(v___y_272_);
lean_dec_ref(v___y_271_);
lean_dec(v___y_270_);
lean_dec(v___y_269_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0___redArg(lean_object* v_name_283_, lean_object* v_type_284_, lean_object* v_k_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_){
_start:
{
uint8_t v___x_297_; uint8_t v___x_298_; lean_object* v___x_299_; 
v___x_297_ = 0;
v___x_298_ = 0;
v___x_299_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___redArg(v_name_283_, v___x_297_, v_type_284_, v_k_285_, v___x_298_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0___redArg___boxed(lean_object* v_name_300_, lean_object* v_type_301_, lean_object* v_k_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0___redArg(v_name_300_, v_type_301_, v_k_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_);
lean_dec(v___y_312_);
lean_dec_ref(v___y_311_);
lean_dec(v___y_310_);
lean_dec_ref(v___y_309_);
lean_dec(v___y_308_);
lean_dec_ref(v___y_307_);
lean_dec(v___y_306_);
lean_dec_ref(v___y_305_);
lean_dec(v___y_304_);
lean_dec(v___y_303_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1___boxed(lean_object** _args){
lean_object* v_i_318_ = _args[0];
lean_object* v_xs_319_ = _args[1];
lean_object* v_tys_320_ = _args[2];
lean_object* v_tysxs_321_ = _args[3];
lean_object* v_args_322_ = _args[4];
lean_object* v_val_323_ = _args[5];
lean_object* v_fst_324_ = _args[6];
lean_object* v_e_325_ = _args[7];
lean_object* v_lhss_u03b1s_326_ = _args[8];
lean_object* v_ty_327_ = _args[9];
lean_object* v___y_328_ = _args[10];
lean_object* v___y_329_ = _args[11];
lean_object* v___y_330_ = _args[12];
lean_object* v___y_331_ = _args[13];
lean_object* v___y_332_ = _args[14];
lean_object* v___y_333_ = _args[15];
lean_object* v___y_334_ = _args[16];
lean_object* v___y_335_ = _args[17];
lean_object* v___y_336_ = _args[18];
lean_object* v___y_337_ = _args[19];
lean_object* v___y_338_ = _args[20];
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1(v_i_318_, v_xs_319_, v_tys_320_, v_tysxs_321_, v_args_322_, v_val_323_, v_fst_324_, v_e_325_, v_lhss_u03b1s_326_, v_ty_327_, v___y_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_);
lean_dec(v___y_337_);
lean_dec_ref(v___y_336_);
lean_dec(v___y_335_);
lean_dec_ref(v___y_334_);
lean_dec(v___y_333_);
lean_dec_ref(v___y_332_);
lean_dec(v___y_331_);
lean_dec_ref(v___y_330_);
lean_dec(v___y_329_);
lean_dec(v___y_328_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__2(lean_object* v_i_343_, lean_object* v_xs_344_, lean_object* v_tys_345_, lean_object* v_tysxs_346_, lean_object* v_args_347_, lean_object* v_fst_348_, lean_object* v_e_349_, lean_object* v_lhss_u03b1s_350_, lean_object* v_x_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_363_ = lean_unsigned_to_nat(1u);
v___x_364_ = lean_nat_add(v_i_343_, v___x_363_);
lean_inc_ref(v_x_351_);
v___x_365_ = lean_array_push(v_xs_344_, v_x_351_);
v___x_366_ = lean_box(0);
v___x_367_ = lean_array_push(v_tys_345_, v___x_366_);
v___x_368_ = lean_array_push(v_tysxs_346_, v_x_351_);
v___x_369_ = lean_array_push(v_args_347_, v_fst_348_);
v___x_370_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go(v_e_349_, v_lhss_u03b1s_350_, v___x_364_, v___x_365_, v___x_367_, v___x_368_, v___x_369_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__2___boxed(lean_object** _args){
lean_object* v_i_371_ = _args[0];
lean_object* v_xs_372_ = _args[1];
lean_object* v_tys_373_ = _args[2];
lean_object* v_tysxs_374_ = _args[3];
lean_object* v_args_375_ = _args[4];
lean_object* v_fst_376_ = _args[5];
lean_object* v_e_377_ = _args[6];
lean_object* v_lhss_u03b1s_378_ = _args[7];
lean_object* v_x_379_ = _args[8];
lean_object* v___y_380_ = _args[9];
lean_object* v___y_381_ = _args[10];
lean_object* v___y_382_ = _args[11];
lean_object* v___y_383_ = _args[12];
lean_object* v___y_384_ = _args[13];
lean_object* v___y_385_ = _args[14];
lean_object* v___y_386_ = _args[15];
lean_object* v___y_387_ = _args[16];
lean_object* v___y_388_ = _args[17];
lean_object* v___y_389_ = _args[18];
lean_object* v___y_390_ = _args[19];
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__2(v_i_371_, v_xs_372_, v_tys_373_, v_tysxs_374_, v_args_375_, v_fst_376_, v_e_377_, v_lhss_u03b1s_378_, v_x_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec(v___y_380_);
lean_dec(v_i_371_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go(lean_object* v_e_392_, lean_object* v_lhss_u03b1s_393_, lean_object* v_i_394_, lean_object* v_xs_395_, lean_object* v_tys_396_, lean_object* v_tysxs_397_, lean_object* v_args_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_){
_start:
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = lean_array_get_size(v_lhss_u03b1s_393_);
v___x_411_ = lean_nat_dec_lt(v_i_394_, v___x_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; lean_object* v_eAbst_413_; uint8_t v___x_414_; uint8_t v___x_415_; lean_object* v___x_416_; 
lean_dec(v_i_394_);
lean_dec_ref(v_lhss_u03b1s_393_);
v___x_412_ = lean_unsigned_to_nat(0u);
v_eAbst_413_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_replaceLhss(v_xs_395_, v_tys_396_, v_e_392_, v___x_412_);
lean_dec_ref(v_tys_396_);
lean_dec_ref(v_xs_395_);
v___x_414_ = 1;
v___x_415_ = 1;
v___x_416_ = l_Lean_Meta_mkLambdaFVars(v_tysxs_397_, v_eAbst_413_, v___x_411_, v___x_414_, v___x_411_, v___x_414_, v___x_415_, v_a_405_, v_a_406_, v_a_407_, v_a_408_);
lean_dec_ref(v_tysxs_397_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v_a_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v_a_417_ = lean_ctor_get(v___x_416_, 0);
lean_inc(v_a_417_);
lean_dec_ref_known(v___x_416_, 1);
v___x_418_ = l_Lean_mkAppN(v_a_417_, v_args_398_);
v___x_419_ = l_Lean_Meta_Sym_shareCommon(v___x_418_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_428_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_428_ == 0)
{
v___x_422_ = v___x_419_;
v_isShared_423_ = v_isSharedCheck_428_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_428_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; lean_object* v___x_426_; 
v___x_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_424_, 0, v_args_398_);
lean_ctor_set(v___x_424_, 1, v_a_420_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_424_);
v___x_426_ = v___x_422_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v___x_424_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
lean_dec_ref(v_args_398_);
v_a_429_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___x_419_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_419_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_432_ == 0)
{
v___x_434_ = v___x_431_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_429_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
else
{
lean_object* v_a_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_444_; 
lean_dec_ref(v_args_398_);
v_a_437_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_444_ == 0)
{
v___x_439_ = v___x_416_;
v_isShared_440_ = v_isSharedCheck_444_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_a_437_);
lean_dec(v___x_416_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_444_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_442_; 
if (v_isShared_440_ == 0)
{
v___x_442_ = v___x_439_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_a_437_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
}
else
{
lean_object* v___x_445_; lean_object* v_snd_446_; 
v___x_445_ = lean_array_fget_borrowed(v_lhss_u03b1s_393_, v_i_394_);
v_snd_446_ = lean_ctor_get(v___x_445_, 1);
if (lean_obj_tag(v_snd_446_) == 1)
{
lean_object* v_fst_447_; lean_object* v_val_448_; lean_object* v___f_449_; lean_object* v___x_450_; 
v_fst_447_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_fst_447_);
v_val_448_ = lean_ctor_get(v_snd_446_, 0);
lean_inc_n(v_val_448_, 2);
lean_inc(v_i_394_);
v___f_449_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1___boxed), 21, 9);
lean_closure_set(v___f_449_, 0, v_i_394_);
lean_closure_set(v___f_449_, 1, v_xs_395_);
lean_closure_set(v___f_449_, 2, v_tys_396_);
lean_closure_set(v___f_449_, 3, v_tysxs_397_);
lean_closure_set(v___f_449_, 4, v_args_398_);
lean_closure_set(v___f_449_, 5, v_val_448_);
lean_closure_set(v___f_449_, 6, v_fst_447_);
lean_closure_set(v___f_449_, 7, v_e_392_);
lean_closure_set(v___f_449_, 8, v_lhss_u03b1s_393_);
lean_inc(v_a_408_);
lean_inc_ref(v_a_407_);
lean_inc(v_a_406_);
lean_inc_ref(v_a_405_);
v___x_450_ = lean_infer_type(v_val_448_, v_a_405_, v_a_406_, v_a_407_, v_a_408_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v_a_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v_a_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc(v_a_451_);
lean_dec_ref_known(v___x_450_, 1);
v___x_452_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___closed__1));
v___x_453_ = lean_name_append_index_after(v___x_452_, v_i_394_);
v___x_454_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0___redArg(v___x_453_, v_a_451_, v___f_449_, v_a_399_, v_a_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_);
return v___x_454_;
}
else
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_462_; 
lean_dec_ref(v___f_449_);
lean_dec(v_i_394_);
v_a_455_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_462_ == 0)
{
v___x_457_ = v___x_450_;
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v___x_450_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_460_; 
if (v_isShared_458_ == 0)
{
v___x_460_ = v___x_457_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_a_455_);
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
else
{
lean_object* v_fst_463_; lean_object* v___f_464_; lean_object* v___x_465_; 
v_fst_463_ = lean_ctor_get(v___x_445_, 0);
lean_inc_n(v_fst_463_, 2);
lean_inc(v_i_394_);
v___f_464_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__2___boxed), 20, 8);
lean_closure_set(v___f_464_, 0, v_i_394_);
lean_closure_set(v___f_464_, 1, v_xs_395_);
lean_closure_set(v___f_464_, 2, v_tys_396_);
lean_closure_set(v___f_464_, 3, v_tysxs_397_);
lean_closure_set(v___f_464_, 4, v_args_398_);
lean_closure_set(v___f_464_, 5, v_fst_463_);
lean_closure_set(v___f_464_, 6, v_e_392_);
lean_closure_set(v___f_464_, 7, v_lhss_u03b1s_393_);
lean_inc(v_a_408_);
lean_inc_ref(v_a_407_);
lean_inc(v_a_406_);
lean_inc_ref(v_a_405_);
v___x_465_ = lean_infer_type(v_fst_463_, v_a_405_, v_a_406_, v_a_407_, v_a_408_);
if (lean_obj_tag(v___x_465_) == 0)
{
lean_object* v_a_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v_a_466_ = lean_ctor_get(v___x_465_, 0);
lean_inc(v_a_466_);
lean_dec_ref_known(v___x_465_, 1);
v___x_467_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1___closed__1));
v___x_468_ = lean_name_append_index_after(v___x_467_, v_i_394_);
v___x_469_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0___redArg(v___x_468_, v_a_466_, v___f_464_, v_a_399_, v_a_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_);
return v___x_469_;
}
else
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_477_; 
lean_dec_ref(v___f_464_);
lean_dec(v_i_394_);
v_a_470_ = lean_ctor_get(v___x_465_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_477_ == 0)
{
v___x_472_ = v___x_465_;
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v___x_465_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_475_; 
if (v_isShared_473_ == 0)
{
v___x_475_ = v___x_472_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_a_470_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__0(lean_object* v_i_478_, lean_object* v_xs_479_, lean_object* v_ty_480_, lean_object* v_tys_481_, lean_object* v_tysxs_482_, lean_object* v_args_483_, lean_object* v_val_484_, lean_object* v_fst_485_, lean_object* v_e_486_, lean_object* v_lhss_u03b1s_487_, lean_object* v_x_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_500_ = lean_unsigned_to_nat(1u);
v___x_501_ = lean_nat_add(v_i_478_, v___x_500_);
lean_inc_ref(v_x_488_);
v___x_502_ = lean_array_push(v_xs_479_, v_x_488_);
lean_inc_ref(v_ty_480_);
v___x_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_503_, 0, v_ty_480_);
v___x_504_ = lean_array_push(v_tys_481_, v___x_503_);
v___x_505_ = lean_array_push(v_tysxs_482_, v_ty_480_);
v___x_506_ = lean_array_push(v___x_505_, v_x_488_);
v___x_507_ = lean_array_push(v_args_483_, v_val_484_);
v___x_508_ = lean_array_push(v___x_507_, v_fst_485_);
v___x_509_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go(v_e_486_, v_lhss_u03b1s_487_, v___x_501_, v___x_502_, v___x_504_, v___x_506_, v___x_508_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__0___boxed(lean_object** _args){
lean_object* v_i_510_ = _args[0];
lean_object* v_xs_511_ = _args[1];
lean_object* v_ty_512_ = _args[2];
lean_object* v_tys_513_ = _args[3];
lean_object* v_tysxs_514_ = _args[4];
lean_object* v_args_515_ = _args[5];
lean_object* v_val_516_ = _args[6];
lean_object* v_fst_517_ = _args[7];
lean_object* v_e_518_ = _args[8];
lean_object* v_lhss_u03b1s_519_ = _args[9];
lean_object* v_x_520_ = _args[10];
lean_object* v___y_521_ = _args[11];
lean_object* v___y_522_ = _args[12];
lean_object* v___y_523_ = _args[13];
lean_object* v___y_524_ = _args[14];
lean_object* v___y_525_ = _args[15];
lean_object* v___y_526_ = _args[16];
lean_object* v___y_527_ = _args[17];
lean_object* v___y_528_ = _args[18];
lean_object* v___y_529_ = _args[19];
lean_object* v___y_530_ = _args[20];
lean_object* v___y_531_ = _args[21];
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__0(v_i_510_, v_xs_511_, v_ty_512_, v_tys_513_, v_tysxs_514_, v_args_515_, v_val_516_, v_fst_517_, v_e_518_, v_lhss_u03b1s_519_, v_x_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
lean_dec(v___y_522_);
lean_dec(v___y_521_);
lean_dec(v_i_510_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1(lean_object* v_i_533_, lean_object* v_xs_534_, lean_object* v_tys_535_, lean_object* v_tysxs_536_, lean_object* v_args_537_, lean_object* v_val_538_, lean_object* v_fst_539_, lean_object* v_e_540_, lean_object* v_lhss_u03b1s_541_, lean_object* v_ty_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_){
_start:
{
lean_object* v___f_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
lean_inc_ref(v_ty_542_);
lean_inc(v_i_533_);
v___f_554_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__0___boxed), 22, 10);
lean_closure_set(v___f_554_, 0, v_i_533_);
lean_closure_set(v___f_554_, 1, v_xs_534_);
lean_closure_set(v___f_554_, 2, v_ty_542_);
lean_closure_set(v___f_554_, 3, v_tys_535_);
lean_closure_set(v___f_554_, 4, v_tysxs_536_);
lean_closure_set(v___f_554_, 5, v_args_537_);
lean_closure_set(v___f_554_, 6, v_val_538_);
lean_closure_set(v___f_554_, 7, v_fst_539_);
lean_closure_set(v___f_554_, 8, v_e_540_);
lean_closure_set(v___f_554_, 9, v_lhss_u03b1s_541_);
v___x_555_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___lam__1___closed__1));
v___x_556_ = lean_name_append_index_after(v___x_555_, v_i_533_);
v___x_557_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0___redArg(v___x_556_, v_ty_542_, v___f_554_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go___boxed(lean_object** _args){
lean_object* v_e_558_ = _args[0];
lean_object* v_lhss_u03b1s_559_ = _args[1];
lean_object* v_i_560_ = _args[2];
lean_object* v_xs_561_ = _args[3];
lean_object* v_tys_562_ = _args[4];
lean_object* v_tysxs_563_ = _args[5];
lean_object* v_args_564_ = _args[6];
lean_object* v_a_565_ = _args[7];
lean_object* v_a_566_ = _args[8];
lean_object* v_a_567_ = _args[9];
lean_object* v_a_568_ = _args[10];
lean_object* v_a_569_ = _args[11];
lean_object* v_a_570_ = _args[12];
lean_object* v_a_571_ = _args[13];
lean_object* v_a_572_ = _args[14];
lean_object* v_a_573_ = _args[15];
lean_object* v_a_574_ = _args[16];
lean_object* v_a_575_ = _args[17];
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go(v_e_558_, v_lhss_u03b1s_559_, v_i_560_, v_xs_561_, v_tys_562_, v_tysxs_563_, v_args_564_, v_a_565_, v_a_566_, v_a_567_, v_a_568_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_);
lean_dec(v_a_574_);
lean_dec_ref(v_a_573_);
lean_dec(v_a_572_);
lean_dec_ref(v_a_571_);
lean_dec(v_a_570_);
lean_dec_ref(v_a_569_);
lean_dec(v_a_568_);
lean_dec_ref(v_a_567_);
lean_dec(v_a_566_);
lean_dec(v_a_565_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0(lean_object* v_00_u03b1_577_, lean_object* v_name_578_, uint8_t v_bi_579_, lean_object* v_type_580_, lean_object* v_k_581_, uint8_t v_kind_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___redArg(v_name_578_, v_bi_579_, v_type_580_, v_k_581_, v_kind_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0___boxed(lean_object** _args){
lean_object* v_00_u03b1_595_ = _args[0];
lean_object* v_name_596_ = _args[1];
lean_object* v_bi_597_ = _args[2];
lean_object* v_type_598_ = _args[3];
lean_object* v_k_599_ = _args[4];
lean_object* v_kind_600_ = _args[5];
lean_object* v___y_601_ = _args[6];
lean_object* v___y_602_ = _args[7];
lean_object* v___y_603_ = _args[8];
lean_object* v___y_604_ = _args[9];
lean_object* v___y_605_ = _args[10];
lean_object* v___y_606_ = _args[11];
lean_object* v___y_607_ = _args[12];
lean_object* v___y_608_ = _args[13];
lean_object* v___y_609_ = _args[14];
lean_object* v___y_610_ = _args[15];
lean_object* v___y_611_ = _args[16];
_start:
{
uint8_t v_bi_boxed_612_; uint8_t v_kind_boxed_613_; lean_object* v_res_614_; 
v_bi_boxed_612_ = lean_unbox(v_bi_597_);
v_kind_boxed_613_ = lean_unbox(v_kind_600_);
v_res_614_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0_spec__0(v_00_u03b1_595_, v_name_596_, v_bi_boxed_612_, v_type_598_, v_k_599_, v_kind_boxed_613_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
lean_dec(v___y_602_);
lean_dec(v___y_601_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0(lean_object* v_00_u03b1_615_, lean_object* v_name_616_, lean_object* v_type_617_, lean_object* v_k_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0___redArg(v_name_616_, v_type_617_, v_k_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0___boxed(lean_object* v_00_u03b1_631_, lean_object* v_name_632_, lean_object* v_type_633_, lean_object* v_k_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_spec__0(v_00_u03b1_631_, v_name_632_, v_type_633_, v_k_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_);
lean_dec(v___y_644_);
lean_dec_ref(v___y_643_);
lean_dec(v___y_642_);
lean_dec_ref(v___y_641_);
lean_dec(v___y_640_);
lean_dec_ref(v___y_639_);
lean_dec(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v___y_636_);
lean_dec(v___y_635_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_match__3_splitter___redArg(lean_object* v_x_647_, lean_object* v_h__1_648_){
_start:
{
lean_object* v_fst_649_; lean_object* v_snd_650_; lean_object* v___x_651_; 
v_fst_649_ = lean_ctor_get(v_x_647_, 0);
lean_inc(v_fst_649_);
v_snd_650_ = lean_ctor_get(v_x_647_, 1);
lean_inc(v_snd_650_);
lean_dec_ref(v_x_647_);
v___x_651_ = lean_apply_2(v_h__1_648_, v_fst_649_, v_snd_650_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_match__3_splitter(lean_object* v_motive_652_, lean_object* v_x_653_, lean_object* v_h__1_654_){
_start:
{
lean_object* v_fst_655_; lean_object* v_snd_656_; lean_object* v___x_657_; 
v_fst_655_ = lean_ctor_get(v_x_653_, 0);
lean_inc(v_fst_655_);
v_snd_656_ = lean_ctor_get(v_x_653_, 1);
lean_inc(v_snd_656_);
lean_dec_ref(v_x_653_);
v___x_657_ = lean_apply_2(v_h__1_654_, v_fst_655_, v_snd_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_match__1_splitter___redArg(lean_object* v_00_u03b1_x3f_658_, lean_object* v_h__1_659_, lean_object* v_h__2_660_){
_start:
{
if (lean_obj_tag(v_00_u03b1_x3f_658_) == 1)
{
lean_object* v_val_661_; lean_object* v___x_662_; 
lean_dec(v_h__2_660_);
v_val_661_ = lean_ctor_get(v_00_u03b1_x3f_658_, 0);
lean_inc(v_val_661_);
lean_dec_ref_known(v_00_u03b1_x3f_658_, 1);
v___x_662_ = lean_apply_1(v_h__1_659_, v_val_661_);
return v___x_662_;
}
else
{
lean_object* v___x_663_; 
lean_dec(v_h__1_659_);
v___x_663_ = lean_apply_2(v_h__2_660_, v_00_u03b1_x3f_658_, lean_box(0));
return v___x_663_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go_match__1_splitter(lean_object* v_motive_664_, lean_object* v_00_u03b1_x3f_665_, lean_object* v_h__1_666_, lean_object* v_h__2_667_){
_start:
{
if (lean_obj_tag(v_00_u03b1_x3f_665_) == 1)
{
lean_object* v_val_668_; lean_object* v___x_669_; 
lean_dec(v_h__2_667_);
v_val_668_ = lean_ctor_get(v_00_u03b1_x3f_665_, 0);
lean_inc(v_val_668_);
lean_dec_ref_known(v_00_u03b1_x3f_665_, 1);
v___x_669_ = lean_apply_1(v_h__1_666_, v_val_668_);
return v___x_669_;
}
else
{
lean_object* v___x_670_; 
lean_dec(v_h__1_666_);
v___x_670_ = lean_apply_2(v_h__2_667_, v_00_u03b1_x3f_665_, lean_box(0));
return v___x_670_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract(lean_object* v_matchCond_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_){
_start:
{
lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_696_ = l_Lean_Expr_cleanupAnnotations(v_matchCond_680_);
v___x_697_ = l_Lean_Expr_isApp(v___x_696_);
if (v___x_697_ == 0)
{
lean_dec_ref(v___x_696_);
goto v___jp_692_;
}
else
{
lean_object* v___x_698_; lean_object* v___x_699_; uint8_t v___x_700_; 
v___x_698_ = l_Lean_Expr_appFnCleanup___redArg(v___x_696_);
v___x_699_ = ((lean_object*)(l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__4));
v___x_700_ = l_Lean_Expr_isConstOf(v___x_698_, v___x_699_);
lean_dec_ref(v___x_698_);
if (v___x_700_ == 0)
{
lean_dec_ref(v___x_696_);
goto v___jp_692_;
}
else
{
lean_object* v_arg_701_; lean_object* v_lhss_u03b1s_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
lean_dec_ref(v_matchCond_680_);
v_arg_701_ = lean_ctor_get(v___x_696_, 1);
lean_inc_ref_n(v_arg_701_, 2);
lean_dec_ref(v___x_696_);
v_lhss_u03b1s_702_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhss(v_arg_701_);
v___x_703_ = lean_unsigned_to_nat(0u);
v___x_704_ = ((lean_object*)(l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__0));
v___x_705_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_collectMatchCondLhssAndAbstract_go(v_arg_701_, v_lhss_u03b1s_702_, v___x_703_, v___x_704_, v___x_704_, v___x_704_, v___x_704_, v_a_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
return v___x_705_;
}
}
v___jp_692_:
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_693_ = ((lean_object*)(l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__0));
v___x_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
lean_ctor_set(v___x_694_, 1, v_matchCond_680_);
v___x_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
return v___x_695_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___boxed(lean_object* v_matchCond_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract(v_matchCond_706_, v_a_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
lean_dec(v_a_716_);
lean_dec_ref(v_a_715_);
lean_dec(v_a_714_);
lean_dec_ref(v_a_713_);
lean_dec(v_a_712_);
lean_dec_ref(v_a_711_);
lean_dec(v_a_710_);
lean_dec_ref(v_a_709_);
lean_dec(v_a_708_);
lean_dec(v_a_707_);
return v_res_718_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse___closed__0(void){
_start:
{
lean_object* v___x_722_; lean_object* v_dummy_723_; 
v___x_722_ = lean_box(0);
v_dummy_723_ = l_Lean_Expr_sort___override(v___x_722_);
return v_dummy_723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse(lean_object* v_matchCond_x3f_724_, lean_object* v_lhs_725_, lean_object* v_rhs_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_){
_start:
{
uint8_t v___x_742_; 
v___x_742_ = l_Lean_Expr_hasLooseBVars(v_lhs_725_);
if (v___x_742_ == 0)
{
lean_object* v___x_743_; 
lean_inc_ref(v_lhs_725_);
v___x_743_ = l_Lean_Meta_Grind_getRootENode___redArg(v_lhs_725_, v_a_727_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; uint8_t v_ctor_745_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___x_743_, 1);
v_ctor_745_ = lean_ctor_get_uint8(v_a_744_, sizeof(void*)*12 + 2);
if (v_ctor_745_ == 0)
{
uint8_t v_interpreted_746_; 
v_interpreted_746_ = lean_ctor_get_uint8(v_a_744_, sizeof(void*)*12 + 1);
if (v_interpreted_746_ == 0)
{
lean_dec(v_a_744_);
if (lean_obj_tag(v_matchCond_x3f_724_) == 1)
{
lean_object* v_val_747_; lean_object* v___x_748_; uint8_t v___x_749_; 
v_val_747_ = lean_ctor_get(v_matchCond_x3f_724_, 0);
lean_inc(v_val_747_);
lean_dec_ref_known(v_matchCond_x3f_724_, 1);
v___x_748_ = l_Lean_Expr_getAppFn(v_rhs_726_);
lean_dec_ref(v_rhs_726_);
v___x_749_ = l_Lean_Expr_isBVar(v___x_748_);
lean_dec_ref(v___x_748_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; 
v___x_750_ = l_Lean_Meta_Grind_registerParent___redArg(v_val_747_, v_lhs_725_, v_a_727_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_dec_ref_known(v___x_750_, 1);
goto v___jp_738_;
}
else
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
v_a_751_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_750_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_750_);
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
else
{
lean_dec(v_val_747_);
lean_dec_ref(v_lhs_725_);
goto v___jp_738_;
}
}
else
{
lean_dec_ref(v_rhs_726_);
lean_dec_ref(v_lhs_725_);
lean_dec(v_matchCond_x3f_724_);
goto v___jp_738_;
}
}
else
{
lean_object* v_self_759_; uint8_t v___x_760_; 
lean_dec_ref(v_lhs_725_);
lean_dec(v_matchCond_x3f_724_);
v_self_759_ = lean_ctor_get(v_a_744_, 0);
lean_inc_ref(v_self_759_);
lean_dec(v_a_744_);
v___x_760_ = l_Lean_Expr_hasLooseBVars(v_rhs_726_);
if (v___x_760_ == 0)
{
lean_object* v___x_761_; 
lean_inc_ref(v_rhs_726_);
v___x_761_ = l_Lean_Meta_isLitValue(v_rhs_726_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
if (lean_obj_tag(v___x_761_) == 0)
{
lean_object* v_a_762_; uint8_t v___x_763_; 
v_a_762_ = lean_ctor_get(v___x_761_, 0);
lean_inc(v_a_762_);
lean_dec_ref_known(v___x_761_, 1);
v___x_763_ = lean_unbox(v_a_762_);
if (v___x_763_ == 0)
{
lean_dec(v_a_762_);
lean_dec_ref(v_self_759_);
lean_dec_ref(v_rhs_726_);
goto v___jp_738_;
}
else
{
lean_object* v___x_764_; 
v___x_764_ = l_Lean_Meta_normLitValue(v_self_759_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
if (lean_obj_tag(v___x_764_) == 0)
{
lean_object* v_a_765_; lean_object* v___x_766_; 
v_a_765_ = lean_ctor_get(v___x_764_, 0);
lean_inc(v_a_765_);
lean_dec_ref_known(v___x_764_, 1);
v___x_766_ = l_Lean_Meta_normLitValue(v_rhs_726_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_779_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_779_ == 0)
{
v___x_769_ = v___x_766_;
v_isShared_770_ = v_isSharedCheck_779_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_766_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_779_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
uint8_t v___x_771_; 
v___x_771_ = lean_expr_eqv(v_a_765_, v_a_767_);
lean_dec(v_a_767_);
lean_dec(v_a_765_);
if (v___x_771_ == 0)
{
lean_object* v___x_773_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 0, v_a_762_);
v___x_773_ = v___x_769_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_a_762_);
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
lean_object* v___x_775_; lean_object* v___x_777_; 
lean_dec(v_a_762_);
v___x_775_ = lean_box(v___x_760_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 0, v___x_775_);
v___x_777_ = v___x_769_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v___x_775_);
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
lean_dec(v_a_765_);
lean_dec(v_a_762_);
v_a_780_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___x_766_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_766_);
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
else
{
lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_795_; 
lean_dec(v_a_762_);
lean_dec_ref(v_rhs_726_);
v_a_788_ = lean_ctor_get(v___x_764_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_764_);
if (v_isSharedCheck_795_ == 0)
{
v___x_790_ = v___x_764_;
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v___x_764_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_793_; 
if (v_isShared_791_ == 0)
{
v___x_793_ = v___x_790_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_a_788_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
}
}
}
else
{
lean_dec_ref(v_self_759_);
lean_dec_ref(v_rhs_726_);
return v___x_761_;
}
}
else
{
lean_dec_ref(v_self_759_);
lean_dec_ref(v_rhs_726_);
goto v___jp_738_;
}
}
}
else
{
lean_object* v_self_796_; lean_object* v___x_797_; 
lean_dec_ref(v_lhs_725_);
v_self_796_ = lean_ctor_get(v_a_744_, 0);
lean_inc_ref_n(v_self_796_, 2);
lean_dec(v_a_744_);
v___x_797_ = l_Lean_Meta_isConstructorApp_x3f(v_self_796_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
if (lean_obj_tag(v___x_797_) == 0)
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_868_; 
v_a_798_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_868_ == 0)
{
v___x_800_ = v___x_797_;
v_isShared_801_ = v_isSharedCheck_868_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_797_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_868_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
if (lean_obj_tag(v_a_798_) == 1)
{
lean_object* v_val_802_; lean_object* v___x_803_; 
lean_del_object(v___x_800_);
v_val_802_ = lean_ctor_get(v_a_798_, 0);
lean_inc(v_val_802_);
lean_dec_ref_known(v_a_798_, 1);
lean_inc_ref(v_rhs_726_);
v___x_803_ = l_Lean_Meta_isConstructorApp_x3f(v_rhs_726_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
if (lean_obj_tag(v___x_803_) == 0)
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_855_; 
v_a_804_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_855_ == 0)
{
v___x_806_ = v___x_803_;
v_isShared_807_ = v_isSharedCheck_855_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_855_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
if (lean_obj_tag(v_a_804_) == 1)
{
lean_object* v_toConstantVal_808_; lean_object* v_val_809_; lean_object* v_toConstantVal_810_; lean_object* v_numParams_811_; lean_object* v_numFields_812_; lean_object* v_name_813_; lean_object* v_name_814_; uint8_t v___x_815_; 
v_toConstantVal_808_ = lean_ctor_get(v_val_802_, 0);
lean_inc_ref(v_toConstantVal_808_);
v_val_809_ = lean_ctor_get(v_a_804_, 0);
lean_inc(v_val_809_);
lean_dec_ref_known(v_a_804_, 1);
v_toConstantVal_810_ = lean_ctor_get(v_val_809_, 0);
lean_inc_ref(v_toConstantVal_810_);
lean_dec(v_val_809_);
v_numParams_811_ = lean_ctor_get(v_val_802_, 3);
lean_inc(v_numParams_811_);
v_numFields_812_ = lean_ctor_get(v_val_802_, 4);
lean_inc(v_numFields_812_);
lean_dec(v_val_802_);
v_name_813_ = lean_ctor_get(v_toConstantVal_808_, 0);
lean_inc(v_name_813_);
lean_dec_ref(v_toConstantVal_808_);
v_name_814_ = lean_ctor_get(v_toConstantVal_810_, 0);
lean_inc(v_name_814_);
lean_dec_ref(v_toConstantVal_810_);
v___x_815_ = lean_name_eq(v_name_813_, v_name_814_);
lean_dec(v_name_814_);
lean_dec(v_name_813_);
if (v___x_815_ == 0)
{
lean_object* v___x_816_; lean_object* v___x_818_; 
lean_dec(v_numFields_812_);
lean_dec(v_numParams_811_);
lean_dec_ref(v_self_796_);
lean_dec_ref(v_rhs_726_);
lean_dec(v_matchCond_x3f_724_);
v___x_816_ = lean_box(v_ctor_745_);
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v___x_816_);
v___x_818_ = v___x_806_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
else
{
lean_object* v_nargs_820_; lean_object* v_nargs_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v_dummy_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
lean_del_object(v___x_806_);
v_nargs_820_ = l_Lean_Expr_getAppNumArgs(v_self_796_);
v_nargs_821_ = l_Lean_Expr_getAppNumArgs(v_rhs_726_);
v___x_822_ = lean_nat_add(v_numParams_811_, v_numFields_812_);
lean_dec(v_numFields_812_);
v___x_823_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0___redArg___closed__0));
v_dummy_824_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse___closed__0, &l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse___closed__0);
lean_inc(v_nargs_820_);
v___x_825_ = lean_mk_array(v_nargs_820_, v_dummy_824_);
v___x_826_ = lean_unsigned_to_nat(1u);
v___x_827_ = lean_nat_sub(v_nargs_820_, v___x_826_);
lean_dec(v_nargs_820_);
v___x_828_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_self_796_, v___x_825_, v___x_827_);
lean_inc(v_nargs_821_);
v___x_829_ = lean_mk_array(v_nargs_821_, v_dummy_824_);
v___x_830_ = lean_nat_sub(v_nargs_821_, v___x_826_);
lean_dec(v_nargs_821_);
v___x_831_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_rhs_726_, v___x_829_, v___x_830_);
v___x_832_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0___redArg(v___x_822_, v___x_828_, v___x_831_, v_matchCond_x3f_724_, v_numParams_811_, v___x_823_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
lean_dec_ref(v___x_831_);
lean_dec_ref(v___x_828_);
lean_dec(v___x_822_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_842_; 
v_a_833_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_842_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_842_ == 0)
{
v___x_835_ = v___x_832_;
v_isShared_836_ = v_isSharedCheck_842_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_832_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_842_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v_fst_837_; 
v_fst_837_ = lean_ctor_get(v_a_833_, 0);
lean_inc(v_fst_837_);
lean_dec(v_a_833_);
if (lean_obj_tag(v_fst_837_) == 0)
{
lean_del_object(v___x_835_);
goto v___jp_738_;
}
else
{
lean_object* v_val_838_; lean_object* v___x_840_; 
v_val_838_ = lean_ctor_get(v_fst_837_, 0);
lean_inc(v_val_838_);
lean_dec_ref_known(v_fst_837_, 1);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 0, v_val_838_);
v___x_840_ = v___x_835_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_val_838_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
}
}
else
{
lean_object* v_a_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_850_; 
v_a_843_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_850_ == 0)
{
v___x_845_ = v___x_832_;
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_a_843_);
lean_dec(v___x_832_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_848_; 
if (v_isShared_846_ == 0)
{
v___x_848_ = v___x_845_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_a_843_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
}
}
}
else
{
lean_object* v___x_851_; lean_object* v___x_853_; 
lean_dec(v_a_804_);
lean_dec(v_val_802_);
lean_dec_ref(v_self_796_);
lean_dec_ref(v_rhs_726_);
lean_dec(v_matchCond_x3f_724_);
v___x_851_ = lean_box(v___x_742_);
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v___x_851_);
v___x_853_ = v___x_806_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v___x_851_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
else
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
lean_dec(v_val_802_);
lean_dec_ref(v_self_796_);
lean_dec_ref(v_rhs_726_);
lean_dec(v_matchCond_x3f_724_);
v_a_856_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_803_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_803_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
}
else
{
lean_object* v___x_864_; lean_object* v___x_866_; 
lean_dec(v_a_798_);
lean_dec_ref(v_self_796_);
lean_dec_ref(v_rhs_726_);
lean_dec(v_matchCond_x3f_724_);
v___x_864_ = lean_box(v___x_742_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 0, v___x_864_);
v___x_866_ = v___x_800_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v___x_864_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
}
else
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_876_; 
lean_dec_ref(v_self_796_);
lean_dec_ref(v_rhs_726_);
lean_dec(v_matchCond_x3f_724_);
v_a_869_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_876_ == 0)
{
v___x_871_ = v___x_797_;
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_797_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_869_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
}
}
else
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
lean_dec_ref(v_rhs_726_);
lean_dec_ref(v_lhs_725_);
lean_dec(v_matchCond_x3f_724_);
v_a_877_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_743_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_743_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
else
{
lean_dec_ref(v_rhs_726_);
lean_dec_ref(v_lhs_725_);
lean_dec(v_matchCond_x3f_724_);
goto v___jp_738_;
}
v___jp_738_:
{
uint8_t v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_739_ = 0;
v___x_740_ = lean_box(v___x_739_);
v___x_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
return v___x_741_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0___redArg(lean_object* v_upperBound_885_, lean_object* v___x_886_, lean_object* v___x_887_, lean_object* v_matchCond_x3f_888_, lean_object* v_a_889_, lean_object* v_b_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
uint8_t v___x_902_; 
v___x_902_ = lean_nat_dec_lt(v_a_889_, v_upperBound_885_);
if (v___x_902_ == 0)
{
lean_object* v___x_903_; 
lean_dec(v_a_889_);
lean_dec(v_matchCond_x3f_888_);
v___x_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_903_, 0, v_b_890_);
return v___x_903_;
}
else
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
lean_dec_ref(v_b_890_);
v___x_904_ = l_Lean_instInhabitedExpr;
v___x_905_ = lean_box(0);
v___x_906_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0___redArg___closed__0));
v___x_907_ = lean_array_get_borrowed(v___x_904_, v___x_886_, v_a_889_);
v___x_908_ = lean_array_get_borrowed(v___x_904_, v___x_887_, v_a_889_);
lean_inc(v___x_908_);
lean_inc(v___x_907_);
lean_inc(v_matchCond_x3f_888_);
v___x_909_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse(v_matchCond_x3f_888_, v___x_907_, v___x_908_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_923_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_923_ == 0)
{
v___x_912_ = v___x_909_;
v_isShared_913_ = v_isSharedCheck_923_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_909_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_923_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
uint8_t v___x_914_; 
v___x_914_ = lean_unbox(v_a_910_);
if (v___x_914_ == 0)
{
lean_object* v___x_915_; lean_object* v___x_916_; 
lean_del_object(v___x_912_);
lean_dec(v_a_910_);
v___x_915_ = lean_unsigned_to_nat(1u);
v___x_916_ = lean_nat_add(v_a_889_, v___x_915_);
lean_dec(v_a_889_);
v_a_889_ = v___x_916_;
v_b_890_ = v___x_906_;
goto _start;
}
else
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_921_; 
lean_dec(v_a_889_);
lean_dec(v_matchCond_x3f_888_);
v___x_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_918_, 0, v_a_910_);
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_918_);
lean_ctor_set(v___x_919_, 1, v___x_905_);
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 0, v___x_919_);
v___x_921_ = v___x_912_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v___x_919_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec(v_a_889_);
lean_dec(v_matchCond_x3f_888_);
v_a_924_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_909_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_909_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_932_ = _args[0];
lean_object* v___x_933_ = _args[1];
lean_object* v___x_934_ = _args[2];
lean_object* v_matchCond_x3f_935_ = _args[3];
lean_object* v_a_936_ = _args[4];
lean_object* v_b_937_ = _args[5];
lean_object* v___y_938_ = _args[6];
lean_object* v___y_939_ = _args[7];
lean_object* v___y_940_ = _args[8];
lean_object* v___y_941_ = _args[9];
lean_object* v___y_942_ = _args[10];
lean_object* v___y_943_ = _args[11];
lean_object* v___y_944_ = _args[12];
lean_object* v___y_945_ = _args[13];
lean_object* v___y_946_ = _args[14];
lean_object* v___y_947_ = _args[15];
lean_object* v___y_948_ = _args[16];
_start:
{
lean_object* v_res_949_; 
v_res_949_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0___redArg(v_upperBound_932_, v___x_933_, v___x_934_, v_matchCond_x3f_935_, v_a_936_, v_b_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec(v___y_943_);
lean_dec_ref(v___y_942_);
lean_dec(v___y_941_);
lean_dec_ref(v___y_940_);
lean_dec(v___y_939_);
lean_dec(v___y_938_);
lean_dec_ref(v___x_934_);
lean_dec_ref(v___x_933_);
lean_dec(v_upperBound_932_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse___boxed(lean_object* v_matchCond_x3f_950_, lean_object* v_lhs_951_, lean_object* v_rhs_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse(v_matchCond_x3f_950_, v_lhs_951_, v_rhs_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_);
lean_dec(v_a_962_);
lean_dec_ref(v_a_961_);
lean_dec(v_a_960_);
lean_dec_ref(v_a_959_);
lean_dec(v_a_958_);
lean_dec_ref(v_a_957_);
lean_dec(v_a_956_);
lean_dec_ref(v_a_955_);
lean_dec(v_a_954_);
lean_dec(v_a_953_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0(lean_object* v_upperBound_965_, lean_object* v___x_966_, lean_object* v___x_967_, lean_object* v_matchCond_x3f_968_, lean_object* v_inst_969_, lean_object* v_R_970_, lean_object* v_a_971_, lean_object* v_b_972_, lean_object* v_c_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0___redArg(v_upperBound_965_, v___x_966_, v___x_967_, v_matchCond_x3f_968_, v_a_971_, v_b_972_, v___y_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0___boxed(lean_object** _args){
lean_object* v_upperBound_986_ = _args[0];
lean_object* v___x_987_ = _args[1];
lean_object* v___x_988_ = _args[2];
lean_object* v_matchCond_x3f_989_ = _args[3];
lean_object* v_inst_990_ = _args[4];
lean_object* v_R_991_ = _args[5];
lean_object* v_a_992_ = _args[6];
lean_object* v_b_993_ = _args[7];
lean_object* v_c_994_ = _args[8];
lean_object* v___y_995_ = _args[9];
lean_object* v___y_996_ = _args[10];
lean_object* v___y_997_ = _args[11];
lean_object* v___y_998_ = _args[12];
lean_object* v___y_999_ = _args[13];
lean_object* v___y_1000_ = _args[14];
lean_object* v___y_1001_ = _args[15];
lean_object* v___y_1002_ = _args[16];
lean_object* v___y_1003_ = _args[17];
lean_object* v___y_1004_ = _args[18];
lean_object* v___y_1005_ = _args[19];
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse_spec__0(v_upperBound_986_, v___x_987_, v___x_988_, v_matchCond_x3f_989_, v_inst_990_, v_R_991_, v_a_992_, v_b_993_, v_c_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_);
lean_dec(v___y_1004_);
lean_dec_ref(v___y_1003_);
lean_dec(v___y_1002_);
lean_dec_ref(v___y_1001_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec(v___y_995_);
lean_dec_ref(v___x_988_);
lean_dec_ref(v___x_987_);
lean_dec(v_upperBound_986_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp(lean_object* v_e_1007_, lean_object* v_matchCond_x3f_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f(v_e_1007_);
if (lean_obj_tag(v___x_1020_) == 1)
{
lean_object* v_val_1021_; lean_object* v_snd_1022_; lean_object* v_fst_1023_; lean_object* v_snd_1024_; lean_object* v___x_1025_; 
v_val_1021_ = lean_ctor_get(v___x_1020_, 0);
lean_inc(v_val_1021_);
lean_dec_ref_known(v___x_1020_, 1);
v_snd_1022_ = lean_ctor_get(v_val_1021_, 1);
lean_inc(v_snd_1022_);
lean_dec(v_val_1021_);
v_fst_1023_ = lean_ctor_get(v_snd_1022_, 0);
lean_inc(v_fst_1023_);
v_snd_1024_ = lean_ctor_get(v_snd_1022_, 1);
lean_inc(v_snd_1024_);
lean_dec(v_snd_1022_);
v___x_1025_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse(v_matchCond_x3f_1008_, v_fst_1023_, v_snd_1024_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_, v_a_1018_);
return v___x_1025_;
}
else
{
uint8_t v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
lean_dec(v___x_1020_);
lean_dec(v_matchCond_x3f_1008_);
v___x_1026_ = 0;
v___x_1027_ = lean_box(v___x_1026_);
v___x_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1027_);
return v___x_1028_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp___boxed(lean_object* v_e_1029_, lean_object* v_matchCond_x3f_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp(v_e_1029_, v_matchCond_x3f_1030_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_);
lean_dec(v_a_1040_);
lean_dec_ref(v_a_1039_);
lean_dec(v_a_1038_);
lean_dec_ref(v_a_1037_);
lean_dec(v_a_1036_);
lean_dec_ref(v_a_1035_);
lean_dec(v_a_1034_);
lean_dec_ref(v_a_1033_);
lean_dec(v_a_1032_);
lean_dec(v_a_1031_);
lean_dec_ref(v_e_1029_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___lam__0(uint8_t v_a_1043_, lean_object* v_snd_1044_, lean_object* v_____r_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_){
_start:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1057_ = lean_box(v_a_1043_);
v___x_1058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
v___x_1059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1058_);
lean_ctor_set(v___x_1059_, 1, v_snd_1044_);
v___x_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
v___x_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___lam__0___boxed(lean_object* v_a_1062_, lean_object* v_snd_1063_, lean_object* v_____r_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_){
_start:
{
uint8_t v_a_24662__boxed_1076_; lean_object* v_res_1077_; 
v_a_24662__boxed_1076_ = lean_unbox(v_a_1062_);
v_res_1077_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___lam__0(v_a_24662__boxed_1076_, v_snd_1063_, v_____r_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec(v___y_1065_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0_spec__0(lean_object* v_msgData_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
lean_object* v___x_1084_; lean_object* v_env_1085_; uint8_t v___x_1086_; lean_object* v_env_1087_; lean_object* v___x_1088_; lean_object* v_toCold_1089_; lean_object* v_mctx_1090_; lean_object* v_lctx_1091_; lean_object* v_options_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1084_ = lean_st_ref_get(v___y_1082_);
v_env_1085_ = lean_ctor_get(v___x_1084_, 0);
lean_inc_ref(v_env_1085_);
lean_dec(v___x_1084_);
v___x_1086_ = 0;
v_env_1087_ = l_Lean_Environment_setRecordingDeps(v_env_1085_, v___x_1086_);
v___x_1088_ = lean_st_ref_get(v___y_1080_);
v_toCold_1089_ = lean_ctor_get(v___y_1081_, 0);
v_mctx_1090_ = lean_ctor_get(v___x_1088_, 0);
lean_inc_ref(v_mctx_1090_);
lean_dec(v___x_1088_);
v_lctx_1091_ = lean_ctor_get(v___y_1079_, 2);
v_options_1092_ = lean_ctor_get(v_toCold_1089_, 2);
lean_inc_ref(v_options_1092_);
lean_inc_ref(v_lctx_1091_);
v___x_1093_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1093_, 0, v_env_1087_);
lean_ctor_set(v___x_1093_, 1, v_mctx_1090_);
lean_ctor_set(v___x_1093_, 2, v_lctx_1091_);
lean_ctor_set(v___x_1093_, 3, v_options_1092_);
v___x_1094_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1093_);
lean_ctor_set(v___x_1094_, 1, v_msgData_1078_);
v___x_1095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1094_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0_spec__0___boxed(lean_object* v_msgData_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0_spec__0(v_msgData_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
return v_res_1102_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1103_; double v___x_1104_; 
v___x_1103_ = lean_unsigned_to_nat(0u);
v___x_1104_ = lean_float_of_nat(v___x_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg(lean_object* v_cls_1108_, lean_object* v_msg_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_){
_start:
{
lean_object* v_ref_1115_; lean_object* v___x_1116_; lean_object* v_a_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1162_; 
v_ref_1115_ = lean_ctor_get(v___y_1112_, 2);
v___x_1116_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0_spec__0(v_msg_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_);
v_a_1117_ = lean_ctor_get(v___x_1116_, 0);
v_isSharedCheck_1162_ = !lean_is_exclusive(v___x_1116_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1119_ = v___x_1116_;
v_isShared_1120_ = v_isSharedCheck_1162_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_a_1117_);
lean_dec(v___x_1116_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1162_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1121_; lean_object* v_traceState_1122_; lean_object* v_env_1123_; lean_object* v_nextMacroScope_1124_; lean_object* v_ngen_1125_; lean_object* v_auxDeclNGen_1126_; lean_object* v_cache_1127_; lean_object* v_recordedDeps_1128_; lean_object* v_messages_1129_; lean_object* v_infoState_1130_; lean_object* v_snapshotTasks_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1161_; 
v___x_1121_ = lean_st_ref_take(v___y_1113_);
v_traceState_1122_ = lean_ctor_get(v___x_1121_, 4);
v_env_1123_ = lean_ctor_get(v___x_1121_, 0);
v_nextMacroScope_1124_ = lean_ctor_get(v___x_1121_, 1);
v_ngen_1125_ = lean_ctor_get(v___x_1121_, 2);
v_auxDeclNGen_1126_ = lean_ctor_get(v___x_1121_, 3);
v_cache_1127_ = lean_ctor_get(v___x_1121_, 5);
v_recordedDeps_1128_ = lean_ctor_get(v___x_1121_, 6);
v_messages_1129_ = lean_ctor_get(v___x_1121_, 7);
v_infoState_1130_ = lean_ctor_get(v___x_1121_, 8);
v_snapshotTasks_1131_ = lean_ctor_get(v___x_1121_, 9);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1121_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1133_ = v___x_1121_;
v_isShared_1134_ = v_isSharedCheck_1161_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_snapshotTasks_1131_);
lean_inc(v_infoState_1130_);
lean_inc(v_messages_1129_);
lean_inc(v_recordedDeps_1128_);
lean_inc(v_cache_1127_);
lean_inc(v_traceState_1122_);
lean_inc(v_auxDeclNGen_1126_);
lean_inc(v_ngen_1125_);
lean_inc(v_nextMacroScope_1124_);
lean_inc(v_env_1123_);
lean_dec(v___x_1121_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1161_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
uint64_t v_tid_1135_; lean_object* v_traces_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1160_; 
v_tid_1135_ = lean_ctor_get_uint64(v_traceState_1122_, sizeof(void*)*1);
v_traces_1136_ = lean_ctor_get(v_traceState_1122_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v_traceState_1122_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1138_ = v_traceState_1122_;
v_isShared_1139_ = v_isSharedCheck_1160_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_traces_1136_);
lean_dec(v_traceState_1122_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1160_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; double v___x_1142_; uint8_t v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1151_; 
v___x_1140_ = lean_box(0);
v___x_1141_ = lean_box(0);
v___x_1142_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___closed__0);
v___x_1143_ = 0;
v___x_1144_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___closed__1));
v___x_1145_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1145_, 0, v_cls_1108_);
lean_ctor_set(v___x_1145_, 1, v___x_1141_);
lean_ctor_set(v___x_1145_, 2, v___x_1144_);
lean_ctor_set_float(v___x_1145_, sizeof(void*)*3, v___x_1142_);
lean_ctor_set_float(v___x_1145_, sizeof(void*)*3 + 8, v___x_1142_);
lean_ctor_set_uint8(v___x_1145_, sizeof(void*)*3 + 16, v___x_1143_);
v___x_1146_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___closed__2));
v___x_1147_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1145_);
lean_ctor_set(v___x_1147_, 1, v_a_1117_);
lean_ctor_set(v___x_1147_, 2, v___x_1146_);
lean_inc(v_ref_1115_);
v___x_1148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1148_, 0, v_ref_1115_);
lean_ctor_set(v___x_1148_, 1, v___x_1147_);
v___x_1149_ = l_Lean_PersistentArray_push___redArg(v_traces_1136_, v___x_1148_);
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 0, v___x_1149_);
v___x_1151_ = v___x_1138_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1149_);
lean_ctor_set_uint64(v_reuseFailAlloc_1159_, sizeof(void*)*1, v_tid_1135_);
v___x_1151_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
lean_object* v___x_1153_; 
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 4, v___x_1151_);
v___x_1153_ = v___x_1133_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_env_1123_);
lean_ctor_set(v_reuseFailAlloc_1158_, 1, v_nextMacroScope_1124_);
lean_ctor_set(v_reuseFailAlloc_1158_, 2, v_ngen_1125_);
lean_ctor_set(v_reuseFailAlloc_1158_, 3, v_auxDeclNGen_1126_);
lean_ctor_set(v_reuseFailAlloc_1158_, 4, v___x_1151_);
lean_ctor_set(v_reuseFailAlloc_1158_, 5, v_cache_1127_);
lean_ctor_set(v_reuseFailAlloc_1158_, 6, v_recordedDeps_1128_);
lean_ctor_set(v_reuseFailAlloc_1158_, 7, v_messages_1129_);
lean_ctor_set(v_reuseFailAlloc_1158_, 8, v_infoState_1130_);
lean_ctor_set(v_reuseFailAlloc_1158_, 9, v_snapshotTasks_1131_);
v___x_1153_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
lean_object* v___x_1154_; lean_object* v___x_1156_; 
v___x_1154_ = lean_st_ref_put(v___y_1113_, v___x_1153_);
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 0, v___x_1140_);
v___x_1156_ = v___x_1119_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v___x_1140_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg___boxed(lean_object* v_cls_1163_, lean_object* v_msg_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg(v_cls_1163_, v_msg_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_);
lean_dec(v___y_1168_);
lean_dec_ref(v___y_1167_);
lean_dec(v___y_1166_);
lean_dec_ref(v___y_1165_);
return v_res_1170_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6(void){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1181_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__3));
v___x_1182_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__5));
v___x_1183_ = l_Lean_Name_append(v___x_1182_, v___x_1181_);
return v___x_1183_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__8(void){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1185_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__7));
v___x_1186_ = l_Lean_stringToMessageData(v___x_1185_);
return v___x_1186_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__10(void){
_start:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__9));
v___x_1189_ = l_Lean_stringToMessageData(v___x_1188_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg(lean_object* v_e_1190_, lean_object* v_a_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_){
_start:
{
lean_object* v___y_1204_; lean_object* v_snd_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1290_; 
v_snd_1224_ = lean_ctor_get(v_a_1191_, 1);
v_isSharedCheck_1290_ = !lean_is_exclusive(v_a_1191_);
if (v_isSharedCheck_1290_ == 0)
{
lean_object* v_unused_1291_; 
v_unused_1291_ = lean_ctor_get(v_a_1191_, 0);
lean_dec(v_unused_1291_);
v___x_1226_ = v_a_1191_;
v_isShared_1227_ = v_isSharedCheck_1290_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_snd_1224_);
lean_dec(v_a_1191_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1290_;
goto v_resetjp_1225_;
}
v___jp_1203_:
{
if (lean_obj_tag(v___y_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1215_; 
v_a_1205_ = lean_ctor_get(v___y_1204_, 0);
v_isSharedCheck_1215_ = !lean_is_exclusive(v___y_1204_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1207_ = v___y_1204_;
v_isShared_1208_ = v_isSharedCheck_1215_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___y_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1215_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
if (lean_obj_tag(v_a_1205_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1211_; 
lean_dec_ref(v_e_1190_);
v_a_1209_ = lean_ctor_get(v_a_1205_, 0);
lean_inc(v_a_1209_);
lean_dec_ref_known(v_a_1205_, 1);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 0, v_a_1209_);
v___x_1211_ = v___x_1207_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1209_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
else
{
lean_object* v_a_1213_; 
lean_del_object(v___x_1207_);
v_a_1213_ = lean_ctor_get(v_a_1205_, 0);
lean_inc(v_a_1213_);
lean_dec_ref_known(v_a_1205_, 1);
v_a_1191_ = v_a_1213_;
goto _start;
}
}
}
else
{
lean_object* v_a_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1223_; 
lean_dec_ref(v_e_1190_);
v_a_1216_ = lean_ctor_get(v___y_1204_, 0);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___y_1204_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1218_ = v___y_1204_;
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_a_1216_);
lean_dec(v___y_1204_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1221_; 
if (v_isShared_1219_ == 0)
{
v___x_1221_ = v___x_1218_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v_a_1216_);
v___x_1221_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
return v___x_1221_;
}
}
}
}
v_resetjp_1225_:
{
lean_object* v___x_1228_; 
v___x_1228_ = lean_box(0);
if (lean_obj_tag(v_snd_1224_) == 7)
{
lean_object* v_binderType_1229_; lean_object* v_body_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v_binderType_1229_ = lean_ctor_get(v_snd_1224_, 1);
v_body_1230_ = lean_ctor_get(v_snd_1224_, 2);
lean_inc_ref(v_e_1190_);
v___x_1231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1231_, 0, v_e_1190_);
v___x_1232_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp(v_binderType_1229_, v___x_1231_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v_a_1233_; uint8_t v___x_1234_; 
v_a_1233_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_a_1233_);
lean_dec_ref_known(v___x_1232_, 1);
v___x_1234_ = lean_unbox(v_a_1233_);
if (v___x_1234_ == 0)
{
lean_object* v___x_1236_; 
lean_inc_ref(v_body_1230_);
lean_dec(v_a_1233_);
lean_dec_ref_known(v_snd_1224_, 3);
if (v_isShared_1227_ == 0)
{
lean_ctor_set(v___x_1226_, 1, v_body_1230_);
lean_ctor_set(v___x_1226_, 0, v___x_1228_);
v___x_1236_ = v___x_1226_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v___x_1228_);
lean_ctor_set(v_reuseFailAlloc_1238_, 1, v_body_1230_);
v___x_1236_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
v_a_1191_ = v___x_1236_;
goto _start;
}
}
else
{
lean_object* v_toCold_1239_; lean_object* v_options_1240_; lean_object* v_inheritedTraceOptions_1241_; uint8_t v_hasTrace_1242_; 
lean_del_object(v___x_1226_);
v_toCold_1239_ = lean_ctor_get(v___y_1200_, 0);
v_options_1240_ = lean_ctor_get(v_toCold_1239_, 2);
v_inheritedTraceOptions_1241_ = lean_ctor_get(v_toCold_1239_, 11);
v_hasTrace_1242_ = lean_ctor_get_uint8(v_options_1240_, sizeof(void*)*1);
if (v_hasTrace_1242_ == 0)
{
goto v___jp_1243_;
}
else
{
lean_object* v___x_1247_; lean_object* v___x_1248_; uint8_t v___x_1249_; 
v___x_1247_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__3));
v___x_1248_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6);
v___x_1249_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1241_, v_options_1240_, v___x_1248_);
if (v___x_1249_ == 0)
{
goto v___jp_1243_;
}
else
{
lean_object* v___x_1250_; 
v___x_1250_ = l_Lean_Meta_Grind_updateLastTag(v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
lean_dec_ref_known(v___x_1250_, 1);
v___x_1251_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__8, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__8_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__8);
lean_inc_ref(v_snd_1224_);
v___x_1252_ = l_Lean_indentExpr(v_snd_1224_);
v___x_1253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1251_);
lean_ctor_set(v___x_1253_, 1, v___x_1252_);
v___x_1254_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__10, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__10_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__10);
v___x_1255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1253_);
lean_ctor_set(v___x_1255_, 1, v___x_1254_);
lean_inc_ref(v_binderType_1229_);
v___x_1256_ = l_Lean_indentExpr(v_binderType_1229_);
v___x_1257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1255_);
lean_ctor_set(v___x_1257_, 1, v___x_1256_);
v___x_1258_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg(v___x_1247_, v___x_1257_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_);
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_object* v_a_1259_; uint8_t v___x_1260_; lean_object* v___x_1261_; 
v_a_1259_ = lean_ctor_get(v___x_1258_, 0);
lean_inc(v_a_1259_);
lean_dec_ref_known(v___x_1258_, 1);
v___x_1260_ = lean_unbox(v_a_1233_);
lean_dec(v_a_1233_);
v___x_1261_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___lam__0(v___x_1260_, v_snd_1224_, v_a_1259_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_);
v___y_1204_ = v___x_1261_;
goto v___jp_1203_;
}
else
{
lean_object* v_a_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1269_; 
lean_dec(v_a_1233_);
lean_dec_ref_known(v_snd_1224_, 3);
lean_dec_ref(v_e_1190_);
v_a_1262_ = lean_ctor_get(v___x_1258_, 0);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1258_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1264_ = v___x_1258_;
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_a_1262_);
lean_dec(v___x_1258_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1267_; 
if (v_isShared_1265_ == 0)
{
v___x_1267_ = v___x_1264_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_a_1262_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
}
}
else
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1277_; 
lean_dec(v_a_1233_);
lean_dec_ref_known(v_snd_1224_, 3);
lean_dec_ref(v_e_1190_);
v_a_1270_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1272_ = v___x_1250_;
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1250_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1275_; 
if (v_isShared_1273_ == 0)
{
v___x_1275_ = v___x_1272_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_a_1270_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
}
}
v___jp_1243_:
{
lean_object* v___x_1244_; uint8_t v___x_1245_; lean_object* v___x_1246_; 
v___x_1244_ = lean_box(0);
v___x_1245_ = lean_unbox(v_a_1233_);
lean_dec(v_a_1233_);
v___x_1246_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___lam__0(v___x_1245_, v_snd_1224_, v___x_1244_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_);
v___y_1204_ = v___x_1246_;
goto v___jp_1203_;
}
}
}
else
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
lean_dec_ref_known(v_snd_1224_, 3);
lean_del_object(v___x_1226_);
lean_dec_ref(v_e_1190_);
v_a_1278_ = lean_ctor_get(v___x_1232_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1232_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1232_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
}
else
{
lean_object* v___x_1287_; 
lean_dec_ref(v_e_1190_);
if (v_isShared_1227_ == 0)
{
lean_ctor_set(v___x_1226_, 0, v___x_1228_);
v___x_1287_ = v___x_1226_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1228_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v_snd_1224_);
v___x_1287_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
lean_object* v___x_1288_; 
v___x_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
return v___x_1288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___boxed(lean_object* v_e_1292_, lean_object* v_a_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v_res_1305_; 
v_res_1305_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg(v_e_1292_, v_a_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
lean_dec(v___y_1297_);
lean_dec_ref(v___y_1296_);
lean_dec(v___y_1295_);
lean_dec(v___y_1294_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied(lean_object* v_e_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_){
_start:
{
lean_object* v___x_1322_; 
lean_inc_ref(v_e_1306_);
v___x_1322_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1306_, v_a_1314_);
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_object* v_a_1323_; lean_object* v___x_1324_; uint8_t v___x_1325_; 
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
lean_inc(v_a_1323_);
lean_dec_ref_known(v___x_1322_, 1);
v___x_1324_ = l_Lean_Expr_cleanupAnnotations(v_a_1323_);
lean_dec(v_a_1323_);
v___x_1325_ = l_Lean_Expr_isApp(v___x_1324_);
if (v___x_1325_ == 0)
{
lean_dec_ref(v___x_1324_);
lean_dec_ref(v_e_1306_);
goto v___jp_1318_;
}
else
{
lean_object* v___x_1326_; lean_object* v___x_1327_; uint8_t v___x_1328_; 
v___x_1326_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1324_);
v___x_1327_ = ((lean_object*)(l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__4));
v___x_1328_ = l_Lean_Expr_isConstOf(v___x_1326_, v___x_1327_);
lean_dec_ref(v___x_1326_);
if (v___x_1328_ == 0)
{
lean_dec_ref(v___x_1324_);
lean_dec_ref(v_e_1306_);
goto v___jp_1318_;
}
else
{
lean_object* v_arg_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v_arg_1329_ = lean_ctor_get(v___x_1324_, 1);
lean_inc_ref(v_arg_1329_);
lean_dec_ref(v___x_1324_);
v___x_1330_ = lean_box(0);
v___x_1331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1330_);
lean_ctor_set(v___x_1331_, 1, v_arg_1329_);
v___x_1332_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg(v_e_1306_, v___x_1331_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_, v_a_1314_, v_a_1315_, v_a_1316_);
if (lean_obj_tag(v___x_1332_) == 0)
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1347_; 
v_a_1333_ = lean_ctor_get(v___x_1332_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1332_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1335_ = v___x_1332_;
v_isShared_1336_ = v_isSharedCheck_1347_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1332_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1347_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v_fst_1337_; 
v_fst_1337_ = lean_ctor_get(v_a_1333_, 0);
lean_inc(v_fst_1337_);
lean_dec(v_a_1333_);
if (lean_obj_tag(v_fst_1337_) == 0)
{
uint8_t v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1341_; 
v___x_1338_ = 0;
v___x_1339_ = lean_box(v___x_1338_);
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 0, v___x_1339_);
v___x_1341_ = v___x_1335_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v___x_1339_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
return v___x_1341_;
}
}
else
{
lean_object* v_val_1343_; lean_object* v___x_1345_; 
v_val_1343_ = lean_ctor_get(v_fst_1337_, 0);
lean_inc(v_val_1343_);
lean_dec_ref_known(v_fst_1337_, 1);
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 0, v_val_1343_);
v___x_1345_ = v___x_1335_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_val_1343_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
v_a_1348_ = lean_ctor_get(v___x_1332_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1332_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1332_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1332_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
v___x_1353_ = v___x_1350_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_a_1348_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
}
}
}
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec_ref(v_e_1306_);
v_a_1356_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1322_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1322_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
v___jp_1318_:
{
uint8_t v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1319_ = 0;
v___x_1320_ = lean_box(v___x_1319_);
v___x_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
return v___x_1321_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied___boxed(lean_object* v_e_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_){
_start:
{
lean_object* v_res_1376_; 
v_res_1376_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied(v_e_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_, v_a_1372_, v_a_1373_, v_a_1374_);
lean_dec(v_a_1374_);
lean_dec_ref(v_a_1373_);
lean_dec(v_a_1372_);
lean_dec_ref(v_a_1371_);
lean_dec(v_a_1370_);
lean_dec_ref(v_a_1369_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec(v_a_1365_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0(lean_object* v_cls_1377_, lean_object* v_msg_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_){
_start:
{
lean_object* v___x_1390_; 
v___x_1390_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg(v_cls_1377_, v_msg_1378_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_);
return v___x_1390_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___boxed(lean_object* v_cls_1391_, lean_object* v_msg_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0(v_cls_1391_, v_msg_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec(v___y_1393_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1(lean_object* v_e_1405_, lean_object* v_inst_1406_, lean_object* v_a_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_){
_start:
{
lean_object* v___x_1419_; 
v___x_1419_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg(v_e_1405_, v_a_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_);
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___boxed(lean_object* v_e_1420_, lean_object* v_inst_1421_, lean_object* v_a_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1(v_e_1420_, v_inst_1421_, v_a_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
lean_dec(v___y_1432_);
lean_dec_ref(v___y_1431_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
lean_dec(v___y_1426_);
lean_dec_ref(v___y_1425_);
lean_dec(v___y_1424_);
lean_dec(v___y_1423_);
return v_res_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___redArg___lam__0(lean_object* v_k_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v_b_1442_, lean_object* v_c_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
lean_object* v___x_1449_; 
lean_inc(v___y_1447_);
lean_inc_ref(v___y_1446_);
lean_inc(v___y_1445_);
lean_inc_ref(v___y_1444_);
lean_inc(v___y_1441_);
lean_inc_ref(v___y_1440_);
lean_inc(v___y_1439_);
lean_inc_ref(v___y_1438_);
lean_inc(v___y_1437_);
lean_inc(v___y_1436_);
v___x_1449_ = lean_apply_13(v_k_1435_, v_b_1442_, v_c_1443_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, lean_box(0));
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___redArg___lam__0___boxed(lean_object* v_k_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v_b_1457_, lean_object* v_c_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___redArg___lam__0(v_k_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v_b_1457_, v_c_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec(v___y_1456_);
lean_dec_ref(v___y_1455_);
lean_dec(v___y_1454_);
lean_dec_ref(v___y_1453_);
lean_dec(v___y_1452_);
lean_dec(v___y_1451_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___redArg(lean_object* v_type_1465_, lean_object* v_k_1466_, uint8_t v_cleanupAnnotations_1467_, uint8_t v_whnfType_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_){
_start:
{
lean_object* v___f_1480_; lean_object* v___x_1481_; 
lean_inc(v___y_1474_);
lean_inc_ref(v___y_1473_);
lean_inc(v___y_1472_);
lean_inc_ref(v___y_1471_);
lean_inc(v___y_1470_);
lean_inc(v___y_1469_);
v___f_1480_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___redArg___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1480_, 0, v_k_1466_);
lean_closure_set(v___f_1480_, 1, v___y_1469_);
lean_closure_set(v___f_1480_, 2, v___y_1470_);
lean_closure_set(v___f_1480_, 3, v___y_1471_);
lean_closure_set(v___f_1480_, 4, v___y_1472_);
lean_closure_set(v___f_1480_, 5, v___y_1473_);
lean_closure_set(v___f_1480_, 6, v___y_1474_);
v___x_1481_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1465_, v___f_1480_, v_cleanupAnnotations_1467_, v_whnfType_1468_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
if (lean_obj_tag(v___x_1481_) == 0)
{
return v___x_1481_;
}
else
{
lean_object* v_a_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1489_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1484_ = v___x_1481_;
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_a_1482_);
lean_dec(v___x_1481_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1487_; 
if (v_isShared_1485_ == 0)
{
v___x_1487_ = v___x_1484_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_a_1482_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___redArg___boxed(lean_object* v_type_1490_, lean_object* v_k_1491_, lean_object* v_cleanupAnnotations_1492_, lean_object* v_whnfType_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1505_; uint8_t v_whnfType_boxed_1506_; lean_object* v_res_1507_; 
v_cleanupAnnotations_boxed_1505_ = lean_unbox(v_cleanupAnnotations_1492_);
v_whnfType_boxed_1506_ = lean_unbox(v_whnfType_1493_);
v_res_1507_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___redArg(v_type_1490_, v_k_1491_, v_cleanupAnnotations_boxed_1505_, v_whnfType_boxed_1506_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v___y_1495_);
lean_dec(v___y_1494_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1(lean_object* v_00_u03b1_1508_, lean_object* v_type_1509_, lean_object* v_k_1510_, uint8_t v_cleanupAnnotations_1511_, uint8_t v_whnfType_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_){
_start:
{
lean_object* v___x_1524_; 
v___x_1524_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___redArg(v_type_1509_, v_k_1510_, v_cleanupAnnotations_1511_, v_whnfType_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___boxed(lean_object* v_00_u03b1_1525_, lean_object* v_type_1526_, lean_object* v_k_1527_, lean_object* v_cleanupAnnotations_1528_, lean_object* v_whnfType_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1541_; uint8_t v_whnfType_boxed_1542_; lean_object* v_res_1543_; 
v_cleanupAnnotations_boxed_1541_ = lean_unbox(v_cleanupAnnotations_1528_);
v_whnfType_boxed_1542_ = lean_unbox(v_whnfType_1529_);
v_res_1543_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1(v_00_u03b1_1525_, v_type_1526_, v_k_1527_, v_cleanupAnnotations_boxed_1541_, v_whnfType_boxed_1542_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec(v___y_1537_);
lean_dec_ref(v___y_1536_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec(v___y_1531_);
lean_dec(v___y_1530_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___lam__0___boxed(lean_object** _args){
lean_object* v_e_1547_ = _args[0];
lean_object* v_name_1548_ = _args[1];
lean_object* v_name_1549_ = _args[2];
lean_object* v_ctor_1550_ = _args[3];
lean_object* v_a_1551_ = _args[4];
lean_object* v_xs_1552_ = _args[5];
lean_object* v_x_1553_ = _args[6];
lean_object* v___y_1554_ = _args[7];
lean_object* v___y_1555_ = _args[8];
lean_object* v___y_1556_ = _args[9];
lean_object* v___y_1557_ = _args[10];
lean_object* v___y_1558_ = _args[11];
lean_object* v___y_1559_ = _args[12];
lean_object* v___y_1560_ = _args[13];
lean_object* v___y_1561_ = _args[14];
lean_object* v___y_1562_ = _args[15];
lean_object* v___y_1563_ = _args[16];
lean_object* v___y_1564_ = _args[17];
_start:
{
uint8_t v_ctor_boxed_1565_; lean_object* v_res_1566_; 
v_ctor_boxed_1565_ = lean_unbox(v_ctor_1550_);
v_res_1566_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___lam__0(v_e_1547_, v_name_1548_, v_name_1549_, v_ctor_boxed_1565_, v_a_1551_, v_xs_1552_, v_x_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec(v___y_1561_);
lean_dec_ref(v___y_1560_);
lean_dec(v___y_1559_);
lean_dec_ref(v___y_1558_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
lean_dec(v___y_1555_);
lean_dec(v___y_1554_);
lean_dec_ref(v_x_1553_);
lean_dec_ref(v_xs_1552_);
lean_dec(v_name_1549_);
lean_dec(v_name_1548_);
return v_res_1566_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__1(void){
_start:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1568_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__0));
v___x_1569_ = l_Lean_stringToMessageData(v___x_1568_);
return v___x_1569_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__3(void){
_start:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1571_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__2));
v___x_1572_ = l_Lean_stringToMessageData(v___x_1571_);
return v___x_1572_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__5(void){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__4));
v___x_1575_ = l_Lean_stringToMessageData(v___x_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f(lean_object* v_e_1576_, lean_object* v_h_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_){
_start:
{
uint8_t v___y_1593_; uint8_t v___y_1594_; lean_object* v___y_1595_; lean_object* v___y_1596_; lean_object* v_h_1597_; lean_object* v___y_1598_; lean_object* v___y_1599_; lean_object* v___y_1600_; lean_object* v___y_1601_; lean_object* v___y_1602_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1607_; lean_object* v___y_1799_; lean_object* v___y_1800_; lean_object* v___y_1801_; lean_object* v___y_1802_; lean_object* v___y_1803_; lean_object* v___y_1804_; lean_object* v___y_1805_; lean_object* v___y_1806_; lean_object* v___y_1807_; lean_object* v___y_1808_; lean_object* v___y_1809_; lean_object* v___y_1810_; lean_object* v___y_1811_; uint8_t v___y_1812_; lean_object* v___y_1887_; lean_object* v___y_1888_; lean_object* v___y_1889_; lean_object* v___y_1890_; lean_object* v___y_1891_; lean_object* v___y_1892_; lean_object* v___y_1893_; lean_object* v___y_1894_; lean_object* v___y_1895_; lean_object* v___y_1896_; lean_object* v_toCold_1984_; lean_object* v_options_1985_; uint8_t v_hasTrace_1986_; 
v_toCold_1984_ = lean_ctor_get(v_a_1586_, 0);
v_options_1985_ = lean_ctor_get(v_toCold_1984_, 2);
v_hasTrace_1986_ = lean_ctor_get_uint8(v_options_1985_, sizeof(void*)*1);
if (v_hasTrace_1986_ == 0)
{
v___y_1887_ = v_a_1578_;
v___y_1888_ = v_a_1579_;
v___y_1889_ = v_a_1580_;
v___y_1890_ = v_a_1581_;
v___y_1891_ = v_a_1582_;
v___y_1892_ = v_a_1583_;
v___y_1893_ = v_a_1584_;
v___y_1894_ = v_a_1585_;
v___y_1895_ = v_a_1586_;
v___y_1896_ = v_a_1587_;
goto v___jp_1886_;
}
else
{
lean_object* v_inheritedTraceOptions_1987_; lean_object* v_cls_1988_; lean_object* v___x_1989_; uint8_t v___x_1990_; 
v_inheritedTraceOptions_1987_ = lean_ctor_get(v_toCold_1984_, 11);
v_cls_1988_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__3));
v___x_1989_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6);
v___x_1990_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1987_, v_options_1985_, v___x_1989_);
if (v___x_1990_ == 0)
{
v___y_1887_ = v_a_1578_;
v___y_1888_ = v_a_1579_;
v___y_1889_ = v_a_1580_;
v___y_1890_ = v_a_1581_;
v___y_1891_ = v_a_1582_;
v___y_1892_ = v_a_1583_;
v___y_1893_ = v_a_1584_;
v___y_1894_ = v_a_1585_;
v___y_1895_ = v_a_1586_;
v___y_1896_ = v_a_1587_;
goto v___jp_1886_;
}
else
{
lean_object* v___x_1991_; 
v___x_1991_ = l_Lean_Meta_Grind_updateLastTag(v_a_1578_, v_a_1579_, v_a_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_, v_a_1587_);
if (lean_obj_tag(v___x_1991_) == 0)
{
lean_object* v___x_1992_; 
lean_dec_ref_known(v___x_1991_, 1);
lean_inc(v_a_1587_);
lean_inc_ref(v_a_1586_);
lean_inc(v_a_1585_);
lean_inc_ref(v_a_1584_);
lean_inc_ref(v_h_1577_);
v___x_1992_ = lean_infer_type(v_h_1577_, v_a_1584_, v_a_1585_, v_a_1586_, v_a_1587_);
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_object* v_a_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
v_a_1993_ = lean_ctor_get(v___x_1992_, 0);
lean_inc(v_a_1993_);
lean_dec_ref_known(v___x_1992_, 1);
v___x_1994_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__5, &l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__5);
v___x_1995_ = l_Lean_MessageData_ofExpr(v_a_1993_);
v___x_1996_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1996_, 0, v___x_1994_);
lean_ctor_set(v___x_1996_, 1, v___x_1995_);
v___x_1997_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg(v_cls_1988_, v___x_1996_, v_a_1584_, v_a_1585_, v_a_1586_, v_a_1587_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_dec_ref_known(v___x_1997_, 1);
v___y_1887_ = v_a_1578_;
v___y_1888_ = v_a_1579_;
v___y_1889_ = v_a_1580_;
v___y_1890_ = v_a_1581_;
v___y_1891_ = v_a_1582_;
v___y_1892_ = v_a_1583_;
v___y_1893_ = v_a_1584_;
v___y_1894_ = v_a_1585_;
v___y_1895_ = v_a_1586_;
v___y_1896_ = v_a_1587_;
goto v___jp_1886_;
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_dec_ref(v_h_1577_);
lean_dec_ref(v_e_1576_);
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1997_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1997_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
else
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2013_; 
lean_dec_ref(v_h_1577_);
lean_dec_ref(v_e_1576_);
v_a_2006_ = lean_ctor_get(v___x_1992_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_1992_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2008_ = v___x_1992_;
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_1992_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2011_; 
if (v_isShared_2009_ == 0)
{
v___x_2011_ = v___x_2008_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_2006_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
else
{
lean_object* v_a_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2021_; 
lean_dec_ref(v_h_1577_);
lean_dec_ref(v_e_1576_);
v_a_2014_ = lean_ctor_get(v___x_1991_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2016_ = v___x_1991_;
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_a_2014_);
lean_dec(v___x_1991_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_a_2014_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
}
}
}
v___jp_1589_:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1590_ = lean_box(0);
v___x_1591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1590_);
return v___x_1591_;
}
v___jp_1592_:
{
if (v___y_1593_ == 0)
{
lean_dec_ref(v_e_1576_);
if (v___y_1594_ == 0)
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
lean_dec_ref(v_h_1597_);
lean_dec_ref(v___y_1596_);
lean_dec_ref(v___y_1595_);
v___x_1608_ = lean_box(0);
v___x_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1608_);
return v___x_1609_;
}
else
{
lean_object* v___x_1610_; 
lean_inc_ref(v___y_1596_);
v___x_1610_ = l_Lean_Meta_isLitValue(v___y_1596_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_object* v_a_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1679_; 
v_a_1611_ = lean_ctor_get(v___x_1610_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1610_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1613_ = v___x_1610_;
v_isShared_1614_ = v_isSharedCheck_1679_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_a_1611_);
lean_dec(v___x_1610_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1679_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
uint8_t v___x_1615_; 
v___x_1615_ = lean_unbox(v_a_1611_);
lean_dec(v_a_1611_);
if (v___x_1615_ == 0)
{
lean_object* v___x_1616_; lean_object* v___x_1618_; 
lean_dec_ref(v_h_1597_);
lean_dec_ref(v___y_1596_);
lean_dec_ref(v___y_1595_);
v___x_1616_ = lean_box(0);
if (v_isShared_1614_ == 0)
{
lean_ctor_set(v___x_1613_, 0, v___x_1616_);
v___x_1618_ = v___x_1613_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v___x_1616_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
return v___x_1618_;
}
}
else
{
lean_object* v___x_1620_; 
lean_del_object(v___x_1613_);
lean_inc_ref(v___y_1595_);
v___x_1620_ = l_Lean_Meta_normLitValue(v___y_1595_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v_a_1621_; lean_object* v___x_1622_; 
v_a_1621_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_a_1621_);
lean_dec_ref_known(v___x_1620_, 1);
lean_inc_ref(v___y_1596_);
v___x_1622_ = l_Lean_Meta_normLitValue(v___y_1596_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
if (lean_obj_tag(v___x_1622_) == 0)
{
lean_object* v_a_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1662_; 
v_a_1623_ = lean_ctor_get(v___x_1622_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v___x_1622_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1625_ = v___x_1622_;
v_isShared_1626_ = v_isSharedCheck_1662_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_a_1623_);
lean_dec(v___x_1622_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1662_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
uint8_t v___x_1627_; 
v___x_1627_ = lean_expr_eqv(v_a_1621_, v_a_1623_);
lean_dec(v_a_1623_);
lean_dec(v_a_1621_);
if (v___x_1627_ == 0)
{
lean_object* v___x_1628_; 
lean_del_object(v___x_1625_);
v___x_1628_ = l_Lean_Meta_mkEq(v___y_1595_, v___y_1596_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
if (lean_obj_tag(v___x_1628_) == 0)
{
lean_object* v_a_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
v_a_1629_ = lean_ctor_get(v___x_1628_, 0);
lean_inc(v_a_1629_);
lean_dec_ref_known(v___x_1628_, 1);
v___x_1630_ = l_Lean_mkNot(v_a_1629_);
v___x_1631_ = l_Lean_Meta_mkDecideProof(v___x_1630_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
if (lean_obj_tag(v___x_1631_) == 0)
{
lean_object* v_a_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1641_; 
v_a_1632_ = lean_ctor_get(v___x_1631_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v___x_1631_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1634_ = v___x_1631_;
v_isShared_1635_ = v_isSharedCheck_1641_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_a_1632_);
lean_dec(v___x_1631_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1641_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1639_; 
v___x_1636_ = l_Lean_Expr_app___override(v_a_1632_, v_h_1597_);
v___x_1637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1636_);
if (v_isShared_1635_ == 0)
{
lean_ctor_set(v___x_1634_, 0, v___x_1637_);
v___x_1639_ = v___x_1634_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1637_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
}
else
{
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1649_; 
lean_dec_ref(v_h_1597_);
v_a_1642_ = lean_ctor_get(v___x_1631_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1631_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1644_ = v___x_1631_;
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v___x_1631_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1647_; 
if (v_isShared_1645_ == 0)
{
v___x_1647_ = v___x_1644_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_a_1642_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
}
else
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1657_; 
lean_dec_ref(v_h_1597_);
v_a_1650_ = lean_ctor_get(v___x_1628_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_1628_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1652_ = v___x_1628_;
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v___x_1628_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
lean_object* v___x_1655_; 
if (v_isShared_1653_ == 0)
{
v___x_1655_ = v___x_1652_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_a_1650_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
return v___x_1655_;
}
}
}
}
else
{
lean_object* v___x_1658_; lean_object* v___x_1660_; 
lean_dec_ref(v_h_1597_);
lean_dec_ref(v___y_1596_);
lean_dec_ref(v___y_1595_);
v___x_1658_ = lean_box(0);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 0, v___x_1658_);
v___x_1660_ = v___x_1625_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v___x_1658_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
return v___x_1660_;
}
}
}
}
else
{
lean_object* v_a_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1670_; 
lean_dec(v_a_1621_);
lean_dec_ref(v_h_1597_);
lean_dec_ref(v___y_1596_);
lean_dec_ref(v___y_1595_);
v_a_1663_ = lean_ctor_get(v___x_1622_, 0);
v_isSharedCheck_1670_ = !lean_is_exclusive(v___x_1622_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1665_ = v___x_1622_;
v_isShared_1666_ = v_isSharedCheck_1670_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_a_1663_);
lean_dec(v___x_1622_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1670_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v___x_1668_; 
if (v_isShared_1666_ == 0)
{
v___x_1668_ = v___x_1665_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v_a_1663_);
v___x_1668_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
return v___x_1668_;
}
}
}
}
else
{
lean_object* v_a_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1678_; 
lean_dec_ref(v_h_1597_);
lean_dec_ref(v___y_1596_);
lean_dec_ref(v___y_1595_);
v_a_1671_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1673_ = v___x_1620_;
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_a_1671_);
lean_dec(v___x_1620_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1676_; 
if (v_isShared_1674_ == 0)
{
v___x_1676_ = v___x_1673_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_a_1671_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
}
}
}
else
{
lean_object* v_a_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1687_; 
lean_dec_ref(v_h_1597_);
lean_dec_ref(v___y_1596_);
lean_dec_ref(v___y_1595_);
v_a_1680_ = lean_ctor_get(v___x_1610_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1610_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1682_ = v___x_1610_;
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_a_1680_);
lean_dec(v___x_1610_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1685_; 
if (v_isShared_1683_ == 0)
{
v___x_1685_ = v___x_1682_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v_a_1680_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
}
}
}
else
{
lean_object* v___x_1688_; 
v___x_1688_ = l_Lean_Meta_isConstructorApp_x3f(v___y_1595_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1789_; 
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1789_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1691_ = v___x_1688_;
v_isShared_1692_ = v_isSharedCheck_1789_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_a_1689_);
lean_dec(v___x_1688_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1789_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
if (lean_obj_tag(v_a_1689_) == 1)
{
lean_object* v_val_1693_; lean_object* v___x_1694_; 
lean_del_object(v___x_1691_);
v_val_1693_ = lean_ctor_get(v_a_1689_, 0);
lean_inc(v_val_1693_);
lean_dec_ref_known(v_a_1689_, 1);
v___x_1694_ = l_Lean_Meta_isConstructorApp_x3f(v___y_1596_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1776_; 
v_a_1695_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1697_ = v___x_1694_;
v_isShared_1698_ = v_isSharedCheck_1776_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v___x_1694_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1776_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
if (lean_obj_tag(v_a_1695_) == 1)
{
lean_object* v_val_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1771_; 
lean_del_object(v___x_1697_);
v_val_1699_ = lean_ctor_get(v_a_1695_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v_a_1695_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1701_ = v_a_1695_;
v_isShared_1702_ = v_isSharedCheck_1771_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_val_1699_);
lean_dec(v_a_1695_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1771_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1703_; 
v___x_1703_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v___y_1602_);
if (lean_obj_tag(v___x_1703_) == 0)
{
lean_object* v_a_1704_; lean_object* v___x_1705_; 
v_a_1704_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_a_1704_);
lean_dec_ref_known(v___x_1703_, 1);
v___x_1705_ = l_Lean_Meta_mkNoConfusion(v_a_1704_, v_h_1597_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
if (lean_obj_tag(v___x_1705_) == 0)
{
lean_object* v_toConstantVal_1706_; lean_object* v_toConstantVal_1707_; lean_object* v_a_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1754_; 
v_toConstantVal_1706_ = lean_ctor_get(v_val_1693_, 0);
lean_inc_ref(v_toConstantVal_1706_);
lean_dec(v_val_1693_);
v_toConstantVal_1707_ = lean_ctor_get(v_val_1699_, 0);
lean_inc_ref(v_toConstantVal_1707_);
lean_dec(v_val_1699_);
v_a_1708_ = lean_ctor_get(v___x_1705_, 0);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1705_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1710_ = v___x_1705_;
v_isShared_1711_ = v_isSharedCheck_1754_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_a_1708_);
lean_dec(v___x_1705_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1754_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v_name_1712_; lean_object* v_name_1713_; uint8_t v___x_1714_; 
v_name_1712_ = lean_ctor_get(v_toConstantVal_1706_, 0);
lean_inc(v_name_1712_);
lean_dec_ref(v_toConstantVal_1706_);
v_name_1713_ = lean_ctor_get(v_toConstantVal_1707_, 0);
lean_inc(v_name_1713_);
lean_dec_ref(v_toConstantVal_1707_);
v___x_1714_ = lean_name_eq(v_name_1712_, v_name_1713_);
if (v___x_1714_ == 0)
{
lean_object* v___x_1716_; 
lean_dec(v_name_1713_);
lean_dec(v_name_1712_);
lean_dec_ref(v_e_1576_);
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v_a_1708_);
v___x_1716_ = v___x_1701_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_a_1708_);
v___x_1716_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
lean_object* v___x_1718_; 
if (v_isShared_1711_ == 0)
{
lean_ctor_set(v___x_1710_, 0, v___x_1716_);
v___x_1718_ = v___x_1710_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v___x_1716_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
else
{
lean_object* v___x_1721_; lean_object* v___f_1722_; uint8_t v___x_1723_; lean_object* v___x_1724_; 
lean_del_object(v___x_1710_);
lean_del_object(v___x_1701_);
v___x_1721_ = lean_box(v___y_1593_);
lean_inc(v_a_1708_);
v___f_1722_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___lam__0___boxed), 18, 5);
lean_closure_set(v___f_1722_, 0, v_e_1576_);
lean_closure_set(v___f_1722_, 1, v_name_1712_);
lean_closure_set(v___f_1722_, 2, v_name_1713_);
lean_closure_set(v___f_1722_, 3, v___x_1721_);
lean_closure_set(v___f_1722_, 4, v_a_1708_);
v___x_1723_ = 0;
lean_inc(v___y_1607_);
lean_inc_ref(v___y_1606_);
lean_inc(v___y_1605_);
lean_inc_ref(v___y_1604_);
v___x_1724_ = lean_infer_type(v_a_1708_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
if (lean_obj_tag(v___x_1724_) == 0)
{
lean_object* v_a_1725_; lean_object* v___x_1726_; 
v_a_1725_ = lean_ctor_get(v___x_1724_, 0);
lean_inc(v_a_1725_);
lean_dec_ref_known(v___x_1724_, 1);
v___x_1726_ = l_Lean_Meta_whnfD(v_a_1725_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v_a_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1737_; 
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1729_ = v___x_1726_;
v_isShared_1730_ = v_isSharedCheck_1737_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_a_1727_);
lean_dec(v___x_1726_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1737_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
if (lean_obj_tag(v_a_1727_) == 7)
{
lean_object* v_binderType_1731_; lean_object* v___x_1732_; 
lean_del_object(v___x_1729_);
v_binderType_1731_ = lean_ctor_get(v_a_1727_, 1);
lean_inc_ref(v_binderType_1731_);
lean_dec_ref_known(v_a_1727_, 3);
v___x_1732_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___redArg(v_binderType_1731_, v___f_1722_, v___x_1723_, v___x_1723_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
return v___x_1732_;
}
else
{
lean_object* v___x_1733_; lean_object* v___x_1735_; 
lean_dec(v_a_1727_);
lean_dec_ref(v___f_1722_);
v___x_1733_ = lean_box(0);
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 0, v___x_1733_);
v___x_1735_ = v___x_1729_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1733_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
}
else
{
lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1745_; 
lean_dec_ref(v___f_1722_);
v_a_1738_ = lean_ctor_get(v___x_1726_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1740_ = v___x_1726_;
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1726_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1743_; 
if (v_isShared_1741_ == 0)
{
v___x_1743_ = v___x_1740_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v_a_1738_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1753_; 
lean_dec_ref(v___f_1722_);
v_a_1746_ = lean_ctor_get(v___x_1724_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1748_ = v___x_1724_;
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1724_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1751_; 
if (v_isShared_1749_ == 0)
{
v___x_1751_ = v___x_1748_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1746_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
}
}
}
}
else
{
lean_object* v_a_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1762_; 
lean_del_object(v___x_1701_);
lean_dec(v_val_1699_);
lean_dec(v_val_1693_);
lean_dec_ref(v_e_1576_);
v_a_1755_ = lean_ctor_get(v___x_1705_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v___x_1705_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1757_ = v___x_1705_;
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_a_1755_);
lean_dec(v___x_1705_);
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
lean_del_object(v___x_1701_);
lean_dec(v_val_1699_);
lean_dec(v_val_1693_);
lean_dec_ref(v_h_1597_);
lean_dec_ref(v_e_1576_);
v_a_1763_ = lean_ctor_get(v___x_1703_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1703_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1765_ = v___x_1703_;
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v___x_1703_);
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
}
else
{
lean_object* v___x_1772_; lean_object* v___x_1774_; 
lean_dec(v_a_1695_);
lean_dec(v_val_1693_);
lean_dec_ref(v_h_1597_);
lean_dec_ref(v_e_1576_);
v___x_1772_ = lean_box(0);
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 0, v___x_1772_);
v___x_1774_ = v___x_1697_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v___x_1772_);
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
else
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1784_; 
lean_dec(v_val_1693_);
lean_dec_ref(v_h_1597_);
lean_dec_ref(v_e_1576_);
v_a_1777_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1779_ = v___x_1694_;
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1694_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1780_ == 0)
{
v___x_1782_ = v___x_1779_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1777_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
else
{
lean_object* v___x_1785_; lean_object* v___x_1787_; 
lean_dec(v_a_1689_);
lean_dec_ref(v_h_1597_);
lean_dec_ref(v___y_1596_);
lean_dec_ref(v_e_1576_);
v___x_1785_ = lean_box(0);
if (v_isShared_1692_ == 0)
{
lean_ctor_set(v___x_1691_, 0, v___x_1785_);
v___x_1787_ = v___x_1691_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v___x_1785_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
}
else
{
lean_object* v_a_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1797_; 
lean_dec_ref(v_h_1597_);
lean_dec_ref(v___y_1596_);
lean_dec_ref(v_e_1576_);
v_a_1790_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1792_ = v___x_1688_;
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_a_1790_);
lean_dec(v___x_1688_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1795_; 
if (v_isShared_1793_ == 0)
{
v___x_1795_ = v___x_1792_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_a_1790_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
}
}
v___jp_1798_:
{
lean_object* v_self_1813_; uint8_t v_interpreted_1814_; uint8_t v_ctor_1815_; lean_object* v___x_1816_; 
v_self_1813_ = lean_ctor_get(v___y_1805_, 0);
lean_inc_ref_n(v_self_1813_, 2);
v_interpreted_1814_ = lean_ctor_get_uint8(v___y_1805_, sizeof(void*)*12 + 1);
v_ctor_1815_ = lean_ctor_get_uint8(v___y_1805_, sizeof(void*)*12 + 2);
lean_dec_ref(v___y_1805_);
lean_inc_ref(v___y_1808_);
v___x_1816_ = l_Lean_Meta_Grind_hasSameType(v_self_1813_, v___y_1808_, v___y_1800_, v___y_1804_, v___y_1801_, v___y_1809_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1877_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1819_ = v___x_1816_;
v_isShared_1820_ = v_isSharedCheck_1877_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_a_1817_);
lean_dec(v___x_1816_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1877_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
uint8_t v___x_1821_; 
v___x_1821_ = lean_unbox(v_a_1817_);
lean_dec(v_a_1817_);
if (v___x_1821_ == 0)
{
lean_object* v___x_1822_; lean_object* v___x_1824_; 
lean_dec_ref(v_self_1813_);
lean_dec_ref(v___y_1808_);
lean_dec_ref(v___y_1806_);
lean_dec_ref(v_h_1577_);
lean_dec_ref(v_e_1576_);
v___x_1822_ = lean_box(0);
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 0, v___x_1822_);
v___x_1824_ = v___x_1819_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v___x_1822_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
else
{
lean_del_object(v___x_1819_);
if (v___y_1812_ == 0)
{
lean_object* v___x_1826_; 
lean_inc(v___y_1809_);
lean_inc_ref(v___y_1801_);
lean_inc(v___y_1804_);
lean_inc_ref(v___y_1800_);
lean_inc(v___y_1810_);
lean_inc_ref(v___y_1807_);
lean_inc(v___y_1811_);
lean_inc_ref(v___y_1803_);
lean_inc(v___y_1799_);
lean_inc(v___y_1802_);
lean_inc_ref(v_self_1813_);
v___x_1826_ = lean_grind_mk_eq_proof(v_self_1813_, v___y_1806_, v___y_1802_, v___y_1799_, v___y_1803_, v___y_1811_, v___y_1807_, v___y_1810_, v___y_1800_, v___y_1804_, v___y_1801_, v___y_1809_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v_a_1827_; lean_object* v___x_1828_; 
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc(v_a_1827_);
lean_dec_ref_known(v___x_1826_, 1);
v___x_1828_ = l_Lean_Meta_mkEqTrans(v_a_1827_, v_h_1577_, v___y_1800_, v___y_1804_, v___y_1801_, v___y_1809_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; 
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
lean_inc(v_a_1829_);
lean_dec_ref_known(v___x_1828_, 1);
v___y_1593_ = v_ctor_1815_;
v___y_1594_ = v_interpreted_1814_;
v___y_1595_ = v_self_1813_;
v___y_1596_ = v___y_1808_;
v_h_1597_ = v_a_1829_;
v___y_1598_ = v___y_1802_;
v___y_1599_ = v___y_1799_;
v___y_1600_ = v___y_1803_;
v___y_1601_ = v___y_1811_;
v___y_1602_ = v___y_1807_;
v___y_1603_ = v___y_1810_;
v___y_1604_ = v___y_1800_;
v___y_1605_ = v___y_1804_;
v___y_1606_ = v___y_1801_;
v___y_1607_ = v___y_1809_;
goto v___jp_1592_;
}
else
{
lean_object* v_a_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1837_; 
lean_dec_ref(v_self_1813_);
lean_dec_ref(v___y_1808_);
lean_dec_ref(v_e_1576_);
v_a_1830_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1837_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1832_ = v___x_1828_;
v_isShared_1833_ = v_isSharedCheck_1837_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_a_1830_);
lean_dec(v___x_1828_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1837_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v___x_1835_; 
if (v_isShared_1833_ == 0)
{
v___x_1835_ = v___x_1832_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v_a_1830_);
v___x_1835_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
return v___x_1835_;
}
}
}
}
else
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1845_; 
lean_dec_ref(v_self_1813_);
lean_dec_ref(v___y_1808_);
lean_dec_ref(v_h_1577_);
lean_dec_ref(v_e_1576_);
v_a_1838_ = lean_ctor_get(v___x_1826_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1840_ = v___x_1826_;
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1826_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1843_; 
if (v_isShared_1841_ == 0)
{
v___x_1843_ = v___x_1840_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_a_1838_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
return v___x_1843_;
}
}
}
}
else
{
lean_object* v___x_1846_; 
lean_inc(v___y_1809_);
lean_inc_ref(v___y_1801_);
lean_inc(v___y_1804_);
lean_inc_ref(v___y_1800_);
lean_inc(v___y_1810_);
lean_inc_ref(v___y_1807_);
lean_inc(v___y_1811_);
lean_inc_ref(v___y_1803_);
lean_inc(v___y_1799_);
lean_inc(v___y_1802_);
lean_inc_ref(v_self_1813_);
v___x_1846_ = lean_grind_mk_heq_proof(v_self_1813_, v___y_1806_, v___y_1802_, v___y_1799_, v___y_1803_, v___y_1811_, v___y_1807_, v___y_1810_, v___y_1800_, v___y_1804_, v___y_1801_, v___y_1809_);
if (lean_obj_tag(v___x_1846_) == 0)
{
lean_object* v_a_1847_; lean_object* v___x_1848_; 
v_a_1847_ = lean_ctor_get(v___x_1846_, 0);
lean_inc(v_a_1847_);
lean_dec_ref_known(v___x_1846_, 1);
v___x_1848_ = l_Lean_Meta_mkHEqTrans(v_a_1847_, v_h_1577_, v___y_1800_, v___y_1804_, v___y_1801_, v___y_1809_);
if (lean_obj_tag(v___x_1848_) == 0)
{
lean_object* v_a_1849_; uint8_t v___x_1850_; lean_object* v___x_1851_; 
v_a_1849_ = lean_ctor_get(v___x_1848_, 0);
lean_inc(v_a_1849_);
lean_dec_ref_known(v___x_1848_, 1);
v___x_1850_ = 0;
v___x_1851_ = l_Lean_Meta_mkEqOfHEq(v_a_1849_, v___x_1850_, v___y_1800_, v___y_1804_, v___y_1801_, v___y_1809_);
if (lean_obj_tag(v___x_1851_) == 0)
{
lean_object* v_a_1852_; 
v_a_1852_ = lean_ctor_get(v___x_1851_, 0);
lean_inc(v_a_1852_);
lean_dec_ref_known(v___x_1851_, 1);
v___y_1593_ = v_ctor_1815_;
v___y_1594_ = v_interpreted_1814_;
v___y_1595_ = v_self_1813_;
v___y_1596_ = v___y_1808_;
v_h_1597_ = v_a_1852_;
v___y_1598_ = v___y_1802_;
v___y_1599_ = v___y_1799_;
v___y_1600_ = v___y_1803_;
v___y_1601_ = v___y_1811_;
v___y_1602_ = v___y_1807_;
v___y_1603_ = v___y_1810_;
v___y_1604_ = v___y_1800_;
v___y_1605_ = v___y_1804_;
v___y_1606_ = v___y_1801_;
v___y_1607_ = v___y_1809_;
goto v___jp_1592_;
}
else
{
lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1860_; 
lean_dec_ref(v_self_1813_);
lean_dec_ref(v___y_1808_);
lean_dec_ref(v_e_1576_);
v_a_1853_ = lean_ctor_get(v___x_1851_, 0);
v_isSharedCheck_1860_ = !lean_is_exclusive(v___x_1851_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1855_ = v___x_1851_;
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1851_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1858_; 
if (v_isShared_1856_ == 0)
{
v___x_1858_ = v___x_1855_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v_a_1853_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
}
}
}
}
else
{
lean_object* v_a_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1868_; 
lean_dec_ref(v_self_1813_);
lean_dec_ref(v___y_1808_);
lean_dec_ref(v_e_1576_);
v_a_1861_ = lean_ctor_get(v___x_1848_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1863_ = v___x_1848_;
v_isShared_1864_ = v_isSharedCheck_1868_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_a_1861_);
lean_dec(v___x_1848_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1868_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
lean_object* v___x_1866_; 
if (v_isShared_1864_ == 0)
{
v___x_1866_ = v___x_1863_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v_a_1861_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
}
}
else
{
lean_object* v_a_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1876_; 
lean_dec_ref(v_self_1813_);
lean_dec_ref(v___y_1808_);
lean_dec_ref(v_h_1577_);
lean_dec_ref(v_e_1576_);
v_a_1869_ = lean_ctor_get(v___x_1846_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1846_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1871_ = v___x_1846_;
v_isShared_1872_ = v_isSharedCheck_1876_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_a_1869_);
lean_dec(v___x_1846_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1876_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1874_; 
if (v_isShared_1872_ == 0)
{
v___x_1874_ = v___x_1871_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_a_1869_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1885_; 
lean_dec_ref(v_self_1813_);
lean_dec_ref(v___y_1808_);
lean_dec_ref(v___y_1806_);
lean_dec_ref(v_h_1577_);
lean_dec_ref(v_e_1576_);
v_a_1878_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1880_ = v___x_1816_;
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v___x_1816_);
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
v___jp_1886_:
{
lean_object* v___x_1897_; 
lean_inc(v___y_1896_);
lean_inc_ref(v___y_1895_);
lean_inc(v___y_1894_);
lean_inc_ref(v___y_1893_);
lean_inc_ref(v_h_1577_);
v___x_1897_ = lean_infer_type(v_h_1577_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1975_; 
v_a_1898_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1975_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1975_ == 0)
{
v___x_1900_ = v___x_1897_;
v_isShared_1901_ = v_isSharedCheck_1975_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_dec(v___x_1897_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1975_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1902_; 
v___x_1902_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f(v_a_1898_);
lean_dec(v_a_1898_);
if (lean_obj_tag(v___x_1902_) == 1)
{
lean_object* v_val_1903_; lean_object* v_snd_1904_; lean_object* v_fst_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1970_; 
lean_del_object(v___x_1900_);
v_val_1903_ = lean_ctor_get(v___x_1902_, 0);
lean_inc(v_val_1903_);
lean_dec_ref_known(v___x_1902_, 1);
v_snd_1904_ = lean_ctor_get(v_val_1903_, 1);
v_fst_1905_ = lean_ctor_get(v_val_1903_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v_val_1903_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1907_ = v_val_1903_;
v_isShared_1908_ = v_isSharedCheck_1970_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_snd_1904_);
lean_inc(v_fst_1905_);
lean_dec(v_val_1903_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1970_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v_fst_1909_; lean_object* v_snd_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1969_; 
v_fst_1909_ = lean_ctor_get(v_snd_1904_, 0);
v_snd_1910_ = lean_ctor_get(v_snd_1904_, 1);
v_isSharedCheck_1969_ = !lean_is_exclusive(v_snd_1904_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1912_ = v_snd_1904_;
v_isShared_1913_ = v_isSharedCheck_1969_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_snd_1910_);
lean_inc(v_fst_1909_);
lean_dec(v_snd_1904_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1969_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1914_; 
v___x_1914_ = l_Lean_Meta_Sym_shareCommon(v_fst_1909_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_a_1915_; lean_object* v___x_1916_; 
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
lean_inc(v_a_1915_);
lean_dec_ref_known(v___x_1914_, 1);
v___x_1916_ = l_Lean_Meta_Grind_getRootENode_x3f___redArg(v_a_1915_, v___y_1887_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
lean_inc(v_a_1917_);
lean_dec_ref_known(v___x_1916_, 1);
if (lean_obj_tag(v_a_1917_) == 1)
{
lean_del_object(v___x_1912_);
lean_del_object(v___x_1907_);
if (lean_obj_tag(v_fst_1905_) == 0)
{
lean_object* v_val_1918_; uint8_t v___x_1919_; 
v_val_1918_ = lean_ctor_get(v_a_1917_, 0);
lean_inc(v_val_1918_);
lean_dec_ref_known(v_a_1917_, 1);
v___x_1919_ = 0;
v___y_1799_ = v___y_1888_;
v___y_1800_ = v___y_1893_;
v___y_1801_ = v___y_1895_;
v___y_1802_ = v___y_1887_;
v___y_1803_ = v___y_1889_;
v___y_1804_ = v___y_1894_;
v___y_1805_ = v_val_1918_;
v___y_1806_ = v_a_1915_;
v___y_1807_ = v___y_1891_;
v___y_1808_ = v_snd_1910_;
v___y_1809_ = v___y_1896_;
v___y_1810_ = v___y_1892_;
v___y_1811_ = v___y_1890_;
v___y_1812_ = v___x_1919_;
goto v___jp_1798_;
}
else
{
lean_object* v_val_1920_; uint8_t v___x_1921_; 
lean_dec_ref_known(v_fst_1905_, 1);
v_val_1920_ = lean_ctor_get(v_a_1917_, 0);
lean_inc(v_val_1920_);
lean_dec_ref_known(v_a_1917_, 1);
v___x_1921_ = 1;
v___y_1799_ = v___y_1888_;
v___y_1800_ = v___y_1893_;
v___y_1801_ = v___y_1895_;
v___y_1802_ = v___y_1887_;
v___y_1803_ = v___y_1889_;
v___y_1804_ = v___y_1894_;
v___y_1805_ = v_val_1920_;
v___y_1806_ = v_a_1915_;
v___y_1807_ = v___y_1891_;
v___y_1808_ = v_snd_1910_;
v___y_1809_ = v___y_1896_;
v___y_1810_ = v___y_1892_;
v___y_1811_ = v___y_1890_;
v___y_1812_ = v___x_1921_;
goto v___jp_1798_;
}
}
else
{
lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1925_; 
lean_dec(v_a_1917_);
lean_dec(v_snd_1910_);
lean_dec(v_fst_1905_);
lean_dec_ref(v_h_1577_);
v___x_1922_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__1, &l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__1);
v___x_1923_ = l_Lean_indentExpr(v_a_1915_);
if (v_isShared_1913_ == 0)
{
lean_ctor_set_tag(v___x_1912_, 7);
lean_ctor_set(v___x_1912_, 1, v___x_1923_);
lean_ctor_set(v___x_1912_, 0, v___x_1922_);
v___x_1925_ = v___x_1912_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1922_);
lean_ctor_set(v_reuseFailAlloc_1952_, 1, v___x_1923_);
v___x_1925_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
lean_object* v___x_1926_; lean_object* v___x_1928_; 
v___x_1926_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__3, &l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___closed__3);
if (v_isShared_1908_ == 0)
{
lean_ctor_set_tag(v___x_1907_, 7);
lean_ctor_set(v___x_1907_, 1, v___x_1926_);
lean_ctor_set(v___x_1907_, 0, v___x_1925_);
v___x_1928_ = v___x_1907_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v___x_1925_);
lean_ctor_set(v_reuseFailAlloc_1951_, 1, v___x_1926_);
v___x_1928_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1929_ = l_Lean_indentExpr(v_e_1576_);
v___x_1930_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1928_);
lean_ctor_set(v___x_1930_, 1, v___x_1929_);
v___x_1931_ = l_Lean_Meta_Sym_getConfig___redArg(v___y_1891_);
if (lean_obj_tag(v___x_1931_) == 0)
{
lean_object* v_a_1932_; uint8_t v_verbose_1933_; 
v_a_1932_ = lean_ctor_get(v___x_1931_, 0);
lean_inc(v_a_1932_);
lean_dec_ref_known(v___x_1931_, 1);
v_verbose_1933_ = lean_ctor_get_uint8(v_a_1932_, 0);
lean_dec(v_a_1932_);
if (v_verbose_1933_ == 0)
{
lean_dec_ref_known(v___x_1930_, 2);
goto v___jp_1589_;
}
else
{
lean_object* v___x_1934_; 
v___x_1934_ = l_Lean_Meta_Sym_reportIssue(v___x_1930_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
if (lean_obj_tag(v___x_1934_) == 0)
{
lean_dec_ref_known(v___x_1934_, 1);
goto v___jp_1589_;
}
else
{
lean_object* v_a_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1942_; 
v_a_1935_ = lean_ctor_get(v___x_1934_, 0);
v_isSharedCheck_1942_ = !lean_is_exclusive(v___x_1934_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1937_ = v___x_1934_;
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_a_1935_);
lean_dec(v___x_1934_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1940_; 
if (v_isShared_1938_ == 0)
{
v___x_1940_ = v___x_1937_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v_a_1935_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
return v___x_1940_;
}
}
}
}
}
else
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1950_; 
lean_dec_ref_known(v___x_1930_, 2);
v_a_1943_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1945_ = v___x_1931_;
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1931_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1948_; 
if (v_isShared_1946_ == 0)
{
v___x_1948_ = v___x_1945_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v_a_1943_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1960_; 
lean_dec(v_a_1915_);
lean_del_object(v___x_1912_);
lean_dec(v_snd_1910_);
lean_del_object(v___x_1907_);
lean_dec(v_fst_1905_);
lean_dec_ref(v_h_1577_);
lean_dec_ref(v_e_1576_);
v_a_1953_ = lean_ctor_get(v___x_1916_, 0);
v_isSharedCheck_1960_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1955_ = v___x_1916_;
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_a_1953_);
lean_dec(v___x_1916_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1958_; 
if (v_isShared_1956_ == 0)
{
v___x_1958_ = v___x_1955_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_a_1953_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
}
}
else
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
lean_del_object(v___x_1912_);
lean_dec(v_snd_1910_);
lean_del_object(v___x_1907_);
lean_dec(v_fst_1905_);
lean_dec_ref(v_h_1577_);
lean_dec_ref(v_e_1576_);
v_a_1961_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1963_ = v___x_1914_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1914_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1966_; 
if (v_isShared_1964_ == 0)
{
v___x_1966_ = v___x_1963_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_a_1961_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
}
}
}
}
else
{
lean_object* v___x_1971_; lean_object* v___x_1973_; 
lean_dec(v___x_1902_);
lean_dec_ref(v_h_1577_);
lean_dec_ref(v_e_1576_);
v___x_1971_ = lean_box(0);
if (v_isShared_1901_ == 0)
{
lean_ctor_set(v___x_1900_, 0, v___x_1971_);
v___x_1973_ = v___x_1900_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v___x_1971_);
v___x_1973_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
return v___x_1973_;
}
}
}
}
else
{
lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1983_; 
lean_dec_ref(v_h_1577_);
lean_dec_ref(v_e_1576_);
v_a_1976_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1978_ = v___x_1897_;
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1897_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1981_; 
if (v_isShared_1979_ == 0)
{
v___x_1981_ = v___x_1978_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_a_1976_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
return v___x_1981_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__0(lean_object* v_e_2022_, lean_object* v_xs_2023_, lean_object* v___x_2024_, lean_object* v___x_2025_, uint8_t v___x_2026_, lean_object* v_a_2027_, lean_object* v_as_2028_, size_t v_sz_2029_, size_t v_i_2030_, lean_object* v_b_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
uint8_t v___y_2044_; uint8_t v___x_2092_; 
v___x_2092_ = lean_name_eq(v___x_2024_, v___x_2025_);
if (v___x_2092_ == 0)
{
uint8_t v___x_2093_; 
v___x_2093_ = 1;
v___y_2044_ = v___x_2093_;
goto v___jp_2043_;
}
else
{
uint8_t v___x_2094_; 
v___x_2094_ = 0;
v___y_2044_ = v___x_2094_;
goto v___jp_2043_;
}
v___jp_2043_:
{
uint8_t v___x_2045_; 
v___x_2045_ = lean_usize_dec_lt(v_i_2030_, v_sz_2029_);
if (v___x_2045_ == 0)
{
lean_object* v___x_2046_; 
lean_dec_ref(v_a_2027_);
lean_dec_ref(v_e_2022_);
v___x_2046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2046_, 0, v_b_2031_);
return v___x_2046_;
}
else
{
lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v_a_2049_; lean_object* v___x_2050_; 
lean_dec_ref(v_b_2031_);
v___x_2047_ = lean_box(0);
v___x_2048_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___lam__0___closed__0));
v_a_2049_ = lean_array_uget_borrowed(v_as_2028_, v_i_2030_);
lean_inc(v_a_2049_);
lean_inc_ref(v_e_2022_);
v___x_2050_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f(v_e_2022_, v_a_2049_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v_a_2051_; 
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
lean_inc(v_a_2051_);
lean_dec_ref_known(v___x_2050_, 1);
if (lean_obj_tag(v_a_2051_) == 1)
{
lean_object* v_val_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2080_; 
lean_dec_ref(v_e_2022_);
v_val_2052_ = lean_ctor_get(v_a_2051_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v_a_2051_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2054_ = v_a_2051_;
v_isShared_2055_ = v_isSharedCheck_2080_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_val_2052_);
lean_dec(v_a_2051_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2080_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
uint8_t v___x_2056_; lean_object* v___x_2057_; 
v___x_2056_ = 1;
v___x_2057_ = l_Lean_Meta_mkLambdaFVars(v_xs_2023_, v_val_2052_, v___y_2044_, v___x_2026_, v___y_2044_, v___x_2026_, v___x_2056_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_);
if (lean_obj_tag(v___x_2057_) == 0)
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2071_; 
v_a_2058_ = lean_ctor_get(v___x_2057_, 0);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2060_ = v___x_2057_;
v_isShared_2061_ = v_isSharedCheck_2071_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2057_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2071_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2062_; lean_object* v___x_2064_; 
v___x_2062_ = l_Lean_Expr_app___override(v_a_2027_, v_a_2058_);
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 0, v___x_2062_);
v___x_2064_ = v___x_2054_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v___x_2062_);
v___x_2064_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2068_; 
v___x_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2065_, 0, v___x_2064_);
v___x_2066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2065_);
lean_ctor_set(v___x_2066_, 1, v___x_2047_);
if (v_isShared_2061_ == 0)
{
lean_ctor_set(v___x_2060_, 0, v___x_2066_);
v___x_2068_ = v___x_2060_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v___x_2066_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
else
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2079_; 
lean_del_object(v___x_2054_);
lean_dec_ref(v_a_2027_);
v_a_2072_ = lean_ctor_get(v___x_2057_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2074_ = v___x_2057_;
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v___x_2057_);
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
}
else
{
size_t v___x_2081_; size_t v___x_2082_; 
lean_dec(v_a_2051_);
v___x_2081_ = ((size_t)1ULL);
v___x_2082_ = lean_usize_add(v_i_2030_, v___x_2081_);
v_i_2030_ = v___x_2082_;
v_b_2031_ = v___x_2048_;
goto _start;
}
}
else
{
lean_object* v_a_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2091_; 
lean_dec_ref(v_a_2027_);
lean_dec_ref(v_e_2022_);
v_a_2084_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2091_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2091_ == 0)
{
v___x_2086_ = v___x_2050_;
v_isShared_2087_ = v_isSharedCheck_2091_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_a_2084_);
lean_dec(v___x_2050_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2091_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v___x_2089_; 
if (v_isShared_2087_ == 0)
{
v___x_2089_ = v___x_2086_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v_a_2084_);
v___x_2089_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
return v___x_2089_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___lam__0(lean_object* v_e_2095_, lean_object* v_name_2096_, lean_object* v_name_2097_, uint8_t v_ctor_2098_, lean_object* v_a_2099_, lean_object* v_xs_2100_, lean_object* v_x_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_){
_start:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; size_t v_sz_2115_; size_t v___x_2116_; lean_object* v___x_2117_; 
v___x_2113_ = lean_box(0);
v___x_2114_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___lam__0___closed__0));
v_sz_2115_ = lean_array_size(v_xs_2100_);
v___x_2116_ = ((size_t)0ULL);
v___x_2117_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__0(v_e_2095_, v_xs_2100_, v_name_2096_, v_name_2097_, v_ctor_2098_, v_a_2099_, v_xs_2100_, v_sz_2115_, v___x_2116_, v___x_2114_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2130_; 
v_a_2118_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2130_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2120_ = v___x_2117_;
v_isShared_2121_ = v_isSharedCheck_2130_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___x_2117_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2130_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v_fst_2122_; 
v_fst_2122_ = lean_ctor_get(v_a_2118_, 0);
lean_inc(v_fst_2122_);
lean_dec(v_a_2118_);
if (lean_obj_tag(v_fst_2122_) == 0)
{
lean_object* v___x_2124_; 
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 0, v___x_2113_);
v___x_2124_ = v___x_2120_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v___x_2113_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
return v___x_2124_;
}
}
else
{
lean_object* v_val_2126_; lean_object* v___x_2128_; 
v_val_2126_ = lean_ctor_get(v_fst_2122_, 0);
lean_inc(v_val_2126_);
lean_dec_ref_known(v_fst_2122_, 1);
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 0, v_val_2126_);
v___x_2128_ = v___x_2120_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v_val_2126_);
v___x_2128_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
return v___x_2128_;
}
}
}
}
else
{
lean_object* v_a_2131_; lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2138_; 
v_a_2131_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2133_ = v___x_2117_;
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
else
{
lean_inc(v_a_2131_);
lean_dec(v___x_2117_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
v_resetjp_2132_:
{
lean_object* v___x_2136_; 
if (v_isShared_2134_ == 0)
{
v___x_2136_ = v___x_2133_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v_a_2131_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__0___boxed(lean_object** _args){
lean_object* v_e_2139_ = _args[0];
lean_object* v_xs_2140_ = _args[1];
lean_object* v___x_2141_ = _args[2];
lean_object* v___x_2142_ = _args[3];
lean_object* v___x_2143_ = _args[4];
lean_object* v_a_2144_ = _args[5];
lean_object* v_as_2145_ = _args[6];
lean_object* v_sz_2146_ = _args[7];
lean_object* v_i_2147_ = _args[8];
lean_object* v_b_2148_ = _args[9];
lean_object* v___y_2149_ = _args[10];
lean_object* v___y_2150_ = _args[11];
lean_object* v___y_2151_ = _args[12];
lean_object* v___y_2152_ = _args[13];
lean_object* v___y_2153_ = _args[14];
lean_object* v___y_2154_ = _args[15];
lean_object* v___y_2155_ = _args[16];
lean_object* v___y_2156_ = _args[17];
lean_object* v___y_2157_ = _args[18];
lean_object* v___y_2158_ = _args[19];
lean_object* v___y_2159_ = _args[20];
_start:
{
uint8_t v___x_89175__boxed_2160_; size_t v_sz_boxed_2161_; size_t v_i_boxed_2162_; lean_object* v_res_2163_; 
v___x_89175__boxed_2160_ = lean_unbox(v___x_2143_);
v_sz_boxed_2161_ = lean_unbox_usize(v_sz_2146_);
lean_dec(v_sz_2146_);
v_i_boxed_2162_ = lean_unbox_usize(v_i_2147_);
lean_dec(v_i_2147_);
v_res_2163_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__0(v_e_2139_, v_xs_2140_, v___x_2141_, v___x_2142_, v___x_89175__boxed_2160_, v_a_2144_, v_as_2145_, v_sz_boxed_2161_, v_i_boxed_2162_, v_b_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_);
lean_dec(v___y_2158_);
lean_dec_ref(v___y_2157_);
lean_dec(v___y_2156_);
lean_dec_ref(v___y_2155_);
lean_dec(v___y_2154_);
lean_dec_ref(v___y_2153_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
lean_dec(v___y_2150_);
lean_dec(v___y_2149_);
lean_dec_ref(v_as_2145_);
lean_dec(v___x_2142_);
lean_dec(v___x_2141_);
lean_dec_ref(v_xs_2140_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___boxed(lean_object* v_e_2164_, lean_object* v_h_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_, lean_object* v_a_2168_, lean_object* v_a_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_, lean_object* v_a_2176_){
_start:
{
lean_object* v_res_2177_; 
v_res_2177_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f(v_e_2164_, v_h_2165_, v_a_2166_, v_a_2167_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
lean_dec(v_a_2175_);
lean_dec_ref(v_a_2174_);
lean_dec(v_a_2173_);
lean_dec_ref(v_a_2172_);
lean_dec(v_a_2171_);
lean_dec_ref(v_a_2170_);
lean_dec(v_a_2169_);
lean_dec_ref(v_a_2168_);
lean_dec(v_a_2167_);
lean_dec(v_a_2166_);
return v_res_2177_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2179_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0___closed__0));
v___x_2180_ = l_Lean_stringToMessageData(v___x_2179_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0(lean_object* v_e_2181_, lean_object* v_xs_2182_, lean_object* v_as_2183_, size_t v_sz_2184_, size_t v_i_2185_, lean_object* v_b_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
lean_object* v_a_2199_; uint8_t v___x_2203_; 
v___x_2203_ = lean_usize_dec_lt(v_i_2185_, v_sz_2184_);
if (v___x_2203_ == 0)
{
lean_object* v___x_2204_; 
lean_dec_ref(v_e_2181_);
v___x_2204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2204_, 0, v_b_2186_);
return v___x_2204_;
}
else
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v_a_2208_; lean_object* v___x_2209_; 
lean_dec_ref(v_b_2186_);
v___x_2205_ = lean_box(0);
v___x_2206_ = lean_box(0);
v___x_2207_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___lam__0___closed__0));
v_a_2208_ = lean_array_uget_borrowed(v_as_2183_, v_i_2185_);
lean_inc(v___y_2196_);
lean_inc_ref(v___y_2195_);
lean_inc(v___y_2194_);
lean_inc_ref(v___y_2193_);
lean_inc(v_a_2208_);
v___x_2209_ = lean_infer_type(v_a_2208_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_object* v_a_2210_; lean_object* v___x_2211_; 
v_a_2210_ = lean_ctor_get(v___x_2209_, 0);
lean_inc(v_a_2210_);
lean_dec_ref_known(v___x_2209_, 1);
v___x_2211_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp(v_a_2210_, v___x_2206_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_);
if (lean_obj_tag(v___x_2211_) == 0)
{
lean_object* v_a_2212_; lean_object* v___y_2214_; lean_object* v___y_2215_; lean_object* v___y_2216_; lean_object* v___y_2217_; lean_object* v___y_2218_; lean_object* v___y_2219_; lean_object* v___y_2220_; lean_object* v___y_2221_; lean_object* v___y_2222_; lean_object* v___y_2223_; uint8_t v___x_2265_; 
v_a_2212_ = lean_ctor_get(v___x_2211_, 0);
lean_inc(v_a_2212_);
lean_dec_ref_known(v___x_2211_, 1);
v___x_2265_ = lean_unbox(v_a_2212_);
if (v___x_2265_ == 0)
{
lean_dec(v_a_2212_);
lean_dec(v_a_2210_);
v_a_2199_ = v___x_2207_;
goto v___jp_2198_;
}
else
{
lean_object* v_toCold_2266_; lean_object* v_options_2267_; uint8_t v_hasTrace_2268_; 
v_toCold_2266_ = lean_ctor_get(v___y_2195_, 0);
v_options_2267_ = lean_ctor_get(v_toCold_2266_, 2);
v_hasTrace_2268_ = lean_ctor_get_uint8(v_options_2267_, sizeof(void*)*1);
if (v_hasTrace_2268_ == 0)
{
lean_dec(v_a_2210_);
v___y_2214_ = v___y_2187_;
v___y_2215_ = v___y_2188_;
v___y_2216_ = v___y_2189_;
v___y_2217_ = v___y_2190_;
v___y_2218_ = v___y_2191_;
v___y_2219_ = v___y_2192_;
v___y_2220_ = v___y_2193_;
v___y_2221_ = v___y_2194_;
v___y_2222_ = v___y_2195_;
v___y_2223_ = v___y_2196_;
goto v___jp_2213_;
}
else
{
lean_object* v_inheritedTraceOptions_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; uint8_t v___x_2272_; 
v_inheritedTraceOptions_2269_ = lean_ctor_get(v_toCold_2266_, 11);
v___x_2270_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__3));
v___x_2271_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6);
v___x_2272_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2269_, v_options_2267_, v___x_2271_);
if (v___x_2272_ == 0)
{
lean_dec(v_a_2210_);
v___y_2214_ = v___y_2187_;
v___y_2215_ = v___y_2188_;
v___y_2216_ = v___y_2189_;
v___y_2217_ = v___y_2190_;
v___y_2218_ = v___y_2191_;
v___y_2219_ = v___y_2192_;
v___y_2220_ = v___y_2193_;
v___y_2221_ = v___y_2194_;
v___y_2222_ = v___y_2195_;
v___y_2223_ = v___y_2196_;
goto v___jp_2213_;
}
else
{
lean_object* v___x_2273_; 
v___x_2273_ = l_Lean_Meta_Grind_updateLastTag(v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
lean_dec_ref_known(v___x_2273_, 1);
v___x_2274_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0___closed__1);
v___x_2275_ = l_Lean_MessageData_ofExpr(v_a_2210_);
v___x_2276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2274_);
lean_ctor_set(v___x_2276_, 1, v___x_2275_);
v___x_2277_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg(v___x_2270_, v___x_2276_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_dec_ref_known(v___x_2277_, 1);
v___y_2214_ = v___y_2187_;
v___y_2215_ = v___y_2188_;
v___y_2216_ = v___y_2189_;
v___y_2217_ = v___y_2190_;
v___y_2218_ = v___y_2191_;
v___y_2219_ = v___y_2192_;
v___y_2220_ = v___y_2193_;
v___y_2221_ = v___y_2194_;
v___y_2222_ = v___y_2195_;
v___y_2223_ = v___y_2196_;
goto v___jp_2213_;
}
else
{
lean_object* v_a_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2285_; 
lean_dec(v_a_2212_);
lean_dec_ref(v_e_2181_);
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2285_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2285_ == 0)
{
v___x_2280_ = v___x_2277_;
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_a_2278_);
lean_dec(v___x_2277_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2283_; 
if (v_isShared_2281_ == 0)
{
v___x_2283_ = v___x_2280_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v_a_2278_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
return v___x_2283_;
}
}
}
}
else
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2293_; 
lean_dec(v_a_2212_);
lean_dec(v_a_2210_);
lean_dec_ref(v_e_2181_);
v_a_2286_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2288_ = v___x_2273_;
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2273_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v___x_2291_; 
if (v_isShared_2289_ == 0)
{
v___x_2291_ = v___x_2288_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_a_2286_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
return v___x_2291_;
}
}
}
}
}
}
v___jp_2213_:
{
lean_object* v___x_2224_; 
lean_inc(v_a_2208_);
lean_inc_ref(v_e_2181_);
v___x_2224_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f(v_e_2181_, v_a_2208_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_);
if (lean_obj_tag(v___x_2224_) == 0)
{
lean_object* v_a_2225_; 
v_a_2225_ = lean_ctor_get(v___x_2224_, 0);
lean_inc(v_a_2225_);
lean_dec_ref_known(v___x_2224_, 1);
if (lean_obj_tag(v_a_2225_) == 1)
{
lean_object* v_val_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2256_; 
lean_dec_ref(v_e_2181_);
v_val_2226_ = lean_ctor_get(v_a_2225_, 0);
v_isSharedCheck_2256_ = !lean_is_exclusive(v_a_2225_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2228_ = v_a_2225_;
v_isShared_2229_ = v_isSharedCheck_2256_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_val_2226_);
lean_dec(v_a_2225_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2256_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
uint8_t v___x_2230_; uint8_t v___x_2231_; uint8_t v___x_2232_; uint8_t v___x_2233_; lean_object* v___x_2234_; 
v___x_2230_ = 0;
v___x_2231_ = 1;
v___x_2232_ = lean_unbox(v_a_2212_);
v___x_2233_ = lean_unbox(v_a_2212_);
lean_dec(v_a_2212_);
v___x_2234_ = l_Lean_Meta_mkLambdaFVars(v_xs_2182_, v_val_2226_, v___x_2230_, v___x_2232_, v___x_2230_, v___x_2233_, v___x_2231_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_);
if (lean_obj_tag(v___x_2234_) == 0)
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2247_; 
v_a_2235_ = lean_ctor_get(v___x_2234_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2234_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2237_ = v___x_2234_;
v_isShared_2238_ = v_isSharedCheck_2247_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2234_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2247_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2229_ == 0)
{
lean_ctor_set(v___x_2228_, 0, v_a_2235_);
v___x_2240_ = v___x_2228_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2244_; 
v___x_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2240_);
v___x_2242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2242_, 0, v___x_2241_);
lean_ctor_set(v___x_2242_, 1, v___x_2205_);
if (v_isShared_2238_ == 0)
{
lean_ctor_set(v___x_2237_, 0, v___x_2242_);
v___x_2244_ = v___x_2237_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v___x_2242_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
return v___x_2244_;
}
}
}
}
else
{
lean_object* v_a_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2255_; 
lean_del_object(v___x_2228_);
v_a_2248_ = lean_ctor_get(v___x_2234_, 0);
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2234_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2250_ = v___x_2234_;
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_a_2248_);
lean_dec(v___x_2234_);
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
lean_dec(v_a_2225_);
lean_dec(v_a_2212_);
v_a_2199_ = v___x_2207_;
goto v___jp_2198_;
}
}
else
{
lean_object* v_a_2257_; lean_object* v___x_2259_; uint8_t v_isShared_2260_; uint8_t v_isSharedCheck_2264_; 
lean_dec(v_a_2212_);
lean_dec_ref(v_e_2181_);
v_a_2257_ = lean_ctor_get(v___x_2224_, 0);
v_isSharedCheck_2264_ = !lean_is_exclusive(v___x_2224_);
if (v_isSharedCheck_2264_ == 0)
{
v___x_2259_ = v___x_2224_;
v_isShared_2260_ = v_isSharedCheck_2264_;
goto v_resetjp_2258_;
}
else
{
lean_inc(v_a_2257_);
lean_dec(v___x_2224_);
v___x_2259_ = lean_box(0);
v_isShared_2260_ = v_isSharedCheck_2264_;
goto v_resetjp_2258_;
}
v_resetjp_2258_:
{
lean_object* v___x_2262_; 
if (v_isShared_2260_ == 0)
{
v___x_2262_ = v___x_2259_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v_a_2257_);
v___x_2262_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
return v___x_2262_;
}
}
}
}
}
else
{
lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2301_; 
lean_dec(v_a_2210_);
lean_dec_ref(v_e_2181_);
v_a_2294_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2296_ = v___x_2211_;
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2211_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v___x_2299_; 
if (v_isShared_2297_ == 0)
{
v___x_2299_ = v___x_2296_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v_a_2294_);
v___x_2299_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
return v___x_2299_;
}
}
}
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
lean_dec_ref(v_e_2181_);
v_a_2302_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___x_2209_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2209_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2307_; 
if (v_isShared_2305_ == 0)
{
v___x_2307_ = v___x_2304_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_a_2302_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
v___jp_2198_:
{
size_t v___x_2200_; size_t v___x_2201_; 
v___x_2200_ = ((size_t)1ULL);
v___x_2201_ = lean_usize_add(v_i_2185_, v___x_2200_);
lean_inc_ref(v_a_2199_);
v_i_2185_ = v___x_2201_;
v_b_2186_ = v_a_2199_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0___boxed(lean_object** _args){
lean_object* v_e_2310_ = _args[0];
lean_object* v_xs_2311_ = _args[1];
lean_object* v_as_2312_ = _args[2];
lean_object* v_sz_2313_ = _args[3];
lean_object* v_i_2314_ = _args[4];
lean_object* v_b_2315_ = _args[5];
lean_object* v___y_2316_ = _args[6];
lean_object* v___y_2317_ = _args[7];
lean_object* v___y_2318_ = _args[8];
lean_object* v___y_2319_ = _args[9];
lean_object* v___y_2320_ = _args[10];
lean_object* v___y_2321_ = _args[11];
lean_object* v___y_2322_ = _args[12];
lean_object* v___y_2323_ = _args[13];
lean_object* v___y_2324_ = _args[14];
lean_object* v___y_2325_ = _args[15];
lean_object* v___y_2326_ = _args[16];
_start:
{
size_t v_sz_boxed_2327_; size_t v_i_boxed_2328_; lean_object* v_res_2329_; 
v_sz_boxed_2327_ = lean_unbox_usize(v_sz_2313_);
lean_dec(v_sz_2313_);
v_i_boxed_2328_ = lean_unbox_usize(v_i_2314_);
lean_dec(v_i_2314_);
v_res_2329_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0(v_e_2310_, v_xs_2311_, v_as_2312_, v_sz_boxed_2327_, v_i_boxed_2328_, v_b_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_);
lean_dec(v___y_2325_);
lean_dec_ref(v___y_2324_);
lean_dec(v___y_2323_);
lean_dec_ref(v___y_2322_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
lean_dec(v___y_2317_);
lean_dec(v___y_2316_);
lean_dec_ref(v_as_2312_);
lean_dec_ref(v_xs_2311_);
return v_res_2329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f___lam__0(lean_object* v_e_2330_, lean_object* v_xs_2331_, lean_object* v_x_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_){
_start:
{
lean_object* v___x_2344_; lean_object* v___x_2345_; size_t v_sz_2346_; size_t v___x_2347_; lean_object* v___x_2348_; 
v___x_2344_ = lean_box(0);
v___x_2345_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f___lam__0___closed__0));
v_sz_2346_ = lean_array_size(v_xs_2331_);
v___x_2347_ = ((size_t)0ULL);
v___x_2348_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_spec__0(v_e_2330_, v_xs_2331_, v_xs_2331_, v_sz_2346_, v___x_2347_, v___x_2345_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_, v___y_2342_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2361_; 
v_a_2349_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2361_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2361_ == 0)
{
v___x_2351_ = v___x_2348_;
v_isShared_2352_ = v_isSharedCheck_2361_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_dec(v___x_2348_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2361_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v_fst_2353_; 
v_fst_2353_ = lean_ctor_get(v_a_2349_, 0);
lean_inc(v_fst_2353_);
lean_dec(v_a_2349_);
if (lean_obj_tag(v_fst_2353_) == 0)
{
lean_object* v___x_2355_; 
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 0, v___x_2344_);
v___x_2355_ = v___x_2351_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v___x_2344_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
else
{
lean_object* v_val_2357_; lean_object* v___x_2359_; 
v_val_2357_ = lean_ctor_get(v_fst_2353_, 0);
lean_inc(v_val_2357_);
lean_dec_ref_known(v_fst_2353_, 1);
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 0, v_val_2357_);
v___x_2359_ = v___x_2351_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v_val_2357_);
v___x_2359_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
return v___x_2359_;
}
}
}
}
else
{
lean_object* v_a_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2369_; 
v_a_2362_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2364_ = v___x_2348_;
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_a_2362_);
lean_dec(v___x_2348_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v___x_2367_; 
if (v_isShared_2365_ == 0)
{
v___x_2367_ = v___x_2364_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_a_2362_);
v___x_2367_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
return v___x_2367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f___lam__0___boxed(lean_object* v_e_2370_, lean_object* v_xs_2371_, lean_object* v_x_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_){
_start:
{
lean_object* v_res_2384_; 
v_res_2384_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f___lam__0(v_e_2370_, v_xs_2371_, v_x_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
lean_dec(v___y_2378_);
lean_dec_ref(v___y_2377_);
lean_dec(v___y_2376_);
lean_dec_ref(v___y_2375_);
lean_dec(v___y_2374_);
lean_dec(v___y_2373_);
lean_dec_ref(v_x_2372_);
lean_dec_ref(v_xs_2371_);
return v_res_2384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f(lean_object* v_e_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_){
_start:
{
lean_object* v___f_2400_; lean_object* v___x_2401_; 
lean_inc_ref(v_e_2385_);
v___f_2400_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f___lam__0___boxed), 14, 1);
lean_closure_set(v___f_2400_, 0, v_e_2385_);
v___x_2401_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2385_, v_a_2393_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v_a_2402_; lean_object* v___x_2403_; uint8_t v___x_2404_; 
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
lean_inc(v_a_2402_);
lean_dec_ref_known(v___x_2401_, 1);
v___x_2403_ = l_Lean_Expr_cleanupAnnotations(v_a_2402_);
lean_dec(v_a_2402_);
v___x_2404_ = l_Lean_Expr_isApp(v___x_2403_);
if (v___x_2404_ == 0)
{
lean_dec_ref(v___x_2403_);
lean_dec_ref(v___f_2400_);
goto v___jp_2397_;
}
else
{
lean_object* v___x_2405_; lean_object* v___x_2406_; uint8_t v___x_2407_; 
v___x_2405_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2403_);
v___x_2406_ = ((lean_object*)(l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__4));
v___x_2407_ = l_Lean_Expr_isConstOf(v___x_2405_, v___x_2406_);
lean_dec_ref(v___x_2405_);
if (v___x_2407_ == 0)
{
lean_dec_ref(v___x_2403_);
lean_dec_ref(v___f_2400_);
goto v___jp_2397_;
}
else
{
lean_object* v_arg_2408_; uint8_t v___x_2409_; lean_object* v___x_2410_; 
v_arg_2408_ = lean_ctor_get(v___x_2403_, 1);
lean_inc_ref(v_arg_2408_);
lean_dec_ref(v___x_2403_);
v___x_2409_ = 0;
v___x_2410_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f_go_x3f_spec__1___redArg(v_arg_2408_, v___f_2400_, v___x_2409_, v___x_2409_, v_a_2386_, v_a_2387_, v_a_2388_, v_a_2389_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_);
return v___x_2410_;
}
}
}
else
{
lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2418_; 
lean_dec_ref(v___f_2400_);
v_a_2411_ = lean_ctor_get(v___x_2401_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2413_ = v___x_2401_;
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v___x_2401_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2416_; 
if (v_isShared_2414_ == 0)
{
v___x_2416_ = v___x_2413_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_a_2411_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
v___jp_2397_:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; 
v___x_2398_ = lean_box(0);
v___x_2399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2399_, 0, v___x_2398_);
return v___x_2399_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f___boxed(lean_object* v_e_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_){
_start:
{
lean_object* v_res_2431_; 
v_res_2431_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f(v_e_2419_, v_a_2420_, v_a_2421_, v_a_2422_, v_a_2423_, v_a_2424_, v_a_2425_, v_a_2426_, v_a_2427_, v_a_2428_, v_a_2429_);
lean_dec(v_a_2429_);
lean_dec_ref(v_a_2428_);
lean_dec(v_a_2427_);
lean_dec_ref(v_a_2426_);
lean_dec(v_a_2425_);
lean_dec_ref(v_a_2424_);
lean_dec(v_a_2423_);
lean_dec_ref(v_a_2422_);
lean_dec(v_a_2421_);
lean_dec(v_a_2420_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isPatternLike___redArg(lean_object* v_e_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_){
_start:
{
lean_object* v___x_2442_; uint8_t v___x_2443_; 
v___x_2442_ = l_Lean_Expr_getAppFn(v_e_2432_);
v___x_2443_ = l_Lean_Expr_isMVar(v___x_2442_);
lean_dec_ref(v___x_2442_);
if (v___x_2443_ == 0)
{
lean_object* v___x_2444_; 
lean_inc_ref(v_e_2432_);
v___x_2444_ = l_Lean_Meta_isConstructorApp_x3f(v_e_2432_, v_a_2433_, v_a_2434_, v_a_2435_, v_a_2436_);
if (lean_obj_tag(v___x_2444_) == 0)
{
lean_object* v_a_2445_; 
v_a_2445_ = lean_ctor_get(v___x_2444_, 0);
lean_inc(v_a_2445_);
lean_dec_ref_known(v___x_2444_, 1);
if (lean_obj_tag(v_a_2445_) == 0)
{
lean_object* v___x_2446_; 
v___x_2446_ = l_Lean_Meta_isLitValue(v_e_2432_, v_a_2433_, v_a_2434_, v_a_2435_, v_a_2436_);
return v___x_2446_;
}
else
{
lean_dec_ref_known(v_a_2445_, 1);
lean_dec_ref(v_e_2432_);
goto v___jp_2438_;
}
}
else
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2454_; 
lean_dec_ref(v_e_2432_);
v_a_2447_ = lean_ctor_get(v___x_2444_, 0);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2444_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2449_ = v___x_2444_;
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___x_2444_);
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
lean_dec_ref(v_e_2432_);
goto v___jp_2438_;
}
v___jp_2438_:
{
uint8_t v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; 
v___x_2439_ = 1;
v___x_2440_ = lean_box(v___x_2439_);
v___x_2441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2441_, 0, v___x_2440_);
return v___x_2441_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isPatternLike___redArg___boxed(lean_object* v_e_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isPatternLike___redArg(v_e_2455_, v_a_2456_, v_a_2457_, v_a_2458_, v_a_2459_);
lean_dec(v_a_2459_);
lean_dec_ref(v_a_2458_);
lean_dec(v_a_2457_);
lean_dec_ref(v_a_2456_);
return v_res_2461_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isPatternLike(lean_object* v_e_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_){
_start:
{
lean_object* v___x_2474_; 
v___x_2474_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isPatternLike___redArg(v_e_2462_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_);
return v___x_2474_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isPatternLike___boxed(lean_object* v_e_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_){
_start:
{
lean_object* v_res_2487_; 
v_res_2487_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isPatternLike(v_e_2475_, v_a_2476_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_, v_a_2483_, v_a_2484_, v_a_2485_);
lean_dec(v_a_2485_);
lean_dec_ref(v_a_2484_);
lean_dec(v_a_2483_);
lean_dec_ref(v_a_2482_);
lean_dec(v_a_2481_);
lean_dec_ref(v_a_2480_);
lean_dec(v_a_2479_);
lean_dec_ref(v_a_2478_);
lean_dec(v_a_2477_);
lean_dec(v_a_2476_);
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go(lean_object* v_e_2488_, lean_object* v_pat_2489_, lean_object* v_a_2490_, lean_object* v_a_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_){
_start:
{
lean_object* v___x_2501_; uint8_t v___x_2502_; 
v___x_2501_ = l_Lean_Expr_getAppFn(v_pat_2489_);
v___x_2502_ = l_Lean_Expr_isMVar(v___x_2501_);
lean_dec_ref(v___x_2501_);
if (v___x_2502_ == 0)
{
lean_object* v___x_2503_; 
lean_inc_ref(v_e_2488_);
v___x_2503_ = l_Lean_Meta_Grind_getRootENode___redArg(v_e_2488_, v_a_2490_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_);
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_object* v_a_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2604_; 
v_a_2504_ = lean_ctor_get(v___x_2503_, 0);
v_isSharedCheck_2604_ = !lean_is_exclusive(v___x_2503_);
if (v_isSharedCheck_2604_ == 0)
{
v___x_2506_ = v___x_2503_;
v_isShared_2507_ = v_isSharedCheck_2604_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_a_2504_);
lean_dec(v___x_2503_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2604_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
uint8_t v_ctor_2508_; 
v_ctor_2508_ = lean_ctor_get_uint8(v_a_2504_, sizeof(void*)*12 + 2);
if (v_ctor_2508_ == 0)
{
uint8_t v_interpreted_2509_; 
lean_dec_ref(v_pat_2489_);
v_interpreted_2509_ = lean_ctor_get_uint8(v_a_2504_, sizeof(void*)*12 + 1);
if (v_interpreted_2509_ == 0)
{
lean_object* v___x_2511_; 
lean_dec(v_a_2504_);
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 0, v_e_2488_);
v___x_2511_ = v___x_2506_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_e_2488_);
v___x_2511_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
return v___x_2511_;
}
}
else
{
lean_object* v_self_2513_; lean_object* v___x_2515_; 
lean_dec_ref(v_e_2488_);
v_self_2513_ = lean_ctor_get(v_a_2504_, 0);
lean_inc_ref(v_self_2513_);
lean_dec(v_a_2504_);
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 0, v_self_2513_);
v___x_2515_ = v___x_2506_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v_self_2513_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
return v___x_2515_;
}
}
}
else
{
lean_object* v_self_2517_; lean_object* v___x_2518_; 
lean_del_object(v___x_2506_);
lean_dec_ref(v_e_2488_);
v_self_2517_ = lean_ctor_get(v_a_2504_, 0);
lean_inc_ref_n(v_self_2517_, 2);
lean_dec(v_a_2504_);
v___x_2518_ = l_Lean_Meta_isConstructorApp_x3f(v_self_2517_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_);
if (lean_obj_tag(v___x_2518_) == 0)
{
lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2595_; 
v_a_2519_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2521_ = v___x_2518_;
v_isShared_2522_ = v_isSharedCheck_2595_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v___x_2518_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2595_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
if (lean_obj_tag(v_a_2519_) == 1)
{
lean_object* v_val_2523_; lean_object* v___x_2524_; 
lean_del_object(v___x_2521_);
v_val_2523_ = lean_ctor_get(v_a_2519_, 0);
lean_inc(v_val_2523_);
lean_dec_ref_known(v_a_2519_, 1);
lean_inc_ref(v_pat_2489_);
v___x_2524_ = l_Lean_Meta_isConstructorApp_x3f(v_pat_2489_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_);
if (lean_obj_tag(v___x_2524_) == 0)
{
lean_object* v_a_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2583_; 
v_a_2525_ = lean_ctor_get(v___x_2524_, 0);
v_isSharedCheck_2583_ = !lean_is_exclusive(v___x_2524_);
if (v_isSharedCheck_2583_ == 0)
{
v___x_2527_ = v___x_2524_;
v_isShared_2528_ = v_isSharedCheck_2583_;
goto v_resetjp_2526_;
}
else
{
lean_inc(v_a_2525_);
lean_dec(v___x_2524_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2583_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
if (lean_obj_tag(v_a_2525_) == 1)
{
lean_object* v_toConstantVal_2529_; lean_object* v_val_2530_; lean_object* v_toConstantVal_2531_; lean_object* v_numParams_2532_; lean_object* v_numFields_2533_; lean_object* v_name_2534_; lean_object* v_name_2535_; uint8_t v___x_2536_; 
v_toConstantVal_2529_ = lean_ctor_get(v_val_2523_, 0);
lean_inc_ref(v_toConstantVal_2529_);
v_val_2530_ = lean_ctor_get(v_a_2525_, 0);
lean_inc(v_val_2530_);
lean_dec_ref_known(v_a_2525_, 1);
v_toConstantVal_2531_ = lean_ctor_get(v_val_2530_, 0);
lean_inc_ref(v_toConstantVal_2531_);
lean_dec(v_val_2530_);
v_numParams_2532_ = lean_ctor_get(v_val_2523_, 3);
lean_inc(v_numParams_2532_);
v_numFields_2533_ = lean_ctor_get(v_val_2523_, 4);
lean_inc(v_numFields_2533_);
lean_dec(v_val_2523_);
v_name_2534_ = lean_ctor_get(v_toConstantVal_2529_, 0);
lean_inc(v_name_2534_);
lean_dec_ref(v_toConstantVal_2529_);
v_name_2535_ = lean_ctor_get(v_toConstantVal_2531_, 0);
lean_inc(v_name_2535_);
lean_dec_ref(v_toConstantVal_2531_);
v___x_2536_ = lean_name_eq(v_name_2534_, v_name_2535_);
lean_dec(v_name_2535_);
lean_dec(v_name_2534_);
if (v___x_2536_ == 0)
{
lean_object* v___x_2538_; 
lean_dec(v_numFields_2533_);
lean_dec(v_numParams_2532_);
lean_dec_ref(v_pat_2489_);
if (v_isShared_2528_ == 0)
{
lean_ctor_set(v___x_2527_, 0, v_self_2517_);
v___x_2538_ = v___x_2527_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_self_2517_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
else
{
lean_object* v___x_2540_; lean_object* v___x_2541_; uint8_t v___x_2542_; 
v___x_2540_ = lean_nat_add(v_numParams_2532_, v_numFields_2533_);
lean_dec(v_numFields_2533_);
v___x_2541_ = l_Lean_Expr_getAppNumArgs(v_pat_2489_);
v___x_2542_ = lean_nat_dec_eq(v___x_2541_, v___x_2540_);
if (v___x_2542_ == 0)
{
lean_object* v___x_2544_; 
lean_dec(v___x_2541_);
lean_dec(v___x_2540_);
lean_dec(v_numParams_2532_);
lean_dec_ref(v_pat_2489_);
if (v_isShared_2528_ == 0)
{
lean_ctor_set(v___x_2527_, 0, v_self_2517_);
v___x_2544_ = v___x_2527_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v_self_2517_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
return v___x_2544_;
}
}
else
{
lean_object* v_nargs_2546_; lean_object* v_dummy_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; 
lean_del_object(v___x_2527_);
v_nargs_2546_ = l_Lean_Expr_getAppNumArgs(v_self_2517_);
v_dummy_2547_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse___closed__0, &l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isMatchCondFalseHyp_isFalse___closed__0);
lean_inc(v_nargs_2546_);
v___x_2548_ = lean_mk_array(v_nargs_2546_, v_dummy_2547_);
v___x_2549_ = lean_unsigned_to_nat(1u);
v___x_2550_ = lean_nat_sub(v_nargs_2546_, v___x_2549_);
lean_dec(v_nargs_2546_);
lean_inc_ref(v_self_2517_);
v___x_2551_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_self_2517_, v___x_2548_, v___x_2550_);
v___x_2552_ = lean_box(v___x_2502_);
v___x_2553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2553_, 0, v___x_2551_);
lean_ctor_set(v___x_2553_, 1, v___x_2552_);
lean_inc(v___x_2541_);
v___x_2554_ = lean_mk_array(v___x_2541_, v_dummy_2547_);
v___x_2555_ = lean_nat_sub(v___x_2541_, v___x_2549_);
lean_dec(v___x_2541_);
v___x_2556_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_pat_2489_, v___x_2554_, v___x_2555_);
v___x_2557_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go_spec__0___redArg(v___x_2540_, v___x_2556_, v_numParams_2532_, v___x_2553_, v_a_2490_, v_a_2491_, v_a_2492_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_);
lean_dec_ref(v___x_2556_);
lean_dec(v___x_2540_);
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2571_; 
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2571_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2571_ == 0)
{
v___x_2560_ = v___x_2557_;
v_isShared_2561_ = v_isSharedCheck_2571_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___x_2557_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2571_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v_snd_2562_; uint8_t v___x_2563_; 
v_snd_2562_ = lean_ctor_get(v_a_2558_, 1);
v___x_2563_ = lean_unbox(v_snd_2562_);
if (v___x_2563_ == 0)
{
lean_object* v___x_2565_; 
lean_dec(v_a_2558_);
if (v_isShared_2561_ == 0)
{
lean_ctor_set(v___x_2560_, 0, v_self_2517_);
v___x_2565_ = v___x_2560_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_self_2517_);
v___x_2565_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
return v___x_2565_;
}
}
else
{
lean_object* v_fst_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
lean_del_object(v___x_2560_);
v_fst_2567_ = lean_ctor_get(v_a_2558_, 0);
lean_inc(v_fst_2567_);
lean_dec(v_a_2558_);
v___x_2568_ = l_Lean_Expr_getAppFn(v_self_2517_);
lean_dec_ref(v_self_2517_);
v___x_2569_ = l_Lean_mkAppN(v___x_2568_, v_fst_2567_);
lean_dec(v_fst_2567_);
v___x_2570_ = l_Lean_Meta_Sym_shareCommon(v___x_2569_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_);
return v___x_2570_;
}
}
}
else
{
lean_object* v_a_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2579_; 
lean_dec_ref(v_self_2517_);
v_a_2572_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2574_ = v___x_2557_;
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_a_2572_);
lean_dec(v___x_2557_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2577_; 
if (v_isShared_2575_ == 0)
{
v___x_2577_ = v___x_2574_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v_a_2572_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
return v___x_2577_;
}
}
}
}
}
}
else
{
lean_object* v___x_2581_; 
lean_dec(v_a_2525_);
lean_dec(v_val_2523_);
lean_dec_ref(v_pat_2489_);
if (v_isShared_2528_ == 0)
{
lean_ctor_set(v___x_2527_, 0, v_self_2517_);
v___x_2581_ = v___x_2527_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v_self_2517_);
v___x_2581_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
return v___x_2581_;
}
}
}
}
else
{
lean_object* v_a_2584_; lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2591_; 
lean_dec(v_val_2523_);
lean_dec_ref(v_self_2517_);
lean_dec_ref(v_pat_2489_);
v_a_2584_ = lean_ctor_get(v___x_2524_, 0);
v_isSharedCheck_2591_ = !lean_is_exclusive(v___x_2524_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2586_ = v___x_2524_;
v_isShared_2587_ = v_isSharedCheck_2591_;
goto v_resetjp_2585_;
}
else
{
lean_inc(v_a_2584_);
lean_dec(v___x_2524_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2591_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
lean_object* v___x_2589_; 
if (v_isShared_2587_ == 0)
{
v___x_2589_ = v___x_2586_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v_a_2584_);
v___x_2589_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
return v___x_2589_;
}
}
}
}
else
{
lean_object* v___x_2593_; 
lean_dec(v_a_2519_);
lean_dec_ref(v_pat_2489_);
if (v_isShared_2522_ == 0)
{
lean_ctor_set(v___x_2521_, 0, v_self_2517_);
v___x_2593_ = v___x_2521_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v_self_2517_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
return v___x_2593_;
}
}
}
}
else
{
lean_object* v_a_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2603_; 
lean_dec_ref(v_self_2517_);
lean_dec_ref(v_pat_2489_);
v_a_2596_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2603_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2598_ = v___x_2518_;
v_isShared_2599_ = v_isSharedCheck_2603_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_a_2596_);
lean_dec(v___x_2518_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2603_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___x_2601_; 
if (v_isShared_2599_ == 0)
{
v___x_2601_ = v___x_2598_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v_a_2596_);
v___x_2601_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
return v___x_2601_;
}
}
}
}
}
}
else
{
lean_object* v_a_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2612_; 
lean_dec_ref(v_pat_2489_);
lean_dec_ref(v_e_2488_);
v_a_2605_ = lean_ctor_get(v___x_2503_, 0);
v_isSharedCheck_2612_ = !lean_is_exclusive(v___x_2503_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2607_ = v___x_2503_;
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_a_2605_);
lean_dec(v___x_2503_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2610_; 
if (v_isShared_2608_ == 0)
{
v___x_2610_ = v___x_2607_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v_a_2605_);
v___x_2610_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
return v___x_2610_;
}
}
}
}
else
{
lean_object* v___x_2613_; 
lean_dec_ref(v_pat_2489_);
v___x_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2613_, 0, v_e_2488_);
return v___x_2613_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go_spec__0___redArg(lean_object* v_upperBound_2614_, lean_object* v___x_2615_, lean_object* v_a_2616_, lean_object* v_b_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_){
_start:
{
lean_object* v_a_2630_; uint8_t v___x_2634_; 
v___x_2634_ = lean_nat_dec_lt(v_a_2616_, v_upperBound_2614_);
if (v___x_2634_ == 0)
{
lean_object* v___x_2635_; 
lean_dec(v_a_2616_);
v___x_2635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2635_, 0, v_b_2617_);
return v___x_2635_;
}
else
{
lean_object* v_fst_2636_; lean_object* v_snd_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2665_; 
v_fst_2636_ = lean_ctor_get(v_b_2617_, 0);
v_snd_2637_ = lean_ctor_get(v_b_2617_, 1);
v_isSharedCheck_2665_ = !lean_is_exclusive(v_b_2617_);
if (v_isSharedCheck_2665_ == 0)
{
v___x_2639_ = v_b_2617_;
v_isShared_2640_ = v_isSharedCheck_2665_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_snd_2637_);
lean_inc(v_fst_2636_);
lean_dec(v_b_2617_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2665_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2641_ = l_Lean_instInhabitedExpr;
v___x_2642_ = lean_array_get_borrowed(v___x_2641_, v_fst_2636_, v_a_2616_);
v___x_2643_ = lean_array_get_borrowed(v___x_2641_, v___x_2615_, v_a_2616_);
lean_inc(v___x_2643_);
lean_inc(v___x_2642_);
v___x_2644_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go(v___x_2642_, v___x_2643_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_);
if (lean_obj_tag(v___x_2644_) == 0)
{
lean_object* v_a_2645_; size_t v___x_2646_; size_t v___x_2647_; uint8_t v___x_2648_; 
v_a_2645_ = lean_ctor_get(v___x_2644_, 0);
lean_inc(v_a_2645_);
lean_dec_ref_known(v___x_2644_, 1);
v___x_2646_ = lean_ptr_addr(v___x_2642_);
v___x_2647_ = lean_ptr_addr(v_a_2645_);
v___x_2648_ = lean_usize_dec_eq(v___x_2646_, v___x_2647_);
if (v___x_2648_ == 0)
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2652_; 
lean_dec(v_snd_2637_);
v___x_2649_ = lean_array_set(v_fst_2636_, v_a_2616_, v_a_2645_);
v___x_2650_ = lean_box(v___x_2634_);
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 1, v___x_2650_);
lean_ctor_set(v___x_2639_, 0, v___x_2649_);
v___x_2652_ = v___x_2639_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v___x_2649_);
lean_ctor_set(v_reuseFailAlloc_2653_, 1, v___x_2650_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
v_a_2630_ = v___x_2652_;
goto v___jp_2629_;
}
}
else
{
lean_object* v___x_2655_; 
lean_dec(v_a_2645_);
if (v_isShared_2640_ == 0)
{
v___x_2655_ = v___x_2639_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_fst_2636_);
lean_ctor_set(v_reuseFailAlloc_2656_, 1, v_snd_2637_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
v_a_2630_ = v___x_2655_;
goto v___jp_2629_;
}
}
}
else
{
lean_object* v_a_2657_; lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2664_; 
lean_del_object(v___x_2639_);
lean_dec(v_snd_2637_);
lean_dec(v_fst_2636_);
lean_dec(v_a_2616_);
v_a_2657_ = lean_ctor_get(v___x_2644_, 0);
v_isSharedCheck_2664_ = !lean_is_exclusive(v___x_2644_);
if (v_isSharedCheck_2664_ == 0)
{
v___x_2659_ = v___x_2644_;
v_isShared_2660_ = v_isSharedCheck_2664_;
goto v_resetjp_2658_;
}
else
{
lean_inc(v_a_2657_);
lean_dec(v___x_2644_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2664_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
lean_object* v___x_2662_; 
if (v_isShared_2660_ == 0)
{
v___x_2662_ = v___x_2659_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v_a_2657_);
v___x_2662_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
return v___x_2662_;
}
}
}
}
}
v___jp_2629_:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2631_ = lean_unsigned_to_nat(1u);
v___x_2632_ = lean_nat_add(v_a_2616_, v___x_2631_);
lean_dec(v_a_2616_);
v_a_2616_ = v___x_2632_;
v_b_2617_ = v_a_2630_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go_spec__0___redArg___boxed(lean_object* v_upperBound_2666_, lean_object* v___x_2667_, lean_object* v_a_2668_, lean_object* v_b_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_){
_start:
{
lean_object* v_res_2681_; 
v_res_2681_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go_spec__0___redArg(v_upperBound_2666_, v___x_2667_, v_a_2668_, v_b_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_);
lean_dec(v___y_2679_);
lean_dec_ref(v___y_2678_);
lean_dec(v___y_2677_);
lean_dec_ref(v___y_2676_);
lean_dec(v___y_2675_);
lean_dec_ref(v___y_2674_);
lean_dec(v___y_2673_);
lean_dec_ref(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec_ref(v___x_2667_);
lean_dec(v_upperBound_2666_);
return v_res_2681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go___boxed(lean_object* v_e_2682_, lean_object* v_pat_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_, lean_object* v_a_2686_, lean_object* v_a_2687_, lean_object* v_a_2688_, lean_object* v_a_2689_, lean_object* v_a_2690_, lean_object* v_a_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_){
_start:
{
lean_object* v_res_2695_; 
v_res_2695_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go(v_e_2682_, v_pat_2683_, v_a_2684_, v_a_2685_, v_a_2686_, v_a_2687_, v_a_2688_, v_a_2689_, v_a_2690_, v_a_2691_, v_a_2692_, v_a_2693_);
lean_dec(v_a_2693_);
lean_dec_ref(v_a_2692_);
lean_dec(v_a_2691_);
lean_dec_ref(v_a_2690_);
lean_dec(v_a_2689_);
lean_dec_ref(v_a_2688_);
lean_dec(v_a_2687_);
lean_dec_ref(v_a_2686_);
lean_dec(v_a_2685_);
lean_dec(v_a_2684_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go_spec__0(lean_object* v_upperBound_2696_, lean_object* v___x_2697_, lean_object* v_inst_2698_, lean_object* v_R_2699_, lean_object* v_a_2700_, lean_object* v_b_2701_, lean_object* v_c_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_){
_start:
{
lean_object* v___x_2714_; 
v___x_2714_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go_spec__0___redArg(v_upperBound_2696_, v___x_2697_, v_a_2700_, v_b_2701_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_);
return v___x_2714_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go_spec__0___boxed(lean_object** _args){
lean_object* v_upperBound_2715_ = _args[0];
lean_object* v___x_2716_ = _args[1];
lean_object* v_inst_2717_ = _args[2];
lean_object* v_R_2718_ = _args[3];
lean_object* v_a_2719_ = _args[4];
lean_object* v_b_2720_ = _args[5];
lean_object* v_c_2721_ = _args[6];
lean_object* v___y_2722_ = _args[7];
lean_object* v___y_2723_ = _args[8];
lean_object* v___y_2724_ = _args[9];
lean_object* v___y_2725_ = _args[10];
lean_object* v___y_2726_ = _args[11];
lean_object* v___y_2727_ = _args[12];
lean_object* v___y_2728_ = _args[13];
lean_object* v___y_2729_ = _args[14];
lean_object* v___y_2730_ = _args[15];
lean_object* v___y_2731_ = _args[16];
lean_object* v___y_2732_ = _args[17];
_start:
{
lean_object* v_res_2733_; 
v_res_2733_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go_spec__0(v_upperBound_2715_, v___x_2716_, v_inst_2717_, v_R_2718_, v_a_2719_, v_b_2720_, v_c_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_, v___y_2731_);
lean_dec(v___y_2731_);
lean_dec_ref(v___y_2730_);
lean_dec(v___y_2729_);
lean_dec_ref(v___y_2728_);
lean_dec(v___y_2727_);
lean_dec_ref(v___y_2726_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec(v___y_2722_);
lean_dec_ref(v___x_2716_);
lean_dec(v_upperBound_2715_);
return v_res_2733_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_tryToProveFalse_spec__0___redArg(lean_object* v_e_2734_, lean_object* v___y_2735_){
_start:
{
uint8_t v___x_2737_; 
v___x_2737_ = l_Lean_Expr_hasMVar(v_e_2734_);
if (v___x_2737_ == 0)
{
lean_object* v___x_2738_; 
v___x_2738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2738_, 0, v_e_2734_);
return v___x_2738_;
}
else
{
lean_object* v___x_2739_; lean_object* v_mctx_2740_; lean_object* v___x_2741_; lean_object* v_fst_2742_; lean_object* v_snd_2743_; lean_object* v___x_2744_; lean_object* v_cache_2745_; lean_object* v_zetaDeltaFVarIds_2746_; lean_object* v_postponed_2747_; lean_object* v_diag_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2757_; 
v___x_2739_ = lean_st_ref_get(v___y_2735_);
v_mctx_2740_ = lean_ctor_get(v___x_2739_, 0);
lean_inc_ref(v_mctx_2740_);
lean_dec(v___x_2739_);
v___x_2741_ = l_Lean_instantiateMVarsCore(v_mctx_2740_, v_e_2734_);
v_fst_2742_ = lean_ctor_get(v___x_2741_, 0);
lean_inc(v_fst_2742_);
v_snd_2743_ = lean_ctor_get(v___x_2741_, 1);
lean_inc(v_snd_2743_);
lean_dec_ref(v___x_2741_);
v___x_2744_ = lean_st_ref_take(v___y_2735_);
v_cache_2745_ = lean_ctor_get(v___x_2744_, 1);
v_zetaDeltaFVarIds_2746_ = lean_ctor_get(v___x_2744_, 2);
v_postponed_2747_ = lean_ctor_get(v___x_2744_, 3);
v_diag_2748_ = lean_ctor_get(v___x_2744_, 4);
v_isSharedCheck_2757_ = !lean_is_exclusive(v___x_2744_);
if (v_isSharedCheck_2757_ == 0)
{
lean_object* v_unused_2758_; 
v_unused_2758_ = lean_ctor_get(v___x_2744_, 0);
lean_dec(v_unused_2758_);
v___x_2750_ = v___x_2744_;
v_isShared_2751_ = v_isSharedCheck_2757_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_diag_2748_);
lean_inc(v_postponed_2747_);
lean_inc(v_zetaDeltaFVarIds_2746_);
lean_inc(v_cache_2745_);
lean_dec(v___x_2744_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2757_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v___x_2753_; 
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 0, v_snd_2743_);
v___x_2753_ = v___x_2750_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_snd_2743_);
lean_ctor_set(v_reuseFailAlloc_2756_, 1, v_cache_2745_);
lean_ctor_set(v_reuseFailAlloc_2756_, 2, v_zetaDeltaFVarIds_2746_);
lean_ctor_set(v_reuseFailAlloc_2756_, 3, v_postponed_2747_);
lean_ctor_set(v_reuseFailAlloc_2756_, 4, v_diag_2748_);
v___x_2753_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; 
v___x_2754_ = lean_st_ref_put(v___y_2735_, v___x_2753_);
v___x_2755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2755_, 0, v_fst_2742_);
return v___x_2755_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_tryToProveFalse_spec__0___redArg___boxed(lean_object* v_e_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_){
_start:
{
lean_object* v_res_2762_; 
v_res_2762_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_tryToProveFalse_spec__0___redArg(v_e_2759_, v___y_2760_);
lean_dec(v___y_2760_);
return v_res_2762_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_tryToProveFalse_spec__0(lean_object* v_e_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_){
_start:
{
lean_object* v___x_2775_; 
v___x_2775_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_tryToProveFalse_spec__0___redArg(v_e_2763_, v___y_2771_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_tryToProveFalse_spec__0___boxed(lean_object* v_e_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_){
_start:
{
lean_object* v_res_2788_; 
v_res_2788_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_tryToProveFalse_spec__0(v_e_2776_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_);
lean_dec(v___y_2786_);
lean_dec_ref(v___y_2785_);
lean_dec(v___y_2784_);
lean_dec_ref(v___y_2783_);
lean_dec(v___y_2782_);
lean_dec_ref(v___y_2781_);
lean_dec(v___y_2780_);
lean_dec_ref(v___y_2779_);
lean_dec(v___y_2778_);
lean_dec(v___y_2777_);
return v_res_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___redArg___lam__0(lean_object* v_k_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_){
_start:
{
lean_object* v___x_2801_; 
lean_inc(v___y_2795_);
lean_inc_ref(v___y_2794_);
lean_inc(v___y_2793_);
lean_inc_ref(v___y_2792_);
lean_inc(v___y_2791_);
lean_inc(v___y_2790_);
v___x_2801_ = lean_apply_11(v_k_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_, v___y_2797_, v___y_2798_, v___y_2799_, lean_box(0));
return v___x_2801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___redArg___lam__0___boxed(lean_object* v_k_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_){
_start:
{
lean_object* v_res_2814_; 
v_res_2814_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___redArg___lam__0(v_k_2802_, v___y_2803_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_);
lean_dec(v___y_2808_);
lean_dec_ref(v___y_2807_);
lean_dec(v___y_2806_);
lean_dec_ref(v___y_2805_);
lean_dec(v___y_2804_);
lean_dec(v___y_2803_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___redArg(lean_object* v_k_2815_, uint8_t v_allowLevelAssignments_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_){
_start:
{
lean_object* v___f_2828_; lean_object* v___x_2829_; 
lean_inc(v___y_2822_);
lean_inc_ref(v___y_2821_);
lean_inc(v___y_2820_);
lean_inc_ref(v___y_2819_);
lean_inc(v___y_2818_);
lean_inc(v___y_2817_);
v___f_2828_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___redArg___lam__0___boxed), 12, 7);
lean_closure_set(v___f_2828_, 0, v_k_2815_);
lean_closure_set(v___f_2828_, 1, v___y_2817_);
lean_closure_set(v___f_2828_, 2, v___y_2818_);
lean_closure_set(v___f_2828_, 3, v___y_2819_);
lean_closure_set(v___f_2828_, 4, v___y_2820_);
lean_closure_set(v___f_2828_, 5, v___y_2821_);
lean_closure_set(v___f_2828_, 6, v___y_2822_);
v___x_2829_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_2816_, v___f_2828_, v___y_2823_, v___y_2824_, v___y_2825_, v___y_2826_);
if (lean_obj_tag(v___x_2829_) == 0)
{
return v___x_2829_;
}
else
{
lean_object* v_a_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2837_; 
v_a_2830_ = lean_ctor_get(v___x_2829_, 0);
v_isSharedCheck_2837_ = !lean_is_exclusive(v___x_2829_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2832_ = v___x_2829_;
v_isShared_2833_ = v_isSharedCheck_2837_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_a_2830_);
lean_dec(v___x_2829_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2837_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2835_; 
if (v_isShared_2833_ == 0)
{
v___x_2835_ = v___x_2832_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v_a_2830_);
v___x_2835_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
return v___x_2835_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___redArg___boxed(lean_object* v_k_2838_, lean_object* v_allowLevelAssignments_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2851_; lean_object* v_res_2852_; 
v_allowLevelAssignments_boxed_2851_ = lean_unbox(v_allowLevelAssignments_2839_);
v_res_2852_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___redArg(v_k_2838_, v_allowLevelAssignments_boxed_2851_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_);
lean_dec(v___y_2849_);
lean_dec_ref(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2846_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2840_);
return v_res_2852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2(lean_object* v_00_u03b1_2853_, lean_object* v_k_2854_, uint8_t v_allowLevelAssignments_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_){
_start:
{
lean_object* v___x_2867_; 
v___x_2867_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___redArg(v_k_2854_, v_allowLevelAssignments_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_);
return v___x_2867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___boxed(lean_object* v_00_u03b1_2868_, lean_object* v_k_2869_, lean_object* v_allowLevelAssignments_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2882_; lean_object* v_res_2883_; 
v_allowLevelAssignments_boxed_2882_ = lean_unbox(v_allowLevelAssignments_2870_);
v_res_2883_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2(v_00_u03b1_2868_, v_k_2869_, v_allowLevelAssignments_boxed_2882_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec_ref(v___y_2875_);
lean_dec(v___y_2874_);
lean_dec_ref(v___y_2873_);
lean_dec(v___y_2872_);
lean_dec(v___y_2871_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_tryToProveFalse___lam__0(lean_object* v_cls_2884_, lean_object* v_____do__lift_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_){
_start:
{
lean_object* v_toCold_2897_; lean_object* v_options_2898_; uint8_t v_hasTrace_2899_; 
v_toCold_2897_ = lean_ctor_get(v___y_2894_, 0);
v_options_2898_ = lean_ctor_get(v_toCold_2897_, 2);
v_hasTrace_2899_ = lean_ctor_get_uint8(v_options_2898_, sizeof(void*)*1);
if (v_hasTrace_2899_ == 0)
{
lean_object* v___x_2900_; lean_object* v___x_2901_; 
lean_dec(v_cls_2884_);
v___x_2900_ = lean_box(v_hasTrace_2899_);
v___x_2901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2901_, 0, v___x_2900_);
return v___x_2901_;
}
else
{
lean_object* v___x_2902_; lean_object* v___x_2903_; uint8_t v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; 
v___x_2902_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__5));
v___x_2903_ = l_Lean_Name_append(v___x_2902_, v_cls_2884_);
v___x_2904_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_2885_, v_options_2898_, v___x_2903_);
lean_dec(v___x_2903_);
v___x_2905_ = lean_box(v___x_2904_);
v___x_2906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2905_);
return v___x_2906_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_tryToProveFalse___lam__0___boxed(lean_object* v_cls_2907_, lean_object* v_____do__lift_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l_Lean_Meta_Grind_tryToProveFalse___lam__0(v_cls_2907_, v_____do__lift_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
lean_dec(v___y_2918_);
lean_dec_ref(v___y_2917_);
lean_dec(v___y_2916_);
lean_dec_ref(v___y_2915_);
lean_dec(v___y_2914_);
lean_dec_ref(v___y_2913_);
lean_dec(v___y_2912_);
lean_dec_ref(v___y_2911_);
lean_dec(v___y_2910_);
lean_dec(v___y_2909_);
lean_dec_ref(v_____do__lift_2908_);
return v_res_2920_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__3(void){
_start:
{
lean_object* v_cls_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; 
v_cls_2929_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__1));
v___x_2930_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__5));
v___x_2931_ = l_Lean_Name_append(v___x_2930_, v_cls_2929_);
return v___x_2931_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__5(void){
_start:
{
lean_object* v___x_2933_; lean_object* v___x_2934_; 
v___x_2933_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__4));
v___x_2934_ = l_Lean_stringToMessageData(v___x_2933_);
return v___x_2934_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1(lean_object* v_as_2935_, size_t v_sz_2936_, size_t v_i_2937_, lean_object* v_b_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_){
_start:
{
lean_object* v_a_2951_; uint8_t v___x_2955_; 
v___x_2955_ = lean_usize_dec_lt(v_i_2937_, v_sz_2936_);
if (v___x_2955_ == 0)
{
lean_object* v___x_2956_; 
v___x_2956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2956_, 0, v_b_2938_);
return v___x_2956_;
}
else
{
lean_object* v_snd_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_3212_; 
v_snd_2957_ = lean_ctor_get(v_b_2938_, 1);
v_isSharedCheck_3212_ = !lean_is_exclusive(v_b_2938_);
if (v_isSharedCheck_3212_ == 0)
{
lean_object* v_unused_3213_; 
v_unused_3213_ = lean_ctor_get(v_b_2938_, 0);
lean_dec(v_unused_3213_);
v___x_2959_ = v_b_2938_;
v_isShared_2960_ = v_isSharedCheck_3212_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_snd_2957_);
lean_dec(v_b_2938_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_3212_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v_array_2961_; lean_object* v_start_2962_; lean_object* v_stop_2963_; lean_object* v___x_2964_; uint8_t v___x_2965_; 
v_array_2961_ = lean_ctor_get(v_snd_2957_, 0);
v_start_2962_ = lean_ctor_get(v_snd_2957_, 1);
v_stop_2963_ = lean_ctor_get(v_snd_2957_, 2);
v___x_2964_ = lean_box(0);
v___x_2965_ = lean_nat_dec_lt(v_start_2962_, v_stop_2963_);
if (v___x_2965_ == 0)
{
lean_object* v___x_2967_; 
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 0, v___x_2964_);
v___x_2967_ = v___x_2959_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v___x_2964_);
lean_ctor_set(v_reuseFailAlloc_2969_, 1, v_snd_2957_);
v___x_2967_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
lean_object* v___x_2968_; 
v___x_2968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2968_, 0, v___x_2967_);
return v___x_2968_;
}
}
else
{
lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_3208_; 
lean_inc(v_stop_2963_);
lean_inc(v_start_2962_);
lean_inc_ref(v_array_2961_);
v_isSharedCheck_3208_ = !lean_is_exclusive(v_snd_2957_);
if (v_isSharedCheck_3208_ == 0)
{
lean_object* v_unused_3209_; lean_object* v_unused_3210_; lean_object* v_unused_3211_; 
v_unused_3209_ = lean_ctor_get(v_snd_2957_, 2);
lean_dec(v_unused_3209_);
v_unused_3210_ = lean_ctor_get(v_snd_2957_, 1);
lean_dec(v_unused_3210_);
v_unused_3211_ = lean_ctor_get(v_snd_2957_, 0);
lean_dec(v_unused_3211_);
v___x_2971_ = v_snd_2957_;
v_isShared_2972_ = v_isSharedCheck_3208_;
goto v_resetjp_2970_;
}
else
{
lean_dec(v_snd_2957_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_3208_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2977_; 
v___x_2973_ = lean_array_fget(v_array_2961_, v_start_2962_);
v___x_2974_ = lean_unsigned_to_nat(1u);
v___x_2975_ = lean_nat_add(v_start_2962_, v___x_2974_);
lean_dec(v_start_2962_);
if (v_isShared_2972_ == 0)
{
lean_ctor_set(v___x_2971_, 1, v___x_2975_);
v___x_2977_ = v___x_2971_;
goto v_reusejp_2976_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v_array_2961_);
lean_ctor_set(v_reuseFailAlloc_3207_, 1, v___x_2975_);
lean_ctor_set(v_reuseFailAlloc_3207_, 2, v_stop_2963_);
v___x_2977_ = v_reuseFailAlloc_3207_;
goto v_reusejp_2976_;
}
v_reusejp_2976_:
{
uint8_t v___x_2978_; 
v___x_2978_ = lean_unbox(v___x_2973_);
if (v___x_2978_ == 0)
{
lean_object* v___x_2980_; 
lean_dec(v___x_2973_);
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 1, v___x_2977_);
lean_ctor_set(v___x_2959_, 0, v___x_2964_);
v___x_2980_ = v___x_2959_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v___x_2964_);
lean_ctor_set(v_reuseFailAlloc_2981_, 1, v___x_2977_);
v___x_2980_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
v_a_2951_ = v___x_2980_;
goto v___jp_2950_;
}
}
else
{
lean_object* v_cls_2982_; lean_object* v_a_2983_; lean_object* v_____x_2985_; lean_object* v___y_2986_; lean_object* v___y_2987_; lean_object* v___y_2988_; lean_object* v___y_2989_; lean_object* v___x_3021_; 
v_cls_2982_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__1));
v_a_2983_ = lean_array_uget_borrowed(v_as_2935_, v_i_2937_);
lean_inc(v___y_2948_);
lean_inc_ref(v___y_2947_);
lean_inc(v___y_2946_);
lean_inc_ref(v___y_2945_);
lean_inc(v_a_2983_);
v___x_3021_ = lean_infer_type(v_a_2983_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_);
if (lean_obj_tag(v___x_3021_) == 0)
{
lean_object* v_a_3022_; lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3198_; 
v_a_3022_ = lean_ctor_get(v___x_3021_, 0);
v_isSharedCheck_3198_ = !lean_is_exclusive(v___x_3021_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3024_ = v___x_3021_;
v_isShared_3025_ = v_isSharedCheck_3198_;
goto v_resetjp_3023_;
}
else
{
lean_inc(v_a_3022_);
lean_dec(v___x_3021_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3198_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
lean_object* v___x_3026_; 
v___x_3026_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isEqHEq_x3f(v_a_3022_);
lean_dec(v_a_3022_);
if (lean_obj_tag(v___x_3026_) == 1)
{
lean_object* v_val_3027_; lean_object* v_snd_3028_; lean_object* v_fst_3029_; lean_object* v___x_3031_; uint8_t v_isShared_3032_; uint8_t v_isSharedCheck_3192_; 
lean_del_object(v___x_3024_);
v_val_3027_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_val_3027_);
lean_dec_ref_known(v___x_3026_, 1);
v_snd_3028_ = lean_ctor_get(v_val_3027_, 1);
v_fst_3029_ = lean_ctor_get(v_val_3027_, 0);
v_isSharedCheck_3192_ = !lean_is_exclusive(v_val_3027_);
if (v_isSharedCheck_3192_ == 0)
{
v___x_3031_ = v_val_3027_;
v_isShared_3032_ = v_isSharedCheck_3192_;
goto v_resetjp_3030_;
}
else
{
lean_inc(v_snd_3028_);
lean_inc(v_fst_3029_);
lean_dec(v_val_3027_);
v___x_3031_ = lean_box(0);
v_isShared_3032_ = v_isSharedCheck_3192_;
goto v_resetjp_3030_;
}
v_resetjp_3030_:
{
lean_object* v_fst_3033_; lean_object* v_snd_3034_; lean_object* v___x_3036_; uint8_t v_isShared_3037_; uint8_t v_isSharedCheck_3191_; 
v_fst_3033_ = lean_ctor_get(v_snd_3028_, 0);
v_snd_3034_ = lean_ctor_get(v_snd_3028_, 1);
v_isSharedCheck_3191_ = !lean_is_exclusive(v_snd_3028_);
if (v_isSharedCheck_3191_ == 0)
{
v___x_3036_ = v_snd_3028_;
v_isShared_3037_ = v_isSharedCheck_3191_;
goto v_resetjp_3035_;
}
else
{
lean_inc(v_snd_3034_);
lean_inc(v_fst_3033_);
lean_dec(v_snd_3028_);
v___x_3036_ = lean_box(0);
v_isShared_3037_ = v_isSharedCheck_3191_;
goto v_resetjp_3035_;
}
v_resetjp_3035_:
{
uint8_t v___y_3039_; lean_object* v_lhs_x27_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v___y_3045_; lean_object* v___y_3046_; lean_object* v___y_3047_; lean_object* v___y_3048_; lean_object* v___y_3049_; lean_object* v___y_3050_; lean_object* v___y_3072_; uint8_t v___y_3073_; lean_object* v___y_3074_; lean_object* v___y_3075_; lean_object* v___y_3076_; lean_object* v___y_3077_; lean_object* v___y_3078_; lean_object* v___y_3079_; lean_object* v___y_3080_; lean_object* v___y_3081_; lean_object* v___y_3082_; lean_object* v___y_3083_; lean_object* v___y_3084_; lean_object* v___y_3130_; uint8_t v___y_3131_; uint8_t v___y_3166_; 
if (lean_obj_tag(v_fst_3029_) == 0)
{
uint8_t v___x_3189_; 
lean_dec(v___x_2973_);
v___x_3189_ = 0;
v___y_3166_ = v___x_3189_;
goto v___jp_3165_;
}
else
{
uint8_t v___x_3190_; 
lean_dec_ref_known(v_fst_3029_, 1);
v___x_3190_ = lean_unbox(v___x_2973_);
lean_dec(v___x_2973_);
v___y_3166_ = v___x_3190_;
goto v___jp_3165_;
}
v___jp_3038_:
{
if (v___y_3039_ == 0)
{
lean_object* v___x_3051_; 
v___x_3051_ = l_Lean_Meta_Grind_proveEq_x3f(v_fst_3033_, v_lhs_x27_3040_, v___y_3039_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v_a_3052_; 
v_a_3052_ = lean_ctor_get(v___x_3051_, 0);
lean_inc(v_a_3052_);
lean_dec_ref_known(v___x_3051_, 1);
v_____x_2985_ = v_a_3052_;
v___y_2986_ = v___y_3047_;
v___y_2987_ = v___y_3048_;
v___y_2988_ = v___y_3049_;
v___y_2989_ = v___y_3050_;
goto v___jp_2984_;
}
else
{
lean_object* v_a_3053_; lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3060_; 
lean_dec_ref(v___x_2977_);
lean_del_object(v___x_2959_);
v_a_3053_ = lean_ctor_get(v___x_3051_, 0);
v_isSharedCheck_3060_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3060_ == 0)
{
v___x_3055_ = v___x_3051_;
v_isShared_3056_ = v_isSharedCheck_3060_;
goto v_resetjp_3054_;
}
else
{
lean_inc(v_a_3053_);
lean_dec(v___x_3051_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3060_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
lean_object* v___x_3058_; 
if (v_isShared_3056_ == 0)
{
v___x_3058_ = v___x_3055_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_a_3053_);
v___x_3058_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
return v___x_3058_;
}
}
}
}
else
{
lean_object* v___x_3061_; 
v___x_3061_ = l_Lean_Meta_Grind_proveHEq_x3f(v_fst_3033_, v_lhs_x27_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_);
if (lean_obj_tag(v___x_3061_) == 0)
{
lean_object* v_a_3062_; 
v_a_3062_ = lean_ctor_get(v___x_3061_, 0);
lean_inc(v_a_3062_);
lean_dec_ref_known(v___x_3061_, 1);
v_____x_2985_ = v_a_3062_;
v___y_2986_ = v___y_3047_;
v___y_2987_ = v___y_3048_;
v___y_2988_ = v___y_3049_;
v___y_2989_ = v___y_3050_;
goto v___jp_2984_;
}
else
{
lean_object* v_a_3063_; lean_object* v___x_3065_; uint8_t v_isShared_3066_; uint8_t v_isSharedCheck_3070_; 
lean_dec_ref(v___x_2977_);
lean_del_object(v___x_2959_);
v_a_3063_ = lean_ctor_get(v___x_3061_, 0);
v_isSharedCheck_3070_ = !lean_is_exclusive(v___x_3061_);
if (v_isSharedCheck_3070_ == 0)
{
v___x_3065_ = v___x_3061_;
v_isShared_3066_ = v_isSharedCheck_3070_;
goto v_resetjp_3064_;
}
else
{
lean_inc(v_a_3063_);
lean_dec(v___x_3061_);
v___x_3065_ = lean_box(0);
v_isShared_3066_ = v_isSharedCheck_3070_;
goto v_resetjp_3064_;
}
v_resetjp_3064_:
{
lean_object* v___x_3068_; 
if (v_isShared_3066_ == 0)
{
v___x_3068_ = v___x_3065_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v_a_3063_);
v___x_3068_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
return v___x_3068_;
}
}
}
}
}
v___jp_3071_:
{
lean_object* v___x_3085_; 
lean_inc_ref(v___y_3072_);
v___x_3085_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isPatternLike___redArg(v___y_3072_, v___y_3081_, v___y_3082_, v___y_3083_, v___y_3084_);
if (lean_obj_tag(v___x_3085_) == 0)
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3120_; 
v_a_3086_ = lean_ctor_get(v___x_3085_, 0);
v_isSharedCheck_3120_ = !lean_is_exclusive(v___x_3085_);
if (v_isSharedCheck_3120_ == 0)
{
v___x_3088_ = v___x_3085_;
v_isShared_3089_ = v_isSharedCheck_3120_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_3085_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3120_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
uint8_t v___x_3090_; 
v___x_3090_ = lean_unbox(v_a_3086_);
lean_dec(v_a_3086_);
if (v___x_3090_ == 0)
{
lean_object* v___x_3091_; lean_object* v___x_3093_; 
lean_dec_ref(v___y_3074_);
lean_dec_ref(v___y_3072_);
lean_dec(v_fst_3033_);
lean_del_object(v___x_2959_);
v___x_3091_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__2));
if (v_isShared_3037_ == 0)
{
lean_ctor_set(v___x_3036_, 1, v___x_2977_);
lean_ctor_set(v___x_3036_, 0, v___x_3091_);
v___x_3093_ = v___x_3036_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v___x_3091_);
lean_ctor_set(v_reuseFailAlloc_3097_, 1, v___x_2977_);
v___x_3093_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
lean_object* v___x_3095_; 
if (v_isShared_3089_ == 0)
{
lean_ctor_set(v___x_3088_, 0, v___x_3093_);
v___x_3095_ = v___x_3088_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v___x_3093_);
v___x_3095_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
return v___x_3095_;
}
}
}
else
{
lean_object* v___x_3098_; 
lean_del_object(v___x_3088_);
lean_inc_ref(v___y_3074_);
v___x_3098_ = l_Lean_Meta_isDefEqD(v___y_3074_, v___y_3072_, v___y_3081_, v___y_3082_, v___y_3083_, v___y_3084_);
if (lean_obj_tag(v___x_3098_) == 0)
{
lean_object* v_a_3099_; lean_object* v___x_3101_; uint8_t v_isShared_3102_; uint8_t v_isSharedCheck_3111_; 
v_a_3099_ = lean_ctor_get(v___x_3098_, 0);
v_isSharedCheck_3111_ = !lean_is_exclusive(v___x_3098_);
if (v_isSharedCheck_3111_ == 0)
{
v___x_3101_ = v___x_3098_;
v_isShared_3102_ = v_isSharedCheck_3111_;
goto v_resetjp_3100_;
}
else
{
lean_inc(v_a_3099_);
lean_dec(v___x_3098_);
v___x_3101_ = lean_box(0);
v_isShared_3102_ = v_isSharedCheck_3111_;
goto v_resetjp_3100_;
}
v_resetjp_3100_:
{
uint8_t v___x_3103_; 
v___x_3103_ = lean_unbox(v_a_3099_);
lean_dec(v_a_3099_);
if (v___x_3103_ == 0)
{
lean_object* v___x_3104_; lean_object* v___x_3106_; 
lean_dec_ref(v___y_3074_);
lean_dec(v_fst_3033_);
lean_del_object(v___x_2959_);
v___x_3104_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__2));
if (v_isShared_3037_ == 0)
{
lean_ctor_set(v___x_3036_, 1, v___x_2977_);
lean_ctor_set(v___x_3036_, 0, v___x_3104_);
v___x_3106_ = v___x_3036_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v___x_3104_);
lean_ctor_set(v_reuseFailAlloc_3110_, 1, v___x_2977_);
v___x_3106_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
lean_object* v___x_3108_; 
if (v_isShared_3102_ == 0)
{
lean_ctor_set(v___x_3101_, 0, v___x_3106_);
v___x_3108_ = v___x_3101_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v___x_3106_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
else
{
lean_del_object(v___x_3101_);
lean_del_object(v___x_3036_);
v___y_3039_ = v___y_3073_;
v_lhs_x27_3040_ = v___y_3074_;
v___y_3041_ = v___y_3075_;
v___y_3042_ = v___y_3076_;
v___y_3043_ = v___y_3077_;
v___y_3044_ = v___y_3078_;
v___y_3045_ = v___y_3079_;
v___y_3046_ = v___y_3080_;
v___y_3047_ = v___y_3081_;
v___y_3048_ = v___y_3082_;
v___y_3049_ = v___y_3083_;
v___y_3050_ = v___y_3084_;
goto v___jp_3038_;
}
}
}
else
{
lean_object* v_a_3112_; lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3119_; 
lean_dec_ref(v___y_3074_);
lean_del_object(v___x_3036_);
lean_dec(v_fst_3033_);
lean_dec_ref(v___x_2977_);
lean_del_object(v___x_2959_);
v_a_3112_ = lean_ctor_get(v___x_3098_, 0);
v_isSharedCheck_3119_ = !lean_is_exclusive(v___x_3098_);
if (v_isSharedCheck_3119_ == 0)
{
v___x_3114_ = v___x_3098_;
v_isShared_3115_ = v_isSharedCheck_3119_;
goto v_resetjp_3113_;
}
else
{
lean_inc(v_a_3112_);
lean_dec(v___x_3098_);
v___x_3114_ = lean_box(0);
v_isShared_3115_ = v_isSharedCheck_3119_;
goto v_resetjp_3113_;
}
v_resetjp_3113_:
{
lean_object* v___x_3117_; 
if (v_isShared_3115_ == 0)
{
v___x_3117_ = v___x_3114_;
goto v_reusejp_3116_;
}
else
{
lean_object* v_reuseFailAlloc_3118_; 
v_reuseFailAlloc_3118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3118_, 0, v_a_3112_);
v___x_3117_ = v_reuseFailAlloc_3118_;
goto v_reusejp_3116_;
}
v_reusejp_3116_:
{
return v___x_3117_;
}
}
}
}
}
}
else
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3128_; 
lean_dec_ref(v___y_3074_);
lean_dec_ref(v___y_3072_);
lean_del_object(v___x_3036_);
lean_dec(v_fst_3033_);
lean_dec_ref(v___x_2977_);
lean_del_object(v___x_2959_);
v_a_3121_ = lean_ctor_get(v___x_3085_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3085_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3123_ = v___x_3085_;
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v___x_3085_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3126_; 
if (v_isShared_3124_ == 0)
{
v___x_3126_ = v___x_3123_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_a_3121_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
}
v___jp_3129_:
{
lean_object* v___x_3132_; 
lean_inc_ref(v___y_3130_);
lean_inc(v_fst_3033_);
v___x_3132_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_tryToProveFalse_go(v_fst_3033_, v___y_3130_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_);
if (lean_obj_tag(v___x_3132_) == 0)
{
lean_object* v_toCold_3133_; lean_object* v_options_3134_; uint8_t v_hasTrace_3135_; 
v_toCold_3133_ = lean_ctor_get(v___y_2947_, 0);
v_options_3134_ = lean_ctor_get(v_toCold_3133_, 2);
v_hasTrace_3135_ = lean_ctor_get_uint8(v_options_3134_, sizeof(void*)*1);
if (v_hasTrace_3135_ == 0)
{
lean_object* v_a_3136_; 
lean_del_object(v___x_3031_);
v_a_3136_ = lean_ctor_get(v___x_3132_, 0);
lean_inc(v_a_3136_);
lean_dec_ref_known(v___x_3132_, 1);
v___y_3072_ = v___y_3130_;
v___y_3073_ = v___y_3131_;
v___y_3074_ = v_a_3136_;
v___y_3075_ = v___y_2939_;
v___y_3076_ = v___y_2940_;
v___y_3077_ = v___y_2941_;
v___y_3078_ = v___y_2942_;
v___y_3079_ = v___y_2943_;
v___y_3080_ = v___y_2944_;
v___y_3081_ = v___y_2945_;
v___y_3082_ = v___y_2946_;
v___y_3083_ = v___y_2947_;
v___y_3084_ = v___y_2948_;
goto v___jp_3071_;
}
else
{
lean_object* v_a_3137_; lean_object* v_inheritedTraceOptions_3138_; lean_object* v___x_3139_; uint8_t v___x_3140_; 
v_a_3137_ = lean_ctor_get(v___x_3132_, 0);
lean_inc(v_a_3137_);
lean_dec_ref_known(v___x_3132_, 1);
v_inheritedTraceOptions_3138_ = lean_ctor_get(v_toCold_3133_, 11);
v___x_3139_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__3);
v___x_3140_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3138_, v_options_3134_, v___x_3139_);
if (v___x_3140_ == 0)
{
lean_del_object(v___x_3031_);
v___y_3072_ = v___y_3130_;
v___y_3073_ = v___y_3131_;
v___y_3074_ = v_a_3137_;
v___y_3075_ = v___y_2939_;
v___y_3076_ = v___y_2940_;
v___y_3077_ = v___y_2941_;
v___y_3078_ = v___y_2942_;
v___y_3079_ = v___y_2943_;
v___y_3080_ = v___y_2944_;
v___y_3081_ = v___y_2945_;
v___y_3082_ = v___y_2946_;
v___y_3083_ = v___y_2947_;
v___y_3084_ = v___y_2948_;
goto v___jp_3071_;
}
else
{
lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3144_; 
lean_inc(v_a_3137_);
v___x_3141_ = l_Lean_MessageData_ofExpr(v_a_3137_);
v___x_3142_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__5);
if (v_isShared_3032_ == 0)
{
lean_ctor_set_tag(v___x_3031_, 7);
lean_ctor_set(v___x_3031_, 1, v___x_3142_);
lean_ctor_set(v___x_3031_, 0, v___x_3141_);
v___x_3144_ = v___x_3031_;
goto v_reusejp_3143_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v___x_3141_);
lean_ctor_set(v_reuseFailAlloc_3156_, 1, v___x_3142_);
v___x_3144_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3143_;
}
v_reusejp_3143_:
{
lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
lean_inc_ref(v___y_3130_);
v___x_3145_ = l_Lean_MessageData_ofExpr(v___y_3130_);
v___x_3146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3144_);
lean_ctor_set(v___x_3146_, 1, v___x_3145_);
v___x_3147_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg(v_cls_2982_, v___x_3146_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_);
if (lean_obj_tag(v___x_3147_) == 0)
{
lean_dec_ref_known(v___x_3147_, 1);
v___y_3072_ = v___y_3130_;
v___y_3073_ = v___y_3131_;
v___y_3074_ = v_a_3137_;
v___y_3075_ = v___y_2939_;
v___y_3076_ = v___y_2940_;
v___y_3077_ = v___y_2941_;
v___y_3078_ = v___y_2942_;
v___y_3079_ = v___y_2943_;
v___y_3080_ = v___y_2944_;
v___y_3081_ = v___y_2945_;
v___y_3082_ = v___y_2946_;
v___y_3083_ = v___y_2947_;
v___y_3084_ = v___y_2948_;
goto v___jp_3071_;
}
else
{
lean_object* v_a_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3155_; 
lean_dec(v_a_3137_);
lean_dec_ref(v___y_3130_);
lean_del_object(v___x_3036_);
lean_dec(v_fst_3033_);
lean_dec_ref(v___x_2977_);
lean_del_object(v___x_2959_);
v_a_3148_ = lean_ctor_get(v___x_3147_, 0);
v_isSharedCheck_3155_ = !lean_is_exclusive(v___x_3147_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3150_ = v___x_3147_;
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_a_3148_);
lean_dec(v___x_3147_);
v___x_3150_ = lean_box(0);
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
v_resetjp_3149_:
{
lean_object* v___x_3153_; 
if (v_isShared_3151_ == 0)
{
v___x_3153_ = v___x_3150_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v_a_3148_);
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
}
else
{
lean_object* v_a_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3164_; 
lean_dec_ref(v___y_3130_);
lean_del_object(v___x_3036_);
lean_dec(v_fst_3033_);
lean_del_object(v___x_3031_);
lean_dec_ref(v___x_2977_);
lean_del_object(v___x_2959_);
v_a_3157_ = lean_ctor_get(v___x_3132_, 0);
v_isSharedCheck_3164_ = !lean_is_exclusive(v___x_3132_);
if (v_isSharedCheck_3164_ == 0)
{
v___x_3159_ = v___x_3132_;
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_a_3157_);
lean_dec(v___x_3132_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3162_; 
if (v_isShared_3160_ == 0)
{
v___x_3162_ = v___x_3159_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v_a_3157_);
v___x_3162_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
return v___x_3162_;
}
}
}
}
v___jp_3165_:
{
lean_object* v___x_3167_; 
v___x_3167_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_tryToProveFalse_spec__0___redArg(v_snd_3034_, v___y_2946_);
if (lean_obj_tag(v___x_3167_) == 0)
{
lean_object* v_a_3168_; uint8_t v___x_3169_; 
v_a_3168_ = lean_ctor_get(v___x_3167_, 0);
lean_inc(v_a_3168_);
lean_dec_ref_known(v___x_3167_, 1);
v___x_3169_ = l_Lean_Expr_hasExprMVar(v_a_3168_);
if (v___x_3169_ == 0)
{
lean_object* v___x_3170_; 
v___x_3170_ = l_Lean_Meta_Grind_isEqv___redArg(v_fst_3033_, v_a_3168_, v___y_2939_);
if (lean_obj_tag(v___x_3170_) == 0)
{
lean_object* v_a_3171_; uint8_t v___x_3172_; 
v_a_3171_ = lean_ctor_get(v___x_3170_, 0);
lean_inc(v_a_3171_);
lean_dec_ref_known(v___x_3170_, 1);
v___x_3172_ = lean_unbox(v_a_3171_);
lean_dec(v_a_3171_);
if (v___x_3172_ == 0)
{
v___y_3130_ = v_a_3168_;
v___y_3131_ = v___y_3166_;
goto v___jp_3129_;
}
else
{
lean_del_object(v___x_3036_);
lean_del_object(v___x_3031_);
v___y_3039_ = v___y_3166_;
v_lhs_x27_3040_ = v_a_3168_;
v___y_3041_ = v___y_2939_;
v___y_3042_ = v___y_2940_;
v___y_3043_ = v___y_2941_;
v___y_3044_ = v___y_2942_;
v___y_3045_ = v___y_2943_;
v___y_3046_ = v___y_2944_;
v___y_3047_ = v___y_2945_;
v___y_3048_ = v___y_2946_;
v___y_3049_ = v___y_2947_;
v___y_3050_ = v___y_2948_;
goto v___jp_3038_;
}
}
else
{
lean_object* v_a_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3180_; 
lean_dec(v_a_3168_);
lean_del_object(v___x_3036_);
lean_dec(v_fst_3033_);
lean_del_object(v___x_3031_);
lean_dec_ref(v___x_2977_);
lean_del_object(v___x_2959_);
v_a_3173_ = lean_ctor_get(v___x_3170_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3170_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3175_ = v___x_3170_;
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
else
{
lean_inc(v_a_3173_);
lean_dec(v___x_3170_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3178_; 
if (v_isShared_3176_ == 0)
{
v___x_3178_ = v___x_3175_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_a_3173_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
}
}
}
}
else
{
v___y_3130_ = v_a_3168_;
v___y_3131_ = v___y_3166_;
goto v___jp_3129_;
}
}
else
{
lean_object* v_a_3181_; lean_object* v___x_3183_; uint8_t v_isShared_3184_; uint8_t v_isSharedCheck_3188_; 
lean_del_object(v___x_3036_);
lean_dec(v_fst_3033_);
lean_del_object(v___x_3031_);
lean_dec_ref(v___x_2977_);
lean_del_object(v___x_2959_);
v_a_3181_ = lean_ctor_get(v___x_3167_, 0);
v_isSharedCheck_3188_ = !lean_is_exclusive(v___x_3167_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3183_ = v___x_3167_;
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
else
{
lean_inc(v_a_3181_);
lean_dec(v___x_3167_);
v___x_3183_ = lean_box(0);
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
v_resetjp_3182_:
{
lean_object* v___x_3186_; 
if (v_isShared_3184_ == 0)
{
v___x_3186_ = v___x_3183_;
goto v_reusejp_3185_;
}
else
{
lean_object* v_reuseFailAlloc_3187_; 
v_reuseFailAlloc_3187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3187_, 0, v_a_3181_);
v___x_3186_ = v_reuseFailAlloc_3187_;
goto v_reusejp_3185_;
}
v_reusejp_3185_:
{
return v___x_3186_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3196_; 
lean_dec(v___x_3026_);
lean_dec(v___x_2973_);
lean_del_object(v___x_2959_);
v___x_3193_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__2));
v___x_3194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3193_);
lean_ctor_set(v___x_3194_, 1, v___x_2977_);
if (v_isShared_3025_ == 0)
{
lean_ctor_set(v___x_3024_, 0, v___x_3194_);
v___x_3196_ = v___x_3024_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3197_; 
v_reuseFailAlloc_3197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3197_, 0, v___x_3194_);
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
lean_dec_ref(v___x_2977_);
lean_dec(v___x_2973_);
lean_del_object(v___x_2959_);
v_a_3199_ = lean_ctor_get(v___x_3021_, 0);
v_isSharedCheck_3206_ = !lean_is_exclusive(v___x_3021_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_3201_ = v___x_3021_;
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_a_3199_);
lean_dec(v___x_3021_);
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
v___jp_2984_:
{
if (lean_obj_tag(v_____x_2985_) == 1)
{
lean_object* v_val_2990_; lean_object* v___x_2991_; 
v_val_2990_ = lean_ctor_get(v_____x_2985_, 0);
lean_inc(v_val_2990_);
lean_dec_ref_known(v_____x_2985_, 1);
lean_inc(v_a_2983_);
v___x_2991_ = l_Lean_Meta_isExprDefEq(v_a_2983_, v_val_2990_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_3007_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_2994_ = v___x_2991_;
v_isShared_2995_ = v_isSharedCheck_3007_;
goto v_resetjp_2993_;
}
else
{
lean_inc(v_a_2992_);
lean_dec(v___x_2991_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_3007_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
uint8_t v___x_2996_; 
v___x_2996_ = lean_unbox(v_a_2992_);
lean_dec(v_a_2992_);
if (v___x_2996_ == 0)
{
lean_object* v___x_2997_; lean_object* v___x_2999_; 
v___x_2997_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__2));
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 1, v___x_2977_);
lean_ctor_set(v___x_2959_, 0, v___x_2997_);
v___x_2999_ = v___x_2959_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v___x_2997_);
lean_ctor_set(v_reuseFailAlloc_3003_, 1, v___x_2977_);
v___x_2999_ = v_reuseFailAlloc_3003_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
lean_object* v___x_3001_; 
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 0, v___x_2999_);
v___x_3001_ = v___x_2994_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v___x_2999_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
}
else
{
lean_object* v___x_3005_; 
lean_del_object(v___x_2994_);
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 1, v___x_2977_);
lean_ctor_set(v___x_2959_, 0, v___x_2964_);
v___x_3005_ = v___x_2959_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v___x_2964_);
lean_ctor_set(v_reuseFailAlloc_3006_, 1, v___x_2977_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
v_a_2951_ = v___x_3005_;
goto v___jp_2950_;
}
}
}
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
lean_dec_ref(v___x_2977_);
lean_del_object(v___x_2959_);
v_a_3008_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_2991_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_2991_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3013_; 
if (v_isShared_3011_ == 0)
{
v___x_3013_ = v___x_3010_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_a_3008_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
}
else
{
lean_object* v___x_3016_; lean_object* v___x_3018_; 
lean_dec(v_____x_2985_);
v___x_3016_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__2));
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 1, v___x_2977_);
lean_ctor_set(v___x_2959_, 0, v___x_3016_);
v___x_3018_ = v___x_2959_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v___x_3016_);
lean_ctor_set(v_reuseFailAlloc_3020_, 1, v___x_2977_);
v___x_3018_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
lean_object* v___x_3019_; 
v___x_3019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3019_, 0, v___x_3018_);
return v___x_3019_;
}
}
}
}
}
}
}
}
}
v___jp_2950_:
{
size_t v___x_2952_; size_t v___x_2953_; 
v___x_2952_ = ((size_t)1ULL);
v___x_2953_ = lean_usize_add(v_i_2937_, v___x_2952_);
v_i_2937_ = v___x_2953_;
v_b_2938_ = v_a_2951_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___boxed(lean_object* v_as_3214_, lean_object* v_sz_3215_, lean_object* v_i_3216_, lean_object* v_b_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_){
_start:
{
size_t v_sz_boxed_3229_; size_t v_i_boxed_3230_; lean_object* v_res_3231_; 
v_sz_boxed_3229_ = lean_unbox_usize(v_sz_3215_);
lean_dec(v_sz_3215_);
v_i_boxed_3230_ = lean_unbox_usize(v_i_3216_);
lean_dec(v_i_3216_);
v_res_3231_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1(v_as_3214_, v_sz_boxed_3229_, v_i_boxed_3230_, v_b_3217_, v___y_3218_, v___y_3219_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_);
lean_dec(v___y_3227_);
lean_dec_ref(v___y_3226_);
lean_dec(v___y_3225_);
lean_dec_ref(v___y_3224_);
lean_dec(v___y_3223_);
lean_dec_ref(v___y_3222_);
lean_dec(v___y_3221_);
lean_dec_ref(v___y_3220_);
lean_dec(v___y_3219_);
lean_dec(v___y_3218_);
lean_dec_ref(v_as_3214_);
return v_res_3231_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_tryToProveFalse___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3233_; lean_object* v___x_3234_; 
v___x_3233_ = ((lean_object*)(l_Lean_Meta_Grind_tryToProveFalse___lam__1___closed__0));
v___x_3234_ = l_Lean_stringToMessageData(v___x_3233_);
return v___x_3234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_tryToProveFalse___lam__1(lean_object* v_arg_3235_, uint8_t v___x_3236_, lean_object* v_e_3237_, lean_object* v___f_3238_, lean_object* v_cls_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_){
_start:
{
lean_object* v___x_3251_; 
lean_inc_ref(v_arg_3235_);
v___x_3251_ = l_Lean_Meta_forallMetaTelescope(v_arg_3235_, v___x_3236_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_);
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_object* v_a_3252_; lean_object* v_fst_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3371_; 
v_a_3252_ = lean_ctor_get(v___x_3251_, 0);
lean_inc(v_a_3252_);
lean_dec_ref_known(v___x_3251_, 1);
v_fst_3253_ = lean_ctor_get(v_a_3252_, 0);
v_isSharedCheck_3371_ = !lean_is_exclusive(v_a_3252_);
if (v_isSharedCheck_3371_ == 0)
{
lean_object* v_unused_3372_; 
v_unused_3372_ = lean_ctor_get(v_a_3252_, 1);
lean_dec(v_unused_3372_);
v___x_3255_ = v_a_3252_;
v_isShared_3256_ = v_isSharedCheck_3371_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_fst_3253_);
lean_dec(v_a_3252_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3371_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3263_; 
v___x_3257_ = l_Lean_Meta_mkGenDiseqMask(v_arg_3235_);
lean_dec_ref(v_arg_3235_);
v___x_3258_ = lean_unsigned_to_nat(0u);
v___x_3259_ = lean_array_get_size(v___x_3257_);
v___x_3260_ = l_Array_toSubarray___redArg(v___x_3257_, v___x_3258_, v___x_3259_);
v___x_3261_ = lean_box(0);
if (v_isShared_3256_ == 0)
{
lean_ctor_set(v___x_3255_, 1, v___x_3260_);
lean_ctor_set(v___x_3255_, 0, v___x_3261_);
v___x_3263_ = v___x_3255_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v___x_3261_);
lean_ctor_set(v_reuseFailAlloc_3370_, 1, v___x_3260_);
v___x_3263_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
size_t v_sz_3264_; size_t v___x_3265_; lean_object* v___x_3266_; 
v_sz_3264_ = lean_array_size(v_fst_3253_);
v___x_3265_ = ((size_t)0ULL);
v___x_3266_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1(v_fst_3253_, v_sz_3264_, v___x_3265_, v___x_3263_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_);
if (lean_obj_tag(v___x_3266_) == 0)
{
lean_object* v_a_3267_; lean_object* v___x_3269_; uint8_t v_isShared_3270_; uint8_t v_isSharedCheck_3361_; 
v_a_3267_ = lean_ctor_get(v___x_3266_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3266_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3269_ = v___x_3266_;
v_isShared_3270_ = v_isSharedCheck_3361_;
goto v_resetjp_3268_;
}
else
{
lean_inc(v_a_3267_);
lean_dec(v___x_3266_);
v___x_3269_ = lean_box(0);
v_isShared_3270_ = v_isSharedCheck_3361_;
goto v_resetjp_3268_;
}
v_resetjp_3268_:
{
lean_object* v_fst_3271_; lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3359_; 
v_fst_3271_ = lean_ctor_get(v_a_3267_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v_a_3267_);
if (v_isSharedCheck_3359_ == 0)
{
lean_object* v_unused_3360_; 
v_unused_3360_ = lean_ctor_get(v_a_3267_, 1);
lean_dec(v_unused_3360_);
v___x_3273_ = v_a_3267_;
v_isShared_3274_ = v_isSharedCheck_3359_;
goto v_resetjp_3272_;
}
else
{
lean_inc(v_fst_3271_);
lean_dec(v_a_3267_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3359_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
if (lean_obj_tag(v_fst_3271_) == 0)
{
lean_object* v___x_3275_; 
lean_del_object(v___x_3269_);
lean_inc_ref(v_e_3237_);
v___x_3275_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_3237_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_);
if (lean_obj_tag(v___x_3275_) == 0)
{
lean_object* v_a_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v_a_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3346_; 
v_a_3276_ = lean_ctor_get(v___x_3275_, 0);
lean_inc(v_a_3276_);
lean_dec_ref_known(v___x_3275_, 1);
v___x_3277_ = l_Lean_Meta_mkOfEqTrueCore(v_e_3237_, v_a_3276_);
v___x_3278_ = l_Lean_mkAppN(v___x_3277_, v_fst_3253_);
lean_dec(v_fst_3253_);
v___x_3279_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_tryToProveFalse_spec__0___redArg(v___x_3278_, v___y_3247_);
v_a_3280_ = lean_ctor_get(v___x_3279_, 0);
v_isSharedCheck_3346_ = !lean_is_exclusive(v___x_3279_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3282_ = v___x_3279_;
v_isShared_3283_ = v_isSharedCheck_3346_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___x_3279_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3346_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3289_; 
lean_inc(v_a_3280_);
v___x_3289_ = l_Lean_Meta_hasAssignableMVar(v_a_3280_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_);
if (lean_obj_tag(v___x_3289_) == 0)
{
lean_object* v_a_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3337_; 
v_a_3290_ = lean_ctor_get(v___x_3289_, 0);
v_isSharedCheck_3337_ = !lean_is_exclusive(v___x_3289_);
if (v_isSharedCheck_3337_ == 0)
{
v___x_3292_ = v___x_3289_;
v_isShared_3293_ = v_isSharedCheck_3337_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_a_3290_);
lean_dec(v___x_3289_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3337_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
uint8_t v___x_3294_; 
v___x_3294_ = lean_unbox(v_a_3290_);
lean_dec(v_a_3290_);
if (v___x_3294_ == 0)
{
lean_object* v_toCold_3295_; lean_object* v_inheritedTraceOptions_3296_; lean_object* v___x_3297_; 
lean_del_object(v___x_3292_);
v_toCold_3295_ = lean_ctor_get(v___y_3248_, 0);
v_inheritedTraceOptions_3296_ = lean_ctor_get(v_toCold_3295_, 11);
lean_inc(v___y_3249_);
lean_inc_ref(v___y_3248_);
lean_inc(v___y_3247_);
lean_inc_ref(v___y_3246_);
lean_inc(v___y_3245_);
lean_inc_ref(v___y_3244_);
lean_inc(v___y_3243_);
lean_inc_ref(v___y_3242_);
lean_inc(v___y_3241_);
lean_inc(v___y_3240_);
lean_inc_ref(v_inheritedTraceOptions_3296_);
v___x_3297_ = lean_apply_12(v___f_3238_, v_inheritedTraceOptions_3296_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_, lean_box(0));
if (lean_obj_tag(v___x_3297_) == 0)
{
lean_object* v_a_3298_; uint8_t v___x_3299_; 
v_a_3298_ = lean_ctor_get(v___x_3297_, 0);
lean_inc(v_a_3298_);
lean_dec_ref_known(v___x_3297_, 1);
v___x_3299_ = lean_unbox(v_a_3298_);
lean_dec(v_a_3298_);
if (v___x_3299_ == 0)
{
lean_del_object(v___x_3273_);
lean_dec(v_cls_3239_);
goto v___jp_3284_;
}
else
{
lean_object* v___x_3300_; 
lean_inc(v___y_3249_);
lean_inc_ref(v___y_3248_);
lean_inc(v___y_3247_);
lean_inc_ref(v___y_3246_);
lean_inc(v_a_3280_);
v___x_3300_ = lean_infer_type(v_a_3280_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_);
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v_a_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3305_; 
v_a_3301_ = lean_ctor_get(v___x_3300_, 0);
lean_inc(v_a_3301_);
lean_dec_ref_known(v___x_3300_, 1);
lean_inc(v_a_3280_);
v___x_3302_ = l_Lean_MessageData_ofExpr(v_a_3280_);
v___x_3303_ = lean_obj_once(&l_Lean_Meta_Grind_tryToProveFalse___lam__1___closed__1, &l_Lean_Meta_Grind_tryToProveFalse___lam__1___closed__1_once, _init_l_Lean_Meta_Grind_tryToProveFalse___lam__1___closed__1);
if (v_isShared_3274_ == 0)
{
lean_ctor_set_tag(v___x_3273_, 7);
lean_ctor_set(v___x_3273_, 1, v___x_3303_);
lean_ctor_set(v___x_3273_, 0, v___x_3302_);
v___x_3305_ = v___x_3273_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v___x_3302_);
lean_ctor_set(v_reuseFailAlloc_3317_, 1, v___x_3303_);
v___x_3305_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; 
v___x_3306_ = l_Lean_MessageData_ofExpr(v_a_3301_);
v___x_3307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3307_, 0, v___x_3305_);
lean_ctor_set(v___x_3307_, 1, v___x_3306_);
v___x_3308_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg(v_cls_3239_, v___x_3307_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_);
if (lean_obj_tag(v___x_3308_) == 0)
{
lean_dec_ref_known(v___x_3308_, 1);
goto v___jp_3284_;
}
else
{
lean_object* v_a_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3316_; 
lean_del_object(v___x_3282_);
lean_dec(v_a_3280_);
v_a_3309_ = lean_ctor_get(v___x_3308_, 0);
v_isSharedCheck_3316_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3316_ == 0)
{
v___x_3311_ = v___x_3308_;
v_isShared_3312_ = v_isSharedCheck_3316_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_a_3309_);
lean_dec(v___x_3308_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3316_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3314_; 
if (v_isShared_3312_ == 0)
{
v___x_3314_ = v___x_3311_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v_a_3309_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
return v___x_3314_;
}
}
}
}
}
else
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3325_; 
lean_del_object(v___x_3282_);
lean_dec(v_a_3280_);
lean_del_object(v___x_3273_);
lean_dec(v_cls_3239_);
v_a_3318_ = lean_ctor_get(v___x_3300_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v___x_3300_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3320_ = v___x_3300_;
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v___x_3300_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3323_; 
if (v_isShared_3321_ == 0)
{
v___x_3323_ = v___x_3320_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3318_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
return v___x_3323_;
}
}
}
}
}
else
{
lean_object* v_a_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3333_; 
lean_del_object(v___x_3282_);
lean_dec(v_a_3280_);
lean_del_object(v___x_3273_);
lean_dec(v_cls_3239_);
v_a_3326_ = lean_ctor_get(v___x_3297_, 0);
v_isSharedCheck_3333_ = !lean_is_exclusive(v___x_3297_);
if (v_isSharedCheck_3333_ == 0)
{
v___x_3328_ = v___x_3297_;
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_a_3326_);
lean_dec(v___x_3297_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
lean_object* v___x_3331_; 
if (v_isShared_3329_ == 0)
{
v___x_3331_ = v___x_3328_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v_a_3326_);
v___x_3331_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
return v___x_3331_;
}
}
}
}
else
{
lean_object* v___x_3335_; 
lean_del_object(v___x_3282_);
lean_dec(v_a_3280_);
lean_del_object(v___x_3273_);
lean_dec(v_cls_3239_);
lean_dec_ref(v___f_3238_);
if (v_isShared_3293_ == 0)
{
lean_ctor_set(v___x_3292_, 0, v___x_3261_);
v___x_3335_ = v___x_3292_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3336_; 
v_reuseFailAlloc_3336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3336_, 0, v___x_3261_);
v___x_3335_ = v_reuseFailAlloc_3336_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
return v___x_3335_;
}
}
}
}
else
{
lean_object* v_a_3338_; lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3345_; 
lean_del_object(v___x_3282_);
lean_dec(v_a_3280_);
lean_del_object(v___x_3273_);
lean_dec(v_cls_3239_);
lean_dec_ref(v___f_3238_);
v_a_3338_ = lean_ctor_get(v___x_3289_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v___x_3289_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3340_ = v___x_3289_;
v_isShared_3341_ = v_isSharedCheck_3345_;
goto v_resetjp_3339_;
}
else
{
lean_inc(v_a_3338_);
lean_dec(v___x_3289_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3345_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
lean_object* v___x_3343_; 
if (v_isShared_3341_ == 0)
{
v___x_3343_ = v___x_3340_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v_a_3338_);
v___x_3343_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
return v___x_3343_;
}
}
}
v___jp_3284_:
{
lean_object* v___x_3285_; lean_object* v___x_3287_; 
v___x_3285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3285_, 0, v_a_3280_);
if (v_isShared_3283_ == 0)
{
lean_ctor_set(v___x_3282_, 0, v___x_3285_);
v___x_3287_ = v___x_3282_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3288_; 
v_reuseFailAlloc_3288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3288_, 0, v___x_3285_);
v___x_3287_ = v_reuseFailAlloc_3288_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
return v___x_3287_;
}
}
}
}
else
{
lean_object* v_a_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3354_; 
lean_del_object(v___x_3273_);
lean_dec(v_fst_3253_);
lean_dec(v_cls_3239_);
lean_dec_ref(v___f_3238_);
lean_dec_ref(v_e_3237_);
v_a_3347_ = lean_ctor_get(v___x_3275_, 0);
v_isSharedCheck_3354_ = !lean_is_exclusive(v___x_3275_);
if (v_isSharedCheck_3354_ == 0)
{
v___x_3349_ = v___x_3275_;
v_isShared_3350_ = v_isSharedCheck_3354_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_a_3347_);
lean_dec(v___x_3275_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3354_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3352_; 
if (v_isShared_3350_ == 0)
{
v___x_3352_ = v___x_3349_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v_a_3347_);
v___x_3352_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
return v___x_3352_;
}
}
}
}
else
{
lean_object* v_val_3355_; lean_object* v___x_3357_; 
lean_del_object(v___x_3273_);
lean_dec(v_fst_3253_);
lean_dec(v_cls_3239_);
lean_dec_ref(v___f_3238_);
lean_dec_ref(v_e_3237_);
v_val_3355_ = lean_ctor_get(v_fst_3271_, 0);
lean_inc(v_val_3355_);
lean_dec_ref_known(v_fst_3271_, 1);
if (v_isShared_3270_ == 0)
{
lean_ctor_set(v___x_3269_, 0, v_val_3355_);
v___x_3357_ = v___x_3269_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v_val_3355_);
v___x_3357_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
return v___x_3357_;
}
}
}
}
}
else
{
lean_object* v_a_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3369_; 
lean_dec(v_fst_3253_);
lean_dec(v_cls_3239_);
lean_dec_ref(v___f_3238_);
lean_dec_ref(v_e_3237_);
v_a_3362_ = lean_ctor_get(v___x_3266_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3266_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3364_ = v___x_3266_;
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_a_3362_);
lean_dec(v___x_3266_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_a_3362_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
return v___x_3367_;
}
}
}
}
}
}
else
{
lean_object* v_a_3373_; lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3380_; 
lean_dec(v_cls_3239_);
lean_dec_ref(v___f_3238_);
lean_dec_ref(v_e_3237_);
lean_dec_ref(v_arg_3235_);
v_a_3373_ = lean_ctor_get(v___x_3251_, 0);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3251_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3375_ = v___x_3251_;
v_isShared_3376_ = v_isSharedCheck_3380_;
goto v_resetjp_3374_;
}
else
{
lean_inc(v_a_3373_);
lean_dec(v___x_3251_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3380_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
lean_object* v___x_3378_; 
if (v_isShared_3376_ == 0)
{
v___x_3378_ = v___x_3375_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v_a_3373_);
v___x_3378_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
return v___x_3378_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_tryToProveFalse___lam__1___boxed(lean_object* v_arg_3381_, lean_object* v___x_3382_, lean_object* v_e_3383_, lean_object* v___f_3384_, lean_object* v_cls_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_){
_start:
{
uint8_t v___x_81226__boxed_3397_; lean_object* v_res_3398_; 
v___x_81226__boxed_3397_ = lean_unbox(v___x_3382_);
v_res_3398_ = l_Lean_Meta_Grind_tryToProveFalse___lam__1(v_arg_3381_, v___x_81226__boxed_3397_, v_e_3383_, v___f_3384_, v_cls_3385_, v___y_3386_, v___y_3387_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_);
lean_dec(v___y_3395_);
lean_dec_ref(v___y_3394_);
lean_dec(v___y_3393_);
lean_dec_ref(v___y_3392_);
lean_dec(v___y_3391_);
lean_dec_ref(v___y_3390_);
lean_dec(v___y_3389_);
lean_dec_ref(v___y_3388_);
lean_dec(v___y_3387_);
lean_dec(v___y_3386_);
return v_res_3398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_tryToProveFalse(lean_object* v_e_3401_, lean_object* v_a_3402_, lean_object* v_a_3403_, lean_object* v_a_3404_, lean_object* v_a_3405_, lean_object* v_a_3406_, lean_object* v_a_3407_, lean_object* v_a_3408_, lean_object* v_a_3409_, lean_object* v_a_3410_, lean_object* v_a_3411_){
_start:
{
lean_object* v_toCold_3416_; lean_object* v_inheritedTraceOptions_3417_; lean_object* v_cls_3418_; lean_object* v___f_3419_; lean_object* v___y_3421_; lean_object* v___y_3422_; lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___y_3427_; lean_object* v___y_3428_; lean_object* v___y_3429_; lean_object* v___y_3430_; lean_object* v___x_3471_; lean_object* v_a_3472_; uint8_t v___x_3473_; 
v_toCold_3416_ = lean_ctor_get(v_a_3410_, 0);
v_inheritedTraceOptions_3417_ = lean_ctor_get(v_toCold_3416_, 11);
v_cls_3418_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_tryToProveFalse_spec__1___closed__1));
v___f_3419_ = ((lean_object*)(l_Lean_Meta_Grind_tryToProveFalse___closed__0));
v___x_3471_ = l_Lean_Meta_Grind_tryToProveFalse___lam__0(v_cls_3418_, v_inheritedTraceOptions_3417_, v_a_3402_, v_a_3403_, v_a_3404_, v_a_3405_, v_a_3406_, v_a_3407_, v_a_3408_, v_a_3409_, v_a_3410_, v_a_3411_);
v_a_3472_ = lean_ctor_get(v___x_3471_, 0);
lean_inc(v_a_3472_);
lean_dec_ref(v___x_3471_);
v___x_3473_ = lean_unbox(v_a_3472_);
lean_dec(v_a_3472_);
if (v___x_3473_ == 0)
{
v___y_3421_ = v_a_3402_;
v___y_3422_ = v_a_3403_;
v___y_3423_ = v_a_3404_;
v___y_3424_ = v_a_3405_;
v___y_3425_ = v_a_3406_;
v___y_3426_ = v_a_3407_;
v___y_3427_ = v_a_3408_;
v___y_3428_ = v_a_3409_;
v___y_3429_ = v_a_3410_;
v___y_3430_ = v_a_3411_;
goto v___jp_3420_;
}
else
{
lean_object* v___x_3474_; 
v___x_3474_ = l_Lean_Meta_Grind_updateLastTag(v_a_3402_, v_a_3403_, v_a_3404_, v_a_3405_, v_a_3406_, v_a_3407_, v_a_3408_, v_a_3409_, v_a_3410_, v_a_3411_);
if (lean_obj_tag(v___x_3474_) == 0)
{
lean_object* v___x_3475_; lean_object* v___x_3476_; 
lean_dec_ref_known(v___x_3474_, 1);
lean_inc_ref(v_e_3401_);
v___x_3475_ = l_Lean_MessageData_ofExpr(v_e_3401_);
v___x_3476_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg(v_cls_3418_, v___x_3475_, v_a_3408_, v_a_3409_, v_a_3410_, v_a_3411_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_dec_ref_known(v___x_3476_, 1);
v___y_3421_ = v_a_3402_;
v___y_3422_ = v_a_3403_;
v___y_3423_ = v_a_3404_;
v___y_3424_ = v_a_3405_;
v___y_3425_ = v_a_3406_;
v___y_3426_ = v_a_3407_;
v___y_3427_ = v_a_3408_;
v___y_3428_ = v_a_3409_;
v___y_3429_ = v_a_3410_;
v___y_3430_ = v_a_3411_;
goto v___jp_3420_;
}
else
{
lean_dec_ref(v_e_3401_);
return v___x_3476_;
}
}
else
{
lean_dec_ref(v_e_3401_);
return v___x_3474_;
}
}
v___jp_3413_:
{
lean_object* v___x_3414_; lean_object* v___x_3415_; 
v___x_3414_ = lean_box(0);
v___x_3415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3414_);
return v___x_3415_;
}
v___jp_3420_:
{
lean_object* v___x_3431_; 
lean_inc_ref(v_e_3401_);
v___x_3431_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_3401_, v___y_3428_);
if (lean_obj_tag(v___x_3431_) == 0)
{
lean_object* v_a_3432_; lean_object* v___x_3433_; uint8_t v___x_3434_; 
v_a_3432_ = lean_ctor_get(v___x_3431_, 0);
lean_inc(v_a_3432_);
lean_dec_ref_known(v___x_3431_, 1);
v___x_3433_ = l_Lean_Expr_cleanupAnnotations(v_a_3432_);
lean_dec(v_a_3432_);
v___x_3434_ = l_Lean_Expr_isApp(v___x_3433_);
if (v___x_3434_ == 0)
{
lean_dec_ref(v___x_3433_);
lean_dec_ref(v_e_3401_);
goto v___jp_3413_;
}
else
{
lean_object* v___x_3435_; lean_object* v___x_3436_; uint8_t v___x_3437_; 
v___x_3435_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3433_);
v___x_3436_ = ((lean_object*)(l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__4));
v___x_3437_ = l_Lean_Expr_isConstOf(v___x_3435_, v___x_3436_);
lean_dec_ref(v___x_3435_);
if (v___x_3437_ == 0)
{
lean_dec_ref(v___x_3433_);
lean_dec_ref(v_e_3401_);
goto v___jp_3413_;
}
else
{
lean_object* v_arg_3438_; uint8_t v___x_3439_; lean_object* v___x_3440_; lean_object* v___f_3441_; uint8_t v___x_3442_; lean_object* v___x_3443_; 
v_arg_3438_ = lean_ctor_get(v___x_3433_, 1);
lean_inc_ref(v_arg_3438_);
lean_dec_ref(v___x_3433_);
v___x_3439_ = 0;
v___x_3440_ = lean_box(v___x_3439_);
v___f_3441_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_tryToProveFalse___lam__1___boxed), 16, 5);
lean_closure_set(v___f_3441_, 0, v_arg_3438_);
lean_closure_set(v___f_3441_, 1, v___x_3440_);
lean_closure_set(v___f_3441_, 2, v_e_3401_);
lean_closure_set(v___f_3441_, 3, v___f_3419_);
lean_closure_set(v___f_3441_, 4, v_cls_3418_);
v___x_3442_ = 0;
v___x_3443_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_tryToProveFalse_spec__2___redArg(v___f_3441_, v___x_3442_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_, v___y_3429_, v___y_3430_);
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_object* v_a_3444_; lean_object* v___x_3446_; uint8_t v_isShared_3447_; uint8_t v_isSharedCheck_3454_; 
v_a_3444_ = lean_ctor_get(v___x_3443_, 0);
v_isSharedCheck_3454_ = !lean_is_exclusive(v___x_3443_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3446_ = v___x_3443_;
v_isShared_3447_ = v_isSharedCheck_3454_;
goto v_resetjp_3445_;
}
else
{
lean_inc(v_a_3444_);
lean_dec(v___x_3443_);
v___x_3446_ = lean_box(0);
v_isShared_3447_ = v_isSharedCheck_3454_;
goto v_resetjp_3445_;
}
v_resetjp_3445_:
{
if (lean_obj_tag(v_a_3444_) == 1)
{
lean_object* v_val_3448_; lean_object* v___x_3449_; 
lean_del_object(v___x_3446_);
v_val_3448_ = lean_ctor_get(v_a_3444_, 0);
lean_inc(v_val_3448_);
lean_dec_ref_known(v_a_3444_, 1);
v___x_3449_ = l_Lean_Meta_Grind_closeGoal(v_val_3448_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_, v___y_3429_, v___y_3430_);
return v___x_3449_;
}
else
{
lean_object* v___x_3450_; lean_object* v___x_3452_; 
lean_dec(v_a_3444_);
v___x_3450_ = lean_box(0);
if (v_isShared_3447_ == 0)
{
lean_ctor_set(v___x_3446_, 0, v___x_3450_);
v___x_3452_ = v___x_3446_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v___x_3450_);
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
v_a_3455_ = lean_ctor_get(v___x_3443_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3443_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3457_ = v___x_3443_;
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_a_3455_);
lean_dec(v___x_3443_);
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
lean_object* v_a_3463_; lean_object* v___x_3465_; uint8_t v_isShared_3466_; uint8_t v_isSharedCheck_3470_; 
lean_dec_ref(v_e_3401_);
v_a_3463_ = lean_ctor_get(v___x_3431_, 0);
v_isSharedCheck_3470_ = !lean_is_exclusive(v___x_3431_);
if (v_isSharedCheck_3470_ == 0)
{
v___x_3465_ = v___x_3431_;
v_isShared_3466_ = v_isSharedCheck_3470_;
goto v_resetjp_3464_;
}
else
{
lean_inc(v_a_3463_);
lean_dec(v___x_3431_);
v___x_3465_ = lean_box(0);
v_isShared_3466_ = v_isSharedCheck_3470_;
goto v_resetjp_3464_;
}
v_resetjp_3464_:
{
lean_object* v___x_3468_; 
if (v_isShared_3466_ == 0)
{
v___x_3468_ = v___x_3465_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v_a_3463_);
v___x_3468_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
return v___x_3468_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_tryToProveFalse___boxed(lean_object* v_e_3477_, lean_object* v_a_3478_, lean_object* v_a_3479_, lean_object* v_a_3480_, lean_object* v_a_3481_, lean_object* v_a_3482_, lean_object* v_a_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_, lean_object* v_a_3488_){
_start:
{
lean_object* v_res_3489_; 
v_res_3489_ = l_Lean_Meta_Grind_tryToProveFalse(v_e_3477_, v_a_3478_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
lean_dec(v_a_3487_);
lean_dec_ref(v_a_3486_);
lean_dec(v_a_3485_);
lean_dec_ref(v_a_3484_);
lean_dec(v_a_3483_);
lean_dec_ref(v_a_3482_);
lean_dec(v_a_3481_);
lean_dec_ref(v_a_3480_);
lean_dec(v_a_3479_);
lean_dec(v_a_3478_);
return v_res_3489_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateMatchCondUp___closed__1(void){
_start:
{
lean_object* v___x_3491_; lean_object* v___x_3492_; 
v___x_3491_ = ((lean_object*)(l_Lean_Meta_Grind_propagateMatchCondUp___closed__0));
v___x_3492_ = l_Lean_stringToMessageData(v___x_3491_);
return v___x_3492_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateMatchCondUp___closed__3(void){
_start:
{
lean_object* v___x_3494_; lean_object* v___x_3495_; 
v___x_3494_ = ((lean_object*)(l_Lean_Meta_Grind_propagateMatchCondUp___closed__2));
v___x_3495_ = l_Lean_stringToMessageData(v___x_3494_);
return v___x_3495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateMatchCondUp(lean_object* v_e_3496_, lean_object* v_a_3497_, lean_object* v_a_3498_, lean_object* v_a_3499_, lean_object* v_a_3500_, lean_object* v_a_3501_, lean_object* v_a_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_, lean_object* v_a_3505_, lean_object* v_a_3506_){
_start:
{
lean_object* v___y_3512_; lean_object* v___y_3513_; lean_object* v___y_3514_; lean_object* v___y_3515_; lean_object* v___y_3516_; lean_object* v___y_3517_; lean_object* v___y_3518_; lean_object* v___y_3519_; lean_object* v_toCold_3522_; lean_object* v_options_3523_; lean_object* v_inheritedTraceOptions_3524_; uint8_t v_hasTrace_3525_; lean_object* v_cls_3526_; lean_object* v___y_3528_; lean_object* v___y_3529_; lean_object* v___y_3530_; lean_object* v___y_3531_; lean_object* v___y_3532_; lean_object* v___y_3533_; lean_object* v___y_3534_; lean_object* v___y_3535_; lean_object* v___y_3536_; lean_object* v___y_3537_; 
v_toCold_3522_ = lean_ctor_get(v_a_3505_, 0);
v_options_3523_ = lean_ctor_get(v_toCold_3522_, 2);
v_inheritedTraceOptions_3524_ = lean_ctor_get(v_toCold_3522_, 11);
v_hasTrace_3525_ = lean_ctor_get_uint8(v_options_3523_, sizeof(void*)*1);
v_cls_3526_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__3));
if (v_hasTrace_3525_ == 0)
{
v___y_3528_ = v_a_3497_;
v___y_3529_ = v_a_3498_;
v___y_3530_ = v_a_3499_;
v___y_3531_ = v_a_3500_;
v___y_3532_ = v_a_3501_;
v___y_3533_ = v_a_3502_;
v___y_3534_ = v_a_3503_;
v___y_3535_ = v_a_3504_;
v___y_3536_ = v_a_3505_;
v___y_3537_ = v_a_3506_;
goto v___jp_3527_;
}
else
{
lean_object* v___x_3634_; uint8_t v___x_3635_; 
v___x_3634_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6);
v___x_3635_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3524_, v_options_3523_, v___x_3634_);
if (v___x_3635_ == 0)
{
v___y_3528_ = v_a_3497_;
v___y_3529_ = v_a_3498_;
v___y_3530_ = v_a_3499_;
v___y_3531_ = v_a_3500_;
v___y_3532_ = v_a_3501_;
v___y_3533_ = v_a_3502_;
v___y_3534_ = v_a_3503_;
v___y_3535_ = v_a_3504_;
v___y_3536_ = v_a_3505_;
v___y_3537_ = v_a_3506_;
goto v___jp_3527_;
}
else
{
lean_object* v___x_3636_; 
v___x_3636_ = l_Lean_Meta_Grind_updateLastTag(v_a_3497_, v_a_3498_, v_a_3499_, v_a_3500_, v_a_3501_, v_a_3502_, v_a_3503_, v_a_3504_, v_a_3505_, v_a_3506_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; 
lean_dec_ref_known(v___x_3636_, 1);
v___x_3637_ = lean_obj_once(&l_Lean_Meta_Grind_propagateMatchCondUp___closed__3, &l_Lean_Meta_Grind_propagateMatchCondUp___closed__3_once, _init_l_Lean_Meta_Grind_propagateMatchCondUp___closed__3);
lean_inc_ref(v_e_3496_);
v___x_3638_ = l_Lean_indentExpr(v_e_3496_);
v___x_3639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3639_, 0, v___x_3637_);
lean_ctor_set(v___x_3639_, 1, v___x_3638_);
v___x_3640_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg(v_cls_3526_, v___x_3639_, v_a_3503_, v_a_3504_, v_a_3505_, v_a_3506_);
if (lean_obj_tag(v___x_3640_) == 0)
{
lean_dec_ref_known(v___x_3640_, 1);
v___y_3528_ = v_a_3497_;
v___y_3529_ = v_a_3498_;
v___y_3530_ = v_a_3499_;
v___y_3531_ = v_a_3500_;
v___y_3532_ = v_a_3501_;
v___y_3533_ = v_a_3502_;
v___y_3534_ = v_a_3503_;
v___y_3535_ = v_a_3504_;
v___y_3536_ = v_a_3505_;
v___y_3537_ = v_a_3506_;
goto v___jp_3527_;
}
else
{
lean_dec_ref(v_e_3496_);
return v___x_3640_;
}
}
else
{
lean_dec_ref(v_e_3496_);
return v___x_3636_;
}
}
}
v___jp_3508_:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3509_ = lean_box(0);
v___x_3510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3510_, 0, v___x_3509_);
return v___x_3510_;
}
v___jp_3511_:
{
lean_object* v___x_3520_; lean_object* v___x_3521_; 
lean_inc_ref(v_e_3496_);
v___x_3520_ = l_Lean_Meta_mkEqTrueCore(v_e_3496_, v___y_3512_);
v___x_3521_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_3496_, v___x_3520_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_, v___y_3518_, v___y_3519_);
return v___x_3521_;
}
v___jp_3527_:
{
lean_object* v___x_3538_; 
lean_inc_ref(v_e_3496_);
v___x_3538_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_3496_, v___y_3528_, v___y_3532_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
if (lean_obj_tag(v___x_3538_) == 0)
{
lean_object* v_a_3539_; uint8_t v___x_3540_; 
v_a_3539_ = lean_ctor_get(v___x_3538_, 0);
lean_inc(v_a_3539_);
lean_dec_ref_known(v___x_3538_, 1);
v___x_3540_ = lean_unbox(v_a_3539_);
lean_dec(v_a_3539_);
if (v___x_3540_ == 0)
{
lean_object* v___x_3541_; 
lean_inc_ref(v_e_3496_);
v___x_3541_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied(v_e_3496_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
if (lean_obj_tag(v___x_3541_) == 0)
{
lean_object* v_a_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3597_; 
v_a_3542_ = lean_ctor_get(v___x_3541_, 0);
v_isSharedCheck_3597_ = !lean_is_exclusive(v___x_3541_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3544_ = v___x_3541_;
v_isShared_3545_ = v_isSharedCheck_3597_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_a_3542_);
lean_dec(v___x_3541_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3597_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
uint8_t v___x_3546_; 
v___x_3546_ = lean_unbox(v_a_3542_);
lean_dec(v_a_3542_);
if (v___x_3546_ == 0)
{
lean_object* v___x_3547_; lean_object* v___x_3549_; 
lean_dec_ref(v_e_3496_);
v___x_3547_ = lean_box(0);
if (v_isShared_3545_ == 0)
{
lean_ctor_set(v___x_3544_, 0, v___x_3547_);
v___x_3549_ = v___x_3544_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v___x_3547_);
v___x_3549_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
return v___x_3549_;
}
}
else
{
lean_object* v___x_3551_; 
lean_del_object(v___x_3544_);
lean_inc_ref(v_e_3496_);
v___x_3551_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_mkMatchCondProof_x3f(v_e_3496_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
if (lean_obj_tag(v___x_3551_) == 0)
{
lean_object* v_a_3552_; 
v_a_3552_ = lean_ctor_get(v___x_3551_, 0);
lean_inc(v_a_3552_);
lean_dec_ref_known(v___x_3551_, 1);
if (lean_obj_tag(v_a_3552_) == 1)
{
lean_object* v_toCold_3553_; lean_object* v_options_3554_; uint8_t v_hasTrace_3555_; 
v_toCold_3553_ = lean_ctor_get(v___y_3536_, 0);
v_options_3554_ = lean_ctor_get(v_toCold_3553_, 2);
v_hasTrace_3555_ = lean_ctor_get_uint8(v_options_3554_, sizeof(void*)*1);
if (v_hasTrace_3555_ == 0)
{
lean_object* v_val_3556_; 
v_val_3556_ = lean_ctor_get(v_a_3552_, 0);
lean_inc(v_val_3556_);
lean_dec_ref_known(v_a_3552_, 1);
v___y_3512_ = v_val_3556_;
v___y_3513_ = v___y_3528_;
v___y_3514_ = v___y_3530_;
v___y_3515_ = v___y_3532_;
v___y_3516_ = v___y_3534_;
v___y_3517_ = v___y_3535_;
v___y_3518_ = v___y_3536_;
v___y_3519_ = v___y_3537_;
goto v___jp_3511_;
}
else
{
lean_object* v_val_3557_; lean_object* v_inheritedTraceOptions_3558_; lean_object* v___x_3559_; uint8_t v___x_3560_; 
v_val_3557_ = lean_ctor_get(v_a_3552_, 0);
lean_inc(v_val_3557_);
lean_dec_ref_known(v_a_3552_, 1);
v_inheritedTraceOptions_3558_ = lean_ctor_get(v_toCold_3553_, 11);
v___x_3559_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__1___redArg___closed__6);
v___x_3560_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3558_, v_options_3554_, v___x_3559_);
if (v___x_3560_ == 0)
{
v___y_3512_ = v_val_3557_;
v___y_3513_ = v___y_3528_;
v___y_3514_ = v___y_3530_;
v___y_3515_ = v___y_3532_;
v___y_3516_ = v___y_3534_;
v___y_3517_ = v___y_3535_;
v___y_3518_ = v___y_3536_;
v___y_3519_ = v___y_3537_;
goto v___jp_3511_;
}
else
{
lean_object* v___x_3561_; 
v___x_3561_ = l_Lean_Meta_Grind_updateLastTag(v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
if (lean_obj_tag(v___x_3561_) == 0)
{
lean_object* v___x_3562_; 
lean_dec_ref_known(v___x_3561_, 1);
lean_inc(v___y_3537_);
lean_inc_ref(v___y_3536_);
lean_inc(v___y_3535_);
lean_inc_ref(v___y_3534_);
lean_inc(v_val_3557_);
v___x_3562_ = lean_infer_type(v_val_3557_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
if (lean_obj_tag(v___x_3562_) == 0)
{
lean_object* v_a_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; 
v_a_3563_ = lean_ctor_get(v___x_3562_, 0);
lean_inc(v_a_3563_);
lean_dec_ref_known(v___x_3562_, 1);
v___x_3564_ = l_Lean_MessageData_ofExpr(v_a_3563_);
v___x_3565_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied_spec__0___redArg(v_cls_3526_, v___x_3564_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
if (lean_obj_tag(v___x_3565_) == 0)
{
lean_dec_ref_known(v___x_3565_, 1);
v___y_3512_ = v_val_3557_;
v___y_3513_ = v___y_3528_;
v___y_3514_ = v___y_3530_;
v___y_3515_ = v___y_3532_;
v___y_3516_ = v___y_3534_;
v___y_3517_ = v___y_3535_;
v___y_3518_ = v___y_3536_;
v___y_3519_ = v___y_3537_;
goto v___jp_3511_;
}
else
{
lean_dec(v_val_3557_);
lean_dec_ref(v_e_3496_);
return v___x_3565_;
}
}
else
{
lean_object* v_a_3566_; lean_object* v___x_3568_; uint8_t v_isShared_3569_; uint8_t v_isSharedCheck_3573_; 
lean_dec(v_val_3557_);
lean_dec_ref(v_e_3496_);
v_a_3566_ = lean_ctor_get(v___x_3562_, 0);
v_isSharedCheck_3573_ = !lean_is_exclusive(v___x_3562_);
if (v_isSharedCheck_3573_ == 0)
{
v___x_3568_ = v___x_3562_;
v_isShared_3569_ = v_isSharedCheck_3573_;
goto v_resetjp_3567_;
}
else
{
lean_inc(v_a_3566_);
lean_dec(v___x_3562_);
v___x_3568_ = lean_box(0);
v_isShared_3569_ = v_isSharedCheck_3573_;
goto v_resetjp_3567_;
}
v_resetjp_3567_:
{
lean_object* v___x_3571_; 
if (v_isShared_3569_ == 0)
{
v___x_3571_ = v___x_3568_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v_a_3566_);
v___x_3571_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
return v___x_3571_;
}
}
}
}
else
{
lean_dec(v_val_3557_);
lean_dec_ref(v_e_3496_);
return v___x_3561_;
}
}
}
}
else
{
lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
lean_dec(v_a_3552_);
v___x_3574_ = lean_obj_once(&l_Lean_Meta_Grind_propagateMatchCondUp___closed__1, &l_Lean_Meta_Grind_propagateMatchCondUp___closed__1_once, _init_l_Lean_Meta_Grind_propagateMatchCondUp___closed__1);
v___x_3575_ = l_Lean_indentExpr(v_e_3496_);
v___x_3576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3576_, 0, v___x_3574_);
lean_ctor_set(v___x_3576_, 1, v___x_3575_);
v___x_3577_ = l_Lean_Meta_Sym_getConfig___redArg(v___y_3532_);
if (lean_obj_tag(v___x_3577_) == 0)
{
lean_object* v_a_3578_; uint8_t v_verbose_3579_; 
v_a_3578_ = lean_ctor_get(v___x_3577_, 0);
lean_inc(v_a_3578_);
lean_dec_ref_known(v___x_3577_, 1);
v_verbose_3579_ = lean_ctor_get_uint8(v_a_3578_, 0);
lean_dec(v_a_3578_);
if (v_verbose_3579_ == 0)
{
lean_dec_ref_known(v___x_3576_, 2);
goto v___jp_3508_;
}
else
{
lean_object* v___x_3580_; 
v___x_3580_ = l_Lean_Meta_Sym_reportIssue(v___x_3576_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
if (lean_obj_tag(v___x_3580_) == 0)
{
lean_dec_ref_known(v___x_3580_, 1);
goto v___jp_3508_;
}
else
{
return v___x_3580_;
}
}
}
else
{
lean_object* v_a_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3588_; 
lean_dec_ref_known(v___x_3576_, 2);
v_a_3581_ = lean_ctor_get(v___x_3577_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v___x_3577_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3583_ = v___x_3577_;
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_a_3581_);
lean_dec(v___x_3577_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___x_3586_; 
if (v_isShared_3584_ == 0)
{
v___x_3586_ = v___x_3583_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_a_3581_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
}
}
}
else
{
lean_object* v_a_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3596_; 
lean_dec_ref(v_e_3496_);
v_a_3589_ = lean_ctor_get(v___x_3551_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3551_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3591_ = v___x_3551_;
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_a_3589_);
lean_dec(v___x_3551_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v___x_3594_; 
if (v_isShared_3592_ == 0)
{
v___x_3594_ = v___x_3591_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_a_3589_);
v___x_3594_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
return v___x_3594_;
}
}
}
}
}
}
else
{
lean_object* v_a_3598_; lean_object* v___x_3600_; uint8_t v_isShared_3601_; uint8_t v_isSharedCheck_3605_; 
lean_dec_ref(v_e_3496_);
v_a_3598_ = lean_ctor_get(v___x_3541_, 0);
v_isSharedCheck_3605_ = !lean_is_exclusive(v___x_3541_);
if (v_isSharedCheck_3605_ == 0)
{
v___x_3600_ = v___x_3541_;
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
else
{
lean_inc(v_a_3598_);
lean_dec(v___x_3541_);
v___x_3600_ = lean_box(0);
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
v_resetjp_3599_:
{
lean_object* v___x_3603_; 
if (v_isShared_3601_ == 0)
{
v___x_3603_ = v___x_3600_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v_a_3598_);
v___x_3603_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
return v___x_3603_;
}
}
}
}
else
{
lean_object* v___x_3606_; 
lean_inc_ref(v_e_3496_);
v___x_3606_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied(v_e_3496_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v_a_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3617_; 
v_a_3607_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3617_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3617_ == 0)
{
v___x_3609_ = v___x_3606_;
v_isShared_3610_ = v_isSharedCheck_3617_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_a_3607_);
lean_dec(v___x_3606_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3617_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
uint8_t v___x_3611_; 
v___x_3611_ = lean_unbox(v_a_3607_);
lean_dec(v_a_3607_);
if (v___x_3611_ == 0)
{
lean_object* v___x_3612_; 
lean_del_object(v___x_3609_);
v___x_3612_ = l_Lean_Meta_Grind_tryToProveFalse(v_e_3496_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
return v___x_3612_;
}
else
{
lean_object* v___x_3613_; lean_object* v___x_3615_; 
lean_dec_ref(v_e_3496_);
v___x_3613_ = lean_box(0);
if (v_isShared_3610_ == 0)
{
lean_ctor_set(v___x_3609_, 0, v___x_3613_);
v___x_3615_ = v___x_3609_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3616_; 
v_reuseFailAlloc_3616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3616_, 0, v___x_3613_);
v___x_3615_ = v_reuseFailAlloc_3616_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
return v___x_3615_;
}
}
}
}
else
{
lean_object* v_a_3618_; lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_3625_; 
lean_dec_ref(v_e_3496_);
v_a_3618_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3620_ = v___x_3606_;
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
else
{
lean_inc(v_a_3618_);
lean_dec(v___x_3606_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
lean_object* v___x_3623_; 
if (v_isShared_3621_ == 0)
{
v___x_3623_ = v___x_3620_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v_a_3618_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
return v___x_3623_;
}
}
}
}
}
else
{
lean_object* v_a_3626_; lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3633_; 
lean_dec_ref(v_e_3496_);
v_a_3626_ = lean_ctor_get(v___x_3538_, 0);
v_isSharedCheck_3633_ = !lean_is_exclusive(v___x_3538_);
if (v_isSharedCheck_3633_ == 0)
{
v___x_3628_ = v___x_3538_;
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
else
{
lean_inc(v_a_3626_);
lean_dec(v___x_3538_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v___x_3631_; 
if (v_isShared_3629_ == 0)
{
v___x_3631_ = v___x_3628_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v_a_3626_);
v___x_3631_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
return v___x_3631_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateMatchCondUp___boxed(lean_object* v_e_3641_, lean_object* v_a_3642_, lean_object* v_a_3643_, lean_object* v_a_3644_, lean_object* v_a_3645_, lean_object* v_a_3646_, lean_object* v_a_3647_, lean_object* v_a_3648_, lean_object* v_a_3649_, lean_object* v_a_3650_, lean_object* v_a_3651_, lean_object* v_a_3652_){
_start:
{
lean_object* v_res_3653_; 
v_res_3653_ = l_Lean_Meta_Grind_propagateMatchCondUp(v_e_3641_, v_a_3642_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_, v_a_3647_, v_a_3648_, v_a_3649_, v_a_3650_, v_a_3651_);
lean_dec(v_a_3651_);
lean_dec_ref(v_a_3650_);
lean_dec(v_a_3649_);
lean_dec_ref(v_a_3648_);
lean_dec(v_a_3647_);
lean_dec_ref(v_a_3646_);
lean_dec(v_a_3645_);
lean_dec_ref(v_a_3644_);
lean_dec(v_a_3643_);
lean_dec(v_a_3642_);
return v_res_3653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_propagateMatchCondUp___regBuiltin_Lean_Meta_Grind_propagateMatchCondUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_MatchCond_1804808425____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; 
v___x_3655_ = ((lean_object*)(l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__4));
v___x_3656_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateMatchCondUp___boxed), 12, 0);
v___x_3657_ = l_Lean_Meta_Grind_registerBuiltinUpwardPropagator(v___x_3655_, v___x_3656_);
return v___x_3657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_propagateMatchCondUp___regBuiltin_Lean_Meta_Grind_propagateMatchCondUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_MatchCond_1804808425____hygCtx___hyg_9____boxed(lean_object* v_a_3658_){
_start:
{
lean_object* v_res_3659_; 
v_res_3659_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_propagateMatchCondUp___regBuiltin_Lean_Meta_Grind_propagateMatchCondUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_MatchCond_1804808425____hygCtx___hyg_9_();
return v_res_3659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateMatchCondDown(lean_object* v_e_3660_, lean_object* v_a_3661_, lean_object* v_a_3662_, lean_object* v_a_3663_, lean_object* v_a_3664_, lean_object* v_a_3665_, lean_object* v_a_3666_, lean_object* v_a_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_, lean_object* v_a_3670_){
_start:
{
lean_object* v___x_3672_; 
lean_inc_ref(v_e_3660_);
v___x_3672_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_3660_, v_a_3661_, v_a_3665_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_);
if (lean_obj_tag(v___x_3672_) == 0)
{
lean_object* v_a_3673_; lean_object* v___x_3675_; uint8_t v_isShared_3676_; uint8_t v_isSharedCheck_3702_; 
v_a_3673_ = lean_ctor_get(v___x_3672_, 0);
v_isSharedCheck_3702_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3702_ == 0)
{
v___x_3675_ = v___x_3672_;
v_isShared_3676_ = v_isSharedCheck_3702_;
goto v_resetjp_3674_;
}
else
{
lean_inc(v_a_3673_);
lean_dec(v___x_3672_);
v___x_3675_ = lean_box(0);
v_isShared_3676_ = v_isSharedCheck_3702_;
goto v_resetjp_3674_;
}
v_resetjp_3674_:
{
uint8_t v___x_3677_; 
v___x_3677_ = lean_unbox(v_a_3673_);
lean_dec(v_a_3673_);
if (v___x_3677_ == 0)
{
lean_object* v___x_3678_; lean_object* v___x_3680_; 
lean_dec_ref(v_e_3660_);
v___x_3678_ = lean_box(0);
if (v_isShared_3676_ == 0)
{
lean_ctor_set(v___x_3675_, 0, v___x_3678_);
v___x_3680_ = v___x_3675_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v___x_3678_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
return v___x_3680_;
}
}
else
{
lean_object* v___x_3682_; 
lean_del_object(v___x_3675_);
lean_inc_ref(v_e_3660_);
v___x_3682_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_isSatisfied(v_e_3660_, v_a_3661_, v_a_3662_, v_a_3663_, v_a_3664_, v_a_3665_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_);
if (lean_obj_tag(v___x_3682_) == 0)
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3693_; 
v_a_3683_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3693_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3693_ == 0)
{
v___x_3685_ = v___x_3682_;
v_isShared_3686_ = v_isSharedCheck_3693_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3682_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3693_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
uint8_t v___x_3687_; 
v___x_3687_ = lean_unbox(v_a_3683_);
lean_dec(v_a_3683_);
if (v___x_3687_ == 0)
{
lean_object* v___x_3688_; 
lean_del_object(v___x_3685_);
v___x_3688_ = l_Lean_Meta_Grind_tryToProveFalse(v_e_3660_, v_a_3661_, v_a_3662_, v_a_3663_, v_a_3664_, v_a_3665_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_);
return v___x_3688_;
}
else
{
lean_object* v___x_3689_; lean_object* v___x_3691_; 
lean_dec_ref(v_e_3660_);
v___x_3689_ = lean_box(0);
if (v_isShared_3686_ == 0)
{
lean_ctor_set(v___x_3685_, 0, v___x_3689_);
v___x_3691_ = v___x_3685_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v___x_3689_);
v___x_3691_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
return v___x_3691_;
}
}
}
}
else
{
lean_object* v_a_3694_; lean_object* v___x_3696_; uint8_t v_isShared_3697_; uint8_t v_isSharedCheck_3701_; 
lean_dec_ref(v_e_3660_);
v_a_3694_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3701_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3701_ == 0)
{
v___x_3696_ = v___x_3682_;
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
else
{
lean_inc(v_a_3694_);
lean_dec(v___x_3682_);
v___x_3696_ = lean_box(0);
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
v_resetjp_3695_:
{
lean_object* v___x_3699_; 
if (v_isShared_3697_ == 0)
{
v___x_3699_ = v___x_3696_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3700_; 
v_reuseFailAlloc_3700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3700_, 0, v_a_3694_);
v___x_3699_ = v_reuseFailAlloc_3700_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
return v___x_3699_;
}
}
}
}
}
}
else
{
lean_object* v_a_3703_; lean_object* v___x_3705_; uint8_t v_isShared_3706_; uint8_t v_isSharedCheck_3710_; 
lean_dec_ref(v_e_3660_);
v_a_3703_ = lean_ctor_get(v___x_3672_, 0);
v_isSharedCheck_3710_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3710_ == 0)
{
v___x_3705_ = v___x_3672_;
v_isShared_3706_ = v_isSharedCheck_3710_;
goto v_resetjp_3704_;
}
else
{
lean_inc(v_a_3703_);
lean_dec(v___x_3672_);
v___x_3705_ = lean_box(0);
v_isShared_3706_ = v_isSharedCheck_3710_;
goto v_resetjp_3704_;
}
v_resetjp_3704_:
{
lean_object* v___x_3708_; 
if (v_isShared_3706_ == 0)
{
v___x_3708_ = v___x_3705_;
goto v_reusejp_3707_;
}
else
{
lean_object* v_reuseFailAlloc_3709_; 
v_reuseFailAlloc_3709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3709_, 0, v_a_3703_);
v___x_3708_ = v_reuseFailAlloc_3709_;
goto v_reusejp_3707_;
}
v_reusejp_3707_:
{
return v___x_3708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateMatchCondDown___boxed(lean_object* v_e_3711_, lean_object* v_a_3712_, lean_object* v_a_3713_, lean_object* v_a_3714_, lean_object* v_a_3715_, lean_object* v_a_3716_, lean_object* v_a_3717_, lean_object* v_a_3718_, lean_object* v_a_3719_, lean_object* v_a_3720_, lean_object* v_a_3721_, lean_object* v_a_3722_){
_start:
{
lean_object* v_res_3723_; 
v_res_3723_ = l_Lean_Meta_Grind_propagateMatchCondDown(v_e_3711_, v_a_3712_, v_a_3713_, v_a_3714_, v_a_3715_, v_a_3716_, v_a_3717_, v_a_3718_, v_a_3719_, v_a_3720_, v_a_3721_);
lean_dec(v_a_3721_);
lean_dec_ref(v_a_3720_);
lean_dec(v_a_3719_);
lean_dec_ref(v_a_3718_);
lean_dec(v_a_3717_);
lean_dec_ref(v_a_3716_);
lean_dec(v_a_3715_);
lean_dec_ref(v_a_3714_);
lean_dec(v_a_3713_);
lean_dec(v_a_3712_);
return v_res_3723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_propagateMatchCondDown___regBuiltin_Lean_Meta_Grind_propagateMatchCondDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_MatchCond_2992396906____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; 
v___x_3725_ = ((lean_object*)(l_Lean_Meta_Grind_collectMatchCondLhssAndAbstract___closed__4));
v___x_3726_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_propagateMatchCondDown___boxed), 12, 0);
v___x_3727_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_3725_, v___x_3726_);
return v___x_3727_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_propagateMatchCondDown___regBuiltin_Lean_Meta_Grind_propagateMatchCondDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_MatchCond_2992396906____hygCtx___hyg_9____boxed(lean_object* v_a_3728_){
_start:
{
lean_object* v_res_3729_; 
v_res_3729_ = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_propagateMatchCondDown___regBuiltin_Lean_Meta_Grind_propagateMatchCondDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_MatchCond_2992396906____hygCtx___hyg_9_();
return v_res_3729_;
}
}
lean_object* runtime_initialize_Init_Grind(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ProveEq(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_MatchCond(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Contradiction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ProveEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_propagateMatchCondUp___regBuiltin_Lean_Meta_Grind_propagateMatchCondUp_declare__1_00___x40_Lean_Meta_Tactic_Grind_MatchCond_1804808425____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_MatchCond_0__Lean_Meta_Grind_propagateMatchCondDown___regBuiltin_Lean_Meta_Grind_propagateMatchCondDown_declare__1_00___x40_Lean_Meta_Tactic_Grind_MatchCond_2992396906____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_MatchCond(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_ProveEq(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_MatchCond(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Contradiction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_ProveEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_MatchCond(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_MatchCond(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_MatchCond(builtin);
}
#ifdef __cplusplus
}
#endif
