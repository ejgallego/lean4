// Lean compiler output
// Module: Lean.Meta.Tactic.SplitIf
// Imports: public import Lean.Meta.Tactic.Cases public import Lean.Meta.Tactic.Simp.Rewrite import Lean.Meta.Tactic.Simp.Main
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_num_indices(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_mkPtrSet___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isExplicit(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isMatcherAppCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
lean_object* l_Lean_Expr_getBoundedAppFn(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isIte(lean_object*);
uint8_t l_Lean_Expr_isDIte(lean_object*);
lean_object* l_Lean_Meta_Simp_normalizeDecisionCondition_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqMP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_byCasesDec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
extern lean_object* l_Lean_Meta_Simp_neutralConfig;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_DiscrTree_empty___redArg();
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_Simp_normalizeBoolCondition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkEqMPR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* lean_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Simprocs_addCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpTheorems_addConst(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpTarget(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instBEqPtr___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_instHashablePtr___redArg___lam__0___boxed(lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_SplitKind_considerIte(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_considerIte___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_SplitKind_considerMatch(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_considerMatch___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__1_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqPtr___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashablePtr___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__0_value),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__0_value)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "split"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 90, 54, 167, 41, 130, 106, 252)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(146, 27, 182, 221, 54, 36, 194, 80)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "candidate:"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_findSplit_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_findSplit_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__4_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__5_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_normalizeBoolCondition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_normalizeBoolCondition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__4_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__9_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__11;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "decEq"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__4_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__13_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__12_value),LEAN_SCALAR_PTR_LITERAL(88, 15, 162, 205, 37, 243, 1, 31)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__13_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "backward"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 7, 10, 91, 49, 15, 80, 52)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 103, .m_capacity = 103, .m_length = 102, .m_data = "use the old semantics for the `split` tactic where nested `if-then-else` terms could be simplified too"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(102, 141, 87, 76, 47, 100, 236, 116)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_split;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1(lean_object*);
static lean_once_cell_t l_Lean_Meta_SplitIf_getSimpContext___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__0;
static lean_once_cell_t l_Lean_Meta_SplitIf_getSimpContext___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__1;
static lean_once_cell_t l_Lean_Meta_SplitIf_getSimpContext___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__2;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ite_eq_left"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__3 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__3_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(224, 237, 116, 5, 155, 59, 56, 160)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__4 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__4_value;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ite_eq_right"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__5 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__5_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 39, 8, 237, 213, 91, 107, 69)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__6 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__6_value;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dite_eq_left"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__7 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__7_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__7_value),LEAN_SCALAR_PTR_LITERAL(239, 169, 41, 13, 119, 67, 249, 86)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__8 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__8_value;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "dite_eq_right"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__9 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__9_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__9_value),LEAN_SCALAR_PTR_LITERAL(138, 158, 15, 234, 166, 144, 231, 97)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__10 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__10_value;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "cond_eq_left"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__11 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__11_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__4_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__12_value_aux_0),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__11_value),LEAN_SCALAR_PTR_LITERAL(130, 224, 222, 133, 111, 178, 59, 1)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__12 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__12_value;
static const lean_string_object l_Lean_Meta_SplitIf_getSimpContext___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "cond_eq_right"};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__13 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__13_value;
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__4_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_SplitIf_getSimpContext___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__14_value_aux_0),((lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__13_value),LEAN_SCALAR_PTR_LITERAL(113, 29, 81, 89, 86, 141, 114, 136)}};
static const lean_object* l_Lean_Meta_SplitIf_getSimpContext___closed__14 = (const lean_object*)&l_Lean_Meta_SplitIf_getSimpContext___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_getSimpContext(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_getSimpContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "not_not_intro"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 174, 41, 152, 198, 172, 7, 80)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "of_decide_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 143, 142, 104, 169, 34, 63, 25)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "splitIf"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(181, 95, 169, 53, 171, 116, 20, 182)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "discharge\? "};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "<not-available>"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__11_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ite_cond_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__1_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 77, 228, 243, 158, 228, 162)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "cond_cond_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__4_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 185, 30, 161, 167, 124, 247, 108)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mpr_prop"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 177, 76, 157, 211, 15, 217, 219)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mpr_not"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__4_value),LEAN_SCALAR_PTR_LITERAL(121, 56, 250, 51, 9, 123, 141, 181)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "dite_cond_congr"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__7_value),LEAN_SCALAR_PTR_LITERAL(124, 27, 93, 224, 42, 131, 56, 201)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__1_value;
static const lean_array_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__4_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__5_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__6_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SplitIf"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__7_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(76, 221, 255, 40, 254, 93, 36, 145)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(77, 67, 39, 96, 166, 188, 81, 166)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__10_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(56, 202, 4, 90, 23, 96, 207, 136)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__11_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(148, 235, 194, 225, 124, 161, 64, 247)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__12_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(167, 120, 249, 182, 103, 12, 98, 131)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "reduceIte'"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__14_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(244, 195, 180, 159, 75, 12, 135, 86)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__6_value),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__16_value;
static const lean_array_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__17_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "reduceDIte'"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__18_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__18_value),LEAN_SCALAR_PTR_LITERAL(167, 195, 231, 206, 69, 191, 167, 198)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__20_value;
static const lean_array_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__21_value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "reduceCond'"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__13_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__22_value),LEAN_SCALAR_PTR_LITERAL(249, 118, 175, 137, 178, 122, 48, 209)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__23_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "splitting on "};
static const lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "could not find if to split:"};
static const lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_simpIfTarget_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_simpIfTarget_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_simpIfTarget_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_simpIfTarget_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_simpIfTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__0;
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__1;
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__2;
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__3;
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__4;
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__5;
static const lean_string_object l_Lean_Meta_simpIfTarget___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Meta.Tactic.SplitIf"};
static const lean_object* l_Lean_Meta_simpIfTarget___closed__6 = (const lean_object*)&l_Lean_Meta_simpIfTarget___closed__6_value;
static const lean_string_object l_Lean_Meta_simpIfTarget___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.simpIfTarget"};
static const lean_object* l_Lean_Meta_simpIfTarget___closed__7 = (const lean_object*)&l_Lean_Meta_simpIfTarget___closed__7_value;
static const lean_string_object l_Lean_Meta_simpIfTarget___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Meta_simpIfTarget___closed__8 = (const lean_object*)&l_Lean_Meta_simpIfTarget___closed__8_value;
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__9;
static const lean_array_object l_Lean_Meta_simpIfTarget___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_simpIfTarget___closed__10 = (const lean_object*)&l_Lean_Meta_simpIfTarget___closed__10_value;
static lean_once_cell_t l_Lean_Meta_simpIfTarget___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfTarget___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfTarget(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_simpIfLocalDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.simpIfLocalDecl"};
static const lean_object* l_Lean_Meta_simpIfLocalDecl___closed__0 = (const lean_object*)&l_Lean_Meta_simpIfLocalDecl___closed__0_value;
static lean_once_cell_t l_Lean_Meta_simpIfLocalDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfLocalDecl___closed__1;
static lean_once_cell_t l_Lean_Meta_simpIfLocalDecl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpIfLocalDecl___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfLocalDecl(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "failure"};
static const lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 90, 54, 167, 41, 130, 106, 252)}};
static const lean_ctor_object l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 82, 27, 41, 121, 237, 120, 228)}};
static const lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2;
static const lean_string_object l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "`split` tactic failed to simplify target using new hypotheses Goals:\n"};
static const lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4;
static const lean_string_object l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__12_value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(81, 137, 76, 163, 76, 115, 6, 53)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(60, 24, 105, 171, 156, 89, 145, 146)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(221, 224, 164, 228, 171, 225, 60, 201)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(181, 248, 17, 89, 207, 85, 0, 88)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(140, 203, 248, 13, 200, 236, 3, 225)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(79, 37, 36, 7, 71, 199, 210, 30)}};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lean_Meta_SplitKind_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Meta_SplitKind_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lean_Meta_SplitKind_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___redArg(lean_object* v_ite_22_){
_start:
{
lean_inc(v_ite_22_);
return v_ite_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___redArg___boxed(lean_object* v_ite_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Meta_SplitKind_ite_elim___redArg(v_ite_23_);
lean_dec(v_ite_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_ite_28_){
_start:
{
lean_inc(v_ite_28_);
return v_ite_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_ite_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_ite_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lean_Meta_SplitKind_ite_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_ite_32_);
lean_dec(v_ite_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___redArg(lean_object* v_match_35_){
_start:
{
lean_inc(v_match_35_);
return v_match_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___redArg___boxed(lean_object* v_match_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_Meta_SplitKind_match_elim___redArg(v_match_36_);
lean_dec(v_match_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_match_41_){
_start:
{
lean_inc(v_match_41_);
return v_match_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_match_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_match_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lean_Meta_SplitKind_match_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_match_45_);
lean_dec(v_match_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___redArg(lean_object* v_both_48_){
_start:
{
lean_inc(v_both_48_);
return v_both_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___redArg___boxed(lean_object* v_both_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Meta_SplitKind_both_elim___redArg(v_both_49_);
lean_dec(v_both_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_both_54_){
_start:
{
lean_inc(v_both_54_);
return v_both_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_both_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_both_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l_Lean_Meta_SplitKind_both_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_both_58_);
lean_dec(v_both_58_);
return v_res_60_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_SplitKind_considerIte(uint8_t v_x_61_){
_start:
{
switch(v_x_61_)
{
case 0:
{
uint8_t v___x_62_; 
v___x_62_ = 1;
return v___x_62_;
}
case 2:
{
uint8_t v___x_63_; 
v___x_63_ = 1;
return v___x_63_;
}
default: 
{
uint8_t v___x_64_; 
v___x_64_ = 0;
return v___x_64_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_considerIte___boxed(lean_object* v_x_65_){
_start:
{
uint8_t v_x_22__boxed_66_; uint8_t v_res_67_; lean_object* v_r_68_; 
v_x_22__boxed_66_ = lean_unbox(v_x_65_);
v_res_67_ = l_Lean_Meta_SplitKind_considerIte(v_x_22__boxed_66_);
v_r_68_ = lean_box(v_res_67_);
return v_r_68_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_SplitKind_considerMatch(uint8_t v_x_69_){
_start:
{
switch(v_x_69_)
{
case 1:
{
uint8_t v___x_70_; 
v___x_70_ = 1;
return v___x_70_;
}
case 2:
{
uint8_t v___x_71_; 
v___x_71_ = 1;
return v___x_71_;
}
default: 
{
uint8_t v___x_72_; 
v___x_72_ = 0;
return v___x_72_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitKind_considerMatch___boxed(lean_object* v_x_73_){
_start:
{
uint8_t v_x_22__boxed_74_; uint8_t v_res_75_; lean_object* v_r_76_; 
v_x_22__boxed_74_ = lean_unbox(v_x_73_);
v_res_75_ = l_Lean_Meta_SplitKind_considerMatch(v_x_22__boxed_74_);
v_r_76_ = lean_box(v_res_75_);
return v_r_76_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg(lean_object* v_a_77_, lean_object* v_x_78_){
_start:
{
if (lean_obj_tag(v_x_78_) == 0)
{
uint8_t v___x_79_; 
v___x_79_ = 0;
return v___x_79_;
}
else
{
lean_object* v_key_80_; lean_object* v_tail_81_; uint8_t v___x_82_; 
v_key_80_ = lean_ctor_get(v_x_78_, 0);
v_tail_81_ = lean_ctor_get(v_x_78_, 2);
v___x_82_ = lean_expr_eqv(v_key_80_, v_a_77_);
if (v___x_82_ == 0)
{
v_x_78_ = v_tail_81_;
goto _start;
}
else
{
return v___x_82_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_84_, lean_object* v_x_85_){
_start:
{
uint8_t v_res_86_; lean_object* v_r_87_; 
v_res_86_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg(v_a_84_, v_x_85_);
lean_dec(v_x_85_);
lean_dec_ref(v_a_84_);
v_r_87_ = lean_box(v_res_86_);
return v_r_87_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg(lean_object* v_m_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_buckets_90_; lean_object* v___x_91_; uint64_t v___x_92_; uint64_t v___x_93_; uint64_t v___x_94_; uint64_t v_fold_95_; uint64_t v___x_96_; uint64_t v___x_97_; uint64_t v___x_98_; size_t v___x_99_; size_t v___x_100_; size_t v___x_101_; size_t v___x_102_; size_t v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v_buckets_90_ = lean_ctor_get(v_m_88_, 1);
v___x_91_ = lean_array_get_size(v_buckets_90_);
v___x_92_ = l_Lean_Expr_hash(v_a_89_);
v___x_93_ = 32ULL;
v___x_94_ = lean_uint64_shift_right(v___x_92_, v___x_93_);
v_fold_95_ = lean_uint64_xor(v___x_92_, v___x_94_);
v___x_96_ = 16ULL;
v___x_97_ = lean_uint64_shift_right(v_fold_95_, v___x_96_);
v___x_98_ = lean_uint64_xor(v_fold_95_, v___x_97_);
v___x_99_ = lean_uint64_to_usize(v___x_98_);
v___x_100_ = lean_usize_of_nat(v___x_91_);
v___x_101_ = ((size_t)1ULL);
v___x_102_ = lean_usize_sub(v___x_100_, v___x_101_);
v___x_103_ = lean_usize_land(v___x_99_, v___x_102_);
v___x_104_ = lean_array_uget_borrowed(v_buckets_90_, v___x_103_);
v___x_105_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg(v_a_89_, v___x_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg___boxed(lean_object* v_m_106_, lean_object* v_a_107_){
_start:
{
uint8_t v_res_108_; lean_object* v_r_109_; 
v_res_108_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg(v_m_106_, v_a_107_);
lean_dec_ref(v_a_107_);
lean_dec_ref(v_m_106_);
v_r_109_ = lean_box(v_res_108_);
return v_r_109_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg(lean_object* v_upperBound_118_, lean_object* v_args_119_, lean_object* v_a_120_, lean_object* v_b_121_){
_start:
{
uint8_t v___x_122_; 
v___x_122_ = lean_nat_dec_lt(v_a_120_, v_upperBound_118_);
if (v___x_122_ == 0)
{
lean_dec(v_a_120_);
lean_inc_ref(v_b_121_);
return v_b_121_;
}
else
{
lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_123_ = l_Lean_instInhabitedExpr;
v___x_124_ = lean_array_get_borrowed(v___x_123_, v_args_119_, v_a_120_);
v___x_125_ = l_Lean_Expr_hasLooseBVars(v___x_124_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_126_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0));
v___x_127_ = lean_unsigned_to_nat(1u);
v___x_128_ = lean_nat_add(v_a_120_, v___x_127_);
lean_dec(v_a_120_);
v_a_120_ = v___x_128_;
v_b_121_ = v___x_126_;
goto _start;
}
else
{
lean_object* v___x_130_; 
lean_dec(v_a_120_);
v___x_130_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__2));
return v___x_130_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___boxed(lean_object* v_upperBound_131_, lean_object* v_args_132_, lean_object* v_a_133_, lean_object* v_b_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg(v_upperBound_131_, v_args_132_, v_a_133_, v_b_134_);
lean_dec_ref(v_b_134_);
lean_dec_ref(v_args_132_);
lean_dec(v_upperBound_131_);
return v_res_135_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0(void){
_start:
{
lean_object* v___x_136_; lean_object* v_dummy_137_; 
v___x_136_ = lean_box(0);
v_dummy_137_ = l_Lean_Expr_sort___override(v___x_136_);
return v_dummy_137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f(lean_object* v_env_147_, lean_object* v_ctx_148_, lean_object* v_e_149_){
_start:
{
lean_object* v_exceptionSet_150_; uint8_t v_kind_151_; lean_object* v_e_153_; uint8_t v___x_200_; 
v_exceptionSet_150_ = lean_ctor_get(v_ctx_148_, 0);
v_kind_151_ = lean_ctor_get_uint8(v_ctx_148_, sizeof(void*)*1);
v___x_200_ = l_Lean_Meta_SplitKind_considerIte(v_kind_151_);
if (v___x_200_ == 0)
{
goto v___jp_157_;
}
else
{
lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_201_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4));
v___x_202_ = l_Lean_Expr_isAppOf(v_e_149_, v___x_201_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; uint8_t v___x_204_; 
v___x_203_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__6));
v___x_204_ = l_Lean_Expr_isAppOf(v_e_149_, v___x_203_);
if (v___x_204_ == 0)
{
goto v___jp_180_;
}
else
{
goto v___jp_191_;
}
}
else
{
goto v___jp_191_;
}
}
v___jp_152_:
{
uint8_t v___x_154_; 
v___x_154_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg(v_exceptionSet_150_, v_e_153_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; 
v___x_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_155_, 0, v_e_153_);
return v___x_155_;
}
else
{
lean_object* v___x_156_; 
lean_dec_ref(v_e_153_);
v___x_156_ = lean_box(0);
return v___x_156_;
}
}
v___jp_157_:
{
uint8_t v___x_158_; 
v___x_158_ = l_Lean_Meta_SplitKind_considerMatch(v_kind_151_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; 
lean_dec_ref(v_e_149_);
lean_dec_ref(v_env_147_);
v___x_159_ = lean_box(0);
return v___x_159_;
}
else
{
lean_object* v___x_160_; 
v___x_160_ = l_Lean_Meta_isMatcherAppCore_x3f(v_env_147_, v_e_149_);
if (lean_obj_tag(v___x_160_) == 1)
{
lean_object* v_val_161_; lean_object* v_numDiscrs_162_; lean_object* v_nargs_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v_dummy_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v_args_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v_fst_173_; 
v_val_161_ = lean_ctor_get(v___x_160_, 0);
lean_inc(v_val_161_);
lean_dec_ref_known(v___x_160_, 1);
v_numDiscrs_162_ = lean_ctor_get(v_val_161_, 1);
v_nargs_163_ = l_Lean_Expr_getAppNumArgs(v_e_149_);
v___x_164_ = l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(v_val_161_);
v___x_165_ = lean_nat_add(v___x_164_, v_numDiscrs_162_);
v_dummy_166_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0);
lean_inc(v_nargs_163_);
v___x_167_ = lean_mk_array(v_nargs_163_, v_dummy_166_);
v___x_168_ = lean_unsigned_to_nat(1u);
v___x_169_ = lean_nat_sub(v_nargs_163_, v___x_168_);
lean_dec(v_nargs_163_);
lean_inc_ref(v_e_149_);
v_args_170_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_149_, v___x_167_, v___x_169_);
v___x_171_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0));
v___x_172_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg(v___x_165_, v_args_170_, v___x_164_, v___x_171_);
lean_dec(v___x_165_);
v_fst_173_ = lean_ctor_get(v___x_172_, 0);
lean_inc(v_fst_173_);
lean_dec_ref(v___x_172_);
if (lean_obj_tag(v_fst_173_) == 0)
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_174_ = lean_array_get_size(v_args_170_);
lean_dec_ref(v_args_170_);
v___x_175_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_161_);
lean_dec(v_val_161_);
v___x_176_ = lean_nat_sub(v___x_174_, v___x_175_);
lean_dec(v___x_175_);
v___x_177_ = l_Lean_Expr_getBoundedAppFn(v___x_176_, v_e_149_);
lean_dec_ref(v_e_149_);
v_e_153_ = v___x_177_;
goto v___jp_152_;
}
else
{
lean_object* v_val_178_; 
lean_dec_ref(v_args_170_);
lean_dec(v_val_161_);
lean_dec_ref(v_e_149_);
v_val_178_ = lean_ctor_get(v_fst_173_, 0);
lean_inc(v_val_178_);
lean_dec_ref_known(v_fst_173_, 1);
return v_val_178_;
}
}
else
{
lean_object* v___x_179_; 
lean_dec(v___x_160_);
lean_dec_ref(v_e_149_);
v___x_179_ = lean_box(0);
return v___x_179_;
}
}
}
v___jp_180_:
{
lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_181_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2));
v___x_182_ = l_Lean_Expr_isAppOf(v_e_149_, v___x_181_);
if (v___x_182_ == 0)
{
goto v___jp_157_;
}
else
{
lean_object* v_numArgs_183_; lean_object* v___x_184_; uint8_t v___x_185_; 
v_numArgs_183_ = l_Lean_Expr_getAppNumArgs(v_e_149_);
v___x_184_ = lean_unsigned_to_nat(4u);
v___x_185_ = lean_nat_dec_le(v___x_184_, v_numArgs_183_);
if (v___x_185_ == 0)
{
lean_dec(v_numArgs_183_);
goto v___jp_157_;
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_186_ = lean_unsigned_to_nat(2u);
v___x_187_ = l_Lean_Expr_getRevArg_x21(v_e_149_, v___x_186_);
v___x_188_ = l_Lean_Expr_hasLooseBVars(v___x_187_);
lean_dec_ref(v___x_187_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; lean_object* v___x_190_; 
lean_dec_ref(v_env_147_);
v___x_189_ = lean_nat_sub(v_numArgs_183_, v___x_184_);
lean_dec(v_numArgs_183_);
v___x_190_ = l_Lean_Expr_getBoundedAppFn(v___x_189_, v_e_149_);
lean_dec_ref(v_e_149_);
v_e_153_ = v___x_190_;
goto v___jp_152_;
}
else
{
lean_dec(v_numArgs_183_);
goto v___jp_157_;
}
}
}
}
v___jp_191_:
{
lean_object* v_numArgs_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v_numArgs_192_ = l_Lean_Expr_getAppNumArgs(v_e_149_);
v___x_193_ = lean_unsigned_to_nat(5u);
v___x_194_ = lean_nat_dec_le(v___x_193_, v_numArgs_192_);
if (v___x_194_ == 0)
{
lean_dec(v_numArgs_192_);
goto v___jp_180_;
}
else
{
lean_object* v___x_195_; lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_195_ = lean_unsigned_to_nat(3u);
v___x_196_ = l_Lean_Expr_getRevArg_x21(v_e_149_, v___x_195_);
v___x_197_ = l_Lean_Expr_hasLooseBVars(v___x_196_);
lean_dec_ref(v___x_196_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; 
lean_dec_ref(v_env_147_);
v___x_198_ = lean_nat_sub(v_numArgs_192_, v___x_193_);
lean_dec(v_numArgs_192_);
v___x_199_ = l_Lean_Expr_getBoundedAppFn(v___x_198_, v_e_149_);
lean_dec_ref(v_e_149_);
v_e_153_ = v___x_199_;
goto v___jp_152_;
}
else
{
lean_dec(v_numArgs_192_);
goto v___jp_180_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___boxed(lean_object* v_env_205_, lean_object* v_ctx_206_, lean_object* v_e_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f(v_env_205_, v_ctx_206_, v_e_207_);
lean_dec_ref(v_ctx_206_);
return v_res_208_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0(lean_object* v_00_u03b2_209_, lean_object* v_m_210_, lean_object* v_a_211_){
_start:
{
uint8_t v___x_212_; 
v___x_212_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___redArg(v_m_210_, v_a_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0___boxed(lean_object* v_00_u03b2_213_, lean_object* v_m_214_, lean_object* v_a_215_){
_start:
{
uint8_t v_res_216_; lean_object* v_r_217_; 
v_res_216_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0(v_00_u03b2_213_, v_m_214_, v_a_215_);
lean_dec_ref(v_a_215_);
lean_dec_ref(v_m_214_);
v_r_217_ = lean_box(v_res_216_);
return v_r_217_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1(lean_object* v_upperBound_218_, lean_object* v_args_219_, lean_object* v_inst_220_, lean_object* v_R_221_, lean_object* v_a_222_, lean_object* v_b_223_, lean_object* v_c_224_){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg(v_upperBound_218_, v_args_219_, v_a_222_, v_b_223_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___boxed(lean_object* v_upperBound_226_, lean_object* v_args_227_, lean_object* v_inst_228_, lean_object* v_R_229_, lean_object* v_a_230_, lean_object* v_b_231_, lean_object* v_c_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1(v_upperBound_226_, v_args_227_, v_inst_228_, v_R_229_, v_a_230_, v_b_231_, v_c_232_);
lean_dec_ref(v_b_231_);
lean_dec_ref(v_args_227_);
lean_dec(v_upperBound_226_);
return v_res_233_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0(lean_object* v_00_u03b2_234_, lean_object* v_a_235_, lean_object* v_x_236_){
_start:
{
uint8_t v___x_237_; 
v___x_237_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___redArg(v_a_235_, v_x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_238_, lean_object* v_a_239_, lean_object* v_x_240_){
_start:
{
uint8_t v_res_241_; lean_object* v_r_242_; 
v_res_241_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__0_spec__0(v_00_u03b2_238_, v_a_239_, v_x_240_);
lean_dec(v_x_240_);
lean_dec_ref(v_a_239_);
v_r_242_ = lean_box(v_res_241_);
return v_r_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg(lean_object* v_e_247_, lean_object* v_a_248_){
_start:
{
lean_object* v___f_250_; lean_object* v___f_251_; uint8_t v___x_252_; 
v___f_250_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__0));
v___f_251_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__1));
lean_inc_ref(v_e_247_);
v___x_252_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_250_, v___f_251_, v_a_248_, v_e_247_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_253_ = lean_box(0);
v___x_254_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___f_250_, v___f_251_, v_a_248_, v_e_247_, v___x_253_);
v___x_255_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__2));
v___x_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
lean_ctor_set(v___x_256_, 1, v___x_254_);
v___x_257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
return v___x_257_;
}
else
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
lean_dec_ref(v_e_247_);
v___x_258_ = lean_box(0);
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
lean_ctor_set(v___x_259_, 1, v_a_248_);
v___x_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
return v___x_260_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___redArg___boxed(lean_object* v_e_261_, lean_object* v_a_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lean_Meta_FindSplitImpl_checkVisited___redArg(v_e_261_, v_a_262_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited(lean_object* v_e_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v___f_273_; lean_object* v___f_274_; uint8_t v___x_275_; 
v___f_273_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__0));
v___f_274_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__1));
lean_inc_ref(v_e_265_);
v___x_275_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_273_, v___f_274_, v_a_267_, v_e_265_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_276_ = lean_box(0);
v___x_277_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___f_273_, v___f_274_, v_a_267_, v_e_265_, v___x_276_);
v___x_278_ = ((lean_object*)(l_Lean_Meta_FindSplitImpl_checkVisited___redArg___closed__2));
v___x_279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
lean_ctor_set(v___x_279_, 1, v___x_277_);
v___x_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
return v___x_280_;
}
else
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
lean_dec_ref(v_e_265_);
v___x_281_ = lean_box(0);
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
lean_ctor_set(v___x_282_, 1, v_a_267_);
v___x_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
return v___x_283_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_checkVisited___boxed(lean_object* v_e_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_Meta_FindSplitImpl_checkVisited(v_e_284_, v_a_285_, v_a_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_);
lean_dec(v_a_290_);
lean_dec_ref(v_a_289_);
lean_dec(v_a_288_);
lean_dec_ref(v_a_287_);
lean_dec_ref(v_a_285_);
return v_res_292_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(lean_object* v_a_293_, lean_object* v_x_294_){
_start:
{
if (lean_obj_tag(v_x_294_) == 0)
{
uint8_t v___x_295_; 
v___x_295_ = 0;
return v___x_295_;
}
else
{
lean_object* v_key_296_; lean_object* v_tail_297_; size_t v___x_298_; size_t v___x_299_; uint8_t v___x_300_; 
v_key_296_ = lean_ctor_get(v_x_294_, 0);
v_tail_297_ = lean_ctor_get(v_x_294_, 2);
v___x_298_ = lean_ptr_addr(v_key_296_);
v___x_299_ = lean_ptr_addr(v_a_293_);
v___x_300_ = lean_usize_dec_eq(v___x_298_, v___x_299_);
if (v___x_300_ == 0)
{
v_x_294_ = v_tail_297_;
goto _start;
}
else
{
return v___x_300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg___boxed(lean_object* v_a_302_, lean_object* v_x_303_){
_start:
{
uint8_t v_res_304_; lean_object* v_r_305_; 
v_res_304_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(v_a_302_, v_x_303_);
lean_dec(v_x_303_);
lean_dec_ref(v_a_302_);
v_r_305_ = lean_box(v_res_304_);
return v_r_305_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7___redArg(lean_object* v_x_306_, lean_object* v_x_307_){
_start:
{
if (lean_obj_tag(v_x_307_) == 0)
{
return v_x_306_;
}
else
{
lean_object* v_key_308_; lean_object* v_value_309_; lean_object* v_tail_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_336_; 
v_key_308_ = lean_ctor_get(v_x_307_, 0);
v_value_309_ = lean_ctor_get(v_x_307_, 1);
v_tail_310_ = lean_ctor_get(v_x_307_, 2);
v_isSharedCheck_336_ = !lean_is_exclusive(v_x_307_);
if (v_isSharedCheck_336_ == 0)
{
v___x_312_ = v_x_307_;
v_isShared_313_ = v_isSharedCheck_336_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_tail_310_);
lean_inc(v_value_309_);
lean_inc(v_key_308_);
lean_dec(v_x_307_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_336_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_314_; size_t v___x_315_; uint64_t v___x_316_; uint64_t v___x_317_; uint64_t v___x_318_; uint64_t v___x_319_; uint64_t v___x_320_; uint64_t v_fold_321_; uint64_t v___x_322_; uint64_t v___x_323_; uint64_t v___x_324_; size_t v___x_325_; size_t v___x_326_; size_t v___x_327_; size_t v___x_328_; size_t v___x_329_; lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_314_ = lean_array_get_size(v_x_306_);
v___x_315_ = lean_ptr_addr(v_key_308_);
v___x_316_ = lean_usize_to_uint64(v___x_315_);
v___x_317_ = 11ULL;
v___x_318_ = lean_uint64_mix_hash(v___x_316_, v___x_317_);
v___x_319_ = 32ULL;
v___x_320_ = lean_uint64_shift_right(v___x_318_, v___x_319_);
v_fold_321_ = lean_uint64_xor(v___x_318_, v___x_320_);
v___x_322_ = 16ULL;
v___x_323_ = lean_uint64_shift_right(v_fold_321_, v___x_322_);
v___x_324_ = lean_uint64_xor(v_fold_321_, v___x_323_);
v___x_325_ = lean_uint64_to_usize(v___x_324_);
v___x_326_ = lean_usize_of_nat(v___x_314_);
v___x_327_ = ((size_t)1ULL);
v___x_328_ = lean_usize_sub(v___x_326_, v___x_327_);
v___x_329_ = lean_usize_land(v___x_325_, v___x_328_);
v___x_330_ = lean_array_uget_borrowed(v_x_306_, v___x_329_);
lean_inc(v___x_330_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 2, v___x_330_);
v___x_332_ = v___x_312_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_key_308_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_value_309_);
lean_ctor_set(v_reuseFailAlloc_335_, 2, v___x_330_);
v___x_332_ = v_reuseFailAlloc_335_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
lean_object* v___x_333_; 
v___x_333_ = lean_array_uset(v_x_306_, v___x_329_, v___x_332_);
v_x_306_ = v___x_333_;
v_x_307_ = v_tail_310_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6___redArg(lean_object* v_i_337_, lean_object* v_source_338_, lean_object* v_target_339_){
_start:
{
lean_object* v___x_340_; uint8_t v___x_341_; 
v___x_340_ = lean_array_get_size(v_source_338_);
v___x_341_ = lean_nat_dec_lt(v_i_337_, v___x_340_);
if (v___x_341_ == 0)
{
lean_dec_ref(v_source_338_);
lean_dec(v_i_337_);
return v_target_339_;
}
else
{
lean_object* v_es_342_; lean_object* v___x_343_; lean_object* v_source_344_; lean_object* v_target_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v_es_342_ = lean_array_fget(v_source_338_, v_i_337_);
v___x_343_ = lean_box(0);
v_source_344_ = lean_array_fset(v_source_338_, v_i_337_, v___x_343_);
v_target_345_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7___redArg(v_target_339_, v_es_342_);
v___x_346_ = lean_unsigned_to_nat(1u);
v___x_347_ = lean_nat_add(v_i_337_, v___x_346_);
lean_dec(v_i_337_);
v_i_337_ = v___x_347_;
v_source_338_ = v_source_344_;
v_target_339_ = v_target_345_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5___redArg(lean_object* v_data_349_){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v_nbuckets_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_350_ = lean_array_get_size(v_data_349_);
v___x_351_ = lean_unsigned_to_nat(2u);
v_nbuckets_352_ = lean_nat_mul(v___x_350_, v___x_351_);
v___x_353_ = lean_unsigned_to_nat(0u);
v___x_354_ = lean_box(0);
v___x_355_ = lean_mk_array(v_nbuckets_352_, v___x_354_);
v___x_356_ = lean_array_propagate_mark(v_data_349_, v___x_355_);
v___x_357_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6___redArg(v___x_353_, v_data_349_, v___x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4___redArg(lean_object* v_m_358_, lean_object* v_a_359_, lean_object* v_b_360_){
_start:
{
lean_object* v_size_361_; lean_object* v_buckets_362_; lean_object* v___x_363_; size_t v___x_364_; uint64_t v___x_365_; uint64_t v___x_366_; uint64_t v___x_367_; uint64_t v___x_368_; uint64_t v___x_369_; uint64_t v_fold_370_; uint64_t v___x_371_; uint64_t v___x_372_; uint64_t v___x_373_; size_t v___x_374_; size_t v___x_375_; size_t v___x_376_; size_t v___x_377_; size_t v___x_378_; lean_object* v_bkt_379_; uint8_t v___x_380_; 
v_size_361_ = lean_ctor_get(v_m_358_, 0);
v_buckets_362_ = lean_ctor_get(v_m_358_, 1);
v___x_363_ = lean_array_get_size(v_buckets_362_);
v___x_364_ = lean_ptr_addr(v_a_359_);
v___x_365_ = lean_usize_to_uint64(v___x_364_);
v___x_366_ = 11ULL;
v___x_367_ = lean_uint64_mix_hash(v___x_365_, v___x_366_);
v___x_368_ = 32ULL;
v___x_369_ = lean_uint64_shift_right(v___x_367_, v___x_368_);
v_fold_370_ = lean_uint64_xor(v___x_367_, v___x_369_);
v___x_371_ = 16ULL;
v___x_372_ = lean_uint64_shift_right(v_fold_370_, v___x_371_);
v___x_373_ = lean_uint64_xor(v_fold_370_, v___x_372_);
v___x_374_ = lean_uint64_to_usize(v___x_373_);
v___x_375_ = lean_usize_of_nat(v___x_363_);
v___x_376_ = ((size_t)1ULL);
v___x_377_ = lean_usize_sub(v___x_375_, v___x_376_);
v___x_378_ = lean_usize_land(v___x_374_, v___x_377_);
v_bkt_379_ = lean_array_uget_borrowed(v_buckets_362_, v___x_378_);
v___x_380_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(v_a_359_, v_bkt_379_);
if (v___x_380_ == 0)
{
lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_401_; 
lean_inc_ref(v_buckets_362_);
lean_inc(v_size_361_);
v_isSharedCheck_401_ = !lean_is_exclusive(v_m_358_);
if (v_isSharedCheck_401_ == 0)
{
lean_object* v_unused_402_; lean_object* v_unused_403_; 
v_unused_402_ = lean_ctor_get(v_m_358_, 1);
lean_dec(v_unused_402_);
v_unused_403_ = lean_ctor_get(v_m_358_, 0);
lean_dec(v_unused_403_);
v___x_382_ = v_m_358_;
v_isShared_383_ = v_isSharedCheck_401_;
goto v_resetjp_381_;
}
else
{
lean_dec(v_m_358_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_401_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_384_; lean_object* v_size_x27_385_; lean_object* v___x_386_; lean_object* v_buckets_x27_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_384_ = lean_unsigned_to_nat(1u);
v_size_x27_385_ = lean_nat_add(v_size_361_, v___x_384_);
lean_dec(v_size_361_);
lean_inc(v_bkt_379_);
v___x_386_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_386_, 0, v_a_359_);
lean_ctor_set(v___x_386_, 1, v_b_360_);
lean_ctor_set(v___x_386_, 2, v_bkt_379_);
v_buckets_x27_387_ = lean_array_uset(v_buckets_362_, v___x_378_, v___x_386_);
v___x_388_ = lean_unsigned_to_nat(4u);
v___x_389_ = lean_nat_mul(v_size_x27_385_, v___x_388_);
v___x_390_ = lean_unsigned_to_nat(3u);
v___x_391_ = lean_nat_div(v___x_389_, v___x_390_);
lean_dec(v___x_389_);
v___x_392_ = lean_array_get_size(v_buckets_x27_387_);
v___x_393_ = lean_nat_dec_le(v___x_391_, v___x_392_);
lean_dec(v___x_391_);
if (v___x_393_ == 0)
{
lean_object* v_val_394_; lean_object* v___x_396_; 
v_val_394_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5___redArg(v_buckets_x27_387_);
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 1, v_val_394_);
lean_ctor_set(v___x_382_, 0, v_size_x27_385_);
v___x_396_ = v___x_382_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_size_x27_385_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v_val_394_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
else
{
lean_object* v___x_399_; 
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 1, v_buckets_x27_387_);
lean_ctor_set(v___x_382_, 0, v_size_x27_385_);
v___x_399_ = v___x_382_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_size_x27_385_);
lean_ctor_set(v_reuseFailAlloc_400_, 1, v_buckets_x27_387_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
else
{
lean_dec(v_b_360_);
lean_dec_ref(v_a_359_);
return v_m_358_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg(lean_object* v_m_404_, lean_object* v_a_405_){
_start:
{
lean_object* v_buckets_406_; lean_object* v___x_407_; size_t v___x_408_; uint64_t v___x_409_; uint64_t v___x_410_; uint64_t v___x_411_; uint64_t v___x_412_; uint64_t v___x_413_; uint64_t v_fold_414_; uint64_t v___x_415_; uint64_t v___x_416_; uint64_t v___x_417_; size_t v___x_418_; size_t v___x_419_; size_t v___x_420_; size_t v___x_421_; size_t v___x_422_; lean_object* v___x_423_; uint8_t v___x_424_; 
v_buckets_406_ = lean_ctor_get(v_m_404_, 1);
v___x_407_ = lean_array_get_size(v_buckets_406_);
v___x_408_ = lean_ptr_addr(v_a_405_);
v___x_409_ = lean_usize_to_uint64(v___x_408_);
v___x_410_ = 11ULL;
v___x_411_ = lean_uint64_mix_hash(v___x_409_, v___x_410_);
v___x_412_ = 32ULL;
v___x_413_ = lean_uint64_shift_right(v___x_411_, v___x_412_);
v_fold_414_ = lean_uint64_xor(v___x_411_, v___x_413_);
v___x_415_ = 16ULL;
v___x_416_ = lean_uint64_shift_right(v_fold_414_, v___x_415_);
v___x_417_ = lean_uint64_xor(v_fold_414_, v___x_416_);
v___x_418_ = lean_uint64_to_usize(v___x_417_);
v___x_419_ = lean_usize_of_nat(v___x_407_);
v___x_420_ = ((size_t)1ULL);
v___x_421_ = lean_usize_sub(v___x_419_, v___x_420_);
v___x_422_ = lean_usize_land(v___x_418_, v___x_421_);
v___x_423_ = lean_array_uget_borrowed(v_buckets_406_, v___x_422_);
v___x_424_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(v_a_405_, v___x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg___boxed(lean_object* v_m_425_, lean_object* v_a_426_){
_start:
{
uint8_t v_res_427_; lean_object* v_r_428_; 
v_res_427_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg(v_m_425_, v_a_426_);
lean_dec_ref(v_a_426_);
lean_dec_ref(v_m_425_);
v_r_428_ = lean_box(v_res_427_);
return v_r_428_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg___lam__0(lean_object* v___x_429_, lean_object* v_00___430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_438_, 0, v___x_429_);
v___x_439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_438_);
lean_ctor_set(v___x_439_, 1, v___y_432_);
v___x_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_440_, 0, v___x_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg___lam__0___boxed(lean_object* v___x_441_, lean_object* v_00___442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg___lam__0(v___x_441_, v_00___442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec_ref(v___y_443_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_visit(lean_object* v_e_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
lean_object* v___y_460_; lean_object* v___y_461_; lean_object* v___y_462_; lean_object* v___y_463_; lean_object* v___y_464_; lean_object* v___y_465_; uint8_t v___x_490_; 
v___x_490_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg(v_a_453_, v_e_451_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v_env_494_; lean_object* v___x_495_; 
v___x_491_ = lean_box(0);
lean_inc_ref_n(v_e_451_, 2);
v___x_492_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4___redArg(v_a_453_, v_e_451_, v___x_491_);
v___x_493_ = lean_st_ref_get(v_a_457_);
v_env_494_ = lean_ctor_get(v___x_493_, 0);
lean_inc_ref(v_env_494_);
lean_dec(v___x_493_);
v___x_495_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f(v_env_494_, v_a_452_, v_e_451_);
if (lean_obj_tag(v___x_495_) == 1)
{
lean_object* v___x_496_; lean_object* v___x_497_; 
lean_dec_ref(v_e_451_);
v___x_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
lean_ctor_set(v___x_496_, 1, v___x_492_);
v___x_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
return v___x_497_;
}
else
{
uint8_t v___x_498_; 
lean_dec(v___x_495_);
v___x_498_ = l_Lean_Expr_hasLooseBVars(v_e_451_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; 
lean_inc_ref(v_e_451_);
v___x_499_ = l_Lean_Meta_isProof(v_e_451_, v_a_454_, v_a_455_, v_a_456_, v_a_457_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_510_; 
v_a_500_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_510_ == 0)
{
v___x_502_ = v___x_499_;
v_isShared_503_ = v_isSharedCheck_510_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_499_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_510_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
uint8_t v___x_504_; 
v___x_504_ = lean_unbox(v_a_500_);
lean_dec(v_a_500_);
if (v___x_504_ == 0)
{
lean_del_object(v___x_502_);
v___y_460_ = v_a_452_;
v___y_461_ = v___x_492_;
v___y_462_ = v_a_454_;
v___y_463_ = v_a_455_;
v___y_464_ = v_a_456_;
v___y_465_ = v_a_457_;
goto v___jp_459_;
}
else
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_508_; 
lean_dec_ref(v_e_451_);
v___x_505_ = lean_box(0);
v___x_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_505_);
lean_ctor_set(v___x_506_, 1, v___x_492_);
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 0, v___x_506_);
v___x_508_ = v___x_502_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
lean_dec_ref(v___x_492_);
lean_dec_ref(v_e_451_);
v_a_511_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_499_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_499_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
else
{
v___y_460_ = v_a_452_;
v___y_461_ = v___x_492_;
v___y_462_ = v_a_454_;
v___y_463_ = v_a_455_;
v___y_464_ = v_a_456_;
v___y_465_ = v_a_457_;
goto v___jp_459_;
}
}
}
else
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
lean_dec_ref(v_e_451_);
v___x_519_ = lean_box(0);
v___x_520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
lean_ctor_set(v___x_520_, 1, v_a_453_);
v___x_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
return v___x_521_;
}
v___jp_459_:
{
switch(lean_obj_tag(v_e_451_))
{
case 6:
{
lean_object* v_body_466_; 
v_body_466_ = lean_ctor_get(v_e_451_, 2);
lean_inc_ref(v_body_466_);
lean_dec_ref_known(v_e_451_, 3);
v_e_451_ = v_body_466_;
v_a_452_ = v___y_460_;
v_a_453_ = v___y_461_;
v_a_454_ = v___y_462_;
v_a_455_ = v___y_463_;
v_a_456_ = v___y_464_;
v_a_457_ = v___y_465_;
goto _start;
}
case 11:
{
lean_object* v_struct_468_; 
v_struct_468_ = lean_ctor_get(v_e_451_, 2);
lean_inc_ref(v_struct_468_);
lean_dec_ref_known(v_e_451_, 3);
v_e_451_ = v_struct_468_;
v_a_452_ = v___y_460_;
v_a_453_ = v___y_461_;
v_a_454_ = v___y_462_;
v_a_455_ = v___y_463_;
v_a_456_ = v___y_464_;
v_a_457_ = v___y_465_;
goto _start;
}
case 10:
{
lean_object* v_expr_470_; 
v_expr_470_ = lean_ctor_get(v_e_451_, 1);
lean_inc_ref(v_expr_470_);
lean_dec_ref_known(v_e_451_, 2);
v_e_451_ = v_expr_470_;
v_a_452_ = v___y_460_;
v_a_453_ = v___y_461_;
v_a_454_ = v___y_462_;
v_a_455_ = v___y_463_;
v_a_456_ = v___y_464_;
v_a_457_ = v___y_465_;
goto _start;
}
case 7:
{
lean_object* v_binderType_472_; lean_object* v_body_473_; lean_object* v___x_474_; 
v_binderType_472_ = lean_ctor_get(v_e_451_, 1);
lean_inc_ref(v_binderType_472_);
v_body_473_ = lean_ctor_get(v_e_451_, 2);
lean_inc_ref(v_body_473_);
lean_dec_ref_known(v_e_451_, 3);
v___x_474_ = l_Lean_Meta_FindSplitImpl_visit(v_binderType_472_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v_fst_476_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
v_fst_476_ = lean_ctor_get(v_a_475_, 0);
if (lean_obj_tag(v_fst_476_) == 0)
{
lean_object* v_snd_477_; 
lean_inc(v_a_475_);
lean_dec_ref_known(v___x_474_, 1);
v_snd_477_ = lean_ctor_get(v_a_475_, 1);
lean_inc(v_snd_477_);
lean_dec(v_a_475_);
v_e_451_ = v_body_473_;
v_a_452_ = v___y_460_;
v_a_453_ = v_snd_477_;
v_a_454_ = v___y_462_;
v_a_455_ = v___y_463_;
v_a_456_ = v___y_464_;
v_a_457_ = v___y_465_;
goto _start;
}
else
{
lean_dec_ref(v_body_473_);
return v___x_474_;
}
}
else
{
lean_dec_ref(v_body_473_);
return v___x_474_;
}
}
case 8:
{
lean_object* v_value_479_; lean_object* v_body_480_; lean_object* v___x_481_; 
v_value_479_ = lean_ctor_get(v_e_451_, 2);
lean_inc_ref(v_value_479_);
v_body_480_ = lean_ctor_get(v_e_451_, 3);
lean_inc_ref(v_body_480_);
lean_dec_ref_known(v_e_451_, 4);
v___x_481_ = l_Lean_Meta_FindSplitImpl_visit(v_value_479_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_a_482_; lean_object* v_fst_483_; 
v_a_482_ = lean_ctor_get(v___x_481_, 0);
v_fst_483_ = lean_ctor_get(v_a_482_, 0);
if (lean_obj_tag(v_fst_483_) == 0)
{
lean_object* v_snd_484_; 
lean_inc(v_a_482_);
lean_dec_ref_known(v___x_481_, 1);
v_snd_484_ = lean_ctor_get(v_a_482_, 1);
lean_inc(v_snd_484_);
lean_dec(v_a_482_);
v_e_451_ = v_body_480_;
v_a_452_ = v___y_460_;
v_a_453_ = v_snd_484_;
v_a_454_ = v___y_462_;
v_a_455_ = v___y_463_;
v_a_456_ = v___y_464_;
v_a_457_ = v___y_465_;
goto _start;
}
else
{
lean_dec_ref(v_body_480_);
return v___x_481_;
}
}
else
{
lean_dec_ref(v_body_480_);
return v___x_481_;
}
}
case 5:
{
lean_object* v___x_486_; 
v___x_486_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f(v_e_451_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_);
return v___x_486_;
}
default: 
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
lean_dec_ref(v_e_451_);
v___x_487_ = lean_box(0);
v___x_488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_488_, 0, v___x_487_);
lean_ctor_set(v___x_488_, 1, v___y_461_);
v___x_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
return v___x_489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg(lean_object* v_upperBound_522_, lean_object* v_args_523_, lean_object* v_info_524_, lean_object* v_a_525_, lean_object* v_b_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v_a_535_; lean_object* v_snd_536_; lean_object* v_a_541_; lean_object* v_snd_542_; lean_object* v___y_546_; uint8_t v___x_561_; 
v___x_561_ = lean_nat_dec_lt(v_a_525_, v_upperBound_522_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; lean_object* v___x_563_; 
lean_dec(v_a_525_);
v___x_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_562_, 0, v_b_526_);
lean_ctor_set(v___x_562_, 1, v___y_528_);
v___x_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
return v___x_563_;
}
else
{
lean_object* v_paramInfo_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; uint8_t v___x_569_; 
lean_dec_ref(v_b_526_);
v_paramInfo_564_ = lean_ctor_get(v_info_524_, 0);
v___x_565_ = lean_box(0);
v___x_566_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0));
v___x_567_ = lean_array_fget_borrowed(v_args_523_, v_a_525_);
v___x_568_ = lean_array_get_size(v_paramInfo_564_);
v___x_569_ = lean_nat_dec_lt(v_a_525_, v___x_568_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; 
lean_inc(v___x_567_);
v___x_570_ = l_Lean_Meta_FindSplitImpl_visit(v___x_567_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_a_571_; lean_object* v_fst_572_; 
v_a_571_ = lean_ctor_get(v___x_570_, 0);
lean_inc(v_a_571_);
lean_dec_ref_known(v___x_570_, 1);
v_fst_572_ = lean_ctor_get(v_a_571_, 0);
if (lean_obj_tag(v_fst_572_) == 1)
{
lean_object* v_snd_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_581_; 
lean_inc_ref(v_fst_572_);
lean_dec(v_a_525_);
v_snd_573_ = lean_ctor_get(v_a_571_, 1);
v_isSharedCheck_581_ = !lean_is_exclusive(v_a_571_);
if (v_isSharedCheck_581_ == 0)
{
lean_object* v_unused_582_; 
v_unused_582_ = lean_ctor_get(v_a_571_, 0);
lean_dec(v_unused_582_);
v___x_575_ = v_a_571_;
v_isShared_576_ = v_isSharedCheck_581_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_snd_573_);
lean_dec(v_a_571_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_581_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_577_; lean_object* v___x_579_; 
v___x_577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_577_, 0, v_fst_572_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 1, v___x_565_);
lean_ctor_set(v___x_575_, 0, v___x_577_);
v___x_579_ = v___x_575_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___x_577_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v___x_565_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
v_a_541_ = v___x_579_;
v_snd_542_ = v_snd_573_;
goto v___jp_540_;
}
}
}
else
{
lean_object* v_snd_583_; 
v_snd_583_ = lean_ctor_get(v_a_571_, 1);
lean_inc(v_snd_583_);
lean_dec(v_a_571_);
v_a_535_ = v___x_566_;
v_snd_536_ = v_snd_583_;
goto v___jp_534_;
}
}
else
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
lean_dec(v_a_525_);
v_a_584_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v___x_570_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_570_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_584_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
else
{
lean_object* v___x_592_; uint8_t v_isProp_593_; 
v___x_592_ = lean_array_fget_borrowed(v_paramInfo_564_, v_a_525_);
v_isProp_593_ = lean_ctor_get_uint8(v___x_592_, sizeof(void*)*1 + 2);
if (v_isProp_593_ == 0)
{
uint8_t v___x_594_; 
v___x_594_ = l_Lean_Meta_ParamInfo_isExplicit(v___x_592_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; 
v___x_595_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg___lam__0(v___x_566_, v___x_565_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
v___y_546_ = v___x_595_;
goto v___jp_545_;
}
else
{
lean_object* v___x_596_; 
lean_inc(v___x_567_);
v___x_596_ = l_Lean_Meta_FindSplitImpl_visit(v___x_567_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v_a_597_; lean_object* v_fst_598_; 
v_a_597_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_a_597_);
lean_dec_ref_known(v___x_596_, 1);
v_fst_598_ = lean_ctor_get(v_a_597_, 0);
if (lean_obj_tag(v_fst_598_) == 1)
{
lean_object* v_snd_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_607_; 
lean_inc_ref(v_fst_598_);
lean_dec(v_a_525_);
v_snd_599_ = lean_ctor_get(v_a_597_, 1);
v_isSharedCheck_607_ = !lean_is_exclusive(v_a_597_);
if (v_isSharedCheck_607_ == 0)
{
lean_object* v_unused_608_; 
v_unused_608_ = lean_ctor_get(v_a_597_, 0);
lean_dec(v_unused_608_);
v___x_601_ = v_a_597_;
v_isShared_602_ = v_isSharedCheck_607_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_snd_599_);
lean_dec(v_a_597_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_607_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_603_; lean_object* v___x_605_; 
v___x_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_603_, 0, v_fst_598_);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 1, v___x_565_);
lean_ctor_set(v___x_601_, 0, v___x_603_);
v___x_605_ = v___x_601_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_603_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v___x_565_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
v_a_541_ = v___x_605_;
v_snd_542_ = v_snd_599_;
goto v___jp_540_;
}
}
}
else
{
lean_object* v_snd_609_; 
v_snd_609_ = lean_ctor_get(v_a_597_, 1);
lean_inc(v_snd_609_);
lean_dec(v_a_597_);
v_a_535_ = v___x_566_;
v_snd_536_ = v_snd_609_;
goto v___jp_534_;
}
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
lean_dec(v_a_525_);
v_a_610_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_596_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_596_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
}
else
{
lean_object* v___x_618_; 
v___x_618_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg___lam__0(v___x_566_, v___x_565_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
v___y_546_ = v___x_618_;
goto v___jp_545_;
}
}
}
v___jp_534_:
{
lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_537_ = lean_unsigned_to_nat(1u);
v___x_538_ = lean_nat_add(v_a_525_, v___x_537_);
lean_dec(v_a_525_);
v_a_525_ = v___x_538_;
v_b_526_ = v_a_535_;
v___y_528_ = v_snd_536_;
goto _start;
}
v___jp_540_:
{
lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_543_, 0, v_a_541_);
lean_ctor_set(v___x_543_, 1, v_snd_542_);
v___x_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
return v___x_544_;
}
v___jp_545_:
{
if (lean_obj_tag(v___y_546_) == 0)
{
lean_object* v_a_547_; lean_object* v_fst_548_; 
v_a_547_ = lean_ctor_get(v___y_546_, 0);
lean_inc(v_a_547_);
lean_dec_ref_known(v___y_546_, 1);
v_fst_548_ = lean_ctor_get(v_a_547_, 0);
lean_inc(v_fst_548_);
if (lean_obj_tag(v_fst_548_) == 0)
{
lean_object* v_snd_549_; lean_object* v_a_550_; 
lean_dec(v_a_525_);
v_snd_549_ = lean_ctor_get(v_a_547_, 1);
lean_inc(v_snd_549_);
lean_dec(v_a_547_);
v_a_550_ = lean_ctor_get(v_fst_548_, 0);
lean_inc(v_a_550_);
lean_dec_ref_known(v_fst_548_, 1);
v_a_541_ = v_a_550_;
v_snd_542_ = v_snd_549_;
goto v___jp_540_;
}
else
{
lean_object* v_snd_551_; lean_object* v_a_552_; 
v_snd_551_ = lean_ctor_get(v_a_547_, 1);
lean_inc(v_snd_551_);
lean_dec(v_a_547_);
v_a_552_ = lean_ctor_get(v_fst_548_, 0);
lean_inc(v_a_552_);
lean_dec_ref_known(v_fst_548_, 1);
v_a_535_ = v_a_552_;
v_snd_536_ = v_snd_551_;
goto v___jp_534_;
}
}
else
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_560_; 
lean_dec(v_a_525_);
v_a_553_ = lean_ctor_get(v___y_546_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___y_546_);
if (v_isSharedCheck_560_ == 0)
{
v___x_555_ = v___y_546_;
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___y_546_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_558_; 
if (v_isShared_556_ == 0)
{
v___x_558_ = v___x_555_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_a_553_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1(lean_object* v_x_623_, lean_object* v_x_624_, lean_object* v_x_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v_info_634_; lean_object* v___y_635_; lean_object* v___y_636_; lean_object* v___y_637_; lean_object* v___y_638_; lean_object* v___y_639_; lean_object* v___y_640_; 
if (lean_obj_tag(v_x_623_) == 5)
{
lean_object* v_fn_675_; lean_object* v_arg_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v_fn_675_ = lean_ctor_get(v_x_623_, 0);
lean_inc_ref(v_fn_675_);
v_arg_676_ = lean_ctor_get(v_x_623_, 1);
lean_inc_ref(v_arg_676_);
lean_dec_ref_known(v_x_623_, 2);
v___x_677_ = lean_array_set(v_x_624_, v_x_625_, v_arg_676_);
v___x_678_ = lean_unsigned_to_nat(1u);
v___x_679_ = lean_nat_sub(v_x_625_, v___x_678_);
lean_dec(v_x_625_);
v_x_623_ = v_fn_675_;
v_x_624_ = v___x_677_;
v_x_625_ = v___x_679_;
goto _start;
}
else
{
uint8_t v___x_681_; 
lean_dec(v_x_625_);
v___x_681_ = l_Lean_Expr_hasLooseBVars(v_x_623_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_682_ = lean_box(0);
lean_inc_ref(v_x_623_);
v___x_683_ = l_Lean_Meta_getFunInfo(v_x_623_, v___x_682_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
if (lean_obj_tag(v___x_683_) == 0)
{
lean_object* v_a_684_; 
v_a_684_ = lean_ctor_get(v___x_683_, 0);
lean_inc(v_a_684_);
lean_dec_ref_known(v___x_683_, 1);
v_info_634_ = v_a_684_;
v___y_635_ = v___y_626_;
v___y_636_ = v___y_627_;
v___y_637_ = v___y_628_;
v___y_638_ = v___y_629_;
v___y_639_ = v___y_630_;
v___y_640_ = v___y_631_;
goto v___jp_633_;
}
else
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_692_; 
lean_dec_ref(v___y_627_);
lean_dec_ref(v_x_624_);
lean_dec_ref(v_x_623_);
v_a_685_ = lean_ctor_get(v___x_683_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_692_ == 0)
{
v___x_687_ = v___x_683_;
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_683_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
else
{
lean_object* v___x_693_; 
v___x_693_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___closed__1));
v_info_634_ = v___x_693_;
v___y_635_ = v___y_626_;
v___y_636_ = v___y_627_;
v___y_637_ = v___y_628_;
v___y_638_ = v___y_629_;
v___y_639_ = v___y_630_;
v___y_640_ = v___y_631_;
goto v___jp_633_;
}
}
v___jp_633_:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_641_ = lean_array_get_size(v_x_624_);
v___x_642_ = lean_unsigned_to_nat(0u);
v___x_643_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f_spec__1___redArg___closed__0));
v___x_644_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg(v___x_641_, v_x_624_, v_info_634_, v___x_642_, v___x_643_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_);
lean_dec_ref(v_info_634_);
lean_dec_ref(v_x_624_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_666_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_666_ == 0)
{
v___x_647_ = v___x_644_;
v_isShared_648_ = v_isSharedCheck_666_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_644_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_666_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v_fst_649_; lean_object* v_fst_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_664_; 
v_fst_649_ = lean_ctor_get(v_a_645_, 0);
lean_inc(v_fst_649_);
v_fst_650_ = lean_ctor_get(v_fst_649_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v_fst_649_);
if (v_isSharedCheck_664_ == 0)
{
lean_object* v_unused_665_; 
v_unused_665_ = lean_ctor_get(v_fst_649_, 1);
lean_dec(v_unused_665_);
v___x_652_ = v_fst_649_;
v_isShared_653_ = v_isSharedCheck_664_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_fst_650_);
lean_dec(v_fst_649_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_664_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
if (lean_obj_tag(v_fst_650_) == 0)
{
lean_object* v_snd_654_; lean_object* v___x_655_; 
lean_del_object(v___x_652_);
lean_del_object(v___x_647_);
v_snd_654_ = lean_ctor_get(v_a_645_, 1);
lean_inc(v_snd_654_);
lean_dec(v_a_645_);
v___x_655_ = l_Lean_Meta_FindSplitImpl_visit(v_x_623_, v___y_635_, v_snd_654_, v___y_637_, v___y_638_, v___y_639_, v___y_640_);
return v___x_655_;
}
else
{
lean_object* v_snd_656_; lean_object* v_val_657_; lean_object* v___x_659_; 
lean_dec_ref(v_x_623_);
v_snd_656_ = lean_ctor_get(v_a_645_, 1);
lean_inc(v_snd_656_);
lean_dec(v_a_645_);
v_val_657_ = lean_ctor_get(v_fst_650_, 0);
lean_inc(v_val_657_);
lean_dec_ref_known(v_fst_650_, 1);
if (v_isShared_653_ == 0)
{
lean_ctor_set(v___x_652_, 1, v_snd_656_);
lean_ctor_set(v___x_652_, 0, v_val_657_);
v___x_659_ = v___x_652_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_val_657_);
lean_ctor_set(v_reuseFailAlloc_663_, 1, v_snd_656_);
v___x_659_ = v_reuseFailAlloc_663_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
lean_object* v___x_661_; 
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 0, v___x_659_);
v___x_661_ = v___x_647_;
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
}
}
else
{
lean_object* v_a_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_674_; 
lean_dec_ref(v_x_623_);
v_a_667_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_674_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_674_ == 0)
{
v___x_669_ = v___x_644_;
v_isShared_670_ = v_isSharedCheck_674_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_a_667_);
lean_dec(v___x_644_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_674_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_672_; 
if (v_isShared_670_ == 0)
{
v___x_672_ = v___x_669_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_a_667_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f(lean_object* v_e_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_){
_start:
{
lean_object* v_dummy_702_; lean_object* v_nargs_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v_dummy_702_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__0);
v_nargs_703_ = l_Lean_Expr_getAppNumArgs(v_e_694_);
lean_inc(v_nargs_703_);
v___x_704_ = lean_mk_array(v_nargs_703_, v_dummy_702_);
v___x_705_ = lean_unsigned_to_nat(1u);
v___x_706_ = lean_nat_sub(v_nargs_703_, v___x_705_);
lean_dec(v_nargs_703_);
v___x_707_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1(v_e_694_, v___x_704_, v___x_706_, v_a_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f___boxed(lean_object* v_e_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f(v_e_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_);
lean_dec(v_a_714_);
lean_dec_ref(v_a_713_);
lean_dec(v_a_712_);
lean_dec_ref(v_a_711_);
lean_dec_ref(v_a_709_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1___boxed(lean_object* v_x_717_, lean_object* v_x_718_, lean_object* v_x_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__1(v_x_717_, v_x_718_, v_x_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_);
lean_dec(v___y_725_);
lean_dec_ref(v___y_724_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec_ref(v___y_720_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FindSplitImpl_visit___boxed(lean_object* v_e_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Lean_Meta_FindSplitImpl_visit(v_e_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_);
lean_dec(v_a_734_);
lean_dec_ref(v_a_733_);
lean_dec(v_a_732_);
lean_dec_ref(v_a_731_);
lean_dec_ref(v_a_729_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg___boxed(lean_object* v_upperBound_737_, lean_object* v_args_738_, lean_object* v_info_739_, lean_object* v_a_740_, lean_object* v_b_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg(v_upperBound_737_, v_args_738_, v_info_739_, v_a_740_, v_b_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
lean_dec(v___y_745_);
lean_dec_ref(v___y_744_);
lean_dec_ref(v___y_742_);
lean_dec_ref(v_info_739_);
lean_dec_ref(v_args_738_);
lean_dec(v_upperBound_737_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0(lean_object* v_upperBound_750_, lean_object* v_args_751_, lean_object* v_info_752_, lean_object* v_inst_753_, lean_object* v_R_754_, lean_object* v_a_755_, lean_object* v_b_756_, lean_object* v_c_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___redArg(v_upperBound_750_, v_args_751_, v_info_752_, v_a_755_, v_b_756_, v___y_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0___boxed(lean_object* v_upperBound_766_, lean_object* v_args_767_, lean_object* v_info_768_, lean_object* v_inst_769_, lean_object* v_R_770_, lean_object* v_a_771_, lean_object* v_b_772_, lean_object* v_c_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_visit_visitApp_x3f_spec__0(v_upperBound_766_, v_args_767_, v_info_768_, v_inst_769_, v_R_770_, v_a_771_, v_b_772_, v_c_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
lean_dec(v___y_779_);
lean_dec_ref(v___y_778_);
lean_dec(v___y_777_);
lean_dec_ref(v___y_776_);
lean_dec_ref(v___y_774_);
lean_dec_ref(v_info_768_);
lean_dec_ref(v_args_767_);
lean_dec(v_upperBound_766_);
return v_res_781_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3(lean_object* v_00_u03b2_782_, lean_object* v_m_783_, lean_object* v_a_784_){
_start:
{
uint8_t v___x_785_; 
v___x_785_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___redArg(v_m_783_, v_a_784_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3___boxed(lean_object* v_00_u03b2_786_, lean_object* v_m_787_, lean_object* v_a_788_){
_start:
{
uint8_t v_res_789_; lean_object* v_r_790_; 
v_res_789_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3(v_00_u03b2_786_, v_m_787_, v_a_788_);
lean_dec_ref(v_a_788_);
lean_dec_ref(v_m_787_);
v_r_790_ = lean_box(v_res_789_);
return v_r_790_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4(lean_object* v_00_u03b2_791_, lean_object* v_m_792_, lean_object* v_a_793_, lean_object* v_b_794_){
_start:
{
lean_object* v___x_795_; 
v___x_795_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4___redArg(v_m_792_, v_a_793_, v_b_794_);
return v___x_795_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3(lean_object* v_00_u03b2_796_, lean_object* v_a_797_, lean_object* v_x_798_){
_start:
{
uint8_t v___x_799_; 
v___x_799_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___redArg(v_a_797_, v_x_798_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3___boxed(lean_object* v_00_u03b2_800_, lean_object* v_a_801_, lean_object* v_x_802_){
_start:
{
uint8_t v_res_803_; lean_object* v_r_804_; 
v_res_803_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_FindSplitImpl_visit_spec__3_spec__3(v_00_u03b2_800_, v_a_801_, v_x_802_);
lean_dec(v_x_802_);
lean_dec_ref(v_a_801_);
v_r_804_ = lean_box(v_res_803_);
return v_r_804_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5(lean_object* v_00_u03b2_805_, lean_object* v_data_806_){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5___redArg(v_data_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_808_, lean_object* v_i_809_, lean_object* v_source_810_, lean_object* v_target_811_){
_start:
{
lean_object* v___x_812_; 
v___x_812_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6___redArg(v_i_809_, v_source_810_, v_target_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7(lean_object* v_00_u03b2_813_, lean_object* v_x_814_, lean_object* v_x_815_){
_start:
{
lean_object* v___x_816_; 
v___x_816_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_FindSplitImpl_visit_spec__4_spec__5_spec__6_spec__7___redArg(v_x_814_, v_x_815_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f_spec__0___redArg(lean_object* v_e_817_, lean_object* v___y_818_){
_start:
{
uint8_t v___x_820_; 
v___x_820_ = l_Lean_Expr_hasMVar(v_e_817_);
if (v___x_820_ == 0)
{
lean_object* v___x_821_; 
v___x_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_821_, 0, v_e_817_);
return v___x_821_;
}
else
{
lean_object* v___x_822_; lean_object* v_mctx_823_; lean_object* v___x_824_; lean_object* v_fst_825_; lean_object* v_snd_826_; lean_object* v___x_827_; lean_object* v_cache_828_; lean_object* v_zetaDeltaFVarIds_829_; lean_object* v_postponed_830_; lean_object* v_diag_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_840_; 
v___x_822_ = lean_st_ref_get(v___y_818_);
v_mctx_823_ = lean_ctor_get(v___x_822_, 0);
lean_inc_ref(v_mctx_823_);
lean_dec(v___x_822_);
v___x_824_ = l_Lean_instantiateMVarsCore(v_mctx_823_, v_e_817_);
v_fst_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_fst_825_);
v_snd_826_ = lean_ctor_get(v___x_824_, 1);
lean_inc(v_snd_826_);
lean_dec_ref(v___x_824_);
v___x_827_ = lean_st_ref_take(v___y_818_);
v_cache_828_ = lean_ctor_get(v___x_827_, 1);
v_zetaDeltaFVarIds_829_ = lean_ctor_get(v___x_827_, 2);
v_postponed_830_ = lean_ctor_get(v___x_827_, 3);
v_diag_831_ = lean_ctor_get(v___x_827_, 4);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_840_ == 0)
{
lean_object* v_unused_841_; 
v_unused_841_ = lean_ctor_get(v___x_827_, 0);
lean_dec(v_unused_841_);
v___x_833_ = v___x_827_;
v_isShared_834_ = v_isSharedCheck_840_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_diag_831_);
lean_inc(v_postponed_830_);
lean_inc(v_zetaDeltaFVarIds_829_);
lean_inc(v_cache_828_);
lean_dec(v___x_827_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_840_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_836_; 
if (v_isShared_834_ == 0)
{
lean_ctor_set(v___x_833_, 0, v_snd_826_);
v___x_836_ = v___x_833_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_snd_826_);
lean_ctor_set(v_reuseFailAlloc_839_, 1, v_cache_828_);
lean_ctor_set(v_reuseFailAlloc_839_, 2, v_zetaDeltaFVarIds_829_);
lean_ctor_set(v_reuseFailAlloc_839_, 3, v_postponed_830_);
lean_ctor_set(v_reuseFailAlloc_839_, 4, v_diag_831_);
v___x_836_ = v_reuseFailAlloc_839_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_837_ = lean_st_ref_put(v___y_818_, v___x_836_);
v___x_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_838_, 0, v_fst_825_);
return v___x_838_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f_spec__0___redArg___boxed(lean_object* v_e_842_, lean_object* v___y_843_, lean_object* v___y_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f_spec__0___redArg(v_e_842_, v___y_843_);
lean_dec(v___y_843_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f_spec__0(lean_object* v_e_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
lean_object* v___x_852_; 
v___x_852_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f_spec__0___redArg(v_e_846_, v___y_848_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f_spec__0___boxed(lean_object* v_e_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f_spec__0(v_e_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_);
lean_dec(v___y_857_);
lean_dec_ref(v___y_856_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f(lean_object* v_c_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_){
_start:
{
lean_object* v___x_866_; lean_object* v_a_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_866_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f_spec__0___redArg(v_c_860_, v_a_862_);
v_a_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_867_);
lean_dec_ref(v___x_866_);
v___x_868_ = l_Lean_Expr_consumeMData(v_a_867_);
lean_dec(v_a_867_);
v___x_869_ = l_Lean_Meta_getBoolDecision_x3f(v___x_868_, v_a_861_, v_a_862_, v_a_863_, v_a_864_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f___boxed(lean_object* v_c_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f(v_c_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_);
lean_dec(v_a_874_);
lean_dec_ref(v_a_873_);
lean_dec(v_a_872_);
lean_dec_ref(v_a_871_);
return v_res_876_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0(void){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_877_ = lean_unsigned_to_nat(64u);
v___x_878_ = l_Lean_mkPtrSet___redArg(v___x_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1(uint8_t v_kind_879_, lean_object* v_exceptionSet_880_, lean_object* v_e_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_887_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_887_, 0, v_exceptionSet_880_);
lean_ctor_set_uint8(v___x_887_, sizeof(void*)*1, v_kind_879_);
v___x_888_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0);
v___x_889_ = l_Lean_Meta_FindSplitImpl_visit(v_e_881_, v___x_887_, v___x_888_, v_a_882_, v_a_883_, v_a_884_, v_a_885_);
lean_dec_ref_known(v___x_887_, 1);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_898_; 
v_a_890_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_898_ == 0)
{
v___x_892_ = v___x_889_;
v_isShared_893_ = v_isSharedCheck_898_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_889_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_898_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v_fst_894_; lean_object* v___x_896_; 
v_fst_894_ = lean_ctor_get(v_a_890_, 0);
lean_inc(v_fst_894_);
lean_dec(v_a_890_);
if (v_isShared_893_ == 0)
{
lean_ctor_set(v___x_892_, 0, v_fst_894_);
v___x_896_ = v___x_892_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_fst_894_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
else
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
v_a_899_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_906_ == 0)
{
v___x_901_ = v___x_889_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v___x_889_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_899_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___boxed(lean_object* v_kind_907_, lean_object* v_exceptionSet_908_, lean_object* v_e_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_){
_start:
{
uint8_t v_kind_boxed_915_; lean_object* v_res_916_; 
v_kind_boxed_915_ = lean_unbox(v_kind_907_);
v_res_916_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1(v_kind_boxed_915_, v_exceptionSet_908_, v_e_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_);
lean_dec(v_a_913_);
lean_dec_ref(v_a_912_);
lean_dec(v_a_911_);
lean_dec_ref(v_a_910_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0(lean_object* v_msgData_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v___x_923_; lean_object* v_env_924_; uint8_t v___x_925_; lean_object* v_env_926_; lean_object* v___x_927_; lean_object* v_toCold_928_; lean_object* v_mctx_929_; lean_object* v_lctx_930_; lean_object* v_options_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_923_ = lean_st_ref_get(v___y_921_);
v_env_924_ = lean_ctor_get(v___x_923_, 0);
lean_inc_ref(v_env_924_);
lean_dec(v___x_923_);
v___x_925_ = 0;
v_env_926_ = l_Lean_Environment_setRecordingDeps(v_env_924_, v___x_925_);
v___x_927_ = lean_st_ref_get(v___y_919_);
v_toCold_928_ = lean_ctor_get(v___y_920_, 0);
v_mctx_929_ = lean_ctor_get(v___x_927_, 0);
lean_inc_ref(v_mctx_929_);
lean_dec(v___x_927_);
v_lctx_930_ = lean_ctor_get(v___y_918_, 2);
v_options_931_ = lean_ctor_get(v_toCold_928_, 2);
lean_inc_ref(v_options_931_);
lean_inc_ref(v_lctx_930_);
v___x_932_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_932_, 0, v_env_926_);
lean_ctor_set(v___x_932_, 1, v_mctx_929_);
lean_ctor_set(v___x_932_, 2, v_lctx_930_);
lean_ctor_set(v___x_932_, 3, v_options_931_);
v___x_933_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_932_);
lean_ctor_set(v___x_933_, 1, v_msgData_917_);
v___x_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0___boxed(lean_object* v_msgData_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0(v_msgData_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
lean_dec(v___y_939_);
lean_dec_ref(v___y_938_);
lean_dec(v___y_937_);
lean_dec_ref(v___y_936_);
return v_res_941_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_942_; double v___x_943_; 
v___x_942_ = lean_unsigned_to_nat(0u);
v___x_943_ = lean_float_of_nat(v___x_942_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(lean_object* v_cls_947_, lean_object* v_msg_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_){
_start:
{
lean_object* v_ref_954_; lean_object* v___x_955_; lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_1001_; 
v_ref_954_ = lean_ctor_get(v___y_951_, 2);
v___x_955_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0(v_msg_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_);
v_a_956_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_958_ = v___x_955_;
v_isShared_959_ = v_isSharedCheck_1001_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_955_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_1001_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_960_; lean_object* v_traceState_961_; lean_object* v_env_962_; lean_object* v_nextMacroScope_963_; lean_object* v_ngen_964_; lean_object* v_auxDeclNGen_965_; lean_object* v_cache_966_; lean_object* v_recordedDeps_967_; lean_object* v_messages_968_; lean_object* v_infoState_969_; lean_object* v_snapshotTasks_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_1000_; 
v___x_960_ = lean_st_ref_take(v___y_952_);
v_traceState_961_ = lean_ctor_get(v___x_960_, 4);
v_env_962_ = lean_ctor_get(v___x_960_, 0);
v_nextMacroScope_963_ = lean_ctor_get(v___x_960_, 1);
v_ngen_964_ = lean_ctor_get(v___x_960_, 2);
v_auxDeclNGen_965_ = lean_ctor_get(v___x_960_, 3);
v_cache_966_ = lean_ctor_get(v___x_960_, 5);
v_recordedDeps_967_ = lean_ctor_get(v___x_960_, 6);
v_messages_968_ = lean_ctor_get(v___x_960_, 7);
v_infoState_969_ = lean_ctor_get(v___x_960_, 8);
v_snapshotTasks_970_ = lean_ctor_get(v___x_960_, 9);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_972_ = v___x_960_;
v_isShared_973_ = v_isSharedCheck_1000_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_snapshotTasks_970_);
lean_inc(v_infoState_969_);
lean_inc(v_messages_968_);
lean_inc(v_recordedDeps_967_);
lean_inc(v_cache_966_);
lean_inc(v_traceState_961_);
lean_inc(v_auxDeclNGen_965_);
lean_inc(v_ngen_964_);
lean_inc(v_nextMacroScope_963_);
lean_inc(v_env_962_);
lean_dec(v___x_960_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_1000_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
uint64_t v_tid_974_; lean_object* v_traces_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_999_; 
v_tid_974_ = lean_ctor_get_uint64(v_traceState_961_, sizeof(void*)*1);
v_traces_975_ = lean_ctor_get(v_traceState_961_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v_traceState_961_);
if (v_isSharedCheck_999_ == 0)
{
v___x_977_ = v_traceState_961_;
v_isShared_978_ = v_isSharedCheck_999_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_traces_975_);
lean_dec(v_traceState_961_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_999_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_979_; lean_object* v___x_980_; double v___x_981_; uint8_t v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_990_; 
v___x_979_ = lean_box(0);
v___x_980_ = lean_box(0);
v___x_981_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0);
v___x_982_ = 0;
v___x_983_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__1));
v___x_984_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_984_, 0, v_cls_947_);
lean_ctor_set(v___x_984_, 1, v___x_980_);
lean_ctor_set(v___x_984_, 2, v___x_983_);
lean_ctor_set_float(v___x_984_, sizeof(void*)*3, v___x_981_);
lean_ctor_set_float(v___x_984_, sizeof(void*)*3 + 8, v___x_981_);
lean_ctor_set_uint8(v___x_984_, sizeof(void*)*3 + 16, v___x_982_);
v___x_985_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__2));
v___x_986_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_986_, 0, v___x_984_);
lean_ctor_set(v___x_986_, 1, v_a_956_);
lean_ctor_set(v___x_986_, 2, v___x_985_);
lean_inc(v_ref_954_);
v___x_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_987_, 0, v_ref_954_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
v___x_988_ = l_Lean_PersistentArray_push___redArg(v_traces_975_, v___x_987_);
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 0, v___x_988_);
v___x_990_ = v___x_977_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v___x_988_);
lean_ctor_set_uint64(v_reuseFailAlloc_998_, sizeof(void*)*1, v_tid_974_);
v___x_990_ = v_reuseFailAlloc_998_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
lean_object* v___x_992_; 
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 4, v___x_990_);
v___x_992_ = v___x_972_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_env_962_);
lean_ctor_set(v_reuseFailAlloc_997_, 1, v_nextMacroScope_963_);
lean_ctor_set(v_reuseFailAlloc_997_, 2, v_ngen_964_);
lean_ctor_set(v_reuseFailAlloc_997_, 3, v_auxDeclNGen_965_);
lean_ctor_set(v_reuseFailAlloc_997_, 4, v___x_990_);
lean_ctor_set(v_reuseFailAlloc_997_, 5, v_cache_966_);
lean_ctor_set(v_reuseFailAlloc_997_, 6, v_recordedDeps_967_);
lean_ctor_set(v_reuseFailAlloc_997_, 7, v_messages_968_);
lean_ctor_set(v_reuseFailAlloc_997_, 8, v_infoState_969_);
lean_ctor_set(v_reuseFailAlloc_997_, 9, v_snapshotTasks_970_);
v___x_992_ = v_reuseFailAlloc_997_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
lean_object* v___x_993_; lean_object* v___x_995_; 
v___x_993_ = lean_st_ref_put(v___y_952_, v___x_992_);
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 0, v___x_979_);
v___x_995_ = v___x_958_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_979_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___boxed(lean_object* v_cls_1002_, lean_object* v_msg_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v_cls_1002_, v_msg_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
return v_res_1009_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1018_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2));
v___x_1019_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4));
v___x_1020_ = l_Lean_Name_append(v___x_1019_, v___x_1018_);
return v___x_1020_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7(void){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__6));
v___x_1023_ = l_Lean_stringToMessageData(v___x_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f(uint8_t v_kind_1024_, lean_object* v_exceptionSet_1025_, lean_object* v_e_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_){
_start:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1032_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1032_, 0, v_exceptionSet_1025_);
lean_ctor_set_uint8(v___x_1032_, sizeof(void*)*1, v_kind_1024_);
v___x_1033_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_unsafe__1___closed__0);
v___x_1034_ = l_Lean_Meta_FindSplitImpl_visit(v_e_1026_, v___x_1032_, v___x_1033_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_);
lean_dec_ref_known(v___x_1032_, 1);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1082_; 
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1037_ = v___x_1034_;
v_isShared_1038_ = v_isSharedCheck_1082_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1034_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1082_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v_fst_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1080_; 
v_fst_1039_ = lean_ctor_get(v_a_1035_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v_a_1035_);
if (v_isSharedCheck_1080_ == 0)
{
lean_object* v_unused_1081_; 
v_unused_1081_ = lean_ctor_get(v_a_1035_, 1);
lean_dec(v_unused_1081_);
v___x_1041_ = v_a_1035_;
v_isShared_1042_ = v_isSharedCheck_1080_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_fst_1039_);
lean_dec(v_a_1035_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1080_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
if (lean_obj_tag(v_fst_1039_) == 1)
{
lean_object* v_toCold_1043_; lean_object* v_options_1044_; lean_object* v_val_1045_; lean_object* v_inheritedTraceOptions_1046_; uint8_t v_hasTrace_1047_; lean_object* v___x_1049_; 
v_toCold_1043_ = lean_ctor_get(v_a_1029_, 0);
v_options_1044_ = lean_ctor_get(v_toCold_1043_, 2);
v_val_1045_ = lean_ctor_get(v_fst_1039_, 0);
v_inheritedTraceOptions_1046_ = lean_ctor_get(v_toCold_1043_, 11);
v_hasTrace_1047_ = lean_ctor_get_uint8(v_options_1044_, sizeof(void*)*1);
lean_inc_ref(v_fst_1039_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v_fst_1039_);
v___x_1049_ = v___x_1037_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_fst_1039_);
v___x_1049_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
if (v_hasTrace_1047_ == 0)
{
lean_dec_ref_known(v_fst_1039_, 1);
lean_del_object(v___x_1041_);
return v___x_1049_;
}
else
{
lean_object* v___x_1050_; lean_object* v___x_1051_; uint8_t v___x_1052_; 
v___x_1050_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__2));
v___x_1051_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__5);
v___x_1052_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1046_, v_options_1044_, v___x_1051_);
if (v___x_1052_ == 0)
{
lean_dec_ref_known(v_fst_1039_, 1);
lean_del_object(v___x_1041_);
return v___x_1049_;
}
else
{
lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1056_; 
lean_dec_ref(v___x_1049_);
v___x_1053_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__7);
lean_inc(v_val_1045_);
v___x_1054_ = l_Lean_indentExpr(v_val_1045_);
if (v_isShared_1042_ == 0)
{
lean_ctor_set_tag(v___x_1041_, 7);
lean_ctor_set(v___x_1041_, 1, v___x_1054_);
lean_ctor_set(v___x_1041_, 0, v___x_1053_);
v___x_1056_ = v___x_1041_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v___x_1053_);
lean_ctor_set(v_reuseFailAlloc_1074_, 1, v___x_1054_);
v___x_1056_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
lean_object* v___x_1057_; 
v___x_1057_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_1050_, v___x_1056_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1064_; 
v_isSharedCheck_1064_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1064_ == 0)
{
lean_object* v_unused_1065_; 
v_unused_1065_ = lean_ctor_get(v___x_1057_, 0);
lean_dec(v_unused_1065_);
v___x_1059_ = v___x_1057_;
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
else
{
lean_dec(v___x_1057_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1062_; 
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 0, v_fst_1039_);
v___x_1062_ = v___x_1059_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_fst_1039_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
else
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1073_; 
lean_dec_ref_known(v_fst_1039_, 1);
v_a_1066_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1068_ = v___x_1057_;
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1057_);
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
}
}
}
}
else
{
lean_object* v___x_1076_; lean_object* v___x_1078_; 
lean_del_object(v___x_1041_);
lean_dec(v_fst_1039_);
v___x_1076_ = lean_box(0);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v___x_1076_);
v___x_1078_ = v___x_1037_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v___x_1076_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
}
}
}
else
{
lean_object* v_a_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1090_; 
v_a_1083_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1085_ = v___x_1034_;
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_dec(v___x_1034_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1088_; 
if (v_isShared_1086_ == 0)
{
v___x_1088_ = v___x_1085_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_a_1083_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___boxed(lean_object* v_kind_1091_, lean_object* v_exceptionSet_1092_, lean_object* v_e_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_){
_start:
{
uint8_t v_kind_boxed_1099_; lean_object* v_res_1100_; 
v_kind_boxed_1099_ = lean_unbox(v_kind_1091_);
v_res_1100_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f(v_kind_boxed_1099_, v_exceptionSet_1092_, v_e_1093_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_);
lean_dec(v_a_1097_);
lean_dec_ref(v_a_1096_);
lean_dec(v_a_1095_);
lean_dec_ref(v_a_1094_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go(uint8_t v_kind_1101_, lean_object* v_exceptionSet_1102_, lean_object* v_e_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_){
_start:
{
lean_object* v___y_1110_; lean_object* v___x_1113_; 
lean_inc_ref(v_exceptionSet_1102_);
v___x_1113_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f(v_kind_1101_, v_exceptionSet_1102_, v_e_1103_, v_a_1104_, v_a_1105_, v_a_1106_, v_a_1107_);
if (lean_obj_tag(v___x_1113_) == 0)
{
lean_object* v_a_1114_; 
v_a_1114_ = lean_ctor_get(v___x_1113_, 0);
if (lean_obj_tag(v_a_1114_) == 1)
{
lean_object* v_val_1115_; lean_object* v_cond_1117_; lean_object* v___y_1118_; lean_object* v___y_1119_; lean_object* v___y_1120_; lean_object* v___y_1121_; lean_object* v___y_1126_; uint8_t v___y_1127_; lean_object* v___y_1128_; uint8_t v___x_1150_; 
v_val_1115_ = lean_ctor_get(v_a_1114_, 0);
v___x_1150_ = l_Lean_Expr_isIte(v_val_1115_);
if (v___x_1150_ == 0)
{
uint8_t v___x_1151_; 
v___x_1151_ = l_Lean_Expr_isDIte(v_val_1115_);
if (v___x_1151_ == 0)
{
lean_object* v___x_1152_; uint8_t v___x_1153_; 
v___x_1152_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2));
v___x_1153_ = l_Lean_Expr_isAppOf(v_val_1115_, v___x_1152_);
if (v___x_1153_ == 0)
{
lean_dec_ref(v_exceptionSet_1102_);
return v___x_1113_;
}
else
{
lean_inc(v_val_1115_);
lean_dec_ref_known(v___x_1113_, 1);
goto v___jp_1144_;
}
}
else
{
lean_inc(v_val_1115_);
lean_dec_ref_known(v___x_1113_, 1);
goto v___jp_1144_;
}
}
else
{
lean_inc(v_val_1115_);
lean_dec_ref_known(v___x_1113_, 1);
goto v___jp_1144_;
}
v___jp_1116_:
{
lean_object* v___x_1122_; 
v___x_1122_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go(v_kind_1101_, v_exceptionSet_1102_, v_cond_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
if (lean_obj_tag(v___x_1122_) == 0)
{
lean_object* v_a_1123_; 
v_a_1123_ = lean_ctor_get(v___x_1122_, 0);
lean_inc(v_a_1123_);
lean_dec_ref_known(v___x_1122_, 1);
if (lean_obj_tag(v_a_1123_) == 0)
{
v___y_1110_ = v_val_1115_;
goto v___jp_1109_;
}
else
{
lean_object* v_val_1124_; 
lean_dec(v_val_1115_);
v_val_1124_ = lean_ctor_get(v_a_1123_, 0);
lean_inc(v_val_1124_);
lean_dec_ref_known(v_a_1123_, 1);
v___y_1110_ = v_val_1124_;
goto v___jp_1109_;
}
}
else
{
lean_dec(v_val_1115_);
return v___x_1122_;
}
}
v___jp_1125_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1129_ = lean_nat_sub(v___y_1128_, v___y_1126_);
v___x_1130_ = lean_nat_sub(v___x_1129_, v___y_1126_);
lean_dec(v___x_1129_);
v___x_1131_ = l_Lean_Expr_getRevArg_x21(v_val_1115_, v___x_1130_);
if (v___y_1127_ == 0)
{
v_cond_1117_ = v___x_1131_;
v___y_1118_ = v_a_1104_;
v___y_1119_ = v_a_1105_;
v___y_1120_ = v_a_1106_;
v___y_1121_ = v_a_1107_;
goto v___jp_1116_;
}
else
{
lean_object* v___x_1132_; 
lean_inc_ref(v___x_1131_);
v___x_1132_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f(v___x_1131_, v_a_1104_, v_a_1105_, v_a_1106_, v_a_1107_);
if (lean_obj_tag(v___x_1132_) == 0)
{
lean_object* v_a_1133_; 
v_a_1133_ = lean_ctor_get(v___x_1132_, 0);
lean_inc(v_a_1133_);
lean_dec_ref_known(v___x_1132_, 1);
if (lean_obj_tag(v_a_1133_) == 0)
{
v_cond_1117_ = v___x_1131_;
v___y_1118_ = v_a_1104_;
v___y_1119_ = v_a_1105_;
v___y_1120_ = v_a_1106_;
v___y_1121_ = v_a_1107_;
goto v___jp_1116_;
}
else
{
lean_object* v_val_1134_; lean_object* v_fst_1135_; 
lean_dec_ref(v___x_1131_);
v_val_1134_ = lean_ctor_get(v_a_1133_, 0);
lean_inc(v_val_1134_);
lean_dec_ref_known(v_a_1133_, 1);
v_fst_1135_ = lean_ctor_get(v_val_1134_, 0);
lean_inc(v_fst_1135_);
lean_dec(v_val_1134_);
v_cond_1117_ = v_fst_1135_;
v___y_1118_ = v_a_1104_;
v___y_1119_ = v_a_1105_;
v___y_1120_ = v_a_1106_;
v___y_1121_ = v_a_1107_;
goto v___jp_1116_;
}
}
else
{
lean_object* v_a_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1143_; 
lean_dec_ref(v___x_1131_);
lean_dec(v_val_1115_);
lean_dec_ref(v_exceptionSet_1102_);
v_a_1136_ = lean_ctor_get(v___x_1132_, 0);
v_isSharedCheck_1143_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1138_ = v___x_1132_;
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_a_1136_);
lean_dec(v___x_1132_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1141_; 
if (v_isShared_1139_ == 0)
{
v___x_1141_ = v___x_1138_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_a_1136_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
return v___x_1141_;
}
}
}
}
}
v___jp_1144_:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; 
v___x_1145_ = lean_unsigned_to_nat(1u);
v___x_1146_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2));
v___x_1147_ = l_Lean_Expr_isAppOf(v_val_1115_, v___x_1146_);
if (v___x_1147_ == 0)
{
lean_object* v___x_1148_; 
v___x_1148_ = lean_unsigned_to_nat(5u);
v___y_1126_ = v___x_1145_;
v___y_1127_ = v___x_1147_;
v___y_1128_ = v___x_1148_;
goto v___jp_1125_;
}
else
{
lean_object* v___x_1149_; 
v___x_1149_ = lean_unsigned_to_nat(4u);
v___y_1126_ = v___x_1145_;
v___y_1127_ = v___x_1147_;
v___y_1128_ = v___x_1149_;
goto v___jp_1125_;
}
}
}
else
{
lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1161_; 
lean_dec_ref(v_exceptionSet_1102_);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1161_ == 0)
{
lean_object* v_unused_1162_; 
v_unused_1162_ = lean_ctor_get(v___x_1113_, 0);
lean_dec(v_unused_1162_);
v___x_1155_ = v___x_1113_;
v_isShared_1156_ = v_isSharedCheck_1161_;
goto v_resetjp_1154_;
}
else
{
lean_dec(v___x_1113_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1161_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1157_; lean_object* v___x_1159_; 
v___x_1157_ = lean_box(0);
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 0, v___x_1157_);
v___x_1159_ = v___x_1155_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v___x_1157_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
}
else
{
lean_dec_ref(v_exceptionSet_1102_);
return v___x_1113_;
}
v___jp_1109_:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1111_, 0, v___y_1110_);
v___x_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
return v___x_1112_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go___boxed(lean_object* v_kind_1163_, lean_object* v_exceptionSet_1164_, lean_object* v_e_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_){
_start:
{
uint8_t v_kind_boxed_1171_; lean_object* v_res_1172_; 
v_kind_boxed_1171_ = lean_unbox(v_kind_1163_);
v_res_1172_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go(v_kind_boxed_1171_, v_exceptionSet_1164_, v_e_1165_, v_a_1166_, v_a_1167_, v_a_1168_, v_a_1169_);
lean_dec(v_a_1169_);
lean_dec_ref(v_a_1168_);
lean_dec(v_a_1167_);
lean_dec_ref(v_a_1166_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_findSplit_x3f(lean_object* v_e_1173_, uint8_t v_kind_1174_, lean_object* v_exceptionSet_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_){
_start:
{
lean_object* v___x_1181_; lean_object* v_a_1182_; lean_object* v___x_1183_; 
v___x_1181_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f_spec__0___redArg(v_e_1173_, v_a_1177_);
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
lean_inc(v_a_1182_);
lean_dec_ref(v___x_1181_);
v___x_1183_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_go(v_kind_1174_, v_exceptionSet_1175_, v_a_1182_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_findSplit_x3f___boxed(lean_object* v_e_1184_, lean_object* v_kind_1185_, lean_object* v_exceptionSet_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_){
_start:
{
uint8_t v_kind_boxed_1192_; lean_object* v_res_1193_; 
v_kind_boxed_1192_ = lean_unbox(v_kind_1185_);
v_res_1193_ = l_Lean_Meta_findSplit_x3f(v_e_1184_, v_kind_boxed_1192_, v_exceptionSet_1186_, v_a_1187_, v_a_1188_, v_a_1189_, v_a_1190_);
lean_dec(v_a_1190_);
lean_dec_ref(v_a_1189_);
lean_dec(v_a_1188_);
lean_dec_ref(v_a_1187_);
return v_res_1193_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition(lean_object* v_p_1203_){
_start:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; uint8_t v___x_1206_; 
v___x_1204_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__1));
v___x_1205_ = lean_unsigned_to_nat(1u);
v___x_1206_ = l_Lean_Expr_isAppOfArity(v_p_1203_, v___x_1204_, v___x_1205_);
if (v___x_1206_ == 0)
{
lean_object* v___x_1207_; lean_object* v___x_1208_; uint8_t v___x_1209_; 
v___x_1207_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__3));
v___x_1208_ = lean_unsigned_to_nat(3u);
v___x_1209_ = l_Lean_Expr_isAppOfArity(v_p_1203_, v___x_1207_, v___x_1208_);
if (v___x_1209_ == 0)
{
lean_dec_ref(v_p_1203_);
return v___x_1209_;
}
else
{
lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; 
v___x_1210_ = lean_unsigned_to_nat(2u);
v___x_1211_ = l_Lean_Expr_getRevArg_x21(v_p_1203_, v___x_1210_);
lean_dec_ref(v_p_1203_);
v___x_1212_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__5));
v___x_1213_ = l_Lean_Expr_isConstOf(v___x_1211_, v___x_1212_);
lean_dec_ref(v___x_1211_);
return v___x_1213_;
}
}
else
{
lean_object* v___x_1214_; 
v___x_1214_ = l_Lean_Expr_appArg_x21(v_p_1203_);
lean_dec_ref(v_p_1203_);
v_p_1203_ = v___x_1214_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___boxed(lean_object* v_p_1216_){
_start:
{
uint8_t v_res_1217_; lean_object* v_r_1218_; 
v_res_1217_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition(v_p_1216_);
v_r_1218_ = lean_box(v_res_1217_);
return v_r_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_normalizeBoolCondition(lean_object* v_p_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_){
_start:
{
uint8_t v___x_1225_; 
lean_inc_ref(v_p_1219_);
v___x_1225_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition(v_p_1219_);
if (v___x_1225_ == 0)
{
lean_object* v___x_1226_; uint8_t v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1226_ = lean_box(0);
v___x_1227_ = 1;
v___x_1228_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1228_, 0, v_p_1219_);
lean_ctor_set(v___x_1228_, 1, v___x_1226_);
lean_ctor_set_uint8(v___x_1228_, sizeof(void*)*2, v___x_1227_);
v___x_1229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1228_);
return v___x_1229_;
}
else
{
lean_object* v___x_1230_; 
v___x_1230_ = l_Lean_Meta_Simp_normalizeBoolCondition(v_p_1219_, v_a_1220_, v_a_1221_, v_a_1222_, v_a_1223_);
return v___x_1230_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_normalizeBoolCondition___boxed(lean_object* v_p_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_normalizeBoolCondition(v_p_1231_, v_a_1232_, v_a_1233_, v_a_1234_, v_a_1235_);
lean_dec(v_a_1235_);
lean_dec_ref(v_a_1234_);
lean_dec(v_a_1233_);
lean_dec_ref(v_a_1232_);
return v_res_1237_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0(void){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1238_ = lean_box(0);
v___x_1239_ = lean_unsigned_to_nat(16u);
v___x_1240_ = lean_mk_array(v___x_1239_, v___x_1238_);
return v___x_1240_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1(void){
_start:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1241_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__0);
v___x_1242_ = lean_unsigned_to_nat(0u);
v___x_1243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1242_);
lean_ctor_set(v___x_1243_, 1, v___x_1241_);
return v___x_1243_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4(void){
_start:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1247_ = lean_box(0);
v___x_1248_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__3));
v___x_1249_ = l_Lean_mkConst(v___x_1248_, v___x_1247_);
return v___x_1249_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__5(void){
_start:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = lean_unsigned_to_nat(1u);
v___x_1251_ = l_Lean_Level_ofNat(v___x_1250_);
return v___x_1251_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__6(void){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1252_ = lean_box(0);
v___x_1253_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__5, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__5_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__5);
v___x_1254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1253_);
lean_ctor_set(v___x_1254_, 1, v___x_1252_);
return v___x_1254_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7(void){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1255_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__6, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__6_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__6);
v___x_1256_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__3));
v___x_1257_ = l_Lean_mkConst(v___x_1256_, v___x_1255_);
return v___x_1257_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8(void){
_start:
{
lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1258_ = lean_box(0);
v___x_1259_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__5));
v___x_1260_ = l_Lean_mkConst(v___x_1259_, v___x_1258_);
return v___x_1260_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__11(void){
_start:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1265_ = lean_box(0);
v___x_1266_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__10));
v___x_1267_ = l_Lean_mkConst(v___x_1266_, v___x_1265_);
return v___x_1267_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__14(void){
_start:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1272_ = lean_box(0);
v___x_1273_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__13));
v___x_1274_ = l_Lean_mkConst(v___x_1273_, v___x_1272_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f(lean_object* v_e_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_){
_start:
{
uint8_t v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1281_ = 0;
v___x_1282_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__1);
v___x_1283_ = l_Lean_Meta_findSplit_x3f(v_e_1275_, v___x_1281_, v___x_1282_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v_a_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1394_; 
v_a_1284_ = lean_ctor_get(v___x_1283_, 0);
v_isSharedCheck_1394_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1394_ == 0)
{
v___x_1286_ = v___x_1283_;
v_isShared_1287_ = v_isSharedCheck_1394_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_a_1284_);
lean_dec(v___x_1283_);
v___x_1286_ = lean_box(0);
v_isShared_1287_ = v_isSharedCheck_1394_;
goto v_resetjp_1285_;
}
v_resetjp_1285_:
{
if (lean_obj_tag(v_a_1284_) == 1)
{
lean_object* v_val_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1389_; 
lean_del_object(v___x_1286_);
v_val_1288_ = lean_ctor_get(v_a_1284_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_a_1284_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1290_ = v_a_1284_;
v_isShared_1291_ = v_isSharedCheck_1389_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_val_1288_);
lean_dec(v_a_1284_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1389_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1292_; uint8_t v___x_1293_; 
v___x_1292_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2));
v___x_1293_ = l_Lean_Expr_isAppOf(v_val_1288_, v___x_1292_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1294_ = lean_unsigned_to_nat(3u);
v___x_1295_ = l_Lean_Expr_getRevArg_x21(v_val_1288_, v___x_1294_);
v___x_1296_ = lean_unsigned_to_nat(2u);
v___x_1297_ = l_Lean_Expr_getRevArg_x21(v_val_1288_, v___x_1296_);
lean_dec(v_val_1288_);
lean_inc_ref(v___x_1295_);
v___x_1298_ = l_Lean_Meta_Simp_normalizeDecisionCondition_x3f(v___x_1295_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v_a_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1358_; 
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1301_ = v___x_1298_;
v_isShared_1302_ = v_isSharedCheck_1358_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_a_1299_);
lean_dec(v___x_1298_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1358_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
if (lean_obj_tag(v_a_1299_) == 1)
{
lean_object* v_val_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1350_; 
lean_del_object(v___x_1301_);
lean_dec_ref(v___x_1295_);
lean_del_object(v___x_1290_);
v_val_1303_ = lean_ctor_get(v_a_1299_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v_a_1299_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1305_ = v_a_1299_;
v_isShared_1306_ = v_isSharedCheck_1350_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_val_1303_);
lean_dec(v_a_1299_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1350_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1307_; 
lean_inc(v_val_1303_);
v___x_1307_ = l_Lean_Meta_Simp_Result_getProof(v_val_1303_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_);
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_object* v_a_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v_a_1308_ = lean_ctor_get(v___x_1307_, 0);
lean_inc(v_a_1308_);
lean_dec_ref_known(v___x_1307_, 1);
v___x_1309_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4);
v___x_1310_ = l_Lean_Meta_mkCongrArg(v___x_1309_, v_a_1308_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1312_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
lean_inc(v_a_1311_);
lean_dec_ref_known(v___x_1310_, 1);
v___x_1312_ = l_Lean_Meta_mkEqMP(v_a_1311_, v___x_1297_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_);
if (lean_obj_tag(v___x_1312_) == 0)
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1325_; 
v_a_1313_ = lean_ctor_get(v___x_1312_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1312_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1315_ = v___x_1312_;
v_isShared_1316_ = v_isSharedCheck_1325_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v___x_1312_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1325_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v_expr_1317_; lean_object* v___x_1318_; lean_object* v___x_1320_; 
v_expr_1317_ = lean_ctor_get(v_val_1303_, 0);
lean_inc_ref(v_expr_1317_);
lean_dec(v_val_1303_);
v___x_1318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1318_, 0, v_expr_1317_);
lean_ctor_set(v___x_1318_, 1, v_a_1313_);
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 0, v___x_1318_);
v___x_1320_ = v___x_1305_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v___x_1318_);
v___x_1320_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
lean_object* v___x_1322_; 
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 0, v___x_1320_);
v___x_1322_ = v___x_1315_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v___x_1320_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
}
}
else
{
lean_object* v_a_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1333_; 
lean_del_object(v___x_1305_);
lean_dec(v_val_1303_);
v_a_1326_ = lean_ctor_get(v___x_1312_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1312_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1328_ = v___x_1312_;
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v___x_1312_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1331_; 
if (v_isShared_1329_ == 0)
{
v___x_1331_ = v___x_1328_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_a_1326_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
else
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1341_; 
lean_del_object(v___x_1305_);
lean_dec(v_val_1303_);
lean_dec_ref(v___x_1297_);
v_a_1334_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1336_ = v___x_1310_;
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v___x_1310_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
if (v_isShared_1337_ == 0)
{
v___x_1339_ = v___x_1336_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1334_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
}
else
{
lean_object* v_a_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1349_; 
lean_del_object(v___x_1305_);
lean_dec(v_val_1303_);
lean_dec_ref(v___x_1297_);
v_a_1342_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1344_ = v___x_1307_;
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_a_1342_);
lean_dec(v___x_1307_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1347_; 
if (v_isShared_1345_ == 0)
{
v___x_1347_ = v___x_1344_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_a_1342_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
}
}
else
{
lean_object* v___x_1351_; lean_object* v___x_1353_; 
lean_dec(v_a_1299_);
v___x_1351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1351_, 0, v___x_1295_);
lean_ctor_set(v___x_1351_, 1, v___x_1297_);
if (v_isShared_1291_ == 0)
{
lean_ctor_set(v___x_1290_, 0, v___x_1351_);
v___x_1353_ = v___x_1290_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v___x_1351_);
v___x_1353_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
lean_object* v___x_1355_; 
if (v_isShared_1302_ == 0)
{
lean_ctor_set(v___x_1301_, 0, v___x_1353_);
v___x_1355_ = v___x_1301_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v___x_1353_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
}
}
}
else
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
lean_dec_ref(v___x_1297_);
lean_dec_ref(v___x_1295_);
lean_del_object(v___x_1290_);
v_a_1359_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1298_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1298_);
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
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1367_ = lean_unsigned_to_nat(2u);
v___x_1368_ = l_Lean_Expr_getRevArg_x21(v_val_1288_, v___x_1367_);
lean_dec(v_val_1288_);
lean_inc_ref(v___x_1368_);
v___x_1369_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f(v___x_1368_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_);
if (lean_obj_tag(v___x_1369_) == 0)
{
lean_object* v_a_1370_; 
v_a_1370_ = lean_ctor_get(v___x_1369_, 0);
if (lean_obj_tag(v_a_1370_) == 1)
{
lean_dec_ref(v___x_1368_);
lean_del_object(v___x_1290_);
return v___x_1369_;
}
else
{
lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1387_; 
v_isSharedCheck_1387_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1387_ == 0)
{
lean_object* v_unused_1388_; 
v_unused_1388_ = lean_ctor_get(v___x_1369_, 0);
lean_dec(v_unused_1388_);
v___x_1372_ = v___x_1369_;
v_isShared_1373_ = v_isSharedCheck_1387_;
goto v_resetjp_1371_;
}
else
{
lean_dec(v___x_1369_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1387_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1382_; 
v___x_1374_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7);
v___x_1375_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8);
v___x_1376_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__11, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__11_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__11);
lean_inc_ref(v___x_1368_);
v___x_1377_ = l_Lean_mkApp3(v___x_1374_, v___x_1375_, v___x_1368_, v___x_1376_);
v___x_1378_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__14, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__14_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__14);
v___x_1379_ = l_Lean_mkAppB(v___x_1378_, v___x_1368_, v___x_1376_);
v___x_1380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1377_);
lean_ctor_set(v___x_1380_, 1, v___x_1379_);
if (v_isShared_1291_ == 0)
{
lean_ctor_set(v___x_1290_, 0, v___x_1380_);
v___x_1382_ = v___x_1290_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v___x_1380_);
v___x_1382_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
lean_object* v___x_1384_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 0, v___x_1382_);
v___x_1384_ = v___x_1372_;
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
}
else
{
lean_dec_ref(v___x_1368_);
lean_del_object(v___x_1290_);
return v___x_1369_;
}
}
}
}
else
{
lean_object* v___x_1390_; lean_object* v___x_1392_; 
lean_dec(v_a_1284_);
v___x_1390_ = lean_box(0);
if (v_isShared_1287_ == 0)
{
lean_ctor_set(v___x_1286_, 0, v___x_1390_);
v___x_1392_ = v___x_1286_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v___x_1390_);
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
else
{
lean_object* v_a_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1402_; 
v_a_1395_ = lean_ctor_get(v___x_1283_, 0);
v_isSharedCheck_1402_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1397_ = v___x_1283_;
v_isShared_1398_ = v_isSharedCheck_1402_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_a_1395_);
lean_dec(v___x_1283_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1402_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1400_; 
if (v_isShared_1398_ == 0)
{
v___x_1400_ = v___x_1397_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v_a_1395_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___boxed(lean_object* v_e_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_){
_start:
{
lean_object* v_res_1409_; 
v_res_1409_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f(v_e_1403_, v_a_1404_, v_a_1405_, v_a_1406_, v_a_1407_);
lean_dec(v_a_1407_);
lean_dec_ref(v_a_1406_);
lean_dec(v_a_1405_);
lean_dec_ref(v_a_1404_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0(lean_object* v_name_1410_, lean_object* v_decl_1411_, lean_object* v_ref_1412_){
_start:
{
lean_object* v_defValue_1414_; lean_object* v_descr_1415_; lean_object* v_deprecation_x3f_1416_; lean_object* v___x_1417_; uint8_t v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
v_defValue_1414_ = lean_ctor_get(v_decl_1411_, 0);
v_descr_1415_ = lean_ctor_get(v_decl_1411_, 1);
v_deprecation_x3f_1416_ = lean_ctor_get(v_decl_1411_, 2);
v___x_1417_ = lean_alloc_ctor(1, 0, 1);
v___x_1418_ = lean_unbox(v_defValue_1414_);
lean_ctor_set_uint8(v___x_1417_, 0, v___x_1418_);
lean_inc(v_deprecation_x3f_1416_);
lean_inc_ref(v_descr_1415_);
lean_inc_n(v_name_1410_, 2);
v___x_1419_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1419_, 0, v_name_1410_);
lean_ctor_set(v___x_1419_, 1, v_ref_1412_);
lean_ctor_set(v___x_1419_, 2, v___x_1417_);
lean_ctor_set(v___x_1419_, 3, v_descr_1415_);
lean_ctor_set(v___x_1419_, 4, v_deprecation_x3f_1416_);
v___x_1420_ = lean_register_option(v_name_1410_, v___x_1419_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1428_; 
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1428_ == 0)
{
lean_object* v_unused_1429_; 
v_unused_1429_ = lean_ctor_get(v___x_1420_, 0);
lean_dec(v_unused_1429_);
v___x_1422_ = v___x_1420_;
v_isShared_1423_ = v_isSharedCheck_1428_;
goto v_resetjp_1421_;
}
else
{
lean_dec(v___x_1420_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1428_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1424_; lean_object* v___x_1426_; 
lean_inc(v_defValue_1414_);
v___x_1424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1424_, 0, v_name_1410_);
lean_ctor_set(v___x_1424_, 1, v_defValue_1414_);
if (v_isShared_1423_ == 0)
{
lean_ctor_set(v___x_1422_, 0, v___x_1424_);
v___x_1426_ = v___x_1422_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v___x_1424_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
else
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
lean_dec(v_name_1410_);
v_a_1430_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1432_ = v___x_1420_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1420_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1430_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_1438_, lean_object* v_decl_1439_, lean_object* v_ref_1440_, lean_object* v_a_1441_){
_start:
{
lean_object* v_res_1442_; 
v_res_1442_ = l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0(v_name_1438_, v_decl_1439_, v_ref_1440_);
lean_dec_ref(v_decl_1439_);
return v_res_1442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
v___x_1461_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_));
v___x_1462_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_));
v___x_1463_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_));
v___x_1464_ = l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4__spec__0(v___x_1461_, v___x_1462_, v___x_1463_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4____boxed(lean_object* v_a_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_();
return v_res_1466_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1467_; 
v___x_1467_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1467_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1468_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0);
v___x_1469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1468_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg(){
_start:
{
lean_object* v___x_1471_; 
v___x_1471_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__1);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___boxed(lean_object* v___dummy_1472_){
_start:
{
lean_object* v_res_1473_; 
v_res_1473_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg();
return v_res_1473_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg();
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0(lean_object* v_00_u03b2_1475_){
_start:
{
lean_object* v___x_1476_; 
v___x_1476_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0);
return v___x_1476_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1477_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0);
v___x_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg(){
_start:
{
lean_object* v___x_1480_; 
v___x_1480_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___closed__0);
return v___x_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg___boxed(lean_object* v___dummy_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg();
return v_res_1482_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___redArg();
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1(lean_object* v_00_u03b2_1484_){
_start:
{
lean_object* v___x_1485_; 
v___x_1485_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0);
return v___x_1485_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_getSimpContext___closed__0(void){
_start:
{
lean_object* v___x_1486_; 
v___x_1486_ = l_Lean_Meta_DiscrTree_empty___redArg();
return v___x_1486_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_getSimpContext___closed__1(void){
_start:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1487_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0);
v___x_1488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1488_, 0, v___x_1487_);
return v___x_1488_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_getSimpContext___closed__2(void){
_start:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v_s_1493_; 
v___x_1489_ = lean_obj_once(&l_Lean_Meta_SplitIf_getSimpContext___closed__1, &l_Lean_Meta_SplitIf_getSimpContext___closed__1_once, _init_l_Lean_Meta_SplitIf_getSimpContext___closed__1);
v___x_1490_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0);
v___x_1491_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___closed__0);
v___x_1492_ = lean_obj_once(&l_Lean_Meta_SplitIf_getSimpContext___closed__0, &l_Lean_Meta_SplitIf_getSimpContext___closed__0_once, _init_l_Lean_Meta_SplitIf_getSimpContext___closed__0);
v_s_1493_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_s_1493_, 0, v___x_1492_);
lean_ctor_set(v_s_1493_, 1, v___x_1492_);
lean_ctor_set(v_s_1493_, 2, v___x_1491_);
lean_ctor_set(v_s_1493_, 3, v___x_1490_);
lean_ctor_set(v_s_1493_, 4, v___x_1491_);
lean_ctor_set(v_s_1493_, 5, v___x_1489_);
return v_s_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_getSimpContext(lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_){
_start:
{
lean_object* v_s_1519_; lean_object* v___x_1520_; uint8_t v___x_1521_; uint8_t v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v_s_1519_ = lean_obj_once(&l_Lean_Meta_SplitIf_getSimpContext___closed__2, &l_Lean_Meta_SplitIf_getSimpContext___closed__2_once, _init_l_Lean_Meta_SplitIf_getSimpContext___closed__2);
v___x_1520_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__4));
v___x_1521_ = 1;
v___x_1522_ = 0;
v___x_1523_ = lean_unsigned_to_nat(1000u);
v___x_1524_ = l_Lean_Meta_SimpTheorems_addConst(v_s_1519_, v___x_1520_, v___x_1521_, v___x_1522_, v___x_1523_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v_a_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
lean_inc(v_a_1525_);
lean_dec_ref_known(v___x_1524_, 1);
v___x_1526_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__6));
v___x_1527_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1525_, v___x_1526_, v___x_1521_, v___x_1522_, v___x_1523_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_);
if (lean_obj_tag(v___x_1527_) == 0)
{
lean_object* v_a_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
v_a_1528_ = lean_ctor_get(v___x_1527_, 0);
lean_inc(v_a_1528_);
lean_dec_ref_known(v___x_1527_, 1);
v___x_1529_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__8));
v___x_1530_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1528_, v___x_1529_, v___x_1521_, v___x_1522_, v___x_1523_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
lean_inc(v_a_1531_);
lean_dec_ref_known(v___x_1530_, 1);
v___x_1532_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__10));
v___x_1533_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1531_, v___x_1532_, v___x_1521_, v___x_1522_, v___x_1523_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1534_);
lean_dec_ref_known(v___x_1533_, 1);
v___x_1535_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__12));
v___x_1536_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1534_, v___x_1535_, v___x_1521_, v___x_1522_, v___x_1523_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_);
if (lean_obj_tag(v___x_1536_) == 0)
{
lean_object* v_a_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v_a_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_a_1537_);
lean_dec_ref_known(v___x_1536_, 1);
v___x_1538_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__14));
v___x_1539_ = l_Lean_Meta_SimpTheorems_addConst(v_a_1537_, v___x_1538_, v___x_1521_, v___x_1522_, v___x_1523_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v_a_1540_; lean_object* v___x_1541_; 
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
lean_inc(v_a_1540_);
lean_dec_ref_known(v___x_1539_, 1);
v___x_1541_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_1517_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v_a_1542_; lean_object* v___x_1543_; lean_object* v_maxSteps_1544_; lean_object* v_maxDischargeDepth_1545_; uint8_t v_contextual_1546_; uint8_t v_memoize_1547_; uint8_t v_singlePass_1548_; uint8_t v_zeta_1549_; uint8_t v_beta_1550_; uint8_t v_eta_1551_; uint8_t v_etaStruct_1552_; uint8_t v_iota_1553_; uint8_t v_proj_1554_; uint8_t v_decide_1555_; uint8_t v_arith_1556_; uint8_t v_autoUnfold_1557_; uint8_t v_failIfUnchanged_1558_; uint8_t v_ground_1559_; uint8_t v_unfoldPartialApp_1560_; uint8_t v_zetaDelta_1561_; uint8_t v_index_1562_; uint8_t v_implicitDefEqProofs_1563_; uint8_t v_zetaUnused_1564_; uint8_t v_catchRuntime_1565_; uint8_t v_zetaHave_1566_; uint8_t v_congrConsts_1567_; uint8_t v_bitVecOfNat_1568_; uint8_t v_warnExponents_1569_; uint8_t v_suggestions_1570_; lean_object* v_maxSuggestions_1571_; uint8_t v_locals_1572_; uint8_t v_instances_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
lean_inc(v_a_1542_);
lean_dec_ref_known(v___x_1541_, 1);
v___x_1543_ = l_Lean_Meta_Simp_neutralConfig;
v_maxSteps_1544_ = lean_ctor_get(v___x_1543_, 0);
v_maxDischargeDepth_1545_ = lean_ctor_get(v___x_1543_, 1);
v_contextual_1546_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3);
v_memoize_1547_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 1);
v_singlePass_1548_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 2);
v_zeta_1549_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 3);
v_beta_1550_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 4);
v_eta_1551_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 5);
v_etaStruct_1552_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 6);
v_iota_1553_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 7);
v_proj_1554_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 8);
v_decide_1555_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 9);
v_arith_1556_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 10);
v_autoUnfold_1557_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 11);
v_failIfUnchanged_1558_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 13);
v_ground_1559_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 14);
v_unfoldPartialApp_1560_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 15);
v_zetaDelta_1561_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 16);
v_index_1562_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 17);
v_implicitDefEqProofs_1563_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 18);
v_zetaUnused_1564_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 19);
v_catchRuntime_1565_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 20);
v_zetaHave_1566_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 21);
v_congrConsts_1567_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 23);
v_bitVecOfNat_1568_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 24);
v_warnExponents_1569_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 25);
v_suggestions_1570_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 26);
v_maxSuggestions_1571_ = lean_ctor_get(v___x_1543_, 2);
v_locals_1572_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 27);
v_instances_1573_ = lean_ctor_get_uint8(v___x_1543_, sizeof(void*)*3 + 28);
lean_inc(v_maxSuggestions_1571_);
lean_inc(v_maxDischargeDepth_1545_);
lean_inc(v_maxSteps_1544_);
v___x_1574_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_1574_, 0, v_maxSteps_1544_);
lean_ctor_set(v___x_1574_, 1, v_maxDischargeDepth_1545_);
lean_ctor_set(v___x_1574_, 2, v_maxSuggestions_1571_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3, v_contextual_1546_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 1, v_memoize_1547_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 2, v_singlePass_1548_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 3, v_zeta_1549_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 4, v_beta_1550_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 5, v_eta_1551_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 6, v_etaStruct_1552_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 7, v_iota_1553_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 8, v_proj_1554_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 9, v_decide_1555_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 10, v_arith_1556_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 11, v_autoUnfold_1557_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 12, v___x_1522_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 13, v_failIfUnchanged_1558_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 14, v_ground_1559_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 15, v_unfoldPartialApp_1560_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 16, v_zetaDelta_1561_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 17, v_index_1562_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 18, v_implicitDefEqProofs_1563_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 19, v_zetaUnused_1564_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 20, v_catchRuntime_1565_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 21, v_zetaHave_1566_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 22, v___x_1521_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 23, v_congrConsts_1567_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 24, v_bitVecOfNat_1568_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 25, v_warnExponents_1569_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 26, v_suggestions_1570_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 27, v_locals_1572_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*3 + 28, v_instances_1573_);
v___x_1575_ = lean_unsigned_to_nat(1u);
v___x_1576_ = lean_mk_empty_array_with_capacity(v___x_1575_);
v___x_1577_ = lean_array_push(v___x_1576_, v_a_1540_);
v___x_1578_ = l_Lean_Options_empty;
v___x_1579_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_1574_, v___x_1577_, v_a_1542_, v___x_1578_, v_a_1514_, v_a_1516_, v_a_1517_);
return v___x_1579_;
}
else
{
lean_object* v_a_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1587_; 
lean_dec(v_a_1540_);
v_a_1580_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1582_ = v___x_1541_;
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_a_1580_);
lean_dec(v___x_1541_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1585_; 
if (v_isShared_1583_ == 0)
{
v___x_1585_ = v___x_1582_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_a_1580_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
return v___x_1585_;
}
}
}
}
else
{
lean_object* v_a_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1595_; 
v_a_1588_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1595_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1595_ == 0)
{
v___x_1590_ = v___x_1539_;
v_isShared_1591_ = v_isSharedCheck_1595_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_a_1588_);
lean_dec(v___x_1539_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1595_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1593_; 
if (v_isShared_1591_ == 0)
{
v___x_1593_ = v___x_1590_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v_a_1588_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
}
}
else
{
lean_object* v_a_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1603_; 
v_a_1596_ = lean_ctor_get(v___x_1536_, 0);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1536_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1598_ = v___x_1536_;
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_a_1596_);
lean_dec(v___x_1536_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1601_; 
if (v_isShared_1599_ == 0)
{
v___x_1601_ = v___x_1598_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_a_1596_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
}
else
{
lean_object* v_a_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1611_; 
v_a_1604_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1606_ = v___x_1533_;
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_a_1604_);
lean_dec(v___x_1533_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1609_; 
if (v_isShared_1607_ == 0)
{
v___x_1609_ = v___x_1606_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_a_1604_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
return v___x_1609_;
}
}
}
}
else
{
lean_object* v_a_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1619_; 
v_a_1612_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1614_ = v___x_1530_;
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_a_1612_);
lean_dec(v___x_1530_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___x_1617_; 
if (v_isShared_1615_ == 0)
{
v___x_1617_ = v___x_1614_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_a_1612_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
}
else
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1627_; 
v_a_1620_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1627_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1622_ = v___x_1527_;
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v___x_1527_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1625_; 
if (v_isShared_1623_ == 0)
{
v___x_1625_ = v___x_1622_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_a_1620_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
}
else
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1635_; 
v_a_1628_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1630_ = v___x_1524_;
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1524_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1633_; 
if (v_isShared_1631_ == 0)
{
v___x_1633_ = v___x_1630_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1628_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_getSimpContext___boxed(lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_){
_start:
{
lean_object* v_res_1641_; 
v_res_1641_ = l_Lean_Meta_SplitIf_getSimpContext(v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_);
lean_dec(v_a_1639_);
lean_dec_ref(v_a_1638_);
lean_dec(v_a_1637_);
lean_dec_ref(v_a_1636_);
return v_res_1641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_){
_start:
{
lean_object* v___x_1648_; 
v___x_1648_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_1646_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1650_; lean_object* v_maxSteps_1651_; lean_object* v_maxDischargeDepth_1652_; uint8_t v_contextual_1653_; uint8_t v_memoize_1654_; uint8_t v_singlePass_1655_; uint8_t v_zeta_1656_; uint8_t v_beta_1657_; uint8_t v_eta_1658_; uint8_t v_etaStruct_1659_; uint8_t v_iota_1660_; uint8_t v_proj_1661_; uint8_t v_decide_1662_; uint8_t v_arith_1663_; uint8_t v_autoUnfold_1664_; uint8_t v_failIfUnchanged_1665_; uint8_t v_ground_1666_; uint8_t v_unfoldPartialApp_1667_; uint8_t v_zetaDelta_1668_; uint8_t v_index_1669_; uint8_t v_implicitDefEqProofs_1670_; uint8_t v_zetaUnused_1671_; uint8_t v_catchRuntime_1672_; uint8_t v_zetaHave_1673_; uint8_t v_congrConsts_1674_; uint8_t v_bitVecOfNat_1675_; uint8_t v_warnExponents_1676_; uint8_t v_suggestions_1677_; lean_object* v_maxSuggestions_1678_; uint8_t v_locals_1679_; uint8_t v_instances_1680_; uint8_t v___x_1681_; uint8_t v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
lean_inc(v_a_1649_);
lean_dec_ref_known(v___x_1648_, 1);
v___x_1650_ = l_Lean_Meta_Simp_neutralConfig;
v_maxSteps_1651_ = lean_ctor_get(v___x_1650_, 0);
v_maxDischargeDepth_1652_ = lean_ctor_get(v___x_1650_, 1);
v_contextual_1653_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3);
v_memoize_1654_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 1);
v_singlePass_1655_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 2);
v_zeta_1656_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 3);
v_beta_1657_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 4);
v_eta_1658_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 5);
v_etaStruct_1659_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 6);
v_iota_1660_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 7);
v_proj_1661_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 8);
v_decide_1662_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 9);
v_arith_1663_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 10);
v_autoUnfold_1664_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 11);
v_failIfUnchanged_1665_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 13);
v_ground_1666_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 14);
v_unfoldPartialApp_1667_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 15);
v_zetaDelta_1668_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 16);
v_index_1669_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 17);
v_implicitDefEqProofs_1670_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 18);
v_zetaUnused_1671_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 19);
v_catchRuntime_1672_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 20);
v_zetaHave_1673_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 21);
v_congrConsts_1674_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 23);
v_bitVecOfNat_1675_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 24);
v_warnExponents_1676_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 25);
v_suggestions_1677_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 26);
v_maxSuggestions_1678_ = lean_ctor_get(v___x_1650_, 2);
v_locals_1679_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 27);
v_instances_1680_ = lean_ctor_get_uint8(v___x_1650_, sizeof(void*)*3 + 28);
v___x_1681_ = 0;
v___x_1682_ = 1;
lean_inc(v_maxSuggestions_1678_);
lean_inc(v_maxDischargeDepth_1652_);
lean_inc(v_maxSteps_1651_);
v___x_1683_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_1683_, 0, v_maxSteps_1651_);
lean_ctor_set(v___x_1683_, 1, v_maxDischargeDepth_1652_);
lean_ctor_set(v___x_1683_, 2, v_maxSuggestions_1678_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3, v_contextual_1653_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 1, v_memoize_1654_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 2, v_singlePass_1655_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 3, v_zeta_1656_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 4, v_beta_1657_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 5, v_eta_1658_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 6, v_etaStruct_1659_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 7, v_iota_1660_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 8, v_proj_1661_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 9, v_decide_1662_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 10, v_arith_1663_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 11, v_autoUnfold_1664_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 12, v___x_1681_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 13, v_failIfUnchanged_1665_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 14, v_ground_1666_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 15, v_unfoldPartialApp_1667_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 16, v_zetaDelta_1668_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 17, v_index_1669_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 18, v_implicitDefEqProofs_1670_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 19, v_zetaUnused_1671_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 20, v_catchRuntime_1672_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 21, v_zetaHave_1673_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 22, v___x_1682_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 23, v_congrConsts_1674_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 24, v_bitVecOfNat_1675_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 25, v_warnExponents_1676_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 26, v_suggestions_1677_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 27, v_locals_1679_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 28, v_instances_1680_);
v___x_1684_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___closed__0));
v___x_1685_ = l_Lean_Options_empty;
v___x_1686_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_1683_, v___x_1684_, v_a_1649_, v___x_1685_, v_a_1644_, v_a_1645_, v_a_1646_);
return v___x_1686_;
}
else
{
lean_object* v_a_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1694_; 
v_a_1687_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1694_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1689_ = v___x_1648_;
v_isShared_1690_ = v_isSharedCheck_1694_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_a_1687_);
lean_dec(v___x_1648_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg___boxed(lean_object* v_a_1695_, lean_object* v_a_1696_, lean_object* v_a_1697_, lean_object* v_a_1698_){
_start:
{
lean_object* v_res_1699_; 
v_res_1699_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(v_a_1695_, v_a_1696_, v_a_1697_);
lean_dec(v_a_1697_);
lean_dec_ref(v_a_1696_);
lean_dec_ref(v_a_1695_);
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27(lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_){
_start:
{
lean_object* v___x_1705_; 
v___x_1705_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(v_a_1700_, v_a_1702_, v_a_1703_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___boxed(lean_object* v_a_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_){
_start:
{
lean_object* v_res_1711_; 
v_res_1711_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27(v_a_1706_, v_a_1707_, v_a_1708_, v_a_1709_);
lean_dec(v_a_1709_);
lean_dec_ref(v_a_1708_);
lean_dec(v_a_1707_);
lean_dec_ref(v_a_1706_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(lean_object* v_e_1712_, lean_object* v___y_1713_){
_start:
{
uint8_t v___x_1715_; 
v___x_1715_ = l_Lean_Expr_hasMVar(v_e_1712_);
if (v___x_1715_ == 0)
{
lean_object* v___x_1716_; 
v___x_1716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1716_, 0, v_e_1712_);
return v___x_1716_;
}
else
{
lean_object* v___x_1717_; lean_object* v_mctx_1718_; lean_object* v___x_1719_; lean_object* v_fst_1720_; lean_object* v_snd_1721_; lean_object* v___x_1722_; lean_object* v_cache_1723_; lean_object* v_zetaDeltaFVarIds_1724_; lean_object* v_postponed_1725_; lean_object* v_diag_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1735_; 
v___x_1717_ = lean_st_ref_get(v___y_1713_);
v_mctx_1718_ = lean_ctor_get(v___x_1717_, 0);
lean_inc_ref(v_mctx_1718_);
lean_dec(v___x_1717_);
v___x_1719_ = l_Lean_instantiateMVarsCore(v_mctx_1718_, v_e_1712_);
v_fst_1720_ = lean_ctor_get(v___x_1719_, 0);
lean_inc(v_fst_1720_);
v_snd_1721_ = lean_ctor_get(v___x_1719_, 1);
lean_inc(v_snd_1721_);
lean_dec_ref(v___x_1719_);
v___x_1722_ = lean_st_ref_take(v___y_1713_);
v_cache_1723_ = lean_ctor_get(v___x_1722_, 1);
v_zetaDeltaFVarIds_1724_ = lean_ctor_get(v___x_1722_, 2);
v_postponed_1725_ = lean_ctor_get(v___x_1722_, 3);
v_diag_1726_ = lean_ctor_get(v___x_1722_, 4);
v_isSharedCheck_1735_ = !lean_is_exclusive(v___x_1722_);
if (v_isSharedCheck_1735_ == 0)
{
lean_object* v_unused_1736_; 
v_unused_1736_ = lean_ctor_get(v___x_1722_, 0);
lean_dec(v_unused_1736_);
v___x_1728_ = v___x_1722_;
v_isShared_1729_ = v_isSharedCheck_1735_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_diag_1726_);
lean_inc(v_postponed_1725_);
lean_inc(v_zetaDeltaFVarIds_1724_);
lean_inc(v_cache_1723_);
lean_dec(v___x_1722_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1735_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1731_; 
if (v_isShared_1729_ == 0)
{
lean_ctor_set(v___x_1728_, 0, v_snd_1721_);
v___x_1731_ = v___x_1728_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v_snd_1721_);
lean_ctor_set(v_reuseFailAlloc_1734_, 1, v_cache_1723_);
lean_ctor_set(v_reuseFailAlloc_1734_, 2, v_zetaDeltaFVarIds_1724_);
lean_ctor_set(v_reuseFailAlloc_1734_, 3, v_postponed_1725_);
lean_ctor_set(v_reuseFailAlloc_1734_, 4, v_diag_1726_);
v___x_1731_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1732_ = lean_st_ref_put(v___y_1713_, v___x_1731_);
v___x_1733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1733_, 0, v_fst_1720_);
return v___x_1733_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg___boxed(lean_object* v_e_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(v_e_1737_, v___y_1738_);
lean_dec(v___y_1738_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0(lean_object* v_e_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
lean_object* v___x_1750_; 
v___x_1750_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(v_e_1741_, v___y_1746_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___boxed(lean_object* v_e_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0(v_e_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_, v___y_1758_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v___y_1756_);
lean_dec_ref(v___y_1755_);
lean_dec(v___y_1754_);
lean_dec_ref(v___y_1753_);
lean_dec(v___y_1752_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___redArg(lean_object* v_cls_1761_, lean_object* v_msg_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_){
_start:
{
lean_object* v_ref_1768_; lean_object* v___x_1769_; lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1815_; 
v_ref_1768_ = lean_ctor_get(v___y_1765_, 2);
v___x_1769_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0_spec__0(v_msg_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_);
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1772_ = v___x_1769_;
v_isShared_1773_ = v_isSharedCheck_1815_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v___x_1769_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1815_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1774_; lean_object* v_traceState_1775_; lean_object* v_env_1776_; lean_object* v_nextMacroScope_1777_; lean_object* v_ngen_1778_; lean_object* v_auxDeclNGen_1779_; lean_object* v_cache_1780_; lean_object* v_recordedDeps_1781_; lean_object* v_messages_1782_; lean_object* v_infoState_1783_; lean_object* v_snapshotTasks_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1814_; 
v___x_1774_ = lean_st_ref_take(v___y_1766_);
v_traceState_1775_ = lean_ctor_get(v___x_1774_, 4);
v_env_1776_ = lean_ctor_get(v___x_1774_, 0);
v_nextMacroScope_1777_ = lean_ctor_get(v___x_1774_, 1);
v_ngen_1778_ = lean_ctor_get(v___x_1774_, 2);
v_auxDeclNGen_1779_ = lean_ctor_get(v___x_1774_, 3);
v_cache_1780_ = lean_ctor_get(v___x_1774_, 5);
v_recordedDeps_1781_ = lean_ctor_get(v___x_1774_, 6);
v_messages_1782_ = lean_ctor_get(v___x_1774_, 7);
v_infoState_1783_ = lean_ctor_get(v___x_1774_, 8);
v_snapshotTasks_1784_ = lean_ctor_get(v___x_1774_, 9);
v_isSharedCheck_1814_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1786_ = v___x_1774_;
v_isShared_1787_ = v_isSharedCheck_1814_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_snapshotTasks_1784_);
lean_inc(v_infoState_1783_);
lean_inc(v_messages_1782_);
lean_inc(v_recordedDeps_1781_);
lean_inc(v_cache_1780_);
lean_inc(v_traceState_1775_);
lean_inc(v_auxDeclNGen_1779_);
lean_inc(v_ngen_1778_);
lean_inc(v_nextMacroScope_1777_);
lean_inc(v_env_1776_);
lean_dec(v___x_1774_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1814_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
uint64_t v_tid_1788_; lean_object* v_traces_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1813_; 
v_tid_1788_ = lean_ctor_get_uint64(v_traceState_1775_, sizeof(void*)*1);
v_traces_1789_ = lean_ctor_get(v_traceState_1775_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v_traceState_1775_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1791_ = v_traceState_1775_;
v_isShared_1792_ = v_isSharedCheck_1813_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_traces_1789_);
lean_dec(v_traceState_1775_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1813_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; double v___x_1795_; uint8_t v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1804_; 
v___x_1793_ = lean_box(0);
v___x_1794_ = lean_box(0);
v___x_1795_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__0);
v___x_1796_ = 0;
v___x_1797_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__1));
v___x_1798_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1798_, 0, v_cls_1761_);
lean_ctor_set(v___x_1798_, 1, v___x_1794_);
lean_ctor_set(v___x_1798_, 2, v___x_1797_);
lean_ctor_set_float(v___x_1798_, sizeof(void*)*3, v___x_1795_);
lean_ctor_set_float(v___x_1798_, sizeof(void*)*3 + 8, v___x_1795_);
lean_ctor_set_uint8(v___x_1798_, sizeof(void*)*3 + 16, v___x_1796_);
v___x_1799_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0___closed__2));
v___x_1800_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1800_, 0, v___x_1798_);
lean_ctor_set(v___x_1800_, 1, v_a_1770_);
lean_ctor_set(v___x_1800_, 2, v___x_1799_);
lean_inc(v_ref_1768_);
v___x_1801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1801_, 0, v_ref_1768_);
lean_ctor_set(v___x_1801_, 1, v___x_1800_);
v___x_1802_ = l_Lean_PersistentArray_push___redArg(v_traces_1789_, v___x_1801_);
if (v_isShared_1792_ == 0)
{
lean_ctor_set(v___x_1791_, 0, v___x_1802_);
v___x_1804_ = v___x_1791_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v___x_1802_);
lean_ctor_set_uint64(v_reuseFailAlloc_1812_, sizeof(void*)*1, v_tid_1788_);
v___x_1804_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
lean_object* v___x_1806_; 
if (v_isShared_1787_ == 0)
{
lean_ctor_set(v___x_1786_, 4, v___x_1804_);
v___x_1806_ = v___x_1786_;
goto v_reusejp_1805_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_env_1776_);
lean_ctor_set(v_reuseFailAlloc_1811_, 1, v_nextMacroScope_1777_);
lean_ctor_set(v_reuseFailAlloc_1811_, 2, v_ngen_1778_);
lean_ctor_set(v_reuseFailAlloc_1811_, 3, v_auxDeclNGen_1779_);
lean_ctor_set(v_reuseFailAlloc_1811_, 4, v___x_1804_);
lean_ctor_set(v_reuseFailAlloc_1811_, 5, v_cache_1780_);
lean_ctor_set(v_reuseFailAlloc_1811_, 6, v_recordedDeps_1781_);
lean_ctor_set(v_reuseFailAlloc_1811_, 7, v_messages_1782_);
lean_ctor_set(v_reuseFailAlloc_1811_, 8, v_infoState_1783_);
lean_ctor_set(v_reuseFailAlloc_1811_, 9, v_snapshotTasks_1784_);
v___x_1806_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1805_;
}
v_reusejp_1805_:
{
lean_object* v___x_1807_; lean_object* v___x_1809_; 
v___x_1807_ = lean_st_ref_put(v___y_1766_, v___x_1806_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 0, v___x_1793_);
v___x_1809_ = v___x_1772_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v___x_1793_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___redArg___boxed(lean_object* v_cls_1816_, lean_object* v_msg_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___redArg(v_cls_1816_, v_msg_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
lean_dec(v___y_1821_);
lean_dec_ref(v___y_1820_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
return v_res_1823_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1827_ = lean_box(0);
v___x_1828_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__1));
v___x_1829_ = l_Lean_mkConst(v___x_1828_, v___x_1827_);
return v___x_1829_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg(lean_object* v_numIndices_1830_, lean_object* v___x_1831_, lean_object* v_as_1832_, lean_object* v_i_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
lean_object* v_zero_1839_; uint8_t v_isZero_1840_; 
v_zero_1839_ = lean_unsigned_to_nat(0u);
v_isZero_1840_ = lean_nat_dec_eq(v_i_1833_, v_zero_1839_);
if (v_isZero_1840_ == 1)
{
lean_object* v___x_1841_; lean_object* v___x_1842_; 
lean_dec(v_i_1833_);
lean_dec_ref(v___x_1831_);
v___x_1841_ = lean_box(0);
v___x_1842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1841_);
return v___x_1842_;
}
else
{
lean_object* v_one_1843_; lean_object* v_n_1844_; lean_object* v___x_1845_; 
v_one_1843_ = lean_unsigned_to_nat(1u);
v_n_1844_ = lean_nat_sub(v_i_1833_, v_one_1843_);
lean_dec(v_i_1833_);
v___x_1845_ = lean_array_fget(v_as_1832_, v_n_1844_);
if (lean_obj_tag(v___x_1845_) == 0)
{
v_i_1833_ = v_n_1844_;
goto _start;
}
else
{
lean_object* v_val_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1971_; 
v_val_1847_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1849_ = v___x_1845_;
v_isShared_1850_ = v_isSharedCheck_1971_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_val_1847_);
lean_dec(v___x_1845_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1971_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1851_; uint8_t v___x_1852_; 
v___x_1851_ = l_Lean_LocalDecl_index(v_val_1847_);
v___x_1852_ = lean_nat_dec_le(v_numIndices_1830_, v___x_1851_);
lean_dec(v___x_1851_);
if (v___x_1852_ == 0)
{
uint8_t v___x_1853_; 
v___x_1853_ = l_Lean_LocalDecl_isAuxDecl(v_val_1847_);
if (v___x_1853_ == 0)
{
lean_object* v___x_1854_; lean_object* v___y_1856_; lean_object* v___y_1857_; lean_object* v___y_1858_; lean_object* v___y_1859_; lean_object* v___x_1892_; 
v___x_1854_ = l_Lean_LocalDecl_type(v_val_1847_);
lean_inc_ref(v___x_1854_);
lean_inc_ref(v___x_1831_);
v___x_1892_ = l_Lean_Meta_isExprDefEq(v___x_1831_, v___x_1854_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
if (lean_obj_tag(v___x_1892_) == 0)
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1960_; 
v_a_1893_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1960_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1895_ = v___x_1892_;
v_isShared_1896_ = v_isSharedCheck_1960_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1892_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1960_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
uint8_t v___x_1949_; 
v___x_1949_ = lean_unbox(v_a_1893_);
lean_dec(v_a_1893_);
if (v___x_1949_ == 0)
{
uint8_t v___x_1950_; 
lean_del_object(v___x_1895_);
lean_inc_ref(v___x_1854_);
v___x_1950_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition(v___x_1854_);
if (v___x_1950_ == 0)
{
lean_object* v___x_1951_; uint8_t v___x_1952_; 
v___x_1951_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__1));
v___x_1952_ = l_Lean_Expr_isAppOfArity(v___x_1854_, v___x_1951_, v_one_1843_);
if (v___x_1952_ == 0)
{
v___y_1856_ = v___y_1834_;
v___y_1857_ = v___y_1835_;
v___y_1858_ = v___y_1836_;
v___y_1859_ = v___y_1837_;
goto v___jp_1855_;
}
else
{
lean_object* v___x_1953_; uint8_t v___x_1954_; 
v___x_1953_ = l_Lean_Expr_appArg_x21(v___x_1854_);
v___x_1954_ = l_Lean_Expr_isAppOfArity(v___x_1953_, v___x_1951_, v_one_1843_);
lean_dec_ref(v___x_1953_);
if (v___x_1954_ == 0)
{
v___y_1856_ = v___y_1834_;
v___y_1857_ = v___y_1835_;
v___y_1858_ = v___y_1836_;
v___y_1859_ = v___y_1837_;
goto v___jp_1855_;
}
else
{
goto v___jp_1897_;
}
}
}
else
{
goto v___jp_1897_;
}
}
else
{
lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1958_; 
lean_dec_ref(v___x_1854_);
lean_del_object(v___x_1849_);
lean_dec(v_n_1844_);
lean_dec_ref(v___x_1831_);
v___x_1955_ = l_Lean_LocalDecl_toExpr(v_val_1847_);
v___x_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1955_);
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 0, v___x_1956_);
v___x_1958_ = v___x_1895_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v___x_1956_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
v___jp_1897_:
{
lean_object* v___x_1898_; 
lean_inc_ref(v___x_1854_);
v___x_1898_ = l_Lean_Meta_Simp_normalizeBoolCondition(v___x_1854_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
if (lean_obj_tag(v___x_1898_) == 0)
{
lean_object* v_a_1899_; lean_object* v_expr_1900_; lean_object* v___x_1901_; 
v_a_1899_ = lean_ctor_get(v___x_1898_, 0);
lean_inc(v_a_1899_);
lean_dec_ref_known(v___x_1898_, 1);
v_expr_1900_ = lean_ctor_get(v_a_1899_, 0);
lean_inc_ref(v_expr_1900_);
lean_inc_ref(v___x_1831_);
v___x_1901_ = l_Lean_Meta_isExprDefEq(v___x_1831_, v_expr_1900_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v_a_1902_; uint8_t v___x_1903_; 
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
lean_inc(v_a_1902_);
lean_dec_ref_known(v___x_1901_, 1);
v___x_1903_ = lean_unbox(v_a_1902_);
lean_dec(v_a_1902_);
if (v___x_1903_ == 0)
{
lean_dec(v_a_1899_);
v___y_1856_ = v___y_1834_;
v___y_1857_ = v___y_1835_;
v___y_1858_ = v___y_1836_;
v___y_1859_ = v___y_1837_;
goto v___jp_1855_;
}
else
{
lean_object* v___x_1904_; 
lean_dec_ref(v___x_1854_);
lean_del_object(v___x_1849_);
lean_dec(v_n_1844_);
lean_dec_ref(v___x_1831_);
v___x_1904_ = l_Lean_Meta_Simp_Result_getProof(v_a_1899_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
if (lean_obj_tag(v___x_1904_) == 0)
{
lean_object* v_a_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
v_a_1905_ = lean_ctor_get(v___x_1904_, 0);
lean_inc(v_a_1905_);
lean_dec_ref_known(v___x_1904_, 1);
v___x_1906_ = l_Lean_LocalDecl_toExpr(v_val_1847_);
v___x_1907_ = l_Lean_Meta_mkEqMP(v_a_1905_, v___x_1906_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1916_; 
v_a_1908_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1910_ = v___x_1907_;
v_isShared_1911_ = v_isSharedCheck_1916_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1907_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1916_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1912_; lean_object* v___x_1914_; 
v___x_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1912_, 0, v_a_1908_);
if (v_isShared_1911_ == 0)
{
lean_ctor_set(v___x_1910_, 0, v___x_1912_);
v___x_1914_ = v___x_1910_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v___x_1912_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
else
{
lean_object* v_a_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1924_; 
v_a_1917_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1919_ = v___x_1907_;
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_a_1917_);
lean_dec(v___x_1907_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1922_; 
if (v_isShared_1920_ == 0)
{
v___x_1922_ = v___x_1919_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_a_1917_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
}
else
{
lean_object* v_a_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1932_; 
lean_dec(v_val_1847_);
v_a_1925_ = lean_ctor_get(v___x_1904_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1904_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1927_ = v___x_1904_;
v_isShared_1928_ = v_isSharedCheck_1932_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_a_1925_);
lean_dec(v___x_1904_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1932_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v___x_1930_; 
if (v_isShared_1928_ == 0)
{
v___x_1930_ = v___x_1927_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v_a_1925_);
v___x_1930_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
return v___x_1930_;
}
}
}
}
}
else
{
lean_object* v_a_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1940_; 
lean_dec(v_a_1899_);
lean_dec_ref(v___x_1854_);
lean_del_object(v___x_1849_);
lean_dec(v_val_1847_);
lean_dec(v_n_1844_);
lean_dec_ref(v___x_1831_);
v_a_1933_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1935_ = v___x_1901_;
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_a_1933_);
lean_dec(v___x_1901_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1938_; 
if (v_isShared_1936_ == 0)
{
v___x_1938_ = v___x_1935_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_a_1933_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
return v___x_1938_;
}
}
}
}
else
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1948_; 
lean_dec_ref(v___x_1854_);
lean_del_object(v___x_1849_);
lean_dec(v_val_1847_);
lean_dec(v_n_1844_);
lean_dec_ref(v___x_1831_);
v_a_1941_ = lean_ctor_get(v___x_1898_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v___x_1898_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1943_ = v___x_1898_;
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1898_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1946_; 
if (v_isShared_1944_ == 0)
{
v___x_1946_ = v___x_1943_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_a_1941_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
}
}
}
else
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
lean_dec_ref(v___x_1854_);
lean_del_object(v___x_1849_);
lean_dec(v_val_1847_);
lean_dec(v_n_1844_);
lean_dec_ref(v___x_1831_);
v_a_1961_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1963_ = v___x_1892_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1892_);
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
v___jp_1855_:
{
lean_object* v___x_1860_; uint8_t v___x_1861_; 
v___x_1860_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__1));
v___x_1861_ = l_Lean_Expr_isAppOfArity(v___x_1831_, v___x_1860_, v_one_1843_);
if (v___x_1861_ == 0)
{
lean_dec_ref(v___x_1854_);
lean_del_object(v___x_1849_);
lean_dec(v_val_1847_);
v_i_1833_ = v_n_1844_;
goto _start;
}
else
{
lean_object* v___x_1863_; uint8_t v___x_1864_; 
v___x_1863_ = l_Lean_Expr_appArg_x21(v___x_1831_);
v___x_1864_ = l_Lean_Expr_isAppOfArity(v___x_1863_, v___x_1860_, v_one_1843_);
if (v___x_1864_ == 0)
{
lean_dec_ref(v___x_1863_);
lean_dec_ref(v___x_1854_);
lean_del_object(v___x_1849_);
lean_dec(v_val_1847_);
v_i_1833_ = v_n_1844_;
goto _start;
}
else
{
lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1866_ = l_Lean_Expr_appArg_x21(v___x_1863_);
lean_dec_ref(v___x_1863_);
lean_inc_ref(v___x_1866_);
v___x_1867_ = l_Lean_Meta_isExprDefEq(v___x_1866_, v___x_1854_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_);
if (lean_obj_tag(v___x_1867_) == 0)
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1883_; 
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1870_ = v___x_1867_;
v_isShared_1871_ = v_isSharedCheck_1883_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1867_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1883_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
uint8_t v___x_1872_; 
v___x_1872_ = lean_unbox(v_a_1868_);
lean_dec(v_a_1868_);
if (v___x_1872_ == 0)
{
lean_del_object(v___x_1870_);
lean_dec_ref(v___x_1866_);
lean_del_object(v___x_1849_);
lean_dec(v_val_1847_);
v_i_1833_ = v_n_1844_;
goto _start;
}
else
{
lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1878_; 
lean_dec(v_n_1844_);
lean_dec_ref(v___x_1831_);
v___x_1874_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___closed__2);
v___x_1875_ = l_Lean_LocalDecl_toExpr(v_val_1847_);
v___x_1876_ = l_Lean_mkAppB(v___x_1874_, v___x_1866_, v___x_1875_);
if (v_isShared_1850_ == 0)
{
lean_ctor_set(v___x_1849_, 0, v___x_1876_);
v___x_1878_ = v___x_1849_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v___x_1876_);
v___x_1878_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
lean_object* v___x_1880_; 
if (v_isShared_1871_ == 0)
{
lean_ctor_set(v___x_1870_, 0, v___x_1878_);
v___x_1880_ = v___x_1870_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v___x_1878_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
}
else
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
lean_dec_ref(v___x_1866_);
lean_del_object(v___x_1849_);
lean_dec(v_val_1847_);
lean_dec(v_n_1844_);
lean_dec_ref(v___x_1831_);
v_a_1884_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1867_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1867_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1849_);
lean_dec(v_val_1847_);
v_i_1833_ = v_n_1844_;
goto _start;
}
}
else
{
lean_del_object(v___x_1849_);
lean_dec(v_val_1847_);
v_i_1833_ = v_n_1844_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_numIndices_1972_, lean_object* v___x_1973_, lean_object* v_as_1974_, lean_object* v_i_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_){
_start:
{
lean_object* v_res_1981_; 
v_res_1981_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg(v_numIndices_1972_, v___x_1973_, v_as_1974_, v_i_1975_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_);
lean_dec(v___y_1979_);
lean_dec_ref(v___y_1978_);
lean_dec(v___y_1977_);
lean_dec_ref(v___y_1976_);
lean_dec_ref(v_as_1974_);
lean_dec(v_numIndices_1972_);
return v_res_1981_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___redArg(lean_object* v_numIndices_1982_, lean_object* v___x_1983_, lean_object* v_as_1984_, lean_object* v_i_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_){
_start:
{
lean_object* v_zero_1994_; uint8_t v_isZero_1995_; 
v_zero_1994_ = lean_unsigned_to_nat(0u);
v_isZero_1995_ = lean_nat_dec_eq(v_i_1985_, v_zero_1994_);
if (v_isZero_1995_ == 1)
{
lean_object* v___x_1996_; lean_object* v___x_1997_; 
lean_dec(v_i_1985_);
lean_dec_ref(v___x_1983_);
v___x_1996_ = lean_box(0);
v___x_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1997_, 0, v___x_1996_);
return v___x_1997_;
}
else
{
lean_object* v_one_1998_; lean_object* v_n_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v_one_1998_ = lean_unsigned_to_nat(1u);
v_n_1999_ = lean_nat_sub(v_i_1985_, v_one_1998_);
lean_dec(v_i_1985_);
v___x_2000_ = lean_array_fget_borrowed(v_as_1984_, v_n_1999_);
lean_inc_ref(v___x_1983_);
v___x_2001_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3(v_numIndices_1982_, v___x_1983_, v___x_2000_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_);
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v_a_2002_; 
v_a_2002_ = lean_ctor_get(v___x_2001_, 0);
if (lean_obj_tag(v_a_2002_) == 0)
{
lean_dec_ref_known(v___x_2001_, 1);
v_i_1985_ = v_n_1999_;
goto _start;
}
else
{
lean_dec(v_n_1999_);
lean_dec_ref(v___x_1983_);
return v___x_2001_;
}
}
else
{
lean_dec(v_n_1999_);
lean_dec_ref(v___x_1983_);
return v___x_2001_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3(lean_object* v_numIndices_2004_, lean_object* v___x_2005_, lean_object* v_x_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_){
_start:
{
if (lean_obj_tag(v_x_2006_) == 0)
{
lean_object* v_cs_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
v_cs_2015_ = lean_ctor_get(v_x_2006_, 0);
v___x_2016_ = lean_array_get_size(v_cs_2015_);
v___x_2017_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___redArg(v_numIndices_2004_, v___x_2005_, v_cs_2015_, v___x_2016_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
return v___x_2017_;
}
else
{
lean_object* v_vs_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; 
v_vs_2018_ = lean_ctor_get(v_x_2006_, 0);
v___x_2019_ = lean_array_get_size(v_vs_2018_);
v___x_2020_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg(v_numIndices_2004_, v___x_2005_, v_vs_2018_, v___x_2019_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
return v___x_2020_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3___boxed(lean_object* v_numIndices_2021_, lean_object* v___x_2022_, lean_object* v_x_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3(v_numIndices_2021_, v___x_2022_, v_x_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec(v___y_2026_);
lean_dec_ref(v___y_2025_);
lean_dec(v___y_2024_);
lean_dec_ref(v_x_2023_);
lean_dec(v_numIndices_2021_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_numIndices_2033_, lean_object* v___x_2034_, lean_object* v_as_2035_, lean_object* v_i_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_){
_start:
{
lean_object* v_res_2045_; 
v_res_2045_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___redArg(v_numIndices_2033_, v___x_2034_, v_as_2035_, v_i_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_);
lean_dec(v___y_2043_);
lean_dec_ref(v___y_2042_);
lean_dec(v___y_2041_);
lean_dec_ref(v___y_2040_);
lean_dec(v___y_2039_);
lean_dec_ref(v___y_2038_);
lean_dec(v___y_2037_);
lean_dec_ref(v_as_2035_);
lean_dec(v_numIndices_2033_);
return v_res_2045_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1(lean_object* v_numIndices_2046_, lean_object* v___x_2047_, lean_object* v_t_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_){
_start:
{
lean_object* v_root_2057_; lean_object* v_tail_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
v_root_2057_ = lean_ctor_get(v_t_2048_, 0);
v_tail_2058_ = lean_ctor_get(v_t_2048_, 1);
v___x_2059_ = lean_array_get_size(v_tail_2058_);
lean_inc_ref(v___x_2047_);
v___x_2060_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg(v_numIndices_2046_, v___x_2047_, v_tail_2058_, v___x_2059_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
if (lean_obj_tag(v_a_2061_) == 0)
{
lean_object* v___x_2062_; 
lean_dec_ref_known(v___x_2060_, 1);
v___x_2062_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3(v_numIndices_2046_, v___x_2047_, v_root_2057_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_);
return v___x_2062_;
}
else
{
lean_dec_ref(v___x_2047_);
return v___x_2060_;
}
}
else
{
lean_dec_ref(v___x_2047_);
return v___x_2060_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1___boxed(lean_object* v_numIndices_2063_, lean_object* v___x_2064_, lean_object* v_t_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1(v_numIndices_2063_, v___x_2064_, v_t_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec(v___y_2070_);
lean_dec_ref(v___y_2069_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
lean_dec(v___y_2066_);
lean_dec_ref(v_t_2065_);
lean_dec(v_numIndices_2063_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1(lean_object* v_numIndices_2075_, lean_object* v___x_2076_, lean_object* v_lctx_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_){
_start:
{
lean_object* v_decls_2086_; lean_object* v___x_2087_; 
v_decls_2086_ = lean_ctor_get(v_lctx_2077_, 1);
v___x_2087_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1(v_numIndices_2075_, v___x_2076_, v_decls_2086_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_);
return v___x_2087_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1___boxed(lean_object* v_numIndices_2088_, lean_object* v___x_2089_, lean_object* v_lctx_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_){
_start:
{
lean_object* v_res_2099_; 
v_res_2099_ = l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1(v_numIndices_2088_, v___x_2089_, v_lctx_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_);
lean_dec(v___y_2097_);
lean_dec_ref(v___y_2096_);
lean_dec(v___y_2095_);
lean_dec_ref(v___y_2094_);
lean_dec(v___y_2093_);
lean_dec_ref(v___y_2092_);
lean_dec(v___y_2091_);
lean_dec_ref(v_lctx_2090_);
lean_dec(v_numIndices_2088_);
return v_res_2099_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2(void){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2103_ = lean_box(0);
v___x_2104_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__1));
v___x_2105_ = l_Lean_mkConst(v___x_2104_, v___x_2103_);
return v___x_2105_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6(void){
_start:
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; 
v___x_2112_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5));
v___x_2113_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4));
v___x_2114_ = l_Lean_Name_append(v___x_2113_, v___x_2112_);
return v___x_2114_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8(void){
_start:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2116_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__7));
v___x_2117_ = l_Lean_stringToMessageData(v___x_2116_);
return v___x_2117_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10(void){
_start:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; 
v___x_2119_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__9));
v___x_2120_ = l_Lean_stringToMessageData(v___x_2119_);
return v___x_2120_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13(void){
_start:
{
lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2124_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__12));
v___x_2125_ = l_Lean_MessageData_ofFormat(v___x_2124_);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(lean_object* v_numIndices_2126_, uint8_t v_useDecide_2127_, lean_object* v_prop_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_){
_start:
{
lean_object* v___x_2137_; lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2319_; 
v___x_2137_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(v_prop_2128_, v_a_2133_);
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2319_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2319_ == 0)
{
v___x_2140_ = v___x_2137_;
v_isShared_2141_ = v_isSharedCheck_2319_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v___x_2137_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2319_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___y_2143_; lean_object* v___y_2144_; lean_object* v___y_2145_; lean_object* v___y_2146_; lean_object* v___y_2147_; lean_object* v___y_2148_; lean_object* v___y_2149_; lean_object* v___y_2200_; lean_object* v___y_2201_; lean_object* v___y_2202_; lean_object* v___y_2203_; lean_object* v___y_2204_; lean_object* v___y_2205_; lean_object* v___y_2206_; lean_object* v___y_2207_; lean_object* v___y_2208_; lean_object* v___y_2209_; lean_object* v___y_2246_; lean_object* v___y_2247_; lean_object* v___y_2248_; lean_object* v___y_2249_; lean_object* v___y_2250_; lean_object* v___y_2251_; lean_object* v___y_2252_; lean_object* v_toCold_2286_; lean_object* v_options_2287_; uint8_t v_hasTrace_2288_; 
v_toCold_2286_ = lean_ctor_get(v_a_2134_, 0);
v_options_2287_ = lean_ctor_get(v_toCold_2286_, 2);
v_hasTrace_2288_ = lean_ctor_get_uint8(v_options_2287_, sizeof(void*)*1);
if (v_hasTrace_2288_ == 0)
{
v___y_2246_ = v_a_2129_;
v___y_2247_ = v_a_2130_;
v___y_2248_ = v_a_2131_;
v___y_2249_ = v_a_2132_;
v___y_2250_ = v_a_2133_;
v___y_2251_ = v_a_2134_;
v___y_2252_ = v_a_2135_;
goto v___jp_2245_;
}
else
{
lean_object* v_inheritedTraceOptions_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; uint8_t v___x_2292_; 
v_inheritedTraceOptions_2289_ = lean_ctor_get(v_toCold_2286_, 11);
v___x_2290_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5));
v___x_2291_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6);
v___x_2292_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2289_, v_options_2287_, v___x_2291_);
if (v___x_2292_ == 0)
{
v___y_2246_ = v_a_2129_;
v___y_2247_ = v_a_2130_;
v___y_2248_ = v_a_2131_;
v___y_2249_ = v_a_2132_;
v___y_2250_ = v_a_2133_;
v___y_2251_ = v_a_2134_;
v___y_2252_ = v_a_2135_;
goto v___jp_2245_;
}
else
{
lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___y_2299_; lean_object* v___x_2312_; lean_object* v___x_2313_; uint8_t v___x_2314_; 
v___x_2293_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__8);
lean_inc(v_a_2138_);
v___x_2294_ = l_Lean_MessageData_ofExpr(v_a_2138_);
v___x_2295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2293_);
lean_ctor_set(v___x_2295_, 1, v___x_2294_);
v___x_2296_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__10);
v___x_2297_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2295_);
lean_ctor_set(v___x_2297_, 1, v___x_2296_);
v___x_2312_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_isBoolCondition___closed__1));
v___x_2313_ = lean_unsigned_to_nat(1u);
v___x_2314_ = l_Lean_Expr_isAppOfArity(v_a_2138_, v___x_2312_, v___x_2313_);
if (v___x_2314_ == 0)
{
goto v___jp_2310_;
}
else
{
lean_object* v___x_2315_; uint8_t v___x_2316_; 
v___x_2315_ = l_Lean_Expr_appArg_x21(v_a_2138_);
v___x_2316_ = l_Lean_Expr_isAppOfArity(v___x_2315_, v___x_2312_, v___x_2313_);
if (v___x_2316_ == 0)
{
lean_dec_ref(v___x_2315_);
goto v___jp_2310_;
}
else
{
lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2317_ = l_Lean_Expr_appArg_x21(v___x_2315_);
lean_dec_ref(v___x_2315_);
v___x_2318_ = l_Lean_MessageData_ofExpr(v___x_2317_);
v___y_2299_ = v___x_2318_;
goto v___jp_2298_;
}
}
v___jp_2298_:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2300_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2297_);
lean_ctor_set(v___x_2300_, 1, v___y_2299_);
v___x_2301_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___redArg(v___x_2290_, v___x_2300_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_);
if (lean_obj_tag(v___x_2301_) == 0)
{
lean_dec_ref_known(v___x_2301_, 1);
v___y_2246_ = v_a_2129_;
v___y_2247_ = v_a_2130_;
v___y_2248_ = v_a_2131_;
v___y_2249_ = v_a_2132_;
v___y_2250_ = v_a_2133_;
v___y_2251_ = v_a_2134_;
v___y_2252_ = v_a_2135_;
goto v___jp_2245_;
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
lean_del_object(v___x_2140_);
lean_dec(v_a_2138_);
v_a_2302_ = lean_ctor_get(v___x_2301_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___x_2301_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2301_);
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
v___jp_2310_:
{
lean_object* v___x_2311_; 
v___x_2311_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__13);
v___y_2299_ = v___x_2311_;
goto v___jp_2298_;
}
}
}
v___jp_2142_:
{
lean_object* v___x_2150_; 
v___x_2150_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_normalizeBoolCondition(v_a_2138_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
if (lean_obj_tag(v___x_2150_) == 0)
{
lean_object* v_a_2151_; lean_object* v_expr_2152_; lean_object* v_lctx_2153_; lean_object* v___x_2154_; 
v_a_2151_ = lean_ctor_get(v___x_2150_, 0);
lean_inc(v_a_2151_);
lean_dec_ref_known(v___x_2150_, 1);
v_expr_2152_ = lean_ctor_get(v_a_2151_, 0);
v_lctx_2153_ = lean_ctor_get(v___y_2146_, 2);
lean_inc_ref(v_expr_2152_);
v___x_2154_ = l_Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1(v_numIndices_2126_, v_expr_2152_, v_lctx_2153_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
if (lean_obj_tag(v___x_2154_) == 0)
{
lean_object* v_a_2155_; 
v_a_2155_ = lean_ctor_get(v___x_2154_, 0);
lean_inc(v_a_2155_);
if (lean_obj_tag(v_a_2155_) == 0)
{
lean_dec(v_a_2151_);
return v___x_2154_;
}
else
{
lean_object* v_val_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2190_; 
lean_dec_ref_known(v___x_2154_, 1);
v_val_2156_ = lean_ctor_get(v_a_2155_, 0);
v_isSharedCheck_2190_ = !lean_is_exclusive(v_a_2155_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2158_ = v_a_2155_;
v_isShared_2159_ = v_isSharedCheck_2190_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_val_2156_);
lean_dec(v_a_2155_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2190_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2160_; 
v___x_2160_ = l_Lean_Meta_Simp_Result_getProof(v_a_2151_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
if (lean_obj_tag(v___x_2160_) == 0)
{
lean_object* v_a_2161_; lean_object* v___x_2162_; 
v_a_2161_ = lean_ctor_get(v___x_2160_, 0);
lean_inc(v_a_2161_);
lean_dec_ref_known(v___x_2160_, 1);
v___x_2162_ = l_Lean_Meta_mkEqMPR(v_a_2161_, v_val_2156_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
if (lean_obj_tag(v___x_2162_) == 0)
{
lean_object* v_a_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2173_; 
v_a_2163_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2165_ = v___x_2162_;
v_isShared_2166_ = v_isSharedCheck_2173_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_a_2163_);
lean_dec(v___x_2162_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2173_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___x_2168_; 
if (v_isShared_2159_ == 0)
{
lean_ctor_set(v___x_2158_, 0, v_a_2163_);
v___x_2168_ = v___x_2158_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v_a_2163_);
v___x_2168_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
lean_object* v___x_2170_; 
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 0, v___x_2168_);
v___x_2170_ = v___x_2165_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v___x_2168_);
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
lean_object* v_a_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2181_; 
lean_del_object(v___x_2158_);
v_a_2174_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2181_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2176_ = v___x_2162_;
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_a_2174_);
lean_dec(v___x_2162_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v___x_2179_; 
if (v_isShared_2177_ == 0)
{
v___x_2179_ = v___x_2176_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v_a_2174_);
v___x_2179_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
return v___x_2179_;
}
}
}
}
else
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2189_; 
lean_del_object(v___x_2158_);
lean_dec(v_val_2156_);
v_a_2182_ = lean_ctor_get(v___x_2160_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2184_ = v___x_2160_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2160_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_a_2182_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
}
}
else
{
lean_dec(v_a_2151_);
return v___x_2154_;
}
}
else
{
lean_object* v_a_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2198_; 
v_a_2191_ = lean_ctor_get(v___x_2150_, 0);
v_isSharedCheck_2198_ = !lean_is_exclusive(v___x_2150_);
if (v_isSharedCheck_2198_ == 0)
{
v___x_2193_ = v___x_2150_;
v_isShared_2194_ = v_isSharedCheck_2198_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_a_2191_);
lean_dec(v___x_2150_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2198_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2196_; 
if (v_isShared_2194_ == 0)
{
v___x_2196_ = v___x_2193_;
goto v_reusejp_2195_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v_a_2191_);
v___x_2196_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2195_;
}
v_reusejp_2195_:
{
return v___x_2196_;
}
}
}
}
v___jp_2199_:
{
if (lean_obj_tag(v___y_2209_) == 0)
{
lean_object* v_a_2210_; lean_object* v___x_2211_; uint8_t v___x_2212_; 
v_a_2210_ = lean_ctor_get(v___y_2209_, 0);
lean_inc(v_a_2210_);
lean_dec_ref_known(v___y_2209_, 1);
v___x_2211_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__10));
v___x_2212_ = l_Lean_Expr_isConstOf(v_a_2210_, v___x_2211_);
lean_dec(v_a_2210_);
if (v___x_2212_ == 0)
{
lean_dec_ref(v___y_2208_);
lean_dec_ref(v___y_2203_);
lean_del_object(v___x_2140_);
v___y_2143_ = v___y_2200_;
v___y_2144_ = v___y_2207_;
v___y_2145_ = v___y_2205_;
v___y_2146_ = v___y_2204_;
v___y_2147_ = v___y_2206_;
v___y_2148_ = v___y_2202_;
v___y_2149_ = v___y_2201_;
goto v___jp_2142_;
}
else
{
lean_object* v___x_2213_; lean_object* v___x_2214_; 
lean_dec(v_a_2138_);
v___x_2213_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__11, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__11_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__11);
v___x_2214_ = l_Lean_Meta_mkEqRefl(v___x_2213_, v___y_2204_, v___y_2206_, v___y_2202_, v___y_2201_);
if (lean_obj_tag(v___x_2214_) == 0)
{
lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2228_; 
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2217_ = v___x_2214_;
v_isShared_2218_ = v_isSharedCheck_2228_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v___x_2214_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2228_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2223_; 
v___x_2219_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__2);
v___x_2220_ = l_Lean_Expr_appArg_x21(v___y_2203_);
lean_dec_ref(v___y_2203_);
v___x_2221_ = l_Lean_mkApp3(v___x_2219_, v___y_2208_, v___x_2220_, v_a_2215_);
if (v_isShared_2141_ == 0)
{
lean_ctor_set_tag(v___x_2140_, 1);
lean_ctor_set(v___x_2140_, 0, v___x_2221_);
v___x_2223_ = v___x_2140_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2221_);
v___x_2223_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
lean_object* v___x_2225_; 
if (v_isShared_2218_ == 0)
{
lean_ctor_set(v___x_2217_, 0, v___x_2223_);
v___x_2225_ = v___x_2217_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v___x_2223_);
v___x_2225_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
return v___x_2225_;
}
}
}
}
else
{
lean_object* v_a_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2236_; 
lean_dec_ref(v___y_2208_);
lean_dec_ref(v___y_2203_);
lean_del_object(v___x_2140_);
v_a_2229_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2236_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2231_ = v___x_2214_;
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_a_2229_);
lean_dec(v___x_2214_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2234_; 
if (v_isShared_2232_ == 0)
{
v___x_2234_ = v___x_2231_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v_a_2229_);
v___x_2234_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
return v___x_2234_;
}
}
}
}
}
else
{
lean_object* v_a_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2244_; 
lean_dec_ref(v___y_2208_);
lean_dec_ref(v___y_2203_);
lean_del_object(v___x_2140_);
lean_dec(v_a_2138_);
v_a_2237_ = lean_ctor_get(v___y_2209_, 0);
v_isSharedCheck_2244_ = !lean_is_exclusive(v___y_2209_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2239_ = v___y_2209_;
v_isShared_2240_ = v_isSharedCheck_2244_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_a_2237_);
lean_dec(v___y_2209_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2244_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
lean_object* v___x_2242_; 
if (v_isShared_2240_ == 0)
{
v___x_2242_ = v___x_2239_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v_a_2237_);
v___x_2242_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
return v___x_2242_;
}
}
}
}
v___jp_2245_:
{
if (v_useDecide_2127_ == 0)
{
lean_del_object(v___x_2140_);
v___y_2143_ = v___y_2246_;
v___y_2144_ = v___y_2247_;
v___y_2145_ = v___y_2248_;
v___y_2146_ = v___y_2249_;
v___y_2147_ = v___y_2250_;
v___y_2148_ = v___y_2251_;
v___y_2149_ = v___y_2252_;
goto v___jp_2142_;
}
else
{
lean_object* v___x_2253_; lean_object* v_a_2254_; uint8_t v___x_2255_; 
lean_inc(v_a_2138_);
v___x_2253_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__0___redArg(v_a_2138_, v___y_2250_);
v_a_2254_ = lean_ctor_get(v___x_2253_, 0);
lean_inc(v_a_2254_);
lean_dec_ref(v___x_2253_);
v___x_2255_ = l_Lean_Expr_hasFVar(v_a_2254_);
if (v___x_2255_ == 0)
{
uint8_t v___x_2256_; 
v___x_2256_ = l_Lean_Expr_hasMVar(v_a_2254_);
if (v___x_2256_ == 0)
{
lean_object* v___x_2257_; 
lean_inc(v_a_2254_);
v___x_2257_ = l_Lean_Meta_mkDecide(v_a_2254_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_);
if (lean_obj_tag(v___x_2257_) == 0)
{
lean_object* v_a_2258_; lean_object* v___x_2259_; uint8_t v_transparency_2260_; uint8_t v___x_2261_; uint8_t v___x_2262_; 
v_a_2258_ = lean_ctor_get(v___x_2257_, 0);
lean_inc(v_a_2258_);
lean_dec_ref_known(v___x_2257_, 1);
v___x_2259_ = l_Lean_Meta_Context_config(v___y_2249_);
v_transparency_2260_ = lean_ctor_get_uint8(v___x_2259_, 9);
lean_dec_ref(v___x_2259_);
v___x_2261_ = 1;
v___x_2262_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2260_, v___x_2261_);
if (v___x_2262_ == 0)
{
lean_object* v_keyedConfig_2263_; uint8_t v_trackZetaDelta_2264_; lean_object* v_zetaDeltaSet_2265_; lean_object* v_lctx_2266_; lean_object* v_localInstances_2267_; lean_object* v_defEqCtx_x3f_2268_; lean_object* v_synthPendingDepth_2269_; lean_object* v_customCanUnfoldPredicate_x3f_2270_; uint8_t v_univApprox_2271_; uint8_t v_inTypeClassResolution_2272_; uint8_t v_cacheInferType_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v_keyedConfig_2263_ = lean_ctor_get(v___y_2249_, 0);
v_trackZetaDelta_2264_ = lean_ctor_get_uint8(v___y_2249_, sizeof(void*)*7);
v_zetaDeltaSet_2265_ = lean_ctor_get(v___y_2249_, 1);
v_lctx_2266_ = lean_ctor_get(v___y_2249_, 2);
v_localInstances_2267_ = lean_ctor_get(v___y_2249_, 3);
v_defEqCtx_x3f_2268_ = lean_ctor_get(v___y_2249_, 4);
v_synthPendingDepth_2269_ = lean_ctor_get(v___y_2249_, 5);
v_customCanUnfoldPredicate_x3f_2270_ = lean_ctor_get(v___y_2249_, 6);
v_univApprox_2271_ = lean_ctor_get_uint8(v___y_2249_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2272_ = lean_ctor_get_uint8(v___y_2249_, sizeof(void*)*7 + 2);
v_cacheInferType_2273_ = lean_ctor_get_uint8(v___y_2249_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2263_);
v___x_2274_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2261_, v_keyedConfig_2263_);
lean_inc(v_customCanUnfoldPredicate_x3f_2270_);
lean_inc(v_synthPendingDepth_2269_);
lean_inc(v_defEqCtx_x3f_2268_);
lean_inc_ref(v_localInstances_2267_);
lean_inc_ref(v_lctx_2266_);
lean_inc(v_zetaDeltaSet_2265_);
v___x_2275_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2275_, 0, v___x_2274_);
lean_ctor_set(v___x_2275_, 1, v_zetaDeltaSet_2265_);
lean_ctor_set(v___x_2275_, 2, v_lctx_2266_);
lean_ctor_set(v___x_2275_, 3, v_localInstances_2267_);
lean_ctor_set(v___x_2275_, 4, v_defEqCtx_x3f_2268_);
lean_ctor_set(v___x_2275_, 5, v_synthPendingDepth_2269_);
lean_ctor_set(v___x_2275_, 6, v_customCanUnfoldPredicate_x3f_2270_);
lean_ctor_set_uint8(v___x_2275_, sizeof(void*)*7, v_trackZetaDelta_2264_);
lean_ctor_set_uint8(v___x_2275_, sizeof(void*)*7 + 1, v_univApprox_2271_);
lean_ctor_set_uint8(v___x_2275_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2272_);
lean_ctor_set_uint8(v___x_2275_, sizeof(void*)*7 + 3, v_cacheInferType_2273_);
lean_inc(v___y_2252_);
lean_inc_ref(v___y_2251_);
lean_inc(v___y_2250_);
lean_inc(v_a_2258_);
v___x_2276_ = lean_whnf(v_a_2258_, v___x_2275_, v___y_2250_, v___y_2251_, v___y_2252_);
v___y_2200_ = v___y_2246_;
v___y_2201_ = v___y_2252_;
v___y_2202_ = v___y_2251_;
v___y_2203_ = v_a_2258_;
v___y_2204_ = v___y_2249_;
v___y_2205_ = v___y_2248_;
v___y_2206_ = v___y_2250_;
v___y_2207_ = v___y_2247_;
v___y_2208_ = v_a_2254_;
v___y_2209_ = v___x_2276_;
goto v___jp_2199_;
}
else
{
lean_object* v___x_2277_; 
lean_inc(v___y_2252_);
lean_inc_ref(v___y_2251_);
lean_inc(v___y_2250_);
lean_inc_ref(v___y_2249_);
lean_inc(v_a_2258_);
v___x_2277_ = lean_whnf(v_a_2258_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_);
v___y_2200_ = v___y_2246_;
v___y_2201_ = v___y_2252_;
v___y_2202_ = v___y_2251_;
v___y_2203_ = v_a_2258_;
v___y_2204_ = v___y_2249_;
v___y_2205_ = v___y_2248_;
v___y_2206_ = v___y_2250_;
v___y_2207_ = v___y_2247_;
v___y_2208_ = v_a_2254_;
v___y_2209_ = v___x_2277_;
goto v___jp_2199_;
}
}
else
{
lean_object* v_a_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2285_; 
lean_dec(v_a_2254_);
lean_del_object(v___x_2140_);
lean_dec(v_a_2138_);
v_a_2278_ = lean_ctor_get(v___x_2257_, 0);
v_isSharedCheck_2285_ = !lean_is_exclusive(v___x_2257_);
if (v_isSharedCheck_2285_ == 0)
{
v___x_2280_ = v___x_2257_;
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_a_2278_);
lean_dec(v___x_2257_);
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
lean_dec(v_a_2254_);
lean_del_object(v___x_2140_);
v___y_2143_ = v___y_2246_;
v___y_2144_ = v___y_2247_;
v___y_2145_ = v___y_2248_;
v___y_2146_ = v___y_2249_;
v___y_2147_ = v___y_2250_;
v___y_2148_ = v___y_2251_;
v___y_2149_ = v___y_2252_;
goto v___jp_2142_;
}
}
else
{
lean_dec(v_a_2254_);
lean_del_object(v___x_2140_);
v___y_2143_ = v___y_2246_;
v___y_2144_ = v___y_2247_;
v___y_2145_ = v___y_2248_;
v___y_2146_ = v___y_2249_;
v___y_2147_ = v___y_2250_;
v___y_2148_ = v___y_2251_;
v___y_2149_ = v___y_2252_;
goto v___jp_2142_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___boxed(lean_object* v_numIndices_2320_, lean_object* v_useDecide_2321_, lean_object* v_prop_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_){
_start:
{
uint8_t v_useDecide_boxed_2331_; lean_object* v_res_2332_; 
v_useDecide_boxed_2331_ = lean_unbox(v_useDecide_2321_);
v_res_2332_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2320_, v_useDecide_boxed_2331_, v_prop_2322_, v_a_2323_, v_a_2324_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_, v_a_2329_);
lean_dec(v_a_2329_);
lean_dec_ref(v_a_2328_);
lean_dec(v_a_2327_);
lean_dec_ref(v_a_2326_);
lean_dec(v_a_2325_);
lean_dec_ref(v_a_2324_);
lean_dec(v_a_2323_);
lean_dec(v_numIndices_2320_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2(lean_object* v_cls_2333_, lean_object* v_msg_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_){
_start:
{
lean_object* v___x_2343_; 
v___x_2343_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___redArg(v_cls_2333_, v_msg_2334_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_);
return v___x_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2___boxed(lean_object* v_cls_2344_, lean_object* v_msg_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_){
_start:
{
lean_object* v_res_2354_; 
v_res_2354_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__2(v_cls_2344_, v_msg_2345_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_);
lean_dec(v___y_2352_);
lean_dec_ref(v___y_2351_);
lean_dec(v___y_2350_);
lean_dec_ref(v___y_2349_);
lean_dec(v___y_2348_);
lean_dec_ref(v___y_2347_);
lean_dec(v___y_2346_);
return v_res_2354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2(lean_object* v_numIndices_2355_, lean_object* v___x_2356_, lean_object* v_as_2357_, lean_object* v_i_2358_, lean_object* v_a_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_){
_start:
{
lean_object* v___x_2368_; 
v___x_2368_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___redArg(v_numIndices_2355_, v___x_2356_, v_as_2357_, v_i_2358_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_);
return v___x_2368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2___boxed(lean_object* v_numIndices_2369_, lean_object* v___x_2370_, lean_object* v_as_2371_, lean_object* v_i_2372_, lean_object* v_a_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_){
_start:
{
lean_object* v_res_2382_; 
v_res_2382_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__2(v_numIndices_2369_, v___x_2370_, v_as_2371_, v_i_2372_, v_a_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_);
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
lean_dec(v___y_2378_);
lean_dec_ref(v___y_2377_);
lean_dec(v___y_2376_);
lean_dec_ref(v___y_2375_);
lean_dec(v___y_2374_);
lean_dec_ref(v_as_2371_);
lean_dec(v_numIndices_2369_);
return v_res_2382_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5(lean_object* v_numIndices_2383_, lean_object* v___x_2384_, lean_object* v_as_2385_, lean_object* v_i_2386_, lean_object* v_a_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_){
_start:
{
lean_object* v___x_2396_; 
v___x_2396_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___redArg(v_numIndices_2383_, v___x_2384_, v_as_2385_, v_i_2386_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_);
return v___x_2396_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5___boxed(lean_object* v_numIndices_2397_, lean_object* v___x_2398_, lean_object* v_as_2399_, lean_object* v_i_2400_, lean_object* v_a_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f_spec__1_spec__1_spec__3_spec__5(v_numIndices_2397_, v___x_2398_, v_as_2399_, v_i_2400_, v_a_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
lean_dec(v___y_2408_);
lean_dec_ref(v___y_2407_);
lean_dec(v___y_2406_);
lean_dec_ref(v___y_2405_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
lean_dec(v___y_2402_);
lean_dec_ref(v_as_2399_);
lean_dec(v_numIndices_2397_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27(lean_object* v_numIndices_2416_, uint8_t v_useDecideBool_2417_, lean_object* v_e_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_){
_start:
{
lean_object* v___x_2430_; 
lean_inc_ref(v_e_2418_);
v___x_2430_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2418_, v_a_2423_);
if (lean_obj_tag(v___x_2430_) == 0)
{
lean_object* v_a_2431_; lean_object* v___x_2432_; uint8_t v___x_2433_; 
v_a_2431_ = lean_ctor_get(v___x_2430_, 0);
lean_inc(v_a_2431_);
lean_dec_ref_known(v___x_2430_, 1);
v___x_2432_ = l_Lean_Expr_cleanupAnnotations(v_a_2431_);
lean_dec(v_a_2431_);
v___x_2433_ = l_Lean_Expr_isApp(v___x_2432_);
if (v___x_2433_ == 0)
{
lean_dec_ref(v___x_2432_);
lean_dec_ref(v_e_2418_);
goto v___jp_2427_;
}
else
{
lean_object* v___x_2434_; uint8_t v___x_2435_; 
v___x_2434_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2432_);
v___x_2435_ = l_Lean_Expr_isApp(v___x_2434_);
if (v___x_2435_ == 0)
{
lean_dec_ref(v___x_2434_);
lean_dec_ref(v___x_2432_);
lean_dec_ref(v_e_2418_);
goto v___jp_2427_;
}
else
{
lean_object* v___x_2436_; uint8_t v___x_2437_; 
v___x_2436_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2434_);
v___x_2437_ = l_Lean_Expr_isApp(v___x_2436_);
if (v___x_2437_ == 0)
{
lean_dec_ref(v___x_2436_);
lean_dec_ref(v___x_2434_);
lean_dec_ref(v___x_2432_);
lean_dec_ref(v_e_2418_);
goto v___jp_2427_;
}
else
{
lean_object* v___x_2438_; uint8_t v___x_2439_; 
v___x_2438_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2436_);
v___x_2439_ = l_Lean_Expr_isApp(v___x_2438_);
if (v___x_2439_ == 0)
{
lean_dec_ref(v___x_2438_);
lean_dec_ref(v___x_2436_);
lean_dec_ref(v___x_2434_);
lean_dec_ref(v___x_2432_);
lean_dec_ref(v_e_2418_);
goto v___jp_2427_;
}
else
{
lean_object* v___x_2440_; uint8_t v___x_2441_; 
v___x_2440_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2438_);
v___x_2441_ = l_Lean_Expr_isApp(v___x_2440_);
if (v___x_2441_ == 0)
{
lean_dec_ref(v___x_2440_);
lean_dec_ref(v___x_2438_);
lean_dec_ref(v___x_2436_);
lean_dec_ref(v___x_2434_);
lean_dec_ref(v___x_2432_);
lean_dec_ref(v_e_2418_);
goto v___jp_2427_;
}
else
{
lean_object* v___x_2442_; lean_object* v___x_2443_; uint8_t v___x_2444_; 
v___x_2442_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2440_);
v___x_2443_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__4));
v___x_2444_ = l_Lean_Expr_isConstOf(v___x_2442_, v___x_2443_);
if (v___x_2444_ == 0)
{
lean_dec_ref(v___x_2442_);
lean_dec_ref(v___x_2440_);
lean_dec_ref(v___x_2438_);
lean_dec_ref(v___x_2436_);
lean_dec_ref(v___x_2434_);
lean_dec_ref(v___x_2432_);
lean_dec_ref(v_e_2418_);
goto v___jp_2427_;
}
else
{
lean_object* v_arg_2445_; lean_object* v_arg_2446_; lean_object* v_arg_2447_; lean_object* v_arg_2448_; lean_object* v_arg_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
v_arg_2445_ = lean_ctor_get(v___x_2432_, 1);
lean_inc_ref(v_arg_2445_);
lean_dec_ref(v___x_2432_);
v_arg_2446_ = lean_ctor_get(v___x_2434_, 1);
lean_inc_ref(v_arg_2446_);
lean_dec_ref(v___x_2434_);
v_arg_2447_ = lean_ctor_get(v___x_2436_, 1);
lean_inc_ref(v_arg_2447_);
lean_dec_ref(v___x_2436_);
v_arg_2448_ = lean_ctor_get(v___x_2438_, 1);
lean_inc_ref_n(v_arg_2448_, 2);
lean_dec_ref(v___x_2438_);
v_arg_2449_ = lean_ctor_get(v___x_2440_, 1);
lean_inc_ref(v_arg_2449_);
lean_dec_ref(v___x_2440_);
v___x_2450_ = l_Lean_Expr_constLevels_x21(v___x_2442_);
v___x_2451_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2416_, v_useDecideBool_2417_, v_arg_2448_, v_a_2419_, v_a_2420_, v_a_2421_, v_a_2422_, v_a_2423_, v_a_2424_, v_a_2425_);
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_object* v_a_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2594_; 
v_a_2452_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2594_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2594_ == 0)
{
v___x_2454_ = v___x_2451_;
v_isShared_2455_ = v_isSharedCheck_2594_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_a_2452_);
lean_dec(v___x_2451_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2594_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
if (lean_obj_tag(v_a_2452_) == 1)
{
lean_object* v_val_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2471_; 
lean_dec_ref(v___x_2442_);
lean_dec_ref(v_e_2418_);
v_val_2456_ = lean_ctor_get(v_a_2452_, 0);
v_isSharedCheck_2471_ = !lean_is_exclusive(v_a_2452_);
if (v_isSharedCheck_2471_ == 0)
{
v___x_2458_ = v_a_2452_;
v_isShared_2459_ = v_isSharedCheck_2471_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_val_2456_);
lean_dec(v_a_2452_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2471_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2464_; 
v___x_2460_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__4));
v___x_2461_ = l_Lean_mkConst(v___x_2460_, v___x_2450_);
lean_inc_ref(v_arg_2446_);
v___x_2462_ = l_Lean_mkApp6(v___x_2461_, v_arg_2448_, v_arg_2447_, v_val_2456_, v_arg_2449_, v_arg_2446_, v_arg_2445_);
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 0, v___x_2462_);
v___x_2464_ = v___x_2458_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v___x_2462_);
v___x_2464_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2468_; 
v___x_2465_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2465_, 0, v_arg_2446_);
lean_ctor_set(v___x_2465_, 1, v___x_2464_);
lean_ctor_set_uint8(v___x_2465_, sizeof(void*)*2, v___x_2444_);
v___x_2466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2466_, 0, v___x_2465_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 0, v___x_2466_);
v___x_2468_ = v___x_2454_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v___x_2466_);
v___x_2468_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
return v___x_2468_;
}
}
}
}
else
{
lean_object* v___x_2472_; lean_object* v___x_2473_; 
lean_del_object(v___x_2454_);
lean_dec(v_a_2452_);
lean_inc_ref(v_arg_2448_);
v___x_2472_ = l_Lean_mkNot(v_arg_2448_);
v___x_2473_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2416_, v_useDecideBool_2417_, v___x_2472_, v_a_2419_, v_a_2420_, v_a_2421_, v_a_2422_, v_a_2423_, v_a_2424_, v_a_2425_);
if (lean_obj_tag(v___x_2473_) == 0)
{
lean_object* v_a_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2585_; 
v_a_2474_ = lean_ctor_get(v___x_2473_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2476_ = v___x_2473_;
v_isShared_2477_ = v_isSharedCheck_2585_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_a_2474_);
lean_dec(v___x_2473_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2585_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
if (lean_obj_tag(v_a_2474_) == 1)
{
lean_object* v_val_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2493_; 
lean_dec_ref(v___x_2442_);
lean_dec_ref(v_e_2418_);
v_val_2478_ = lean_ctor_get(v_a_2474_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v_a_2474_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2480_ = v_a_2474_;
v_isShared_2481_ = v_isSharedCheck_2493_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_val_2478_);
lean_dec(v_a_2474_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2493_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2486_; 
v___x_2482_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__6));
v___x_2483_ = l_Lean_mkConst(v___x_2482_, v___x_2450_);
lean_inc_ref(v_arg_2445_);
v___x_2484_ = l_Lean_mkApp6(v___x_2483_, v_arg_2448_, v_arg_2447_, v_val_2478_, v_arg_2449_, v_arg_2446_, v_arg_2445_);
if (v_isShared_2481_ == 0)
{
lean_ctor_set(v___x_2480_, 0, v___x_2484_);
v___x_2486_ = v___x_2480_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v___x_2484_);
v___x_2486_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2490_; 
v___x_2487_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2487_, 0, v_arg_2445_);
lean_ctor_set(v___x_2487_, 1, v___x_2486_);
lean_ctor_set_uint8(v___x_2487_, sizeof(void*)*2, v___x_2444_);
v___x_2488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2487_);
if (v_isShared_2477_ == 0)
{
lean_ctor_set(v___x_2476_, 0, v___x_2488_);
v___x_2490_ = v___x_2476_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v___x_2488_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
}
else
{
lean_object* v___x_2494_; 
lean_del_object(v___x_2476_);
lean_dec(v_a_2474_);
lean_inc(v_a_2425_);
lean_inc_ref(v_a_2424_);
lean_inc(v_a_2423_);
lean_inc_ref(v_a_2422_);
lean_inc(v_a_2421_);
lean_inc_ref(v_a_2420_);
lean_inc(v_a_2419_);
lean_inc_ref(v_arg_2448_);
v___x_2494_ = lean_simp(v_arg_2448_, v_a_2419_, v_a_2420_, v_a_2421_, v_a_2422_, v_a_2423_, v_a_2424_, v_a_2425_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_a_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2576_; 
v_a_2495_ = lean_ctor_get(v___x_2494_, 0);
v_isSharedCheck_2576_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2497_ = v___x_2494_;
v_isShared_2498_ = v_isSharedCheck_2576_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_a_2495_);
lean_dec(v___x_2494_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2576_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v_expr_2499_; uint8_t v___x_2500_; 
v_expr_2499_ = lean_ctor_get(v_a_2495_, 0);
v___x_2500_ = lean_expr_eqv(v_expr_2499_, v_arg_2448_);
if (v___x_2500_ == 0)
{
lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; 
lean_del_object(v___x_2497_);
v___x_2501_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4);
lean_inc_ref(v_expr_2499_);
v___x_2502_ = l_Lean_Expr_app___override(v___x_2501_, v_expr_2499_);
v___x_2503_ = lean_box(0);
v___x_2504_ = l_Lean_Meta_trySynthInstance(v___x_2502_, v___x_2503_, v_a_2422_, v_a_2423_, v_a_2424_, v_a_2425_);
if (lean_obj_tag(v___x_2504_) == 0)
{
lean_object* v_a_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2553_; 
v_a_2505_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2553_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2553_ == 0)
{
v___x_2507_ = v___x_2504_;
v_isShared_2508_ = v_isSharedCheck_2553_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_a_2505_);
lean_dec(v___x_2504_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2553_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
if (lean_obj_tag(v_a_2505_) == 1)
{
lean_object* v_a_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2539_; 
lean_inc_ref(v_expr_2499_);
lean_del_object(v___x_2507_);
lean_dec_ref(v_e_2418_);
v_a_2509_ = lean_ctor_get(v_a_2505_, 0);
v_isSharedCheck_2539_ = !lean_is_exclusive(v_a_2505_);
if (v_isSharedCheck_2539_ == 0)
{
v___x_2511_ = v_a_2505_;
v_isShared_2512_ = v_isSharedCheck_2539_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_a_2509_);
lean_dec(v_a_2505_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2539_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v___x_2513_; 
v___x_2513_ = l_Lean_Meta_Simp_Result_getProof(v_a_2495_, v_a_2422_, v_a_2423_, v_a_2424_, v_a_2425_);
if (lean_obj_tag(v___x_2513_) == 0)
{
lean_object* v_a_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_2530_; 
v_a_2514_ = lean_ctor_get(v___x_2513_, 0);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2513_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2516_ = v___x_2513_;
v_isShared_2517_ = v_isSharedCheck_2530_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_a_2514_);
lean_dec(v___x_2513_);
v___x_2516_ = lean_box(0);
v_isShared_2517_ = v_isSharedCheck_2530_;
goto v_resetjp_2515_;
}
v_resetjp_2515_:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2523_; 
v___x_2518_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__2));
v___x_2519_ = l_Lean_mkConst(v___x_2518_, v___x_2450_);
lean_inc_ref(v_arg_2445_);
lean_inc_ref(v_arg_2446_);
lean_inc(v_a_2509_);
lean_inc_ref(v_expr_2499_);
lean_inc_ref(v_arg_2449_);
v___x_2520_ = l_Lean_mkApp8(v___x_2519_, v_arg_2449_, v_arg_2448_, v_expr_2499_, v_arg_2447_, v_a_2509_, v_arg_2446_, v_arg_2445_, v_a_2514_);
v___x_2521_ = l_Lean_mkApp5(v___x_2442_, v_arg_2449_, v_expr_2499_, v_a_2509_, v_arg_2446_, v_arg_2445_);
if (v_isShared_2512_ == 0)
{
lean_ctor_set(v___x_2511_, 0, v___x_2520_);
v___x_2523_ = v___x_2511_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v___x_2520_);
v___x_2523_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2527_; 
v___x_2524_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2524_, 0, v___x_2521_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
lean_ctor_set_uint8(v___x_2524_, sizeof(void*)*2, v___x_2444_);
v___x_2525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2525_, 0, v___x_2524_);
if (v_isShared_2517_ == 0)
{
lean_ctor_set(v___x_2516_, 0, v___x_2525_);
v___x_2527_ = v___x_2516_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v___x_2525_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
return v___x_2527_;
}
}
}
}
else
{
lean_object* v_a_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2538_; 
lean_del_object(v___x_2511_);
lean_dec(v_a_2509_);
lean_dec_ref(v_expr_2499_);
lean_dec(v___x_2450_);
lean_dec_ref(v_arg_2449_);
lean_dec_ref(v_arg_2448_);
lean_dec_ref(v_arg_2447_);
lean_dec_ref(v_arg_2446_);
lean_dec_ref(v_arg_2445_);
lean_dec_ref(v___x_2442_);
v_a_2531_ = lean_ctor_get(v___x_2513_, 0);
v_isSharedCheck_2538_ = !lean_is_exclusive(v___x_2513_);
if (v_isSharedCheck_2538_ == 0)
{
v___x_2533_ = v___x_2513_;
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_a_2531_);
lean_dec(v___x_2513_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v___x_2536_; 
if (v_isShared_2534_ == 0)
{
v___x_2536_ = v___x_2533_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_a_2531_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
}
}
}
else
{
lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2550_; 
lean_dec(v_a_2505_);
lean_dec(v___x_2450_);
lean_dec_ref(v_arg_2449_);
lean_dec_ref(v_arg_2448_);
lean_dec_ref(v_arg_2447_);
lean_dec_ref(v_arg_2446_);
lean_dec_ref(v_arg_2445_);
lean_dec_ref(v___x_2442_);
v_isSharedCheck_2550_ = !lean_is_exclusive(v_a_2495_);
if (v_isSharedCheck_2550_ == 0)
{
lean_object* v_unused_2551_; lean_object* v_unused_2552_; 
v_unused_2551_ = lean_ctor_get(v_a_2495_, 1);
lean_dec(v_unused_2551_);
v_unused_2552_ = lean_ctor_get(v_a_2495_, 0);
lean_dec(v_unused_2552_);
v___x_2541_ = v_a_2495_;
v_isShared_2542_ = v_isSharedCheck_2550_;
goto v_resetjp_2540_;
}
else
{
lean_dec(v_a_2495_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2550_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
lean_object* v___x_2544_; 
if (v_isShared_2542_ == 0)
{
lean_ctor_set(v___x_2541_, 1, v___x_2503_);
lean_ctor_set(v___x_2541_, 0, v_e_2418_);
v___x_2544_ = v___x_2541_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_e_2418_);
lean_ctor_set(v_reuseFailAlloc_2549_, 1, v___x_2503_);
v___x_2544_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
lean_object* v___x_2545_; lean_object* v___x_2547_; 
lean_ctor_set_uint8(v___x_2544_, sizeof(void*)*2, v___x_2444_);
v___x_2545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2545_, 0, v___x_2544_);
if (v_isShared_2508_ == 0)
{
lean_ctor_set(v___x_2507_, 0, v___x_2545_);
v___x_2547_ = v___x_2507_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v___x_2545_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
}
}
}
else
{
lean_object* v_a_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2561_; 
lean_dec(v_a_2495_);
lean_dec(v___x_2450_);
lean_dec_ref(v_arg_2449_);
lean_dec_ref(v_arg_2448_);
lean_dec_ref(v_arg_2447_);
lean_dec_ref(v_arg_2446_);
lean_dec_ref(v_arg_2445_);
lean_dec_ref(v___x_2442_);
lean_dec_ref(v_e_2418_);
v_a_2554_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2556_ = v___x_2504_;
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_a_2554_);
lean_dec(v___x_2504_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
lean_object* v___x_2559_; 
if (v_isShared_2557_ == 0)
{
v___x_2559_ = v___x_2556_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v_a_2554_);
v___x_2559_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
return v___x_2559_;
}
}
}
}
else
{
lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2573_; 
lean_dec(v___x_2450_);
lean_dec_ref(v_arg_2449_);
lean_dec_ref(v_arg_2448_);
lean_dec_ref(v_arg_2447_);
lean_dec_ref(v_arg_2446_);
lean_dec_ref(v_arg_2445_);
lean_dec_ref(v___x_2442_);
v_isSharedCheck_2573_ = !lean_is_exclusive(v_a_2495_);
if (v_isSharedCheck_2573_ == 0)
{
lean_object* v_unused_2574_; lean_object* v_unused_2575_; 
v_unused_2574_ = lean_ctor_get(v_a_2495_, 1);
lean_dec(v_unused_2574_);
v_unused_2575_ = lean_ctor_get(v_a_2495_, 0);
lean_dec(v_unused_2575_);
v___x_2563_ = v_a_2495_;
v_isShared_2564_ = v_isSharedCheck_2573_;
goto v_resetjp_2562_;
}
else
{
lean_dec(v_a_2495_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2573_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2565_; lean_object* v___x_2567_; 
v___x_2565_ = lean_box(0);
if (v_isShared_2564_ == 0)
{
lean_ctor_set(v___x_2563_, 1, v___x_2565_);
lean_ctor_set(v___x_2563_, 0, v_e_2418_);
v___x_2567_ = v___x_2563_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_e_2418_);
lean_ctor_set(v_reuseFailAlloc_2572_, 1, v___x_2565_);
v___x_2567_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
lean_object* v___x_2568_; lean_object* v___x_2570_; 
lean_ctor_set_uint8(v___x_2567_, sizeof(void*)*2, v___x_2500_);
v___x_2568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2567_);
if (v_isShared_2498_ == 0)
{
lean_ctor_set(v___x_2497_, 0, v___x_2568_);
v___x_2570_ = v___x_2497_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v___x_2568_);
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
}
else
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2584_; 
lean_dec(v___x_2450_);
lean_dec_ref(v_arg_2449_);
lean_dec_ref(v_arg_2448_);
lean_dec_ref(v_arg_2447_);
lean_dec_ref(v_arg_2446_);
lean_dec_ref(v_arg_2445_);
lean_dec_ref(v___x_2442_);
lean_dec_ref(v_e_2418_);
v_a_2577_ = lean_ctor_get(v___x_2494_, 0);
v_isSharedCheck_2584_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2584_ == 0)
{
v___x_2579_ = v___x_2494_;
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v___x_2494_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2582_; 
if (v_isShared_2580_ == 0)
{
v___x_2582_ = v___x_2579_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_a_2577_);
v___x_2582_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
return v___x_2582_;
}
}
}
}
}
}
else
{
lean_object* v_a_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2593_; 
lean_dec(v___x_2450_);
lean_dec_ref(v_arg_2449_);
lean_dec_ref(v_arg_2448_);
lean_dec_ref(v_arg_2447_);
lean_dec_ref(v_arg_2446_);
lean_dec_ref(v_arg_2445_);
lean_dec_ref(v___x_2442_);
lean_dec_ref(v_e_2418_);
v_a_2586_ = lean_ctor_get(v___x_2473_, 0);
v_isSharedCheck_2593_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2588_ = v___x_2473_;
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_a_2586_);
lean_dec(v___x_2473_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
lean_object* v___x_2591_; 
if (v_isShared_2589_ == 0)
{
v___x_2591_ = v___x_2588_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_a_2586_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
return v___x_2591_;
}
}
}
}
}
}
else
{
lean_object* v_a_2595_; lean_object* v___x_2597_; uint8_t v_isShared_2598_; uint8_t v_isSharedCheck_2602_; 
lean_dec(v___x_2450_);
lean_dec_ref(v_arg_2449_);
lean_dec_ref(v_arg_2448_);
lean_dec_ref(v_arg_2447_);
lean_dec_ref(v_arg_2446_);
lean_dec_ref(v_arg_2445_);
lean_dec_ref(v___x_2442_);
lean_dec_ref(v_e_2418_);
v_a_2595_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2602_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2597_ = v___x_2451_;
v_isShared_2598_ = v_isSharedCheck_2602_;
goto v_resetjp_2596_;
}
else
{
lean_inc(v_a_2595_);
lean_dec(v___x_2451_);
v___x_2597_ = lean_box(0);
v_isShared_2598_ = v_isSharedCheck_2602_;
goto v_resetjp_2596_;
}
v_resetjp_2596_:
{
lean_object* v___x_2600_; 
if (v_isShared_2598_ == 0)
{
v___x_2600_ = v___x_2597_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_a_2595_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
return v___x_2600_;
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
else
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2610_; 
lean_dec_ref(v_e_2418_);
v_a_2603_ = lean_ctor_get(v___x_2430_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2430_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2605_ = v___x_2430_;
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2430_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2608_; 
if (v_isShared_2606_ == 0)
{
v___x_2608_ = v___x_2605_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_a_2603_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
v___jp_2427_:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2428_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0));
v___x_2429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2429_, 0, v___x_2428_);
return v___x_2429_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___boxed(lean_object* v_numIndices_2611_, lean_object* v_useDecideBool_2612_, lean_object* v_e_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_, lean_object* v_a_2618_, lean_object* v_a_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_){
_start:
{
uint8_t v_useDecideBool_boxed_2622_; lean_object* v_res_2623_; 
v_useDecideBool_boxed_2622_ = lean_unbox(v_useDecideBool_2612_);
v_res_2623_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27(v_numIndices_2611_, v_useDecideBool_boxed_2622_, v_e_2613_, v_a_2614_, v_a_2615_, v_a_2616_, v_a_2617_, v_a_2618_, v_a_2619_, v_a_2620_);
lean_dec(v_a_2620_);
lean_dec_ref(v_a_2619_);
lean_dec(v_a_2618_);
lean_dec_ref(v_a_2617_);
lean_dec(v_a_2616_);
lean_dec_ref(v_a_2615_);
lean_dec(v_a_2614_);
lean_dec(v_numIndices_2611_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27(lean_object* v_numIndices_2628_, uint8_t v_useDecideBool_2629_, lean_object* v_e_2630_, lean_object* v_a_2631_, lean_object* v_a_2632_, lean_object* v_a_2633_, lean_object* v_a_2634_, lean_object* v_a_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_){
_start:
{
lean_object* v___x_2642_; 
lean_inc_ref(v_e_2630_);
v___x_2642_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2630_, v_a_2635_);
if (lean_obj_tag(v___x_2642_) == 0)
{
lean_object* v_a_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; 
v_a_2643_ = lean_ctor_get(v___x_2642_, 0);
lean_inc(v_a_2643_);
lean_dec_ref_known(v___x_2642_, 1);
v___x_2644_ = l_Lean_Expr_cleanupAnnotations(v_a_2643_);
lean_dec(v_a_2643_);
v___x_2645_ = l_Lean_Expr_isApp(v___x_2644_);
if (v___x_2645_ == 0)
{
lean_dec_ref(v___x_2644_);
lean_dec_ref(v_e_2630_);
goto v___jp_2639_;
}
else
{
lean_object* v___x_2646_; uint8_t v___x_2647_; 
v___x_2646_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2644_);
v___x_2647_ = l_Lean_Expr_isApp(v___x_2646_);
if (v___x_2647_ == 0)
{
lean_dec_ref(v___x_2646_);
lean_dec_ref(v___x_2644_);
lean_dec_ref(v_e_2630_);
goto v___jp_2639_;
}
else
{
lean_object* v___x_2648_; uint8_t v___x_2649_; 
v___x_2648_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2646_);
v___x_2649_ = l_Lean_Expr_isApp(v___x_2648_);
if (v___x_2649_ == 0)
{
lean_dec_ref(v___x_2648_);
lean_dec_ref(v___x_2646_);
lean_dec_ref(v___x_2644_);
lean_dec_ref(v_e_2630_);
goto v___jp_2639_;
}
else
{
lean_object* v___x_2650_; uint8_t v___x_2651_; 
v___x_2650_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2648_);
v___x_2651_ = l_Lean_Expr_isApp(v___x_2650_);
if (v___x_2651_ == 0)
{
lean_dec_ref(v___x_2650_);
lean_dec_ref(v___x_2648_);
lean_dec_ref(v___x_2646_);
lean_dec_ref(v___x_2644_);
lean_dec_ref(v_e_2630_);
goto v___jp_2639_;
}
else
{
lean_object* v___x_2652_; lean_object* v___x_2653_; uint8_t v___x_2654_; 
v___x_2652_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2650_);
v___x_2653_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__2));
v___x_2654_ = l_Lean_Expr_isConstOf(v___x_2652_, v___x_2653_);
if (v___x_2654_ == 0)
{
lean_dec_ref(v___x_2652_);
lean_dec_ref(v___x_2650_);
lean_dec_ref(v___x_2648_);
lean_dec_ref(v___x_2646_);
lean_dec_ref(v___x_2644_);
lean_dec_ref(v_e_2630_);
goto v___jp_2639_;
}
else
{
lean_object* v_arg_2655_; lean_object* v_arg_2656_; lean_object* v_arg_2657_; lean_object* v_arg_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
v_arg_2655_ = lean_ctor_get(v___x_2644_, 1);
lean_inc_ref(v_arg_2655_);
lean_dec_ref(v___x_2644_);
v_arg_2656_ = lean_ctor_get(v___x_2646_, 1);
lean_inc_ref(v_arg_2656_);
lean_dec_ref(v___x_2646_);
v_arg_2657_ = lean_ctor_get(v___x_2648_, 1);
lean_inc_ref_n(v_arg_2657_, 2);
lean_dec_ref(v___x_2648_);
v_arg_2658_ = lean_ctor_get(v___x_2650_, 1);
lean_inc_ref(v_arg_2658_);
lean_dec_ref(v___x_2650_);
v___x_2659_ = l_Lean_Expr_constLevels_x21(v___x_2652_);
v___x_2660_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__7);
v___x_2661_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__8);
v___x_2662_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__11, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__11_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__11);
v___x_2663_ = l_Lean_mkApp3(v___x_2660_, v___x_2661_, v_arg_2657_, v___x_2662_);
lean_inc_ref(v___x_2663_);
v___x_2664_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2628_, v_useDecideBool_2629_, v___x_2663_, v_a_2631_, v_a_2632_, v_a_2633_, v_a_2634_, v_a_2635_, v_a_2636_, v_a_2637_);
if (lean_obj_tag(v___x_2664_) == 0)
{
lean_object* v_a_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2770_; 
v_a_2665_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2667_ = v___x_2664_;
v_isShared_2668_ = v_isSharedCheck_2770_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_a_2665_);
lean_dec(v___x_2664_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2770_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
if (lean_obj_tag(v_a_2665_) == 1)
{
lean_object* v_val_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2684_; 
lean_dec_ref(v___x_2663_);
lean_dec_ref(v___x_2652_);
lean_dec_ref(v_e_2630_);
v_val_2669_ = lean_ctor_get(v_a_2665_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v_a_2665_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2671_ = v_a_2665_;
v_isShared_2672_ = v_isSharedCheck_2684_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_val_2669_);
lean_dec(v_a_2665_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2684_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2677_; 
v___x_2673_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__12));
v___x_2674_ = l_Lean_mkConst(v___x_2673_, v___x_2659_);
lean_inc_ref(v_arg_2656_);
v___x_2675_ = l_Lean_mkApp5(v___x_2674_, v_arg_2658_, v_arg_2657_, v_val_2669_, v_arg_2656_, v_arg_2655_);
if (v_isShared_2672_ == 0)
{
lean_ctor_set(v___x_2671_, 0, v___x_2675_);
v___x_2677_ = v___x_2671_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v___x_2675_);
v___x_2677_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2681_; 
v___x_2678_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2678_, 0, v_arg_2656_);
lean_ctor_set(v___x_2678_, 1, v___x_2677_);
lean_ctor_set_uint8(v___x_2678_, sizeof(void*)*2, v___x_2654_);
v___x_2679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2678_);
if (v_isShared_2668_ == 0)
{
lean_ctor_set(v___x_2667_, 0, v___x_2679_);
v___x_2681_ = v___x_2667_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v___x_2679_);
v___x_2681_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
return v___x_2681_;
}
}
}
}
else
{
lean_object* v___x_2685_; lean_object* v___x_2686_; 
lean_del_object(v___x_2667_);
lean_dec(v_a_2665_);
v___x_2685_ = l_Lean_mkNot(v___x_2663_);
v___x_2686_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2628_, v_useDecideBool_2629_, v___x_2685_, v_a_2631_, v_a_2632_, v_a_2633_, v_a_2634_, v_a_2635_, v_a_2636_, v_a_2637_);
if (lean_obj_tag(v___x_2686_) == 0)
{
lean_object* v_a_2687_; lean_object* v___x_2689_; uint8_t v_isShared_2690_; uint8_t v_isSharedCheck_2761_; 
v_a_2687_ = lean_ctor_get(v___x_2686_, 0);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2686_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2689_ = v___x_2686_;
v_isShared_2690_ = v_isSharedCheck_2761_;
goto v_resetjp_2688_;
}
else
{
lean_inc(v_a_2687_);
lean_dec(v___x_2686_);
v___x_2689_ = lean_box(0);
v_isShared_2690_ = v_isSharedCheck_2761_;
goto v_resetjp_2688_;
}
v_resetjp_2688_:
{
if (lean_obj_tag(v_a_2687_) == 1)
{
lean_object* v_val_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2706_; 
lean_dec_ref(v___x_2652_);
lean_dec_ref(v_e_2630_);
v_val_2691_ = lean_ctor_get(v_a_2687_, 0);
v_isSharedCheck_2706_ = !lean_is_exclusive(v_a_2687_);
if (v_isSharedCheck_2706_ == 0)
{
v___x_2693_ = v_a_2687_;
v_isShared_2694_ = v_isSharedCheck_2706_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_val_2691_);
lean_dec(v_a_2687_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2706_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2699_; 
v___x_2695_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__14));
v___x_2696_ = l_Lean_mkConst(v___x_2695_, v___x_2659_);
lean_inc_ref(v_arg_2655_);
v___x_2697_ = l_Lean_mkApp5(v___x_2696_, v_arg_2658_, v_arg_2657_, v_val_2691_, v_arg_2656_, v_arg_2655_);
if (v_isShared_2694_ == 0)
{
lean_ctor_set(v___x_2693_, 0, v___x_2697_);
v___x_2699_ = v___x_2693_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v___x_2697_);
v___x_2699_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2703_; 
v___x_2700_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2700_, 0, v_arg_2655_);
lean_ctor_set(v___x_2700_, 1, v___x_2699_);
lean_ctor_set_uint8(v___x_2700_, sizeof(void*)*2, v___x_2654_);
v___x_2701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2701_, 0, v___x_2700_);
if (v_isShared_2690_ == 0)
{
lean_ctor_set(v___x_2689_, 0, v___x_2701_);
v___x_2703_ = v___x_2689_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v___x_2701_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
}
else
{
lean_object* v___x_2707_; 
lean_del_object(v___x_2689_);
lean_dec(v_a_2687_);
lean_inc(v_a_2637_);
lean_inc_ref(v_a_2636_);
lean_inc(v_a_2635_);
lean_inc_ref(v_a_2634_);
lean_inc(v_a_2633_);
lean_inc_ref(v_a_2632_);
lean_inc(v_a_2631_);
lean_inc_ref(v_arg_2657_);
v___x_2707_ = lean_simp(v_arg_2657_, v_a_2631_, v_a_2632_, v_a_2633_, v_a_2634_, v_a_2635_, v_a_2636_, v_a_2637_);
if (lean_obj_tag(v___x_2707_) == 0)
{
lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2752_; 
v_a_2708_ = lean_ctor_get(v___x_2707_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2710_ = v___x_2707_;
v_isShared_2711_ = v_isSharedCheck_2752_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_dec(v___x_2707_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2752_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v_expr_2712_; uint8_t v___x_2713_; 
v_expr_2712_ = lean_ctor_get(v_a_2708_, 0);
v___x_2713_ = lean_expr_eqv(v_expr_2712_, v_arg_2657_);
if (v___x_2713_ == 0)
{
lean_object* v___x_2714_; 
lean_inc_ref(v_expr_2712_);
lean_del_object(v___x_2710_);
lean_dec_ref(v_e_2630_);
v___x_2714_ = l_Lean_Meta_Simp_Result_getProof(v_a_2708_, v_a_2634_, v_a_2635_, v_a_2636_, v_a_2637_);
if (lean_obj_tag(v___x_2714_) == 0)
{
lean_object* v_a_2715_; lean_object* v___x_2717_; uint8_t v_isShared_2718_; uint8_t v_isSharedCheck_2729_; 
v_a_2715_ = lean_ctor_get(v___x_2714_, 0);
v_isSharedCheck_2729_ = !lean_is_exclusive(v___x_2714_);
if (v_isSharedCheck_2729_ == 0)
{
v___x_2717_ = v___x_2714_;
v_isShared_2718_ = v_isSharedCheck_2729_;
goto v_resetjp_2716_;
}
else
{
lean_inc(v_a_2715_);
lean_dec(v___x_2714_);
v___x_2717_ = lean_box(0);
v_isShared_2718_ = v_isSharedCheck_2729_;
goto v_resetjp_2716_;
}
v_resetjp_2716_:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2727_; 
v___x_2719_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___closed__1));
v___x_2720_ = l_Lean_mkConst(v___x_2719_, v___x_2659_);
lean_inc_ref(v_arg_2655_);
lean_inc_ref(v_arg_2656_);
lean_inc_ref(v_expr_2712_);
lean_inc_ref(v_arg_2658_);
v___x_2721_ = l_Lean_mkApp6(v___x_2720_, v_arg_2658_, v_arg_2657_, v_expr_2712_, v_a_2715_, v_arg_2656_, v_arg_2655_);
v___x_2722_ = l_Lean_mkApp4(v___x_2652_, v_arg_2658_, v_expr_2712_, v_arg_2656_, v_arg_2655_);
v___x_2723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2721_);
v___x_2724_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2724_, 0, v___x_2722_);
lean_ctor_set(v___x_2724_, 1, v___x_2723_);
lean_ctor_set_uint8(v___x_2724_, sizeof(void*)*2, v___x_2654_);
v___x_2725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2724_);
if (v_isShared_2718_ == 0)
{
lean_ctor_set(v___x_2717_, 0, v___x_2725_);
v___x_2727_ = v___x_2717_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v___x_2725_);
v___x_2727_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
return v___x_2727_;
}
}
}
else
{
lean_object* v_a_2730_; lean_object* v___x_2732_; uint8_t v_isShared_2733_; uint8_t v_isSharedCheck_2737_; 
lean_dec_ref(v_expr_2712_);
lean_dec(v___x_2659_);
lean_dec_ref(v_arg_2658_);
lean_dec_ref(v_arg_2657_);
lean_dec_ref(v_arg_2656_);
lean_dec_ref(v_arg_2655_);
lean_dec_ref(v___x_2652_);
v_a_2730_ = lean_ctor_get(v___x_2714_, 0);
v_isSharedCheck_2737_ = !lean_is_exclusive(v___x_2714_);
if (v_isSharedCheck_2737_ == 0)
{
v___x_2732_ = v___x_2714_;
v_isShared_2733_ = v_isSharedCheck_2737_;
goto v_resetjp_2731_;
}
else
{
lean_inc(v_a_2730_);
lean_dec(v___x_2714_);
v___x_2732_ = lean_box(0);
v_isShared_2733_ = v_isSharedCheck_2737_;
goto v_resetjp_2731_;
}
v_resetjp_2731_:
{
lean_object* v___x_2735_; 
if (v_isShared_2733_ == 0)
{
v___x_2735_ = v___x_2732_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v_a_2730_);
v___x_2735_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
return v___x_2735_;
}
}
}
}
else
{
lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2749_; 
lean_dec(v___x_2659_);
lean_dec_ref(v_arg_2658_);
lean_dec_ref(v_arg_2657_);
lean_dec_ref(v_arg_2656_);
lean_dec_ref(v_arg_2655_);
lean_dec_ref(v___x_2652_);
v_isSharedCheck_2749_ = !lean_is_exclusive(v_a_2708_);
if (v_isSharedCheck_2749_ == 0)
{
lean_object* v_unused_2750_; lean_object* v_unused_2751_; 
v_unused_2750_ = lean_ctor_get(v_a_2708_, 1);
lean_dec(v_unused_2750_);
v_unused_2751_ = lean_ctor_get(v_a_2708_, 0);
lean_dec(v_unused_2751_);
v___x_2739_ = v_a_2708_;
v_isShared_2740_ = v_isSharedCheck_2749_;
goto v_resetjp_2738_;
}
else
{
lean_dec(v_a_2708_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2749_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v___x_2741_; lean_object* v___x_2743_; 
v___x_2741_ = lean_box(0);
if (v_isShared_2740_ == 0)
{
lean_ctor_set(v___x_2739_, 1, v___x_2741_);
lean_ctor_set(v___x_2739_, 0, v_e_2630_);
v___x_2743_ = v___x_2739_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_e_2630_);
lean_ctor_set(v_reuseFailAlloc_2748_, 1, v___x_2741_);
v___x_2743_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
lean_object* v___x_2744_; lean_object* v___x_2746_; 
lean_ctor_set_uint8(v___x_2743_, sizeof(void*)*2, v___x_2713_);
v___x_2744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2743_);
if (v_isShared_2711_ == 0)
{
lean_ctor_set(v___x_2710_, 0, v___x_2744_);
v___x_2746_ = v___x_2710_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v___x_2744_);
v___x_2746_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
return v___x_2746_;
}
}
}
}
}
}
else
{
lean_object* v_a_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2760_; 
lean_dec(v___x_2659_);
lean_dec_ref(v_arg_2658_);
lean_dec_ref(v_arg_2657_);
lean_dec_ref(v_arg_2656_);
lean_dec_ref(v_arg_2655_);
lean_dec_ref(v___x_2652_);
lean_dec_ref(v_e_2630_);
v_a_2753_ = lean_ctor_get(v___x_2707_, 0);
v_isSharedCheck_2760_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2755_ = v___x_2707_;
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_a_2753_);
lean_dec(v___x_2707_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2758_; 
if (v_isShared_2756_ == 0)
{
v___x_2758_ = v___x_2755_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_a_2753_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
}
}
}
}
else
{
lean_object* v_a_2762_; lean_object* v___x_2764_; uint8_t v_isShared_2765_; uint8_t v_isSharedCheck_2769_; 
lean_dec(v___x_2659_);
lean_dec_ref(v_arg_2658_);
lean_dec_ref(v_arg_2657_);
lean_dec_ref(v_arg_2656_);
lean_dec_ref(v_arg_2655_);
lean_dec_ref(v___x_2652_);
lean_dec_ref(v_e_2630_);
v_a_2762_ = lean_ctor_get(v___x_2686_, 0);
v_isSharedCheck_2769_ = !lean_is_exclusive(v___x_2686_);
if (v_isSharedCheck_2769_ == 0)
{
v___x_2764_ = v___x_2686_;
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
else
{
lean_inc(v_a_2762_);
lean_dec(v___x_2686_);
v___x_2764_ = lean_box(0);
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
v_resetjp_2763_:
{
lean_object* v___x_2767_; 
if (v_isShared_2765_ == 0)
{
v___x_2767_ = v___x_2764_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v_a_2762_);
v___x_2767_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
return v___x_2767_;
}
}
}
}
}
}
else
{
lean_object* v_a_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2778_; 
lean_dec_ref(v___x_2663_);
lean_dec(v___x_2659_);
lean_dec_ref(v_arg_2658_);
lean_dec_ref(v_arg_2657_);
lean_dec_ref(v_arg_2656_);
lean_dec_ref(v_arg_2655_);
lean_dec_ref(v___x_2652_);
lean_dec_ref(v_e_2630_);
v_a_2771_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2778_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2778_ == 0)
{
v___x_2773_ = v___x_2664_;
v_isShared_2774_ = v_isSharedCheck_2778_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_a_2771_);
lean_dec(v___x_2664_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2778_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2776_; 
if (v_isShared_2774_ == 0)
{
v___x_2776_ = v___x_2773_;
goto v_reusejp_2775_;
}
else
{
lean_object* v_reuseFailAlloc_2777_; 
v_reuseFailAlloc_2777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2777_, 0, v_a_2771_);
v___x_2776_ = v_reuseFailAlloc_2777_;
goto v_reusejp_2775_;
}
v_reusejp_2775_:
{
return v___x_2776_;
}
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
lean_object* v_a_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2786_; 
lean_dec_ref(v_e_2630_);
v_a_2779_ = lean_ctor_get(v___x_2642_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2642_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2781_ = v___x_2642_;
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_a_2779_);
lean_dec(v___x_2642_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___x_2784_; 
if (v_isShared_2782_ == 0)
{
v___x_2784_ = v___x_2781_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v_a_2779_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
return v___x_2784_;
}
}
}
v___jp_2639_:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2640_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0));
v___x_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
return v___x_2641_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___boxed(lean_object* v_numIndices_2787_, lean_object* v_useDecideBool_2788_, lean_object* v_e_2789_, lean_object* v_a_2790_, lean_object* v_a_2791_, lean_object* v_a_2792_, lean_object* v_a_2793_, lean_object* v_a_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_){
_start:
{
uint8_t v_useDecideBool_boxed_2798_; lean_object* v_res_2799_; 
v_useDecideBool_boxed_2798_ = lean_unbox(v_useDecideBool_2788_);
v_res_2799_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27(v_numIndices_2787_, v_useDecideBool_boxed_2798_, v_e_2789_, v_a_2790_, v_a_2791_, v_a_2792_, v_a_2793_, v_a_2794_, v_a_2795_, v_a_2796_);
lean_dec(v_a_2796_);
lean_dec_ref(v_a_2795_);
lean_dec(v_a_2794_);
lean_dec_ref(v_a_2793_);
lean_dec(v_a_2792_);
lean_dec_ref(v_a_2791_);
lean_dec(v_a_2790_);
lean_dec(v_numIndices_2787_);
return v_res_2799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(lean_object* v_e_2803_, lean_object* v_a_2804_, lean_object* v_a_2805_){
_start:
{
if (lean_obj_tag(v_e_2803_) == 6)
{
lean_object* v_binderName_2807_; lean_object* v___x_2808_; 
v_binderName_2807_ = lean_ctor_get(v_e_2803_, 0);
lean_inc(v_binderName_2807_);
v___x_2808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2808_, 0, v_binderName_2807_);
return v___x_2808_;
}
else
{
lean_object* v___x_2809_; lean_object* v___x_2810_; 
v___x_2809_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__1));
v___x_2810_ = l_Lean_Core_mkFreshUserName(v___x_2809_, v_a_2804_, v_a_2805_);
return v___x_2810_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___boxed(lean_object* v_e_2811_, lean_object* v_a_2812_, lean_object* v_a_2813_, lean_object* v_a_2814_){
_start:
{
lean_object* v_res_2815_; 
v_res_2815_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_e_2811_, v_a_2812_, v_a_2813_);
lean_dec(v_a_2813_);
lean_dec_ref(v_a_2812_);
lean_dec_ref(v_e_2811_);
return v_res_2815_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName(lean_object* v_e_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_, lean_object* v_a_2820_){
_start:
{
lean_object* v___x_2822_; 
v___x_2822_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_e_2816_, v_a_2819_, v_a_2820_);
return v___x_2822_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___boxed(lean_object* v_e_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_, lean_object* v_a_2826_, lean_object* v_a_2827_, lean_object* v_a_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName(v_e_2823_, v_a_2824_, v_a_2825_, v_a_2826_, v_a_2827_);
lean_dec(v_a_2827_);
lean_dec_ref(v_a_2826_);
lean_dec(v_a_2825_);
lean_dec_ref(v_a_2824_);
lean_dec_ref(v_e_2823_);
return v_res_2829_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2(void){
_start:
{
lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; 
v___x_2834_ = lean_box(0);
v___x_2835_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__1));
v___x_2836_ = l_Lean_mkConst(v___x_2835_, v___x_2834_);
return v___x_2836_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3(void){
_start:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; 
v___x_2837_ = lean_unsigned_to_nat(0u);
v___x_2838_ = l_Lean_mkBVar(v___x_2837_);
return v___x_2838_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6(void){
_start:
{
lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2843_ = lean_box(0);
v___x_2844_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__5));
v___x_2845_ = l_Lean_mkConst(v___x_2844_, v___x_2843_);
return v___x_2845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27(lean_object* v_numIndices_2849_, uint8_t v_useDecideBool_2850_, lean_object* v_e_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_, lean_object* v_a_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_){
_start:
{
lean_object* v___x_2863_; 
lean_inc_ref(v_e_2851_);
v___x_2863_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2851_, v_a_2856_);
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v_a_2864_; lean_object* v___x_2865_; uint8_t v___x_2866_; 
v_a_2864_ = lean_ctor_get(v___x_2863_, 0);
lean_inc(v_a_2864_);
lean_dec_ref_known(v___x_2863_, 1);
v___x_2865_ = l_Lean_Expr_cleanupAnnotations(v_a_2864_);
lean_dec(v_a_2864_);
v___x_2866_ = l_Lean_Expr_isApp(v___x_2865_);
if (v___x_2866_ == 0)
{
lean_dec_ref(v___x_2865_);
lean_dec_ref(v_e_2851_);
goto v___jp_2860_;
}
else
{
lean_object* v___x_2867_; uint8_t v___x_2868_; 
v___x_2867_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2865_);
v___x_2868_ = l_Lean_Expr_isApp(v___x_2867_);
if (v___x_2868_ == 0)
{
lean_dec_ref(v___x_2867_);
lean_dec_ref(v___x_2865_);
lean_dec_ref(v_e_2851_);
goto v___jp_2860_;
}
else
{
lean_object* v___x_2869_; uint8_t v___x_2870_; 
v___x_2869_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2867_);
v___x_2870_ = l_Lean_Expr_isApp(v___x_2869_);
if (v___x_2870_ == 0)
{
lean_dec_ref(v___x_2869_);
lean_dec_ref(v___x_2867_);
lean_dec_ref(v___x_2865_);
lean_dec_ref(v_e_2851_);
goto v___jp_2860_;
}
else
{
lean_object* v___x_2871_; uint8_t v___x_2872_; 
v___x_2871_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2869_);
v___x_2872_ = l_Lean_Expr_isApp(v___x_2871_);
if (v___x_2872_ == 0)
{
lean_dec_ref(v___x_2871_);
lean_dec_ref(v___x_2869_);
lean_dec_ref(v___x_2867_);
lean_dec_ref(v___x_2865_);
lean_dec_ref(v_e_2851_);
goto v___jp_2860_;
}
else
{
lean_object* v___x_2873_; uint8_t v___x_2874_; 
v___x_2873_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2871_);
v___x_2874_ = l_Lean_Expr_isApp(v___x_2873_);
if (v___x_2874_ == 0)
{
lean_dec_ref(v___x_2873_);
lean_dec_ref(v___x_2871_);
lean_dec_ref(v___x_2869_);
lean_dec_ref(v___x_2867_);
lean_dec_ref(v___x_2865_);
lean_dec_ref(v_e_2851_);
goto v___jp_2860_;
}
else
{
lean_object* v___x_2875_; lean_object* v___x_2876_; uint8_t v___x_2877_; 
v___x_2875_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2873_);
v___x_2876_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_FindSplitImpl_isCandidate_x3f___closed__6));
v___x_2877_ = l_Lean_Expr_isConstOf(v___x_2875_, v___x_2876_);
if (v___x_2877_ == 0)
{
lean_dec_ref(v___x_2875_);
lean_dec_ref(v___x_2873_);
lean_dec_ref(v___x_2871_);
lean_dec_ref(v___x_2869_);
lean_dec_ref(v___x_2867_);
lean_dec_ref(v___x_2865_);
lean_dec_ref(v_e_2851_);
goto v___jp_2860_;
}
else
{
lean_object* v_arg_2878_; lean_object* v_arg_2879_; lean_object* v_arg_2880_; lean_object* v_arg_2881_; lean_object* v_arg_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
v_arg_2878_ = lean_ctor_get(v___x_2865_, 1);
lean_inc_ref(v_arg_2878_);
lean_dec_ref(v___x_2865_);
v_arg_2879_ = lean_ctor_get(v___x_2867_, 1);
lean_inc_ref(v_arg_2879_);
lean_dec_ref(v___x_2867_);
v_arg_2880_ = lean_ctor_get(v___x_2869_, 1);
lean_inc_ref(v_arg_2880_);
lean_dec_ref(v___x_2869_);
v_arg_2881_ = lean_ctor_get(v___x_2871_, 1);
lean_inc_ref_n(v_arg_2881_, 2);
lean_dec_ref(v___x_2871_);
v_arg_2882_ = lean_ctor_get(v___x_2873_, 1);
lean_inc_ref(v_arg_2882_);
lean_dec_ref(v___x_2873_);
v___x_2883_ = l_Lean_Expr_constLevels_x21(v___x_2875_);
v___x_2884_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2849_, v_useDecideBool_2850_, v_arg_2881_, v_a_2852_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_);
if (lean_obj_tag(v___x_2884_) == 0)
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_3056_; 
v_a_2885_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_3056_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_3056_ == 0)
{
v___x_2887_ = v___x_2884_;
v_isShared_2888_ = v_isSharedCheck_3056_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v___x_2884_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_3056_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
if (lean_obj_tag(v_a_2885_) == 1)
{
lean_object* v_val_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2906_; 
lean_dec_ref(v___x_2875_);
lean_dec_ref(v_e_2851_);
v_val_2889_ = lean_ctor_get(v_a_2885_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v_a_2885_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2891_ = v_a_2885_;
v_isShared_2892_ = v_isSharedCheck_2906_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_val_2889_);
lean_dec(v_a_2885_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2906_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2899_; 
lean_inc(v_val_2889_);
lean_inc_ref(v_arg_2879_);
v___x_2893_ = l_Lean_Expr_app___override(v_arg_2879_, v_val_2889_);
v___x_2894_ = l_Lean_Expr_headBeta(v___x_2893_);
v___x_2895_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__8));
v___x_2896_ = l_Lean_mkConst(v___x_2895_, v___x_2883_);
v___x_2897_ = l_Lean_mkApp6(v___x_2896_, v_arg_2881_, v_arg_2880_, v_val_2889_, v_arg_2882_, v_arg_2879_, v_arg_2878_);
if (v_isShared_2892_ == 0)
{
lean_ctor_set(v___x_2891_, 0, v___x_2897_);
v___x_2899_ = v___x_2891_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v___x_2897_);
v___x_2899_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2903_; 
v___x_2900_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2900_, 0, v___x_2894_);
lean_ctor_set(v___x_2900_, 1, v___x_2899_);
lean_ctor_set_uint8(v___x_2900_, sizeof(void*)*2, v___x_2877_);
v___x_2901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2901_, 0, v___x_2900_);
if (v_isShared_2888_ == 0)
{
lean_ctor_set(v___x_2887_, 0, v___x_2901_);
v___x_2903_ = v___x_2887_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2904_; 
v_reuseFailAlloc_2904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2904_, 0, v___x_2901_);
v___x_2903_ = v_reuseFailAlloc_2904_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
return v___x_2903_;
}
}
}
}
else
{
lean_object* v___x_2907_; lean_object* v___x_2908_; 
lean_del_object(v___x_2887_);
lean_dec(v_a_2885_);
lean_inc_ref(v_arg_2881_);
v___x_2907_ = l_Lean_mkNot(v_arg_2881_);
v___x_2908_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f(v_numIndices_2849_, v_useDecideBool_2850_, v___x_2907_, v_a_2852_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_);
if (lean_obj_tag(v___x_2908_) == 0)
{
lean_object* v_a_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_3047_; 
v_a_2909_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_2911_ = v___x_2908_;
v_isShared_2912_ = v_isSharedCheck_3047_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_a_2909_);
lean_dec(v___x_2908_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_3047_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
if (lean_obj_tag(v_a_2909_) == 1)
{
lean_object* v_val_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2930_; 
lean_dec_ref(v___x_2875_);
lean_dec_ref(v_e_2851_);
v_val_2913_ = lean_ctor_get(v_a_2909_, 0);
v_isSharedCheck_2930_ = !lean_is_exclusive(v_a_2909_);
if (v_isSharedCheck_2930_ == 0)
{
v___x_2915_ = v_a_2909_;
v_isShared_2916_ = v_isSharedCheck_2930_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_val_2913_);
lean_dec(v_a_2909_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2930_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2923_; 
lean_inc(v_val_2913_);
lean_inc_ref(v_arg_2878_);
v___x_2917_ = l_Lean_Expr_app___override(v_arg_2878_, v_val_2913_);
v___x_2918_ = l_Lean_Expr_headBeta(v___x_2917_);
v___x_2919_ = ((lean_object*)(l_Lean_Meta_SplitIf_getSimpContext___closed__10));
v___x_2920_ = l_Lean_mkConst(v___x_2919_, v___x_2883_);
v___x_2921_ = l_Lean_mkApp6(v___x_2920_, v_arg_2881_, v_arg_2880_, v_val_2913_, v_arg_2882_, v_arg_2879_, v_arg_2878_);
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 0, v___x_2921_);
v___x_2923_ = v___x_2915_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v___x_2921_);
v___x_2923_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2927_; 
v___x_2924_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2924_, 0, v___x_2918_);
lean_ctor_set(v___x_2924_, 1, v___x_2923_);
lean_ctor_set_uint8(v___x_2924_, sizeof(void*)*2, v___x_2877_);
v___x_2925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2924_);
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 0, v___x_2925_);
v___x_2927_ = v___x_2911_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v___x_2925_);
v___x_2927_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
return v___x_2927_;
}
}
}
}
else
{
lean_object* v___x_2931_; 
lean_del_object(v___x_2911_);
lean_dec(v_a_2909_);
lean_inc(v_a_2858_);
lean_inc_ref(v_a_2857_);
lean_inc(v_a_2856_);
lean_inc_ref(v_a_2855_);
lean_inc(v_a_2854_);
lean_inc_ref(v_a_2853_);
lean_inc(v_a_2852_);
lean_inc_ref(v_arg_2881_);
v___x_2931_ = lean_simp(v_arg_2881_, v_a_2852_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_);
if (lean_obj_tag(v___x_2931_) == 0)
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_3038_; 
v_a_2932_ = lean_ctor_get(v___x_2931_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_2934_ = v___x_2931_;
v_isShared_2935_ = v_isSharedCheck_3038_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2931_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_3038_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v_expr_2936_; uint8_t v___x_2937_; 
v_expr_2936_ = lean_ctor_get(v_a_2932_, 0);
v___x_2937_ = lean_expr_eqv(v_expr_2936_, v_arg_2881_);
if (v___x_2937_ == 0)
{
lean_object* v___x_2938_; 
lean_inc_ref(v_expr_2936_);
lean_del_object(v___x_2934_);
v___x_2938_ = l_Lean_Meta_Simp_Result_getProof(v_a_2932_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_);
if (lean_obj_tag(v___x_2938_) == 0)
{
lean_object* v_a_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; 
v_a_2939_ = lean_ctor_get(v___x_2938_, 0);
lean_inc(v_a_2939_);
lean_dec_ref_known(v___x_2938_, 1);
v___x_2940_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f___closed__4);
lean_inc_ref(v_expr_2936_);
v___x_2941_ = l_Lean_Expr_app___override(v___x_2940_, v_expr_2936_);
v___x_2942_ = lean_box(0);
v___x_2943_ = l_Lean_Meta_trySynthInstance(v___x_2941_, v___x_2942_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_);
if (lean_obj_tag(v___x_2943_) == 0)
{
lean_object* v_a_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_3007_; 
v_a_2944_ = lean_ctor_get(v___x_2943_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_2946_ = v___x_2943_;
v_isShared_2947_ = v_isSharedCheck_3007_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_a_2944_);
lean_dec(v___x_2943_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_3007_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
if (lean_obj_tag(v_a_2944_) == 1)
{
lean_object* v_a_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_3001_; 
lean_del_object(v___x_2946_);
lean_dec_ref(v_e_2851_);
v_a_2948_ = lean_ctor_get(v_a_2944_, 0);
v_isSharedCheck_3001_ = !lean_is_exclusive(v_a_2944_);
if (v_isSharedCheck_3001_ == 0)
{
v___x_2950_ = v_a_2944_;
v_isShared_2951_ = v_isSharedCheck_3001_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_a_2948_);
lean_dec(v_a_2944_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_3001_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; 
v___x_2952_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__2);
v___x_2953_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__3);
lean_inc(v_a_2939_);
lean_inc_ref(v_expr_2936_);
lean_inc_ref(v_arg_2881_);
v___x_2954_ = l_Lean_mkApp4(v___x_2952_, v_arg_2881_, v_expr_2936_, v_a_2939_, v___x_2953_);
lean_inc_ref(v_arg_2879_);
v___x_2955_ = l_Lean_Expr_app___override(v_arg_2879_, v___x_2954_);
v___x_2956_ = l_Lean_Expr_headBeta(v___x_2955_);
v___x_2957_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_arg_2879_, v_a_2857_, v_a_2858_);
if (lean_obj_tag(v___x_2957_) == 0)
{
lean_object* v_a_2958_; uint8_t v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v_a_2958_ = lean_ctor_get(v___x_2957_, 0);
lean_inc(v_a_2958_);
lean_dec_ref_known(v___x_2957_, 1);
v___x_2959_ = 0;
lean_inc_ref_n(v_expr_2936_, 2);
v___x_2960_ = l_Lean_mkLambda(v_a_2958_, v___x_2959_, v_expr_2936_, v___x_2956_);
v___x_2961_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__6);
lean_inc(v_a_2939_);
lean_inc_ref(v_arg_2881_);
v___x_2962_ = l_Lean_mkApp4(v___x_2961_, v_arg_2881_, v_expr_2936_, v_a_2939_, v___x_2953_);
lean_inc_ref(v_arg_2878_);
v___x_2963_ = l_Lean_Expr_app___override(v_arg_2878_, v___x_2962_);
v___x_2964_ = l_Lean_Expr_headBeta(v___x_2963_);
v___x_2965_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg(v_arg_2878_, v_a_2857_, v_a_2858_);
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_object* v_a_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2984_; 
v_a_2966_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_2984_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_2984_ == 0)
{
v___x_2968_ = v___x_2965_;
v_isShared_2969_ = v_isSharedCheck_2984_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_a_2966_);
lean_dec(v___x_2965_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2984_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2977_; 
lean_inc_ref_n(v_expr_2936_, 2);
v___x_2970_ = l_Lean_mkNot(v_expr_2936_);
v___x_2971_ = l_Lean_mkLambda(v_a_2966_, v___x_2959_, v___x_2970_, v___x_2964_);
lean_inc(v_a_2948_);
lean_inc_ref(v_arg_2882_);
v___x_2972_ = l_Lean_mkApp5(v___x_2875_, v_arg_2882_, v_expr_2936_, v_a_2948_, v___x_2960_, v___x_2971_);
v___x_2973_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___closed__8));
v___x_2974_ = l_Lean_mkConst(v___x_2973_, v___x_2883_);
v___x_2975_ = l_Lean_mkApp8(v___x_2974_, v_arg_2882_, v_arg_2881_, v_expr_2936_, v_arg_2880_, v_a_2948_, v_arg_2879_, v_arg_2878_, v_a_2939_);
if (v_isShared_2951_ == 0)
{
lean_ctor_set(v___x_2950_, 0, v___x_2975_);
v___x_2977_ = v___x_2950_;
goto v_reusejp_2976_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v___x_2975_);
v___x_2977_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2976_;
}
v_reusejp_2976_:
{
lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2981_; 
v___x_2978_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2978_, 0, v___x_2972_);
lean_ctor_set(v___x_2978_, 1, v___x_2977_);
lean_ctor_set_uint8(v___x_2978_, sizeof(void*)*2, v___x_2877_);
v___x_2979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2979_, 0, v___x_2978_);
if (v_isShared_2969_ == 0)
{
lean_ctor_set(v___x_2968_, 0, v___x_2979_);
v___x_2981_ = v___x_2968_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v___x_2979_);
v___x_2981_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
return v___x_2981_;
}
}
}
}
else
{
lean_object* v_a_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2992_; 
lean_dec_ref(v___x_2964_);
lean_dec_ref(v___x_2960_);
lean_del_object(v___x_2950_);
lean_dec(v_a_2948_);
lean_dec(v_a_2939_);
lean_dec_ref(v_expr_2936_);
lean_dec(v___x_2883_);
lean_dec_ref(v_arg_2882_);
lean_dec_ref(v_arg_2881_);
lean_dec_ref(v_arg_2880_);
lean_dec_ref(v_arg_2879_);
lean_dec_ref(v_arg_2878_);
lean_dec_ref(v___x_2875_);
v_a_2985_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2987_ = v___x_2965_;
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_a_2985_);
lean_dec(v___x_2965_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2990_; 
if (v_isShared_2988_ == 0)
{
v___x_2990_ = v___x_2987_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v_a_2985_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
}
}
else
{
lean_object* v_a_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3000_; 
lean_dec_ref(v___x_2956_);
lean_del_object(v___x_2950_);
lean_dec(v_a_2948_);
lean_dec(v_a_2939_);
lean_dec_ref(v_expr_2936_);
lean_dec(v___x_2883_);
lean_dec_ref(v_arg_2882_);
lean_dec_ref(v_arg_2881_);
lean_dec_ref(v_arg_2880_);
lean_dec_ref(v_arg_2879_);
lean_dec_ref(v_arg_2878_);
lean_dec_ref(v___x_2875_);
v_a_2993_ = lean_ctor_get(v___x_2957_, 0);
v_isSharedCheck_3000_ = !lean_is_exclusive(v___x_2957_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2995_ = v___x_2957_;
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_a_2993_);
lean_dec(v___x_2957_);
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
}
else
{
lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3005_; 
lean_dec(v_a_2944_);
lean_dec(v_a_2939_);
lean_dec_ref(v_expr_2936_);
lean_dec(v___x_2883_);
lean_dec_ref(v_arg_2882_);
lean_dec_ref(v_arg_2881_);
lean_dec_ref(v_arg_2880_);
lean_dec_ref(v_arg_2879_);
lean_dec_ref(v_arg_2878_);
lean_dec_ref(v___x_2875_);
v___x_3002_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3002_, 0, v_e_2851_);
lean_ctor_set(v___x_3002_, 1, v___x_2942_);
lean_ctor_set_uint8(v___x_3002_, sizeof(void*)*2, v___x_2877_);
v___x_3003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3003_, 0, v___x_3002_);
if (v_isShared_2947_ == 0)
{
lean_ctor_set(v___x_2946_, 0, v___x_3003_);
v___x_3005_ = v___x_2946_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v___x_3003_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
}
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
lean_dec(v_a_2939_);
lean_dec_ref(v_expr_2936_);
lean_dec(v___x_2883_);
lean_dec_ref(v_arg_2882_);
lean_dec_ref(v_arg_2881_);
lean_dec_ref(v_arg_2880_);
lean_dec_ref(v_arg_2879_);
lean_dec_ref(v_arg_2878_);
lean_dec_ref(v___x_2875_);
lean_dec_ref(v_e_2851_);
v_a_3008_ = lean_ctor_get(v___x_2943_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_2943_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_2943_);
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
lean_object* v_a_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3023_; 
lean_dec_ref(v_expr_2936_);
lean_dec(v___x_2883_);
lean_dec_ref(v_arg_2882_);
lean_dec_ref(v_arg_2881_);
lean_dec_ref(v_arg_2880_);
lean_dec_ref(v_arg_2879_);
lean_dec_ref(v_arg_2878_);
lean_dec_ref(v___x_2875_);
lean_dec_ref(v_e_2851_);
v_a_3016_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3018_ = v___x_2938_;
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_a_3016_);
lean_dec(v___x_2938_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v___x_3021_; 
if (v_isShared_3019_ == 0)
{
v___x_3021_ = v___x_3018_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_a_3016_);
v___x_3021_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
return v___x_3021_;
}
}
}
}
else
{
lean_object* v___x_3025_; uint8_t v_isShared_3026_; uint8_t v_isSharedCheck_3035_; 
lean_dec(v___x_2883_);
lean_dec_ref(v_arg_2882_);
lean_dec_ref(v_arg_2881_);
lean_dec_ref(v_arg_2880_);
lean_dec_ref(v_arg_2879_);
lean_dec_ref(v_arg_2878_);
lean_dec_ref(v___x_2875_);
v_isSharedCheck_3035_ = !lean_is_exclusive(v_a_2932_);
if (v_isSharedCheck_3035_ == 0)
{
lean_object* v_unused_3036_; lean_object* v_unused_3037_; 
v_unused_3036_ = lean_ctor_get(v_a_2932_, 1);
lean_dec(v_unused_3036_);
v_unused_3037_ = lean_ctor_get(v_a_2932_, 0);
lean_dec(v_unused_3037_);
v___x_3025_ = v_a_2932_;
v_isShared_3026_ = v_isSharedCheck_3035_;
goto v_resetjp_3024_;
}
else
{
lean_dec(v_a_2932_);
v___x_3025_ = lean_box(0);
v_isShared_3026_ = v_isSharedCheck_3035_;
goto v_resetjp_3024_;
}
v_resetjp_3024_:
{
lean_object* v___x_3027_; lean_object* v___x_3029_; 
v___x_3027_ = lean_box(0);
if (v_isShared_3026_ == 0)
{
lean_ctor_set(v___x_3025_, 1, v___x_3027_);
lean_ctor_set(v___x_3025_, 0, v_e_2851_);
v___x_3029_ = v___x_3025_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_e_2851_);
lean_ctor_set(v_reuseFailAlloc_3034_, 1, v___x_3027_);
v___x_3029_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
lean_object* v___x_3030_; lean_object* v___x_3032_; 
lean_ctor_set_uint8(v___x_3029_, sizeof(void*)*2, v___x_2937_);
v___x_3030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3030_, 0, v___x_3029_);
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 0, v___x_3030_);
v___x_3032_ = v___x_2934_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v___x_3030_);
v___x_3032_ = v_reuseFailAlloc_3033_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
return v___x_3032_;
}
}
}
}
}
}
else
{
lean_object* v_a_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3046_; 
lean_dec(v___x_2883_);
lean_dec_ref(v_arg_2882_);
lean_dec_ref(v_arg_2881_);
lean_dec_ref(v_arg_2880_);
lean_dec_ref(v_arg_2879_);
lean_dec_ref(v_arg_2878_);
lean_dec_ref(v___x_2875_);
lean_dec_ref(v_e_2851_);
v_a_3039_ = lean_ctor_get(v___x_2931_, 0);
v_isSharedCheck_3046_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_3046_ == 0)
{
v___x_3041_ = v___x_2931_;
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_a_3039_);
lean_dec(v___x_2931_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
lean_object* v___x_3044_; 
if (v_isShared_3042_ == 0)
{
v___x_3044_ = v___x_3041_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_a_3039_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
}
}
}
}
else
{
lean_object* v_a_3048_; lean_object* v___x_3050_; uint8_t v_isShared_3051_; uint8_t v_isSharedCheck_3055_; 
lean_dec(v___x_2883_);
lean_dec_ref(v_arg_2882_);
lean_dec_ref(v_arg_2881_);
lean_dec_ref(v_arg_2880_);
lean_dec_ref(v_arg_2879_);
lean_dec_ref(v_arg_2878_);
lean_dec_ref(v___x_2875_);
lean_dec_ref(v_e_2851_);
v_a_3048_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_3055_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_3055_ == 0)
{
v___x_3050_ = v___x_2908_;
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
else
{
lean_inc(v_a_3048_);
lean_dec(v___x_2908_);
v___x_3050_ = lean_box(0);
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
v_resetjp_3049_:
{
lean_object* v___x_3053_; 
if (v_isShared_3051_ == 0)
{
v___x_3053_ = v___x_3050_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v_a_3048_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
return v___x_3053_;
}
}
}
}
}
}
else
{
lean_object* v_a_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3064_; 
lean_dec(v___x_2883_);
lean_dec_ref(v_arg_2882_);
lean_dec_ref(v_arg_2881_);
lean_dec_ref(v_arg_2880_);
lean_dec_ref(v_arg_2879_);
lean_dec_ref(v_arg_2878_);
lean_dec_ref(v___x_2875_);
lean_dec_ref(v_e_2851_);
v_a_3057_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3059_ = v___x_2884_;
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_a_3057_);
lean_dec(v___x_2884_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3062_; 
if (v_isShared_3060_ == 0)
{
v___x_3062_ = v___x_3059_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_a_3057_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
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
else
{
lean_object* v_a_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3072_; 
lean_dec_ref(v_e_2851_);
v_a_3065_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_3072_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3067_ = v___x_2863_;
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_a_3065_);
lean_dec(v___x_2863_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3070_; 
if (v_isShared_3068_ == 0)
{
v___x_3070_ = v___x_3067_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_a_3065_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
return v___x_3070_;
}
}
}
v___jp_2860_:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; 
v___x_2861_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___closed__0));
v___x_2862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2862_, 0, v___x_2861_);
return v___x_2862_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___boxed(lean_object* v_numIndices_3073_, lean_object* v_useDecideBool_3074_, lean_object* v_e_3075_, lean_object* v_a_3076_, lean_object* v_a_3077_, lean_object* v_a_3078_, lean_object* v_a_3079_, lean_object* v_a_3080_, lean_object* v_a_3081_, lean_object* v_a_3082_, lean_object* v_a_3083_){
_start:
{
uint8_t v_useDecideBool_boxed_3084_; lean_object* v_res_3085_; 
v_useDecideBool_boxed_3084_ = lean_unbox(v_useDecideBool_3074_);
v_res_3085_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27(v_numIndices_3073_, v_useDecideBool_boxed_3084_, v_e_3075_, v_a_3076_, v_a_3077_, v_a_3078_, v_a_3079_, v_a_3080_, v_a_3081_, v_a_3082_);
lean_dec(v_a_3082_);
lean_dec_ref(v_a_3081_);
lean_dec(v_a_3080_);
lean_dec_ref(v_a_3079_);
lean_dec(v_a_3078_);
lean_dec_ref(v_a_3077_);
lean_dec(v_a_3076_);
lean_dec(v_numIndices_3073_);
return v_res_3085_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0(void){
_start:
{
lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v_s_3088_; 
v___x_3086_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__1___closed__0);
v___x_3087_ = lean_obj_once(&l_Lean_Meta_SplitIf_getSimpContext___closed__0, &l_Lean_Meta_SplitIf_getSimpContext___closed__0_once, _init_l_Lean_Meta_SplitIf_getSimpContext___closed__0);
v_s_3088_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_s_3088_, 0, v___x_3087_);
lean_ctor_set(v_s_3088_, 1, v___x_3087_);
lean_ctor_set(v_s_3088_, 2, v___x_3086_);
lean_ctor_set(v_s_3088_, 3, v___x_3086_);
return v_s_3088_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(lean_object* v_numIndices_3168_, uint8_t v_useDecide_3169_){
_start:
{
lean_object* v_s_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; uint8_t v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v_s_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v_s_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v_s_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; 
v_s_3171_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__0);
v___x_3172_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__2));
v___x_3173_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__15));
v___x_3174_ = 0;
v___x_3175_ = lean_box(v_useDecide_3169_);
lean_inc_n(v_numIndices_3168_, 2);
v___x_3176_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceIte_x27___boxed), 11, 2);
lean_closure_set(v___x_3176_, 0, v_numIndices_3168_);
lean_closure_set(v___x_3176_, 1, v___x_3175_);
v___x_3177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3176_);
v_s_3178_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_3171_, v___x_3172_, v___x_3173_, v___x_3174_, v___x_3177_);
v___x_3179_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__17));
v___x_3180_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__19));
v___x_3181_ = lean_box(v_useDecide_3169_);
v___x_3182_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceDIte_x27___boxed), 11, 2);
lean_closure_set(v___x_3182_, 0, v_numIndices_3168_);
lean_closure_set(v___x_3182_, 1, v___x_3181_);
v___x_3183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3183_, 0, v___x_3182_);
v_s_3184_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_3178_, v___x_3179_, v___x_3180_, v___x_3174_, v___x_3183_);
v___x_3185_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__21));
v___x_3186_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___closed__23));
v___x_3187_ = lean_box(v_useDecide_3169_);
v___x_3188_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_reduceCond_x27___boxed), 11, 2);
lean_closure_set(v___x_3188_, 0, v_numIndices_3168_);
lean_closure_set(v___x_3188_, 1, v___x_3187_);
v___x_3189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3188_);
v_s_3190_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_3184_, v___x_3185_, v___x_3186_, v___x_3174_, v___x_3189_);
v___x_3191_ = lean_unsigned_to_nat(1u);
v___x_3192_ = lean_mk_empty_array_with_capacity(v___x_3191_);
v___x_3193_ = lean_array_push(v___x_3192_, v_s_3190_);
v___x_3194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3193_);
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg___boxed(lean_object* v_numIndices_3195_, lean_object* v_useDecide_3196_, lean_object* v_a_3197_){
_start:
{
uint8_t v_useDecide_boxed_3198_; lean_object* v_res_3199_; 
v_useDecide_boxed_3198_ = lean_unbox(v_useDecide_3196_);
v_res_3199_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(v_numIndices_3195_, v_useDecide_boxed_3198_);
return v_res_3199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs(lean_object* v_numIndices_3200_, uint8_t v_useDecide_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_, lean_object* v_a_3204_, lean_object* v_a_3205_){
_start:
{
lean_object* v___x_3207_; 
v___x_3207_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(v_numIndices_3200_, v_useDecide_3201_);
return v___x_3207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___boxed(lean_object* v_numIndices_3208_, lean_object* v_useDecide_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_, lean_object* v_a_3214_){
_start:
{
uint8_t v_useDecide_boxed_3215_; lean_object* v_res_3216_; 
v_useDecide_boxed_3215_ = lean_unbox(v_useDecide_3209_);
v_res_3216_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs(v_numIndices_3208_, v_useDecide_boxed_3215_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_);
lean_dec(v_a_3213_);
lean_dec_ref(v_a_3212_);
lean_dec(v_a_3211_);
lean_dec_ref(v_a_3210_);
return v_res_3216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg(uint8_t v_useDecide_3217_, lean_object* v_a_3218_){
_start:
{
lean_object* v_lctx_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; 
v_lctx_3220_ = lean_ctor_get(v_a_3218_, 2);
lean_inc_ref(v_lctx_3220_);
v___x_3221_ = lean_local_ctx_num_indices(v_lctx_3220_);
v___x_3222_ = lean_box(v_useDecide_3217_);
v___x_3223_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___boxed), 11, 2);
lean_closure_set(v___x_3223_, 0, v___x_3221_);
lean_closure_set(v___x_3223_, 1, v___x_3222_);
v___x_3224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3224_, 0, v___x_3223_);
return v___x_3224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg___boxed(lean_object* v_useDecide_3225_, lean_object* v_a_3226_, lean_object* v_a_3227_){
_start:
{
uint8_t v_useDecide_boxed_3228_; lean_object* v_res_3229_; 
v_useDecide_boxed_3228_ = lean_unbox(v_useDecide_3225_);
v_res_3229_ = l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg(v_useDecide_boxed_3228_, v_a_3226_);
lean_dec_ref(v_a_3226_);
return v_res_3229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f(uint8_t v_useDecide_3230_, lean_object* v_a_3231_, lean_object* v_a_3232_, lean_object* v_a_3233_, lean_object* v_a_3234_){
_start:
{
lean_object* v___x_3236_; 
v___x_3236_ = l_Lean_Meta_SplitIf_mkDischarge_x3f___redArg(v_useDecide_3230_, v_a_3231_);
return v___x_3236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_mkDischarge_x3f___boxed(lean_object* v_useDecide_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_){
_start:
{
uint8_t v_useDecide_boxed_3243_; lean_object* v_res_3244_; 
v_useDecide_boxed_3243_ = lean_unbox(v_useDecide_3237_);
v_res_3244_ = l_Lean_Meta_SplitIf_mkDischarge_x3f(v_useDecide_boxed_3243_, v_a_3238_, v_a_3239_, v_a_3240_, v_a_3241_);
lean_dec(v_a_3241_);
lean_dec_ref(v_a_3240_);
lean_dec(v_a_3239_);
lean_dec_ref(v_a_3238_);
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(lean_object* v_mvarId_3245_, lean_object* v_x_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_){
_start:
{
lean_object* v___x_3252_; 
v___x_3252_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_3245_, v_x_3246_, v___y_3247_, v___y_3248_, v___y_3249_, v___y_3250_);
if (lean_obj_tag(v___x_3252_) == 0)
{
lean_object* v_a_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3260_; 
v_a_3253_ = lean_ctor_get(v___x_3252_, 0);
v_isSharedCheck_3260_ = !lean_is_exclusive(v___x_3252_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3255_ = v___x_3252_;
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_a_3253_);
lean_dec(v___x_3252_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3258_; 
if (v_isShared_3256_ == 0)
{
v___x_3258_ = v___x_3255_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_a_3253_);
v___x_3258_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
return v___x_3258_;
}
}
}
else
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3268_; 
v_a_3261_ = lean_ctor_get(v___x_3252_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3252_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3263_ = v___x_3252_;
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v___x_3252_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3266_; 
if (v_isShared_3264_ == 0)
{
v___x_3266_ = v___x_3263_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v_a_3261_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg___boxed(lean_object* v_mvarId_3269_, lean_object* v_x_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_){
_start:
{
lean_object* v_res_3276_; 
v_res_3276_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(v_mvarId_3269_, v_x_3270_, v___y_3271_, v___y_3272_, v___y_3273_, v___y_3274_);
lean_dec(v___y_3274_);
lean_dec_ref(v___y_3273_);
lean_dec(v___y_3272_);
lean_dec_ref(v___y_3271_);
return v_res_3276_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0(lean_object* v_00_u03b1_3277_, lean_object* v_mvarId_3278_, lean_object* v_x_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_){
_start:
{
lean_object* v___x_3285_; 
v___x_3285_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(v_mvarId_3278_, v_x_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_);
return v___x_3285_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___boxed(lean_object* v_00_u03b1_3286_, lean_object* v_mvarId_3287_, lean_object* v_x_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_){
_start:
{
lean_object* v_res_3294_; 
v_res_3294_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0(v_00_u03b1_3286_, v_mvarId_3287_, v_x_3288_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_);
lean_dec(v___y_3292_);
lean_dec_ref(v___y_3291_);
lean_dec(v___y_3290_);
lean_dec_ref(v___y_3289_);
return v_res_3294_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3296_; lean_object* v___x_3297_; 
v___x_3296_ = ((lean_object*)(l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__0));
v___x_3297_ = l_Lean_stringToMessageData(v___x_3296_);
return v___x_3297_;
}
}
static lean_object* _init_l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3299_; lean_object* v___x_3300_; 
v___x_3299_ = ((lean_object*)(l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__2));
v___x_3300_ = l_Lean_stringToMessageData(v___x_3299_);
return v___x_3300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0(lean_object* v_e_3301_, lean_object* v_mvarId_3302_, lean_object* v_hName_x3f_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_){
_start:
{
lean_object* v___x_3312_; lean_object* v_a_3313_; lean_object* v___x_3314_; 
v___x_3312_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getProjectedDecision_x3f_spec__0___redArg(v_e_3301_, v___y_3305_);
v_a_3313_ = lean_ctor_get(v___x_3312_, 0);
lean_inc_n(v_a_3313_, 2);
lean_dec_ref(v___x_3312_);
v___x_3314_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findIfToSplit_x3f(v_a_3313_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_);
if (lean_obj_tag(v___x_3314_) == 0)
{
lean_object* v_a_3315_; 
v_a_3315_ = lean_ctor_get(v___x_3314_, 0);
lean_inc(v_a_3315_);
lean_dec_ref_known(v___x_3314_, 1);
if (lean_obj_tag(v_a_3315_) == 1)
{
lean_object* v_val_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3391_; 
lean_dec(v_a_3313_);
v_val_3316_ = lean_ctor_get(v_a_3315_, 0);
v_isSharedCheck_3391_ = !lean_is_exclusive(v_a_3315_);
if (v_isSharedCheck_3391_ == 0)
{
v___x_3318_ = v_a_3315_;
v_isShared_3319_ = v_isSharedCheck_3391_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_val_3316_);
lean_dec(v_a_3315_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3391_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v_fst_3320_; lean_object* v_snd_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3390_; 
v_fst_3320_ = lean_ctor_get(v_val_3316_, 0);
v_snd_3321_ = lean_ctor_get(v_val_3316_, 1);
v_isSharedCheck_3390_ = !lean_is_exclusive(v_val_3316_);
if (v_isSharedCheck_3390_ == 0)
{
v___x_3323_ = v_val_3316_;
v_isShared_3324_ = v_isSharedCheck_3390_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_snd_3321_);
lean_inc(v_fst_3320_);
lean_dec(v_val_3316_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3390_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___y_3326_; lean_object* v___y_3327_; lean_object* v___y_3328_; lean_object* v___y_3329_; lean_object* v___y_3330_; lean_object* v_hName_3352_; lean_object* v___y_3353_; lean_object* v___y_3354_; lean_object* v___y_3355_; lean_object* v___y_3356_; 
if (lean_obj_tag(v_hName_x3f_3303_) == 0)
{
lean_object* v___x_3378_; lean_object* v___x_3379_; 
v___x_3378_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getBinderName___redArg___closed__1));
v___x_3379_ = l_Lean_Core_mkFreshUserName(v___x_3378_, v___y_3306_, v___y_3307_);
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_object* v_a_3380_; 
v_a_3380_ = lean_ctor_get(v___x_3379_, 0);
lean_inc(v_a_3380_);
lean_dec_ref_known(v___x_3379_, 1);
v_hName_3352_ = v_a_3380_;
v___y_3353_ = v___y_3304_;
v___y_3354_ = v___y_3305_;
v___y_3355_ = v___y_3306_;
v___y_3356_ = v___y_3307_;
goto v___jp_3351_;
}
else
{
lean_object* v_a_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3388_; 
lean_del_object(v___x_3323_);
lean_dec(v_snd_3321_);
lean_dec(v_fst_3320_);
lean_del_object(v___x_3318_);
lean_dec(v_mvarId_3302_);
v_a_3381_ = lean_ctor_get(v___x_3379_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3379_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3383_ = v___x_3379_;
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_a_3381_);
lean_dec(v___x_3379_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_a_3381_);
v___x_3386_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
return v___x_3386_;
}
}
}
}
else
{
lean_object* v_val_3389_; 
v_val_3389_ = lean_ctor_get(v_hName_x3f_3303_, 0);
lean_inc(v_val_3389_);
lean_dec_ref_known(v_hName_x3f_3303_, 1);
v_hName_3352_ = v_val_3389_;
v___y_3353_ = v___y_3304_;
v___y_3354_ = v___y_3305_;
v___y_3355_ = v___y_3306_;
v___y_3356_ = v___y_3307_;
goto v___jp_3351_;
}
v___jp_3325_:
{
lean_object* v___x_3331_; 
v___x_3331_ = l_Lean_MVarId_byCasesDec(v_mvarId_3302_, v_fst_3320_, v_snd_3321_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_);
if (lean_obj_tag(v___x_3331_) == 0)
{
lean_object* v_a_3332_; lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3342_; 
v_a_3332_ = lean_ctor_get(v___x_3331_, 0);
v_isSharedCheck_3342_ = !lean_is_exclusive(v___x_3331_);
if (v_isSharedCheck_3342_ == 0)
{
v___x_3334_ = v___x_3331_;
v_isShared_3335_ = v_isSharedCheck_3342_;
goto v_resetjp_3333_;
}
else
{
lean_inc(v_a_3332_);
lean_dec(v___x_3331_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3342_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
lean_object* v___x_3337_; 
if (v_isShared_3319_ == 0)
{
lean_ctor_set(v___x_3318_, 0, v_a_3332_);
v___x_3337_ = v___x_3318_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_a_3332_);
v___x_3337_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
lean_object* v___x_3339_; 
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 0, v___x_3337_);
v___x_3339_ = v___x_3334_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v___x_3337_);
v___x_3339_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
return v___x_3339_;
}
}
}
}
else
{
lean_object* v_a_3343_; lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3350_; 
lean_del_object(v___x_3318_);
v_a_3343_ = lean_ctor_get(v___x_3331_, 0);
v_isSharedCheck_3350_ = !lean_is_exclusive(v___x_3331_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_3345_ = v___x_3331_;
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
else
{
lean_inc(v_a_3343_);
lean_dec(v___x_3331_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
lean_object* v___x_3348_; 
if (v_isShared_3346_ == 0)
{
v___x_3348_ = v___x_3345_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v_a_3343_);
v___x_3348_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
return v___x_3348_;
}
}
}
}
v___jp_3351_:
{
lean_object* v_toCold_3357_; lean_object* v_options_3358_; uint8_t v_hasTrace_3359_; 
v_toCold_3357_ = lean_ctor_get(v___y_3355_, 0);
v_options_3358_ = lean_ctor_get(v_toCold_3357_, 2);
v_hasTrace_3359_ = lean_ctor_get_uint8(v_options_3358_, sizeof(void*)*1);
if (v_hasTrace_3359_ == 0)
{
lean_del_object(v___x_3323_);
v___y_3326_ = v_hName_3352_;
v___y_3327_ = v___y_3353_;
v___y_3328_ = v___y_3354_;
v___y_3329_ = v___y_3355_;
v___y_3330_ = v___y_3356_;
goto v___jp_3325_;
}
else
{
lean_object* v_inheritedTraceOptions_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; uint8_t v___x_3363_; 
v_inheritedTraceOptions_3360_ = lean_ctor_get(v_toCold_3357_, 11);
v___x_3361_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5));
v___x_3362_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6);
v___x_3363_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3360_, v_options_3358_, v___x_3362_);
if (v___x_3363_ == 0)
{
lean_del_object(v___x_3323_);
v___y_3326_ = v_hName_3352_;
v___y_3327_ = v___y_3353_;
v___y_3328_ = v___y_3354_;
v___y_3329_ = v___y_3355_;
v___y_3330_ = v___y_3356_;
goto v___jp_3325_;
}
else
{
lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3367_; 
v___x_3364_ = lean_obj_once(&l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1, &l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1_once, _init_l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__1);
lean_inc(v_snd_3321_);
v___x_3365_ = l_Lean_MessageData_ofExpr(v_snd_3321_);
if (v_isShared_3324_ == 0)
{
lean_ctor_set_tag(v___x_3323_, 7);
lean_ctor_set(v___x_3323_, 1, v___x_3365_);
lean_ctor_set(v___x_3323_, 0, v___x_3364_);
v___x_3367_ = v___x_3323_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v___x_3364_);
lean_ctor_set(v_reuseFailAlloc_3377_, 1, v___x_3365_);
v___x_3367_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
lean_object* v___x_3368_; 
v___x_3368_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_3361_, v___x_3367_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_);
if (lean_obj_tag(v___x_3368_) == 0)
{
lean_dec_ref_known(v___x_3368_, 1);
v___y_3326_ = v_hName_3352_;
v___y_3327_ = v___y_3353_;
v___y_3328_ = v___y_3354_;
v___y_3329_ = v___y_3355_;
v___y_3330_ = v___y_3356_;
goto v___jp_3325_;
}
else
{
lean_object* v_a_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3376_; 
lean_dec(v_hName_3352_);
lean_dec(v_snd_3321_);
lean_dec(v_fst_3320_);
lean_del_object(v___x_3318_);
lean_dec(v_mvarId_3302_);
v_a_3369_ = lean_ctor_get(v___x_3368_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3368_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3371_ = v___x_3368_;
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_a_3369_);
lean_dec(v___x_3368_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v___x_3374_; 
if (v_isShared_3372_ == 0)
{
v___x_3374_ = v___x_3371_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3369_);
v___x_3374_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
return v___x_3374_;
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
else
{
lean_object* v_toCold_3392_; lean_object* v_options_3393_; uint8_t v_hasTrace_3394_; 
lean_dec(v_a_3315_);
lean_dec(v_hName_x3f_3303_);
lean_dec(v_mvarId_3302_);
v_toCold_3392_ = lean_ctor_get(v___y_3306_, 0);
v_options_3393_ = lean_ctor_get(v_toCold_3392_, 2);
v_hasTrace_3394_ = lean_ctor_get_uint8(v_options_3393_, sizeof(void*)*1);
if (v_hasTrace_3394_ == 0)
{
lean_dec(v_a_3313_);
goto v___jp_3309_;
}
else
{
lean_object* v_inheritedTraceOptions_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; uint8_t v___x_3398_; 
v_inheritedTraceOptions_3395_ = lean_ctor_get(v_toCold_3392_, 11);
v___x_3396_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5));
v___x_3397_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6_once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__6);
v___x_3398_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3395_, v_options_3393_, v___x_3397_);
if (v___x_3398_ == 0)
{
lean_dec(v_a_3313_);
goto v___jp_3309_;
}
else
{
lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v___x_3399_ = lean_obj_once(&l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3, &l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3_once, _init_l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___closed__3);
v___x_3400_ = l_Lean_indentExpr(v_a_3313_);
v___x_3401_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3401_, 0, v___x_3399_);
lean_ctor_set(v___x_3401_, 1, v___x_3400_);
v___x_3402_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_3396_, v___x_3401_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_);
if (lean_obj_tag(v___x_3402_) == 0)
{
lean_dec_ref_known(v___x_3402_, 1);
goto v___jp_3309_;
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
v_a_3403_ = lean_ctor_get(v___x_3402_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3402_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3402_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3402_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
lean_dec(v_a_3313_);
lean_dec(v_hName_x3f_3303_);
lean_dec(v_mvarId_3302_);
v_a_3411_ = lean_ctor_get(v___x_3314_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3314_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3314_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3314_);
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
v___jp_3309_:
{
lean_object* v___x_3310_; lean_object* v___x_3311_; 
v___x_3310_ = lean_box(0);
v___x_3311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3311_, 0, v___x_3310_);
return v___x_3311_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___boxed(lean_object* v_e_3419_, lean_object* v_mvarId_3420_, lean_object* v_hName_x3f_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_){
_start:
{
lean_object* v_res_3427_; 
v_res_3427_ = l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0(v_e_3419_, v_mvarId_3420_, v_hName_x3f_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3424_);
lean_dec(v___y_3423_);
lean_dec_ref(v___y_3422_);
return v_res_3427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f(lean_object* v_mvarId_3428_, lean_object* v_e_3429_, lean_object* v_hName_x3f_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_, lean_object* v_a_3433_, lean_object* v_a_3434_){
_start:
{
lean_object* v___f_3436_; lean_object* v___x_3437_; 
lean_inc(v_mvarId_3428_);
v___f_3436_ = lean_alloc_closure((void*)(l_Lean_Meta_SplitIf_splitIfAt_x3f___lam__0___boxed), 8, 3);
lean_closure_set(v___f_3436_, 0, v_e_3429_);
lean_closure_set(v___f_3436_, 1, v_mvarId_3428_);
lean_closure_set(v___f_3436_, 2, v_hName_x3f_3430_);
v___x_3437_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(v_mvarId_3428_, v___f_3436_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_);
return v___x_3437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SplitIf_splitIfAt_x3f___boxed(lean_object* v_mvarId_3438_, lean_object* v_e_3439_, lean_object* v_hName_x3f_3440_, lean_object* v_a_3441_, lean_object* v_a_3442_, lean_object* v_a_3443_, lean_object* v_a_3444_, lean_object* v_a_3445_){
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l_Lean_Meta_SplitIf_splitIfAt_x3f(v_mvarId_3438_, v_e_3439_, v_hName_x3f_3440_, v_a_3441_, v_a_3442_, v_a_3443_, v_a_3444_);
lean_dec(v_a_3444_);
lean_dec_ref(v_a_3443_);
lean_dec(v_a_3442_);
lean_dec_ref(v_a_3441_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0(lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_){
_start:
{
lean_object* v_lctx_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; 
v_lctx_3452_ = lean_ctor_get(v___y_3447_, 2);
lean_inc_ref(v_lctx_3452_);
lean_dec_ref(v___y_3447_);
v___x_3453_ = lean_local_ctx_num_indices(v_lctx_3452_);
v___x_3454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3453_);
return v___x_3454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0___boxed(lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_){
_start:
{
lean_object* v_res_3460_; 
v_res_3460_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___lam__0(v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
lean_dec(v___y_3458_);
lean_dec_ref(v___y_3457_);
lean_dec(v___y_3456_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices(lean_object* v_mvarId_3462_, lean_object* v_a_3463_, lean_object* v_a_3464_, lean_object* v_a_3465_, lean_object* v_a_3466_){
_start:
{
lean_object* v___f_3468_; lean_object* v___x_3469_; 
v___f_3468_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___closed__0));
v___x_3469_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(v_mvarId_3462_, v___f_3468_, v_a_3463_, v_a_3464_, v_a_3465_, v_a_3466_);
return v___x_3469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices___boxed(lean_object* v_mvarId_3470_, lean_object* v_a_3471_, lean_object* v_a_3472_, lean_object* v_a_3473_, lean_object* v_a_3474_, lean_object* v_a_3475_){
_start:
{
lean_object* v_res_3476_; 
v_res_3476_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices(v_mvarId_3470_, v_a_3471_, v_a_3472_, v_a_3473_, v_a_3474_);
lean_dec(v_a_3474_);
lean_dec_ref(v_a_3473_);
lean_dec(v_a_3472_);
lean_dec_ref(v_a_3471_);
return v_res_3476_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_simpIfTarget_spec__0(lean_object* v_msg_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_){
_start:
{
lean_object* v___f_3484_; lean_object* v___x_1773__overap_3485_; lean_object* v___x_3486_; 
v___f_3484_ = ((lean_object*)(l_panic___at___00Lean_Meta_simpIfTarget_spec__0___closed__0));
v___x_1773__overap_3485_ = lean_panic_fn_borrowed(v___f_3484_, v_msg_3478_);
lean_inc(v___y_3482_);
lean_inc_ref(v___y_3481_);
lean_inc(v___y_3480_);
lean_inc_ref(v___y_3479_);
v___x_3486_ = lean_apply_5(v___x_1773__overap_3485_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, lean_box(0));
return v___x_3486_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_simpIfTarget_spec__0___boxed(lean_object* v_msg_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_){
_start:
{
lean_object* v_res_3493_; 
v_res_3493_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v_msg_3487_, v___y_3488_, v___y_3489_, v___y_3490_, v___y_3491_);
lean_dec(v___y_3491_);
lean_dec_ref(v___y_3490_);
lean_dec(v___y_3489_);
lean_dec_ref(v___y_3488_);
return v_res_3493_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1(lean_object* v_opts_3494_, lean_object* v_opt_3495_){
_start:
{
lean_object* v_name_3496_; lean_object* v_defValue_3497_; lean_object* v_map_3498_; lean_object* v___x_3499_; 
v_name_3496_ = lean_ctor_get(v_opt_3495_, 0);
v_defValue_3497_ = lean_ctor_get(v_opt_3495_, 1);
v_map_3498_ = lean_ctor_get(v_opts_3494_, 0);
v___x_3499_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3498_, v_name_3496_);
if (lean_obj_tag(v___x_3499_) == 0)
{
uint8_t v___x_3500_; 
v___x_3500_ = lean_unbox(v_defValue_3497_);
return v___x_3500_;
}
else
{
lean_object* v_val_3501_; 
v_val_3501_ = lean_ctor_get(v___x_3499_, 0);
lean_inc(v_val_3501_);
lean_dec_ref_known(v___x_3499_, 1);
if (lean_obj_tag(v_val_3501_) == 1)
{
uint8_t v_v_3502_; 
v_v_3502_ = lean_ctor_get_uint8(v_val_3501_, 0);
lean_dec_ref_known(v_val_3501_, 0);
return v_v_3502_;
}
else
{
uint8_t v___x_3503_; 
lean_dec(v_val_3501_);
v___x_3503_ = lean_unbox(v_defValue_3497_);
return v___x_3503_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1___boxed(lean_object* v_opts_3504_, lean_object* v_opt_3505_){
_start:
{
uint8_t v_res_3506_; lean_object* v_r_3507_; 
v_res_3506_ = l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1(v_opts_3504_, v_opt_3505_);
lean_dec_ref(v_opt_3505_);
lean_dec_ref(v_opts_3504_);
v_r_3507_ = lean_box(v_res_3506_);
return v_r_3507_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__0(void){
_start:
{
lean_object* v___x_3508_; lean_object* v___x_3509_; 
v___x_3508_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_SplitIf_getSimpContext_spec__0___redArg___closed__0);
v___x_3509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3508_);
return v___x_3509_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__1(void){
_start:
{
lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v___x_3510_ = lean_unsigned_to_nat(0u);
v___x_3511_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__0, &l_Lean_Meta_simpIfTarget___closed__0_once, _init_l_Lean_Meta_simpIfTarget___closed__0);
v___x_3512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3512_, 0, v___x_3511_);
lean_ctor_set(v___x_3512_, 1, v___x_3510_);
return v___x_3512_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__2(void){
_start:
{
lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; 
v___x_3513_ = lean_unsigned_to_nat(32u);
v___x_3514_ = lean_mk_empty_array_with_capacity(v___x_3513_);
v___x_3515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3515_, 0, v___x_3514_);
return v___x_3515_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__3(void){
_start:
{
size_t v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; 
v___x_3516_ = ((size_t)5ULL);
v___x_3517_ = lean_unsigned_to_nat(0u);
v___x_3518_ = lean_unsigned_to_nat(32u);
v___x_3519_ = lean_mk_empty_array_with_capacity(v___x_3518_);
v___x_3520_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__2, &l_Lean_Meta_simpIfTarget___closed__2_once, _init_l_Lean_Meta_simpIfTarget___closed__2);
v___x_3521_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3521_, 0, v___x_3520_);
lean_ctor_set(v___x_3521_, 1, v___x_3519_);
lean_ctor_set(v___x_3521_, 2, v___x_3517_);
lean_ctor_set(v___x_3521_, 3, v___x_3517_);
lean_ctor_set_usize(v___x_3521_, 4, v___x_3516_);
return v___x_3521_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__4(void){
_start:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; 
v___x_3522_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__3, &l_Lean_Meta_simpIfTarget___closed__3_once, _init_l_Lean_Meta_simpIfTarget___closed__3);
v___x_3523_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__0, &l_Lean_Meta_simpIfTarget___closed__0_once, _init_l_Lean_Meta_simpIfTarget___closed__0);
v___x_3524_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3524_, 0, v___x_3523_);
lean_ctor_set(v___x_3524_, 1, v___x_3523_);
lean_ctor_set(v___x_3524_, 2, v___x_3523_);
lean_ctor_set(v___x_3524_, 3, v___x_3522_);
return v___x_3524_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__5(void){
_start:
{
lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3525_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__4, &l_Lean_Meta_simpIfTarget___closed__4_once, _init_l_Lean_Meta_simpIfTarget___closed__4);
v___x_3526_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__1, &l_Lean_Meta_simpIfTarget___closed__1_once, _init_l_Lean_Meta_simpIfTarget___closed__1);
v___x_3527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3527_, 0, v___x_3526_);
lean_ctor_set(v___x_3527_, 1, v___x_3525_);
return v___x_3527_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__9(void){
_start:
{
lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3531_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__8));
v___x_3532_ = lean_unsigned_to_nat(78u);
v___x_3533_ = lean_unsigned_to_nat(352u);
v___x_3534_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__7));
v___x_3535_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__6));
v___x_3536_ = l_mkPanicMessageWithDecl(v___x_3535_, v___x_3534_, v___x_3533_, v___x_3532_, v___x_3531_);
return v___x_3536_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfTarget___closed__11(void){
_start:
{
lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; 
v___x_3539_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__8));
v___x_3540_ = lean_unsigned_to_nat(128u);
v___x_3541_ = lean_unsigned_to_nat(356u);
v___x_3542_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__7));
v___x_3543_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__6));
v___x_3544_ = l_mkPanicMessageWithDecl(v___x_3543_, v___x_3542_, v___x_3541_, v___x_3540_, v___x_3539_);
return v___x_3544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfTarget(lean_object* v_mvarId_3545_, uint8_t v_useDecide_3546_, uint8_t v_useNewSemantics_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_, lean_object* v_a_3551_){
_start:
{
if (v_useNewSemantics_3547_ == 0)
{
lean_object* v___x_3600_; lean_object* v___x_3601_; uint8_t v___x_3602_; 
v___x_3600_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_3550_);
v___x_3601_ = l_Lean_Meta_backward_split;
v___x_3602_ = l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1(v___x_3600_, v___x_3601_);
lean_dec_ref(v___x_3600_);
if (v___x_3602_ == 0)
{
goto v___jp_3553_;
}
else
{
lean_object* v___x_3603_; 
v___x_3603_ = l_Lean_Meta_SplitIf_getSimpContext(v_a_3548_, v_a_3549_, v_a_3550_, v_a_3551_);
if (lean_obj_tag(v___x_3603_) == 0)
{
lean_object* v_a_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; 
v_a_3604_ = lean_ctor_get(v___x_3603_, 0);
lean_inc(v_a_3604_);
lean_dec_ref_known(v___x_3603_, 1);
v___x_3605_ = lean_box(v_useDecide_3546_);
v___x_3606_ = lean_alloc_closure((void*)(l_Lean_Meta_SplitIf_mkDischarge_x3f___boxed), 6, 1);
lean_closure_set(v___x_3606_, 0, v___x_3605_);
lean_inc(v_mvarId_3545_);
v___x_3607_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(v_mvarId_3545_, v___x_3606_, v_a_3548_, v_a_3549_, v_a_3550_, v_a_3551_);
if (lean_obj_tag(v___x_3607_) == 0)
{
lean_object* v_a_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; 
v_a_3608_ = lean_ctor_get(v___x_3607_, 0);
lean_inc(v_a_3608_);
lean_dec_ref_known(v___x_3607_, 1);
v___x_3609_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__10));
v___x_3610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3610_, 0, v_a_3608_);
v___x_3611_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__5, &l_Lean_Meta_simpIfTarget___closed__5_once, _init_l_Lean_Meta_simpIfTarget___closed__5);
v___x_3612_ = l_Lean_Meta_simpTarget(v_mvarId_3545_, v_a_3604_, v___x_3609_, v___x_3610_, v_useNewSemantics_3547_, v___x_3611_, v_a_3548_, v_a_3549_, v_a_3550_, v_a_3551_);
if (lean_obj_tag(v___x_3612_) == 0)
{
lean_object* v_a_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3624_; 
v_a_3613_ = lean_ctor_get(v___x_3612_, 0);
v_isSharedCheck_3624_ = !lean_is_exclusive(v___x_3612_);
if (v_isSharedCheck_3624_ == 0)
{
v___x_3615_ = v___x_3612_;
v_isShared_3616_ = v_isSharedCheck_3624_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_a_3613_);
lean_dec(v___x_3612_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3624_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
lean_object* v_fst_3617_; 
v_fst_3617_ = lean_ctor_get(v_a_3613_, 0);
lean_inc(v_fst_3617_);
lean_dec(v_a_3613_);
if (lean_obj_tag(v_fst_3617_) == 1)
{
lean_object* v_val_3618_; lean_object* v___x_3620_; 
v_val_3618_ = lean_ctor_get(v_fst_3617_, 0);
lean_inc(v_val_3618_);
lean_dec_ref_known(v_fst_3617_, 1);
if (v_isShared_3616_ == 0)
{
lean_ctor_set(v___x_3615_, 0, v_val_3618_);
v___x_3620_ = v___x_3615_;
goto v_reusejp_3619_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v_val_3618_);
v___x_3620_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3619_;
}
v_reusejp_3619_:
{
return v___x_3620_;
}
}
else
{
lean_object* v___x_3622_; lean_object* v___x_3623_; 
lean_dec(v_fst_3617_);
lean_del_object(v___x_3615_);
v___x_3622_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__11, &l_Lean_Meta_simpIfTarget___closed__11_once, _init_l_Lean_Meta_simpIfTarget___closed__11);
v___x_3623_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v___x_3622_, v_a_3548_, v_a_3549_, v_a_3550_, v_a_3551_);
return v___x_3623_;
}
}
}
else
{
lean_object* v_a_3625_; lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3632_; 
v_a_3625_ = lean_ctor_get(v___x_3612_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3612_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3627_ = v___x_3612_;
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
else
{
lean_inc(v_a_3625_);
lean_dec(v___x_3612_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
lean_object* v___x_3630_; 
if (v_isShared_3628_ == 0)
{
v___x_3630_ = v___x_3627_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v_a_3625_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
}
}
else
{
lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3640_; 
lean_dec(v_a_3604_);
lean_dec(v_mvarId_3545_);
v_a_3633_ = lean_ctor_get(v___x_3607_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3607_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3635_ = v___x_3607_;
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3607_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3636_ == 0)
{
v___x_3638_ = v___x_3635_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_a_3633_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
}
}
else
{
lean_object* v_a_3641_; lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3648_; 
lean_dec(v_mvarId_3545_);
v_a_3641_ = lean_ctor_get(v___x_3603_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v___x_3603_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3643_ = v___x_3603_;
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
else
{
lean_inc(v_a_3641_);
lean_dec(v___x_3603_);
v___x_3643_ = lean_box(0);
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
v_resetjp_3642_:
{
lean_object* v___x_3646_; 
if (v_isShared_3644_ == 0)
{
v___x_3646_ = v___x_3643_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v_a_3641_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
}
}
}
}
}
else
{
goto v___jp_3553_;
}
v___jp_3553_:
{
lean_object* v___x_3554_; 
v___x_3554_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(v_a_3548_, v_a_3550_, v_a_3551_);
if (lean_obj_tag(v___x_3554_) == 0)
{
lean_object* v_a_3555_; lean_object* v___x_3556_; 
v_a_3555_ = lean_ctor_get(v___x_3554_, 0);
lean_inc(v_a_3555_);
lean_dec_ref_known(v___x_3554_, 1);
lean_inc(v_mvarId_3545_);
v___x_3556_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices(v_mvarId_3545_, v_a_3548_, v_a_3549_, v_a_3550_, v_a_3551_);
if (lean_obj_tag(v___x_3556_) == 0)
{
lean_object* v_a_3557_; lean_object* v___x_3558_; lean_object* v_a_3559_; lean_object* v___x_3560_; uint8_t v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; 
v_a_3557_ = lean_ctor_get(v___x_3556_, 0);
lean_inc(v_a_3557_);
lean_dec_ref_known(v___x_3556_, 1);
v___x_3558_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(v_a_3557_, v_useDecide_3546_);
v_a_3559_ = lean_ctor_get(v___x_3558_, 0);
lean_inc(v_a_3559_);
lean_dec_ref(v___x_3558_);
v___x_3560_ = lean_box(0);
v___x_3561_ = 0;
v___x_3562_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__5, &l_Lean_Meta_simpIfTarget___closed__5_once, _init_l_Lean_Meta_simpIfTarget___closed__5);
v___x_3563_ = l_Lean_Meta_simpTarget(v_mvarId_3545_, v_a_3555_, v_a_3559_, v___x_3560_, v___x_3561_, v___x_3562_, v_a_3548_, v_a_3549_, v_a_3550_, v_a_3551_);
if (lean_obj_tag(v___x_3563_) == 0)
{
lean_object* v_a_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3575_; 
v_a_3564_ = lean_ctor_get(v___x_3563_, 0);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3566_ = v___x_3563_;
v_isShared_3567_ = v_isSharedCheck_3575_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_a_3564_);
lean_dec(v___x_3563_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3575_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v_fst_3568_; 
v_fst_3568_ = lean_ctor_get(v_a_3564_, 0);
lean_inc(v_fst_3568_);
lean_dec(v_a_3564_);
if (lean_obj_tag(v_fst_3568_) == 1)
{
lean_object* v_val_3569_; lean_object* v___x_3571_; 
v_val_3569_ = lean_ctor_get(v_fst_3568_, 0);
lean_inc(v_val_3569_);
lean_dec_ref_known(v_fst_3568_, 1);
if (v_isShared_3567_ == 0)
{
lean_ctor_set(v___x_3566_, 0, v_val_3569_);
v___x_3571_ = v___x_3566_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v_val_3569_);
v___x_3571_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
return v___x_3571_;
}
}
else
{
lean_object* v___x_3573_; lean_object* v___x_3574_; 
lean_dec(v_fst_3568_);
lean_del_object(v___x_3566_);
v___x_3573_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__9, &l_Lean_Meta_simpIfTarget___closed__9_once, _init_l_Lean_Meta_simpIfTarget___closed__9);
v___x_3574_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v___x_3573_, v_a_3548_, v_a_3549_, v_a_3550_, v_a_3551_);
return v___x_3574_;
}
}
}
else
{
lean_object* v_a_3576_; lean_object* v___x_3578_; uint8_t v_isShared_3579_; uint8_t v_isSharedCheck_3583_; 
v_a_3576_ = lean_ctor_get(v___x_3563_, 0);
v_isSharedCheck_3583_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3583_ == 0)
{
v___x_3578_ = v___x_3563_;
v_isShared_3579_ = v_isSharedCheck_3583_;
goto v_resetjp_3577_;
}
else
{
lean_inc(v_a_3576_);
lean_dec(v___x_3563_);
v___x_3578_ = lean_box(0);
v_isShared_3579_ = v_isSharedCheck_3583_;
goto v_resetjp_3577_;
}
v_resetjp_3577_:
{
lean_object* v___x_3581_; 
if (v_isShared_3579_ == 0)
{
v___x_3581_ = v___x_3578_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3582_; 
v_reuseFailAlloc_3582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3582_, 0, v_a_3576_);
v___x_3581_ = v_reuseFailAlloc_3582_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
return v___x_3581_;
}
}
}
}
else
{
lean_object* v_a_3584_; lean_object* v___x_3586_; uint8_t v_isShared_3587_; uint8_t v_isSharedCheck_3591_; 
lean_dec(v_a_3555_);
lean_dec(v_mvarId_3545_);
v_a_3584_ = lean_ctor_get(v___x_3556_, 0);
v_isSharedCheck_3591_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3591_ == 0)
{
v___x_3586_ = v___x_3556_;
v_isShared_3587_ = v_isSharedCheck_3591_;
goto v_resetjp_3585_;
}
else
{
lean_inc(v_a_3584_);
lean_dec(v___x_3556_);
v___x_3586_ = lean_box(0);
v_isShared_3587_ = v_isSharedCheck_3591_;
goto v_resetjp_3585_;
}
v_resetjp_3585_:
{
lean_object* v___x_3589_; 
if (v_isShared_3587_ == 0)
{
v___x_3589_ = v___x_3586_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v_a_3584_);
v___x_3589_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
return v___x_3589_;
}
}
}
}
else
{
lean_object* v_a_3592_; lean_object* v___x_3594_; uint8_t v_isShared_3595_; uint8_t v_isSharedCheck_3599_; 
lean_dec(v_mvarId_3545_);
v_a_3592_ = lean_ctor_get(v___x_3554_, 0);
v_isSharedCheck_3599_ = !lean_is_exclusive(v___x_3554_);
if (v_isSharedCheck_3599_ == 0)
{
v___x_3594_ = v___x_3554_;
v_isShared_3595_ = v_isSharedCheck_3599_;
goto v_resetjp_3593_;
}
else
{
lean_inc(v_a_3592_);
lean_dec(v___x_3554_);
v___x_3594_ = lean_box(0);
v_isShared_3595_ = v_isSharedCheck_3599_;
goto v_resetjp_3593_;
}
v_resetjp_3593_:
{
lean_object* v___x_3597_; 
if (v_isShared_3595_ == 0)
{
v___x_3597_ = v___x_3594_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v_a_3592_);
v___x_3597_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
return v___x_3597_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfTarget___boxed(lean_object* v_mvarId_3649_, lean_object* v_useDecide_3650_, lean_object* v_useNewSemantics_3651_, lean_object* v_a_3652_, lean_object* v_a_3653_, lean_object* v_a_3654_, lean_object* v_a_3655_, lean_object* v_a_3656_){
_start:
{
uint8_t v_useDecide_boxed_3657_; uint8_t v_useNewSemantics_boxed_3658_; lean_object* v_res_3659_; 
v_useDecide_boxed_3657_ = lean_unbox(v_useDecide_3650_);
v_useNewSemantics_boxed_3658_ = lean_unbox(v_useNewSemantics_3651_);
v_res_3659_ = l_Lean_Meta_simpIfTarget(v_mvarId_3649_, v_useDecide_boxed_3657_, v_useNewSemantics_boxed_3658_, v_a_3652_, v_a_3653_, v_a_3654_, v_a_3655_);
lean_dec(v_a_3655_);
lean_dec_ref(v_a_3654_);
lean_dec(v_a_3653_);
lean_dec_ref(v_a_3652_);
return v_res_3659_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfLocalDecl___closed__1(void){
_start:
{
lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
v___x_3661_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__8));
v___x_3662_ = lean_unsigned_to_nat(93u);
v___x_3663_ = lean_unsigned_to_nat(368u);
v___x_3664_ = ((lean_object*)(l_Lean_Meta_simpIfLocalDecl___closed__0));
v___x_3665_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__6));
v___x_3666_ = l_mkPanicMessageWithDecl(v___x_3665_, v___x_3664_, v___x_3663_, v___x_3662_, v___x_3661_);
return v___x_3666_;
}
}
static lean_object* _init_l_Lean_Meta_simpIfLocalDecl___closed__2(void){
_start:
{
lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3667_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__8));
v___x_3668_ = lean_unsigned_to_nat(133u);
v___x_3669_ = lean_unsigned_to_nat(372u);
v___x_3670_ = ((lean_object*)(l_Lean_Meta_simpIfLocalDecl___closed__0));
v___x_3671_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__6));
v___x_3672_ = l_mkPanicMessageWithDecl(v___x_3671_, v___x_3670_, v___x_3669_, v___x_3668_, v___x_3667_);
return v___x_3672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfLocalDecl(lean_object* v_mvarId_3673_, lean_object* v_fvarId_3674_, uint8_t v_useNewSemantics_3675_, lean_object* v_a_3676_, lean_object* v_a_3677_, lean_object* v_a_3678_, lean_object* v_a_3679_){
_start:
{
if (v_useNewSemantics_3675_ == 0)
{
lean_object* v___x_3729_; lean_object* v___x_3730_; uint8_t v___x_3731_; 
v___x_3729_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_3678_);
v___x_3730_ = l_Lean_Meta_backward_split;
v___x_3731_ = l_Lean_Option_get___at___00Lean_Meta_simpIfTarget_spec__1(v___x_3729_, v___x_3730_);
lean_dec_ref(v___x_3729_);
if (v___x_3731_ == 0)
{
goto v___jp_3681_;
}
else
{
lean_object* v___x_3732_; 
v___x_3732_ = l_Lean_Meta_SplitIf_getSimpContext(v_a_3676_, v_a_3677_, v_a_3678_, v_a_3679_);
if (lean_obj_tag(v___x_3732_) == 0)
{
lean_object* v_a_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; 
v_a_3733_ = lean_ctor_get(v___x_3732_, 0);
lean_inc(v_a_3733_);
lean_dec_ref_known(v___x_3732_, 1);
v___x_3734_ = lean_box(v_useNewSemantics_3675_);
v___x_3735_ = lean_alloc_closure((void*)(l_Lean_Meta_SplitIf_mkDischarge_x3f___boxed), 6, 1);
lean_closure_set(v___x_3735_, 0, v___x_3734_);
lean_inc(v_mvarId_3673_);
v___x_3736_ = l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___redArg(v_mvarId_3673_, v___x_3735_, v_a_3676_, v_a_3677_, v_a_3678_, v_a_3679_);
if (lean_obj_tag(v___x_3736_) == 0)
{
lean_object* v_a_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; 
v_a_3737_ = lean_ctor_get(v___x_3736_, 0);
lean_inc(v_a_3737_);
lean_dec_ref_known(v___x_3736_, 1);
v___x_3738_ = ((lean_object*)(l_Lean_Meta_simpIfTarget___closed__10));
v___x_3739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3739_, 0, v_a_3737_);
v___x_3740_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__5, &l_Lean_Meta_simpIfTarget___closed__5_once, _init_l_Lean_Meta_simpIfTarget___closed__5);
v___x_3741_ = l_Lean_Meta_simpLocalDecl(v_mvarId_3673_, v_fvarId_3674_, v_a_3733_, v___x_3738_, v___x_3739_, v_useNewSemantics_3675_, v___x_3740_, v_a_3676_, v_a_3677_, v_a_3678_, v_a_3679_);
if (lean_obj_tag(v___x_3741_) == 0)
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3754_; 
v_a_3742_ = lean_ctor_get(v___x_3741_, 0);
v_isSharedCheck_3754_ = !lean_is_exclusive(v___x_3741_);
if (v_isSharedCheck_3754_ == 0)
{
v___x_3744_ = v___x_3741_;
v_isShared_3745_ = v_isSharedCheck_3754_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v___x_3741_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3754_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v_fst_3746_; 
v_fst_3746_ = lean_ctor_get(v_a_3742_, 0);
lean_inc(v_fst_3746_);
lean_dec(v_a_3742_);
if (lean_obj_tag(v_fst_3746_) == 1)
{
lean_object* v_val_3747_; lean_object* v_snd_3748_; lean_object* v___x_3750_; 
v_val_3747_ = lean_ctor_get(v_fst_3746_, 0);
lean_inc(v_val_3747_);
lean_dec_ref_known(v_fst_3746_, 1);
v_snd_3748_ = lean_ctor_get(v_val_3747_, 1);
lean_inc(v_snd_3748_);
lean_dec(v_val_3747_);
if (v_isShared_3745_ == 0)
{
lean_ctor_set(v___x_3744_, 0, v_snd_3748_);
v___x_3750_ = v___x_3744_;
goto v_reusejp_3749_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3751_, 0, v_snd_3748_);
v___x_3750_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3749_;
}
v_reusejp_3749_:
{
return v___x_3750_;
}
}
else
{
lean_object* v___x_3752_; lean_object* v___x_3753_; 
lean_dec(v_fst_3746_);
lean_del_object(v___x_3744_);
v___x_3752_ = lean_obj_once(&l_Lean_Meta_simpIfLocalDecl___closed__2, &l_Lean_Meta_simpIfLocalDecl___closed__2_once, _init_l_Lean_Meta_simpIfLocalDecl___closed__2);
v___x_3753_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v___x_3752_, v_a_3676_, v_a_3677_, v_a_3678_, v_a_3679_);
return v___x_3753_;
}
}
}
else
{
lean_object* v_a_3755_; lean_object* v___x_3757_; uint8_t v_isShared_3758_; uint8_t v_isSharedCheck_3762_; 
v_a_3755_ = lean_ctor_get(v___x_3741_, 0);
v_isSharedCheck_3762_ = !lean_is_exclusive(v___x_3741_);
if (v_isSharedCheck_3762_ == 0)
{
v___x_3757_ = v___x_3741_;
v_isShared_3758_ = v_isSharedCheck_3762_;
goto v_resetjp_3756_;
}
else
{
lean_inc(v_a_3755_);
lean_dec(v___x_3741_);
v___x_3757_ = lean_box(0);
v_isShared_3758_ = v_isSharedCheck_3762_;
goto v_resetjp_3756_;
}
v_resetjp_3756_:
{
lean_object* v___x_3760_; 
if (v_isShared_3758_ == 0)
{
v___x_3760_ = v___x_3757_;
goto v_reusejp_3759_;
}
else
{
lean_object* v_reuseFailAlloc_3761_; 
v_reuseFailAlloc_3761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3761_, 0, v_a_3755_);
v___x_3760_ = v_reuseFailAlloc_3761_;
goto v_reusejp_3759_;
}
v_reusejp_3759_:
{
return v___x_3760_;
}
}
}
}
else
{
lean_object* v_a_3763_; lean_object* v___x_3765_; uint8_t v_isShared_3766_; uint8_t v_isSharedCheck_3770_; 
lean_dec(v_a_3733_);
lean_dec(v_fvarId_3674_);
lean_dec(v_mvarId_3673_);
v_a_3763_ = lean_ctor_get(v___x_3736_, 0);
v_isSharedCheck_3770_ = !lean_is_exclusive(v___x_3736_);
if (v_isSharedCheck_3770_ == 0)
{
v___x_3765_ = v___x_3736_;
v_isShared_3766_ = v_isSharedCheck_3770_;
goto v_resetjp_3764_;
}
else
{
lean_inc(v_a_3763_);
lean_dec(v___x_3736_);
v___x_3765_ = lean_box(0);
v_isShared_3766_ = v_isSharedCheck_3770_;
goto v_resetjp_3764_;
}
v_resetjp_3764_:
{
lean_object* v___x_3768_; 
if (v_isShared_3766_ == 0)
{
v___x_3768_ = v___x_3765_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v_a_3763_);
v___x_3768_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
return v___x_3768_;
}
}
}
}
else
{
lean_object* v_a_3771_; lean_object* v___x_3773_; uint8_t v_isShared_3774_; uint8_t v_isSharedCheck_3778_; 
lean_dec(v_fvarId_3674_);
lean_dec(v_mvarId_3673_);
v_a_3771_ = lean_ctor_get(v___x_3732_, 0);
v_isSharedCheck_3778_ = !lean_is_exclusive(v___x_3732_);
if (v_isSharedCheck_3778_ == 0)
{
v___x_3773_ = v___x_3732_;
v_isShared_3774_ = v_isSharedCheck_3778_;
goto v_resetjp_3772_;
}
else
{
lean_inc(v_a_3771_);
lean_dec(v___x_3732_);
v___x_3773_ = lean_box(0);
v_isShared_3774_ = v_isSharedCheck_3778_;
goto v_resetjp_3772_;
}
v_resetjp_3772_:
{
lean_object* v___x_3776_; 
if (v_isShared_3774_ == 0)
{
v___x_3776_ = v___x_3773_;
goto v_reusejp_3775_;
}
else
{
lean_object* v_reuseFailAlloc_3777_; 
v_reuseFailAlloc_3777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3777_, 0, v_a_3771_);
v___x_3776_ = v_reuseFailAlloc_3777_;
goto v_reusejp_3775_;
}
v_reusejp_3775_:
{
return v___x_3776_;
}
}
}
}
}
else
{
goto v___jp_3681_;
}
v___jp_3681_:
{
lean_object* v___x_3682_; 
v___x_3682_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimpContext_x27___redArg(v_a_3676_, v_a_3678_, v_a_3679_);
if (lean_obj_tag(v___x_3682_) == 0)
{
lean_object* v_a_3683_; lean_object* v___x_3684_; 
v_a_3683_ = lean_ctor_get(v___x_3682_, 0);
lean_inc(v_a_3683_);
lean_dec_ref_known(v___x_3682_, 1);
lean_inc(v_mvarId_3673_);
v___x_3684_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_getNumIndices(v_mvarId_3673_, v_a_3676_, v_a_3677_, v_a_3678_, v_a_3679_);
if (lean_obj_tag(v___x_3684_) == 0)
{
lean_object* v_a_3685_; uint8_t v___x_3686_; lean_object* v___x_3687_; lean_object* v_a_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; 
v_a_3685_ = lean_ctor_get(v___x_3684_, 0);
lean_inc(v_a_3685_);
lean_dec_ref_known(v___x_3684_, 1);
v___x_3686_ = 0;
v___x_3687_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_getSimprocs___redArg(v_a_3685_, v___x_3686_);
v_a_3688_ = lean_ctor_get(v___x_3687_, 0);
lean_inc(v_a_3688_);
lean_dec_ref(v___x_3687_);
v___x_3689_ = lean_box(0);
v___x_3690_ = lean_obj_once(&l_Lean_Meta_simpIfTarget___closed__5, &l_Lean_Meta_simpIfTarget___closed__5_once, _init_l_Lean_Meta_simpIfTarget___closed__5);
v___x_3691_ = l_Lean_Meta_simpLocalDecl(v_mvarId_3673_, v_fvarId_3674_, v_a_3683_, v_a_3688_, v___x_3689_, v___x_3686_, v___x_3690_, v_a_3676_, v_a_3677_, v_a_3678_, v_a_3679_);
if (lean_obj_tag(v___x_3691_) == 0)
{
lean_object* v_a_3692_; lean_object* v___x_3694_; uint8_t v_isShared_3695_; uint8_t v_isSharedCheck_3704_; 
v_a_3692_ = lean_ctor_get(v___x_3691_, 0);
v_isSharedCheck_3704_ = !lean_is_exclusive(v___x_3691_);
if (v_isSharedCheck_3704_ == 0)
{
v___x_3694_ = v___x_3691_;
v_isShared_3695_ = v_isSharedCheck_3704_;
goto v_resetjp_3693_;
}
else
{
lean_inc(v_a_3692_);
lean_dec(v___x_3691_);
v___x_3694_ = lean_box(0);
v_isShared_3695_ = v_isSharedCheck_3704_;
goto v_resetjp_3693_;
}
v_resetjp_3693_:
{
lean_object* v_fst_3696_; 
v_fst_3696_ = lean_ctor_get(v_a_3692_, 0);
lean_inc(v_fst_3696_);
lean_dec(v_a_3692_);
if (lean_obj_tag(v_fst_3696_) == 1)
{
lean_object* v_val_3697_; lean_object* v_snd_3698_; lean_object* v___x_3700_; 
v_val_3697_ = lean_ctor_get(v_fst_3696_, 0);
lean_inc(v_val_3697_);
lean_dec_ref_known(v_fst_3696_, 1);
v_snd_3698_ = lean_ctor_get(v_val_3697_, 1);
lean_inc(v_snd_3698_);
lean_dec(v_val_3697_);
if (v_isShared_3695_ == 0)
{
lean_ctor_set(v___x_3694_, 0, v_snd_3698_);
v___x_3700_ = v___x_3694_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v_snd_3698_);
v___x_3700_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
return v___x_3700_;
}
}
else
{
lean_object* v___x_3702_; lean_object* v___x_3703_; 
lean_dec(v_fst_3696_);
lean_del_object(v___x_3694_);
v___x_3702_ = lean_obj_once(&l_Lean_Meta_simpIfLocalDecl___closed__1, &l_Lean_Meta_simpIfLocalDecl___closed__1_once, _init_l_Lean_Meta_simpIfLocalDecl___closed__1);
v___x_3703_ = l_panic___at___00Lean_Meta_simpIfTarget_spec__0(v___x_3702_, v_a_3676_, v_a_3677_, v_a_3678_, v_a_3679_);
return v___x_3703_;
}
}
}
else
{
lean_object* v_a_3705_; lean_object* v___x_3707_; uint8_t v_isShared_3708_; uint8_t v_isSharedCheck_3712_; 
v_a_3705_ = lean_ctor_get(v___x_3691_, 0);
v_isSharedCheck_3712_ = !lean_is_exclusive(v___x_3691_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3707_ = v___x_3691_;
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
else
{
lean_inc(v_a_3705_);
lean_dec(v___x_3691_);
v___x_3707_ = lean_box(0);
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
v_resetjp_3706_:
{
lean_object* v___x_3710_; 
if (v_isShared_3708_ == 0)
{
v___x_3710_ = v___x_3707_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_a_3705_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
}
else
{
lean_object* v_a_3713_; lean_object* v___x_3715_; uint8_t v_isShared_3716_; uint8_t v_isSharedCheck_3720_; 
lean_dec(v_a_3683_);
lean_dec(v_fvarId_3674_);
lean_dec(v_mvarId_3673_);
v_a_3713_ = lean_ctor_get(v___x_3684_, 0);
v_isSharedCheck_3720_ = !lean_is_exclusive(v___x_3684_);
if (v_isSharedCheck_3720_ == 0)
{
v___x_3715_ = v___x_3684_;
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
else
{
lean_inc(v_a_3713_);
lean_dec(v___x_3684_);
v___x_3715_ = lean_box(0);
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
v_resetjp_3714_:
{
lean_object* v___x_3718_; 
if (v_isShared_3716_ == 0)
{
v___x_3718_ = v___x_3715_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v_a_3713_);
v___x_3718_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
return v___x_3718_;
}
}
}
}
else
{
lean_object* v_a_3721_; lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3728_; 
lean_dec(v_fvarId_3674_);
lean_dec(v_mvarId_3673_);
v_a_3721_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3728_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3723_ = v___x_3682_;
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
else
{
lean_inc(v_a_3721_);
lean_dec(v___x_3682_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
lean_object* v___x_3726_; 
if (v_isShared_3724_ == 0)
{
v___x_3726_ = v___x_3723_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v_a_3721_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
return v___x_3726_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpIfLocalDecl___boxed(lean_object* v_mvarId_3779_, lean_object* v_fvarId_3780_, lean_object* v_useNewSemantics_3781_, lean_object* v_a_3782_, lean_object* v_a_3783_, lean_object* v_a_3784_, lean_object* v_a_3785_, lean_object* v_a_3786_){
_start:
{
uint8_t v_useNewSemantics_boxed_3787_; lean_object* v_res_3788_; 
v_useNewSemantics_boxed_3787_ = lean_unbox(v_useNewSemantics_3781_);
v_res_3788_ = l_Lean_Meta_simpIfLocalDecl(v_mvarId_3779_, v_fvarId_3780_, v_useNewSemantics_boxed_3787_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_);
lean_dec(v_a_3785_);
lean_dec_ref(v_a_3784_);
lean_dec(v_a_3783_);
lean_dec_ref(v_a_3782_);
return v_res_3788_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(lean_object* v_x_x3f_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_){
_start:
{
lean_object* v___x_3795_; 
v___x_3795_ = l_Lean_Meta_saveState___redArg(v___y_3791_, v___y_3793_);
if (lean_obj_tag(v___x_3795_) == 0)
{
lean_object* v_a_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3840_; 
v_a_3796_ = lean_ctor_get(v___x_3795_, 0);
v_isSharedCheck_3840_ = !lean_is_exclusive(v___x_3795_);
if (v_isSharedCheck_3840_ == 0)
{
v___x_3798_ = v___x_3795_;
v_isShared_3799_ = v_isSharedCheck_3840_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_a_3796_);
lean_dec(v___x_3795_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3840_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v_a_3801_; lean_object* v___x_3827_; 
lean_inc(v___y_3793_);
lean_inc_ref(v___y_3792_);
lean_inc(v___y_3791_);
lean_inc_ref(v___y_3790_);
v___x_3827_ = lean_apply_5(v_x_x3f_3789_, v___y_3790_, v___y_3791_, v___y_3792_, v___y_3793_, lean_box(0));
if (lean_obj_tag(v___x_3827_) == 0)
{
lean_object* v_a_3828_; 
v_a_3828_ = lean_ctor_get(v___x_3827_, 0);
lean_inc(v_a_3828_);
if (lean_obj_tag(v_a_3828_) == 0)
{
lean_object* v___x_3829_; 
lean_dec_ref_known(v___x_3827_, 1);
lean_inc(v_a_3796_);
v___x_3829_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3796_, v___y_3791_, v___y_3793_);
if (lean_obj_tag(v___x_3829_) == 0)
{
lean_object* v___x_3831_; uint8_t v_isShared_3832_; uint8_t v_isSharedCheck_3836_; 
lean_del_object(v___x_3798_);
lean_dec(v_a_3796_);
v_isSharedCheck_3836_ = !lean_is_exclusive(v___x_3829_);
if (v_isSharedCheck_3836_ == 0)
{
lean_object* v_unused_3837_; 
v_unused_3837_ = lean_ctor_get(v___x_3829_, 0);
lean_dec(v_unused_3837_);
v___x_3831_ = v___x_3829_;
v_isShared_3832_ = v_isSharedCheck_3836_;
goto v_resetjp_3830_;
}
else
{
lean_dec(v___x_3829_);
v___x_3831_ = lean_box(0);
v_isShared_3832_ = v_isSharedCheck_3836_;
goto v_resetjp_3830_;
}
v_resetjp_3830_:
{
lean_object* v___x_3834_; 
if (v_isShared_3832_ == 0)
{
lean_ctor_set(v___x_3831_, 0, v_a_3828_);
v___x_3834_ = v___x_3831_;
goto v_reusejp_3833_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v_a_3828_);
v___x_3834_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3833_;
}
v_reusejp_3833_:
{
return v___x_3834_;
}
}
}
else
{
lean_object* v_a_3838_; 
v_a_3838_ = lean_ctor_get(v___x_3829_, 0);
lean_inc(v_a_3838_);
lean_dec_ref_known(v___x_3829_, 1);
v_a_3801_ = v_a_3838_;
goto v___jp_3800_;
}
}
else
{
lean_dec_ref_known(v_a_3828_, 1);
lean_del_object(v___x_3798_);
lean_dec(v_a_3796_);
return v___x_3827_;
}
}
else
{
lean_object* v_a_3839_; 
v_a_3839_ = lean_ctor_get(v___x_3827_, 0);
lean_inc(v_a_3839_);
lean_dec_ref_known(v___x_3827_, 1);
v_a_3801_ = v_a_3839_;
goto v___jp_3800_;
}
v___jp_3800_:
{
uint8_t v___x_3802_; 
v___x_3802_ = l_Lean_Exception_isInterrupt(v_a_3801_);
if (v___x_3802_ == 0)
{
uint8_t v___x_3803_; 
lean_inc_ref(v_a_3801_);
v___x_3803_ = l_Lean_Exception_isRuntime(v_a_3801_);
if (v___x_3803_ == 0)
{
lean_object* v___x_3804_; 
lean_del_object(v___x_3798_);
v___x_3804_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3796_, v___y_3791_, v___y_3793_);
if (lean_obj_tag(v___x_3804_) == 0)
{
lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3811_; 
v_isSharedCheck_3811_ = !lean_is_exclusive(v___x_3804_);
if (v_isSharedCheck_3811_ == 0)
{
lean_object* v_unused_3812_; 
v_unused_3812_ = lean_ctor_get(v___x_3804_, 0);
lean_dec(v_unused_3812_);
v___x_3806_ = v___x_3804_;
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
else
{
lean_dec(v___x_3804_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v___x_3809_; 
if (v_isShared_3807_ == 0)
{
lean_ctor_set_tag(v___x_3806_, 1);
lean_ctor_set(v___x_3806_, 0, v_a_3801_);
v___x_3809_ = v___x_3806_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v_a_3801_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
return v___x_3809_;
}
}
}
else
{
lean_object* v_a_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3820_; 
lean_dec_ref(v_a_3801_);
v_a_3813_ = lean_ctor_get(v___x_3804_, 0);
v_isSharedCheck_3820_ = !lean_is_exclusive(v___x_3804_);
if (v_isSharedCheck_3820_ == 0)
{
v___x_3815_ = v___x_3804_;
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_a_3813_);
lean_dec(v___x_3804_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v___x_3818_; 
if (v_isShared_3816_ == 0)
{
v___x_3818_ = v___x_3815_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v_a_3813_);
v___x_3818_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
return v___x_3818_;
}
}
}
}
else
{
lean_object* v___x_3822_; 
lean_dec(v_a_3796_);
if (v_isShared_3799_ == 0)
{
lean_ctor_set_tag(v___x_3798_, 1);
lean_ctor_set(v___x_3798_, 0, v_a_3801_);
v___x_3822_ = v___x_3798_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_a_3801_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
else
{
lean_object* v___x_3825_; 
lean_dec(v_a_3796_);
if (v_isShared_3799_ == 0)
{
lean_ctor_set_tag(v___x_3798_, 1);
lean_ctor_set(v___x_3798_, 0, v_a_3801_);
v___x_3825_ = v___x_3798_;
goto v_reusejp_3824_;
}
else
{
lean_object* v_reuseFailAlloc_3826_; 
v_reuseFailAlloc_3826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3826_, 0, v_a_3801_);
v___x_3825_ = v_reuseFailAlloc_3826_;
goto v_reusejp_3824_;
}
v_reusejp_3824_:
{
return v___x_3825_;
}
}
}
}
}
else
{
lean_object* v_a_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3848_; 
lean_dec_ref(v_x_x3f_3789_);
v_a_3841_ = lean_ctor_get(v___x_3795_, 0);
v_isSharedCheck_3848_ = !lean_is_exclusive(v___x_3795_);
if (v_isSharedCheck_3848_ == 0)
{
v___x_3843_ = v___x_3795_;
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_a_3841_);
lean_dec(v___x_3795_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3846_; 
if (v_isShared_3844_ == 0)
{
v___x_3846_ = v___x_3843_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3847_; 
v_reuseFailAlloc_3847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3847_, 0, v_a_3841_);
v___x_3846_ = v_reuseFailAlloc_3847_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
return v___x_3846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg___boxed(lean_object* v_x_x3f_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_){
_start:
{
lean_object* v_res_3855_; 
v_res_3855_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(v_x_x3f_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_);
lean_dec(v___y_3853_);
lean_dec_ref(v___y_3852_);
lean_dec(v___y_3851_);
lean_dec_ref(v___y_3850_);
return v_res_3855_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0(lean_object* v_00_u03b1_3856_, lean_object* v_x_x3f_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_){
_start:
{
lean_object* v___x_3863_; 
v___x_3863_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(v_x_x3f_3857_, v___y_3858_, v___y_3859_, v___y_3860_, v___y_3861_);
return v___x_3863_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___boxed(lean_object* v_00_u03b1_3864_, lean_object* v_x_x3f_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_){
_start:
{
lean_object* v_res_3871_; 
v_res_3871_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0(v_00_u03b1_3864_, v_x_x3f_3865_, v___y_3866_, v___y_3867_, v___y_3868_, v___y_3869_);
lean_dec(v___y_3869_);
lean_dec_ref(v___y_3868_);
lean_dec(v___y_3867_);
lean_dec_ref(v___y_3866_);
return v_res_3871_;
}
}
static lean_object* _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; 
v___x_3876_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1));
v___x_3877_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f___closed__4));
v___x_3878_ = l_Lean_Name_append(v___x_3877_, v___x_3876_);
return v___x_3878_;
}
}
static lean_object* _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3880_; lean_object* v___x_3881_; 
v___x_3880_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__3));
v___x_3881_ = l_Lean_stringToMessageData(v___x_3880_);
return v___x_3881_;
}
}
static lean_object* _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6(void){
_start:
{
lean_object* v___x_3883_; lean_object* v___x_3884_; 
v___x_3883_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__5));
v___x_3884_ = l_Lean_stringToMessageData(v___x_3883_);
return v___x_3884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0(lean_object* v_mvarId_3885_, lean_object* v_hName_x3f_3886_, uint8_t v_useNewSemantics_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_){
_start:
{
lean_object* v___x_3896_; 
lean_inc(v_mvarId_3885_);
v___x_3896_ = l_Lean_MVarId_getType(v_mvarId_3885_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_);
if (lean_obj_tag(v___x_3896_) == 0)
{
lean_object* v_a_3897_; lean_object* v___x_3898_; 
v_a_3897_ = lean_ctor_get(v___x_3896_, 0);
lean_inc(v_a_3897_);
lean_dec_ref_known(v___x_3896_, 1);
v___x_3898_ = l_Lean_Meta_SplitIf_splitIfAt_x3f(v_mvarId_3885_, v_a_3897_, v_hName_x3f_3886_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_);
if (lean_obj_tag(v___x_3898_) == 0)
{
lean_object* v_a_3899_; lean_object* v___x_3901_; uint8_t v_isShared_3902_; uint8_t v_isSharedCheck_3996_; 
v_a_3899_ = lean_ctor_get(v___x_3898_, 0);
v_isSharedCheck_3996_ = !lean_is_exclusive(v___x_3898_);
if (v_isSharedCheck_3996_ == 0)
{
v___x_3901_ = v___x_3898_;
v_isShared_3902_ = v_isSharedCheck_3996_;
goto v_resetjp_3900_;
}
else
{
lean_inc(v_a_3899_);
lean_dec(v___x_3898_);
v___x_3901_ = lean_box(0);
v_isShared_3902_ = v_isSharedCheck_3996_;
goto v_resetjp_3900_;
}
v_resetjp_3900_:
{
if (lean_obj_tag(v_a_3899_) == 1)
{
lean_object* v_val_3903_; lean_object* v___x_3905_; uint8_t v_isShared_3906_; uint8_t v_isSharedCheck_3991_; 
lean_del_object(v___x_3901_);
v_val_3903_ = lean_ctor_get(v_a_3899_, 0);
v_isSharedCheck_3991_ = !lean_is_exclusive(v_a_3899_);
if (v_isSharedCheck_3991_ == 0)
{
v___x_3905_ = v_a_3899_;
v_isShared_3906_ = v_isSharedCheck_3991_;
goto v_resetjp_3904_;
}
else
{
lean_inc(v_val_3903_);
lean_dec(v_a_3899_);
v___x_3905_ = lean_box(0);
v_isShared_3906_ = v_isSharedCheck_3991_;
goto v_resetjp_3904_;
}
v_resetjp_3904_:
{
lean_object* v_fst_3907_; lean_object* v_snd_3908_; lean_object* v___x_3910_; uint8_t v_isShared_3911_; uint8_t v_isSharedCheck_3990_; 
v_fst_3907_ = lean_ctor_get(v_val_3903_, 0);
v_snd_3908_ = lean_ctor_get(v_val_3903_, 1);
v_isSharedCheck_3990_ = !lean_is_exclusive(v_val_3903_);
if (v_isSharedCheck_3990_ == 0)
{
v___x_3910_ = v_val_3903_;
v_isShared_3911_ = v_isSharedCheck_3990_;
goto v_resetjp_3909_;
}
else
{
lean_inc(v_snd_3908_);
lean_inc(v_fst_3907_);
lean_dec(v_val_3903_);
v___x_3910_ = lean_box(0);
v_isShared_3911_ = v_isSharedCheck_3990_;
goto v_resetjp_3909_;
}
v_resetjp_3909_:
{
lean_object* v_mvarId_3912_; lean_object* v_fvarId_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3989_; 
v_mvarId_3912_ = lean_ctor_get(v_fst_3907_, 0);
v_fvarId_3913_ = lean_ctor_get(v_fst_3907_, 1);
v_isSharedCheck_3989_ = !lean_is_exclusive(v_fst_3907_);
if (v_isSharedCheck_3989_ == 0)
{
v___x_3915_ = v_fst_3907_;
v_isShared_3916_ = v_isSharedCheck_3989_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_fvarId_3913_);
lean_inc(v_mvarId_3912_);
lean_dec(v_fst_3907_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3989_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
uint8_t v___x_3917_; lean_object* v___x_3918_; 
v___x_3917_ = 0;
lean_inc(v_mvarId_3912_);
v___x_3918_ = l_Lean_Meta_simpIfTarget(v_mvarId_3912_, v___x_3917_, v_useNewSemantics_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_);
if (lean_obj_tag(v___x_3918_) == 0)
{
lean_object* v_a_3919_; lean_object* v_mvarId_3920_; lean_object* v_fvarId_3921_; lean_object* v___x_3923_; uint8_t v_isShared_3924_; uint8_t v_isSharedCheck_3980_; 
v_a_3919_ = lean_ctor_get(v___x_3918_, 0);
lean_inc(v_a_3919_);
lean_dec_ref_known(v___x_3918_, 1);
v_mvarId_3920_ = lean_ctor_get(v_snd_3908_, 0);
v_fvarId_3921_ = lean_ctor_get(v_snd_3908_, 1);
v_isSharedCheck_3980_ = !lean_is_exclusive(v_snd_3908_);
if (v_isSharedCheck_3980_ == 0)
{
v___x_3923_ = v_snd_3908_;
v_isShared_3924_ = v_isSharedCheck_3980_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_fvarId_3921_);
lean_inc(v_mvarId_3920_);
lean_dec(v_snd_3908_);
v___x_3923_ = lean_box(0);
v_isShared_3924_ = v_isSharedCheck_3980_;
goto v_resetjp_3922_;
}
v_resetjp_3922_:
{
lean_object* v___x_3925_; 
lean_inc(v_mvarId_3920_);
v___x_3925_ = l_Lean_Meta_simpIfTarget(v_mvarId_3920_, v___x_3917_, v_useNewSemantics_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_);
if (lean_obj_tag(v___x_3925_) == 0)
{
lean_object* v_a_3926_; lean_object* v___x_3928_; uint8_t v_isShared_3929_; uint8_t v_isSharedCheck_3971_; 
v_a_3926_ = lean_ctor_get(v___x_3925_, 0);
v_isSharedCheck_3971_ = !lean_is_exclusive(v___x_3925_);
if (v_isSharedCheck_3971_ == 0)
{
v___x_3928_ = v___x_3925_;
v_isShared_3929_ = v_isSharedCheck_3971_;
goto v_resetjp_3927_;
}
else
{
lean_inc(v_a_3926_);
lean_dec(v___x_3925_);
v___x_3928_ = lean_box(0);
v_isShared_3929_ = v_isSharedCheck_3971_;
goto v_resetjp_3927_;
}
v_resetjp_3927_:
{
uint8_t v___x_3946_; 
v___x_3946_ = l_Lean_instBEqMVarId_beq(v_mvarId_3912_, v_a_3919_);
lean_dec(v_mvarId_3912_);
if (v___x_3946_ == 0)
{
lean_dec(v_mvarId_3920_);
goto v___jp_3930_;
}
else
{
uint8_t v___x_3947_; 
v___x_3947_ = l_Lean_instBEqMVarId_beq(v_mvarId_3920_, v_a_3926_);
lean_dec(v_mvarId_3920_);
if (v___x_3947_ == 0)
{
goto v___jp_3930_;
}
else
{
lean_object* v_toCold_3948_; lean_object* v_options_3949_; uint8_t v_hasTrace_3950_; 
lean_del_object(v___x_3928_);
lean_del_object(v___x_3923_);
lean_dec(v_fvarId_3921_);
lean_del_object(v___x_3915_);
lean_dec(v_fvarId_3913_);
lean_del_object(v___x_3910_);
lean_del_object(v___x_3905_);
v_toCold_3948_ = lean_ctor_get(v___y_3890_, 0);
v_options_3949_ = lean_ctor_get(v_toCold_3948_, 2);
v_hasTrace_3950_ = lean_ctor_get_uint8(v_options_3949_, sizeof(void*)*1);
if (v_hasTrace_3950_ == 0)
{
lean_dec(v_a_3926_);
lean_dec(v_a_3919_);
goto v___jp_3893_;
}
else
{
lean_object* v_inheritedTraceOptions_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; uint8_t v___x_3954_; 
v_inheritedTraceOptions_3951_ = lean_ctor_get(v_toCold_3948_, 11);
v___x_3952_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1));
v___x_3953_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2);
v___x_3954_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3951_, v_options_3949_, v___x_3953_);
if (v___x_3954_ == 0)
{
lean_dec(v_a_3926_);
lean_dec(v_a_3919_);
goto v___jp_3893_;
}
else
{
lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; 
v___x_3955_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4);
v___x_3956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3956_, 0, v_a_3919_);
v___x_3957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3955_);
lean_ctor_set(v___x_3957_, 1, v___x_3956_);
v___x_3958_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6);
v___x_3959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3957_);
lean_ctor_set(v___x_3959_, 1, v___x_3958_);
v___x_3960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3960_, 0, v_a_3926_);
v___x_3961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3961_, 0, v___x_3959_);
lean_ctor_set(v___x_3961_, 1, v___x_3960_);
v___x_3962_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_3952_, v___x_3961_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_);
if (lean_obj_tag(v___x_3962_) == 0)
{
lean_dec_ref_known(v___x_3962_, 1);
goto v___jp_3893_;
}
else
{
lean_object* v_a_3963_; lean_object* v___x_3965_; uint8_t v_isShared_3966_; uint8_t v_isSharedCheck_3970_; 
v_a_3963_ = lean_ctor_get(v___x_3962_, 0);
v_isSharedCheck_3970_ = !lean_is_exclusive(v___x_3962_);
if (v_isSharedCheck_3970_ == 0)
{
v___x_3965_ = v___x_3962_;
v_isShared_3966_ = v_isSharedCheck_3970_;
goto v_resetjp_3964_;
}
else
{
lean_inc(v_a_3963_);
lean_dec(v___x_3962_);
v___x_3965_ = lean_box(0);
v_isShared_3966_ = v_isSharedCheck_3970_;
goto v_resetjp_3964_;
}
v_resetjp_3964_:
{
lean_object* v___x_3968_; 
if (v_isShared_3966_ == 0)
{
v___x_3968_ = v___x_3965_;
goto v_reusejp_3967_;
}
else
{
lean_object* v_reuseFailAlloc_3969_; 
v_reuseFailAlloc_3969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3969_, 0, v_a_3963_);
v___x_3968_ = v_reuseFailAlloc_3969_;
goto v_reusejp_3967_;
}
v_reusejp_3967_:
{
return v___x_3968_;
}
}
}
}
}
}
}
v___jp_3930_:
{
lean_object* v___x_3932_; 
if (v_isShared_3924_ == 0)
{
lean_ctor_set(v___x_3923_, 1, v_fvarId_3913_);
lean_ctor_set(v___x_3923_, 0, v_a_3919_);
v___x_3932_ = v___x_3923_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v_a_3919_);
lean_ctor_set(v_reuseFailAlloc_3945_, 1, v_fvarId_3913_);
v___x_3932_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
lean_object* v___x_3934_; 
if (v_isShared_3916_ == 0)
{
lean_ctor_set(v___x_3915_, 1, v_fvarId_3921_);
lean_ctor_set(v___x_3915_, 0, v_a_3926_);
v___x_3934_ = v___x_3915_;
goto v_reusejp_3933_;
}
else
{
lean_object* v_reuseFailAlloc_3944_; 
v_reuseFailAlloc_3944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3944_, 0, v_a_3926_);
lean_ctor_set(v_reuseFailAlloc_3944_, 1, v_fvarId_3921_);
v___x_3934_ = v_reuseFailAlloc_3944_;
goto v_reusejp_3933_;
}
v_reusejp_3933_:
{
lean_object* v___x_3936_; 
if (v_isShared_3911_ == 0)
{
lean_ctor_set(v___x_3910_, 1, v___x_3934_);
lean_ctor_set(v___x_3910_, 0, v___x_3932_);
v___x_3936_ = v___x_3910_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v___x_3932_);
lean_ctor_set(v_reuseFailAlloc_3943_, 1, v___x_3934_);
v___x_3936_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
lean_object* v___x_3938_; 
if (v_isShared_3906_ == 0)
{
lean_ctor_set(v___x_3905_, 0, v___x_3936_);
v___x_3938_ = v___x_3905_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v___x_3936_);
v___x_3938_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
lean_object* v___x_3940_; 
if (v_isShared_3929_ == 0)
{
lean_ctor_set(v___x_3928_, 0, v___x_3938_);
v___x_3940_ = v___x_3928_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v___x_3938_);
v___x_3940_ = v_reuseFailAlloc_3941_;
goto v_reusejp_3939_;
}
v_reusejp_3939_:
{
return v___x_3940_;
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
lean_object* v_a_3972_; lean_object* v___x_3974_; uint8_t v_isShared_3975_; uint8_t v_isSharedCheck_3979_; 
lean_del_object(v___x_3923_);
lean_dec(v_fvarId_3921_);
lean_dec(v_mvarId_3920_);
lean_dec(v_a_3919_);
lean_del_object(v___x_3915_);
lean_dec(v_fvarId_3913_);
lean_dec(v_mvarId_3912_);
lean_del_object(v___x_3910_);
lean_del_object(v___x_3905_);
v_a_3972_ = lean_ctor_get(v___x_3925_, 0);
v_isSharedCheck_3979_ = !lean_is_exclusive(v___x_3925_);
if (v_isSharedCheck_3979_ == 0)
{
v___x_3974_ = v___x_3925_;
v_isShared_3975_ = v_isSharedCheck_3979_;
goto v_resetjp_3973_;
}
else
{
lean_inc(v_a_3972_);
lean_dec(v___x_3925_);
v___x_3974_ = lean_box(0);
v_isShared_3975_ = v_isSharedCheck_3979_;
goto v_resetjp_3973_;
}
v_resetjp_3973_:
{
lean_object* v___x_3977_; 
if (v_isShared_3975_ == 0)
{
v___x_3977_ = v___x_3974_;
goto v_reusejp_3976_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v_a_3972_);
v___x_3977_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3976_;
}
v_reusejp_3976_:
{
return v___x_3977_;
}
}
}
}
}
else
{
lean_object* v_a_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3988_; 
lean_del_object(v___x_3915_);
lean_dec(v_fvarId_3913_);
lean_dec(v_mvarId_3912_);
lean_del_object(v___x_3910_);
lean_dec(v_snd_3908_);
lean_del_object(v___x_3905_);
v_a_3981_ = lean_ctor_get(v___x_3918_, 0);
v_isSharedCheck_3988_ = !lean_is_exclusive(v___x_3918_);
if (v_isSharedCheck_3988_ == 0)
{
v___x_3983_ = v___x_3918_;
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_a_3981_);
lean_dec(v___x_3918_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3986_; 
if (v_isShared_3984_ == 0)
{
v___x_3986_ = v___x_3983_;
goto v_reusejp_3985_;
}
else
{
lean_object* v_reuseFailAlloc_3987_; 
v_reuseFailAlloc_3987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3987_, 0, v_a_3981_);
v___x_3986_ = v_reuseFailAlloc_3987_;
goto v_reusejp_3985_;
}
v_reusejp_3985_:
{
return v___x_3986_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3992_; lean_object* v___x_3994_; 
lean_dec(v_a_3899_);
v___x_3992_ = lean_box(0);
if (v_isShared_3902_ == 0)
{
lean_ctor_set(v___x_3901_, 0, v___x_3992_);
v___x_3994_ = v___x_3901_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3995_; 
v_reuseFailAlloc_3995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3995_, 0, v___x_3992_);
v___x_3994_ = v_reuseFailAlloc_3995_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
return v___x_3994_;
}
}
}
}
else
{
return v___x_3898_;
}
}
else
{
lean_object* v_a_3997_; lean_object* v___x_3999_; uint8_t v_isShared_4000_; uint8_t v_isSharedCheck_4004_; 
lean_dec(v_hName_x3f_3886_);
lean_dec(v_mvarId_3885_);
v_a_3997_ = lean_ctor_get(v___x_3896_, 0);
v_isSharedCheck_4004_ = !lean_is_exclusive(v___x_3896_);
if (v_isSharedCheck_4004_ == 0)
{
v___x_3999_ = v___x_3896_;
v_isShared_4000_ = v_isSharedCheck_4004_;
goto v_resetjp_3998_;
}
else
{
lean_inc(v_a_3997_);
lean_dec(v___x_3896_);
v___x_3999_ = lean_box(0);
v_isShared_4000_ = v_isSharedCheck_4004_;
goto v_resetjp_3998_;
}
v_resetjp_3998_:
{
lean_object* v___x_4002_; 
if (v_isShared_4000_ == 0)
{
v___x_4002_ = v___x_3999_;
goto v_reusejp_4001_;
}
else
{
lean_object* v_reuseFailAlloc_4003_; 
v_reuseFailAlloc_4003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4003_, 0, v_a_3997_);
v___x_4002_ = v_reuseFailAlloc_4003_;
goto v_reusejp_4001_;
}
v_reusejp_4001_:
{
return v___x_4002_;
}
}
}
v___jp_3893_:
{
lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___x_3894_ = lean_box(0);
v___x_3895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3895_, 0, v___x_3894_);
return v___x_3895_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___lam__0___boxed(lean_object* v_mvarId_4005_, lean_object* v_hName_x3f_4006_, lean_object* v_useNewSemantics_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_){
_start:
{
uint8_t v_useNewSemantics_boxed_4013_; lean_object* v_res_4014_; 
v_useNewSemantics_boxed_4013_ = lean_unbox(v_useNewSemantics_4007_);
v_res_4014_ = l_Lean_Meta_splitIfTarget_x3f___lam__0(v_mvarId_4005_, v_hName_x3f_4006_, v_useNewSemantics_boxed_4013_, v___y_4008_, v___y_4009_, v___y_4010_, v___y_4011_);
lean_dec(v___y_4011_);
lean_dec_ref(v___y_4010_);
lean_dec(v___y_4009_);
lean_dec_ref(v___y_4008_);
return v_res_4014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f(lean_object* v_mvarId_4015_, lean_object* v_hName_x3f_4016_, uint8_t v_useNewSemantics_4017_, lean_object* v_a_4018_, lean_object* v_a_4019_, lean_object* v_a_4020_, lean_object* v_a_4021_){
_start:
{
lean_object* v___x_4023_; lean_object* v___f_4024_; lean_object* v___x_4025_; 
v___x_4023_ = lean_box(v_useNewSemantics_4017_);
v___f_4024_ = lean_alloc_closure((void*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4024_, 0, v_mvarId_4015_);
lean_closure_set(v___f_4024_, 1, v_hName_x3f_4016_);
lean_closure_set(v___f_4024_, 2, v___x_4023_);
v___x_4025_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(v___f_4024_, v_a_4018_, v_a_4019_, v_a_4020_, v_a_4021_);
return v___x_4025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfTarget_x3f___boxed(lean_object* v_mvarId_4026_, lean_object* v_hName_x3f_4027_, lean_object* v_useNewSemantics_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_, lean_object* v_a_4033_){
_start:
{
uint8_t v_useNewSemantics_boxed_4034_; lean_object* v_res_4035_; 
v_useNewSemantics_boxed_4034_ = lean_unbox(v_useNewSemantics_4028_);
v_res_4035_ = l_Lean_Meta_splitIfTarget_x3f(v_mvarId_4026_, v_hName_x3f_4027_, v_useNewSemantics_boxed_4034_, v_a_4029_, v_a_4030_, v_a_4031_, v_a_4032_);
lean_dec(v_a_4032_);
lean_dec_ref(v_a_4031_);
lean_dec(v_a_4030_);
lean_dec_ref(v_a_4029_);
return v_res_4035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___lam__0(lean_object* v___x_4036_, lean_object* v_mvarId_4037_, lean_object* v_hName_x3f_4038_, lean_object* v_fvarId_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_){
_start:
{
lean_object* v___x_4048_; 
lean_inc(v___y_4043_);
lean_inc_ref(v___y_4042_);
lean_inc(v___y_4041_);
lean_inc_ref(v___y_4040_);
v___x_4048_ = lean_infer_type(v___x_4036_, v___y_4040_, v___y_4041_, v___y_4042_, v___y_4043_);
if (lean_obj_tag(v___x_4048_) == 0)
{
lean_object* v_a_4049_; lean_object* v___x_4050_; 
v_a_4049_ = lean_ctor_get(v___x_4048_, 0);
lean_inc(v_a_4049_);
lean_dec_ref_known(v___x_4048_, 1);
v___x_4050_ = l_Lean_Meta_SplitIf_splitIfAt_x3f(v_mvarId_4037_, v_a_4049_, v_hName_x3f_4038_, v___y_4040_, v___y_4041_, v___y_4042_, v___y_4043_);
if (lean_obj_tag(v___x_4050_) == 0)
{
lean_object* v_a_4051_; lean_object* v___x_4053_; uint8_t v_isShared_4054_; uint8_t v_isSharedCheck_4146_; 
v_a_4051_ = lean_ctor_get(v___x_4050_, 0);
v_isSharedCheck_4146_ = !lean_is_exclusive(v___x_4050_);
if (v_isSharedCheck_4146_ == 0)
{
v___x_4053_ = v___x_4050_;
v_isShared_4054_ = v_isSharedCheck_4146_;
goto v_resetjp_4052_;
}
else
{
lean_inc(v_a_4051_);
lean_dec(v___x_4050_);
v___x_4053_ = lean_box(0);
v_isShared_4054_ = v_isSharedCheck_4146_;
goto v_resetjp_4052_;
}
v_resetjp_4052_:
{
if (lean_obj_tag(v_a_4051_) == 1)
{
lean_object* v_val_4055_; lean_object* v___x_4057_; uint8_t v_isShared_4058_; uint8_t v_isSharedCheck_4141_; 
lean_del_object(v___x_4053_);
v_val_4055_ = lean_ctor_get(v_a_4051_, 0);
v_isSharedCheck_4141_ = !lean_is_exclusive(v_a_4051_);
if (v_isSharedCheck_4141_ == 0)
{
v___x_4057_ = v_a_4051_;
v_isShared_4058_ = v_isSharedCheck_4141_;
goto v_resetjp_4056_;
}
else
{
lean_inc(v_val_4055_);
lean_dec(v_a_4051_);
v___x_4057_ = lean_box(0);
v_isShared_4058_ = v_isSharedCheck_4141_;
goto v_resetjp_4056_;
}
v_resetjp_4056_:
{
lean_object* v_fst_4059_; lean_object* v_snd_4060_; lean_object* v___x_4062_; uint8_t v_isShared_4063_; uint8_t v_isSharedCheck_4140_; 
v_fst_4059_ = lean_ctor_get(v_val_4055_, 0);
v_snd_4060_ = lean_ctor_get(v_val_4055_, 1);
v_isSharedCheck_4140_ = !lean_is_exclusive(v_val_4055_);
if (v_isSharedCheck_4140_ == 0)
{
v___x_4062_ = v_val_4055_;
v_isShared_4063_ = v_isSharedCheck_4140_;
goto v_resetjp_4061_;
}
else
{
lean_inc(v_snd_4060_);
lean_inc(v_fst_4059_);
lean_dec(v_val_4055_);
v___x_4062_ = lean_box(0);
v_isShared_4063_ = v_isSharedCheck_4140_;
goto v_resetjp_4061_;
}
v_resetjp_4061_:
{
lean_object* v_mvarId_4064_; lean_object* v___x_4066_; uint8_t v_isShared_4067_; uint8_t v_isSharedCheck_4138_; 
v_mvarId_4064_ = lean_ctor_get(v_fst_4059_, 0);
v_isSharedCheck_4138_ = !lean_is_exclusive(v_fst_4059_);
if (v_isSharedCheck_4138_ == 0)
{
lean_object* v_unused_4139_; 
v_unused_4139_ = lean_ctor_get(v_fst_4059_, 1);
lean_dec(v_unused_4139_);
v___x_4066_ = v_fst_4059_;
v_isShared_4067_ = v_isSharedCheck_4138_;
goto v_resetjp_4065_;
}
else
{
lean_inc(v_mvarId_4064_);
lean_dec(v_fst_4059_);
v___x_4066_ = lean_box(0);
v_isShared_4067_ = v_isSharedCheck_4138_;
goto v_resetjp_4065_;
}
v_resetjp_4065_:
{
uint8_t v___x_4068_; lean_object* v___x_4069_; 
v___x_4068_ = 0;
lean_inc(v_fvarId_4039_);
lean_inc(v_mvarId_4064_);
v___x_4069_ = l_Lean_Meta_simpIfLocalDecl(v_mvarId_4064_, v_fvarId_4039_, v___x_4068_, v___y_4040_, v___y_4041_, v___y_4042_, v___y_4043_);
if (lean_obj_tag(v___x_4069_) == 0)
{
lean_object* v_a_4070_; lean_object* v_mvarId_4071_; lean_object* v___x_4073_; uint8_t v_isShared_4074_; uint8_t v_isSharedCheck_4128_; 
v_a_4070_ = lean_ctor_get(v___x_4069_, 0);
lean_inc(v_a_4070_);
lean_dec_ref_known(v___x_4069_, 1);
v_mvarId_4071_ = lean_ctor_get(v_snd_4060_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v_snd_4060_);
if (v_isSharedCheck_4128_ == 0)
{
lean_object* v_unused_4129_; 
v_unused_4129_ = lean_ctor_get(v_snd_4060_, 1);
lean_dec(v_unused_4129_);
v___x_4073_ = v_snd_4060_;
v_isShared_4074_ = v_isSharedCheck_4128_;
goto v_resetjp_4072_;
}
else
{
lean_inc(v_mvarId_4071_);
lean_dec(v_snd_4060_);
v___x_4073_ = lean_box(0);
v_isShared_4074_ = v_isSharedCheck_4128_;
goto v_resetjp_4072_;
}
v_resetjp_4072_:
{
lean_object* v___x_4075_; 
lean_inc(v_mvarId_4071_);
v___x_4075_ = l_Lean_Meta_simpIfLocalDecl(v_mvarId_4071_, v_fvarId_4039_, v___x_4068_, v___y_4040_, v___y_4041_, v___y_4042_, v___y_4043_);
if (lean_obj_tag(v___x_4075_) == 0)
{
lean_object* v_a_4076_; lean_object* v___x_4078_; uint8_t v_isShared_4079_; uint8_t v_isSharedCheck_4119_; 
v_a_4076_ = lean_ctor_get(v___x_4075_, 0);
v_isSharedCheck_4119_ = !lean_is_exclusive(v___x_4075_);
if (v_isSharedCheck_4119_ == 0)
{
v___x_4078_ = v___x_4075_;
v_isShared_4079_ = v_isSharedCheck_4119_;
goto v_resetjp_4077_;
}
else
{
lean_inc(v_a_4076_);
lean_dec(v___x_4075_);
v___x_4078_ = lean_box(0);
v_isShared_4079_ = v_isSharedCheck_4119_;
goto v_resetjp_4077_;
}
v_resetjp_4077_:
{
uint8_t v___x_4090_; 
v___x_4090_ = l_Lean_instBEqMVarId_beq(v_mvarId_4064_, v_a_4070_);
lean_dec(v_mvarId_4064_);
if (v___x_4090_ == 0)
{
lean_del_object(v___x_4073_);
lean_dec(v_mvarId_4071_);
lean_del_object(v___x_4066_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
goto v___jp_4080_;
}
else
{
uint8_t v___x_4091_; 
v___x_4091_ = l_Lean_instBEqMVarId_beq(v_mvarId_4071_, v_a_4076_);
lean_dec(v_mvarId_4071_);
if (v___x_4091_ == 0)
{
lean_del_object(v___x_4073_);
lean_del_object(v___x_4066_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
goto v___jp_4080_;
}
else
{
lean_object* v_toCold_4092_; lean_object* v_options_4093_; uint8_t v_hasTrace_4094_; 
lean_del_object(v___x_4078_);
lean_del_object(v___x_4062_);
lean_del_object(v___x_4057_);
v_toCold_4092_ = lean_ctor_get(v___y_4042_, 0);
v_options_4093_ = lean_ctor_get(v_toCold_4092_, 2);
v_hasTrace_4094_ = lean_ctor_get_uint8(v_options_4093_, sizeof(void*)*1);
if (v_hasTrace_4094_ == 0)
{
lean_dec(v_a_4076_);
lean_del_object(v___x_4073_);
lean_dec(v_a_4070_);
lean_del_object(v___x_4066_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
goto v___jp_4045_;
}
else
{
lean_object* v_inheritedTraceOptions_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; uint8_t v___x_4098_; 
v_inheritedTraceOptions_4095_ = lean_ctor_get(v_toCold_4092_, 11);
v___x_4096_ = ((lean_object*)(l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__1));
v___x_4097_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__2);
v___x_4098_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4095_, v_options_4093_, v___x_4097_);
if (v___x_4098_ == 0)
{
lean_dec(v_a_4076_);
lean_del_object(v___x_4073_);
lean_dec(v_a_4070_);
lean_del_object(v___x_4066_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
goto v___jp_4045_;
}
else
{
lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4102_; 
v___x_4099_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__4);
v___x_4100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4100_, 0, v_a_4070_);
if (v_isShared_4074_ == 0)
{
lean_ctor_set_tag(v___x_4073_, 7);
lean_ctor_set(v___x_4073_, 1, v___x_4100_);
lean_ctor_set(v___x_4073_, 0, v___x_4099_);
v___x_4102_ = v___x_4073_;
goto v_reusejp_4101_;
}
else
{
lean_object* v_reuseFailAlloc_4118_; 
v_reuseFailAlloc_4118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4118_, 0, v___x_4099_);
lean_ctor_set(v_reuseFailAlloc_4118_, 1, v___x_4100_);
v___x_4102_ = v_reuseFailAlloc_4118_;
goto v_reusejp_4101_;
}
v_reusejp_4101_:
{
lean_object* v___x_4103_; lean_object* v___x_4105_; 
v___x_4103_ = lean_obj_once(&l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6, &l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6_once, _init_l_Lean_Meta_splitIfTarget_x3f___lam__0___closed__6);
if (v_isShared_4067_ == 0)
{
lean_ctor_set_tag(v___x_4066_, 7);
lean_ctor_set(v___x_4066_, 1, v___x_4103_);
lean_ctor_set(v___x_4066_, 0, v___x_4102_);
v___x_4105_ = v___x_4066_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v___x_4102_);
lean_ctor_set(v_reuseFailAlloc_4117_, 1, v___x_4103_);
v___x_4105_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; 
v___x_4106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4106_, 0, v_a_4076_);
v___x_4107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4105_);
lean_ctor_set(v___x_4107_, 1, v___x_4106_);
v___x_4108_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_findSplit_x3f_find_x3f_spec__0(v___x_4096_, v___x_4107_, v___y_4040_, v___y_4041_, v___y_4042_, v___y_4043_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
if (lean_obj_tag(v___x_4108_) == 0)
{
lean_dec_ref_known(v___x_4108_, 1);
goto v___jp_4045_;
}
else
{
lean_object* v_a_4109_; lean_object* v___x_4111_; uint8_t v_isShared_4112_; uint8_t v_isSharedCheck_4116_; 
v_a_4109_ = lean_ctor_get(v___x_4108_, 0);
v_isSharedCheck_4116_ = !lean_is_exclusive(v___x_4108_);
if (v_isSharedCheck_4116_ == 0)
{
v___x_4111_ = v___x_4108_;
v_isShared_4112_ = v_isSharedCheck_4116_;
goto v_resetjp_4110_;
}
else
{
lean_inc(v_a_4109_);
lean_dec(v___x_4108_);
v___x_4111_ = lean_box(0);
v_isShared_4112_ = v_isSharedCheck_4116_;
goto v_resetjp_4110_;
}
v_resetjp_4110_:
{
lean_object* v___x_4114_; 
if (v_isShared_4112_ == 0)
{
v___x_4114_ = v___x_4111_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v_a_4109_);
v___x_4114_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
return v___x_4114_;
}
}
}
}
}
}
}
}
}
v___jp_4080_:
{
lean_object* v___x_4082_; 
if (v_isShared_4063_ == 0)
{
lean_ctor_set(v___x_4062_, 1, v_a_4076_);
lean_ctor_set(v___x_4062_, 0, v_a_4070_);
v___x_4082_ = v___x_4062_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4089_; 
v_reuseFailAlloc_4089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4089_, 0, v_a_4070_);
lean_ctor_set(v_reuseFailAlloc_4089_, 1, v_a_4076_);
v___x_4082_ = v_reuseFailAlloc_4089_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
lean_object* v___x_4084_; 
if (v_isShared_4058_ == 0)
{
lean_ctor_set(v___x_4057_, 0, v___x_4082_);
v___x_4084_ = v___x_4057_;
goto v_reusejp_4083_;
}
else
{
lean_object* v_reuseFailAlloc_4088_; 
v_reuseFailAlloc_4088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4088_, 0, v___x_4082_);
v___x_4084_ = v_reuseFailAlloc_4088_;
goto v_reusejp_4083_;
}
v_reusejp_4083_:
{
lean_object* v___x_4086_; 
if (v_isShared_4079_ == 0)
{
lean_ctor_set(v___x_4078_, 0, v___x_4084_);
v___x_4086_ = v___x_4078_;
goto v_reusejp_4085_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v___x_4084_);
v___x_4086_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4085_;
}
v_reusejp_4085_:
{
return v___x_4086_;
}
}
}
}
}
}
else
{
lean_object* v_a_4120_; lean_object* v___x_4122_; uint8_t v_isShared_4123_; uint8_t v_isSharedCheck_4127_; 
lean_del_object(v___x_4073_);
lean_dec(v_mvarId_4071_);
lean_dec(v_a_4070_);
lean_del_object(v___x_4066_);
lean_dec(v_mvarId_4064_);
lean_del_object(v___x_4062_);
lean_del_object(v___x_4057_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
v_a_4120_ = lean_ctor_get(v___x_4075_, 0);
v_isSharedCheck_4127_ = !lean_is_exclusive(v___x_4075_);
if (v_isSharedCheck_4127_ == 0)
{
v___x_4122_ = v___x_4075_;
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
else
{
lean_inc(v_a_4120_);
lean_dec(v___x_4075_);
v___x_4122_ = lean_box(0);
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
v_resetjp_4121_:
{
lean_object* v___x_4125_; 
if (v_isShared_4123_ == 0)
{
v___x_4125_ = v___x_4122_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v_a_4120_);
v___x_4125_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
return v___x_4125_;
}
}
}
}
}
else
{
lean_object* v_a_4130_; lean_object* v___x_4132_; uint8_t v_isShared_4133_; uint8_t v_isSharedCheck_4137_; 
lean_del_object(v___x_4066_);
lean_dec(v_mvarId_4064_);
lean_del_object(v___x_4062_);
lean_dec(v_snd_4060_);
lean_del_object(v___x_4057_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
lean_dec(v_fvarId_4039_);
v_a_4130_ = lean_ctor_get(v___x_4069_, 0);
v_isSharedCheck_4137_ = !lean_is_exclusive(v___x_4069_);
if (v_isSharedCheck_4137_ == 0)
{
v___x_4132_ = v___x_4069_;
v_isShared_4133_ = v_isSharedCheck_4137_;
goto v_resetjp_4131_;
}
else
{
lean_inc(v_a_4130_);
lean_dec(v___x_4069_);
v___x_4132_ = lean_box(0);
v_isShared_4133_ = v_isSharedCheck_4137_;
goto v_resetjp_4131_;
}
v_resetjp_4131_:
{
lean_object* v___x_4135_; 
if (v_isShared_4133_ == 0)
{
v___x_4135_ = v___x_4132_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4136_; 
v_reuseFailAlloc_4136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4136_, 0, v_a_4130_);
v___x_4135_ = v_reuseFailAlloc_4136_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
return v___x_4135_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4142_; lean_object* v___x_4144_; 
lean_dec(v_a_4051_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
lean_dec(v_fvarId_4039_);
v___x_4142_ = lean_box(0);
if (v_isShared_4054_ == 0)
{
lean_ctor_set(v___x_4053_, 0, v___x_4142_);
v___x_4144_ = v___x_4053_;
goto v_reusejp_4143_;
}
else
{
lean_object* v_reuseFailAlloc_4145_; 
v_reuseFailAlloc_4145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4145_, 0, v___x_4142_);
v___x_4144_ = v_reuseFailAlloc_4145_;
goto v_reusejp_4143_;
}
v_reusejp_4143_:
{
return v___x_4144_;
}
}
}
}
else
{
lean_object* v_a_4147_; lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4154_; 
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
lean_dec(v_fvarId_4039_);
v_a_4147_ = lean_ctor_get(v___x_4050_, 0);
v_isSharedCheck_4154_ = !lean_is_exclusive(v___x_4050_);
if (v_isSharedCheck_4154_ == 0)
{
v___x_4149_ = v___x_4050_;
v_isShared_4150_ = v_isSharedCheck_4154_;
goto v_resetjp_4148_;
}
else
{
lean_inc(v_a_4147_);
lean_dec(v___x_4050_);
v___x_4149_ = lean_box(0);
v_isShared_4150_ = v_isSharedCheck_4154_;
goto v_resetjp_4148_;
}
v_resetjp_4148_:
{
lean_object* v___x_4152_; 
if (v_isShared_4150_ == 0)
{
v___x_4152_ = v___x_4149_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4153_; 
v_reuseFailAlloc_4153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4153_, 0, v_a_4147_);
v___x_4152_ = v_reuseFailAlloc_4153_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
return v___x_4152_;
}
}
}
}
else
{
lean_object* v_a_4155_; lean_object* v___x_4157_; uint8_t v_isShared_4158_; uint8_t v_isSharedCheck_4162_; 
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
lean_dec(v_fvarId_4039_);
lean_dec(v_hName_x3f_4038_);
lean_dec(v_mvarId_4037_);
v_a_4155_ = lean_ctor_get(v___x_4048_, 0);
v_isSharedCheck_4162_ = !lean_is_exclusive(v___x_4048_);
if (v_isSharedCheck_4162_ == 0)
{
v___x_4157_ = v___x_4048_;
v_isShared_4158_ = v_isSharedCheck_4162_;
goto v_resetjp_4156_;
}
else
{
lean_inc(v_a_4155_);
lean_dec(v___x_4048_);
v___x_4157_ = lean_box(0);
v_isShared_4158_ = v_isSharedCheck_4162_;
goto v_resetjp_4156_;
}
v_resetjp_4156_:
{
lean_object* v___x_4160_; 
if (v_isShared_4158_ == 0)
{
v___x_4160_ = v___x_4157_;
goto v_reusejp_4159_;
}
else
{
lean_object* v_reuseFailAlloc_4161_; 
v_reuseFailAlloc_4161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4161_, 0, v_a_4155_);
v___x_4160_ = v_reuseFailAlloc_4161_;
goto v_reusejp_4159_;
}
v_reusejp_4159_:
{
return v___x_4160_;
}
}
}
v___jp_4045_:
{
lean_object* v___x_4046_; lean_object* v___x_4047_; 
v___x_4046_ = lean_box(0);
v___x_4047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4047_, 0, v___x_4046_);
return v___x_4047_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___lam__0___boxed(lean_object* v___x_4163_, lean_object* v_mvarId_4164_, lean_object* v_hName_x3f_4165_, lean_object* v_fvarId_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_){
_start:
{
lean_object* v_res_4172_; 
v_res_4172_ = l_Lean_Meta_splitIfLocalDecl_x3f___lam__0(v___x_4163_, v_mvarId_4164_, v_hName_x3f_4165_, v_fvarId_4166_, v___y_4167_, v___y_4168_, v___y_4169_, v___y_4170_);
return v_res_4172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f(lean_object* v_mvarId_4173_, lean_object* v_fvarId_4174_, lean_object* v_hName_x3f_4175_, lean_object* v_a_4176_, lean_object* v_a_4177_, lean_object* v_a_4178_, lean_object* v_a_4179_){
_start:
{
lean_object* v___x_4181_; lean_object* v___f_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; 
lean_inc(v_fvarId_4174_);
v___x_4181_ = l_Lean_mkFVar(v_fvarId_4174_);
lean_inc(v_mvarId_4173_);
v___f_4182_ = lean_alloc_closure((void*)(l_Lean_Meta_splitIfLocalDecl_x3f___lam__0___boxed), 9, 4);
lean_closure_set(v___f_4182_, 0, v___x_4181_);
lean_closure_set(v___f_4182_, 1, v_mvarId_4173_);
lean_closure_set(v___f_4182_, 2, v_hName_x3f_4175_);
lean_closure_set(v___f_4182_, 3, v_fvarId_4174_);
v___x_4183_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_SplitIf_splitIfAt_x3f_spec__0___boxed), 8, 3);
lean_closure_set(v___x_4183_, 0, lean_box(0));
lean_closure_set(v___x_4183_, 1, v_mvarId_4173_);
lean_closure_set(v___x_4183_, 2, v___f_4182_);
v___x_4184_ = l_Lean_commitWhenSome_x3f___at___00Lean_Meta_splitIfTarget_x3f_spec__0___redArg(v___x_4183_, v_a_4176_, v_a_4177_, v_a_4178_, v_a_4179_);
return v___x_4184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_splitIfLocalDecl_x3f___boxed(lean_object* v_mvarId_4185_, lean_object* v_fvarId_4186_, lean_object* v_hName_x3f_4187_, lean_object* v_a_4188_, lean_object* v_a_4189_, lean_object* v_a_4190_, lean_object* v_a_4191_, lean_object* v_a_4192_){
_start:
{
lean_object* v_res_4193_; 
v_res_4193_ = l_Lean_Meta_splitIfLocalDecl_x3f(v_mvarId_4185_, v_fvarId_4186_, v_hName_x3f_4187_, v_a_4188_, v_a_4189_, v_a_4190_, v_a_4191_);
lean_dec(v_a_4191_);
lean_dec_ref(v_a_4190_);
lean_dec(v_a_4189_);
lean_dec_ref(v_a_4188_);
return v_res_4193_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; 
v___x_4214_ = lean_unsigned_to_nat(3526097586u);
v___x_4215_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_));
v___x_4216_ = l_Lean_Name_num___override(v___x_4215_, v___x_4214_);
return v___x_4216_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; 
v___x_4218_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_));
v___x_4219_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_);
v___x_4220_ = l_Lean_Name_str___override(v___x_4219_, v___x_4218_);
return v___x_4220_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; 
v___x_4222_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_));
v___x_4223_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_);
v___x_4224_ = l_Lean_Name_str___override(v___x_4223_, v___x_4222_);
return v___x_4224_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; 
v___x_4225_ = lean_unsigned_to_nat(2u);
v___x_4226_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_);
v___x_4227_ = l_Lean_Name_num___override(v___x_4226_, v___x_4225_);
return v___x_4227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4229_; uint8_t v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; 
v___x_4229_ = ((lean_object*)(l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_SplitIf_discharge_x3f___closed__5));
v___x_4230_ = 0;
v___x_4231_ = lean_obj_once(&l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_);
v___x_4232_ = l_Lean_registerTraceClass(v___x_4229_, v___x_4230_, v___x_4231_);
return v___x_4232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2____boxed(lean_object* v_a_4233_){
_start:
{
lean_object* v_res_4234_; 
v_res_4234_ = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_();
return v_res_4234_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_SplitIf(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_4163081528____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_split = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_split);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_SplitIf_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_SplitIf_3526097586____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_SplitIf(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_SplitIf(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_SplitIf(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_SplitIf(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_SplitIf(builtin);
}
#ifdef __cplusplus
}
#endif
