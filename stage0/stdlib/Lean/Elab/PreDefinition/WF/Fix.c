// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.Fix
// Imports: public import Lean.Data.Array public import Lean.Elab.PreDefinition.Basic public import Lean.Elab.PreDefinition.WF.Basic public import Lean.Meta.ArgsPacker public import Lean.Meta.Match.MatcherApp.Transform public import Lean.Meta.Tactic.Cleanup public import Lean.Util.HasConstCache
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
lean_object* l_Lean_stringToMessageData(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Meta_ArgsPacker_unpack(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getRecAppSyntax_x3f(lean_object*);
lean_object* l_Lean_Expr_mdataExpr_x21(lean_object*);
lean_object* l_Lean_MVarId_setType___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_applyCleanWfTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Elab_Term_reportUnsolvedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Tactic_setGoals___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Term_withDeclName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkRecAppWithSyntax(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Cleanup_0__Lean_Meta_cleanupCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_HasConstCache_containsUnsafe(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMData(lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getMotivePos(lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* l_Lean_Elab_ensureNoRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addPPExplicitToExposeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
extern lean_object* l_Lean_instInhabitedLocalDecl_default;
lean_object* l_Lean_LocalContext_size(lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_isEmpty(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wf"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "replaceRecApps"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(40, 215, 222, 176, 152, 52, 0, 225)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(222, 200, 98, 106, 253, 180, 239, 155)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(54, 49, 183, 192, 189, 122, 168, 8)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(68, 153, 95, 135, 30, 171, 176, 236)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "Type check every step of the well-founded definition translation"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WF"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(24, 25, 43, 203, 194, 237, 195, 214)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(7, 7, 223, 43, 113, 218, 153, 204)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(253, 66, 61, 195, 239, 57, 103, 30)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(65, 40, 109, 48, 223, 99, 87, 96)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value_aux_5),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(255, 91, 253, 16, 215, 73, 25, 62)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_debug_definition_wf_replaceRecApps;
static const lean_array_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unexpected empty local context"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Type not preserved transforming"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\nto"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "\nType was"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "\nand now is"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Type error introduced when transforming"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.Match.MatcherApp.Basic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Meta.matchMatcherApp\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected constructor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2;
static const lean_ctor_object l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3 = (const lean_object*)&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(235, 76, 232, 241, 91, 21, 77, 227)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "replaceRecApp: eta-expanding"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "unexpected matcher application alternative"};
static const lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0 = (const lean_object*)&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1;
static const lean_string_object l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\nat application"};
static const lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2 = (const lean_object*)&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "type of functorial "};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " is"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "replaceRecApps:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "casesOn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PSum"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 115, 173, 38, 27, 113, 160, 8)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inl"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3_value),LEAN_SCALAR_PTR_LITERAL(14, 217, 178, 28, 107, 212, 157, 131)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inr"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5_value),LEAN_SCALAR_PTR_LITERAL(201, 156, 94, 164, 220, 114, 107, 70)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "_private.Lean.Elab.PreDefinition.WF.Fix.0.Lean.Elab.WF.processPSigmaCasesOn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Elab.PreDefinition.WF.Fix"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "PSigma"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 171, 149, 177, 120, 131, 37, 223)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 129, 3, 119, 45, 252, 168, 83)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "tacticDecreasing_tactic"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 100, 186, 108, 185, 30, 251, 120)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "decreasing_tactic"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_WF_assignSubsumed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_WF_assignSubsumed___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_WF_assignSubsumed___closed__0 = (const lean_object*)&l_Lean_Elab_WF_assignSubsumed___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "MVar does not look like a recursive call:"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Cannot unpack param, unexpected expression:"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "MVar not annotated as a recursive call:"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12_spec__13___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12_spec__13___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12_spec__13___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12_spec__13___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__3;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__4;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12_spec__13(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12(lean_object*);
static const lean_string_object l_Lean_Elab_WF_isNatLtWF___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "invImage"};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__0 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__0_value;
static const lean_ctor_object l_Lean_Elab_WF_isNatLtWF___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 194, 127, 152, 147, 1, 182, 44)}};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__1 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__1_value;
static const lean_string_object l_Lean_Elab_WF_isNatLtWF___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__2 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__2_value;
static const lean_ctor_object l_Lean_Elab_WF_isNatLtWF___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__3 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__3_value;
static lean_once_cell_t l_Lean_Elab_WF_isNatLtWF___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_isNatLtWF___closed__4;
static const lean_string_object l_Lean_Elab_WF_isNatLtWF___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lt_wfRel"};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__5 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__5_value;
static const lean_ctor_object l_Lean_Elab_WF_isNatLtWF___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Elab_WF_isNatLtWF___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__5_value),LEAN_SCALAR_PTR_LITERAL(154, 103, 103, 42, 122, 250, 41, 80)}};
static const lean_object* l_Lean_Elab_WF_isNatLtWF___closed__6 = (const lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__6_value;
static lean_once_cell_t l_Lean_Elab_WF_isNatLtWF___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_isNatLtWF___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_mkFix___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "WellFounded"};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__0_value;
static const lean_string_object l_Lean_Elab_WF_mkFix___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fix"};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__1_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(153, 177, 70, 214, 156, 62, 227, 219)}};
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_WF_isNatLtWF___closed__2_value),LEAN_SCALAR_PTR_LITERAL(209, 126, 194, 128, 117, 36, 224, 78)}};
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(196, 0, 160, 225, 119, 146, 123, 62)}};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__2_value;
static const lean_string_object l_Lean_Elab_WF_mkFix___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "WellFoundedRelation"};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__3_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(247, 146, 95, 132, 177, 137, 153, 47)}};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__4_value;
static const lean_string_object l_Lean_Elab_WF_mkFix___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "opaqueId"};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__5_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(194, 89, 34, 148, 92, 203, 118, 146)}};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(153, 177, 70, 214, 156, 62, 227, 219)}};
static const lean_ctor_object l_Lean_Elab_WF_mkFix___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(172, 133, 211, 204, 28, 206, 53, 233)}};
static const lean_object* l_Lean_Elab_WF_mkFix___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_WF_mkFix___lam__1___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3___boxed(lean_object**);
static const lean_ctor_object l_Lean_Elab_WF_mkFix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_WF_mkFix___closed__0 = (const lean_object*)&l_Lean_Elab_WF_mkFix___closed__0_value;
static const lean_ctor_object l_Lean_Elab_WF_mkFix___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_Elab_WF_mkFix___closed__1 = (const lean_object*)&l_Lean_Elab_WF_mkFix___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_61_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_));
v___x_62_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_));
v___x_63_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_));
v___x_64_ = l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4__spec__0(v___x_61_, v___x_62_, v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4____boxed(lean_object* v_a_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_();
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(lean_object* v_decreasingProp_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v_ref_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v_ref_75_ = lean_ctor_get(v_a_72_, 2);
lean_inc(v_ref_75_);
v___x_76_ = l_Lean_mkRecAppWithSyntax(v_decreasingProp_69_, v_ref_75_);
v___x_77_ = lean_box(0);
v___x_78_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_76_, v___x_77_, v_a_70_, v_a_71_, v_a_72_, v_a_73_);
if (lean_obj_tag(v___x_78_) == 0)
{
lean_object* v_a_79_; lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; 
v_a_79_ = lean_ctor_get(v___x_78_, 0);
lean_inc(v_a_79_);
lean_dec_ref_known(v___x_78_, 1);
v___x_80_ = l_Lean_Expr_mvarId_x21(v_a_79_);
v___x_81_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0));
v___x_82_ = 1;
v___x_83_ = l___private_Lean_Meta_Tactic_Cleanup_0__Lean_Meta_cleanupCore(v___x_80_, v___x_81_, v___x_82_, v_a_70_, v_a_71_, v_a_72_, v_a_73_);
if (lean_obj_tag(v___x_83_) == 0)
{
lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_90_; 
v_isSharedCheck_90_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_90_ == 0)
{
lean_object* v_unused_91_; 
v_unused_91_ = lean_ctor_get(v___x_83_, 0);
lean_dec(v_unused_91_);
v___x_85_ = v___x_83_;
v_isShared_86_ = v_isSharedCheck_90_;
goto v_resetjp_84_;
}
else
{
lean_dec(v___x_83_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_90_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_88_; 
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 0, v_a_79_);
v___x_88_ = v___x_85_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_a_79_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
else
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
lean_dec(v_a_79_);
v_a_92_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___x_83_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_83_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
else
{
return v___x_78_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___boxed(lean_object* v_decreasingProp_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(v_decreasingProp_100_, v_a_101_, v_a_102_, v_a_103_, v_a_104_);
lean_dec(v_a_104_);
lean_dec_ref(v_a_103_);
lean_dec(v_a_102_);
lean_dec_ref(v_a_101_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(lean_object* v_decreasingProp_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(v_decreasingProp_107_, v_a_110_, v_a_111_, v_a_112_, v_a_113_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___boxed(lean_object* v_decreasingProp_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(v_decreasingProp_116_, v_a_117_, v_a_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
lean_dec(v_a_120_);
lean_dec_ref(v_a_119_);
lean_dec(v_a_118_);
lean_dec_ref(v_a_117_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__0(lean_object* v_msg_125_){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = l_Lean_instInhabitedLocalDecl_default;
v___x_127_ = lean_panic_fn_borrowed(v___x_126_, v_msg_125_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(lean_object* v_msgData_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_){
_start:
{
lean_object* v___x_134_; lean_object* v_env_135_; uint8_t v___x_136_; lean_object* v_env_137_; lean_object* v___x_138_; lean_object* v_toCold_139_; lean_object* v_mctx_140_; lean_object* v_lctx_141_; lean_object* v_options_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_134_ = lean_st_ref_get(v___y_132_);
v_env_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc_ref(v_env_135_);
lean_dec(v___x_134_);
v___x_136_ = 0;
v_env_137_ = l_Lean_Environment_setRecordingDeps(v_env_135_, v___x_136_);
v___x_138_ = lean_st_ref_get(v___y_130_);
v_toCold_139_ = lean_ctor_get(v___y_131_, 0);
v_mctx_140_ = lean_ctor_get(v___x_138_, 0);
lean_inc_ref(v_mctx_140_);
lean_dec(v___x_138_);
v_lctx_141_ = lean_ctor_get(v___y_129_, 2);
v_options_142_ = lean_ctor_get(v_toCold_139_, 2);
lean_inc_ref(v_options_142_);
lean_inc_ref(v_lctx_141_);
v___x_143_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_143_, 0, v_env_137_);
lean_ctor_set(v___x_143_, 1, v_mctx_140_);
lean_ctor_set(v___x_143_, 2, v_lctx_141_);
lean_ctor_set(v___x_143_, 3, v_options_142_);
v___x_144_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
lean_ctor_set(v___x_144_, 1, v_msgData_128_);
v___x_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1___boxed(lean_object* v_msgData_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msgData_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(lean_object* v_msg_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
lean_object* v_ref_159_; lean_object* v___x_160_; lean_object* v_a_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_169_; 
v_ref_159_ = lean_ctor_get(v___y_156_, 2);
v___x_160_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_);
v_a_161_ = lean_ctor_get(v___x_160_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_160_);
if (v_isSharedCheck_169_ == 0)
{
v___x_163_ = v___x_160_;
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_a_161_);
lean_dec(v___x_160_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_165_; lean_object* v___x_167_; 
lean_inc(v_ref_159_);
v___x_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_165_, 0, v_ref_159_);
lean_ctor_set(v___x_165_, 1, v_a_161_);
if (v_isShared_164_ == 0)
{
lean_ctor_set_tag(v___x_163_, 1);
lean_ctor_set(v___x_163_, 0, v___x_165_);
v___x_167_ = v___x_163_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_165_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg___boxed(lean_object* v_msg_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v_msg_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
return v_res_176_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_180_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2));
v___x_181_ = lean_unsigned_to_nat(14u);
v___x_182_ = lean_unsigned_to_nat(22u);
v___x_183_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1));
v___x_184_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0));
v___x_185_ = l_mkPanicMessageWithDecl(v___x_184_, v___x_183_, v___x_182_, v___x_181_, v___x_180_);
return v___x_185_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4));
v___x_188_ = l_Lean_stringToMessageData(v___x_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v___y_195_; lean_object* v___y_199_; lean_object* v_lctx_203_; lean_object* v___x_204_; uint8_t v___x_214_; 
v_lctx_203_ = lean_ctor_get(v_a_189_, 2);
v___x_204_ = lean_box(0);
v___x_214_ = l_Lean_LocalContext_isEmpty(v_lctx_203_);
if (v___x_214_ == 0)
{
goto v___jp_205_;
}
else
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v_a_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_224_; 
v___x_215_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5);
v___x_216_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v___x_215_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
v_a_217_ = lean_ctor_get(v___x_216_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_224_ == 0)
{
v___x_219_ = v___x_216_;
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_a_217_);
lean_dec(v___x_216_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_222_; 
if (v_isShared_220_ == 0)
{
v___x_222_ = v___x_219_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_a_217_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
v___jp_194_:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = l_Lean_LocalDecl_fvarId(v___y_195_);
lean_dec_ref(v___y_195_);
v___x_197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
return v___x_197_;
}
v___jp_198_:
{
if (lean_obj_tag(v___y_199_) == 0)
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3);
v___x_201_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__0(v___x_200_);
v___y_195_ = v___x_201_;
goto v___jp_194_;
}
else
{
lean_object* v_val_202_; 
v_val_202_ = lean_ctor_get(v___y_199_, 0);
lean_inc(v_val_202_);
lean_dec_ref_known(v___y_199_, 1);
v___y_195_ = v_val_202_;
goto v___jp_194_;
}
}
v___jp_205_:
{
lean_object* v_decls_206_; lean_object* v_size_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; 
v_decls_206_ = lean_ctor_get(v_lctx_203_, 1);
v_size_207_ = lean_ctor_get(v_decls_206_, 2);
v___x_208_ = l_Lean_LocalContext_size(v_lctx_203_);
v___x_209_ = lean_unsigned_to_nat(1u);
v___x_210_ = lean_nat_sub(v___x_208_, v___x_209_);
lean_dec(v___x_208_);
v___x_211_ = lean_nat_dec_lt(v___x_210_, v_size_207_);
if (v___x_211_ == 0)
{
lean_object* v___x_212_; 
lean_dec(v___x_210_);
v___x_212_ = l_outOfBounds___redArg(v___x_204_);
v___y_199_ = v___x_212_;
goto v___jp_198_;
}
else
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_PersistentArray_get_x21___redArg(v___x_204_, v_decls_206_, v___x_210_);
lean_dec(v___x_210_);
v___y_199_ = v___x_213_;
goto v___jp_198_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___boxed(lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(v_a_225_, v_a_226_, v_a_227_, v_a_228_);
lean_dec(v_a_228_);
lean_dec_ref(v_a_227_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1(lean_object* v_00_u03b1_231_, lean_object* v_msg_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v_msg_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___boxed(lean_object* v_00_u03b1_239_, lean_object* v_msg_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1(v_00_u03b1_239_, v_msg_240_, v___y_241_, v___y_242_, v___y_243_, v___y_244_);
lean_dec(v___y_244_);
lean_dec_ref(v___y_243_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(lean_object* v_lctxid_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_lctx_250_; uint8_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v_lctx_250_ = lean_ctor_get(v_a_248_, 2);
v___x_251_ = l_Lean_LocalContext_contains(v_lctx_250_, v_lctxid_247_);
v___x_252_ = lean_box(v___x_251_);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg___boxed(lean_object* v_lctxid_254_, lean_object* v_a_255_, lean_object* v_a_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(v_lctxid_254_, v_a_255_);
lean_dec_ref(v_a_255_);
lean_dec(v_lctxid_254_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid(lean_object* v_lctxid_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(v_lctxid_258_, v_a_259_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___boxed(lean_object* v_lctxid_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid(v_lctxid_265_, v_a_266_, v_a_267_, v_a_268_, v_a_269_);
lean_dec(v_a_269_);
lean_dec_ref(v_a_268_);
lean_dec(v_a_267_);
lean_dec_ref(v_a_266_);
lean_dec(v_lctxid_265_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(lean_object* v_recFnName_272_, lean_object* v_e_273_, lean_object* v_a_274_){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v_fst_281_; lean_object* v_snd_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_276_ = lean_unsigned_to_nat(1u);
v___x_277_ = lean_mk_empty_array_with_capacity(v___x_276_);
v___x_278_ = lean_array_push(v___x_277_, v_recFnName_272_);
v___x_279_ = lean_st_ref_take(v_a_274_);
v___x_280_ = l_Lean_HasConstCache_containsUnsafe(v___x_278_, v_e_273_, v___x_279_);
lean_dec_ref(v___x_278_);
v_fst_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_fst_281_);
v_snd_282_ = lean_ctor_get(v___x_280_, 1);
lean_inc(v_snd_282_);
lean_dec_ref(v___x_280_);
v___x_283_ = lean_st_ref_put(v_a_274_, v_snd_282_);
v___x_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_284_, 0, v_fst_281_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___boxed(lean_object* v_recFnName_285_, lean_object* v_e_286_, lean_object* v_a_287_, lean_object* v_a_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(v_recFnName_285_, v_e_286_, v_a_287_);
lean_dec(v_a_287_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(lean_object* v_recFnName_290_, lean_object* v_e_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(v_recFnName_290_, v_e_291_, v_a_292_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___boxed(lean_object* v_recFnName_302_, lean_object* v_e_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(v_recFnName_302_, v_e_303_, v_a_304_, v_a_305_, v_a_306_, v_a_307_, v_a_308_, v_a_309_, v_a_310_, v_a_311_);
lean_dec(v_a_311_);
lean_dec_ref(v_a_310_);
lean_dec(v_a_309_);
lean_dec_ref(v_a_308_);
lean_dec(v_a_307_);
lean_dec_ref(v_a_306_);
lean_dec(v_a_305_);
lean_dec(v_a_304_);
return v_res_313_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_314_; double v___x_315_; 
v___x_314_ = lean_unsigned_to_nat(0u);
v___x_315_ = lean_float_of_nat(v___x_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(lean_object* v_cls_319_, lean_object* v_msg_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
lean_object* v_ref_326_; lean_object* v___x_327_; lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_373_; 
v_ref_326_ = lean_ctor_get(v___y_323_, 2);
v___x_327_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_320_, v___y_321_, v___y_322_, v___y_323_, v___y_324_);
v_a_328_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_373_ == 0)
{
v___x_330_ = v___x_327_;
v_isShared_331_ = v_isSharedCheck_373_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_327_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_373_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_332_; lean_object* v_traceState_333_; lean_object* v_env_334_; lean_object* v_nextMacroScope_335_; lean_object* v_ngen_336_; lean_object* v_auxDeclNGen_337_; lean_object* v_cache_338_; lean_object* v_recordedDeps_339_; lean_object* v_messages_340_; lean_object* v_infoState_341_; lean_object* v_snapshotTasks_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_372_; 
v___x_332_ = lean_st_ref_take(v___y_324_);
v_traceState_333_ = lean_ctor_get(v___x_332_, 4);
v_env_334_ = lean_ctor_get(v___x_332_, 0);
v_nextMacroScope_335_ = lean_ctor_get(v___x_332_, 1);
v_ngen_336_ = lean_ctor_get(v___x_332_, 2);
v_auxDeclNGen_337_ = lean_ctor_get(v___x_332_, 3);
v_cache_338_ = lean_ctor_get(v___x_332_, 5);
v_recordedDeps_339_ = lean_ctor_get(v___x_332_, 6);
v_messages_340_ = lean_ctor_get(v___x_332_, 7);
v_infoState_341_ = lean_ctor_get(v___x_332_, 8);
v_snapshotTasks_342_ = lean_ctor_get(v___x_332_, 9);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_372_ == 0)
{
v___x_344_ = v___x_332_;
v_isShared_345_ = v_isSharedCheck_372_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_snapshotTasks_342_);
lean_inc(v_infoState_341_);
lean_inc(v_messages_340_);
lean_inc(v_recordedDeps_339_);
lean_inc(v_cache_338_);
lean_inc(v_traceState_333_);
lean_inc(v_auxDeclNGen_337_);
lean_inc(v_ngen_336_);
lean_inc(v_nextMacroScope_335_);
lean_inc(v_env_334_);
lean_dec(v___x_332_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_372_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
uint64_t v_tid_346_; lean_object* v_traces_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_371_; 
v_tid_346_ = lean_ctor_get_uint64(v_traceState_333_, sizeof(void*)*1);
v_traces_347_ = lean_ctor_get(v_traceState_333_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v_traceState_333_);
if (v_isSharedCheck_371_ == 0)
{
v___x_349_ = v_traceState_333_;
v_isShared_350_ = v_isSharedCheck_371_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_traces_347_);
lean_dec(v_traceState_333_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_371_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_351_; lean_object* v___x_352_; double v___x_353_; uint8_t v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_351_ = lean_box(0);
v___x_352_ = lean_box(0);
v___x_353_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0);
v___x_354_ = 0;
v___x_355_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1));
v___x_356_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_356_, 0, v_cls_319_);
lean_ctor_set(v___x_356_, 1, v___x_352_);
lean_ctor_set(v___x_356_, 2, v___x_355_);
lean_ctor_set_float(v___x_356_, sizeof(void*)*3, v___x_353_);
lean_ctor_set_float(v___x_356_, sizeof(void*)*3 + 8, v___x_353_);
lean_ctor_set_uint8(v___x_356_, sizeof(void*)*3 + 16, v___x_354_);
v___x_357_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2));
v___x_358_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_358_, 0, v___x_356_);
lean_ctor_set(v___x_358_, 1, v_a_328_);
lean_ctor_set(v___x_358_, 2, v___x_357_);
lean_inc(v_ref_326_);
v___x_359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_359_, 0, v_ref_326_);
lean_ctor_set(v___x_359_, 1, v___x_358_);
v___x_360_ = l_Lean_PersistentArray_push___redArg(v_traces_347_, v___x_359_);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_360_);
v___x_362_ = v___x_349_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v___x_360_);
lean_ctor_set_uint64(v_reuseFailAlloc_370_, sizeof(void*)*1, v_tid_346_);
v___x_362_ = v_reuseFailAlloc_370_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
lean_object* v___x_364_; 
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 4, v___x_362_);
v___x_364_ = v___x_344_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_env_334_);
lean_ctor_set(v_reuseFailAlloc_369_, 1, v_nextMacroScope_335_);
lean_ctor_set(v_reuseFailAlloc_369_, 2, v_ngen_336_);
lean_ctor_set(v_reuseFailAlloc_369_, 3, v_auxDeclNGen_337_);
lean_ctor_set(v_reuseFailAlloc_369_, 4, v___x_362_);
lean_ctor_set(v_reuseFailAlloc_369_, 5, v_cache_338_);
lean_ctor_set(v_reuseFailAlloc_369_, 6, v_recordedDeps_339_);
lean_ctor_set(v_reuseFailAlloc_369_, 7, v_messages_340_);
lean_ctor_set(v_reuseFailAlloc_369_, 8, v_infoState_341_);
lean_ctor_set(v_reuseFailAlloc_369_, 9, v_snapshotTasks_342_);
v___x_364_ = v_reuseFailAlloc_369_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
lean_object* v___x_365_; lean_object* v___x_367_; 
v___x_365_ = lean_st_ref_put(v___y_324_, v___x_364_);
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 0, v___x_351_);
v___x_367_ = v___x_330_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v___x_351_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___boxed(lean_object* v_cls_374_, lean_object* v_msg_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(v_cls_374_, v_msg_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(lean_object* v_x_382_, lean_object* v_x_383_){
_start:
{
if (lean_obj_tag(v_x_383_) == 0)
{
return v_x_382_;
}
else
{
lean_object* v_key_384_; lean_object* v_value_385_; lean_object* v_tail_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_409_; 
v_key_384_ = lean_ctor_get(v_x_383_, 0);
v_value_385_ = lean_ctor_get(v_x_383_, 1);
v_tail_386_ = lean_ctor_get(v_x_383_, 2);
v_isSharedCheck_409_ = !lean_is_exclusive(v_x_383_);
if (v_isSharedCheck_409_ == 0)
{
v___x_388_ = v_x_383_;
v_isShared_389_ = v_isSharedCheck_409_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_tail_386_);
lean_inc(v_value_385_);
lean_inc(v_key_384_);
lean_dec(v_x_383_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_409_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_390_; uint64_t v___x_391_; uint64_t v___x_392_; uint64_t v___x_393_; uint64_t v_fold_394_; uint64_t v___x_395_; uint64_t v___x_396_; uint64_t v___x_397_; size_t v___x_398_; size_t v___x_399_; size_t v___x_400_; size_t v___x_401_; size_t v___x_402_; lean_object* v___x_403_; lean_object* v___x_405_; 
v___x_390_ = lean_array_get_size(v_x_382_);
v___x_391_ = l_Lean_Expr_hash(v_key_384_);
v___x_392_ = 32ULL;
v___x_393_ = lean_uint64_shift_right(v___x_391_, v___x_392_);
v_fold_394_ = lean_uint64_xor(v___x_391_, v___x_393_);
v___x_395_ = 16ULL;
v___x_396_ = lean_uint64_shift_right(v_fold_394_, v___x_395_);
v___x_397_ = lean_uint64_xor(v_fold_394_, v___x_396_);
v___x_398_ = lean_uint64_to_usize(v___x_397_);
v___x_399_ = lean_usize_of_nat(v___x_390_);
v___x_400_ = ((size_t)1ULL);
v___x_401_ = lean_usize_sub(v___x_399_, v___x_400_);
v___x_402_ = lean_usize_land(v___x_398_, v___x_401_);
v___x_403_ = lean_array_uget_borrowed(v_x_382_, v___x_402_);
lean_inc(v___x_403_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 2, v___x_403_);
v___x_405_ = v___x_388_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_key_384_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v_value_385_);
lean_ctor_set(v_reuseFailAlloc_408_, 2, v___x_403_);
v___x_405_ = v_reuseFailAlloc_408_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
lean_object* v___x_406_; 
v___x_406_ = lean_array_uset(v_x_382_, v___x_402_, v___x_405_);
v_x_382_ = v___x_406_;
v_x_383_ = v_tail_386_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(lean_object* v_i_410_, lean_object* v_source_411_, lean_object* v_target_412_){
_start:
{
lean_object* v___x_413_; uint8_t v___x_414_; 
v___x_413_ = lean_array_get_size(v_source_411_);
v___x_414_ = lean_nat_dec_lt(v_i_410_, v___x_413_);
if (v___x_414_ == 0)
{
lean_dec_ref(v_source_411_);
lean_dec(v_i_410_);
return v_target_412_;
}
else
{
lean_object* v_es_415_; lean_object* v___x_416_; lean_object* v_source_417_; lean_object* v_target_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v_es_415_ = lean_array_fget(v_source_411_, v_i_410_);
v___x_416_ = lean_box(0);
v_source_417_ = lean_array_fset(v_source_411_, v_i_410_, v___x_416_);
v_target_418_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(v_target_412_, v_es_415_);
v___x_419_ = lean_unsigned_to_nat(1u);
v___x_420_ = lean_nat_add(v_i_410_, v___x_419_);
lean_dec(v_i_410_);
v_i_410_ = v___x_420_;
v_source_411_ = v_source_417_;
v_target_412_ = v_target_418_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(lean_object* v_data_422_){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v_nbuckets_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_423_ = lean_array_get_size(v_data_422_);
v___x_424_ = lean_unsigned_to_nat(2u);
v_nbuckets_425_ = lean_nat_mul(v___x_423_, v___x_424_);
v___x_426_ = lean_unsigned_to_nat(0u);
v___x_427_ = lean_box(0);
v___x_428_ = lean_mk_array(v_nbuckets_425_, v___x_427_);
v___x_429_ = lean_array_propagate_mark(v_data_422_, v___x_428_);
v___x_430_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(v___x_426_, v_data_422_, v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object* v_a_431_, lean_object* v_x_432_){
_start:
{
if (lean_obj_tag(v_x_432_) == 0)
{
uint8_t v___x_433_; 
v___x_433_ = 0;
return v___x_433_;
}
else
{
lean_object* v_key_434_; lean_object* v_tail_435_; uint8_t v___x_436_; 
v_key_434_ = lean_ctor_get(v_x_432_, 0);
v_tail_435_ = lean_ctor_get(v_x_432_, 2);
v___x_436_ = lean_expr_eqv(v_key_434_, v_a_431_);
if (v___x_436_ == 0)
{
v_x_432_ = v_tail_435_;
goto _start;
}
else
{
return v___x_436_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object* v_a_438_, lean_object* v_x_439_){
_start:
{
uint8_t v_res_440_; lean_object* v_r_441_; 
v_res_440_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(v_a_438_, v_x_439_);
lean_dec(v_x_439_);
lean_dec_ref(v_a_438_);
v_r_441_ = lean_box(v_res_440_);
return v_r_441_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(lean_object* v_a_442_, lean_object* v_b_443_, lean_object* v_x_444_){
_start:
{
if (lean_obj_tag(v_x_444_) == 0)
{
lean_dec(v_b_443_);
lean_dec_ref(v_a_442_);
return v_x_444_;
}
else
{
lean_object* v_key_445_; lean_object* v_value_446_; lean_object* v_tail_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_459_; 
v_key_445_ = lean_ctor_get(v_x_444_, 0);
v_value_446_ = lean_ctor_get(v_x_444_, 1);
v_tail_447_ = lean_ctor_get(v_x_444_, 2);
v_isSharedCheck_459_ = !lean_is_exclusive(v_x_444_);
if (v_isSharedCheck_459_ == 0)
{
v___x_449_ = v_x_444_;
v_isShared_450_ = v_isSharedCheck_459_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_tail_447_);
lean_inc(v_value_446_);
lean_inc(v_key_445_);
lean_dec(v_x_444_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_459_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
uint8_t v___x_451_; 
v___x_451_ = lean_expr_eqv(v_key_445_, v_a_442_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; lean_object* v___x_454_; 
v___x_452_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(v_a_442_, v_b_443_, v_tail_447_);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 2, v___x_452_);
v___x_454_ = v___x_449_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_key_445_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v_value_446_);
lean_ctor_set(v_reuseFailAlloc_455_, 2, v___x_452_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
else
{
lean_object* v___x_457_; 
lean_dec(v_value_446_);
lean_dec(v_key_445_);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 1, v_b_443_);
lean_ctor_set(v___x_449_, 0, v_a_442_);
v___x_457_ = v___x_449_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_a_442_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v_b_443_);
lean_ctor_set(v_reuseFailAlloc_458_, 2, v_tail_447_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(lean_object* v_m_460_, lean_object* v_a_461_, lean_object* v_b_462_){
_start:
{
lean_object* v_size_463_; lean_object* v_buckets_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_507_; 
v_size_463_ = lean_ctor_get(v_m_460_, 0);
v_buckets_464_ = lean_ctor_get(v_m_460_, 1);
v_isSharedCheck_507_ = !lean_is_exclusive(v_m_460_);
if (v_isSharedCheck_507_ == 0)
{
v___x_466_ = v_m_460_;
v_isShared_467_ = v_isSharedCheck_507_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_buckets_464_);
lean_inc(v_size_463_);
lean_dec(v_m_460_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_507_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_468_; uint64_t v___x_469_; uint64_t v___x_470_; uint64_t v___x_471_; uint64_t v_fold_472_; uint64_t v___x_473_; uint64_t v___x_474_; uint64_t v___x_475_; size_t v___x_476_; size_t v___x_477_; size_t v___x_478_; size_t v___x_479_; size_t v___x_480_; lean_object* v_bkt_481_; uint8_t v___x_482_; 
v___x_468_ = lean_array_get_size(v_buckets_464_);
v___x_469_ = l_Lean_Expr_hash(v_a_461_);
v___x_470_ = 32ULL;
v___x_471_ = lean_uint64_shift_right(v___x_469_, v___x_470_);
v_fold_472_ = lean_uint64_xor(v___x_469_, v___x_471_);
v___x_473_ = 16ULL;
v___x_474_ = lean_uint64_shift_right(v_fold_472_, v___x_473_);
v___x_475_ = lean_uint64_xor(v_fold_472_, v___x_474_);
v___x_476_ = lean_uint64_to_usize(v___x_475_);
v___x_477_ = lean_usize_of_nat(v___x_468_);
v___x_478_ = ((size_t)1ULL);
v___x_479_ = lean_usize_sub(v___x_477_, v___x_478_);
v___x_480_ = lean_usize_land(v___x_476_, v___x_479_);
v_bkt_481_ = lean_array_uget_borrowed(v_buckets_464_, v___x_480_);
v___x_482_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(v_a_461_, v_bkt_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; lean_object* v_size_x27_484_; lean_object* v___x_485_; lean_object* v_buckets_x27_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; uint8_t v___x_492_; 
v___x_483_ = lean_unsigned_to_nat(1u);
v_size_x27_484_ = lean_nat_add(v_size_463_, v___x_483_);
lean_dec(v_size_463_);
lean_inc(v_bkt_481_);
v___x_485_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_485_, 0, v_a_461_);
lean_ctor_set(v___x_485_, 1, v_b_462_);
lean_ctor_set(v___x_485_, 2, v_bkt_481_);
v_buckets_x27_486_ = lean_array_uset(v_buckets_464_, v___x_480_, v___x_485_);
v___x_487_ = lean_unsigned_to_nat(4u);
v___x_488_ = lean_nat_mul(v_size_x27_484_, v___x_487_);
v___x_489_ = lean_unsigned_to_nat(3u);
v___x_490_ = lean_nat_div(v___x_488_, v___x_489_);
lean_dec(v___x_488_);
v___x_491_ = lean_array_get_size(v_buckets_x27_486_);
v___x_492_ = lean_nat_dec_le(v___x_490_, v___x_491_);
lean_dec(v___x_490_);
if (v___x_492_ == 0)
{
lean_object* v_val_493_; lean_object* v___x_495_; 
v_val_493_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(v_buckets_x27_486_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 1, v_val_493_);
lean_ctor_set(v___x_466_, 0, v_size_x27_484_);
v___x_495_ = v___x_466_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_size_x27_484_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_val_493_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
else
{
lean_object* v___x_498_; 
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 1, v_buckets_x27_486_);
lean_ctor_set(v___x_466_, 0, v_size_x27_484_);
v___x_498_ = v___x_466_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_size_x27_484_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_buckets_x27_486_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
else
{
lean_object* v___x_500_; lean_object* v_buckets_x27_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_505_; 
lean_inc(v_bkt_481_);
v___x_500_ = lean_box(0);
v_buckets_x27_501_ = lean_array_uset(v_buckets_464_, v___x_480_, v___x_500_);
v___x_502_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(v_a_461_, v_b_462_, v_bkt_481_);
v___x_503_ = lean_array_uset(v_buckets_x27_501_, v___x_480_, v___x_502_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 1, v___x_503_);
v___x_505_ = v___x_466_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_size_463_);
lean_ctor_set(v_reuseFailAlloc_506_, 1, v___x_503_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(lean_object* v_msg_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v_ref_514_; lean_object* v___x_515_; lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_524_; 
v_ref_514_ = lean_ctor_get(v___y_511_, 2);
v___x_515_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_);
v_a_516_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_524_ == 0)
{
v___x_518_ = v___x_515_;
v_isShared_519_ = v_isSharedCheck_524_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_515_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_524_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_520_; lean_object* v___x_522_; 
lean_inc(v_ref_514_);
v___x_520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_520_, 0, v_ref_514_);
lean_ctor_set(v___x_520_, 1, v_a_516_);
if (v_isShared_519_ == 0)
{
lean_ctor_set_tag(v___x_518_, 1);
lean_ctor_set(v___x_518_, 0, v___x_520_);
v___x_522_ = v___x_518_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v___x_520_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg___boxed(lean_object* v_msg_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v_msg_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
return v_res_531_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0));
v___x_534_ = l_Lean_stringToMessageData(v___x_533_);
return v___x_534_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2));
v___x_537_ = l_Lean_stringToMessageData(v___x_536_);
return v___x_537_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5(void){
_start:
{
lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_539_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4));
v___x_540_ = l_Lean_stringToMessageData(v___x_539_);
return v___x_540_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7(void){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6));
v___x_543_ = l_Lean_stringToMessageData(v___x_542_);
return v___x_543_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8));
v___x_546_ = l_Lean_stringToMessageData(v___x_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(lean_object* v_e_547_, lean_object* v_a_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
lean_object* v___x_632_; 
lean_inc_ref(v_a_548_);
v___x_632_ = l_Lean_Meta_isTypeCorrect(v_a_548_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_object* v_a_633_; uint8_t v___x_634_; 
v_a_633_ = lean_ctor_get(v___x_632_, 0);
lean_inc(v_a_633_);
lean_dec_ref_known(v___x_632_, 1);
v___x_634_ = lean_unbox(v_a_633_);
lean_dec(v_a_633_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_635_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9);
lean_inc_ref(v_e_547_);
v___x_636_ = l_Lean_indentExpr(v_e_547_);
v___x_637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_635_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3);
v___x_639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_637_);
lean_ctor_set(v___x_639_, 1, v___x_638_);
lean_inc_ref(v_a_548_);
v___x_640_ = l_Lean_indentExpr(v_a_548_);
v___x_641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_639_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
v___x_642_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v___x_641_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_dec_ref_known(v___x_642_, 1);
goto v___jp_558_;
}
else
{
lean_dec_ref(v_a_548_);
lean_dec_ref(v_e_547_);
return v___x_642_;
}
}
else
{
goto v___jp_558_;
}
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
lean_dec_ref(v_a_548_);
lean_dec_ref(v_e_547_);
v_a_643_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_632_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_632_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
v___jp_558_:
{
lean_object* v___x_559_; 
lean_inc(v___y_556_);
lean_inc_ref(v___y_555_);
lean_inc(v___y_554_);
lean_inc_ref(v___y_553_);
lean_inc_ref(v_e_547_);
v___x_559_ = lean_infer_type(v_e_547_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v_a_560_; lean_object* v___x_561_; 
v_a_560_ = lean_ctor_get(v___x_559_, 0);
lean_inc(v_a_560_);
lean_dec_ref_known(v___x_559_, 1);
lean_inc(v___y_556_);
lean_inc_ref(v___y_555_);
lean_inc(v___y_554_);
lean_inc_ref(v___y_553_);
lean_inc_ref(v_a_548_);
v___x_561_ = lean_infer_type(v_a_548_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v_a_562_; lean_object* v___x_563_; 
v_a_562_ = lean_ctor_get(v___x_561_, 0);
lean_inc_n(v_a_562_, 2);
lean_dec_ref_known(v___x_561_, 1);
lean_inc(v_a_560_);
v___x_563_ = l_Lean_Meta_isExprDefEq(v_a_560_, v_a_562_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_object* v_a_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_607_; 
v_a_564_ = lean_ctor_get(v___x_563_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_607_ == 0)
{
v___x_566_ = v___x_563_;
v_isShared_567_ = v_isSharedCheck_607_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_a_564_);
lean_dec(v___x_563_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_607_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
uint8_t v___x_568_; 
v___x_568_ = lean_unbox(v_a_564_);
lean_dec(v_a_564_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; 
lean_del_object(v___x_566_);
v___x_569_ = l_Lean_Meta_addPPExplicitToExposeDiff(v_a_560_, v_a_562_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
if (lean_obj_tag(v___x_569_) == 0)
{
lean_object* v_a_570_; lean_object* v_fst_571_; lean_object* v_snd_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_594_; 
v_a_570_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_a_570_);
lean_dec_ref_known(v___x_569_, 1);
v_fst_571_ = lean_ctor_get(v_a_570_, 0);
v_snd_572_ = lean_ctor_get(v_a_570_, 1);
v_isSharedCheck_594_ = !lean_is_exclusive(v_a_570_);
if (v_isSharedCheck_594_ == 0)
{
v___x_574_ = v_a_570_;
v_isShared_575_ = v_isSharedCheck_594_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_snd_572_);
lean_inc(v_fst_571_);
lean_dec(v_a_570_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_594_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_579_; 
v___x_576_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1);
v___x_577_ = l_Lean_indentExpr(v_e_547_);
if (v_isShared_575_ == 0)
{
lean_ctor_set_tag(v___x_574_, 7);
lean_ctor_set(v___x_574_, 1, v___x_577_);
lean_ctor_set(v___x_574_, 0, v___x_576_);
v___x_579_ = v___x_574_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v___x_576_);
lean_ctor_set(v_reuseFailAlloc_593_, 1, v___x_577_);
v___x_579_ = v_reuseFailAlloc_593_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_580_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3);
v___x_581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_579_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = l_Lean_indentExpr(v_a_548_);
v___x_583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_581_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5);
v___x_585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_583_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
v___x_586_ = l_Lean_indentExpr(v_fst_571_);
v___x_587_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_587_, 0, v___x_585_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
v___x_588_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7);
v___x_589_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_587_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
v___x_590_ = l_Lean_indentExpr(v_snd_572_);
v___x_591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_591_, 0, v___x_589_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
v___x_592_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v___x_591_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
return v___x_592_;
}
}
}
else
{
lean_object* v_a_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_602_; 
lean_dec_ref(v_a_548_);
lean_dec_ref(v_e_547_);
v_a_595_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_602_ == 0)
{
v___x_597_ = v___x_569_;
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_a_595_);
lean_dec(v___x_569_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_600_; 
if (v_isShared_598_ == 0)
{
v___x_600_ = v___x_597_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_a_595_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
}
else
{
lean_object* v___x_603_; lean_object* v___x_605_; 
lean_dec(v_a_562_);
lean_dec(v_a_560_);
lean_dec_ref(v_a_548_);
lean_dec_ref(v_e_547_);
v___x_603_ = lean_box(0);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 0, v___x_603_);
v___x_605_ = v___x_566_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_603_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
}
else
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_615_; 
lean_dec(v_a_562_);
lean_dec(v_a_560_);
lean_dec_ref(v_a_548_);
lean_dec_ref(v_e_547_);
v_a_608_ = lean_ctor_get(v___x_563_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_615_ == 0)
{
v___x_610_ = v___x_563_;
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_563_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_613_; 
if (v_isShared_611_ == 0)
{
v___x_613_ = v___x_610_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_a_608_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
}
else
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_623_; 
lean_dec(v_a_560_);
lean_dec_ref(v_a_548_);
lean_dec_ref(v_e_547_);
v_a_616_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_623_ == 0)
{
v___x_618_ = v___x_561_;
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_561_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_a_616_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
else
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_631_; 
lean_dec_ref(v_a_548_);
lean_dec_ref(v_e_547_);
v_a_624_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_631_ == 0)
{
v___x_626_ = v___x_559_;
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_559_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_629_; 
if (v_isShared_627_ == 0)
{
v___x_629_ = v___x_626_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_a_624_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed(lean_object* v_e_651_, lean_object* v_a_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(v_e_651_, v_a_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
lean_dec(v___y_654_);
lean_dec(v___y_653_);
return v_res_662_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0(void){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_663_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1(void){
_start:
{
lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_664_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0);
v___x_665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
return v___x_665_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2(void){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_666_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1);
v___x_667_ = lean_unsigned_to_nat(0u);
v___x_668_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
lean_ctor_set(v___x_668_, 2, v___x_667_);
lean_ctor_set(v___x_668_, 3, v___x_667_);
lean_ctor_set(v___x_668_, 4, v___x_666_);
lean_ctor_set(v___x_668_, 5, v___x_666_);
lean_ctor_set(v___x_668_, 6, v___x_666_);
lean_ctor_set(v___x_668_, 7, v___x_666_);
lean_ctor_set(v___x_668_, 8, v___x_666_);
lean_ctor_set(v___x_668_, 9, v___x_666_);
lean_ctor_set(v___x_668_, 10, v___x_666_);
return v___x_668_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3(void){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_669_ = lean_unsigned_to_nat(32u);
v___x_670_ = lean_mk_empty_array_with_capacity(v___x_669_);
v___x_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
return v___x_671_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4(void){
_start:
{
size_t v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_672_ = ((size_t)5ULL);
v___x_673_ = lean_unsigned_to_nat(0u);
v___x_674_ = lean_unsigned_to_nat(32u);
v___x_675_ = lean_mk_empty_array_with_capacity(v___x_674_);
v___x_676_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3);
v___x_677_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_677_, 0, v___x_676_);
lean_ctor_set(v___x_677_, 1, v___x_675_);
lean_ctor_set(v___x_677_, 2, v___x_673_);
lean_ctor_set(v___x_677_, 3, v___x_673_);
lean_ctor_set_usize(v___x_677_, 4, v___x_672_);
return v___x_677_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5(void){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_678_ = lean_box(1);
v___x_679_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4);
v___x_680_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1);
v___x_681_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
lean_ctor_set(v___x_681_, 1, v___x_679_);
lean_ctor_set(v___x_681_, 2, v___x_678_);
return v___x_681_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7(void){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6));
v___x_684_ = l_Lean_stringToMessageData(v___x_683_);
return v___x_684_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8));
v___x_687_ = l_Lean_stringToMessageData(v___x_686_);
return v___x_687_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11(void){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_689_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10));
v___x_690_ = l_Lean_stringToMessageData(v___x_689_);
return v___x_690_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_692_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12));
v___x_693_ = l_Lean_stringToMessageData(v___x_692_);
return v___x_693_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15(void){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14));
v___x_696_ = l_Lean_stringToMessageData(v___x_695_);
return v___x_696_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17(void){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16));
v___x_699_ = l_Lean_stringToMessageData(v___x_698_);
return v___x_699_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_701_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18));
v___x_702_ = l_Lean_stringToMessageData(v___x_701_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(lean_object* v_msg_703_, lean_object* v_declHint_704_, lean_object* v___y_705_){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v_env_709_; uint8_t v___x_710_; 
v___x_707_ = lean_box(0);
v___x_708_ = lean_st_ref_get(v___y_705_);
v_env_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc_ref(v_env_709_);
lean_dec(v___x_708_);
v___x_710_ = l_Lean_Name_isAnonymous(v_declHint_704_);
if (v___x_710_ == 0)
{
uint8_t v_isExporting_711_; 
v_isExporting_711_ = lean_ctor_get_uint8(v_env_709_, sizeof(void*)*13);
if (v_isExporting_711_ == 0)
{
lean_object* v___x_712_; 
lean_dec_ref(v_env_709_);
lean_dec(v_declHint_704_);
v___x_712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_712_, 0, v_msg_703_);
return v___x_712_;
}
else
{
lean_object* v___x_713_; uint8_t v___x_714_; 
lean_inc_ref(v_env_709_);
v___x_713_ = l_Lean_Environment_setExporting(v_env_709_, v___x_710_);
lean_inc(v_declHint_704_);
lean_inc_ref(v___x_713_);
v___x_714_ = l_Lean_Environment_contains(v___x_713_, v_declHint_704_, v_isExporting_711_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; 
lean_dec_ref(v___x_713_);
lean_dec_ref(v_env_709_);
lean_dec(v_declHint_704_);
v___x_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_715_, 0, v_msg_703_);
return v___x_715_;
}
else
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v_c_721_; lean_object* v___x_722_; 
v___x_716_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2);
v___x_717_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5);
v___x_718_ = l_Lean_Options_empty;
lean_inc_ref(v___x_713_);
v___x_719_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_719_, 0, v___x_713_);
lean_ctor_set(v___x_719_, 1, v___x_716_);
lean_ctor_set(v___x_719_, 2, v___x_717_);
lean_ctor_set(v___x_719_, 3, v___x_718_);
lean_inc(v_declHint_704_);
v___x_720_ = l_Lean_MessageData_ofConstName(v_declHint_704_, v___x_710_);
v_c_721_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_721_, 0, v___x_719_);
lean_ctor_set(v_c_721_, 1, v___x_720_);
v___x_722_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_713_, v_declHint_704_);
lean_dec_ref(v___x_713_);
if (lean_obj_tag(v___x_722_) == 0)
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
lean_dec_ref(v_env_709_);
lean_dec(v_declHint_704_);
v___x_723_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7);
v___x_724_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_724_, 0, v___x_723_);
lean_ctor_set(v___x_724_, 1, v_c_721_);
v___x_725_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9);
v___x_726_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_726_, 0, v___x_724_);
lean_ctor_set(v___x_726_, 1, v___x_725_);
v___x_727_ = l_Lean_MessageData_note(v___x_726_);
v___x_728_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_728_, 0, v_msg_703_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
v___x_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_729_, 0, v___x_728_);
return v___x_729_;
}
else
{
lean_object* v_val_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_764_; 
v_val_730_ = lean_ctor_get(v___x_722_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_764_ == 0)
{
v___x_732_ = v___x_722_;
v_isShared_733_ = v_isSharedCheck_764_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_val_730_);
lean_dec(v___x_722_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_764_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_734_; lean_object* v_moduleNames_735_; lean_object* v_mod_736_; uint8_t v___x_737_; 
v___x_734_ = l_Lean_Environment_header(v_env_709_);
lean_dec_ref(v_env_709_);
v_moduleNames_735_ = lean_ctor_get(v___x_734_, 4);
lean_inc_ref(v_moduleNames_735_);
lean_dec_ref(v___x_734_);
v_mod_736_ = lean_array_get(v___x_707_, v_moduleNames_735_, v_val_730_);
lean_dec(v_val_730_);
lean_dec_ref(v_moduleNames_735_);
v___x_737_ = l_Lean_isPrivateName(v_declHint_704_);
lean_dec(v_declHint_704_);
if (v___x_737_ == 0)
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_749_; 
v___x_738_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11);
v___x_739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_738_);
lean_ctor_set(v___x_739_, 1, v_c_721_);
v___x_740_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13);
v___x_741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_741_, 0, v___x_739_);
lean_ctor_set(v___x_741_, 1, v___x_740_);
v___x_742_ = l_Lean_MessageData_ofName(v_mod_736_);
v___x_743_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_741_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
v___x_744_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15);
v___x_745_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_745_, 0, v___x_743_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = l_Lean_MessageData_note(v___x_745_);
v___x_747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_747_, 0, v_msg_703_);
lean_ctor_set(v___x_747_, 1, v___x_746_);
if (v_isShared_733_ == 0)
{
lean_ctor_set_tag(v___x_732_, 0);
lean_ctor_set(v___x_732_, 0, v___x_747_);
v___x_749_ = v___x_732_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_747_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
else
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_762_; 
v___x_751_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7);
v___x_752_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
lean_ctor_set(v___x_752_, 1, v_c_721_);
v___x_753_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17);
v___x_754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_752_);
lean_ctor_set(v___x_754_, 1, v___x_753_);
v___x_755_ = l_Lean_MessageData_ofName(v_mod_736_);
v___x_756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_756_, 0, v___x_754_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
v___x_757_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19);
v___x_758_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_758_, 0, v___x_756_);
lean_ctor_set(v___x_758_, 1, v___x_757_);
v___x_759_ = l_Lean_MessageData_note(v___x_758_);
v___x_760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_760_, 0, v_msg_703_);
lean_ctor_set(v___x_760_, 1, v___x_759_);
if (v_isShared_733_ == 0)
{
lean_ctor_set_tag(v___x_732_, 0);
lean_ctor_set(v___x_732_, 0, v___x_760_);
v___x_762_ = v___x_732_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_760_);
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
}
}
else
{
lean_object* v___x_765_; 
lean_dec_ref(v_env_709_);
lean_dec(v_declHint_704_);
v___x_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_765_, 0, v_msg_703_);
return v___x_765_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___boxed(lean_object* v_msg_766_, lean_object* v_declHint_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(v_msg_766_, v_declHint_767_, v___y_768_);
lean_dec(v___y_768_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(lean_object* v_msg_771_, lean_object* v_declHint_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v___x_782_; lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_792_; 
v___x_782_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(v_msg_771_, v_declHint_772_, v___y_780_);
v_a_783_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_792_ == 0)
{
v___x_785_ = v___x_782_;
v_isShared_786_ = v_isSharedCheck_792_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_782_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_792_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_787_ = l_Lean_unknownIdentifierMessageTag;
v___x_788_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_787_);
lean_ctor_set(v___x_788_, 1, v_a_783_);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 0, v___x_788_);
v___x_790_ = v___x_785_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v___x_788_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30___boxed(lean_object* v_msg_793_, lean_object* v_declHint_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(v_msg_793_, v_declHint_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec(v___y_800_);
lean_dec_ref(v___y_799_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
lean_dec(v___y_796_);
lean_dec(v___y_795_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(lean_object* v_ref_805_, lean_object* v_msg_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v_toCold_816_; lean_object* v_currRecDepth_817_; lean_object* v_ref_818_; uint16_t v_optionFlags_819_; uint8_t v_suppressElabErrors_820_; uint8_t v_checkDeprecated_821_; uint8_t v_isRecordingDeps_822_; lean_object* v_ref_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v_toCold_816_ = lean_ctor_get(v___y_813_, 0);
v_currRecDepth_817_ = lean_ctor_get(v___y_813_, 1);
v_ref_818_ = lean_ctor_get(v___y_813_, 2);
v_optionFlags_819_ = lean_ctor_get_uint16(v___y_813_, sizeof(void*)*3);
v_suppressElabErrors_820_ = lean_ctor_get_uint8(v___y_813_, sizeof(void*)*3 + 2);
v_checkDeprecated_821_ = lean_ctor_get_uint8(v___y_813_, sizeof(void*)*3 + 3);
v_isRecordingDeps_822_ = lean_ctor_get_uint8(v___y_813_, sizeof(void*)*3 + 4);
v_ref_823_ = l_Lean_replaceRef(v_ref_805_, v_ref_818_);
lean_inc(v_currRecDepth_817_);
lean_inc_ref(v_toCold_816_);
v___x_824_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_824_, 0, v_toCold_816_);
lean_ctor_set(v___x_824_, 1, v_currRecDepth_817_);
lean_ctor_set(v___x_824_, 2, v_ref_823_);
lean_ctor_set_uint16(v___x_824_, sizeof(void*)*3, v_optionFlags_819_);
lean_ctor_set_uint8(v___x_824_, sizeof(void*)*3 + 2, v_suppressElabErrors_820_);
lean_ctor_set_uint8(v___x_824_, sizeof(void*)*3 + 3, v_checkDeprecated_821_);
lean_ctor_set_uint8(v___x_824_, sizeof(void*)*3 + 4, v_isRecordingDeps_822_);
v___x_825_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v_msg_806_, v___y_811_, v___y_812_, v___x_824_, v___y_814_);
lean_dec_ref_known(v___x_824_, 3);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg___boxed(lean_object* v_ref_826_, lean_object* v_msg_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(v_ref_826_, v_msg_827_, v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec(v___y_831_);
lean_dec_ref(v___y_830_);
lean_dec(v___y_829_);
lean_dec(v___y_828_);
lean_dec(v_ref_826_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(lean_object* v_ref_838_, lean_object* v_msg_839_, lean_object* v_declHint_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
lean_object* v___x_850_; lean_object* v_a_851_; lean_object* v___x_852_; 
v___x_850_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(v_msg_839_, v_declHint_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_);
v_a_851_ = lean_ctor_get(v___x_850_, 0);
lean_inc(v_a_851_);
lean_dec_ref(v___x_850_);
v___x_852_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(v_ref_838_, v_a_851_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg___boxed(lean_object* v_ref_853_, lean_object* v_msg_854_, lean_object* v_declHint_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(v_ref_853_, v_msg_854_, v_declHint_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_);
lean_dec(v___y_863_);
lean_dec_ref(v___y_862_);
lean_dec(v___y_861_);
lean_dec_ref(v___y_860_);
lean_dec(v___y_859_);
lean_dec_ref(v___y_858_);
lean_dec(v___y_857_);
lean_dec(v___y_856_);
lean_dec(v_ref_853_);
return v_res_865_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1(void){
_start:
{
lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_867_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0));
v___x_868_ = l_Lean_stringToMessageData(v___x_867_);
return v___x_868_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3(void){
_start:
{
lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_870_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2));
v___x_871_ = l_Lean_stringToMessageData(v___x_870_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(lean_object* v_ref_872_, lean_object* v_constName_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_){
_start:
{
lean_object* v___x_883_; uint8_t v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_883_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1);
v___x_884_ = 0;
lean_inc(v_constName_873_);
v___x_885_ = l_Lean_MessageData_ofConstName(v_constName_873_, v___x_884_);
v___x_886_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_886_, 0, v___x_883_);
lean_ctor_set(v___x_886_, 1, v___x_885_);
v___x_887_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3);
v___x_888_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_888_, 0, v___x_886_);
lean_ctor_set(v___x_888_, 1, v___x_887_);
v___x_889_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(v_ref_872_, v___x_888_, v_constName_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___boxed(lean_object* v_ref_890_, lean_object* v_constName_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(v_ref_890_, v_constName_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_, v___y_899_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
lean_dec(v___y_897_);
lean_dec_ref(v___y_896_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec(v___y_892_);
lean_dec(v_ref_890_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(lean_object* v_constName_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_){
_start:
{
lean_object* v_ref_912_; lean_object* v___x_913_; 
v_ref_912_ = lean_ctor_get(v___y_909_, 2);
v___x_913_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(v_ref_912_, v_constName_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg___boxed(lean_object* v_constName_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(v_constName_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_);
lean_dec(v___y_922_);
lean_dec_ref(v___y_921_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec(v___y_916_);
lean_dec(v___y_915_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(lean_object* v_constName_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
lean_object* v___x_935_; lean_object* v_env_936_; uint8_t v___x_937_; lean_object* v___x_938_; 
v___x_935_ = lean_st_ref_get(v___y_933_);
v_env_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc_ref(v_env_936_);
lean_dec(v___x_935_);
v___x_937_ = 0;
lean_inc(v_constName_925_);
v___x_938_ = l_Lean_Environment_find_x3f(v_env_936_, v_constName_925_, v___x_937_);
if (lean_obj_tag(v___x_938_) == 0)
{
lean_object* v___x_939_; 
v___x_939_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(v_constName_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
return v___x_939_;
}
else
{
lean_object* v_val_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
lean_dec(v_constName_925_);
v_val_940_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_938_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_val_940_);
lean_dec(v___x_938_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
lean_ctor_set_tag(v___x_942_, 0);
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_val_940_);
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
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18___boxed(lean_object* v_constName_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(v_constName_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
lean_dec(v___y_950_);
lean_dec(v___y_949_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(lean_object* v_declName_959_, lean_object* v___y_960_){
_start:
{
lean_object* v___x_962_; lean_object* v_env_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_962_ = lean_st_ref_get(v___y_960_);
v_env_963_ = lean_ctor_get(v___x_962_, 0);
lean_inc_ref(v_env_963_);
lean_dec(v___x_962_);
v___x_964_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_963_, v_declName_959_);
v___x_965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_965_, 0, v___x_964_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg___boxed(lean_object* v_declName_966_, lean_object* v___y_967_, lean_object* v___y_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(v_declName_966_, v___y_967_);
lean_dec(v___y_967_);
return v_res_969_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0(void){
_start:
{
lean_object* v___x_970_; 
v___x_970_ = l_instMonadEIO___redArg();
return v___x_970_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(lean_object* v_msg_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v_toApplicative_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_1082_; 
v___x_987_ = lean_obj_once(&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0, &l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0_once, _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0);
v___x_988_ = l_StateRefT_x27_instMonad___redArg(v___x_987_);
v_toApplicative_989_ = lean_ctor_get(v___x_988_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_1082_ == 0)
{
lean_object* v_unused_1083_; 
v_unused_1083_ = lean_ctor_get(v___x_988_, 1);
lean_dec(v_unused_1083_);
v___x_991_ = v___x_988_;
v_isShared_992_ = v_isSharedCheck_1082_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_toApplicative_989_);
lean_dec(v___x_988_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_1082_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v_toFunctor_993_; lean_object* v_toSeq_994_; lean_object* v_toSeqLeft_995_; lean_object* v_toSeqRight_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1080_; 
v_toFunctor_993_ = lean_ctor_get(v_toApplicative_989_, 0);
v_toSeq_994_ = lean_ctor_get(v_toApplicative_989_, 2);
v_toSeqLeft_995_ = lean_ctor_get(v_toApplicative_989_, 3);
v_toSeqRight_996_ = lean_ctor_get(v_toApplicative_989_, 4);
v_isSharedCheck_1080_ = !lean_is_exclusive(v_toApplicative_989_);
if (v_isSharedCheck_1080_ == 0)
{
lean_object* v_unused_1081_; 
v_unused_1081_ = lean_ctor_get(v_toApplicative_989_, 1);
lean_dec(v_unused_1081_);
v___x_998_ = v_toApplicative_989_;
v_isShared_999_ = v_isSharedCheck_1080_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_toSeqRight_996_);
lean_inc(v_toSeqLeft_995_);
lean_inc(v_toSeq_994_);
lean_inc(v_toFunctor_993_);
lean_dec(v_toApplicative_989_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1080_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___f_1000_; lean_object* v___f_1001_; lean_object* v___f_1002_; lean_object* v___f_1003_; lean_object* v___x_1004_; lean_object* v___f_1005_; lean_object* v___f_1006_; lean_object* v___f_1007_; lean_object* v___x_1009_; 
v___f_1000_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1));
v___f_1001_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2));
lean_inc_ref(v_toFunctor_993_);
v___f_1002_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1002_, 0, v_toFunctor_993_);
v___f_1003_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1003_, 0, v_toFunctor_993_);
v___x_1004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___f_1002_);
lean_ctor_set(v___x_1004_, 1, v___f_1003_);
v___f_1005_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1005_, 0, v_toSeqRight_996_);
v___f_1006_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1006_, 0, v_toSeqLeft_995_);
v___f_1007_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1007_, 0, v_toSeq_994_);
if (v_isShared_999_ == 0)
{
lean_ctor_set(v___x_998_, 4, v___f_1005_);
lean_ctor_set(v___x_998_, 3, v___f_1006_);
lean_ctor_set(v___x_998_, 2, v___f_1007_);
lean_ctor_set(v___x_998_, 1, v___f_1000_);
lean_ctor_set(v___x_998_, 0, v___x_1004_);
v___x_1009_ = v___x_998_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v___x_1004_);
lean_ctor_set(v_reuseFailAlloc_1079_, 1, v___f_1000_);
lean_ctor_set(v_reuseFailAlloc_1079_, 2, v___f_1007_);
lean_ctor_set(v_reuseFailAlloc_1079_, 3, v___f_1006_);
lean_ctor_set(v_reuseFailAlloc_1079_, 4, v___f_1005_);
v___x_1009_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
lean_object* v___x_1011_; 
if (v_isShared_992_ == 0)
{
lean_ctor_set(v___x_991_, 1, v___f_1001_);
lean_ctor_set(v___x_991_, 0, v___x_1009_);
v___x_1011_ = v___x_991_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1009_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v___f_1001_);
v___x_1011_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
lean_object* v___x_1012_; lean_object* v_toApplicative_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1076_; 
v___x_1012_ = l_StateRefT_x27_instMonad___redArg(v___x_1011_);
v_toApplicative_1013_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1076_ == 0)
{
lean_object* v_unused_1077_; 
v_unused_1077_ = lean_ctor_get(v___x_1012_, 1);
lean_dec(v_unused_1077_);
v___x_1015_ = v___x_1012_;
v_isShared_1016_ = v_isSharedCheck_1076_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_toApplicative_1013_);
lean_dec(v___x_1012_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1076_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v_toFunctor_1017_; lean_object* v_toSeq_1018_; lean_object* v_toSeqLeft_1019_; lean_object* v_toSeqRight_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1074_; 
v_toFunctor_1017_ = lean_ctor_get(v_toApplicative_1013_, 0);
v_toSeq_1018_ = lean_ctor_get(v_toApplicative_1013_, 2);
v_toSeqLeft_1019_ = lean_ctor_get(v_toApplicative_1013_, 3);
v_toSeqRight_1020_ = lean_ctor_get(v_toApplicative_1013_, 4);
v_isSharedCheck_1074_ = !lean_is_exclusive(v_toApplicative_1013_);
if (v_isSharedCheck_1074_ == 0)
{
lean_object* v_unused_1075_; 
v_unused_1075_ = lean_ctor_get(v_toApplicative_1013_, 1);
lean_dec(v_unused_1075_);
v___x_1022_ = v_toApplicative_1013_;
v_isShared_1023_ = v_isSharedCheck_1074_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_toSeqRight_1020_);
lean_inc(v_toSeqLeft_1019_);
lean_inc(v_toSeq_1018_);
lean_inc(v_toFunctor_1017_);
lean_dec(v_toApplicative_1013_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1074_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___f_1024_; lean_object* v___f_1025_; lean_object* v___f_1026_; lean_object* v___f_1027_; lean_object* v___x_1028_; lean_object* v___f_1029_; lean_object* v___f_1030_; lean_object* v___f_1031_; lean_object* v___x_1033_; 
v___f_1024_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3));
v___f_1025_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4));
lean_inc_ref(v_toFunctor_1017_);
v___f_1026_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1026_, 0, v_toFunctor_1017_);
v___f_1027_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1027_, 0, v_toFunctor_1017_);
v___x_1028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___f_1026_);
lean_ctor_set(v___x_1028_, 1, v___f_1027_);
v___f_1029_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1029_, 0, v_toSeqRight_1020_);
v___f_1030_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1030_, 0, v_toSeqLeft_1019_);
v___f_1031_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1031_, 0, v_toSeq_1018_);
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 4, v___f_1029_);
lean_ctor_set(v___x_1022_, 3, v___f_1030_);
lean_ctor_set(v___x_1022_, 2, v___f_1031_);
lean_ctor_set(v___x_1022_, 1, v___f_1024_);
lean_ctor_set(v___x_1022_, 0, v___x_1028_);
v___x_1033_ = v___x_1022_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_1028_);
lean_ctor_set(v_reuseFailAlloc_1073_, 1, v___f_1024_);
lean_ctor_set(v_reuseFailAlloc_1073_, 2, v___f_1031_);
lean_ctor_set(v_reuseFailAlloc_1073_, 3, v___f_1030_);
lean_ctor_set(v_reuseFailAlloc_1073_, 4, v___f_1029_);
v___x_1033_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
lean_object* v___x_1035_; 
if (v_isShared_1016_ == 0)
{
lean_ctor_set(v___x_1015_, 1, v___f_1025_);
lean_ctor_set(v___x_1015_, 0, v___x_1033_);
v___x_1035_ = v___x_1015_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v___x_1033_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v___f_1025_);
v___x_1035_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
lean_object* v___x_1036_; lean_object* v_toApplicative_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1070_; 
v___x_1036_ = l_StateRefT_x27_instMonad___redArg(v___x_1035_);
v_toApplicative_1037_ = lean_ctor_get(v___x_1036_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1070_ == 0)
{
lean_object* v_unused_1071_; 
v_unused_1071_ = lean_ctor_get(v___x_1036_, 1);
lean_dec(v_unused_1071_);
v___x_1039_ = v___x_1036_;
v_isShared_1040_ = v_isSharedCheck_1070_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_toApplicative_1037_);
lean_dec(v___x_1036_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1070_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v_toFunctor_1041_; lean_object* v_toSeq_1042_; lean_object* v_toSeqLeft_1043_; lean_object* v_toSeqRight_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1068_; 
v_toFunctor_1041_ = lean_ctor_get(v_toApplicative_1037_, 0);
v_toSeq_1042_ = lean_ctor_get(v_toApplicative_1037_, 2);
v_toSeqLeft_1043_ = lean_ctor_get(v_toApplicative_1037_, 3);
v_toSeqRight_1044_ = lean_ctor_get(v_toApplicative_1037_, 4);
v_isSharedCheck_1068_ = !lean_is_exclusive(v_toApplicative_1037_);
if (v_isSharedCheck_1068_ == 0)
{
lean_object* v_unused_1069_; 
v_unused_1069_ = lean_ctor_get(v_toApplicative_1037_, 1);
lean_dec(v_unused_1069_);
v___x_1046_ = v_toApplicative_1037_;
v_isShared_1047_ = v_isSharedCheck_1068_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_toSeqRight_1044_);
lean_inc(v_toSeqLeft_1043_);
lean_inc(v_toSeq_1042_);
lean_inc(v_toFunctor_1041_);
lean_dec(v_toApplicative_1037_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1068_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___f_1048_; lean_object* v___f_1049_; lean_object* v___f_1050_; lean_object* v___f_1051_; lean_object* v___x_1052_; lean_object* v___f_1053_; lean_object* v___f_1054_; lean_object* v___f_1055_; lean_object* v___x_1057_; 
v___f_1048_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5));
v___f_1049_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6));
lean_inc_ref(v_toFunctor_1041_);
v___f_1050_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1050_, 0, v_toFunctor_1041_);
v___f_1051_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1051_, 0, v_toFunctor_1041_);
v___x_1052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___f_1050_);
lean_ctor_set(v___x_1052_, 1, v___f_1051_);
v___f_1053_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1053_, 0, v_toSeqRight_1044_);
v___f_1054_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1054_, 0, v_toSeqLeft_1043_);
v___f_1055_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1055_, 0, v_toSeq_1042_);
if (v_isShared_1047_ == 0)
{
lean_ctor_set(v___x_1046_, 4, v___f_1053_);
lean_ctor_set(v___x_1046_, 3, v___f_1054_);
lean_ctor_set(v___x_1046_, 2, v___f_1055_);
lean_ctor_set(v___x_1046_, 1, v___f_1048_);
lean_ctor_set(v___x_1046_, 0, v___x_1052_);
v___x_1057_ = v___x_1046_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v___x_1052_);
lean_ctor_set(v_reuseFailAlloc_1067_, 1, v___f_1048_);
lean_ctor_set(v_reuseFailAlloc_1067_, 2, v___f_1055_);
lean_ctor_set(v_reuseFailAlloc_1067_, 3, v___f_1054_);
lean_ctor_set(v_reuseFailAlloc_1067_, 4, v___f_1053_);
v___x_1057_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
lean_object* v___x_1059_; 
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 1, v___f_1049_);
lean_ctor_set(v___x_1039_, 0, v___x_1057_);
v___x_1059_ = v___x_1039_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1057_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v___f_1049_);
v___x_1059_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_51367__overap_1064_; lean_object* v___x_1065_; 
v___x_1060_ = l_StateRefT_x27_instMonad___redArg(v___x_1059_);
v___x_1061_ = l_StateRefT_x27_instMonad___redArg(v___x_1060_);
v___x_1062_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_1063_ = l_instInhabitedOfMonad___redArg(v___x_1061_, v___x_1062_);
v___x_51367__overap_1064_ = lean_panic_fn_borrowed(v___x_1063_, v_msg_977_);
lean_dec(v___x_1063_);
lean_inc(v___y_985_);
lean_inc_ref(v___y_984_);
lean_inc(v___y_983_);
lean_inc_ref(v___y_982_);
lean_inc(v___y_981_);
lean_inc_ref(v___y_980_);
lean_inc(v___y_979_);
lean_inc(v___y_978_);
v___x_1065_ = lean_apply_9(v___x_51367__overap_1064_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, lean_box(0));
return v___x_1065_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___boxed(lean_object* v_msg_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(v_msg_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_);
lean_dec(v___y_1092_);
lean_dec_ref(v___y_1091_);
lean_dec(v___y_1090_);
lean_dec_ref(v___y_1089_);
lean_dec(v___y_1088_);
lean_dec_ref(v___y_1087_);
lean_dec(v___y_1086_);
lean_dec(v___y_1085_);
return v_res_1094_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3(void){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
v___x_1098_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2));
v___x_1099_ = lean_unsigned_to_nat(53u);
v___x_1100_ = lean_unsigned_to_nat(62u);
v___x_1101_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1));
v___x_1102_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0));
v___x_1103_ = l_mkPanicMessageWithDecl(v___x_1102_, v___x_1101_, v___x_1100_, v___x_1099_, v___x_1098_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(size_t v_sz_1104_, size_t v_i_1105_, lean_object* v_bs_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
uint8_t v___x_1116_; 
v___x_1116_ = lean_usize_dec_lt(v_i_1105_, v_sz_1104_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; 
v___x_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1117_, 0, v_bs_1106_);
return v___x_1117_;
}
else
{
lean_object* v_v_1118_; lean_object* v___x_1119_; lean_object* v_bs_x27_1120_; lean_object* v_a_1122_; lean_object* v___x_1127_; 
v_v_1118_ = lean_array_uget(v_bs_1106_, v_i_1105_);
v___x_1119_ = lean_unsigned_to_nat(0u);
v_bs_x27_1120_ = lean_array_uset(v_bs_1106_, v_i_1105_, v___x_1119_);
v___x_1127_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(v_v_1118_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_);
if (lean_obj_tag(v___x_1127_) == 0)
{
lean_object* v_a_1128_; 
v_a_1128_ = lean_ctor_get(v___x_1127_, 0);
lean_inc(v_a_1128_);
lean_dec_ref_known(v___x_1127_, 1);
if (lean_obj_tag(v_a_1128_) == 6)
{
lean_object* v_val_1129_; lean_object* v_numFields_1130_; uint8_t v___x_1131_; lean_object* v___x_1132_; 
v_val_1129_ = lean_ctor_get(v_a_1128_, 0);
lean_inc_ref(v_val_1129_);
lean_dec_ref_known(v_a_1128_, 1);
v_numFields_1130_ = lean_ctor_get(v_val_1129_, 4);
lean_inc(v_numFields_1130_);
lean_dec_ref(v_val_1129_);
v___x_1131_ = 0;
v___x_1132_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1132_, 0, v_numFields_1130_);
lean_ctor_set(v___x_1132_, 1, v___x_1119_);
lean_ctor_set_uint8(v___x_1132_, sizeof(void*)*2, v___x_1131_);
v_a_1122_ = v___x_1132_;
goto v___jp_1121_;
}
else
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
lean_dec(v_a_1128_);
v___x_1133_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3);
v___x_1134_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(v___x_1133_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v_a_1135_; 
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
lean_inc(v_a_1135_);
lean_dec_ref_known(v___x_1134_, 1);
v_a_1122_ = v_a_1135_;
goto v___jp_1121_;
}
else
{
lean_object* v_a_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1143_; 
lean_dec_ref(v_bs_x27_1120_);
v_a_1136_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1143_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1138_ = v___x_1134_;
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_a_1136_);
lean_dec(v___x_1134_);
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
else
{
lean_object* v_a_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1151_; 
lean_dec_ref(v_bs_x27_1120_);
v_a_1144_ = lean_ctor_get(v___x_1127_, 0);
v_isSharedCheck_1151_ = !lean_is_exclusive(v___x_1127_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1146_ = v___x_1127_;
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_a_1144_);
lean_dec(v___x_1127_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1149_; 
if (v_isShared_1147_ == 0)
{
v___x_1149_ = v___x_1146_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_a_1144_);
v___x_1149_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
return v___x_1149_;
}
}
}
v___jp_1121_:
{
size_t v___x_1123_; size_t v___x_1124_; lean_object* v___x_1125_; 
v___x_1123_ = ((size_t)1ULL);
v___x_1124_ = lean_usize_add(v_i_1105_, v___x_1123_);
v___x_1125_ = lean_array_uset(v_bs_x27_1120_, v_i_1105_, v_a_1122_);
v_i_1105_ = v___x_1124_;
v_bs_1106_ = v___x_1125_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___boxed(lean_object* v_sz_1152_, lean_object* v_i_1153_, lean_object* v_bs_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
size_t v_sz_boxed_1164_; size_t v_i_boxed_1165_; lean_object* v_res_1166_; 
v_sz_boxed_1164_ = lean_unbox_usize(v_sz_1152_);
lean_dec(v_sz_1152_);
v_i_boxed_1165_ = lean_unbox_usize(v_i_1153_);
lean_dec(v_i_1153_);
v_res_1166_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(v_sz_boxed_1164_, v_i_boxed_1165_, v_bs_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1157_);
lean_dec(v___y_1156_);
lean_dec(v___y_1155_);
return v_res_1166_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0(void){
_start:
{
lean_object* v___x_1167_; lean_object* v_dummy_1168_; 
v___x_1167_ = lean_box(0);
v_dummy_1168_ = l_Lean_Expr_sort___override(v___x_1167_);
return v_dummy_1168_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1(void){
_start:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1169_ = lean_box(0);
v___x_1170_ = lean_unsigned_to_nat(16u);
v___x_1171_ = lean_mk_array(v___x_1170_, v___x_1169_);
return v___x_1171_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2(void){
_start:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1172_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1);
v___x_1173_ = lean_unsigned_to_nat(0u);
v___x_1174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1173_);
lean_ctor_set(v___x_1174_, 1, v___x_1172_);
return v___x_1174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(lean_object* v_e_1177_, uint8_t v_alsoCasesOn_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_){
_start:
{
uint8_t v___x_1191_; 
v___x_1191_ = l_Lean_Expr_isApp(v_e_1177_);
if (v___x_1191_ == 0)
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
lean_dec_ref(v_e_1177_);
v___x_1192_ = lean_box(0);
v___x_1193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1192_);
return v___x_1193_;
}
else
{
lean_object* v___x_1194_; 
v___x_1194_ = l_Lean_Expr_getAppFn(v_e_1177_);
if (lean_obj_tag(v___x_1194_) == 4)
{
lean_object* v_declName_1195_; lean_object* v_us_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1343_; 
v_declName_1195_ = lean_ctor_get(v___x_1194_, 0);
lean_inc_n(v_declName_1195_, 2);
v_us_1196_ = lean_ctor_get(v___x_1194_, 1);
lean_inc(v_us_1196_);
lean_dec_ref_known(v___x_1194_, 2);
v___x_1197_ = l_Lean_instInhabitedExpr;
v___x_1198_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(v_declName_1195_, v___y_1186_);
v_a_1199_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1343_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1201_ = v___x_1198_;
v_isShared_1202_ = v_isSharedCheck_1343_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1198_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1343_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
if (lean_obj_tag(v_a_1199_) == 1)
{
lean_object* v_val_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1240_; 
v_val_1203_ = lean_ctor_get(v_a_1199_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v_a_1199_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1205_ = v_a_1199_;
v_isShared_1206_ = v_isSharedCheck_1240_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_val_1203_);
lean_dec(v_a_1199_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1240_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v_dummy_1207_; lean_object* v_nargs_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v_args_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; uint8_t v___x_1215_; 
v_dummy_1207_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
v_nargs_1208_ = l_Lean_Expr_getAppNumArgs(v_e_1177_);
lean_inc(v_nargs_1208_);
v___x_1209_ = lean_mk_array(v_nargs_1208_, v_dummy_1207_);
v___x_1210_ = lean_unsigned_to_nat(1u);
v___x_1211_ = lean_nat_sub(v_nargs_1208_, v___x_1210_);
lean_dec(v_nargs_1208_);
v_args_1212_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1177_, v___x_1209_, v___x_1211_);
v___x_1213_ = lean_array_get_size(v_args_1212_);
v___x_1214_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_1203_);
v___x_1215_ = lean_nat_dec_lt(v___x_1213_, v___x_1214_);
lean_dec(v___x_1214_);
if (v___x_1215_ == 0)
{
lean_object* v_numParams_1216_; lean_object* v_numDiscrs_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1235_; 
v_numParams_1216_ = lean_ctor_get(v_val_1203_, 0);
v_numDiscrs_1217_ = lean_ctor_get(v_val_1203_, 1);
v___x_1218_ = lean_array_mk(v_us_1196_);
v___x_1219_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1216_);
v___x_1220_ = l_Array_extract___redArg(v_args_1212_, v___x_1219_, v_numParams_1216_);
v___x_1221_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_1203_);
v___x_1222_ = lean_array_get(v___x_1197_, v_args_1212_, v___x_1221_);
lean_dec(v___x_1221_);
v___x_1223_ = lean_nat_add(v_numParams_1216_, v___x_1210_);
v___x_1224_ = lean_nat_add(v___x_1223_, v_numDiscrs_1217_);
lean_inc(v___x_1224_);
lean_inc_ref_n(v_args_1212_, 2);
v___x_1225_ = l_Array_toSubarray___redArg(v_args_1212_, v___x_1223_, v___x_1224_);
v___x_1226_ = l_Subarray_copy___redArg(v___x_1225_);
v___x_1227_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_1203_);
v___x_1228_ = lean_nat_add(v___x_1224_, v___x_1227_);
lean_dec(v___x_1227_);
lean_inc(v___x_1228_);
v___x_1229_ = l_Array_toSubarray___redArg(v_args_1212_, v___x_1224_, v___x_1228_);
v___x_1230_ = l_Subarray_copy___redArg(v___x_1229_);
v___x_1231_ = l_Array_toSubarray___redArg(v_args_1212_, v___x_1228_, v___x_1213_);
v___x_1232_ = l_Subarray_copy___redArg(v___x_1231_);
v___x_1233_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1233_, 0, v_val_1203_);
lean_ctor_set(v___x_1233_, 1, v_declName_1195_);
lean_ctor_set(v___x_1233_, 2, v___x_1218_);
lean_ctor_set(v___x_1233_, 3, v___x_1220_);
lean_ctor_set(v___x_1233_, 4, v___x_1222_);
lean_ctor_set(v___x_1233_, 5, v___x_1226_);
lean_ctor_set(v___x_1233_, 6, v___x_1230_);
lean_ctor_set(v___x_1233_, 7, v___x_1232_);
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v___x_1233_);
v___x_1235_ = v___x_1205_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1233_);
v___x_1235_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
lean_object* v___x_1237_; 
if (v_isShared_1202_ == 0)
{
lean_ctor_set(v___x_1201_, 0, v___x_1235_);
v___x_1237_ = v___x_1201_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v___x_1235_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
else
{
lean_dec_ref(v_args_1212_);
lean_del_object(v___x_1205_);
lean_dec(v_val_1203_);
lean_del_object(v___x_1201_);
lean_dec(v_us_1196_);
lean_dec(v_declName_1195_);
goto v___jp_1188_;
}
}
}
else
{
lean_object* v___x_1241_; 
lean_del_object(v___x_1201_);
lean_dec(v_a_1199_);
v___x_1241_ = lean_st_ref_get(v___y_1186_);
if (v_alsoCasesOn_1178_ == 0)
{
lean_dec(v___x_1241_);
lean_dec(v_us_1196_);
lean_dec(v_declName_1195_);
lean_dec_ref(v_e_1177_);
goto v___jp_1188_;
}
else
{
lean_object* v_env_1242_; uint8_t v___x_1243_; 
v_env_1242_ = lean_ctor_get(v___x_1241_, 0);
lean_inc_ref(v_env_1242_);
lean_dec(v___x_1241_);
lean_inc(v_declName_1195_);
v___x_1243_ = l_Lean_isCasesOnRecursor(v_env_1242_, v_declName_1195_);
if (v___x_1243_ == 0)
{
lean_dec(v_us_1196_);
lean_dec(v_declName_1195_);
lean_dec_ref(v_e_1177_);
goto v___jp_1188_;
}
else
{
lean_object* v_indName_1244_; lean_object* v___x_1245_; 
v_indName_1244_ = l_Lean_Name_getPrefix(v_declName_1195_);
v___x_1245_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(v_indName_1244_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_);
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v_a_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1334_; 
v_a_1246_ = lean_ctor_get(v___x_1245_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1245_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1248_ = v___x_1245_;
v_isShared_1249_ = v_isSharedCheck_1334_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_a_1246_);
lean_dec(v___x_1245_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1334_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
if (lean_obj_tag(v_a_1246_) == 5)
{
lean_object* v_val_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1329_; 
lean_del_object(v___x_1248_);
v_val_1250_ = lean_ctor_get(v_a_1246_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v_a_1246_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1252_ = v_a_1246_;
v_isShared_1253_ = v_isSharedCheck_1329_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_val_1250_);
lean_dec(v_a_1246_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1329_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v_toConstantVal_1254_; lean_object* v_numParams_1255_; lean_object* v_numIndices_1256_; lean_object* v_ctors_1257_; lean_object* v_nargs_1258_; lean_object* v_dummy_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v_args_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; uint8_t v___x_1270_; 
v_toConstantVal_1254_ = lean_ctor_get(v_val_1250_, 0);
lean_inc_ref(v_toConstantVal_1254_);
v_numParams_1255_ = lean_ctor_get(v_val_1250_, 1);
lean_inc(v_numParams_1255_);
v_numIndices_1256_ = lean_ctor_get(v_val_1250_, 2);
lean_inc(v_numIndices_1256_);
v_ctors_1257_ = lean_ctor_get(v_val_1250_, 4);
lean_inc(v_ctors_1257_);
v_nargs_1258_ = l_Lean_Expr_getAppNumArgs(v_e_1177_);
v_dummy_1259_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
lean_inc(v_nargs_1258_);
v___x_1260_ = lean_mk_array(v_nargs_1258_, v_dummy_1259_);
v___x_1261_ = lean_unsigned_to_nat(1u);
v___x_1262_ = lean_nat_sub(v_nargs_1258_, v___x_1261_);
lean_dec(v_nargs_1258_);
v_args_1263_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1177_, v___x_1260_, v___x_1262_);
v___x_1264_ = lean_nat_add(v_numParams_1255_, v___x_1261_);
v___x_1265_ = lean_nat_add(v___x_1264_, v_numIndices_1256_);
v___x_1266_ = lean_nat_add(v___x_1265_, v___x_1261_);
lean_dec(v___x_1265_);
v___x_1267_ = l_Lean_InductiveVal_numCtors(v_val_1250_);
lean_dec_ref(v_val_1250_);
v___x_1268_ = lean_nat_add(v___x_1266_, v___x_1267_);
lean_dec(v___x_1267_);
v___x_1269_ = lean_array_get_size(v_args_1263_);
v___x_1270_ = lean_nat_dec_le(v___x_1268_, v___x_1269_);
if (v___x_1270_ == 0)
{
lean_dec(v___x_1268_);
lean_dec(v___x_1266_);
lean_dec(v___x_1264_);
lean_dec_ref(v_args_1263_);
lean_dec(v_ctors_1257_);
lean_dec(v_numIndices_1256_);
lean_dec(v_numParams_1255_);
lean_dec_ref(v_toConstantVal_1254_);
lean_del_object(v___x_1252_);
lean_dec(v_us_1196_);
lean_dec(v_declName_1195_);
goto v___jp_1188_;
}
else
{
lean_object* v___x_1271_; lean_object* v_params_1272_; lean_object* v_motive_1273_; lean_object* v_discrs_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v_discrInfos_1277_; lean_object* v_alts_1278_; lean_object* v___y_1280_; lean_object* v___y_1281_; lean_object* v_lower_1320_; lean_object* v_upper_1321_; uint8_t v___x_1328_; 
v___x_1271_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1255_);
lean_inc_ref_n(v_args_1263_, 3);
v_params_1272_ = l_Array_toSubarray___redArg(v_args_1263_, v___x_1271_, v_numParams_1255_);
v_motive_1273_ = lean_array_get(v___x_1197_, v_args_1263_, v_numParams_1255_);
lean_dec(v_numParams_1255_);
lean_inc(v___x_1266_);
v_discrs_1274_ = l_Array_toSubarray___redArg(v_args_1263_, v___x_1264_, v___x_1266_);
v___x_1275_ = lean_nat_add(v_numIndices_1256_, v___x_1261_);
lean_dec(v_numIndices_1256_);
v___x_1276_ = lean_box(0);
v_discrInfos_1277_ = lean_mk_array(v___x_1275_, v___x_1276_);
lean_inc(v___x_1268_);
v_alts_1278_ = l_Array_toSubarray___redArg(v_args_1263_, v___x_1266_, v___x_1268_);
v___x_1328_ = lean_nat_dec_le(v___x_1268_, v___x_1271_);
if (v___x_1328_ == 0)
{
v_lower_1320_ = v___x_1268_;
v_upper_1321_ = v___x_1269_;
goto v___jp_1319_;
}
else
{
lean_dec(v___x_1268_);
v_lower_1320_ = v___x_1271_;
v_upper_1321_ = v___x_1269_;
goto v___jp_1319_;
}
v___jp_1279_:
{
lean_object* v___x_1282_; size_t v_sz_1283_; size_t v___x_1284_; lean_object* v___x_1285_; 
v___x_1282_ = lean_array_mk(v_ctors_1257_);
v_sz_1283_ = lean_array_size(v___x_1282_);
v___x_1284_ = ((size_t)0ULL);
v___x_1285_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(v_sz_1283_, v___x_1284_, v___x_1282_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_);
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1310_; 
v_a_1286_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1288_ = v___x_1285_;
v_isShared_1289_ = v_isSharedCheck_1310_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1285_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1310_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v_start_1290_; lean_object* v_stop_1291_; lean_object* v_start_1292_; lean_object* v_stop_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1305_; 
v_start_1290_ = lean_ctor_get(v_params_1272_, 1);
v_stop_1291_ = lean_ctor_get(v_params_1272_, 2);
v_start_1292_ = lean_ctor_get(v_discrs_1274_, 1);
v_stop_1293_ = lean_ctor_get(v_discrs_1274_, 2);
v___x_1294_ = lean_nat_sub(v_stop_1291_, v_start_1290_);
v___x_1295_ = lean_nat_sub(v_stop_1293_, v_start_1292_);
v___x_1296_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2);
v___x_1297_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1294_);
lean_ctor_set(v___x_1297_, 1, v___x_1295_);
lean_ctor_set(v___x_1297_, 2, v_a_1286_);
lean_ctor_set(v___x_1297_, 3, v___y_1281_);
lean_ctor_set(v___x_1297_, 4, v_discrInfos_1277_);
lean_ctor_set(v___x_1297_, 5, v___x_1296_);
v___x_1298_ = lean_array_mk(v_us_1196_);
v___x_1299_ = l_Subarray_copy___redArg(v_params_1272_);
v___x_1300_ = l_Subarray_copy___redArg(v_discrs_1274_);
v___x_1301_ = l_Subarray_copy___redArg(v_alts_1278_);
v___x_1302_ = l_Subarray_copy___redArg(v___y_1280_);
v___x_1303_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1297_);
lean_ctor_set(v___x_1303_, 1, v_declName_1195_);
lean_ctor_set(v___x_1303_, 2, v___x_1298_);
lean_ctor_set(v___x_1303_, 3, v___x_1299_);
lean_ctor_set(v___x_1303_, 4, v_motive_1273_);
lean_ctor_set(v___x_1303_, 5, v___x_1300_);
lean_ctor_set(v___x_1303_, 6, v___x_1301_);
lean_ctor_set(v___x_1303_, 7, v___x_1302_);
if (v_isShared_1253_ == 0)
{
lean_ctor_set_tag(v___x_1252_, 1);
lean_ctor_set(v___x_1252_, 0, v___x_1303_);
v___x_1305_ = v___x_1252_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v___x_1303_);
v___x_1305_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
lean_object* v___x_1307_; 
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 0, v___x_1305_);
v___x_1307_ = v___x_1288_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v___x_1305_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
}
else
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1318_; 
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec_ref(v_alts_1278_);
lean_dec_ref(v_discrInfos_1277_);
lean_dec_ref(v_discrs_1274_);
lean_dec(v_motive_1273_);
lean_dec_ref(v_params_1272_);
lean_del_object(v___x_1252_);
lean_dec(v_us_1196_);
lean_dec(v_declName_1195_);
v_a_1311_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1313_ = v___x_1285_;
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1285_);
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
v___jp_1319_:
{
lean_object* v_levelParams_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; uint8_t v___x_1326_; 
v_levelParams_1322_ = lean_ctor_get(v_toConstantVal_1254_, 1);
lean_inc(v_levelParams_1322_);
lean_dec_ref(v_toConstantVal_1254_);
v___x_1323_ = l_Array_toSubarray___redArg(v_args_1263_, v_lower_1320_, v_upper_1321_);
v___x_1324_ = l_List_lengthTR___redArg(v_levelParams_1322_);
lean_dec(v_levelParams_1322_);
v___x_1325_ = l_List_lengthTR___redArg(v_us_1196_);
v___x_1326_ = lean_nat_dec_eq(v___x_1324_, v___x_1325_);
lean_dec(v___x_1325_);
lean_dec(v___x_1324_);
if (v___x_1326_ == 0)
{
lean_object* v___x_1327_; 
v___x_1327_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3));
v___y_1280_ = v___x_1323_;
v___y_1281_ = v___x_1327_;
goto v___jp_1279_;
}
else
{
v___y_1280_ = v___x_1323_;
v___y_1281_ = v___x_1276_;
goto v___jp_1279_;
}
}
}
}
}
else
{
lean_object* v___x_1330_; lean_object* v___x_1332_; 
lean_dec(v_a_1246_);
lean_dec(v_us_1196_);
lean_dec(v_declName_1195_);
lean_dec_ref(v_e_1177_);
v___x_1330_ = lean_box(0);
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 0, v___x_1330_);
v___x_1332_ = v___x_1248_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v___x_1330_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
}
else
{
lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
lean_dec(v_us_1196_);
lean_dec(v_declName_1195_);
lean_dec_ref(v_e_1177_);
v_a_1335_ = lean_ctor_get(v___x_1245_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1245_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1337_ = v___x_1245_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_dec(v___x_1245_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_a_1335_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
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
lean_dec_ref(v___x_1194_);
lean_dec_ref(v_e_1177_);
goto v___jp_1188_;
}
}
v___jp_1188_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1189_ = lean_box(0);
v___x_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
return v___x_1190_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed(lean_object* v_e_1344_, lean_object* v_alsoCasesOn_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_){
_start:
{
uint8_t v_alsoCasesOn_boxed_1355_; lean_object* v_res_1356_; 
v_alsoCasesOn_boxed_1355_ = lean_unbox(v_alsoCasesOn_1345_);
v_res_1356_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(v_e_1344_, v_alsoCasesOn_boxed_1355_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
lean_dec(v___y_1353_);
lean_dec_ref(v___y_1352_);
lean_dec(v___y_1351_);
lean_dec_ref(v___y_1350_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
lean_dec(v___y_1347_);
lean_dec(v___y_1346_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0(lean_object* v_k_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v_b_1362_, lean_object* v_c_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
lean_object* v___x_1369_; 
lean_inc(v___y_1367_);
lean_inc_ref(v___y_1366_);
lean_inc(v___y_1365_);
lean_inc_ref(v___y_1364_);
lean_inc(v___y_1361_);
lean_inc_ref(v___y_1360_);
lean_inc(v___y_1359_);
lean_inc(v___y_1358_);
v___x_1369_ = lean_apply_11(v_k_1357_, v_b_1362_, v_c_1363_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_, lean_box(0));
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0___boxed(lean_object* v_k_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v_b_1375_, lean_object* v_c_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0(v_k_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v_b_1375_, v_c_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1373_);
lean_dec(v___y_1372_);
lean_dec(v___y_1371_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(lean_object* v_e_1383_, lean_object* v_maxFVars_1384_, lean_object* v_k_1385_, uint8_t v_cleanupAnnotations_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_){
_start:
{
lean_object* v___f_1396_; uint8_t v___x_1397_; uint8_t v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
lean_inc(v___y_1390_);
lean_inc_ref(v___y_1389_);
lean_inc(v___y_1388_);
lean_inc(v___y_1387_);
v___f_1396_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0___boxed), 12, 5);
lean_closure_set(v___f_1396_, 0, v_k_1385_);
lean_closure_set(v___f_1396_, 1, v___y_1387_);
lean_closure_set(v___f_1396_, 2, v___y_1388_);
lean_closure_set(v___f_1396_, 3, v___y_1389_);
lean_closure_set(v___f_1396_, 4, v___y_1390_);
v___x_1397_ = 1;
v___x_1398_ = 0;
v___x_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1399_, 0, v_maxFVars_1384_);
v___x_1400_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1383_, v___x_1397_, v___x_1398_, v___x_1397_, v___x_1398_, v___x_1399_, v___f_1396_, v_cleanupAnnotations_1386_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_);
lean_dec_ref_known(v___x_1399_, 1);
if (lean_obj_tag(v___x_1400_) == 0)
{
return v___x_1400_;
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
v_a_1401_ = lean_ctor_get(v___x_1400_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1400_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1400_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1400_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1406_; 
if (v_isShared_1404_ == 0)
{
v___x_1406_ = v___x_1403_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_a_1401_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___boxed(lean_object* v_e_1409_, lean_object* v_maxFVars_1410_, lean_object* v_k_1411_, lean_object* v_cleanupAnnotations_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1422_; lean_object* v_res_1423_; 
v_cleanupAnnotations_boxed_1422_ = lean_unbox(v_cleanupAnnotations_1412_);
v_res_1423_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(v_e_1409_, v_maxFVars_1410_, v_k_1411_, v_cleanupAnnotations_boxed_1422_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_);
lean_dec(v___y_1420_);
lean_dec_ref(v___y_1419_);
lean_dec(v___y_1418_);
lean_dec_ref(v___y_1417_);
lean_dec(v___y_1416_);
lean_dec_ref(v___y_1415_);
lean_dec(v___y_1414_);
lean_dec(v___y_1413_);
return v_res_1423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0(lean_object* v_k_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v_b_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
lean_object* v___x_1435_; 
lean_inc(v___y_1433_);
lean_inc_ref(v___y_1432_);
lean_inc(v___y_1431_);
lean_inc_ref(v___y_1430_);
lean_inc(v___y_1428_);
lean_inc_ref(v___y_1427_);
lean_inc(v___y_1426_);
lean_inc(v___y_1425_);
v___x_1435_ = lean_apply_10(v_k_1424_, v_b_1429_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_, lean_box(0));
return v___x_1435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed(lean_object* v_k_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v_b_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0(v_k_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v_b_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
lean_dec(v___y_1443_);
lean_dec_ref(v___y_1442_);
lean_dec(v___y_1440_);
lean_dec_ref(v___y_1439_);
lean_dec(v___y_1438_);
lean_dec(v___y_1437_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(lean_object* v_name_1448_, lean_object* v_type_1449_, lean_object* v_val_1450_, lean_object* v_k_1451_, uint8_t v_nondep_1452_, uint8_t v_kind_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v___f_1463_; lean_object* v___x_1464_; 
lean_inc(v___y_1457_);
lean_inc_ref(v___y_1456_);
lean_inc(v___y_1455_);
lean_inc(v___y_1454_);
v___f_1463_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1463_, 0, v_k_1451_);
lean_closure_set(v___f_1463_, 1, v___y_1454_);
lean_closure_set(v___f_1463_, 2, v___y_1455_);
lean_closure_set(v___f_1463_, 3, v___y_1456_);
lean_closure_set(v___f_1463_, 4, v___y_1457_);
v___x_1464_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1448_, v_type_1449_, v_val_1450_, v___f_1463_, v_nondep_1452_, v_kind_1453_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_);
if (lean_obj_tag(v___x_1464_) == 0)
{
return v___x_1464_;
}
else
{
lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1472_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1467_ = v___x_1464_;
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1464_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_a_1465_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg___boxed(lean_object* v_name_1473_, lean_object* v_type_1474_, lean_object* v_val_1475_, lean_object* v_k_1476_, lean_object* v_nondep_1477_, lean_object* v_kind_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_){
_start:
{
uint8_t v_nondep_boxed_1488_; uint8_t v_kind_boxed_1489_; lean_object* v_res_1490_; 
v_nondep_boxed_1488_ = lean_unbox(v_nondep_1477_);
v_kind_boxed_1489_ = lean_unbox(v_kind_1478_);
v_res_1490_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(v_name_1473_, v_type_1474_, v_val_1475_, v_k_1476_, v_nondep_boxed_1488_, v_kind_boxed_1489_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_);
lean_dec(v___y_1486_);
lean_dec_ref(v___y_1485_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v___y_1480_);
lean_dec(v___y_1479_);
return v_res_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0(lean_object* v_k_1491_, uint8_t v_usedLetOnly_1492_, lean_object* v_x_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
lean_object* v___x_1503_; 
lean_inc(v___y_1501_);
lean_inc_ref(v___y_1500_);
lean_inc(v___y_1499_);
lean_inc_ref(v___y_1498_);
lean_inc(v___y_1497_);
lean_inc_ref(v___y_1496_);
lean_inc(v___y_1495_);
lean_inc(v___y_1494_);
lean_inc_ref(v_x_1493_);
v___x_1503_ = lean_apply_10(v_k_1491_, v_x_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, lean_box(0));
if (lean_obj_tag(v___x_1503_) == 0)
{
lean_object* v_a_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; uint8_t v___x_1508_; uint8_t v___x_1509_; lean_object* v___x_1510_; 
v_a_1504_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_a_1504_);
lean_dec_ref_known(v___x_1503_, 1);
v___x_1505_ = lean_unsigned_to_nat(1u);
v___x_1506_ = lean_mk_empty_array_with_capacity(v___x_1505_);
v___x_1507_ = lean_array_push(v___x_1506_, v_x_1493_);
v___x_1508_ = 0;
v___x_1509_ = 1;
v___x_1510_ = l_Lean_Meta_mkLetFVars(v___x_1507_, v_a_1504_, v_usedLetOnly_1492_, v___x_1508_, v___x_1509_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_);
lean_dec_ref(v___x_1507_);
return v___x_1510_;
}
else
{
lean_dec_ref(v_x_1493_);
return v___x_1503_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0___boxed(lean_object* v_k_1511_, lean_object* v_usedLetOnly_1512_, lean_object* v_x_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_){
_start:
{
uint8_t v_usedLetOnly_boxed_1523_; lean_object* v_res_1524_; 
v_usedLetOnly_boxed_1523_ = lean_unbox(v_usedLetOnly_1512_);
v_res_1524_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0(v_k_1511_, v_usedLetOnly_boxed_1523_, v_x_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
lean_dec(v___y_1515_);
lean_dec(v___y_1514_);
return v_res_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(lean_object* v_name_1525_, lean_object* v_type_1526_, lean_object* v_val_1527_, lean_object* v_k_1528_, uint8_t v_nondep_1529_, uint8_t v_kind_1530_, uint8_t v_usedLetOnly_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v___x_1541_; lean_object* v___f_1542_; lean_object* v___x_1543_; 
v___x_1541_ = lean_box(v_usedLetOnly_1531_);
v___f_1542_ = lean_alloc_closure((void*)(l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0___boxed), 12, 2);
lean_closure_set(v___f_1542_, 0, v_k_1528_);
lean_closure_set(v___f_1542_, 1, v___x_1541_);
v___x_1543_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(v_name_1525_, v_type_1526_, v_val_1527_, v___f_1542_, v_nondep_1529_, v_kind_1530_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___boxed(lean_object* v_name_1544_, lean_object* v_type_1545_, lean_object* v_val_1546_, lean_object* v_k_1547_, lean_object* v_nondep_1548_, lean_object* v_kind_1549_, lean_object* v_usedLetOnly_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_){
_start:
{
uint8_t v_nondep_boxed_1560_; uint8_t v_kind_boxed_1561_; uint8_t v_usedLetOnly_boxed_1562_; lean_object* v_res_1563_; 
v_nondep_boxed_1560_ = lean_unbox(v_nondep_1548_);
v_kind_boxed_1561_ = lean_unbox(v_kind_1549_);
v_usedLetOnly_boxed_1562_ = lean_unbox(v_usedLetOnly_1550_);
v_res_1563_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(v_name_1544_, v_type_1545_, v_val_1546_, v_k_1547_, v_nondep_boxed_1560_, v_kind_boxed_1561_, v_usedLetOnly_boxed_1562_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_);
lean_dec(v___y_1558_);
lean_dec_ref(v___y_1557_);
lean_dec(v___y_1556_);
lean_dec_ref(v___y_1555_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
lean_dec(v___y_1552_);
lean_dec(v___y_1551_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(lean_object* v_name_1564_, uint8_t v_bi_1565_, lean_object* v_type_1566_, lean_object* v_k_1567_, uint8_t v_kind_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_){
_start:
{
lean_object* v___f_1578_; lean_object* v___x_1579_; 
lean_inc(v___y_1572_);
lean_inc_ref(v___y_1571_);
lean_inc(v___y_1570_);
lean_inc(v___y_1569_);
v___f_1578_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1578_, 0, v_k_1567_);
lean_closure_set(v___f_1578_, 1, v___y_1569_);
lean_closure_set(v___f_1578_, 2, v___y_1570_);
lean_closure_set(v___f_1578_, 3, v___y_1571_);
lean_closure_set(v___f_1578_, 4, v___y_1572_);
v___x_1579_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1564_, v_bi_1565_, v_type_1566_, v___f_1578_, v_kind_1568_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_);
if (lean_obj_tag(v___x_1579_) == 0)
{
return v___x_1579_;
}
else
{
lean_object* v_a_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1587_; 
v_a_1580_ = lean_ctor_get(v___x_1579_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1582_ = v___x_1579_;
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_a_1580_);
lean_dec(v___x_1579_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___boxed(lean_object* v_name_1588_, lean_object* v_bi_1589_, lean_object* v_type_1590_, lean_object* v_k_1591_, lean_object* v_kind_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
uint8_t v_bi_boxed_1602_; uint8_t v_kind_boxed_1603_; lean_object* v_res_1604_; 
v_bi_boxed_1602_ = lean_unbox(v_bi_1589_);
v_kind_boxed_1603_ = lean_unbox(v_kind_1592_);
v_res_1604_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_name_1588_, v_bi_boxed_1602_, v_type_1590_, v_k_1591_, v_kind_boxed_1603_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_);
lean_dec(v___y_1600_);
lean_dec_ref(v___y_1599_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
lean_dec(v___y_1594_);
lean_dec(v___y_1593_);
return v_res_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0(lean_object* v_k_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_){
_start:
{
lean_object* v___x_1615_; 
lean_inc(v___y_1609_);
lean_inc_ref(v___y_1608_);
lean_inc(v___y_1607_);
lean_inc(v___y_1606_);
v___x_1615_ = lean_apply_9(v_k_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, lean_box(0));
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0___boxed(lean_object* v_k_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v_res_1626_; 
v_res_1626_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0(v_k_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec(v___y_1617_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(lean_object* v_k_1627_, uint8_t v_allowLevelAssignments_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v___f_1638_; lean_object* v___x_1639_; 
lean_inc(v___y_1632_);
lean_inc_ref(v___y_1631_);
lean_inc(v___y_1630_);
lean_inc(v___y_1629_);
v___f_1638_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_1638_, 0, v_k_1627_);
lean_closure_set(v___f_1638_, 1, v___y_1629_);
lean_closure_set(v___f_1638_, 2, v___y_1630_);
lean_closure_set(v___f_1638_, 3, v___y_1631_);
lean_closure_set(v___f_1638_, 4, v___y_1632_);
v___x_1639_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1628_, v___f_1638_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1639_) == 0)
{
return v___x_1639_;
}
else
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
v_a_1640_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1642_ = v___x_1639_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1639_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1645_; 
if (v_isShared_1643_ == 0)
{
v___x_1645_ = v___x_1642_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1640_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___boxed(lean_object* v_k_1648_, lean_object* v_allowLevelAssignments_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1659_; lean_object* v_res_1660_; 
v_allowLevelAssignments_boxed_1659_ = lean_unbox(v_allowLevelAssignments_1649_);
v_res_1660_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v_k_1648_, v_allowLevelAssignments_boxed_1659_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
lean_dec(v___y_1655_);
lean_dec_ref(v___y_1654_);
lean_dec(v___y_1653_);
lean_dec_ref(v___y_1652_);
lean_dec(v___y_1651_);
lean_dec(v___y_1650_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(lean_object* v_a_1661_, lean_object* v_x_1662_){
_start:
{
if (lean_obj_tag(v_x_1662_) == 0)
{
lean_object* v___x_1663_; 
v___x_1663_ = lean_box(0);
return v___x_1663_;
}
else
{
lean_object* v_key_1664_; lean_object* v_value_1665_; lean_object* v_tail_1666_; uint8_t v___x_1667_; 
v_key_1664_ = lean_ctor_get(v_x_1662_, 0);
v_value_1665_ = lean_ctor_get(v_x_1662_, 1);
v_tail_1666_ = lean_ctor_get(v_x_1662_, 2);
v___x_1667_ = lean_expr_eqv(v_key_1664_, v_a_1661_);
if (v___x_1667_ == 0)
{
v_x_1662_ = v_tail_1666_;
goto _start;
}
else
{
lean_object* v___x_1669_; 
lean_inc(v_value_1665_);
v___x_1669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1669_, 0, v_value_1665_);
return v___x_1669_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg___boxed(lean_object* v_a_1670_, lean_object* v_x_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(v_a_1670_, v_x_1671_);
lean_dec(v_x_1671_);
lean_dec_ref(v_a_1670_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(lean_object* v_m_1673_, lean_object* v_a_1674_){
_start:
{
lean_object* v_buckets_1675_; lean_object* v___x_1676_; uint64_t v___x_1677_; uint64_t v___x_1678_; uint64_t v___x_1679_; uint64_t v_fold_1680_; uint64_t v___x_1681_; uint64_t v___x_1682_; uint64_t v___x_1683_; size_t v___x_1684_; size_t v___x_1685_; size_t v___x_1686_; size_t v___x_1687_; size_t v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v_buckets_1675_ = lean_ctor_get(v_m_1673_, 1);
v___x_1676_ = lean_array_get_size(v_buckets_1675_);
v___x_1677_ = l_Lean_Expr_hash(v_a_1674_);
v___x_1678_ = 32ULL;
v___x_1679_ = lean_uint64_shift_right(v___x_1677_, v___x_1678_);
v_fold_1680_ = lean_uint64_xor(v___x_1677_, v___x_1679_);
v___x_1681_ = 16ULL;
v___x_1682_ = lean_uint64_shift_right(v_fold_1680_, v___x_1681_);
v___x_1683_ = lean_uint64_xor(v_fold_1680_, v___x_1682_);
v___x_1684_ = lean_uint64_to_usize(v___x_1683_);
v___x_1685_ = lean_usize_of_nat(v___x_1676_);
v___x_1686_ = ((size_t)1ULL);
v___x_1687_ = lean_usize_sub(v___x_1685_, v___x_1686_);
v___x_1688_ = lean_usize_land(v___x_1684_, v___x_1687_);
v___x_1689_ = lean_array_uget_borrowed(v_buckets_1675_, v___x_1688_);
v___x_1690_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(v_a_1674_, v___x_1689_);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg___boxed(lean_object* v_m_1691_, lean_object* v_a_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(v_m_1691_, v_a_1692_);
lean_dec_ref(v_a_1692_);
lean_dec_ref(v_m_1691_);
return v_res_1693_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(lean_object* v_opts_1694_, lean_object* v_opt_1695_){
_start:
{
lean_object* v_name_1696_; lean_object* v_defValue_1697_; lean_object* v_map_1698_; lean_object* v___x_1699_; 
v_name_1696_ = lean_ctor_get(v_opt_1695_, 0);
v_defValue_1697_ = lean_ctor_get(v_opt_1695_, 1);
v_map_1698_ = lean_ctor_get(v_opts_1694_, 0);
v___x_1699_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1698_, v_name_1696_);
if (lean_obj_tag(v___x_1699_) == 0)
{
uint8_t v___x_1700_; 
v___x_1700_ = lean_unbox(v_defValue_1697_);
return v___x_1700_;
}
else
{
lean_object* v_val_1701_; 
v_val_1701_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_val_1701_);
lean_dec_ref_known(v___x_1699_, 1);
if (lean_obj_tag(v_val_1701_) == 1)
{
uint8_t v_v_1702_; 
v_v_1702_ = lean_ctor_get_uint8(v_val_1701_, 0);
lean_dec_ref_known(v_val_1701_, 0);
return v_v_1702_;
}
else
{
uint8_t v___x_1703_; 
lean_dec(v_val_1701_);
v___x_1703_ = lean_unbox(v_defValue_1697_);
return v___x_1703_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5___boxed(lean_object* v_opts_1704_, lean_object* v_opt_1705_){
_start:
{
uint8_t v_res_1706_; lean_object* v_r_1707_; 
v_res_1706_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(v_opts_1704_, v_opt_1705_);
lean_dec_ref(v_opt_1705_);
lean_dec_ref(v_opts_1704_);
v_r_1707_ = lean_box(v_res_1706_);
return v_r_1707_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(lean_object* v_a_1708_, lean_object* v_b_1709_){
_start:
{
lean_object* v_array_1710_; lean_object* v_start_1711_; lean_object* v_stop_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1725_; 
v_array_1710_ = lean_ctor_get(v_a_1708_, 0);
v_start_1711_ = lean_ctor_get(v_a_1708_, 1);
v_stop_1712_ = lean_ctor_get(v_a_1708_, 2);
v_isSharedCheck_1725_ = !lean_is_exclusive(v_a_1708_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1714_ = v_a_1708_;
v_isShared_1715_ = v_isSharedCheck_1725_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_stop_1712_);
lean_inc(v_start_1711_);
lean_inc(v_array_1710_);
lean_dec(v_a_1708_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1725_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
uint8_t v___x_1716_; 
v___x_1716_ = lean_nat_dec_lt(v_start_1711_, v_stop_1712_);
if (v___x_1716_ == 0)
{
lean_del_object(v___x_1714_);
lean_dec(v_stop_1712_);
lean_dec(v_start_1711_);
lean_dec_ref(v_array_1710_);
return v_b_1709_;
}
else
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1720_; 
v___x_1717_ = lean_unsigned_to_nat(1u);
v___x_1718_ = lean_nat_add(v_start_1711_, v___x_1717_);
lean_inc_ref(v_array_1710_);
if (v_isShared_1715_ == 0)
{
lean_ctor_set(v___x_1714_, 1, v___x_1718_);
v___x_1720_ = v___x_1714_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_array_1710_);
lean_ctor_set(v_reuseFailAlloc_1724_, 1, v___x_1718_);
lean_ctor_set(v_reuseFailAlloc_1724_, 2, v_stop_1712_);
v___x_1720_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1721_ = lean_array_fget(v_array_1710_, v_start_1711_);
lean_dec(v_start_1711_);
lean_dec_ref(v_array_1710_);
v___x_1722_ = lean_array_push(v_b_1709_, v___x_1721_);
v_a_1708_ = v___x_1720_;
v_b_1709_ = v___x_1722_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(lean_object* v_body_1726_, lean_object* v_recFnName_1727_, lean_object* v_fixedPrefixSize_1728_, lean_object* v_F_1729_, lean_object* v_x_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_){
_start:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1740_ = lean_expr_instantiate1(v_body_1726_, v_x_1730_);
v___x_1741_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1727_, v_fixedPrefixSize_1728_, v_F_1729_, v___x_1740_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v_a_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; uint8_t v___x_1746_; uint8_t v___x_1747_; uint8_t v___x_1748_; lean_object* v___x_1749_; 
v_a_1742_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_a_1742_);
lean_dec_ref_known(v___x_1741_, 1);
v___x_1743_ = lean_unsigned_to_nat(1u);
v___x_1744_ = lean_mk_empty_array_with_capacity(v___x_1743_);
v___x_1745_ = lean_array_push(v___x_1744_, v_x_1730_);
v___x_1746_ = 0;
v___x_1747_ = 1;
v___x_1748_ = 1;
v___x_1749_ = l_Lean_Meta_mkLambdaFVars(v___x_1745_, v_a_1742_, v___x_1746_, v___x_1747_, v___x_1746_, v___x_1747_, v___x_1748_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
lean_dec_ref(v___x_1745_);
return v___x_1749_;
}
else
{
lean_dec_ref(v_x_1730_);
return v___x_1741_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed(lean_object* v_body_1750_, lean_object* v_recFnName_1751_, lean_object* v_fixedPrefixSize_1752_, lean_object* v_F_1753_, lean_object* v_x_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(v_body_1750_, v_recFnName_1751_, v_fixedPrefixSize_1752_, v_F_1753_, v_x_1754_, v___y_1755_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1761_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v___y_1756_);
lean_dec(v___y_1755_);
lean_dec_ref(v_body_1750_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(lean_object* v_body_1765_, lean_object* v_recFnName_1766_, lean_object* v_fixedPrefixSize_1767_, lean_object* v_F_1768_, lean_object* v_x_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_){
_start:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1779_ = lean_expr_instantiate1(v_body_1765_, v_x_1769_);
v___x_1780_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1766_, v_fixedPrefixSize_1767_, v_F_1768_, v___x_1779_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_);
if (lean_obj_tag(v___x_1780_) == 0)
{
lean_object* v_a_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; uint8_t v___x_1785_; uint8_t v___x_1786_; uint8_t v___x_1787_; lean_object* v___x_1788_; 
v_a_1781_ = lean_ctor_get(v___x_1780_, 0);
lean_inc(v_a_1781_);
lean_dec_ref_known(v___x_1780_, 1);
v___x_1782_ = lean_unsigned_to_nat(1u);
v___x_1783_ = lean_mk_empty_array_with_capacity(v___x_1782_);
v___x_1784_ = lean_array_push(v___x_1783_, v_x_1769_);
v___x_1785_ = 0;
v___x_1786_ = 1;
v___x_1787_ = 1;
v___x_1788_ = l_Lean_Meta_mkForallFVars(v___x_1784_, v_a_1781_, v___x_1785_, v___x_1786_, v___x_1786_, v___x_1787_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_);
lean_dec_ref(v___x_1784_);
return v___x_1788_;
}
else
{
lean_dec_ref(v_x_1769_);
return v___x_1780_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed(lean_object* v_body_1789_, lean_object* v_recFnName_1790_, lean_object* v_fixedPrefixSize_1791_, lean_object* v_F_1792_, lean_object* v_x_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_){
_start:
{
lean_object* v_res_1803_; 
v_res_1803_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(v_body_1789_, v_recFnName_1790_, v_fixedPrefixSize_1791_, v_F_1792_, v_x_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
lean_dec(v___y_1799_);
lean_dec_ref(v___y_1798_);
lean_dec(v___y_1797_);
lean_dec_ref(v___y_1796_);
lean_dec(v___y_1795_);
lean_dec(v___y_1794_);
lean_dec_ref(v_body_1789_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed(lean_object* v_body_1804_, lean_object* v_recFnName_1805_, lean_object* v_fixedPrefixSize_1806_, lean_object* v_F_1807_, lean_object* v_x_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v_res_1818_; 
v_res_1818_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(v_body_1804_, v_recFnName_1805_, v_fixedPrefixSize_1806_, v_F_1807_, v_x_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
lean_dec(v___y_1816_);
lean_dec_ref(v___y_1815_);
lean_dec(v___y_1814_);
lean_dec_ref(v___y_1813_);
lean_dec(v___y_1812_);
lean_dec_ref(v___y_1811_);
lean_dec(v___y_1810_);
lean_dec(v___y_1809_);
lean_dec_ref(v_x_1808_);
lean_dec_ref(v_body_1804_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(lean_object* v_recFnName_1821_, lean_object* v_fixedPrefixSize_1822_, lean_object* v_F_1823_, size_t v_sz_1824_, size_t v_i_1825_, lean_object* v_bs_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_){
_start:
{
uint8_t v___x_1836_; 
v___x_1836_ = lean_usize_dec_lt(v_i_1825_, v_sz_1824_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; 
lean_dec_ref(v_F_1823_);
lean_dec(v_fixedPrefixSize_1822_);
lean_dec(v_recFnName_1821_);
v___x_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1837_, 0, v_bs_1826_);
return v___x_1837_;
}
else
{
lean_object* v_v_1838_; lean_object* v___x_1839_; lean_object* v_bs_x27_1840_; lean_object* v___x_1841_; 
v_v_1838_ = lean_array_uget(v_bs_1826_, v_i_1825_);
v___x_1839_ = lean_unsigned_to_nat(0u);
v_bs_x27_1840_ = lean_array_uset(v_bs_1826_, v_i_1825_, v___x_1839_);
lean_inc_ref(v_F_1823_);
lean_inc(v_fixedPrefixSize_1822_);
lean_inc(v_recFnName_1821_);
v___x_1841_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1821_, v_fixedPrefixSize_1822_, v_F_1823_, v_v_1838_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v_a_1842_; size_t v___x_1843_; size_t v___x_1844_; lean_object* v___x_1845_; 
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_a_1842_);
lean_dec_ref_known(v___x_1841_, 1);
v___x_1843_ = ((size_t)1ULL);
v___x_1844_ = lean_usize_add(v_i_1825_, v___x_1843_);
v___x_1845_ = lean_array_uset(v_bs_x27_1840_, v_i_1825_, v_a_1842_);
v_i_1825_ = v___x_1844_;
v_bs_1826_ = v___x_1845_;
goto _start;
}
else
{
lean_object* v_a_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1854_; 
lean_dec_ref(v_bs_x27_1840_);
lean_dec_ref(v_F_1823_);
lean_dec(v_fixedPrefixSize_1822_);
lean_dec(v_recFnName_1821_);
v_a_1847_ = lean_ctor_get(v___x_1841_, 0);
v_isSharedCheck_1854_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1849_ = v___x_1841_;
v_isShared_1850_ = v_isSharedCheck_1854_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_a_1847_);
lean_dec(v___x_1841_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1854_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1852_; 
if (v_isShared_1850_ == 0)
{
v___x_1852_ = v___x_1849_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_a_1847_);
v___x_1852_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
return v___x_1852_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4(void){
_start:
{
lean_object* v_cls_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v_cls_1862_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1));
v___x_1863_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3));
v___x_1864_ = l_Lean_Name_append(v___x_1863_, v_cls_1862_);
return v___x_1864_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6(void){
_start:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1866_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5));
v___x_1867_ = l_Lean_stringToMessageData(v___x_1866_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(lean_object* v_recFnName_1868_, lean_object* v_fixedPrefixSize_1869_, lean_object* v_F_1870_, lean_object* v_e_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_){
_start:
{
lean_object* v___y_1882_; lean_object* v___y_1883_; lean_object* v___y_1884_; lean_object* v___y_1885_; lean_object* v___y_1886_; lean_object* v___y_1887_; lean_object* v___y_1888_; lean_object* v___y_1889_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; uint8_t v___x_1896_; 
v___x_1893_ = l_Lean_Expr_getAppNumArgs(v_e_1871_);
v___x_1894_ = lean_unsigned_to_nat(1u);
v___x_1895_ = lean_nat_add(v_fixedPrefixSize_1869_, v___x_1894_);
v___x_1896_ = lean_nat_dec_lt(v___x_1893_, v___x_1895_);
if (v___x_1896_ == 0)
{
lean_object* v___x_1897_; lean_object* v_dummy_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v_args_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1897_ = l_Lean_instInhabitedExpr;
v_dummy_1898_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
lean_inc(v___x_1893_);
v___x_1899_ = lean_mk_array(v___x_1893_, v_dummy_1898_);
v___x_1900_ = lean_nat_sub(v___x_1893_, v___x_1894_);
lean_dec(v___x_1893_);
v_args_1901_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1871_, v___x_1899_, v___x_1900_);
v___x_1902_ = lean_array_get_borrowed(v___x_1897_, v_args_1901_, v_fixedPrefixSize_1869_);
lean_inc(v___x_1902_);
lean_inc_ref(v_F_1870_);
lean_inc(v_fixedPrefixSize_1869_);
lean_inc(v_recFnName_1868_);
v___x_1903_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1868_, v_fixedPrefixSize_1869_, v_F_1870_, v___x_1902_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_);
if (lean_obj_tag(v___x_1903_) == 0)
{
lean_object* v_a_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
v_a_1904_ = lean_ctor_get(v___x_1903_, 0);
lean_inc(v_a_1904_);
lean_dec_ref_known(v___x_1903_, 1);
lean_inc_ref(v_F_1870_);
v___x_1905_ = l_Lean_Expr_app___override(v_F_1870_, v_a_1904_);
lean_inc(v_a_1879_);
lean_inc_ref(v_a_1878_);
lean_inc(v_a_1877_);
lean_inc_ref(v_a_1876_);
lean_inc_ref(v___x_1905_);
v___x_1906_ = lean_infer_type(v___x_1905_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v_a_1907_; lean_object* v___x_1908_; 
v_a_1907_ = lean_ctor_get(v___x_1906_, 0);
lean_inc(v_a_1907_);
lean_dec_ref_known(v___x_1906_, 1);
lean_inc(v_a_1879_);
lean_inc_ref(v_a_1878_);
lean_inc(v_a_1877_);
lean_inc_ref(v_a_1876_);
v___x_1908_ = lean_whnf(v_a_1907_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
lean_inc(v_a_1909_);
lean_dec_ref_known(v___x_1908_, 1);
v___x_1910_ = l_Lean_Expr_bindingDomain_x21(v_a_1909_);
lean_dec(v_a_1909_);
v___x_1911_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(v___x_1910_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v___x_1913_; lean_object* v_lower_1915_; lean_object* v_upper_1916_; lean_object* v___x_1940_; lean_object* v___x_1941_; uint8_t v___x_1942_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_a_1912_);
lean_dec_ref_known(v___x_1911_, 1);
v___x_1913_ = l_Lean_Expr_app___override(v___x_1905_, v_a_1912_);
v___x_1940_ = lean_unsigned_to_nat(0u);
v___x_1941_ = lean_array_get_size(v_args_1901_);
v___x_1942_ = lean_nat_dec_le(v___x_1895_, v___x_1940_);
if (v___x_1942_ == 0)
{
v_lower_1915_ = v___x_1895_;
v_upper_1916_ = v___x_1941_;
goto v___jp_1914_;
}
else
{
lean_dec(v___x_1895_);
v_lower_1915_ = v___x_1940_;
v_upper_1916_ = v___x_1941_;
goto v___jp_1914_;
}
v___jp_1914_:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; size_t v_sz_1920_; size_t v___x_1921_; lean_object* v___x_1922_; 
v___x_1917_ = l_Array_toSubarray___redArg(v_args_1901_, v_lower_1915_, v_upper_1916_);
v___x_1918_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0));
v___x_1919_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(v___x_1917_, v___x_1918_);
v_sz_1920_ = lean_array_size(v___x_1919_);
v___x_1921_ = ((size_t)0ULL);
v___x_1922_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(v_recFnName_1868_, v_fixedPrefixSize_1869_, v_F_1870_, v_sz_1920_, v___x_1921_, v___x_1919_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_);
if (lean_obj_tag(v___x_1922_) == 0)
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1931_; 
v_a_1923_ = lean_ctor_get(v___x_1922_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1922_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1925_ = v___x_1922_;
v_isShared_1926_ = v_isSharedCheck_1931_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v___x_1922_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1931_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1927_; lean_object* v___x_1929_; 
v___x_1927_ = l_Lean_mkAppN(v___x_1913_, v_a_1923_);
lean_dec(v_a_1923_);
if (v_isShared_1926_ == 0)
{
lean_ctor_set(v___x_1925_, 0, v___x_1927_);
v___x_1929_ = v___x_1925_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v___x_1927_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
else
{
lean_object* v_a_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1939_; 
lean_dec_ref(v___x_1913_);
v_a_1932_ = lean_ctor_get(v___x_1922_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1922_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1934_ = v___x_1922_;
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_a_1932_);
lean_dec(v___x_1922_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1937_; 
if (v_isShared_1935_ == 0)
{
v___x_1937_ = v___x_1934_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v_a_1932_);
v___x_1937_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
return v___x_1937_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1905_);
lean_dec_ref(v_args_1901_);
lean_dec(v___x_1895_);
lean_dec_ref(v_F_1870_);
lean_dec(v_fixedPrefixSize_1869_);
lean_dec(v_recFnName_1868_);
return v___x_1911_;
}
}
else
{
lean_dec_ref(v___x_1905_);
lean_dec_ref(v_args_1901_);
lean_dec(v___x_1895_);
lean_dec_ref(v_F_1870_);
lean_dec(v_fixedPrefixSize_1869_);
lean_dec(v_recFnName_1868_);
return v___x_1908_;
}
}
else
{
lean_dec_ref(v___x_1905_);
lean_dec_ref(v_args_1901_);
lean_dec(v___x_1895_);
lean_dec_ref(v_F_1870_);
lean_dec(v_fixedPrefixSize_1869_);
lean_dec(v_recFnName_1868_);
return v___x_1906_;
}
}
else
{
lean_dec_ref(v_args_1901_);
lean_dec(v___x_1895_);
lean_dec_ref(v_F_1870_);
lean_dec(v_fixedPrefixSize_1869_);
lean_dec(v_recFnName_1868_);
return v___x_1903_;
}
}
else
{
lean_object* v_toCold_1943_; lean_object* v_options_1944_; uint8_t v_hasTrace_1945_; 
lean_dec(v___x_1895_);
lean_dec(v___x_1893_);
v_toCold_1943_ = lean_ctor_get(v_a_1878_, 0);
v_options_1944_ = lean_ctor_get(v_toCold_1943_, 2);
v_hasTrace_1945_ = lean_ctor_get_uint8(v_options_1944_, sizeof(void*)*1);
if (v_hasTrace_1945_ == 0)
{
v___y_1882_ = v_a_1872_;
v___y_1883_ = v_a_1873_;
v___y_1884_ = v_a_1874_;
v___y_1885_ = v_a_1875_;
v___y_1886_ = v_a_1876_;
v___y_1887_ = v_a_1877_;
v___y_1888_ = v_a_1878_;
v___y_1889_ = v_a_1879_;
goto v___jp_1881_;
}
else
{
lean_object* v_inheritedTraceOptions_1946_; lean_object* v_cls_1947_; lean_object* v___x_1948_; uint8_t v___x_1949_; 
v_inheritedTraceOptions_1946_ = lean_ctor_get(v_toCold_1943_, 11);
v_cls_1947_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1));
v___x_1948_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4);
v___x_1949_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1946_, v_options_1944_, v___x_1948_);
if (v___x_1949_ == 0)
{
v___y_1882_ = v_a_1872_;
v___y_1883_ = v_a_1873_;
v___y_1884_ = v_a_1874_;
v___y_1885_ = v_a_1875_;
v___y_1886_ = v_a_1876_;
v___y_1887_ = v_a_1877_;
v___y_1888_ = v_a_1878_;
v___y_1889_ = v_a_1879_;
goto v___jp_1881_;
}
else
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1950_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6);
lean_inc_ref(v_e_1871_);
v___x_1951_ = l_Lean_indentExpr(v_e_1871_);
v___x_1952_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1950_);
lean_ctor_set(v___x_1952_, 1, v___x_1951_);
v___x_1953_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(v_cls_1947_, v___x_1952_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_);
if (lean_obj_tag(v___x_1953_) == 0)
{
lean_dec_ref_known(v___x_1953_, 1);
v___y_1882_ = v_a_1872_;
v___y_1883_ = v_a_1873_;
v___y_1884_ = v_a_1874_;
v___y_1885_ = v_a_1875_;
v___y_1886_ = v_a_1876_;
v___y_1887_ = v_a_1877_;
v___y_1888_ = v_a_1878_;
v___y_1889_ = v_a_1879_;
goto v___jp_1881_;
}
else
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_dec_ref(v_e_1871_);
lean_dec_ref(v_F_1870_);
lean_dec(v_fixedPrefixSize_1869_);
lean_dec(v_recFnName_1868_);
v_a_1954_ = lean_ctor_get(v___x_1953_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1953_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1953_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1953_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
}
}
v___jp_1881_:
{
lean_object* v___x_1890_; 
v___x_1890_ = l_Lean_Meta_etaExpand(v_e_1871_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_);
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v_a_1891_; lean_object* v___x_1892_; 
v_a_1891_ = lean_ctor_get(v___x_1890_, 0);
lean_inc(v_a_1891_);
lean_dec_ref_known(v___x_1890_, 1);
v___x_1892_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1868_, v_fixedPrefixSize_1869_, v_F_1870_, v_a_1891_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_);
return v___x_1892_;
}
else
{
lean_dec_ref(v_F_1870_);
lean_dec(v_fixedPrefixSize_1869_);
lean_dec(v_recFnName_1868_);
return v___x_1890_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(lean_object* v_recFnName_1962_, lean_object* v_fixedPrefixSize_1963_, lean_object* v_F_1964_, lean_object* v_x_1965_, lean_object* v_x_1966_, lean_object* v_x_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_){
_start:
{
if (lean_obj_tag(v_x_1965_) == 5)
{
lean_object* v_fn_1977_; lean_object* v_arg_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; 
v_fn_1977_ = lean_ctor_get(v_x_1965_, 0);
lean_inc_ref(v_fn_1977_);
v_arg_1978_ = lean_ctor_get(v_x_1965_, 1);
lean_inc_ref(v_arg_1978_);
lean_dec_ref_known(v_x_1965_, 2);
v___x_1979_ = lean_array_set(v_x_1966_, v_x_1967_, v_arg_1978_);
v___x_1980_ = lean_unsigned_to_nat(1u);
v___x_1981_ = lean_nat_sub(v_x_1967_, v___x_1980_);
lean_dec(v_x_1967_);
v_x_1965_ = v_fn_1977_;
v_x_1966_ = v___x_1979_;
v_x_1967_ = v___x_1981_;
goto _start;
}
else
{
lean_object* v___x_1983_; 
lean_dec(v_x_1967_);
lean_inc_ref(v_F_1964_);
lean_inc(v_fixedPrefixSize_1963_);
lean_inc(v_recFnName_1962_);
v___x_1983_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1962_, v_fixedPrefixSize_1963_, v_F_1964_, v_x_1965_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_object* v_a_1984_; size_t v_sz_1985_; size_t v___x_1986_; lean_object* v___x_1987_; 
v_a_1984_ = lean_ctor_get(v___x_1983_, 0);
lean_inc(v_a_1984_);
lean_dec_ref_known(v___x_1983_, 1);
v_sz_1985_ = lean_array_size(v_x_1966_);
v___x_1986_ = ((size_t)0ULL);
v___x_1987_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(v_recFnName_1962_, v_fixedPrefixSize_1963_, v_F_1964_, v_sz_1985_, v___x_1986_, v_x_1966_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_);
if (lean_obj_tag(v___x_1987_) == 0)
{
lean_object* v_a_1988_; lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_1996_; 
v_a_1988_ = lean_ctor_get(v___x_1987_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1987_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1990_ = v___x_1987_;
v_isShared_1991_ = v_isSharedCheck_1996_;
goto v_resetjp_1989_;
}
else
{
lean_inc(v_a_1988_);
lean_dec(v___x_1987_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_1996_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
lean_object* v___x_1992_; lean_object* v___x_1994_; 
v___x_1992_ = l_Lean_mkAppN(v_a_1984_, v_a_1988_);
lean_dec(v_a_1988_);
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 0, v___x_1992_);
v___x_1994_ = v___x_1990_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v___x_1992_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
return v___x_1994_;
}
}
}
else
{
lean_object* v_a_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2004_; 
lean_dec(v_a_1984_);
v_a_1997_ = lean_ctor_get(v___x_1987_, 0);
v_isSharedCheck_2004_ = !lean_is_exclusive(v___x_1987_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1999_ = v___x_1987_;
v_isShared_2000_ = v_isSharedCheck_2004_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_a_1997_);
lean_dec(v___x_1987_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2004_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
lean_object* v___x_2002_; 
if (v_isShared_2000_ == 0)
{
v___x_2002_ = v___x_1999_;
goto v_reusejp_2001_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v_a_1997_);
v___x_2002_ = v_reuseFailAlloc_2003_;
goto v_reusejp_2001_;
}
v_reusejp_2001_:
{
return v___x_2002_;
}
}
}
}
else
{
lean_dec_ref(v_x_1966_);
lean_dec_ref(v_F_1964_);
lean_dec(v_fixedPrefixSize_1963_);
lean_dec(v_recFnName_1962_);
return v___x_1983_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(lean_object* v_recFnName_2005_, lean_object* v_fixedPrefixSize_2006_, lean_object* v_F_2007_, lean_object* v_e_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_){
_start:
{
uint8_t v___x_2018_; 
v___x_2018_ = l_Lean_Expr_isAppOf(v_e_2008_, v_recFnName_2005_);
if (v___x_2018_ == 0)
{
lean_object* v_dummy_2019_; lean_object* v_nargs_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; 
v_dummy_2019_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
v_nargs_2020_ = l_Lean_Expr_getAppNumArgs(v_e_2008_);
lean_inc(v_nargs_2020_);
v___x_2021_ = lean_mk_array(v_nargs_2020_, v_dummy_2019_);
v___x_2022_ = lean_unsigned_to_nat(1u);
v___x_2023_ = lean_nat_sub(v_nargs_2020_, v___x_2022_);
lean_dec(v_nargs_2020_);
v___x_2024_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(v_recFnName_2005_, v_fixedPrefixSize_2006_, v_F_2007_, v_e_2008_, v___x_2021_, v___x_2023_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_);
return v___x_2024_;
}
else
{
lean_object* v___x_2025_; 
v___x_2025_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(v_recFnName_2005_, v_fixedPrefixSize_2006_, v_F_2007_, v_e_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_);
return v___x_2025_;
}
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2027_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0));
v___x_2028_ = l_Lean_stringToMessageData(v___x_2027_);
return v___x_2028_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2030_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2));
v___x_2031_ = l_Lean_stringToMessageData(v___x_2030_);
return v___x_2031_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0(lean_object* v___x_2032_, lean_object* v_b_2033_, lean_object* v_recFnName_2034_, lean_object* v_fixedPrefixSize_2035_, uint8_t v___x_2036_, lean_object* v___x_2037_, lean_object* v_a_2038_, lean_object* v_e_2039_, lean_object* v_xs_2040_, lean_object* v_altBody_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_){
_start:
{
lean_object* v___x_2058_; uint8_t v___x_2059_; 
v___x_2058_ = lean_array_get_size(v_xs_2040_);
v___x_2059_ = lean_nat_dec_eq(v___x_2058_, v___x_2037_);
if (v___x_2059_ == 0)
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v_a_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2075_; 
lean_dec_ref(v_altBody_2041_);
lean_dec(v_fixedPrefixSize_2035_);
lean_dec(v_recFnName_2034_);
v___x_2060_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1);
v___x_2061_ = l_Lean_indentExpr(v_a_2038_);
v___x_2062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2060_);
lean_ctor_set(v___x_2062_, 1, v___x_2061_);
v___x_2063_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3);
v___x_2064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2062_);
lean_ctor_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = l_Lean_indentExpr(v_e_2039_);
v___x_2066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2064_);
lean_ctor_set(v___x_2066_, 1, v___x_2065_);
v___x_2067_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v___x_2066_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
v_a_2068_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2075_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2070_ = v___x_2067_;
v_isShared_2071_ = v_isSharedCheck_2075_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_a_2068_);
lean_dec(v___x_2067_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2075_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v___x_2073_; 
if (v_isShared_2071_ == 0)
{
v___x_2073_ = v___x_2070_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_a_2068_);
v___x_2073_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
return v___x_2073_;
}
}
}
else
{
lean_dec_ref(v_e_2039_);
lean_dec_ref(v_a_2038_);
goto v___jp_2051_;
}
v___jp_2051_:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2052_ = lean_array_get_borrowed(v___x_2032_, v_xs_2040_, v_b_2033_);
lean_inc(v___x_2052_);
v___x_2053_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2034_, v_fixedPrefixSize_2035_, v___x_2052_, v_altBody_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
if (lean_obj_tag(v___x_2053_) == 0)
{
lean_object* v_a_2054_; uint8_t v___x_2055_; uint8_t v___x_2056_; lean_object* v___x_2057_; 
v_a_2054_ = lean_ctor_get(v___x_2053_, 0);
lean_inc(v_a_2054_);
lean_dec_ref_known(v___x_2053_, 1);
v___x_2055_ = 0;
v___x_2056_ = 1;
v___x_2057_ = l_Lean_Meta_mkLambdaFVars(v_xs_2040_, v_a_2054_, v___x_2055_, v___x_2036_, v___x_2055_, v___x_2036_, v___x_2056_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
return v___x_2057_;
}
else
{
return v___x_2053_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___boxed(lean_object** _args){
lean_object* v___x_2076_ = _args[0];
lean_object* v_b_2077_ = _args[1];
lean_object* v_recFnName_2078_ = _args[2];
lean_object* v_fixedPrefixSize_2079_ = _args[3];
lean_object* v___x_2080_ = _args[4];
lean_object* v___x_2081_ = _args[5];
lean_object* v_a_2082_ = _args[6];
lean_object* v_e_2083_ = _args[7];
lean_object* v_xs_2084_ = _args[8];
lean_object* v_altBody_2085_ = _args[9];
lean_object* v___y_2086_ = _args[10];
lean_object* v___y_2087_ = _args[11];
lean_object* v___y_2088_ = _args[12];
lean_object* v___y_2089_ = _args[13];
lean_object* v___y_2090_ = _args[14];
lean_object* v___y_2091_ = _args[15];
lean_object* v___y_2092_ = _args[16];
lean_object* v___y_2093_ = _args[17];
lean_object* v___y_2094_ = _args[18];
_start:
{
uint8_t v___x_59336__boxed_2095_; lean_object* v_res_2096_; 
v___x_59336__boxed_2095_ = lean_unbox(v___x_2080_);
v_res_2096_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0(v___x_2076_, v_b_2077_, v_recFnName_2078_, v_fixedPrefixSize_2079_, v___x_59336__boxed_2095_, v___x_2081_, v_a_2082_, v_e_2083_, v_xs_2084_, v_altBody_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_);
lean_dec(v___y_2093_);
lean_dec_ref(v___y_2092_);
lean_dec(v___y_2091_);
lean_dec_ref(v___y_2090_);
lean_dec(v___y_2089_);
lean_dec_ref(v___y_2088_);
lean_dec(v___y_2087_);
lean_dec(v___y_2086_);
lean_dec_ref(v_xs_2084_);
lean_dec(v___x_2081_);
lean_dec(v_b_2077_);
lean_dec_ref(v___x_2076_);
return v_res_2096_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(lean_object* v_recFnName_2097_, lean_object* v_fixedPrefixSize_2098_, lean_object* v_e_2099_, lean_object* v_as_2100_, lean_object* v_bs_2101_, lean_object* v_i_2102_, lean_object* v_cs_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_){
_start:
{
lean_object* v___x_2113_; uint8_t v___x_2114_; 
v___x_2113_ = lean_array_get_size(v_as_2100_);
v___x_2114_ = lean_nat_dec_lt(v_i_2102_, v___x_2113_);
if (v___x_2114_ == 0)
{
lean_object* v___x_2115_; 
lean_dec(v_i_2102_);
lean_dec_ref(v_e_2099_);
lean_dec(v_fixedPrefixSize_2098_);
lean_dec(v_recFnName_2097_);
v___x_2115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2115_, 0, v_cs_2103_);
return v___x_2115_;
}
else
{
lean_object* v___x_2116_; uint8_t v___x_2117_; 
v___x_2116_ = lean_array_get_size(v_bs_2101_);
v___x_2117_ = lean_nat_dec_lt(v_i_2102_, v___x_2116_);
if (v___x_2117_ == 0)
{
lean_object* v___x_2118_; 
lean_dec(v_i_2102_);
lean_dec_ref(v_e_2099_);
lean_dec(v_fixedPrefixSize_2098_);
lean_dec(v_recFnName_2097_);
v___x_2118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2118_, 0, v_cs_2103_);
return v___x_2118_;
}
else
{
lean_object* v___x_2119_; lean_object* v_a_2120_; lean_object* v_b_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___f_2125_; uint8_t v___x_2126_; lean_object* v___x_2127_; 
v___x_2119_ = l_Lean_instInhabitedExpr;
v_a_2120_ = lean_array_fget_borrowed(v_as_2100_, v_i_2102_);
v_b_2121_ = lean_array_fget_borrowed(v_bs_2101_, v_i_2102_);
v___x_2122_ = lean_unsigned_to_nat(1u);
v___x_2123_ = lean_nat_add(v_b_2121_, v___x_2122_);
v___x_2124_ = lean_box(v___x_2117_);
lean_inc_ref(v_e_2099_);
lean_inc_n(v_a_2120_, 2);
lean_inc(v___x_2123_);
lean_inc(v_fixedPrefixSize_2098_);
lean_inc(v_recFnName_2097_);
lean_inc(v_b_2121_);
v___f_2125_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___boxed), 19, 8);
lean_closure_set(v___f_2125_, 0, v___x_2119_);
lean_closure_set(v___f_2125_, 1, v_b_2121_);
lean_closure_set(v___f_2125_, 2, v_recFnName_2097_);
lean_closure_set(v___f_2125_, 3, v_fixedPrefixSize_2098_);
lean_closure_set(v___f_2125_, 4, v___x_2124_);
lean_closure_set(v___f_2125_, 5, v___x_2123_);
lean_closure_set(v___f_2125_, 6, v_a_2120_);
lean_closure_set(v___f_2125_, 7, v_e_2099_);
v___x_2126_ = 0;
v___x_2127_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(v_a_2120_, v___x_2123_, v___f_2125_, v___x_2126_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_);
if (lean_obj_tag(v___x_2127_) == 0)
{
lean_object* v_a_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v_a_2128_ = lean_ctor_get(v___x_2127_, 0);
lean_inc(v_a_2128_);
lean_dec_ref_known(v___x_2127_, 1);
v___x_2129_ = lean_nat_add(v_i_2102_, v___x_2122_);
lean_dec(v_i_2102_);
v___x_2130_ = lean_array_push(v_cs_2103_, v_a_2128_);
v_i_2102_ = v___x_2129_;
v_cs_2103_ = v___x_2130_;
goto _start;
}
else
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
lean_dec_ref(v_cs_2103_);
lean_dec(v_i_2102_);
lean_dec_ref(v_e_2099_);
lean_dec(v_fixedPrefixSize_2098_);
lean_dec(v_recFnName_2097_);
v_a_2132_ = lean_ctor_get(v___x_2127_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2127_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2134_ = v___x_2127_;
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2127_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_a_2132_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(lean_object* v_recFnName_2140_, lean_object* v_fixedPrefixSize_2141_, lean_object* v_F_2142_, lean_object* v_e_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_, lean_object* v_a_2151_){
_start:
{
switch(lean_obj_tag(v_e_2143_))
{
case 6:
{
lean_object* v_binderName_2153_; lean_object* v_binderType_2154_; lean_object* v_body_2155_; uint8_t v_binderInfo_2156_; lean_object* v___f_2157_; lean_object* v___x_2158_; 
v_binderName_2153_ = lean_ctor_get(v_e_2143_, 0);
lean_inc(v_binderName_2153_);
v_binderType_2154_ = lean_ctor_get(v_e_2143_, 1);
lean_inc_ref(v_binderType_2154_);
v_body_2155_ = lean_ctor_get(v_e_2143_, 2);
lean_inc_ref(v_body_2155_);
v_binderInfo_2156_ = lean_ctor_get_uint8(v_e_2143_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2143_, 3);
lean_inc_ref(v_F_2142_);
lean_inc(v_fixedPrefixSize_2141_);
lean_inc(v_recFnName_2140_);
v___f_2157_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed), 14, 4);
lean_closure_set(v___f_2157_, 0, v_body_2155_);
lean_closure_set(v___f_2157_, 1, v_recFnName_2140_);
lean_closure_set(v___f_2157_, 2, v_fixedPrefixSize_2141_);
lean_closure_set(v___f_2157_, 3, v_F_2142_);
v___x_2158_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2140_, v_fixedPrefixSize_2141_, v_F_2142_, v_binderType_2154_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; uint8_t v___x_2160_; lean_object* v___x_2161_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
lean_inc(v_a_2159_);
lean_dec_ref_known(v___x_2158_, 1);
v___x_2160_ = 0;
v___x_2161_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_binderName_2153_, v_binderInfo_2156_, v_a_2159_, v___f_2157_, v___x_2160_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
return v___x_2161_;
}
else
{
lean_dec_ref(v___f_2157_);
lean_dec(v_binderName_2153_);
return v___x_2158_;
}
}
case 7:
{
lean_object* v_binderName_2162_; lean_object* v_binderType_2163_; lean_object* v_body_2164_; uint8_t v_binderInfo_2165_; lean_object* v___f_2166_; lean_object* v___x_2167_; 
v_binderName_2162_ = lean_ctor_get(v_e_2143_, 0);
lean_inc(v_binderName_2162_);
v_binderType_2163_ = lean_ctor_get(v_e_2143_, 1);
lean_inc_ref(v_binderType_2163_);
v_body_2164_ = lean_ctor_get(v_e_2143_, 2);
lean_inc_ref(v_body_2164_);
v_binderInfo_2165_ = lean_ctor_get_uint8(v_e_2143_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2143_, 3);
lean_inc_ref(v_F_2142_);
lean_inc(v_fixedPrefixSize_2141_);
lean_inc(v_recFnName_2140_);
v___f_2166_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed), 14, 4);
lean_closure_set(v___f_2166_, 0, v_body_2164_);
lean_closure_set(v___f_2166_, 1, v_recFnName_2140_);
lean_closure_set(v___f_2166_, 2, v_fixedPrefixSize_2141_);
lean_closure_set(v___f_2166_, 3, v_F_2142_);
v___x_2167_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2140_, v_fixedPrefixSize_2141_, v_F_2142_, v_binderType_2163_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
if (lean_obj_tag(v___x_2167_) == 0)
{
lean_object* v_a_2168_; uint8_t v___x_2169_; lean_object* v___x_2170_; 
v_a_2168_ = lean_ctor_get(v___x_2167_, 0);
lean_inc(v_a_2168_);
lean_dec_ref_known(v___x_2167_, 1);
v___x_2169_ = 0;
v___x_2170_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_binderName_2162_, v_binderInfo_2165_, v_a_2168_, v___f_2166_, v___x_2169_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
return v___x_2170_;
}
else
{
lean_dec_ref(v___f_2166_);
lean_dec(v_binderName_2162_);
return v___x_2167_;
}
}
case 8:
{
lean_object* v_declName_2171_; lean_object* v_type_2172_; lean_object* v_value_2173_; lean_object* v_body_2174_; uint8_t v_nondep_2175_; lean_object* v___f_2176_; lean_object* v___x_2177_; 
v_declName_2171_ = lean_ctor_get(v_e_2143_, 0);
lean_inc(v_declName_2171_);
v_type_2172_ = lean_ctor_get(v_e_2143_, 1);
lean_inc_ref(v_type_2172_);
v_value_2173_ = lean_ctor_get(v_e_2143_, 2);
lean_inc_ref(v_value_2173_);
v_body_2174_ = lean_ctor_get(v_e_2143_, 3);
lean_inc_ref(v_body_2174_);
v_nondep_2175_ = lean_ctor_get_uint8(v_e_2143_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2143_, 4);
lean_inc_ref_n(v_F_2142_, 2);
lean_inc_n(v_fixedPrefixSize_2141_, 2);
lean_inc_n(v_recFnName_2140_, 2);
v___f_2176_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed), 14, 4);
lean_closure_set(v___f_2176_, 0, v_body_2174_);
lean_closure_set(v___f_2176_, 1, v_recFnName_2140_);
lean_closure_set(v___f_2176_, 2, v_fixedPrefixSize_2141_);
lean_closure_set(v___f_2176_, 3, v_F_2142_);
v___x_2177_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2140_, v_fixedPrefixSize_2141_, v_F_2142_, v_type_2172_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
if (lean_obj_tag(v___x_2177_) == 0)
{
lean_object* v_a_2178_; lean_object* v___x_2179_; 
v_a_2178_ = lean_ctor_get(v___x_2177_, 0);
lean_inc(v_a_2178_);
lean_dec_ref_known(v___x_2177_, 1);
v___x_2179_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2140_, v_fixedPrefixSize_2141_, v_F_2142_, v_value_2173_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
if (lean_obj_tag(v___x_2179_) == 0)
{
lean_object* v_a_2180_; uint8_t v___x_2181_; uint8_t v___x_2182_; lean_object* v___x_2183_; 
v_a_2180_ = lean_ctor_get(v___x_2179_, 0);
lean_inc(v_a_2180_);
lean_dec_ref_known(v___x_2179_, 1);
v___x_2181_ = 0;
v___x_2182_ = 0;
v___x_2183_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(v_declName_2171_, v_a_2178_, v_a_2180_, v___f_2176_, v_nondep_2175_, v___x_2181_, v___x_2182_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
return v___x_2183_;
}
else
{
lean_dec(v_a_2178_);
lean_dec_ref(v___f_2176_);
lean_dec(v_declName_2171_);
return v___x_2179_;
}
}
else
{
lean_dec_ref(v___f_2176_);
lean_dec_ref(v_value_2173_);
lean_dec(v_declName_2171_);
lean_dec_ref(v_F_2142_);
lean_dec(v_fixedPrefixSize_2141_);
lean_dec(v_recFnName_2140_);
return v___x_2177_;
}
}
case 10:
{
lean_object* v_data_2184_; lean_object* v_expr_2185_; lean_object* v___x_2186_; 
v_data_2184_ = lean_ctor_get(v_e_2143_, 0);
lean_inc(v_data_2184_);
v_expr_2185_ = lean_ctor_get(v_e_2143_, 1);
lean_inc_ref(v_expr_2185_);
v___x_2186_ = l_Lean_getRecAppSyntax_x3f(v_e_2143_);
lean_dec_ref_known(v_e_2143_, 2);
if (lean_obj_tag(v___x_2186_) == 1)
{
lean_object* v_val_2187_; lean_object* v_toCold_2188_; lean_object* v_currRecDepth_2189_; lean_object* v_ref_2190_; uint16_t v_optionFlags_2191_; uint8_t v_suppressElabErrors_2192_; uint8_t v_checkDeprecated_2193_; uint8_t v_isRecordingDeps_2194_; lean_object* v_ref_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
lean_dec(v_data_2184_);
v_val_2187_ = lean_ctor_get(v___x_2186_, 0);
lean_inc(v_val_2187_);
lean_dec_ref_known(v___x_2186_, 1);
v_toCold_2188_ = lean_ctor_get(v_a_2150_, 0);
v_currRecDepth_2189_ = lean_ctor_get(v_a_2150_, 1);
v_ref_2190_ = lean_ctor_get(v_a_2150_, 2);
v_optionFlags_2191_ = lean_ctor_get_uint16(v_a_2150_, sizeof(void*)*3);
v_suppressElabErrors_2192_ = lean_ctor_get_uint8(v_a_2150_, sizeof(void*)*3 + 2);
v_checkDeprecated_2193_ = lean_ctor_get_uint8(v_a_2150_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2194_ = lean_ctor_get_uint8(v_a_2150_, sizeof(void*)*3 + 4);
v_ref_2195_ = l_Lean_replaceRef(v_val_2187_, v_ref_2190_);
lean_dec(v_val_2187_);
lean_inc(v_currRecDepth_2189_);
lean_inc_ref(v_toCold_2188_);
v___x_2196_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2196_, 0, v_toCold_2188_);
lean_ctor_set(v___x_2196_, 1, v_currRecDepth_2189_);
lean_ctor_set(v___x_2196_, 2, v_ref_2195_);
lean_ctor_set_uint16(v___x_2196_, sizeof(void*)*3, v_optionFlags_2191_);
lean_ctor_set_uint8(v___x_2196_, sizeof(void*)*3 + 2, v_suppressElabErrors_2192_);
lean_ctor_set_uint8(v___x_2196_, sizeof(void*)*3 + 3, v_checkDeprecated_2193_);
lean_ctor_set_uint8(v___x_2196_, sizeof(void*)*3 + 4, v_isRecordingDeps_2194_);
v___x_2197_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2140_, v_fixedPrefixSize_2141_, v_F_2142_, v_expr_2185_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v___x_2196_, v_a_2151_);
lean_dec_ref_known(v___x_2196_, 3);
return v___x_2197_;
}
else
{
lean_object* v___x_2198_; 
lean_dec(v___x_2186_);
v___x_2198_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2140_, v_fixedPrefixSize_2141_, v_F_2142_, v_expr_2185_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
if (lean_obj_tag(v___x_2198_) == 0)
{
lean_object* v_a_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2207_; 
v_a_2199_ = lean_ctor_get(v___x_2198_, 0);
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2198_);
if (v_isSharedCheck_2207_ == 0)
{
v___x_2201_ = v___x_2198_;
v_isShared_2202_ = v_isSharedCheck_2207_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_a_2199_);
lean_dec(v___x_2198_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2207_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v___x_2203_; lean_object* v___x_2205_; 
v___x_2203_ = l_Lean_mkMData(v_data_2184_, v_a_2199_);
if (v_isShared_2202_ == 0)
{
lean_ctor_set(v___x_2201_, 0, v___x_2203_);
v___x_2205_ = v___x_2201_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v___x_2203_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
}
else
{
lean_dec(v_data_2184_);
return v___x_2198_;
}
}
}
case 11:
{
lean_object* v_typeName_2208_; lean_object* v_idx_2209_; lean_object* v_struct_2210_; lean_object* v___x_2211_; 
v_typeName_2208_ = lean_ctor_get(v_e_2143_, 0);
lean_inc(v_typeName_2208_);
v_idx_2209_ = lean_ctor_get(v_e_2143_, 1);
lean_inc(v_idx_2209_);
v_struct_2210_ = lean_ctor_get(v_e_2143_, 2);
lean_inc_ref(v_struct_2210_);
lean_dec_ref_known(v_e_2143_, 3);
v___x_2211_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2140_, v_fixedPrefixSize_2141_, v_F_2142_, v_struct_2210_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
if (lean_obj_tag(v___x_2211_) == 0)
{
lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2220_; 
v_a_2212_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2214_ = v___x_2211_;
v_isShared_2215_ = v_isSharedCheck_2220_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_dec(v___x_2211_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2220_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2216_; lean_object* v___x_2218_; 
v___x_2216_ = l_Lean_mkProj(v_typeName_2208_, v_idx_2209_, v_a_2212_);
if (v_isShared_2215_ == 0)
{
lean_ctor_set(v___x_2214_, 0, v___x_2216_);
v___x_2218_ = v___x_2214_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v___x_2216_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
else
{
lean_dec(v_idx_2209_);
lean_dec(v_typeName_2208_);
return v___x_2211_;
}
}
case 4:
{
uint8_t v___x_2221_; 
v___x_2221_ = l_Lean_Expr_isConstOf(v_e_2143_, v_recFnName_2140_);
if (v___x_2221_ == 0)
{
lean_object* v___x_2222_; 
lean_dec_ref(v_F_2142_);
lean_dec(v_fixedPrefixSize_2141_);
lean_dec(v_recFnName_2140_);
v___x_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2222_, 0, v_e_2143_);
return v___x_2222_;
}
else
{
lean_object* v___x_2223_; 
v___x_2223_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(v_recFnName_2140_, v_fixedPrefixSize_2141_, v_F_2142_, v_e_2143_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
return v___x_2223_;
}
}
case 5:
{
uint8_t v___x_2224_; lean_object* v___x_2225_; 
v___x_2224_ = 1;
lean_inc_ref(v_e_2143_);
v___x_2225_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(v_e_2143_, v___x_2224_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
if (lean_obj_tag(v___x_2225_) == 0)
{
lean_object* v_a_2226_; 
v_a_2226_ = lean_ctor_get(v___x_2225_, 0);
lean_inc(v_a_2226_);
lean_dec_ref_known(v___x_2225_, 1);
if (lean_obj_tag(v_a_2226_) == 0)
{
lean_object* v___x_2227_; 
v___x_2227_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(v_recFnName_2140_, v_fixedPrefixSize_2141_, v_F_2142_, v_e_2143_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
return v___x_2227_;
}
else
{
lean_object* v_val_2228_; lean_object* v___x_2229_; 
v_val_2228_ = lean_ctor_get(v_a_2226_, 0);
lean_inc(v_val_2228_);
lean_dec_ref_known(v_a_2226_, 1);
lean_inc_ref(v_F_2142_);
v___x_2229_ = l_Lean_Meta_MatcherApp_addArg_x3f(v_val_2228_, v_F_2142_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
if (lean_obj_tag(v___x_2229_) == 0)
{
lean_object* v_a_2230_; 
v_a_2230_ = lean_ctor_get(v___x_2229_, 0);
lean_inc(v_a_2230_);
lean_dec_ref_known(v___x_2229_, 1);
if (lean_obj_tag(v_a_2230_) == 1)
{
lean_object* v_val_2231_; lean_object* v_toMatcherInfo_2232_; lean_object* v_matcherName_2233_; lean_object* v_matcherLevels_2234_; lean_object* v_params_2235_; lean_object* v_motive_2236_; lean_object* v_discrs_2237_; lean_object* v_alts_2238_; lean_object* v_remaining_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v_val_2231_ = lean_ctor_get(v_a_2230_, 0);
lean_inc(v_val_2231_);
lean_dec_ref_known(v_a_2230_, 1);
v_toMatcherInfo_2232_ = lean_ctor_get(v_val_2231_, 0);
lean_inc_ref(v_toMatcherInfo_2232_);
v_matcherName_2233_ = lean_ctor_get(v_val_2231_, 1);
lean_inc(v_matcherName_2233_);
v_matcherLevels_2234_ = lean_ctor_get(v_val_2231_, 2);
lean_inc_ref(v_matcherLevels_2234_);
v_params_2235_ = lean_ctor_get(v_val_2231_, 3);
lean_inc_ref(v_params_2235_);
v_motive_2236_ = lean_ctor_get(v_val_2231_, 4);
lean_inc_ref(v_motive_2236_);
v_discrs_2237_ = lean_ctor_get(v_val_2231_, 5);
lean_inc_ref(v_discrs_2237_);
v_alts_2238_ = lean_ctor_get(v_val_2231_, 6);
lean_inc_ref(v_alts_2238_);
v_remaining_2239_ = lean_ctor_get(v_val_2231_, 7);
lean_inc_ref(v_remaining_2239_);
v___x_2240_ = l_Lean_Meta_MatcherApp_altNumParams(v_val_2231_);
v___x_2241_ = lean_unsigned_to_nat(0u);
v___x_2242_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0));
lean_inc(v_fixedPrefixSize_2141_);
lean_inc(v_recFnName_2140_);
v___x_2243_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(v_recFnName_2140_, v_fixedPrefixSize_2141_, v_e_2143_, v_alts_2238_, v___x_2240_, v___x_2241_, v___x_2242_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
lean_dec_ref(v___x_2240_);
lean_dec_ref(v_alts_2238_);
if (lean_obj_tag(v___x_2243_) == 0)
{
lean_object* v_a_2244_; size_t v_sz_2245_; size_t v___x_2246_; lean_object* v___x_2247_; 
v_a_2244_ = lean_ctor_get(v___x_2243_, 0);
lean_inc(v_a_2244_);
lean_dec_ref_known(v___x_2243_, 1);
v_sz_2245_ = lean_array_size(v_discrs_2237_);
v___x_2246_ = ((size_t)0ULL);
v___x_2247_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(v_recFnName_2140_, v_fixedPrefixSize_2141_, v_F_2142_, v_sz_2245_, v___x_2246_, v_discrs_2237_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
if (lean_obj_tag(v___x_2247_) == 0)
{
lean_object* v_a_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2257_; 
v_a_2248_ = lean_ctor_get(v___x_2247_, 0);
v_isSharedCheck_2257_ = !lean_is_exclusive(v___x_2247_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2250_ = v___x_2247_;
v_isShared_2251_ = v_isSharedCheck_2257_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_a_2248_);
lean_dec(v___x_2247_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2257_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2255_; 
v___x_2252_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2252_, 0, v_toMatcherInfo_2232_);
lean_ctor_set(v___x_2252_, 1, v_matcherName_2233_);
lean_ctor_set(v___x_2252_, 2, v_matcherLevels_2234_);
lean_ctor_set(v___x_2252_, 3, v_params_2235_);
lean_ctor_set(v___x_2252_, 4, v_motive_2236_);
lean_ctor_set(v___x_2252_, 5, v_a_2248_);
lean_ctor_set(v___x_2252_, 6, v_a_2244_);
lean_ctor_set(v___x_2252_, 7, v_remaining_2239_);
v___x_2253_ = l_Lean_Meta_MatcherApp_toExpr(v___x_2252_);
if (v_isShared_2251_ == 0)
{
lean_ctor_set(v___x_2250_, 0, v___x_2253_);
v___x_2255_ = v___x_2250_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v___x_2253_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
return v___x_2255_;
}
}
}
else
{
lean_object* v_a_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2265_; 
lean_dec(v_a_2244_);
lean_dec_ref(v_remaining_2239_);
lean_dec_ref(v_motive_2236_);
lean_dec_ref(v_params_2235_);
lean_dec_ref(v_matcherLevels_2234_);
lean_dec(v_matcherName_2233_);
lean_dec_ref(v_toMatcherInfo_2232_);
v_a_2258_ = lean_ctor_get(v___x_2247_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v___x_2247_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2260_ = v___x_2247_;
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_a_2258_);
lean_dec(v___x_2247_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2263_; 
if (v_isShared_2261_ == 0)
{
v___x_2263_ = v___x_2260_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_a_2258_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
return v___x_2263_;
}
}
}
}
else
{
lean_object* v_a_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2273_; 
lean_dec_ref(v_remaining_2239_);
lean_dec_ref(v_discrs_2237_);
lean_dec_ref(v_motive_2236_);
lean_dec_ref(v_params_2235_);
lean_dec_ref(v_matcherLevels_2234_);
lean_dec(v_matcherName_2233_);
lean_dec_ref(v_toMatcherInfo_2232_);
lean_dec_ref(v_F_2142_);
lean_dec(v_fixedPrefixSize_2141_);
lean_dec(v_recFnName_2140_);
v_a_2266_ = lean_ctor_get(v___x_2243_, 0);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2243_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2268_ = v___x_2243_;
v_isShared_2269_ = v_isSharedCheck_2273_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_a_2266_);
lean_dec(v___x_2243_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2273_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2271_; 
if (v_isShared_2269_ == 0)
{
v___x_2271_ = v___x_2268_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v_a_2266_);
v___x_2271_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
return v___x_2271_;
}
}
}
}
else
{
lean_object* v___x_2274_; 
lean_dec(v_a_2230_);
v___x_2274_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(v_recFnName_2140_, v_fixedPrefixSize_2141_, v_F_2142_, v_e_2143_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
return v___x_2274_;
}
}
else
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2282_; 
lean_dec_ref_known(v_e_2143_, 2);
lean_dec_ref(v_F_2142_);
lean_dec(v_fixedPrefixSize_2141_);
lean_dec(v_recFnName_2140_);
v_a_2275_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2277_ = v___x_2229_;
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___x_2229_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2280_; 
if (v_isShared_2278_ == 0)
{
v___x_2280_ = v___x_2277_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_a_2275_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
}
}
}
}
}
else
{
lean_object* v_a_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2290_; 
lean_dec_ref_known(v_e_2143_, 2);
lean_dec_ref(v_F_2142_);
lean_dec(v_fixedPrefixSize_2141_);
lean_dec(v_recFnName_2140_);
v_a_2283_ = lean_ctor_get(v___x_2225_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___x_2225_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2285_ = v___x_2225_;
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_a_2283_);
lean_dec(v___x_2225_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2288_; 
if (v_isShared_2286_ == 0)
{
v___x_2288_ = v___x_2285_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_a_2283_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
}
}
default: 
{
lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; 
lean_dec_ref(v_F_2142_);
lean_dec(v_fixedPrefixSize_2141_);
v___x_2291_ = lean_unsigned_to_nat(1u);
v___x_2292_ = lean_mk_empty_array_with_capacity(v___x_2291_);
v___x_2293_ = lean_array_push(v___x_2292_, v_recFnName_2140_);
lean_inc_ref(v_e_2143_);
v___x_2294_ = l_Lean_Elab_ensureNoRecFn(v___x_2293_, v_e_2143_, v_a_2148_, v_a_2149_, v_a_2150_, v_a_2151_);
if (lean_obj_tag(v___x_2294_) == 0)
{
lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2301_; 
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2301_ == 0)
{
lean_object* v_unused_2302_; 
v_unused_2302_ = lean_ctor_get(v___x_2294_, 0);
lean_dec(v_unused_2302_);
v___x_2296_ = v___x_2294_;
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
else
{
lean_dec(v___x_2294_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v___x_2299_; 
if (v_isShared_2297_ == 0)
{
lean_ctor_set(v___x_2296_, 0, v_e_2143_);
v___x_2299_ = v___x_2296_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v_e_2143_);
v___x_2299_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
return v___x_2299_;
}
}
}
else
{
lean_object* v_a_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2310_; 
lean_dec_ref(v_e_2143_);
v_a_2303_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2305_ = v___x_2294_;
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_a_2303_);
lean_dec(v___x_2294_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2308_; 
if (v_isShared_2306_ == 0)
{
v___x_2308_ = v___x_2305_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_a_2303_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(lean_object* v_recFnName_2311_, lean_object* v_fixedPrefixSize_2312_, lean_object* v_F_2313_, lean_object* v_e_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_){
_start:
{
lean_object* v___y_2325_; lean_object* v___y_2326_; lean_object* v___x_2343_; 
lean_inc_ref(v_e_2314_);
lean_inc(v_recFnName_2311_);
v___x_2343_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(v_recFnName_2311_, v_e_2314_, v_a_2315_);
if (lean_obj_tag(v___x_2343_) == 0)
{
lean_object* v_a_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2431_; 
v_a_2344_ = lean_ctor_get(v___x_2343_, 0);
v_isSharedCheck_2431_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2431_ == 0)
{
v___x_2346_ = v___x_2343_;
v_isShared_2347_ = v_isSharedCheck_2431_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_a_2344_);
lean_dec(v___x_2343_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2431_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
uint8_t v___x_2348_; 
v___x_2348_ = lean_unbox(v_a_2344_);
lean_dec(v_a_2344_);
if (v___x_2348_ == 0)
{
lean_object* v___x_2350_; 
lean_dec_ref(v_F_2313_);
lean_dec(v_fixedPrefixSize_2312_);
lean_dec(v_recFnName_2311_);
if (v_isShared_2347_ == 0)
{
lean_ctor_set(v___x_2346_, 0, v_e_2314_);
v___x_2350_ = v___x_2346_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v_e_2314_);
v___x_2350_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
return v___x_2350_;
}
}
else
{
uint8_t v___x_2352_; lean_object* v___y_2354_; lean_object* v___y_2355_; lean_object* v___y_2356_; lean_object* v___y_2357_; lean_object* v___y_2358_; lean_object* v___y_2359_; lean_object* v___y_2360_; lean_object* v___y_2361_; lean_object* v___x_2408_; lean_object* v___x_2409_; 
lean_del_object(v___x_2346_);
v___x_2352_ = 0;
v___x_2408_ = lean_st_ref_get(v_a_2316_);
v___x_2409_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(v___x_2408_, v_e_2314_);
lean_dec(v___x_2408_);
if (lean_obj_tag(v___x_2409_) == 1)
{
lean_object* v_val_2410_; lean_object* v_fst_2411_; lean_object* v_snd_2412_; lean_object* v___x_2413_; 
v_val_2410_ = lean_ctor_get(v___x_2409_, 0);
lean_inc(v_val_2410_);
lean_dec_ref_known(v___x_2409_, 1);
v_fst_2411_ = lean_ctor_get(v_val_2410_, 0);
lean_inc(v_fst_2411_);
v_snd_2412_ = lean_ctor_get(v_val_2410_, 1);
lean_inc(v_snd_2412_);
lean_dec(v_val_2410_);
v___x_2413_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(v_snd_2412_, v_a_2319_);
lean_dec(v_snd_2412_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2422_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2416_ = v___x_2413_;
v_isShared_2417_ = v_isSharedCheck_2422_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2413_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2422_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
uint8_t v___x_2418_; 
v___x_2418_ = lean_unbox(v_a_2414_);
lean_dec(v_a_2414_);
if (v___x_2418_ == 0)
{
lean_del_object(v___x_2416_);
lean_dec(v_fst_2411_);
v___y_2354_ = v_a_2315_;
v___y_2355_ = v_a_2316_;
v___y_2356_ = v_a_2317_;
v___y_2357_ = v_a_2318_;
v___y_2358_ = v_a_2319_;
v___y_2359_ = v_a_2320_;
v___y_2360_ = v_a_2321_;
v___y_2361_ = v_a_2322_;
goto v___jp_2353_;
}
else
{
lean_object* v___x_2420_; 
lean_dec_ref(v_e_2314_);
lean_dec_ref(v_F_2313_);
lean_dec(v_fixedPrefixSize_2312_);
lean_dec(v_recFnName_2311_);
if (v_isShared_2417_ == 0)
{
lean_ctor_set(v___x_2416_, 0, v_fst_2411_);
v___x_2420_ = v___x_2416_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_fst_2411_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
}
else
{
lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2430_; 
lean_dec(v_fst_2411_);
lean_dec_ref(v_e_2314_);
lean_dec_ref(v_F_2313_);
lean_dec(v_fixedPrefixSize_2312_);
lean_dec(v_recFnName_2311_);
v_a_2423_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2425_ = v___x_2413_;
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2413_);
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
lean_dec(v___x_2409_);
v___y_2354_ = v_a_2315_;
v___y_2355_ = v_a_2316_;
v___y_2356_ = v_a_2317_;
v___y_2357_ = v_a_2318_;
v___y_2358_ = v_a_2319_;
v___y_2359_ = v_a_2320_;
v___y_2360_ = v_a_2321_;
v___y_2361_ = v_a_2322_;
goto v___jp_2353_;
}
v___jp_2353_:
{
lean_object* v___x_2362_; 
lean_inc_ref(v_e_2314_);
v___x_2362_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(v_recFnName_2311_, v_fixedPrefixSize_2312_, v_F_2313_, v_e_2314_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
if (lean_obj_tag(v___x_2362_) == 0)
{
lean_object* v_a_2363_; lean_object* v___f_2364_; lean_object* v___x_2365_; 
v_a_2363_ = lean_ctor_get(v___x_2362_, 0);
lean_inc_n(v_a_2363_, 2);
lean_dec_ref_known(v___x_2362_, 1);
lean_inc_ref(v_e_2314_);
v___f_2364_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed), 11, 2);
lean_closure_set(v___f_2364_, 0, v_e_2314_);
lean_closure_set(v___f_2364_, 1, v_a_2363_);
v___x_2365_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
if (lean_obj_tag(v___x_2365_) == 0)
{
lean_object* v_a_2366_; lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2399_; 
v_a_2366_ = lean_ctor_get(v___x_2365_, 0);
v_isSharedCheck_2399_ = !lean_is_exclusive(v___x_2365_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2368_ = v___x_2365_;
v_isShared_2369_ = v_isSharedCheck_2399_;
goto v_resetjp_2367_;
}
else
{
lean_inc(v_a_2366_);
lean_dec(v___x_2365_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2399_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; uint8_t v___x_2376_; 
v___x_2370_ = lean_st_ref_take(v___y_2355_);
lean_inc(v_a_2363_);
v___x_2371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2371_, 0, v_a_2363_);
lean_ctor_set(v___x_2371_, 1, v_a_2366_);
v___x_2372_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(v___x_2370_, v_e_2314_, v___x_2371_);
v___x_2373_ = lean_st_ref_put(v___y_2355_, v___x_2372_);
v___x_2374_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2360_);
v___x_2375_ = l_Lean_Elab_WF_debug_definition_wf_replaceRecApps;
v___x_2376_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(v___x_2374_, v___x_2375_);
lean_dec_ref(v___x_2374_);
if (v___x_2376_ == 0)
{
lean_object* v___x_2378_; 
lean_dec_ref(v___f_2364_);
if (v_isShared_2369_ == 0)
{
lean_ctor_set(v___x_2368_, 0, v_a_2363_);
v___x_2378_ = v___x_2368_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v_a_2363_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
else
{
lean_object* v___x_2380_; uint8_t v_transparency_2381_; uint8_t v___x_2382_; uint8_t v___x_2383_; 
lean_del_object(v___x_2368_);
v___x_2380_ = l_Lean_Meta_Context_config(v___y_2358_);
v_transparency_2381_ = lean_ctor_get_uint8(v___x_2380_, 9);
lean_dec_ref(v___x_2380_);
v___x_2382_ = 0;
v___x_2383_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2381_, v___x_2382_);
if (v___x_2383_ == 0)
{
lean_object* v_keyedConfig_2384_; uint8_t v_trackZetaDelta_2385_; lean_object* v_zetaDeltaSet_2386_; lean_object* v_lctx_2387_; lean_object* v_localInstances_2388_; lean_object* v_defEqCtx_x3f_2389_; lean_object* v_synthPendingDepth_2390_; lean_object* v_customCanUnfoldPredicate_x3f_2391_; uint8_t v_univApprox_2392_; uint8_t v_inTypeClassResolution_2393_; uint8_t v_cacheInferType_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v_keyedConfig_2384_ = lean_ctor_get(v___y_2358_, 0);
v_trackZetaDelta_2385_ = lean_ctor_get_uint8(v___y_2358_, sizeof(void*)*7);
v_zetaDeltaSet_2386_ = lean_ctor_get(v___y_2358_, 1);
v_lctx_2387_ = lean_ctor_get(v___y_2358_, 2);
v_localInstances_2388_ = lean_ctor_get(v___y_2358_, 3);
v_defEqCtx_x3f_2389_ = lean_ctor_get(v___y_2358_, 4);
v_synthPendingDepth_2390_ = lean_ctor_get(v___y_2358_, 5);
v_customCanUnfoldPredicate_x3f_2391_ = lean_ctor_get(v___y_2358_, 6);
v_univApprox_2392_ = lean_ctor_get_uint8(v___y_2358_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2393_ = lean_ctor_get_uint8(v___y_2358_, sizeof(void*)*7 + 2);
v_cacheInferType_2394_ = lean_ctor_get_uint8(v___y_2358_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2384_);
v___x_2395_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2382_, v_keyedConfig_2384_);
lean_inc(v_customCanUnfoldPredicate_x3f_2391_);
lean_inc(v_synthPendingDepth_2390_);
lean_inc(v_defEqCtx_x3f_2389_);
lean_inc_ref(v_localInstances_2388_);
lean_inc_ref(v_lctx_2387_);
lean_inc(v_zetaDeltaSet_2386_);
v___x_2396_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2396_, 0, v___x_2395_);
lean_ctor_set(v___x_2396_, 1, v_zetaDeltaSet_2386_);
lean_ctor_set(v___x_2396_, 2, v_lctx_2387_);
lean_ctor_set(v___x_2396_, 3, v_localInstances_2388_);
lean_ctor_set(v___x_2396_, 4, v_defEqCtx_x3f_2389_);
lean_ctor_set(v___x_2396_, 5, v_synthPendingDepth_2390_);
lean_ctor_set(v___x_2396_, 6, v_customCanUnfoldPredicate_x3f_2391_);
lean_ctor_set_uint8(v___x_2396_, sizeof(void*)*7, v_trackZetaDelta_2385_);
lean_ctor_set_uint8(v___x_2396_, sizeof(void*)*7 + 1, v_univApprox_2392_);
lean_ctor_set_uint8(v___x_2396_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2393_);
lean_ctor_set_uint8(v___x_2396_, sizeof(void*)*7 + 3, v_cacheInferType_2394_);
v___x_2397_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v___f_2364_, v___x_2352_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___x_2396_, v___y_2359_, v___y_2360_, v___y_2361_);
lean_dec_ref_known(v___x_2396_, 7);
v___y_2325_ = v_a_2363_;
v___y_2326_ = v___x_2397_;
goto v___jp_2324_;
}
else
{
lean_object* v___x_2398_; 
v___x_2398_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v___f_2364_, v___x_2352_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
v___y_2325_ = v_a_2363_;
v___y_2326_ = v___x_2398_;
goto v___jp_2324_;
}
}
}
}
else
{
lean_object* v_a_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2407_; 
lean_dec_ref(v___f_2364_);
lean_dec(v_a_2363_);
lean_dec_ref(v_e_2314_);
v_a_2400_ = lean_ctor_get(v___x_2365_, 0);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2365_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2402_ = v___x_2365_;
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_a_2400_);
lean_dec(v___x_2365_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2405_; 
if (v_isShared_2403_ == 0)
{
v___x_2405_ = v___x_2402_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_a_2400_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
}
}
else
{
lean_dec_ref(v_e_2314_);
return v___x_2362_;
}
}
}
}
}
else
{
lean_object* v_a_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2439_; 
lean_dec_ref(v_e_2314_);
lean_dec_ref(v_F_2313_);
lean_dec(v_fixedPrefixSize_2312_);
lean_dec(v_recFnName_2311_);
v_a_2432_ = lean_ctor_get(v___x_2343_, 0);
v_isSharedCheck_2439_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2434_ = v___x_2343_;
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
else
{
lean_inc(v_a_2432_);
lean_dec(v___x_2343_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v___x_2437_; 
if (v_isShared_2435_ == 0)
{
v___x_2437_ = v___x_2434_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_a_2432_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
}
v___jp_2324_:
{
if (lean_obj_tag(v___y_2326_) == 0)
{
lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2333_; 
v_isSharedCheck_2333_ = !lean_is_exclusive(v___y_2326_);
if (v_isSharedCheck_2333_ == 0)
{
lean_object* v_unused_2334_; 
v_unused_2334_ = lean_ctor_get(v___y_2326_, 0);
lean_dec(v_unused_2334_);
v___x_2328_ = v___y_2326_;
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
else
{
lean_dec(v___y_2326_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2331_; 
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 0, v___y_2325_);
v___x_2331_ = v___x_2328_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v___y_2325_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
else
{
lean_object* v_a_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2342_; 
lean_dec_ref(v___y_2325_);
v_a_2335_ = lean_ctor_get(v___y_2326_, 0);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___y_2326_);
if (v_isSharedCheck_2342_ == 0)
{
v___x_2337_ = v___y_2326_;
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_a_2335_);
lean_dec(v___y_2326_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v___x_2340_; 
if (v_isShared_2338_ == 0)
{
v___x_2340_ = v___x_2337_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v_a_2335_);
v___x_2340_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
return v___x_2340_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(lean_object* v_body_2440_, lean_object* v_recFnName_2441_, lean_object* v_fixedPrefixSize_2442_, lean_object* v_F_2443_, lean_object* v_x_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_){
_start:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2454_ = lean_expr_instantiate1(v_body_2440_, v_x_2444_);
v___x_2455_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2441_, v_fixedPrefixSize_2442_, v_F_2443_, v___x_2454_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp___boxed(lean_object* v_recFnName_2456_, lean_object* v_fixedPrefixSize_2457_, lean_object* v_F_2458_, lean_object* v_e_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_){
_start:
{
lean_object* v_res_2469_; 
v_res_2469_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(v_recFnName_2456_, v_fixedPrefixSize_2457_, v_F_2458_, v_e_2459_, v_a_2460_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_);
lean_dec(v_a_2467_);
lean_dec_ref(v_a_2466_);
lean_dec(v_a_2465_);
lean_dec_ref(v_a_2464_);
lean_dec(v_a_2463_);
lean_dec_ref(v_a_2462_);
lean_dec(v_a_2461_);
lean_dec(v_a_2460_);
return v_res_2469_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___boxed(lean_object* v_recFnName_2470_, lean_object* v_fixedPrefixSize_2471_, lean_object* v_F_2472_, lean_object* v_sz_2473_, lean_object* v_i_2474_, lean_object* v_bs_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_){
_start:
{
size_t v_sz_boxed_2485_; size_t v_i_boxed_2486_; lean_object* v_res_2487_; 
v_sz_boxed_2485_ = lean_unbox_usize(v_sz_2473_);
lean_dec(v_sz_2473_);
v_i_boxed_2486_ = lean_unbox_usize(v_i_2474_);
lean_dec(v_i_2474_);
v_res_2487_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(v_recFnName_2470_, v_fixedPrefixSize_2471_, v_F_2472_, v_sz_boxed_2485_, v_i_boxed_2486_, v_bs_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_);
lean_dec(v___y_2483_);
lean_dec_ref(v___y_2482_);
lean_dec(v___y_2481_);
lean_dec_ref(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec(v___y_2476_);
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16___boxed(lean_object* v_recFnName_2488_, lean_object* v_fixedPrefixSize_2489_, lean_object* v_F_2490_, lean_object* v_x_2491_, lean_object* v_x_2492_, lean_object* v_x_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(v_recFnName_2488_, v_fixedPrefixSize_2489_, v_F_2490_, v_x_2491_, v_x_2492_, v_x_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
lean_dec(v___y_2499_);
lean_dec_ref(v___y_2498_);
lean_dec(v___y_2497_);
lean_dec_ref(v___y_2496_);
lean_dec(v___y_2495_);
lean_dec(v___y_2494_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___boxed(lean_object* v_recFnName_2504_, lean_object* v_fixedPrefixSize_2505_, lean_object* v_e_2506_, lean_object* v_as_2507_, lean_object* v_bs_2508_, lean_object* v_i_2509_, lean_object* v_cs_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_){
_start:
{
lean_object* v_res_2520_; 
v_res_2520_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(v_recFnName_2504_, v_fixedPrefixSize_2505_, v_e_2506_, v_as_2507_, v_bs_2508_, v_i_2509_, v_cs_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_);
lean_dec(v___y_2518_);
lean_dec_ref(v___y_2517_);
lean_dec(v___y_2516_);
lean_dec_ref(v___y_2515_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
lean_dec(v___y_2512_);
lean_dec(v___y_2511_);
lean_dec_ref(v_bs_2508_);
lean_dec_ref(v_as_2507_);
return v_res_2520_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___boxed(lean_object* v_recFnName_2521_, lean_object* v_fixedPrefixSize_2522_, lean_object* v_F_2523_, lean_object* v_e_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_){
_start:
{
lean_object* v_res_2534_; 
v_res_2534_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2521_, v_fixedPrefixSize_2522_, v_F_2523_, v_e_2524_, v_a_2525_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_);
lean_dec(v_a_2532_);
lean_dec_ref(v_a_2531_);
lean_dec(v_a_2530_);
lean_dec_ref(v_a_2529_);
lean_dec(v_a_2528_);
lean_dec_ref(v_a_2527_);
lean_dec(v_a_2526_);
lean_dec(v_a_2525_);
return v_res_2534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___boxed(lean_object* v_recFnName_2535_, lean_object* v_fixedPrefixSize_2536_, lean_object* v_F_2537_, lean_object* v_e_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_){
_start:
{
lean_object* v_res_2548_; 
v_res_2548_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(v_recFnName_2535_, v_fixedPrefixSize_2536_, v_F_2537_, v_e_2538_, v_a_2539_, v_a_2540_, v_a_2541_, v_a_2542_, v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_);
lean_dec(v_a_2546_);
lean_dec_ref(v_a_2545_);
lean_dec(v_a_2544_);
lean_dec_ref(v_a_2543_);
lean_dec(v_a_2542_);
lean_dec_ref(v_a_2541_);
lean_dec(v_a_2540_);
lean_dec(v_a_2539_);
return v_res_2548_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___boxed(lean_object* v_recFnName_2549_, lean_object* v_fixedPrefixSize_2550_, lean_object* v_F_2551_, lean_object* v_e_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_, lean_object* v_a_2560_, lean_object* v_a_2561_){
_start:
{
lean_object* v_res_2562_; 
v_res_2562_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(v_recFnName_2549_, v_fixedPrefixSize_2550_, v_F_2551_, v_e_2552_, v_a_2553_, v_a_2554_, v_a_2555_, v_a_2556_, v_a_2557_, v_a_2558_, v_a_2559_, v_a_2560_);
lean_dec(v_a_2560_);
lean_dec_ref(v_a_2559_);
lean_dec(v_a_2558_);
lean_dec_ref(v_a_2557_);
lean_dec(v_a_2556_);
lean_dec_ref(v_a_2555_);
lean_dec(v_a_2554_);
lean_dec(v_a_2553_);
return v_res_2562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7(lean_object* v_00_u03b1_2563_, lean_object* v_k_2564_, uint8_t v_allowLevelAssignments_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_){
_start:
{
lean_object* v___x_2575_; 
v___x_2575_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v_k_2564_, v_allowLevelAssignments_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___boxed(lean_object* v_00_u03b1_2576_, lean_object* v_k_2577_, lean_object* v_allowLevelAssignments_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2588_; lean_object* v_res_2589_; 
v_allowLevelAssignments_boxed_2588_ = lean_unbox(v_allowLevelAssignments_2578_);
v_res_2589_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7(v_00_u03b1_2576_, v_k_2577_, v_allowLevelAssignments_boxed_2588_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_);
lean_dec(v___y_2586_);
lean_dec_ref(v___y_2585_);
lean_dec(v___y_2584_);
lean_dec_ref(v___y_2583_);
lean_dec(v___y_2582_);
lean_dec_ref(v___y_2581_);
lean_dec(v___y_2580_);
lean_dec(v___y_2579_);
return v_res_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10(lean_object* v_00_u03b1_2590_, lean_object* v_name_2591_, uint8_t v_bi_2592_, lean_object* v_type_2593_, lean_object* v_k_2594_, uint8_t v_kind_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v___x_2605_; 
v___x_2605_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_name_2591_, v_bi_2592_, v_type_2593_, v_k_2594_, v_kind_2595_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_);
return v___x_2605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___boxed(lean_object* v_00_u03b1_2606_, lean_object* v_name_2607_, lean_object* v_bi_2608_, lean_object* v_type_2609_, lean_object* v_k_2610_, lean_object* v_kind_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_){
_start:
{
uint8_t v_bi_boxed_2621_; uint8_t v_kind_boxed_2622_; lean_object* v_res_2623_; 
v_bi_boxed_2621_ = lean_unbox(v_bi_2608_);
v_kind_boxed_2622_ = lean_unbox(v_kind_2611_);
v_res_2623_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10(v_00_u03b1_2606_, v_name_2607_, v_bi_boxed_2621_, v_type_2609_, v_k_2610_, v_kind_boxed_2622_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_);
lean_dec(v___y_2619_);
lean_dec_ref(v___y_2618_);
lean_dec(v___y_2617_);
lean_dec_ref(v___y_2616_);
lean_dec(v___y_2615_);
lean_dec_ref(v___y_2614_);
lean_dec(v___y_2613_);
lean_dec(v___y_2612_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12(lean_object* v_00_u03b1_2624_, lean_object* v_e_2625_, lean_object* v_maxFVars_2626_, lean_object* v_k_2627_, uint8_t v_cleanupAnnotations_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_){
_start:
{
lean_object* v___x_2638_; 
v___x_2638_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(v_e_2625_, v_maxFVars_2626_, v_k_2627_, v_cleanupAnnotations_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_);
return v___x_2638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___boxed(lean_object* v_00_u03b1_2639_, lean_object* v_e_2640_, lean_object* v_maxFVars_2641_, lean_object* v_k_2642_, lean_object* v_cleanupAnnotations_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2653_; lean_object* v_res_2654_; 
v_cleanupAnnotations_boxed_2653_ = lean_unbox(v_cleanupAnnotations_2643_);
v_res_2654_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12(v_00_u03b1_2639_, v_e_2640_, v_maxFVars_2641_, v_k_2642_, v_cleanupAnnotations_boxed_2653_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_);
lean_dec(v___y_2651_);
lean_dec_ref(v___y_2650_);
lean_dec(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec(v___y_2647_);
lean_dec_ref(v___y_2646_);
lean_dec(v___y_2645_);
lean_dec(v___y_2644_);
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(lean_object* v_inst_2655_, lean_object* v_R_2656_, lean_object* v_a_2657_, lean_object* v_b_2658_){
_start:
{
lean_object* v___x_2659_; 
v___x_2659_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(v_a_2657_, v_b_2658_);
return v___x_2659_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(lean_object* v_cls_2660_, lean_object* v_msg_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_){
_start:
{
lean_object* v___x_2671_; 
v___x_2671_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(v_cls_2660_, v_msg_2661_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_);
return v___x_2671_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___boxed(lean_object* v_cls_2672_, lean_object* v_msg_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_){
_start:
{
lean_object* v_res_2683_; 
v_res_2683_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(v_cls_2672_, v_msg_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_, v___y_2680_, v___y_2681_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec(v___y_2679_);
lean_dec_ref(v___y_2678_);
lean_dec(v___y_2677_);
lean_dec_ref(v___y_2676_);
lean_dec(v___y_2675_);
lean_dec(v___y_2674_);
return v_res_2683_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4(lean_object* v_00_u03b2_2684_, lean_object* v_m_2685_, lean_object* v_a_2686_, lean_object* v_b_2687_){
_start:
{
lean_object* v___x_2688_; 
v___x_2688_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(v_m_2685_, v_a_2686_, v_b_2687_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6(lean_object* v_00_u03b1_2689_, lean_object* v_msg_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_){
_start:
{
lean_object* v___x_2700_; 
v___x_2700_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v_msg_2690_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
return v___x_2700_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___boxed(lean_object* v_00_u03b1_2701_, lean_object* v_msg_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_){
_start:
{
lean_object* v_res_2712_; 
v_res_2712_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6(v_00_u03b1_2701_, v_msg_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_);
lean_dec(v___y_2710_);
lean_dec_ref(v___y_2709_);
lean_dec(v___y_2708_);
lean_dec_ref(v___y_2707_);
lean_dec(v___y_2706_);
lean_dec_ref(v___y_2705_);
lean_dec(v___y_2704_);
lean_dec(v___y_2703_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8(lean_object* v_00_u03b2_2713_, lean_object* v_m_2714_, lean_object* v_a_2715_){
_start:
{
lean_object* v___x_2716_; 
v___x_2716_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(v_m_2714_, v_a_2715_);
return v___x_2716_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___boxed(lean_object* v_00_u03b2_2717_, lean_object* v_m_2718_, lean_object* v_a_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8(v_00_u03b2_2717_, v_m_2718_, v_a_2719_);
lean_dec_ref(v_a_2719_);
lean_dec_ref(v_m_2718_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15(lean_object* v_00_u03b1_2721_, lean_object* v_name_2722_, lean_object* v_type_2723_, lean_object* v_val_2724_, lean_object* v_k_2725_, uint8_t v_nondep_2726_, uint8_t v_kind_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_){
_start:
{
lean_object* v___x_2737_; 
v___x_2737_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(v_name_2722_, v_type_2723_, v_val_2724_, v_k_2725_, v_nondep_2726_, v_kind_2727_, v___y_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_, v___y_2735_);
return v___x_2737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___boxed(lean_object* v_00_u03b1_2738_, lean_object* v_name_2739_, lean_object* v_type_2740_, lean_object* v_val_2741_, lean_object* v_k_2742_, lean_object* v_nondep_2743_, lean_object* v_kind_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_){
_start:
{
uint8_t v_nondep_boxed_2754_; uint8_t v_kind_boxed_2755_; lean_object* v_res_2756_; 
v_nondep_boxed_2754_ = lean_unbox(v_nondep_2743_);
v_kind_boxed_2755_ = lean_unbox(v_kind_2744_);
v_res_2756_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15(v_00_u03b1_2738_, v_name_2739_, v_type_2740_, v_val_2741_, v_k_2742_, v_nondep_boxed_2754_, v_kind_boxed_2755_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_);
lean_dec(v___y_2752_);
lean_dec_ref(v___y_2751_);
lean_dec(v___y_2750_);
lean_dec_ref(v___y_2749_);
lean_dec(v___y_2748_);
lean_dec_ref(v___y_2747_);
lean_dec(v___y_2746_);
lean_dec(v___y_2745_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20(lean_object* v_declName_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_){
_start:
{
lean_object* v___x_2767_; 
v___x_2767_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(v_declName_2757_, v___y_2765_);
return v___x_2767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___boxed(lean_object* v_declName_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_){
_start:
{
lean_object* v_res_2778_; 
v_res_2778_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20(v_declName_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_);
lean_dec(v___y_2776_);
lean_dec_ref(v___y_2775_);
lean_dec(v___y_2774_);
lean_dec_ref(v___y_2773_);
lean_dec(v___y_2772_);
lean_dec_ref(v___y_2771_);
lean_dec(v___y_2770_);
lean_dec(v___y_2769_);
return v_res_2778_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4(lean_object* v_00_u03b2_2779_, lean_object* v_a_2780_, lean_object* v_x_2781_){
_start:
{
uint8_t v___x_2782_; 
v___x_2782_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(v_a_2780_, v_x_2781_);
return v___x_2782_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object* v_00_u03b2_2783_, lean_object* v_a_2784_, lean_object* v_x_2785_){
_start:
{
uint8_t v_res_2786_; lean_object* v_r_2787_; 
v_res_2786_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4(v_00_u03b2_2783_, v_a_2784_, v_x_2785_);
lean_dec(v_x_2785_);
lean_dec_ref(v_a_2784_);
v_r_2787_ = lean_box(v_res_2786_);
return v_r_2787_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5(lean_object* v_00_u03b2_2788_, lean_object* v_data_2789_){
_start:
{
lean_object* v___x_2790_; 
v___x_2790_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(v_data_2789_);
return v___x_2790_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6(lean_object* v_00_u03b2_2791_, lean_object* v_a_2792_, lean_object* v_b_2793_, lean_object* v_x_2794_){
_start:
{
lean_object* v___x_2795_; 
v___x_2795_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(v_a_2792_, v_b_2793_, v_x_2794_);
return v___x_2795_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11(lean_object* v_00_u03b2_2796_, lean_object* v_a_2797_, lean_object* v_x_2798_){
_start:
{
lean_object* v___x_2799_; 
v___x_2799_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(v_a_2797_, v_x_2798_);
return v___x_2799_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___boxed(lean_object* v_00_u03b2_2800_, lean_object* v_a_2801_, lean_object* v_x_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11(v_00_u03b2_2800_, v_a_2801_, v_x_2802_);
lean_dec(v_x_2802_);
lean_dec_ref(v_a_2801_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12(lean_object* v_00_u03b2_2804_, lean_object* v_i_2805_, lean_object* v_source_2806_, lean_object* v_target_2807_){
_start:
{
lean_object* v___x_2808_; 
v___x_2808_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(v_i_2805_, v_source_2806_, v_target_2807_);
return v___x_2808_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21(lean_object* v_00_u03b1_2809_, lean_object* v_constName_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_){
_start:
{
lean_object* v___x_2820_; 
v___x_2820_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(v_constName_2810_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_);
return v___x_2820_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___boxed(lean_object* v_00_u03b1_2821_, lean_object* v_constName_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_){
_start:
{
lean_object* v_res_2832_; 
v_res_2832_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21(v_00_u03b1_2821_, v_constName_2822_, v___y_2823_, v___y_2824_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec(v___y_2828_);
lean_dec_ref(v___y_2827_);
lean_dec(v___y_2826_);
lean_dec_ref(v___y_2825_);
lean_dec(v___y_2824_);
lean_dec(v___y_2823_);
return v_res_2832_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22(lean_object* v_00_u03b2_2833_, lean_object* v_x_2834_, lean_object* v_x_2835_){
_start:
{
lean_object* v___x_2836_; 
v___x_2836_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(v_x_2834_, v_x_2835_);
return v___x_2836_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27(lean_object* v_00_u03b1_2837_, lean_object* v_ref_2838_, lean_object* v_constName_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_){
_start:
{
lean_object* v___x_2849_; 
v___x_2849_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(v_ref_2838_, v_constName_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
return v___x_2849_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___boxed(lean_object* v_00_u03b1_2850_, lean_object* v_ref_2851_, lean_object* v_constName_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_){
_start:
{
lean_object* v_res_2862_; 
v_res_2862_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27(v_00_u03b1_2850_, v_ref_2851_, v_constName_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec(v___y_2856_);
lean_dec_ref(v___y_2855_);
lean_dec(v___y_2854_);
lean_dec(v___y_2853_);
lean_dec(v_ref_2851_);
return v_res_2862_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29(lean_object* v_00_u03b1_2863_, lean_object* v_ref_2864_, lean_object* v_msg_2865_, lean_object* v_declHint_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_){
_start:
{
lean_object* v___x_2876_; 
v___x_2876_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(v_ref_2864_, v_msg_2865_, v_declHint_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_);
return v___x_2876_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___boxed(lean_object* v_00_u03b1_2877_, lean_object* v_ref_2878_, lean_object* v_msg_2879_, lean_object* v_declHint_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_){
_start:
{
lean_object* v_res_2890_; 
v_res_2890_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29(v_00_u03b1_2877_, v_ref_2878_, v_msg_2879_, v_declHint_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_);
lean_dec(v___y_2888_);
lean_dec_ref(v___y_2887_);
lean_dec(v___y_2886_);
lean_dec_ref(v___y_2885_);
lean_dec(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec(v___y_2882_);
lean_dec(v___y_2881_);
lean_dec(v_ref_2878_);
return v_res_2890_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31(lean_object* v_msg_2891_, lean_object* v_declHint_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_){
_start:
{
lean_object* v___x_2902_; 
v___x_2902_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(v_msg_2891_, v_declHint_2892_, v___y_2900_);
return v___x_2902_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___boxed(lean_object* v_msg_2903_, lean_object* v_declHint_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_){
_start:
{
lean_object* v_res_2914_; 
v_res_2914_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31(v_msg_2903_, v_declHint_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_);
lean_dec(v___y_2912_);
lean_dec_ref(v___y_2911_);
lean_dec(v___y_2910_);
lean_dec_ref(v___y_2909_);
lean_dec(v___y_2908_);
lean_dec_ref(v___y_2907_);
lean_dec(v___y_2906_);
lean_dec(v___y_2905_);
return v_res_2914_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31(lean_object* v_00_u03b1_2915_, lean_object* v_ref_2916_, lean_object* v_msg_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_){
_start:
{
lean_object* v___x_2927_; 
v___x_2927_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(v_ref_2916_, v_msg_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_);
return v___x_2927_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___boxed(lean_object* v_00_u03b1_2928_, lean_object* v_ref_2929_, lean_object* v_msg_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_){
_start:
{
lean_object* v_res_2940_; 
v_res_2940_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31(v_00_u03b1_2928_, v_ref_2929_, v_msg_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
lean_dec(v___y_2938_);
lean_dec_ref(v___y_2937_);
lean_dec(v___y_2936_);
lean_dec_ref(v___y_2935_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec(v___y_2932_);
lean_dec(v___y_2931_);
lean_dec(v_ref_2929_);
return v_res_2940_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(lean_object* v_cls_2941_, lean_object* v_msg_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_){
_start:
{
lean_object* v_ref_2948_; lean_object* v___x_2949_; lean_object* v_a_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2995_; 
v_ref_2948_ = lean_ctor_get(v___y_2945_, 2);
v___x_2949_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_);
v_a_2950_ = lean_ctor_get(v___x_2949_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2949_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2952_ = v___x_2949_;
v_isShared_2953_ = v_isSharedCheck_2995_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_a_2950_);
lean_dec(v___x_2949_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2995_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v___x_2954_; lean_object* v_traceState_2955_; lean_object* v_env_2956_; lean_object* v_nextMacroScope_2957_; lean_object* v_ngen_2958_; lean_object* v_auxDeclNGen_2959_; lean_object* v_cache_2960_; lean_object* v_recordedDeps_2961_; lean_object* v_messages_2962_; lean_object* v_infoState_2963_; lean_object* v_snapshotTasks_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2994_; 
v___x_2954_ = lean_st_ref_take(v___y_2946_);
v_traceState_2955_ = lean_ctor_get(v___x_2954_, 4);
v_env_2956_ = lean_ctor_get(v___x_2954_, 0);
v_nextMacroScope_2957_ = lean_ctor_get(v___x_2954_, 1);
v_ngen_2958_ = lean_ctor_get(v___x_2954_, 2);
v_auxDeclNGen_2959_ = lean_ctor_get(v___x_2954_, 3);
v_cache_2960_ = lean_ctor_get(v___x_2954_, 5);
v_recordedDeps_2961_ = lean_ctor_get(v___x_2954_, 6);
v_messages_2962_ = lean_ctor_get(v___x_2954_, 7);
v_infoState_2963_ = lean_ctor_get(v___x_2954_, 8);
v_snapshotTasks_2964_ = lean_ctor_get(v___x_2954_, 9);
v_isSharedCheck_2994_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_2994_ == 0)
{
v___x_2966_ = v___x_2954_;
v_isShared_2967_ = v_isSharedCheck_2994_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_snapshotTasks_2964_);
lean_inc(v_infoState_2963_);
lean_inc(v_messages_2962_);
lean_inc(v_recordedDeps_2961_);
lean_inc(v_cache_2960_);
lean_inc(v_traceState_2955_);
lean_inc(v_auxDeclNGen_2959_);
lean_inc(v_ngen_2958_);
lean_inc(v_nextMacroScope_2957_);
lean_inc(v_env_2956_);
lean_dec(v___x_2954_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2994_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
uint64_t v_tid_2968_; lean_object* v_traces_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2993_; 
v_tid_2968_ = lean_ctor_get_uint64(v_traceState_2955_, sizeof(void*)*1);
v_traces_2969_ = lean_ctor_get(v_traceState_2955_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v_traceState_2955_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2971_ = v_traceState_2955_;
v_isShared_2972_ = v_isSharedCheck_2993_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_traces_2969_);
lean_dec(v_traceState_2955_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2993_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; double v___x_2975_; uint8_t v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2984_; 
v___x_2973_ = lean_box(0);
v___x_2974_ = lean_box(0);
v___x_2975_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0);
v___x_2976_ = 0;
v___x_2977_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1));
v___x_2978_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2978_, 0, v_cls_2941_);
lean_ctor_set(v___x_2978_, 1, v___x_2974_);
lean_ctor_set(v___x_2978_, 2, v___x_2977_);
lean_ctor_set_float(v___x_2978_, sizeof(void*)*3, v___x_2975_);
lean_ctor_set_float(v___x_2978_, sizeof(void*)*3 + 8, v___x_2975_);
lean_ctor_set_uint8(v___x_2978_, sizeof(void*)*3 + 16, v___x_2976_);
v___x_2979_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2));
v___x_2980_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2978_);
lean_ctor_set(v___x_2980_, 1, v_a_2950_);
lean_ctor_set(v___x_2980_, 2, v___x_2979_);
lean_inc(v_ref_2948_);
v___x_2981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2981_, 0, v_ref_2948_);
lean_ctor_set(v___x_2981_, 1, v___x_2980_);
v___x_2982_ = l_Lean_PersistentArray_push___redArg(v_traces_2969_, v___x_2981_);
if (v_isShared_2972_ == 0)
{
lean_ctor_set(v___x_2971_, 0, v___x_2982_);
v___x_2984_ = v___x_2971_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v___x_2982_);
lean_ctor_set_uint64(v_reuseFailAlloc_2992_, sizeof(void*)*1, v_tid_2968_);
v___x_2984_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
lean_object* v___x_2986_; 
if (v_isShared_2967_ == 0)
{
lean_ctor_set(v___x_2966_, 4, v___x_2984_);
v___x_2986_ = v___x_2966_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v_env_2956_);
lean_ctor_set(v_reuseFailAlloc_2991_, 1, v_nextMacroScope_2957_);
lean_ctor_set(v_reuseFailAlloc_2991_, 2, v_ngen_2958_);
lean_ctor_set(v_reuseFailAlloc_2991_, 3, v_auxDeclNGen_2959_);
lean_ctor_set(v_reuseFailAlloc_2991_, 4, v___x_2984_);
lean_ctor_set(v_reuseFailAlloc_2991_, 5, v_cache_2960_);
lean_ctor_set(v_reuseFailAlloc_2991_, 6, v_recordedDeps_2961_);
lean_ctor_set(v_reuseFailAlloc_2991_, 7, v_messages_2962_);
lean_ctor_set(v_reuseFailAlloc_2991_, 8, v_infoState_2963_);
lean_ctor_set(v_reuseFailAlloc_2991_, 9, v_snapshotTasks_2964_);
v___x_2986_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
lean_object* v___x_2987_; lean_object* v___x_2989_; 
v___x_2987_ = lean_st_ref_put(v___y_2946_, v___x_2986_);
if (v_isShared_2953_ == 0)
{
lean_ctor_set(v___x_2952_, 0, v___x_2973_);
v___x_2989_ = v___x_2952_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v___x_2973_);
v___x_2989_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
return v___x_2989_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg___boxed(lean_object* v_cls_2996_, lean_object* v_msg_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_){
_start:
{
lean_object* v_res_3003_; 
v_res_3003_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_2996_, v_msg_2997_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_);
lean_dec(v___y_3001_);
lean_dec_ref(v___y_3000_);
lean_dec(v___y_2999_);
lean_dec_ref(v___y_2998_);
return v_res_3003_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0(void){
_start:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; 
v___x_3004_ = lean_box(0);
v___x_3005_ = lean_unsigned_to_nat(16u);
v___x_3006_ = lean_mk_array(v___x_3005_, v___x_3004_);
return v___x_3006_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1(void){
_start:
{
lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; 
v___x_3007_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0);
v___x_3008_ = lean_unsigned_to_nat(0u);
v___x_3009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3009_, 0, v___x_3008_);
lean_ctor_set(v___x_3009_, 1, v___x_3007_);
return v___x_3009_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3(void){
_start:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; 
v___x_3011_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2));
v___x_3012_ = l_Lean_stringToMessageData(v___x_3011_);
return v___x_3012_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5(void){
_start:
{
lean_object* v___x_3014_; lean_object* v___x_3015_; 
v___x_3014_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4));
v___x_3015_ = l_Lean_stringToMessageData(v___x_3014_);
return v___x_3015_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7(void){
_start:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; 
v___x_3017_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6));
v___x_3018_ = l_Lean_stringToMessageData(v___x_3017_);
return v___x_3018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps(lean_object* v_recFnName_3019_, lean_object* v_fixedPrefixSize_3020_, lean_object* v_F_3021_, lean_object* v_e_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_){
_start:
{
lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3036_; lean_object* v_toCold_3051_; lean_object* v_options_3052_; uint8_t v_hasTrace_3053_; 
v_toCold_3051_ = lean_ctor_get(v_a_3027_, 0);
v_options_3052_ = lean_ctor_get(v_toCold_3051_, 2);
v_hasTrace_3053_ = lean_ctor_get_uint8(v_options_3052_, sizeof(void*)*1);
if (v_hasTrace_3053_ == 0)
{
v___y_3031_ = v_a_3023_;
v___y_3032_ = v_a_3024_;
v___y_3033_ = v_a_3025_;
v___y_3034_ = v_a_3026_;
v___y_3035_ = v_a_3027_;
v___y_3036_ = v_a_3028_;
goto v___jp_3030_;
}
else
{
lean_object* v_inheritedTraceOptions_3054_; lean_object* v_cls_3055_; lean_object* v___y_3057_; lean_object* v___y_3058_; lean_object* v___y_3059_; lean_object* v___y_3060_; lean_object* v___y_3061_; lean_object* v_options_3062_; lean_object* v_inheritedTraceOptions_3063_; lean_object* v___y_3064_; lean_object* v___x_3085_; uint8_t v___x_3086_; 
v_inheritedTraceOptions_3054_ = lean_ctor_get(v_toCold_3051_, 11);
v_cls_3055_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1));
v___x_3085_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4);
v___x_3086_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3054_, v_options_3052_, v___x_3085_);
if (v___x_3086_ == 0)
{
v___y_3057_ = v_a_3023_;
v___y_3058_ = v_a_3024_;
v___y_3059_ = v_a_3025_;
v___y_3060_ = v_a_3026_;
v___y_3061_ = v_a_3027_;
v_options_3062_ = v_options_3052_;
v_inheritedTraceOptions_3063_ = v_inheritedTraceOptions_3054_;
v___y_3064_ = v_a_3028_;
goto v___jp_3056_;
}
else
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; 
v___x_3087_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7);
lean_inc_ref(v_e_3022_);
v___x_3088_ = l_Lean_indentExpr(v_e_3022_);
v___x_3089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3087_);
lean_ctor_set(v___x_3089_, 1, v___x_3088_);
v___x_3090_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3055_, v___x_3089_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_);
if (lean_obj_tag(v___x_3090_) == 0)
{
lean_dec_ref_known(v___x_3090_, 1);
v___y_3057_ = v_a_3023_;
v___y_3058_ = v_a_3024_;
v___y_3059_ = v_a_3025_;
v___y_3060_ = v_a_3026_;
v___y_3061_ = v_a_3027_;
v_options_3062_ = v_options_3052_;
v_inheritedTraceOptions_3063_ = v_inheritedTraceOptions_3054_;
v___y_3064_ = v_a_3028_;
goto v___jp_3056_;
}
else
{
lean_object* v_a_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3098_; 
lean_dec_ref(v_e_3022_);
lean_dec_ref(v_F_3021_);
lean_dec(v_fixedPrefixSize_3020_);
lean_dec(v_recFnName_3019_);
v_a_3091_ = lean_ctor_get(v___x_3090_, 0);
v_isSharedCheck_3098_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_3098_ == 0)
{
v___x_3093_ = v___x_3090_;
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_a_3091_);
lean_dec(v___x_3090_);
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
v___jp_3056_:
{
lean_object* v___x_3065_; uint8_t v___x_3066_; 
v___x_3065_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4);
v___x_3066_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3063_, v_options_3062_, v___x_3065_);
if (v___x_3066_ == 0)
{
v___y_3031_ = v___y_3057_;
v___y_3032_ = v___y_3058_;
v___y_3033_ = v___y_3059_;
v___y_3034_ = v___y_3060_;
v___y_3035_ = v___y_3061_;
v___y_3036_ = v___y_3064_;
goto v___jp_3030_;
}
else
{
lean_object* v___x_3067_; 
lean_inc(v___y_3064_);
lean_inc_ref(v___y_3061_);
lean_inc(v___y_3060_);
lean_inc_ref(v___y_3059_);
lean_inc_ref(v_F_3021_);
v___x_3067_ = lean_infer_type(v_F_3021_, v___y_3059_, v___y_3060_, v___y_3061_, v___y_3064_);
if (lean_obj_tag(v___x_3067_) == 0)
{
lean_object* v_a_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; 
v_a_3068_ = lean_ctor_get(v___x_3067_, 0);
lean_inc(v_a_3068_);
lean_dec_ref_known(v___x_3067_, 1);
v___x_3069_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3);
lean_inc_ref(v_F_3021_);
v___x_3070_ = l_Lean_MessageData_ofExpr(v_F_3021_);
v___x_3071_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3071_, 0, v___x_3069_);
lean_ctor_set(v___x_3071_, 1, v___x_3070_);
v___x_3072_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5);
v___x_3073_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3071_);
lean_ctor_set(v___x_3073_, 1, v___x_3072_);
v___x_3074_ = l_Lean_indentExpr(v_a_3068_);
v___x_3075_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3073_);
lean_ctor_set(v___x_3075_, 1, v___x_3074_);
v___x_3076_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3055_, v___x_3075_, v___y_3059_, v___y_3060_, v___y_3061_, v___y_3064_);
if (lean_obj_tag(v___x_3076_) == 0)
{
lean_dec_ref_known(v___x_3076_, 1);
v___y_3031_ = v___y_3057_;
v___y_3032_ = v___y_3058_;
v___y_3033_ = v___y_3059_;
v___y_3034_ = v___y_3060_;
v___y_3035_ = v___y_3061_;
v___y_3036_ = v___y_3064_;
goto v___jp_3030_;
}
else
{
lean_object* v_a_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3084_; 
lean_dec_ref(v_e_3022_);
lean_dec_ref(v_F_3021_);
lean_dec(v_fixedPrefixSize_3020_);
lean_dec(v_recFnName_3019_);
v_a_3077_ = lean_ctor_get(v___x_3076_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v___x_3076_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3079_ = v___x_3076_;
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_a_3077_);
lean_dec(v___x_3076_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v___x_3082_; 
if (v_isShared_3080_ == 0)
{
v___x_3082_ = v___x_3079_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_a_3077_);
v___x_3082_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
return v___x_3082_;
}
}
}
}
else
{
lean_dec_ref(v_e_3022_);
lean_dec_ref(v_F_3021_);
lean_dec(v_fixedPrefixSize_3020_);
lean_dec(v_recFnName_3019_);
return v___x_3067_;
}
}
}
}
v___jp_3030_:
{
lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; 
v___x_3037_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1);
v___x_3038_ = lean_st_mk_ref(v___x_3037_);
v___x_3039_ = lean_st_mk_ref(v___x_3037_);
v___x_3040_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_3019_, v_fixedPrefixSize_3020_, v_F_3021_, v_e_3022_, v___x_3039_, v___x_3038_, v___y_3031_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_);
if (lean_obj_tag(v___x_3040_) == 0)
{
lean_object* v_a_3041_; lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3050_; 
v_a_3041_ = lean_ctor_get(v___x_3040_, 0);
v_isSharedCheck_3050_ = !lean_is_exclusive(v___x_3040_);
if (v_isSharedCheck_3050_ == 0)
{
v___x_3043_ = v___x_3040_;
v_isShared_3044_ = v_isSharedCheck_3050_;
goto v_resetjp_3042_;
}
else
{
lean_inc(v_a_3041_);
lean_dec(v___x_3040_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3050_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3048_; 
v___x_3045_ = lean_st_ref_get(v___x_3039_);
lean_dec(v___x_3039_);
lean_dec(v___x_3045_);
v___x_3046_ = lean_st_ref_get(v___x_3038_);
lean_dec(v___x_3038_);
lean_dec(v___x_3046_);
if (v_isShared_3044_ == 0)
{
v___x_3048_ = v___x_3043_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v_a_3041_);
v___x_3048_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
return v___x_3048_;
}
}
}
else
{
lean_dec(v___x_3039_);
lean_dec(v___x_3038_);
return v___x_3040_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___boxed(lean_object* v_recFnName_3099_, lean_object* v_fixedPrefixSize_3100_, lean_object* v_F_3101_, lean_object* v_e_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_, lean_object* v_a_3107_, lean_object* v_a_3108_, lean_object* v_a_3109_){
_start:
{
lean_object* v_res_3110_; 
v_res_3110_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps(v_recFnName_3099_, v_fixedPrefixSize_3100_, v_F_3101_, v_e_3102_, v_a_3103_, v_a_3104_, v_a_3105_, v_a_3106_, v_a_3107_, v_a_3108_);
lean_dec(v_a_3108_);
lean_dec_ref(v_a_3107_);
lean_dec(v_a_3106_);
lean_dec_ref(v_a_3105_);
lean_dec(v_a_3104_);
lean_dec_ref(v_a_3103_);
return v_res_3110_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0(lean_object* v_cls_3111_, lean_object* v_msg_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_){
_start:
{
lean_object* v___x_3120_; 
v___x_3120_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3111_, v_msg_3112_, v___y_3115_, v___y_3116_, v___y_3117_, v___y_3118_);
return v___x_3120_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___boxed(lean_object* v_cls_3121_, lean_object* v_msg_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_){
_start:
{
lean_object* v_res_3130_; 
v_res_3130_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0(v_cls_3121_, v_msg_3122_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_);
lean_dec(v___y_3128_);
lean_dec_ref(v___y_3127_);
lean_dec(v___y_3126_);
lean_dec_ref(v___y_3125_);
lean_dec(v___y_3124_);
lean_dec_ref(v___y_3123_);
return v_res_3130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0(lean_object* v_k_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v_b_3134_, lean_object* v_c_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_){
_start:
{
lean_object* v___x_3141_; 
lean_inc(v___y_3139_);
lean_inc_ref(v___y_3138_);
lean_inc(v___y_3137_);
lean_inc_ref(v___y_3136_);
lean_inc(v___y_3133_);
lean_inc_ref(v___y_3132_);
v___x_3141_ = lean_apply_9(v_k_3131_, v_b_3134_, v_c_3135_, v___y_3132_, v___y_3133_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_, lean_box(0));
return v___x_3141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed(lean_object* v_k_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v_b_3145_, lean_object* v_c_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_){
_start:
{
lean_object* v_res_3152_; 
v_res_3152_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0(v_k_3142_, v___y_3143_, v___y_3144_, v_b_3145_, v_c_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_);
lean_dec(v___y_3150_);
lean_dec_ref(v___y_3149_);
lean_dec(v___y_3148_);
lean_dec_ref(v___y_3147_);
lean_dec(v___y_3144_);
lean_dec_ref(v___y_3143_);
return v_res_3152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(lean_object* v_e_3153_, lean_object* v_maxFVars_3154_, lean_object* v_k_3155_, uint8_t v_cleanupAnnotations_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_){
_start:
{
lean_object* v___f_3164_; uint8_t v___x_3165_; uint8_t v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
lean_inc(v___y_3158_);
lean_inc_ref(v___y_3157_);
v___f_3164_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3164_, 0, v_k_3155_);
lean_closure_set(v___f_3164_, 1, v___y_3157_);
lean_closure_set(v___f_3164_, 2, v___y_3158_);
v___x_3165_ = 1;
v___x_3166_ = 0;
v___x_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3167_, 0, v_maxFVars_3154_);
v___x_3168_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_3153_, v___x_3165_, v___x_3166_, v___x_3165_, v___x_3166_, v___x_3167_, v___f_3164_, v_cleanupAnnotations_3156_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_);
lean_dec_ref_known(v___x_3167_, 1);
if (lean_obj_tag(v___x_3168_) == 0)
{
return v___x_3168_;
}
else
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3176_; 
v_a_3169_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3176_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3171_ = v___x_3168_;
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3168_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3174_; 
if (v_isShared_3172_ == 0)
{
v___x_3174_ = v___x_3171_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v_a_3169_);
v___x_3174_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
return v___x_3174_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___boxed(lean_object* v_e_3177_, lean_object* v_maxFVars_3178_, lean_object* v_k_3179_, lean_object* v_cleanupAnnotations_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3188_; lean_object* v_res_3189_; 
v_cleanupAnnotations_boxed_3188_ = lean_unbox(v_cleanupAnnotations_3180_);
v_res_3189_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(v_e_3177_, v_maxFVars_3178_, v_k_3179_, v_cleanupAnnotations_boxed_3188_, v___y_3181_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
lean_dec(v___y_3186_);
lean_dec_ref(v___y_3185_);
lean_dec(v___y_3184_);
lean_dec_ref(v___y_3183_);
lean_dec(v___y_3182_);
lean_dec_ref(v___y_3181_);
return v_res_3189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(lean_object* v_00_u03b1_3190_, lean_object* v_e_3191_, lean_object* v_maxFVars_3192_, lean_object* v_k_3193_, uint8_t v_cleanupAnnotations_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_){
_start:
{
lean_object* v___x_3202_; 
v___x_3202_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(v_e_3191_, v_maxFVars_3192_, v_k_3193_, v_cleanupAnnotations_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_);
return v___x_3202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___boxed(lean_object* v_00_u03b1_3203_, lean_object* v_e_3204_, lean_object* v_maxFVars_3205_, lean_object* v_k_3206_, lean_object* v_cleanupAnnotations_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3215_; lean_object* v_res_3216_; 
v_cleanupAnnotations_boxed_3215_ = lean_unbox(v_cleanupAnnotations_3207_);
v_res_3216_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(v_00_u03b1_3203_, v_e_3204_, v_maxFVars_3205_, v_k_3206_, v_cleanupAnnotations_boxed_3215_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_, v___y_3213_);
lean_dec(v___y_3213_);
lean_dec_ref(v___y_3212_);
lean_dec(v___y_3211_);
lean_dec_ref(v___y_3210_);
lean_dec(v___y_3209_);
lean_dec_ref(v___y_3208_);
return v_res_3216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(lean_object* v_e_3217_, lean_object* v_k_3218_, uint8_t v_cleanupAnnotations_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_){
_start:
{
lean_object* v___f_3227_; uint8_t v___x_3228_; uint8_t v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; 
lean_inc(v___y_3221_);
lean_inc_ref(v___y_3220_);
v___f_3227_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3227_, 0, v_k_3218_);
lean_closure_set(v___f_3227_, 1, v___y_3220_);
lean_closure_set(v___f_3227_, 2, v___y_3221_);
v___x_3228_ = 1;
v___x_3229_ = 0;
v___x_3230_ = lean_box(0);
v___x_3231_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_3217_, v___x_3228_, v___x_3229_, v___x_3228_, v___x_3229_, v___x_3230_, v___f_3227_, v_cleanupAnnotations_3219_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3231_) == 0)
{
return v___x_3231_;
}
else
{
lean_object* v_a_3232_; lean_object* v___x_3234_; uint8_t v_isShared_3235_; uint8_t v_isSharedCheck_3239_; 
v_a_3232_ = lean_ctor_get(v___x_3231_, 0);
v_isSharedCheck_3239_ = !lean_is_exclusive(v___x_3231_);
if (v_isSharedCheck_3239_ == 0)
{
v___x_3234_ = v___x_3231_;
v_isShared_3235_ = v_isSharedCheck_3239_;
goto v_resetjp_3233_;
}
else
{
lean_inc(v_a_3232_);
lean_dec(v___x_3231_);
v___x_3234_ = lean_box(0);
v_isShared_3235_ = v_isSharedCheck_3239_;
goto v_resetjp_3233_;
}
v_resetjp_3233_:
{
lean_object* v___x_3237_; 
if (v_isShared_3235_ == 0)
{
v___x_3237_ = v___x_3234_;
goto v_reusejp_3236_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v_a_3232_);
v___x_3237_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3236_;
}
v_reusejp_3236_:
{
return v___x_3237_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg___boxed(lean_object* v_e_3240_, lean_object* v_k_3241_, lean_object* v_cleanupAnnotations_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3250_; lean_object* v_res_3251_; 
v_cleanupAnnotations_boxed_3250_ = lean_unbox(v_cleanupAnnotations_3242_);
v_res_3251_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v_e_3240_, v_k_3241_, v_cleanupAnnotations_boxed_3250_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_);
lean_dec(v___y_3248_);
lean_dec_ref(v___y_3247_);
lean_dec(v___y_3246_);
lean_dec_ref(v___y_3245_);
lean_dec(v___y_3244_);
lean_dec_ref(v___y_3243_);
return v_res_3251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2(lean_object* v_00_u03b1_3252_, lean_object* v_e_3253_, lean_object* v_k_3254_, uint8_t v_cleanupAnnotations_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_){
_start:
{
lean_object* v___x_3263_; 
v___x_3263_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v_e_3253_, v_k_3254_, v_cleanupAnnotations_3255_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_);
return v___x_3263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___boxed(lean_object* v_00_u03b1_3264_, lean_object* v_e_3265_, lean_object* v_k_3266_, lean_object* v_cleanupAnnotations_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3275_; lean_object* v_res_3276_; 
v_cleanupAnnotations_boxed_3275_ = lean_unbox(v_cleanupAnnotations_3267_);
v_res_3276_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2(v_00_u03b1_3264_, v_e_3265_, v_k_3266_, v_cleanupAnnotations_boxed_3275_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_);
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
lean_dec(v___y_3271_);
lean_dec_ref(v___y_3270_);
lean_dec(v___y_3269_);
lean_dec_ref(v___y_3268_);
return v_res_3276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(lean_object* v_a_3277_, lean_object* v___x_3278_, lean_object* v___x_3279_, lean_object* v_x_3280_, uint8_t v___x_3281_, lean_object* v_xs_3282_, lean_object* v_type_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_){
_start:
{
lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; 
v___x_3291_ = l_Lean_LocalDecl_type(v_a_3277_);
v___x_3292_ = lean_array_get_borrowed(v___x_3278_, v_xs_3282_, v___x_3279_);
v___x_3293_ = l_Lean_Expr_replaceFVar(v___x_3291_, v_x_3280_, v___x_3292_);
lean_dec_ref(v___x_3291_);
v___x_3294_ = l_Lean_mkArrow(v___x_3293_, v_type_3283_, v___y_3288_, v___y_3289_);
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v_a_3295_; uint8_t v___x_3296_; uint8_t v___x_3297_; lean_object* v___x_3298_; 
v_a_3295_ = lean_ctor_get(v___x_3294_, 0);
lean_inc_n(v_a_3295_, 2);
lean_dec_ref_known(v___x_3294_, 1);
v___x_3296_ = 0;
v___x_3297_ = 1;
v___x_3298_ = l_Lean_Meta_mkLambdaFVars(v_xs_3282_, v_a_3295_, v___x_3296_, v___x_3281_, v___x_3296_, v___x_3281_, v___x_3297_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_);
if (lean_obj_tag(v___x_3298_) == 0)
{
lean_object* v_a_3299_; lean_object* v___x_3300_; 
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
lean_inc(v_a_3299_);
lean_dec_ref_known(v___x_3298_, 1);
v___x_3300_ = l_Lean_Meta_getLevel(v_a_3295_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_);
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v_a_3301_; lean_object* v___x_3303_; uint8_t v_isShared_3304_; uint8_t v_isSharedCheck_3309_; 
v_a_3301_ = lean_ctor_get(v___x_3300_, 0);
v_isSharedCheck_3309_ = !lean_is_exclusive(v___x_3300_);
if (v_isSharedCheck_3309_ == 0)
{
v___x_3303_ = v___x_3300_;
v_isShared_3304_ = v_isSharedCheck_3309_;
goto v_resetjp_3302_;
}
else
{
lean_inc(v_a_3301_);
lean_dec(v___x_3300_);
v___x_3303_ = lean_box(0);
v_isShared_3304_ = v_isSharedCheck_3309_;
goto v_resetjp_3302_;
}
v_resetjp_3302_:
{
lean_object* v___x_3305_; lean_object* v___x_3307_; 
v___x_3305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3305_, 0, v_a_3299_);
lean_ctor_set(v___x_3305_, 1, v_a_3301_);
if (v_isShared_3304_ == 0)
{
lean_ctor_set(v___x_3303_, 0, v___x_3305_);
v___x_3307_ = v___x_3303_;
goto v_reusejp_3306_;
}
else
{
lean_object* v_reuseFailAlloc_3308_; 
v_reuseFailAlloc_3308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3308_, 0, v___x_3305_);
v___x_3307_ = v_reuseFailAlloc_3308_;
goto v_reusejp_3306_;
}
v_reusejp_3306_:
{
return v___x_3307_;
}
}
}
else
{
lean_object* v_a_3310_; lean_object* v___x_3312_; uint8_t v_isShared_3313_; uint8_t v_isSharedCheck_3317_; 
lean_dec(v_a_3299_);
v_a_3310_ = lean_ctor_get(v___x_3300_, 0);
v_isSharedCheck_3317_ = !lean_is_exclusive(v___x_3300_);
if (v_isSharedCheck_3317_ == 0)
{
v___x_3312_ = v___x_3300_;
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
else
{
lean_inc(v_a_3310_);
lean_dec(v___x_3300_);
v___x_3312_ = lean_box(0);
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
v_resetjp_3311_:
{
lean_object* v___x_3315_; 
if (v_isShared_3313_ == 0)
{
v___x_3315_ = v___x_3312_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v_a_3310_);
v___x_3315_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
return v___x_3315_;
}
}
}
}
else
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3325_; 
lean_dec(v_a_3295_);
v_a_3318_ = lean_ctor_get(v___x_3298_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3320_ = v___x_3298_;
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v___x_3298_);
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
else
{
lean_object* v_a_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3333_; 
v_a_3326_ = lean_ctor_get(v___x_3294_, 0);
v_isSharedCheck_3333_ = !lean_is_exclusive(v___x_3294_);
if (v_isSharedCheck_3333_ == 0)
{
v___x_3328_ = v___x_3294_;
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_a_3326_);
lean_dec(v___x_3294_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed(lean_object* v_a_3334_, lean_object* v___x_3335_, lean_object* v___x_3336_, lean_object* v_x_3337_, lean_object* v___x_3338_, lean_object* v_xs_3339_, lean_object* v_type_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_){
_start:
{
uint8_t v___x_5905__boxed_3348_; lean_object* v_res_3349_; 
v___x_5905__boxed_3348_ = lean_unbox(v___x_3338_);
v_res_3349_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(v_a_3334_, v___x_3335_, v___x_3336_, v_x_3337_, v___x_5905__boxed_3348_, v_xs_3339_, v_type_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_);
lean_dec(v___y_3346_);
lean_dec_ref(v___y_3345_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
lean_dec(v___y_3342_);
lean_dec_ref(v___y_3341_);
lean_dec_ref(v_xs_3339_);
lean_dec(v___x_3336_);
lean_dec_ref(v___x_3335_);
lean_dec_ref(v_a_3334_);
return v_res_3349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0(lean_object* v_k_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v_b_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_){
_start:
{
lean_object* v___x_3359_; 
lean_inc(v___y_3357_);
lean_inc_ref(v___y_3356_);
lean_inc(v___y_3355_);
lean_inc_ref(v___y_3354_);
lean_inc(v___y_3352_);
lean_inc_ref(v___y_3351_);
v___x_3359_ = lean_apply_8(v_k_3350_, v_b_3353_, v___y_3351_, v___y_3352_, v___y_3354_, v___y_3355_, v___y_3356_, v___y_3357_, lean_box(0));
return v___x_3359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v_b_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_){
_start:
{
lean_object* v_res_3369_; 
v_res_3369_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0(v_k_3360_, v___y_3361_, v___y_3362_, v_b_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_);
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3362_);
lean_dec_ref(v___y_3361_);
return v_res_3369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(lean_object* v_name_3370_, uint8_t v_bi_3371_, lean_object* v_type_3372_, lean_object* v_k_3373_, uint8_t v_kind_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_){
_start:
{
lean_object* v___f_3382_; lean_object* v___x_3383_; 
lean_inc(v___y_3376_);
lean_inc_ref(v___y_3375_);
v___f_3382_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_3382_, 0, v_k_3373_);
lean_closure_set(v___f_3382_, 1, v___y_3375_);
lean_closure_set(v___f_3382_, 2, v___y_3376_);
v___x_3383_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3370_, v_bi_3371_, v_type_3372_, v___f_3382_, v_kind_3374_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
if (lean_obj_tag(v___x_3383_) == 0)
{
return v___x_3383_;
}
else
{
lean_object* v_a_3384_; lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3391_; 
v_a_3384_ = lean_ctor_get(v___x_3383_, 0);
v_isSharedCheck_3391_ = !lean_is_exclusive(v___x_3383_);
if (v_isSharedCheck_3391_ == 0)
{
v___x_3386_ = v___x_3383_;
v_isShared_3387_ = v_isSharedCheck_3391_;
goto v_resetjp_3385_;
}
else
{
lean_inc(v_a_3384_);
lean_dec(v___x_3383_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3391_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
lean_object* v___x_3389_; 
if (v_isShared_3387_ == 0)
{
v___x_3389_ = v___x_3386_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v_a_3384_);
v___x_3389_ = v_reuseFailAlloc_3390_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
return v___x_3389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg___boxed(lean_object* v_name_3392_, lean_object* v_bi_3393_, lean_object* v_type_3394_, lean_object* v_k_3395_, lean_object* v_kind_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_){
_start:
{
uint8_t v_bi_boxed_3404_; uint8_t v_kind_boxed_3405_; lean_object* v_res_3406_; 
v_bi_boxed_3404_ = lean_unbox(v_bi_3393_);
v_kind_boxed_3405_ = lean_unbox(v_kind_3396_);
v_res_3406_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(v_name_3392_, v_bi_boxed_3404_, v_type_3394_, v_k_3395_, v_kind_boxed_3405_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_);
lean_dec(v___y_3402_);
lean_dec_ref(v___y_3401_);
lean_dec(v___y_3400_);
lean_dec_ref(v___y_3399_);
lean_dec(v___y_3398_);
lean_dec_ref(v___y_3397_);
return v_res_3406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(lean_object* v_name_3407_, lean_object* v_type_3408_, lean_object* v_k_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_){
_start:
{
uint8_t v___x_3417_; uint8_t v___x_3418_; lean_object* v___x_3419_; 
v___x_3417_ = 0;
v___x_3418_ = 0;
v___x_3419_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(v_name_3407_, v___x_3417_, v_type_3408_, v_k_3409_, v___x_3418_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_);
return v___x_3419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___boxed(lean_object* v_name_3420_, lean_object* v_type_3421_, lean_object* v_k_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_){
_start:
{
lean_object* v_res_3430_; 
v_res_3430_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v_name_3420_, v_type_3421_, v_k_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_);
lean_dec(v___y_3428_);
lean_dec_ref(v___y_3427_);
lean_dec(v___y_3426_);
lean_dec_ref(v___y_3425_);
lean_dec(v___y_3424_);
lean_dec_ref(v___y_3423_);
return v_res_3430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(lean_object* v_x_3444_, lean_object* v_F_3445_, lean_object* v_val_3446_, lean_object* v_k_3447_, lean_object* v_a_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_, lean_object* v_a_3452_, lean_object* v_a_3453_){
_start:
{
uint8_t v___x_3455_; 
v___x_3455_ = l_Lean_Expr_isFVar(v_x_3444_);
if (v___x_3455_ == 0)
{
lean_object* v___x_3456_; 
lean_inc(v_a_3453_);
lean_inc_ref(v_a_3452_);
lean_inc(v_a_3451_);
lean_inc_ref(v_a_3450_);
lean_inc(v_a_3449_);
lean_inc_ref(v_a_3448_);
v___x_3456_ = lean_apply_10(v_k_3447_, v_x_3444_, v_F_3445_, v_val_3446_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3453_, lean_box(0));
return v___x_3456_;
}
else
{
lean_object* v___x_3457_; lean_object* v___x_3458_; uint8_t v___x_3459_; 
v___x_3457_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2));
v___x_3458_ = lean_unsigned_to_nat(6u);
v___x_3459_ = l_Lean_Expr_isAppOfArity(v_val_3446_, v___x_3457_, v___x_3458_);
if (v___x_3459_ == 0)
{
lean_object* v___x_3460_; 
lean_inc(v_a_3453_);
lean_inc_ref(v_a_3452_);
lean_inc(v_a_3451_);
lean_inc_ref(v_a_3450_);
lean_inc(v_a_3449_);
lean_inc_ref(v_a_3448_);
v___x_3460_ = lean_apply_10(v_k_3447_, v_x_3444_, v_F_3445_, v_val_3446_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3453_, lean_box(0));
return v___x_3460_;
}
else
{
lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; uint8_t v___x_3467_; 
v___x_3461_ = lean_unsigned_to_nat(3u);
v___x_3462_ = l_Lean_Expr_getAppNumArgs(v_val_3446_);
v___x_3463_ = lean_nat_sub(v___x_3462_, v___x_3461_);
v___x_3464_ = lean_unsigned_to_nat(1u);
v___x_3465_ = lean_nat_sub(v___x_3463_, v___x_3464_);
lean_dec(v___x_3463_);
v___x_3466_ = l_Lean_Expr_getRevArg_x21(v_val_3446_, v___x_3465_);
v___x_3467_ = lean_expr_eqv(v___x_3466_, v_x_3444_);
lean_dec_ref(v___x_3466_);
if (v___x_3467_ == 0)
{
lean_object* v___x_3468_; 
lean_dec(v___x_3462_);
lean_inc(v_a_3453_);
lean_inc_ref(v_a_3452_);
lean_inc(v_a_3451_);
lean_inc_ref(v_a_3450_);
lean_inc(v_a_3449_);
lean_inc_ref(v_a_3448_);
v___x_3468_ = lean_apply_10(v_k_3447_, v_x_3444_, v_F_3445_, v_val_3446_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3453_, lean_box(0));
return v___x_3468_;
}
else
{
lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; uint8_t v___x_3473_; 
v___x_3469_ = lean_unsigned_to_nat(4u);
v___x_3470_ = lean_nat_sub(v___x_3462_, v___x_3469_);
v___x_3471_ = lean_nat_sub(v___x_3470_, v___x_3464_);
lean_dec(v___x_3470_);
v___x_3472_ = l_Lean_Expr_getRevArg_x21(v_val_3446_, v___x_3471_);
v___x_3473_ = l_Lean_Expr_isLambda(v___x_3472_);
lean_dec_ref(v___x_3472_);
if (v___x_3473_ == 0)
{
lean_object* v___x_3474_; 
lean_dec(v___x_3462_);
lean_inc(v_a_3453_);
lean_inc_ref(v_a_3452_);
lean_inc(v_a_3451_);
lean_inc_ref(v_a_3450_);
lean_inc(v_a_3449_);
lean_inc_ref(v_a_3448_);
v___x_3474_ = lean_apply_10(v_k_3447_, v_x_3444_, v_F_3445_, v_val_3446_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3453_, lean_box(0));
return v___x_3474_;
}
else
{
lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; uint8_t v___x_3479_; 
v___x_3475_ = lean_unsigned_to_nat(5u);
v___x_3476_ = lean_nat_sub(v___x_3462_, v___x_3475_);
v___x_3477_ = lean_nat_sub(v___x_3476_, v___x_3464_);
lean_dec(v___x_3476_);
v___x_3478_ = l_Lean_Expr_getRevArg_x21(v_val_3446_, v___x_3477_);
v___x_3479_ = l_Lean_Expr_isLambda(v___x_3478_);
lean_dec_ref(v___x_3478_);
if (v___x_3479_ == 0)
{
lean_object* v___x_3480_; 
lean_dec(v___x_3462_);
lean_inc(v_a_3453_);
lean_inc_ref(v_a_3452_);
lean_inc(v_a_3451_);
lean_inc_ref(v_a_3450_);
lean_inc(v_a_3449_);
lean_inc_ref(v_a_3448_);
v___x_3480_ = lean_apply_10(v_k_3447_, v_x_3444_, v_F_3445_, v_val_3446_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3453_, lean_box(0));
return v___x_3480_;
}
else
{
lean_object* v___x_3481_; lean_object* v_dummy_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v_args_3485_; lean_object* v___x_3486_; lean_object* v_00_u03b1_3487_; lean_object* v_00_u03b2_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; 
v___x_3481_ = l_Lean_instInhabitedExpr;
v_dummy_3482_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
lean_inc(v___x_3462_);
v___x_3483_ = lean_mk_array(v___x_3462_, v_dummy_3482_);
v___x_3484_ = lean_nat_sub(v___x_3462_, v___x_3464_);
lean_dec(v___x_3462_);
v_args_3485_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_3446_, v___x_3483_, v___x_3484_);
v___x_3486_ = lean_unsigned_to_nat(0u);
v_00_u03b1_3487_ = lean_array_get(v___x_3481_, v_args_3485_, v___x_3486_);
v_00_u03b2_3488_ = lean_array_get(v___x_3481_, v_args_3485_, v___x_3464_);
v___x_3489_ = l_Lean_Expr_fvarId_x21(v_F_3445_);
v___x_3490_ = l_Lean_FVarId_getDecl___redArg(v___x_3489_, v_a_3450_, v_a_3452_, v_a_3453_);
if (lean_obj_tag(v___x_3490_) == 0)
{
lean_object* v_a_3491_; lean_object* v___x_3492_; lean_object* v___f_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; uint8_t v___x_3496_; lean_object* v___x_3497_; 
v_a_3491_ = lean_ctor_get(v___x_3490_, 0);
lean_inc_n(v_a_3491_, 2);
lean_dec_ref_known(v___x_3490_, 1);
v___x_3492_ = lean_box(v___x_3479_);
lean_inc_ref(v_x_3444_);
v___f_3493_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed), 14, 5);
lean_closure_set(v___f_3493_, 0, v_a_3491_);
lean_closure_set(v___f_3493_, 1, v___x_3481_);
lean_closure_set(v___f_3493_, 2, v___x_3486_);
lean_closure_set(v___f_3493_, 3, v_x_3444_);
lean_closure_set(v___f_3493_, 4, v___x_3492_);
v___x_3494_ = lean_unsigned_to_nat(2u);
v___x_3495_ = lean_array_get_borrowed(v___x_3481_, v_args_3485_, v___x_3494_);
v___x_3496_ = 0;
lean_inc(v___x_3495_);
v___x_3497_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v___x_3495_, v___f_3493_, v___x_3496_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3453_);
if (lean_obj_tag(v___x_3497_) == 0)
{
lean_object* v_a_3498_; lean_object* v_fst_3499_; lean_object* v_snd_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3556_; 
v_a_3498_ = lean_ctor_get(v___x_3497_, 0);
lean_inc(v_a_3498_);
lean_dec_ref_known(v___x_3497_, 1);
v_fst_3499_ = lean_ctor_get(v_a_3498_, 0);
v_snd_3500_ = lean_ctor_get(v_a_3498_, 1);
v_isSharedCheck_3556_ = !lean_is_exclusive(v_a_3498_);
if (v_isSharedCheck_3556_ == 0)
{
v___x_3502_ = v_a_3498_;
v_isShared_3503_ = v_isSharedCheck_3556_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_snd_3500_);
lean_inc(v_fst_3499_);
lean_dec(v_a_3498_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3556_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; 
v___x_3504_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4));
v___x_3505_ = lean_array_get_borrowed(v___x_3481_, v_args_3485_, v___x_3469_);
lean_inc(v___x_3505_);
lean_inc_ref(v_x_3444_);
lean_inc(v_a_3491_);
lean_inc(v_00_u03b2_3488_);
lean_inc(v_00_u03b1_3487_);
lean_inc_ref(v_k_3447_);
v___x_3506_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(v___x_3481_, v___x_3486_, v_k_3447_, v___x_3494_, v___x_3496_, v___x_3479_, v_00_u03b1_3487_, v_00_u03b2_3488_, v___x_3461_, v_a_3491_, v_x_3444_, v___x_3464_, v___x_3504_, v___x_3505_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3453_);
if (lean_obj_tag(v___x_3506_) == 0)
{
lean_object* v_a_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; 
v_a_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_a_3507_);
lean_dec_ref_known(v___x_3506_, 1);
v___x_3508_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6));
v___x_3509_ = lean_array_get(v___x_3481_, v_args_3485_, v___x_3475_);
lean_dec_ref(v_args_3485_);
lean_inc_ref(v_x_3444_);
lean_inc(v_00_u03b2_3488_);
lean_inc(v_00_u03b1_3487_);
v___x_3510_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(v___x_3481_, v___x_3486_, v_k_3447_, v___x_3494_, v___x_3496_, v___x_3479_, v_00_u03b1_3487_, v_00_u03b2_3488_, v___x_3461_, v_a_3491_, v_x_3444_, v___x_3464_, v___x_3508_, v___x_3509_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3453_);
if (lean_obj_tag(v___x_3510_) == 0)
{
lean_object* v_a_3511_; lean_object* v___x_3512_; 
v_a_3511_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_a_3511_);
lean_dec_ref_known(v___x_3510_, 1);
lean_inc(v_00_u03b1_3487_);
v___x_3512_ = l_Lean_Meta_getLevel(v_00_u03b1_3487_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3453_);
if (lean_obj_tag(v___x_3512_) == 0)
{
lean_object* v_a_3513_; lean_object* v___x_3514_; 
v_a_3513_ = lean_ctor_get(v___x_3512_, 0);
lean_inc(v_a_3513_);
lean_dec_ref_known(v___x_3512_, 1);
lean_inc(v_00_u03b2_3488_);
v___x_3514_ = l_Lean_Meta_getLevel(v_00_u03b2_3488_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3453_);
if (lean_obj_tag(v___x_3514_) == 0)
{
lean_object* v_a_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3539_; 
v_a_3515_ = lean_ctor_get(v___x_3514_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3514_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3517_ = v___x_3514_;
v_isShared_3518_ = v_isSharedCheck_3539_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_a_3515_);
lean_dec(v___x_3514_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3539_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
lean_object* v___x_3519_; lean_object* v___x_3521_; 
v___x_3519_ = lean_box(0);
if (v_isShared_3503_ == 0)
{
lean_ctor_set_tag(v___x_3502_, 1);
lean_ctor_set(v___x_3502_, 1, v___x_3519_);
lean_ctor_set(v___x_3502_, 0, v_a_3515_);
v___x_3521_ = v___x_3502_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v_a_3515_);
lean_ctor_set(v_reuseFailAlloc_3538_, 1, v___x_3519_);
v___x_3521_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3536_; 
v___x_3522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3522_, 0, v_a_3513_);
lean_ctor_set(v___x_3522_, 1, v___x_3521_);
v___x_3523_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3523_, 0, v_snd_3500_);
lean_ctor_set(v___x_3523_, 1, v___x_3522_);
v___x_3524_ = l_Lean_mkConst(v___x_3457_, v___x_3523_);
v___x_3525_ = lean_unsigned_to_nat(7u);
v___x_3526_ = lean_mk_empty_array_with_capacity(v___x_3525_);
v___x_3527_ = lean_array_push(v___x_3526_, v_00_u03b1_3487_);
v___x_3528_ = lean_array_push(v___x_3527_, v_00_u03b2_3488_);
v___x_3529_ = lean_array_push(v___x_3528_, v_fst_3499_);
v___x_3530_ = lean_array_push(v___x_3529_, v_x_3444_);
v___x_3531_ = lean_array_push(v___x_3530_, v_a_3507_);
v___x_3532_ = lean_array_push(v___x_3531_, v_a_3511_);
v___x_3533_ = lean_array_push(v___x_3532_, v_F_3445_);
v___x_3534_ = l_Lean_mkAppN(v___x_3524_, v___x_3533_);
lean_dec_ref(v___x_3533_);
if (v_isShared_3518_ == 0)
{
lean_ctor_set(v___x_3517_, 0, v___x_3534_);
v___x_3536_ = v___x_3517_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v___x_3534_);
v___x_3536_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
return v___x_3536_;
}
}
}
}
else
{
lean_object* v_a_3540_; lean_object* v___x_3542_; uint8_t v_isShared_3543_; uint8_t v_isSharedCheck_3547_; 
lean_dec(v_a_3513_);
lean_dec(v_a_3511_);
lean_dec(v_a_3507_);
lean_del_object(v___x_3502_);
lean_dec(v_snd_3500_);
lean_dec(v_fst_3499_);
lean_dec(v_00_u03b2_3488_);
lean_dec(v_00_u03b1_3487_);
lean_dec_ref(v_F_3445_);
lean_dec_ref(v_x_3444_);
v_a_3540_ = lean_ctor_get(v___x_3514_, 0);
v_isSharedCheck_3547_ = !lean_is_exclusive(v___x_3514_);
if (v_isSharedCheck_3547_ == 0)
{
v___x_3542_ = v___x_3514_;
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
else
{
lean_inc(v_a_3540_);
lean_dec(v___x_3514_);
v___x_3542_ = lean_box(0);
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
v_resetjp_3541_:
{
lean_object* v___x_3545_; 
if (v_isShared_3543_ == 0)
{
v___x_3545_ = v___x_3542_;
goto v_reusejp_3544_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v_a_3540_);
v___x_3545_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3544_;
}
v_reusejp_3544_:
{
return v___x_3545_;
}
}
}
}
else
{
lean_object* v_a_3548_; lean_object* v___x_3550_; uint8_t v_isShared_3551_; uint8_t v_isSharedCheck_3555_; 
lean_dec(v_a_3511_);
lean_dec(v_a_3507_);
lean_del_object(v___x_3502_);
lean_dec(v_snd_3500_);
lean_dec(v_fst_3499_);
lean_dec(v_00_u03b2_3488_);
lean_dec(v_00_u03b1_3487_);
lean_dec_ref(v_F_3445_);
lean_dec_ref(v_x_3444_);
v_a_3548_ = lean_ctor_get(v___x_3512_, 0);
v_isSharedCheck_3555_ = !lean_is_exclusive(v___x_3512_);
if (v_isSharedCheck_3555_ == 0)
{
v___x_3550_ = v___x_3512_;
v_isShared_3551_ = v_isSharedCheck_3555_;
goto v_resetjp_3549_;
}
else
{
lean_inc(v_a_3548_);
lean_dec(v___x_3512_);
v___x_3550_ = lean_box(0);
v_isShared_3551_ = v_isSharedCheck_3555_;
goto v_resetjp_3549_;
}
v_resetjp_3549_:
{
lean_object* v___x_3553_; 
if (v_isShared_3551_ == 0)
{
v___x_3553_ = v___x_3550_;
goto v_reusejp_3552_;
}
else
{
lean_object* v_reuseFailAlloc_3554_; 
v_reuseFailAlloc_3554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3554_, 0, v_a_3548_);
v___x_3553_ = v_reuseFailAlloc_3554_;
goto v_reusejp_3552_;
}
v_reusejp_3552_:
{
return v___x_3553_;
}
}
}
}
else
{
lean_dec(v_a_3507_);
lean_del_object(v___x_3502_);
lean_dec(v_snd_3500_);
lean_dec(v_fst_3499_);
lean_dec(v_00_u03b2_3488_);
lean_dec(v_00_u03b1_3487_);
lean_dec_ref(v_F_3445_);
lean_dec_ref(v_x_3444_);
return v___x_3510_;
}
}
else
{
lean_del_object(v___x_3502_);
lean_dec(v_snd_3500_);
lean_dec(v_fst_3499_);
lean_dec(v_a_3491_);
lean_dec(v_00_u03b2_3488_);
lean_dec(v_00_u03b1_3487_);
lean_dec_ref(v_args_3485_);
lean_dec_ref(v_k_3447_);
lean_dec_ref(v_F_3445_);
lean_dec_ref(v_x_3444_);
return v___x_3506_;
}
}
}
else
{
lean_object* v_a_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3564_; 
lean_dec(v_a_3491_);
lean_dec(v_00_u03b2_3488_);
lean_dec(v_00_u03b1_3487_);
lean_dec_ref(v_args_3485_);
lean_dec_ref(v_k_3447_);
lean_dec_ref(v_F_3445_);
lean_dec_ref(v_x_3444_);
v_a_3557_ = lean_ctor_get(v___x_3497_, 0);
v_isSharedCheck_3564_ = !lean_is_exclusive(v___x_3497_);
if (v_isSharedCheck_3564_ == 0)
{
v___x_3559_ = v___x_3497_;
v_isShared_3560_ = v_isSharedCheck_3564_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_a_3557_);
lean_dec(v___x_3497_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3564_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v___x_3562_; 
if (v_isShared_3560_ == 0)
{
v___x_3562_ = v___x_3559_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3563_; 
v_reuseFailAlloc_3563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3563_, 0, v_a_3557_);
v___x_3562_ = v_reuseFailAlloc_3563_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
return v___x_3562_;
}
}
}
}
else
{
lean_object* v_a_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3572_; 
lean_dec(v_00_u03b2_3488_);
lean_dec(v_00_u03b1_3487_);
lean_dec_ref(v_args_3485_);
lean_dec_ref(v_k_3447_);
lean_dec_ref(v_F_3445_);
lean_dec_ref(v_x_3444_);
v_a_3565_ = lean_ctor_get(v___x_3490_, 0);
v_isSharedCheck_3572_ = !lean_is_exclusive(v___x_3490_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3567_ = v___x_3490_;
v_isShared_3568_ = v_isSharedCheck_3572_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_a_3565_);
lean_dec(v___x_3490_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3572_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
lean_object* v___x_3570_; 
if (v_isShared_3568_ == 0)
{
v___x_3570_ = v___x_3567_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v_a_3565_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(lean_object* v___x_3573_, lean_object* v_body_3574_, lean_object* v_k_3575_, lean_object* v___x_3576_, uint8_t v___x_3577_, uint8_t v___x_3578_, lean_object* v_FNew_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_){
_start:
{
lean_object* v___x_3587_; 
lean_inc_ref(v_FNew_3579_);
lean_inc_ref(v___x_3573_);
v___x_3587_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(v___x_3573_, v_FNew_3579_, v_body_3574_, v_k_3575_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_);
if (lean_obj_tag(v___x_3587_) == 0)
{
lean_object* v_a_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; uint8_t v___x_3592_; lean_object* v___x_3593_; 
v_a_3588_ = lean_ctor_get(v___x_3587_, 0);
lean_inc(v_a_3588_);
lean_dec_ref_known(v___x_3587_, 1);
v___x_3589_ = lean_mk_empty_array_with_capacity(v___x_3576_);
v___x_3590_ = lean_array_push(v___x_3589_, v___x_3573_);
v___x_3591_ = lean_array_push(v___x_3590_, v_FNew_3579_);
v___x_3592_ = 1;
v___x_3593_ = l_Lean_Meta_mkLambdaFVars(v___x_3591_, v_a_3588_, v___x_3577_, v___x_3578_, v___x_3577_, v___x_3578_, v___x_3592_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_);
lean_dec_ref(v___x_3591_);
return v___x_3593_;
}
else
{
lean_dec_ref(v_FNew_3579_);
lean_dec_ref(v___x_3573_);
return v___x_3587_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed(lean_object* v___x_3594_, lean_object* v_body_3595_, lean_object* v_k_3596_, lean_object* v___x_3597_, lean_object* v___x_3598_, lean_object* v___x_3599_, lean_object* v_FNew_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_){
_start:
{
uint8_t v___x_6146__boxed_3608_; uint8_t v___x_6147__boxed_3609_; lean_object* v_res_3610_; 
v___x_6146__boxed_3608_ = lean_unbox(v___x_3598_);
v___x_6147__boxed_3609_ = lean_unbox(v___x_3599_);
v_res_3610_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(v___x_3594_, v_body_3595_, v_k_3596_, v___x_3597_, v___x_6146__boxed_3608_, v___x_6147__boxed_3609_, v_FNew_3600_, v___y_3601_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_, v___y_3606_);
lean_dec(v___y_3606_);
lean_dec_ref(v___y_3605_);
lean_dec(v___y_3604_);
lean_dec_ref(v___y_3603_);
lean_dec(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec(v___x_3597_);
return v_res_3610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(lean_object* v___x_3611_, lean_object* v___x_3612_, lean_object* v_k_3613_, lean_object* v___x_3614_, uint8_t v___x_3615_, uint8_t v___x_3616_, lean_object* v_00_u03b1_3617_, lean_object* v_00_u03b2_3618_, lean_object* v___x_3619_, lean_object* v_ctorName_3620_, lean_object* v_a_3621_, lean_object* v_x_3622_, lean_object* v_xs_3623_, lean_object* v_body_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_){
_start:
{
lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___f_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; 
v___x_3632_ = lean_array_get_borrowed(v___x_3611_, v_xs_3623_, v___x_3612_);
v___x_3633_ = lean_box(v___x_3615_);
v___x_3634_ = lean_box(v___x_3616_);
lean_inc_n(v___x_3632_, 2);
v___f_3635_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed), 14, 6);
lean_closure_set(v___f_3635_, 0, v___x_3632_);
lean_closure_set(v___f_3635_, 1, v_body_3624_);
lean_closure_set(v___f_3635_, 2, v_k_3613_);
lean_closure_set(v___f_3635_, 3, v___x_3614_);
lean_closure_set(v___f_3635_, 4, v___x_3633_);
lean_closure_set(v___f_3635_, 5, v___x_3634_);
v___x_3636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3636_, 0, v_00_u03b1_3617_);
v___x_3637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3637_, 0, v_00_u03b2_3618_);
v___x_3638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3638_, 0, v___x_3632_);
v___x_3639_ = lean_mk_empty_array_with_capacity(v___x_3619_);
v___x_3640_ = lean_array_push(v___x_3639_, v___x_3636_);
v___x_3641_ = lean_array_push(v___x_3640_, v___x_3637_);
v___x_3642_ = lean_array_push(v___x_3641_, v___x_3638_);
v___x_3643_ = l_Lean_Meta_mkAppOptM(v_ctorName_3620_, v___x_3642_, v___y_3627_, v___y_3628_, v___y_3629_, v___y_3630_);
if (lean_obj_tag(v___x_3643_) == 0)
{
lean_object* v_a_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; 
v_a_3644_ = lean_ctor_get(v___x_3643_, 0);
lean_inc(v_a_3644_);
lean_dec_ref_known(v___x_3643_, 1);
v___x_3645_ = l_Lean_LocalDecl_type(v_a_3621_);
v___x_3646_ = l_Lean_Expr_replaceFVar(v___x_3645_, v_x_3622_, v_a_3644_);
lean_dec(v_a_3644_);
lean_dec_ref(v___x_3645_);
v___x_3647_ = l_Lean_LocalDecl_userName(v_a_3621_);
v___x_3648_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v___x_3647_, v___x_3646_, v___f_3635_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_, v___y_3630_);
return v___x_3648_;
}
else
{
lean_dec_ref(v___f_3635_);
lean_dec_ref(v_x_3622_);
return v___x_3643_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed(lean_object** _args){
lean_object* v___x_3649_ = _args[0];
lean_object* v___x_3650_ = _args[1];
lean_object* v_k_3651_ = _args[2];
lean_object* v___x_3652_ = _args[3];
lean_object* v___x_3653_ = _args[4];
lean_object* v___x_3654_ = _args[5];
lean_object* v_00_u03b1_3655_ = _args[6];
lean_object* v_00_u03b2_3656_ = _args[7];
lean_object* v___x_3657_ = _args[8];
lean_object* v_ctorName_3658_ = _args[9];
lean_object* v_a_3659_ = _args[10];
lean_object* v_x_3660_ = _args[11];
lean_object* v_xs_3661_ = _args[12];
lean_object* v_body_3662_ = _args[13];
lean_object* v___y_3663_ = _args[14];
lean_object* v___y_3664_ = _args[15];
lean_object* v___y_3665_ = _args[16];
lean_object* v___y_3666_ = _args[17];
lean_object* v___y_3667_ = _args[18];
lean_object* v___y_3668_ = _args[19];
lean_object* v___y_3669_ = _args[20];
_start:
{
uint8_t v___x_6166__boxed_3670_; uint8_t v___x_6167__boxed_3671_; lean_object* v_res_3672_; 
v___x_6166__boxed_3670_ = lean_unbox(v___x_3653_);
v___x_6167__boxed_3671_ = lean_unbox(v___x_3654_);
v_res_3672_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(v___x_3649_, v___x_3650_, v_k_3651_, v___x_3652_, v___x_6166__boxed_3670_, v___x_6167__boxed_3671_, v_00_u03b1_3655_, v_00_u03b2_3656_, v___x_3657_, v_ctorName_3658_, v_a_3659_, v_x_3660_, v_xs_3661_, v_body_3662_, v___y_3663_, v___y_3664_, v___y_3665_, v___y_3666_, v___y_3667_, v___y_3668_);
lean_dec(v___y_3668_);
lean_dec_ref(v___y_3667_);
lean_dec(v___y_3666_);
lean_dec_ref(v___y_3665_);
lean_dec(v___y_3664_);
lean_dec_ref(v___y_3663_);
lean_dec_ref(v_xs_3661_);
lean_dec_ref(v_a_3659_);
lean_dec(v___x_3657_);
lean_dec(v___x_3650_);
lean_dec_ref(v___x_3649_);
return v_res_3672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(lean_object* v___x_3673_, lean_object* v___x_3674_, lean_object* v_k_3675_, lean_object* v___x_3676_, uint8_t v___x_3677_, uint8_t v___x_3678_, lean_object* v_00_u03b1_3679_, lean_object* v_00_u03b2_3680_, lean_object* v___x_3681_, lean_object* v_a_3682_, lean_object* v_x_3683_, lean_object* v___x_3684_, lean_object* v_ctorName_3685_, lean_object* v_minor_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_){
_start:
{
lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___f_3696_; lean_object* v___x_3697_; 
v___x_3694_ = lean_box(v___x_3677_);
v___x_3695_ = lean_box(v___x_3678_);
v___f_3696_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed), 21, 12);
lean_closure_set(v___f_3696_, 0, v___x_3673_);
lean_closure_set(v___f_3696_, 1, v___x_3674_);
lean_closure_set(v___f_3696_, 2, v_k_3675_);
lean_closure_set(v___f_3696_, 3, v___x_3676_);
lean_closure_set(v___f_3696_, 4, v___x_3694_);
lean_closure_set(v___f_3696_, 5, v___x_3695_);
lean_closure_set(v___f_3696_, 6, v_00_u03b1_3679_);
lean_closure_set(v___f_3696_, 7, v_00_u03b2_3680_);
lean_closure_set(v___f_3696_, 8, v___x_3681_);
lean_closure_set(v___f_3696_, 9, v_ctorName_3685_);
lean_closure_set(v___f_3696_, 10, v_a_3682_);
lean_closure_set(v___f_3696_, 11, v_x_3683_);
v___x_3697_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(v_minor_3686_, v___x_3684_, v___f_3696_, v___x_3677_, v___y_3687_, v___y_3688_, v___y_3689_, v___y_3690_, v___y_3691_, v___y_3692_);
return v___x_3697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3___boxed(lean_object** _args){
lean_object* v___x_3698_ = _args[0];
lean_object* v___x_3699_ = _args[1];
lean_object* v_k_3700_ = _args[2];
lean_object* v___x_3701_ = _args[3];
lean_object* v___x_3702_ = _args[4];
lean_object* v___x_3703_ = _args[5];
lean_object* v_00_u03b1_3704_ = _args[6];
lean_object* v_00_u03b2_3705_ = _args[7];
lean_object* v___x_3706_ = _args[8];
lean_object* v_a_3707_ = _args[9];
lean_object* v_x_3708_ = _args[10];
lean_object* v___x_3709_ = _args[11];
lean_object* v_ctorName_3710_ = _args[12];
lean_object* v_minor_3711_ = _args[13];
lean_object* v___y_3712_ = _args[14];
lean_object* v___y_3713_ = _args[15];
lean_object* v___y_3714_ = _args[16];
lean_object* v___y_3715_ = _args[17];
lean_object* v___y_3716_ = _args[18];
lean_object* v___y_3717_ = _args[19];
lean_object* v___y_3718_ = _args[20];
_start:
{
uint8_t v___x_6130__boxed_3719_; uint8_t v___x_6131__boxed_3720_; lean_object* v_res_3721_; 
v___x_6130__boxed_3719_ = lean_unbox(v___x_3702_);
v___x_6131__boxed_3720_ = lean_unbox(v___x_3703_);
v_res_3721_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(v___x_3698_, v___x_3699_, v_k_3700_, v___x_3701_, v___x_6130__boxed_3719_, v___x_6131__boxed_3720_, v_00_u03b1_3704_, v_00_u03b2_3705_, v___x_3706_, v_a_3707_, v_x_3708_, v___x_3709_, v_ctorName_3710_, v_minor_3711_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_, v___y_3716_, v___y_3717_);
lean_dec(v___y_3717_);
lean_dec_ref(v___y_3716_);
lean_dec(v___y_3715_);
lean_dec_ref(v___y_3714_);
lean_dec(v___y_3713_);
lean_dec_ref(v___y_3712_);
return v_res_3721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___boxed(lean_object* v_x_3722_, lean_object* v_F_3723_, lean_object* v_val_3724_, lean_object* v_k_3725_, lean_object* v_a_3726_, lean_object* v_a_3727_, lean_object* v_a_3728_, lean_object* v_a_3729_, lean_object* v_a_3730_, lean_object* v_a_3731_, lean_object* v_a_3732_){
_start:
{
lean_object* v_res_3733_; 
v_res_3733_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(v_x_3722_, v_F_3723_, v_val_3724_, v_k_3725_, v_a_3726_, v_a_3727_, v_a_3728_, v_a_3729_, v_a_3730_, v_a_3731_);
lean_dec(v_a_3731_);
lean_dec_ref(v_a_3730_);
lean_dec(v_a_3729_);
lean_dec_ref(v_a_3728_);
lean_dec(v_a_3727_);
lean_dec_ref(v_a_3726_);
return v_res_3733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0(lean_object* v_00_u03b1_3734_, lean_object* v_name_3735_, uint8_t v_bi_3736_, lean_object* v_type_3737_, lean_object* v_k_3738_, uint8_t v_kind_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_){
_start:
{
lean_object* v___x_3747_; 
v___x_3747_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___redArg(v_name_3735_, v_bi_3736_, v_type_3737_, v_k_3738_, v_kind_3739_, v___y_3740_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_, v___y_3745_);
return v___x_3747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3748_, lean_object* v_name_3749_, lean_object* v_bi_3750_, lean_object* v_type_3751_, lean_object* v_k_3752_, lean_object* v_kind_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_){
_start:
{
uint8_t v_bi_boxed_3761_; uint8_t v_kind_boxed_3762_; lean_object* v_res_3763_; 
v_bi_boxed_3761_ = lean_unbox(v_bi_3750_);
v_kind_boxed_3762_ = lean_unbox(v_kind_3753_);
v_res_3763_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0_spec__0(v_00_u03b1_3748_, v_name_3749_, v_bi_boxed_3761_, v_type_3751_, v_k_3752_, v_kind_boxed_3762_, v___y_3754_, v___y_3755_, v___y_3756_, v___y_3757_, v___y_3758_, v___y_3759_);
lean_dec(v___y_3759_);
lean_dec_ref(v___y_3758_);
lean_dec(v___y_3757_);
lean_dec_ref(v___y_3756_);
lean_dec(v___y_3755_);
lean_dec_ref(v___y_3754_);
return v_res_3763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(lean_object* v_00_u03b1_3764_, lean_object* v_name_3765_, lean_object* v_type_3766_, lean_object* v_k_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_){
_start:
{
lean_object* v___x_3775_; 
v___x_3775_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v_name_3765_, v_type_3766_, v_k_3767_, v___y_3768_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_, v___y_3773_);
return v___x_3775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___boxed(lean_object* v_00_u03b1_3776_, lean_object* v_name_3777_, lean_object* v_type_3778_, lean_object* v_k_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_){
_start:
{
lean_object* v_res_3787_; 
v_res_3787_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(v_00_u03b1_3776_, v_name_3777_, v_type_3778_, v_k_3779_, v___y_3780_, v___y_3781_, v___y_3782_, v___y_3783_, v___y_3784_, v___y_3785_);
lean_dec(v___y_3785_);
lean_dec_ref(v___y_3784_);
lean_dec(v___y_3783_);
lean_dec_ref(v___y_3782_);
lean_dec(v___y_3781_);
lean_dec_ref(v___y_3780_);
return v_res_3787_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3788_; 
v___x_3788_ = l_Lean_Elab_Term_instInhabitedTermElabM___redArg();
return v___x_3788_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(lean_object* v_msg_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_){
_start:
{
lean_object* v___x_3797_; lean_object* v___x_2961__overap_3798_; lean_object* v___x_3799_; 
v___x_3797_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0, &l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0);
v___x_2961__overap_3798_ = lean_panic_fn_borrowed(v___x_3797_, v_msg_3789_);
lean_inc(v___y_3795_);
lean_inc_ref(v___y_3794_);
lean_inc(v___y_3793_);
lean_inc_ref(v___y_3792_);
lean_inc(v___y_3791_);
lean_inc_ref(v___y_3790_);
v___x_3799_ = lean_apply_7(v___x_2961__overap_3798_, v___y_3790_, v___y_3791_, v___y_3792_, v___y_3793_, v___y_3794_, v___y_3795_, lean_box(0));
return v___x_3799_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___boxed(lean_object* v_msg_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_){
_start:
{
lean_object* v_res_3808_; 
v_res_3808_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(v_msg_3800_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_);
lean_dec(v___y_3806_);
lean_dec_ref(v___y_3805_);
lean_dec(v___y_3804_);
lean_dec_ref(v___y_3803_);
lean_dec(v___y_3802_);
lean_dec_ref(v___y_3801_);
return v_res_3808_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3(void){
_start:
{
lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; 
v___x_3812_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2));
v___x_3813_ = lean_unsigned_to_nat(49u);
v___x_3814_ = lean_unsigned_to_nat(186u);
v___x_3815_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1));
v___x_3816_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0));
v___x_3817_ = l_mkPanicMessageWithDecl(v___x_3816_, v___x_3815_, v___x_3814_, v___x_3813_, v___x_3812_);
return v___x_3817_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed(lean_object* v___x_3822_, lean_object* v_a_3823_, lean_object* v_k_3824_, lean_object* v___x_3825_, lean_object* v___x_3826_, lean_object* v___x_3827_, lean_object* v___x_3828_, lean_object* v___x_3829_, lean_object* v_FNew_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_){
_start:
{
uint8_t v___x_3127__boxed_3838_; uint8_t v___x_3128__boxed_3839_; uint8_t v___x_3129__boxed_3840_; lean_object* v_res_3841_; 
v___x_3127__boxed_3838_ = lean_unbox(v___x_3827_);
v___x_3128__boxed_3839_ = lean_unbox(v___x_3828_);
v___x_3129__boxed_3840_ = lean_unbox(v___x_3829_);
v_res_3841_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(v___x_3822_, v_a_3823_, v_k_3824_, v___x_3825_, v___x_3826_, v___x_3127__boxed_3838_, v___x_3128__boxed_3839_, v___x_3129__boxed_3840_, v_FNew_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec(v___y_3834_);
lean_dec_ref(v___y_3833_);
lean_dec(v___y_3832_);
lean_dec_ref(v___y_3831_);
lean_dec(v___x_3825_);
return v_res_3841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(lean_object* v___x_3843_, lean_object* v___x_3844_, lean_object* v___x_3845_, lean_object* v___x_3846_, uint8_t v___x_3847_, uint8_t v___x_3848_, lean_object* v_k_3849_, lean_object* v___x_3850_, lean_object* v___x_3851_, lean_object* v_00_u03b1_3852_, lean_object* v_00_u03b2_3853_, lean_object* v___x_3854_, lean_object* v_a_3855_, lean_object* v_x_3856_, lean_object* v_xs_3857_, lean_object* v_body_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_){
_start:
{
lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; uint8_t v___x_3871_; lean_object* v___x_3872_; 
v___x_3866_ = lean_array_get(v___x_3843_, v_xs_3857_, v___x_3844_);
v___x_3867_ = lean_array_get(v___x_3843_, v_xs_3857_, v___x_3845_);
v___x_3868_ = lean_array_get_size(v_xs_3857_);
v___x_3869_ = l_Array_toSubarray___redArg(v_xs_3857_, v___x_3846_, v___x_3868_);
v___x_3870_ = l_Subarray_copy___redArg(v___x_3869_);
v___x_3871_ = 1;
v___x_3872_ = l_Lean_Meta_mkLambdaFVars(v___x_3870_, v_body_3858_, v___x_3847_, v___x_3848_, v___x_3847_, v___x_3848_, v___x_3871_, v___y_3861_, v___y_3862_, v___y_3863_, v___y_3864_);
lean_dec_ref(v___x_3870_);
if (lean_obj_tag(v___x_3872_) == 0)
{
lean_object* v_a_3873_; lean_object* v___x_3875_; uint8_t v_isShared_3876_; uint8_t v_isSharedCheck_3900_; 
v_a_3873_ = lean_ctor_get(v___x_3872_, 0);
v_isSharedCheck_3900_ = !lean_is_exclusive(v___x_3872_);
if (v_isSharedCheck_3900_ == 0)
{
v___x_3875_ = v___x_3872_;
v_isShared_3876_ = v_isSharedCheck_3900_;
goto v_resetjp_3874_;
}
else
{
lean_inc(v_a_3873_);
lean_dec(v___x_3872_);
v___x_3875_ = lean_box(0);
v_isShared_3876_ = v_isSharedCheck_3900_;
goto v_resetjp_3874_;
}
v_resetjp_3874_:
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___f_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3884_; 
v___x_3877_ = lean_box(v___x_3847_);
v___x_3878_ = lean_box(v___x_3848_);
v___x_3879_ = lean_box(v___x_3871_);
lean_inc(v___x_3866_);
lean_inc(v___x_3867_);
v___f_3880_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed), 16, 8);
lean_closure_set(v___f_3880_, 0, v___x_3867_);
lean_closure_set(v___f_3880_, 1, v_a_3873_);
lean_closure_set(v___f_3880_, 2, v_k_3849_);
lean_closure_set(v___f_3880_, 3, v___x_3850_);
lean_closure_set(v___f_3880_, 4, v___x_3866_);
lean_closure_set(v___f_3880_, 5, v___x_3877_);
lean_closure_set(v___f_3880_, 6, v___x_3878_);
lean_closure_set(v___f_3880_, 7, v___x_3879_);
v___x_3881_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0));
v___x_3882_ = l_Lean_Name_mkStr2(v___x_3851_, v___x_3881_);
if (v_isShared_3876_ == 0)
{
lean_ctor_set_tag(v___x_3875_, 1);
lean_ctor_set(v___x_3875_, 0, v_00_u03b1_3852_);
v___x_3884_ = v___x_3875_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3899_; 
v_reuseFailAlloc_3899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3899_, 0, v_00_u03b1_3852_);
v___x_3884_ = v_reuseFailAlloc_3899_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; 
v___x_3885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3885_, 0, v_00_u03b2_3853_);
v___x_3886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3886_, 0, v___x_3866_);
v___x_3887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3887_, 0, v___x_3867_);
v___x_3888_ = lean_mk_empty_array_with_capacity(v___x_3854_);
v___x_3889_ = lean_array_push(v___x_3888_, v___x_3884_);
v___x_3890_ = lean_array_push(v___x_3889_, v___x_3885_);
v___x_3891_ = lean_array_push(v___x_3890_, v___x_3886_);
v___x_3892_ = lean_array_push(v___x_3891_, v___x_3887_);
v___x_3893_ = l_Lean_Meta_mkAppOptM(v___x_3882_, v___x_3892_, v___y_3861_, v___y_3862_, v___y_3863_, v___y_3864_);
if (lean_obj_tag(v___x_3893_) == 0)
{
lean_object* v_a_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v_a_3894_ = lean_ctor_get(v___x_3893_, 0);
lean_inc(v_a_3894_);
lean_dec_ref_known(v___x_3893_, 1);
v___x_3895_ = l_Lean_LocalDecl_type(v_a_3855_);
v___x_3896_ = l_Lean_Expr_replaceFVar(v___x_3895_, v_x_3856_, v_a_3894_);
lean_dec(v_a_3894_);
lean_dec_ref(v___x_3895_);
v___x_3897_ = l_Lean_LocalDecl_userName(v_a_3855_);
v___x_3898_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v___x_3897_, v___x_3896_, v___f_3880_, v___y_3859_, v___y_3860_, v___y_3861_, v___y_3862_, v___y_3863_, v___y_3864_);
return v___x_3898_;
}
else
{
lean_dec_ref(v___f_3880_);
lean_dec_ref(v_x_3856_);
return v___x_3893_;
}
}
}
}
else
{
lean_dec(v___x_3867_);
lean_dec(v___x_3866_);
lean_dec_ref(v_x_3856_);
lean_dec_ref(v_00_u03b2_3853_);
lean_dec_ref(v_00_u03b1_3852_);
lean_dec_ref(v___x_3851_);
lean_dec(v___x_3850_);
lean_dec_ref(v_k_3849_);
return v___x_3872_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed(lean_object** _args){
lean_object* v___x_3901_ = _args[0];
lean_object* v___x_3902_ = _args[1];
lean_object* v___x_3903_ = _args[2];
lean_object* v___x_3904_ = _args[3];
lean_object* v___x_3905_ = _args[4];
lean_object* v___x_3906_ = _args[5];
lean_object* v_k_3907_ = _args[6];
lean_object* v___x_3908_ = _args[7];
lean_object* v___x_3909_ = _args[8];
lean_object* v_00_u03b1_3910_ = _args[9];
lean_object* v_00_u03b2_3911_ = _args[10];
lean_object* v___x_3912_ = _args[11];
lean_object* v_a_3913_ = _args[12];
lean_object* v_x_3914_ = _args[13];
lean_object* v_xs_3915_ = _args[14];
lean_object* v_body_3916_ = _args[15];
lean_object* v___y_3917_ = _args[16];
lean_object* v___y_3918_ = _args[17];
lean_object* v___y_3919_ = _args[18];
lean_object* v___y_3920_ = _args[19];
lean_object* v___y_3921_ = _args[20];
lean_object* v___y_3922_ = _args[21];
lean_object* v___y_3923_ = _args[22];
_start:
{
uint8_t v___x_3150__boxed_3924_; uint8_t v___x_3151__boxed_3925_; lean_object* v_res_3926_; 
v___x_3150__boxed_3924_ = lean_unbox(v___x_3905_);
v___x_3151__boxed_3925_ = lean_unbox(v___x_3906_);
v_res_3926_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(v___x_3901_, v___x_3902_, v___x_3903_, v___x_3904_, v___x_3150__boxed_3924_, v___x_3151__boxed_3925_, v_k_3907_, v___x_3908_, v___x_3909_, v_00_u03b1_3910_, v_00_u03b2_3911_, v___x_3912_, v_a_3913_, v_x_3914_, v_xs_3915_, v_body_3916_, v___y_3917_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_, v___y_3922_);
lean_dec(v___y_3922_);
lean_dec_ref(v___y_3921_);
lean_dec(v___y_3920_);
lean_dec_ref(v___y_3919_);
lean_dec(v___y_3918_);
lean_dec_ref(v___y_3917_);
lean_dec_ref(v_a_3913_);
lean_dec(v___x_3912_);
lean_dec(v___x_3903_);
lean_dec(v___x_3902_);
lean_dec_ref(v___x_3901_);
return v_res_3926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(lean_object* v_x_3927_, lean_object* v_F_3928_, lean_object* v_val_3929_, lean_object* v_k_3930_, lean_object* v_a_3931_, lean_object* v_a_3932_, lean_object* v_a_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_){
_start:
{
lean_object* v___y_3939_; lean_object* v___y_3940_; lean_object* v___y_3941_; lean_object* v___y_3942_; lean_object* v___y_3943_; lean_object* v___y_3944_; uint8_t v___x_3947_; 
v___x_3947_ = l_Lean_Expr_isFVar(v_x_3927_);
if (v___x_3947_ == 0)
{
lean_object* v___x_3948_; 
lean_dec_ref(v_x_3927_);
lean_inc(v_a_3936_);
lean_inc_ref(v_a_3935_);
lean_inc(v_a_3934_);
lean_inc_ref(v_a_3933_);
lean_inc(v_a_3932_);
lean_inc_ref(v_a_3931_);
v___x_3948_ = lean_apply_9(v_k_3930_, v_F_3928_, v_val_3929_, v_a_3931_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, lean_box(0));
return v___x_3948_;
}
else
{
lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; uint8_t v___x_3952_; 
v___x_3949_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4));
v___x_3950_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__5));
v___x_3951_ = lean_unsigned_to_nat(5u);
v___x_3952_ = l_Lean_Expr_isAppOfArity(v_val_3929_, v___x_3950_, v___x_3951_);
if (v___x_3952_ == 0)
{
lean_object* v___x_3953_; 
lean_dec_ref(v_x_3927_);
lean_inc(v_a_3936_);
lean_inc_ref(v_a_3935_);
lean_inc(v_a_3934_);
lean_inc_ref(v_a_3933_);
lean_inc(v_a_3932_);
lean_inc_ref(v_a_3931_);
v___x_3953_ = lean_apply_9(v_k_3930_, v_F_3928_, v_val_3929_, v_a_3931_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, lean_box(0));
return v___x_3953_;
}
else
{
lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; uint8_t v___x_3960_; 
v___x_3954_ = lean_unsigned_to_nat(3u);
v___x_3955_ = l_Lean_Expr_getAppNumArgs(v_val_3929_);
v___x_3956_ = lean_nat_sub(v___x_3955_, v___x_3954_);
v___x_3957_ = lean_unsigned_to_nat(1u);
v___x_3958_ = lean_nat_sub(v___x_3956_, v___x_3957_);
lean_dec(v___x_3956_);
v___x_3959_ = l_Lean_Expr_getRevArg_x21(v_val_3929_, v___x_3958_);
v___x_3960_ = lean_expr_eqv(v___x_3959_, v_x_3927_);
lean_dec_ref(v___x_3959_);
if (v___x_3960_ == 0)
{
lean_object* v___x_3961_; 
lean_dec(v___x_3955_);
lean_dec_ref(v_x_3927_);
lean_inc(v_a_3936_);
lean_inc_ref(v_a_3935_);
lean_inc(v_a_3934_);
lean_inc_ref(v_a_3933_);
lean_inc(v_a_3932_);
lean_inc_ref(v_a_3931_);
v___x_3961_ = lean_apply_9(v_k_3930_, v_F_3928_, v_val_3929_, v_a_3931_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, lean_box(0));
return v___x_3961_;
}
else
{
lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; uint8_t v___x_3966_; 
v___x_3962_ = lean_unsigned_to_nat(4u);
v___x_3963_ = lean_nat_sub(v___x_3955_, v___x_3962_);
v___x_3964_ = lean_nat_sub(v___x_3963_, v___x_3957_);
lean_dec(v___x_3963_);
v___x_3965_ = l_Lean_Expr_getRevArg_x21(v_val_3929_, v___x_3964_);
v___x_3966_ = l_Lean_Expr_isLambda(v___x_3965_);
if (v___x_3966_ == 0)
{
lean_object* v___x_3967_; 
lean_dec_ref(v___x_3965_);
lean_dec(v___x_3955_);
lean_dec_ref(v_x_3927_);
lean_inc(v_a_3936_);
lean_inc_ref(v_a_3935_);
lean_inc(v_a_3934_);
lean_inc_ref(v_a_3933_);
lean_inc(v_a_3932_);
lean_inc_ref(v_a_3931_);
v___x_3967_ = lean_apply_9(v_k_3930_, v_F_3928_, v_val_3929_, v_a_3931_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, lean_box(0));
return v___x_3967_;
}
else
{
lean_object* v___x_3968_; uint8_t v___x_3969_; 
v___x_3968_ = l_Lean_Expr_bindingBody_x21(v___x_3965_);
lean_dec_ref(v___x_3965_);
v___x_3969_ = l_Lean_Expr_isLambda(v___x_3968_);
lean_dec_ref(v___x_3968_);
if (v___x_3969_ == 0)
{
lean_object* v___x_3970_; 
lean_dec(v___x_3955_);
lean_dec_ref(v_x_3927_);
lean_inc(v_a_3936_);
lean_inc_ref(v_a_3935_);
lean_inc(v_a_3934_);
lean_inc_ref(v_a_3933_);
lean_inc(v_a_3932_);
lean_inc_ref(v_a_3931_);
v___x_3970_ = lean_apply_9(v_k_3930_, v_F_3928_, v_val_3929_, v_a_3931_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, lean_box(0));
return v___x_3970_;
}
else
{
lean_object* v___x_3971_; lean_object* v___x_3972_; 
v___x_3971_ = l_Lean_Expr_getAppFn(v_val_3929_);
v___x_3972_ = l_Lean_Expr_constLevels_x21(v___x_3971_);
lean_dec_ref(v___x_3971_);
if (lean_obj_tag(v___x_3972_) == 1)
{
lean_object* v_tail_3973_; 
v_tail_3973_ = lean_ctor_get(v___x_3972_, 1);
lean_inc(v_tail_3973_);
lean_dec_ref_known(v___x_3972_, 2);
if (lean_obj_tag(v_tail_3973_) == 1)
{
lean_object* v_tail_3974_; 
v_tail_3974_ = lean_ctor_get(v_tail_3973_, 1);
lean_inc(v_tail_3974_);
if (lean_obj_tag(v_tail_3974_) == 1)
{
lean_object* v_tail_3975_; lean_object* v___x_3977_; uint8_t v_isShared_3978_; uint8_t v_isSharedCheck_4041_; 
v_tail_3975_ = lean_ctor_get(v_tail_3974_, 1);
v_isSharedCheck_4041_ = !lean_is_exclusive(v_tail_3974_);
if (v_isSharedCheck_4041_ == 0)
{
lean_object* v_unused_4042_; 
v_unused_4042_ = lean_ctor_get(v_tail_3974_, 0);
lean_dec(v_unused_4042_);
v___x_3977_ = v_tail_3974_;
v_isShared_3978_ = v_isSharedCheck_4041_;
goto v_resetjp_3976_;
}
else
{
lean_inc(v_tail_3975_);
lean_dec(v_tail_3974_);
v___x_3977_ = lean_box(0);
v_isShared_3978_ = v_isSharedCheck_4041_;
goto v_resetjp_3976_;
}
v_resetjp_3976_:
{
if (lean_obj_tag(v_tail_3975_) == 0)
{
lean_object* v___x_3979_; lean_object* v_dummy_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v_args_3983_; lean_object* v___x_3984_; lean_object* v_00_u03b1_3985_; lean_object* v_00_u03b2_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; 
v___x_3979_ = l_Lean_instInhabitedExpr;
v_dummy_3980_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
lean_inc(v___x_3955_);
v___x_3981_ = lean_mk_array(v___x_3955_, v_dummy_3980_);
v___x_3982_ = lean_nat_sub(v___x_3955_, v___x_3957_);
lean_dec(v___x_3955_);
v_args_3983_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_3929_, v___x_3981_, v___x_3982_);
v___x_3984_ = lean_unsigned_to_nat(0u);
v_00_u03b1_3985_ = lean_array_get(v___x_3979_, v_args_3983_, v___x_3984_);
v_00_u03b2_3986_ = lean_array_get(v___x_3979_, v_args_3983_, v___x_3957_);
v___x_3987_ = l_Lean_Expr_fvarId_x21(v_F_3928_);
v___x_3988_ = l_Lean_FVarId_getDecl___redArg(v___x_3987_, v_a_3933_, v_a_3935_, v_a_3936_);
if (lean_obj_tag(v___x_3988_) == 0)
{
lean_object* v_a_3989_; lean_object* v___x_3990_; lean_object* v___f_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; uint8_t v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___f_3997_; lean_object* v___x_3998_; 
v_a_3989_ = lean_ctor_get(v___x_3988_, 0);
lean_inc_n(v_a_3989_, 2);
lean_dec_ref_known(v___x_3988_, 1);
v___x_3990_ = lean_box(v___x_3969_);
lean_inc_ref_n(v_x_3927_, 2);
v___f_3991_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed), 14, 5);
lean_closure_set(v___f_3991_, 0, v_a_3989_);
lean_closure_set(v___f_3991_, 1, v___x_3979_);
lean_closure_set(v___f_3991_, 2, v___x_3984_);
lean_closure_set(v___f_3991_, 3, v_x_3927_);
lean_closure_set(v___f_3991_, 4, v___x_3990_);
v___x_3992_ = lean_unsigned_to_nat(2u);
v___x_3993_ = lean_array_get_borrowed(v___x_3979_, v_args_3983_, v___x_3992_);
v___x_3994_ = 0;
v___x_3995_ = lean_box(v___x_3994_);
v___x_3996_ = lean_box(v___x_3969_);
lean_inc(v_00_u03b2_3986_);
lean_inc(v_00_u03b1_3985_);
v___f_3997_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed), 23, 14);
lean_closure_set(v___f_3997_, 0, v___x_3979_);
lean_closure_set(v___f_3997_, 1, v___x_3984_);
lean_closure_set(v___f_3997_, 2, v___x_3957_);
lean_closure_set(v___f_3997_, 3, v___x_3992_);
lean_closure_set(v___f_3997_, 4, v___x_3995_);
lean_closure_set(v___f_3997_, 5, v___x_3996_);
lean_closure_set(v___f_3997_, 6, v_k_3930_);
lean_closure_set(v___f_3997_, 7, v___x_3954_);
lean_closure_set(v___f_3997_, 8, v___x_3949_);
lean_closure_set(v___f_3997_, 9, v_00_u03b1_3985_);
lean_closure_set(v___f_3997_, 10, v_00_u03b2_3986_);
lean_closure_set(v___f_3997_, 11, v___x_3962_);
lean_closure_set(v___f_3997_, 12, v_a_3989_);
lean_closure_set(v___f_3997_, 13, v_x_3927_);
lean_inc(v___x_3993_);
v___x_3998_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v___x_3993_, v___f_3991_, v___x_3994_, v_a_3931_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_);
if (lean_obj_tag(v___x_3998_) == 0)
{
lean_object* v_a_3999_; lean_object* v_fst_4000_; lean_object* v_snd_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; 
v_a_3999_ = lean_ctor_get(v___x_3998_, 0);
lean_inc(v_a_3999_);
lean_dec_ref_known(v___x_3998_, 1);
v_fst_4000_ = lean_ctor_get(v_a_3999_, 0);
lean_inc(v_fst_4000_);
v_snd_4001_ = lean_ctor_get(v_a_3999_, 1);
lean_inc(v_snd_4001_);
lean_dec(v_a_3999_);
v___x_4002_ = lean_array_get(v___x_3979_, v_args_3983_, v___x_3962_);
lean_dec_ref(v_args_3983_);
v___x_4003_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v___x_4002_, v___f_3997_, v___x_3994_, v_a_3931_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_);
if (lean_obj_tag(v___x_4003_) == 0)
{
lean_object* v_a_4004_; lean_object* v___x_4006_; uint8_t v_isShared_4007_; uint8_t v_isSharedCheck_4024_; 
v_a_4004_ = lean_ctor_get(v___x_4003_, 0);
v_isSharedCheck_4024_ = !lean_is_exclusive(v___x_4003_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_4006_ = v___x_4003_;
v_isShared_4007_ = v_isSharedCheck_4024_;
goto v_resetjp_4005_;
}
else
{
lean_inc(v_a_4004_);
lean_dec(v___x_4003_);
v___x_4006_ = lean_box(0);
v_isShared_4007_ = v_isSharedCheck_4024_;
goto v_resetjp_4005_;
}
v_resetjp_4005_:
{
lean_object* v___x_4009_; 
if (v_isShared_3978_ == 0)
{
lean_ctor_set(v___x_3977_, 1, v_tail_3973_);
lean_ctor_set(v___x_3977_, 0, v_snd_4001_);
v___x_4009_ = v___x_3977_;
goto v_reusejp_4008_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v_snd_4001_);
lean_ctor_set(v_reuseFailAlloc_4023_, 1, v_tail_3973_);
v___x_4009_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4008_;
}
v_reusejp_4008_:
{
lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4021_; 
v___x_4010_ = l_Lean_mkConst(v___x_3950_, v___x_4009_);
v___x_4011_ = lean_unsigned_to_nat(6u);
v___x_4012_ = lean_mk_empty_array_with_capacity(v___x_4011_);
v___x_4013_ = lean_array_push(v___x_4012_, v_00_u03b1_3985_);
v___x_4014_ = lean_array_push(v___x_4013_, v_00_u03b2_3986_);
v___x_4015_ = lean_array_push(v___x_4014_, v_fst_4000_);
v___x_4016_ = lean_array_push(v___x_4015_, v_x_3927_);
v___x_4017_ = lean_array_push(v___x_4016_, v_a_4004_);
v___x_4018_ = lean_array_push(v___x_4017_, v_F_3928_);
v___x_4019_ = l_Lean_mkAppN(v___x_4010_, v___x_4018_);
lean_dec_ref(v___x_4018_);
if (v_isShared_4007_ == 0)
{
lean_ctor_set(v___x_4006_, 0, v___x_4019_);
v___x_4021_ = v___x_4006_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4022_; 
v_reuseFailAlloc_4022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4022_, 0, v___x_4019_);
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
else
{
lean_dec(v_snd_4001_);
lean_dec(v_fst_4000_);
lean_dec(v_00_u03b2_3986_);
lean_dec(v_00_u03b1_3985_);
lean_del_object(v___x_3977_);
lean_dec_ref_known(v_tail_3973_, 2);
lean_dec_ref(v_F_3928_);
lean_dec_ref(v_x_3927_);
return v___x_4003_;
}
}
else
{
lean_object* v_a_4025_; lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4032_; 
lean_dec_ref(v___f_3997_);
lean_dec(v_00_u03b2_3986_);
lean_dec(v_00_u03b1_3985_);
lean_dec_ref(v_args_3983_);
lean_del_object(v___x_3977_);
lean_dec_ref_known(v_tail_3973_, 2);
lean_dec_ref(v_F_3928_);
lean_dec_ref(v_x_3927_);
v_a_4025_ = lean_ctor_get(v___x_3998_, 0);
v_isSharedCheck_4032_ = !lean_is_exclusive(v___x_3998_);
if (v_isSharedCheck_4032_ == 0)
{
v___x_4027_ = v___x_3998_;
v_isShared_4028_ = v_isSharedCheck_4032_;
goto v_resetjp_4026_;
}
else
{
lean_inc(v_a_4025_);
lean_dec(v___x_3998_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4032_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
lean_object* v___x_4030_; 
if (v_isShared_4028_ == 0)
{
v___x_4030_ = v___x_4027_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4031_; 
v_reuseFailAlloc_4031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4031_, 0, v_a_4025_);
v___x_4030_ = v_reuseFailAlloc_4031_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
return v___x_4030_;
}
}
}
}
else
{
lean_object* v_a_4033_; lean_object* v___x_4035_; uint8_t v_isShared_4036_; uint8_t v_isSharedCheck_4040_; 
lean_dec(v_00_u03b2_3986_);
lean_dec(v_00_u03b1_3985_);
lean_dec_ref(v_args_3983_);
lean_del_object(v___x_3977_);
lean_dec_ref_known(v_tail_3973_, 2);
lean_dec_ref(v_k_3930_);
lean_dec_ref(v_F_3928_);
lean_dec_ref(v_x_3927_);
v_a_4033_ = lean_ctor_get(v___x_3988_, 0);
v_isSharedCheck_4040_ = !lean_is_exclusive(v___x_3988_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_4035_ = v___x_3988_;
v_isShared_4036_ = v_isSharedCheck_4040_;
goto v_resetjp_4034_;
}
else
{
lean_inc(v_a_4033_);
lean_dec(v___x_3988_);
v___x_4035_ = lean_box(0);
v_isShared_4036_ = v_isSharedCheck_4040_;
goto v_resetjp_4034_;
}
v_resetjp_4034_:
{
lean_object* v___x_4038_; 
if (v_isShared_4036_ == 0)
{
v___x_4038_ = v___x_4035_;
goto v_reusejp_4037_;
}
else
{
lean_object* v_reuseFailAlloc_4039_; 
v_reuseFailAlloc_4039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4039_, 0, v_a_4033_);
v___x_4038_ = v_reuseFailAlloc_4039_;
goto v_reusejp_4037_;
}
v_reusejp_4037_:
{
return v___x_4038_;
}
}
}
}
else
{
lean_del_object(v___x_3977_);
lean_dec(v_tail_3975_);
lean_dec_ref_known(v_tail_3973_, 2);
lean_dec(v___x_3955_);
lean_dec_ref(v_k_3930_);
lean_dec_ref(v_val_3929_);
lean_dec_ref(v_F_3928_);
lean_dec_ref(v_x_3927_);
v___y_3939_ = v_a_3931_;
v___y_3940_ = v_a_3932_;
v___y_3941_ = v_a_3933_;
v___y_3942_ = v_a_3934_;
v___y_3943_ = v_a_3935_;
v___y_3944_ = v_a_3936_;
goto v___jp_3938_;
}
}
}
else
{
lean_dec_ref_known(v_tail_3973_, 2);
lean_dec(v_tail_3974_);
lean_dec(v___x_3955_);
lean_dec_ref(v_k_3930_);
lean_dec_ref(v_val_3929_);
lean_dec_ref(v_F_3928_);
lean_dec_ref(v_x_3927_);
v___y_3939_ = v_a_3931_;
v___y_3940_ = v_a_3932_;
v___y_3941_ = v_a_3933_;
v___y_3942_ = v_a_3934_;
v___y_3943_ = v_a_3935_;
v___y_3944_ = v_a_3936_;
goto v___jp_3938_;
}
}
else
{
lean_dec(v_tail_3973_);
lean_dec(v___x_3955_);
lean_dec_ref(v_k_3930_);
lean_dec_ref(v_val_3929_);
lean_dec_ref(v_F_3928_);
lean_dec_ref(v_x_3927_);
v___y_3939_ = v_a_3931_;
v___y_3940_ = v_a_3932_;
v___y_3941_ = v_a_3933_;
v___y_3942_ = v_a_3934_;
v___y_3943_ = v_a_3935_;
v___y_3944_ = v_a_3936_;
goto v___jp_3938_;
}
}
else
{
lean_dec(v___x_3972_);
lean_dec(v___x_3955_);
lean_dec_ref(v_k_3930_);
lean_dec_ref(v_val_3929_);
lean_dec_ref(v_F_3928_);
lean_dec_ref(v_x_3927_);
v___y_3939_ = v_a_3931_;
v___y_3940_ = v_a_3932_;
v___y_3941_ = v_a_3933_;
v___y_3942_ = v_a_3934_;
v___y_3943_ = v_a_3935_;
v___y_3944_ = v_a_3936_;
goto v___jp_3938_;
}
}
}
}
}
}
v___jp_3938_:
{
lean_object* v___x_3945_; lean_object* v___x_3946_; 
v___x_3945_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3);
v___x_3946_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(v___x_3945_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_);
return v___x_3946_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(lean_object* v___x_4043_, lean_object* v_a_4044_, lean_object* v_k_4045_, lean_object* v___x_4046_, lean_object* v___x_4047_, uint8_t v___x_4048_, uint8_t v___x_4049_, uint8_t v___x_4050_, lean_object* v_FNew_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_){
_start:
{
lean_object* v___x_4059_; 
lean_inc_ref(v_FNew_4051_);
lean_inc_ref(v___x_4043_);
v___x_4059_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(v___x_4043_, v_FNew_4051_, v_a_4044_, v_k_4045_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_);
if (lean_obj_tag(v___x_4059_) == 0)
{
lean_object* v_a_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; 
v_a_4060_ = lean_ctor_get(v___x_4059_, 0);
lean_inc(v_a_4060_);
lean_dec_ref_known(v___x_4059_, 1);
v___x_4061_ = lean_mk_empty_array_with_capacity(v___x_4046_);
v___x_4062_ = lean_array_push(v___x_4061_, v___x_4047_);
v___x_4063_ = lean_array_push(v___x_4062_, v___x_4043_);
v___x_4064_ = lean_array_push(v___x_4063_, v_FNew_4051_);
v___x_4065_ = l_Lean_Meta_mkLambdaFVars(v___x_4064_, v_a_4060_, v___x_4048_, v___x_4049_, v___x_4048_, v___x_4049_, v___x_4050_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_);
lean_dec_ref(v___x_4064_);
return v___x_4065_;
}
else
{
lean_dec_ref(v_FNew_4051_);
lean_dec_ref(v___x_4047_);
lean_dec_ref(v___x_4043_);
return v___x_4059_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___boxed(lean_object* v_x_4066_, lean_object* v_F_4067_, lean_object* v_val_4068_, lean_object* v_k_4069_, lean_object* v_a_4070_, lean_object* v_a_4071_, lean_object* v_a_4072_, lean_object* v_a_4073_, lean_object* v_a_4074_, lean_object* v_a_4075_, lean_object* v_a_4076_){
_start:
{
lean_object* v_res_4077_; 
v_res_4077_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(v_x_4066_, v_F_4067_, v_val_4068_, v_k_4069_, v_a_4070_, v_a_4071_, v_a_4072_, v_a_4073_, v_a_4074_, v_a_4075_);
lean_dec(v_a_4075_);
lean_dec_ref(v_a_4074_);
lean_dec(v_a_4073_);
lean_dec_ref(v_a_4072_);
lean_dec(v_a_4071_);
lean_dec_ref(v_a_4070_);
return v_res_4077_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0(lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_){
_start:
{
lean_object* v___x_4091_; 
v___x_4091_ = l_Lean_Elab_WF_applyCleanWfTactic(v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_);
if (lean_obj_tag(v___x_4091_) == 0)
{
lean_object* v_ref_4092_; uint8_t v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; 
lean_dec_ref_known(v___x_4091_, 1);
v_ref_4092_ = lean_ctor_get(v___y_4088_, 2);
v___x_4093_ = 0;
v___x_4094_ = l_Lean_SourceInfo_fromRef(v_ref_4092_, v___x_4093_);
v___x_4095_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1));
v___x_4096_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2));
lean_inc(v___x_4094_);
v___x_4097_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4097_, 0, v___x_4094_);
lean_ctor_set(v___x_4097_, 1, v___x_4096_);
v___x_4098_ = l_Lean_Syntax_node1(v___x_4094_, v___x_4095_, v___x_4097_);
v___x_4099_ = l_Lean_Elab_Tactic_evalTactic(v___x_4098_, v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_);
return v___x_4099_;
}
else
{
return v___x_4091_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___boxed(lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_){
_start:
{
lean_object* v_res_4109_; 
v_res_4109_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0(v___y_4100_, v___y_4101_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_);
lean_dec(v___y_4107_);
lean_dec_ref(v___y_4106_);
lean_dec(v___y_4105_);
lean_dec_ref(v___y_4104_);
lean_dec(v___y_4103_);
lean_dec_ref(v___y_4102_);
lean_dec(v___y_4101_);
lean_dec_ref(v___y_4100_);
return v_res_4109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(lean_object* v_mvarId_4111_, lean_object* v_a_4112_, lean_object* v_a_4113_, lean_object* v_a_4114_, lean_object* v_a_4115_, lean_object* v_a_4116_, lean_object* v_a_4117_){
_start:
{
lean_object* v___f_4119_; lean_object* v___x_4120_; 
v___f_4119_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0));
v___x_4120_ = l_Lean_Elab_Tactic_run(v_mvarId_4111_, v___f_4119_, v_a_4112_, v_a_4113_, v_a_4114_, v_a_4115_, v_a_4116_, v_a_4117_);
if (lean_obj_tag(v___x_4120_) == 0)
{
lean_object* v_a_4121_; lean_object* v___x_4123_; uint8_t v_isShared_4124_; uint8_t v_isSharedCheck_4131_; 
v_a_4121_ = lean_ctor_get(v___x_4120_, 0);
v_isSharedCheck_4131_ = !lean_is_exclusive(v___x_4120_);
if (v_isSharedCheck_4131_ == 0)
{
v___x_4123_ = v___x_4120_;
v_isShared_4124_ = v_isSharedCheck_4131_;
goto v_resetjp_4122_;
}
else
{
lean_inc(v_a_4121_);
lean_dec(v___x_4120_);
v___x_4123_ = lean_box(0);
v_isShared_4124_ = v_isSharedCheck_4131_;
goto v_resetjp_4122_;
}
v_resetjp_4122_:
{
uint8_t v___x_4125_; 
v___x_4125_ = l_List_isEmpty___redArg(v_a_4121_);
if (v___x_4125_ == 0)
{
lean_object* v___x_4126_; 
lean_del_object(v___x_4123_);
v___x_4126_ = l_Lean_Elab_Term_reportUnsolvedGoals(v_a_4121_, v_a_4114_, v_a_4115_, v_a_4116_, v_a_4117_);
return v___x_4126_;
}
else
{
lean_object* v___x_4127_; lean_object* v___x_4129_; 
lean_dec(v_a_4121_);
v___x_4127_ = lean_box(0);
if (v_isShared_4124_ == 0)
{
lean_ctor_set(v___x_4123_, 0, v___x_4127_);
v___x_4129_ = v___x_4123_;
goto v_reusejp_4128_;
}
else
{
lean_object* v_reuseFailAlloc_4130_; 
v_reuseFailAlloc_4130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4130_, 0, v___x_4127_);
v___x_4129_ = v_reuseFailAlloc_4130_;
goto v_reusejp_4128_;
}
v_reusejp_4128_:
{
return v___x_4129_;
}
}
}
}
else
{
lean_object* v_a_4132_; lean_object* v___x_4134_; uint8_t v_isShared_4135_; uint8_t v_isSharedCheck_4139_; 
v_a_4132_ = lean_ctor_get(v___x_4120_, 0);
v_isSharedCheck_4139_ = !lean_is_exclusive(v___x_4120_);
if (v_isSharedCheck_4139_ == 0)
{
v___x_4134_ = v___x_4120_;
v_isShared_4135_ = v_isSharedCheck_4139_;
goto v_resetjp_4133_;
}
else
{
lean_inc(v_a_4132_);
lean_dec(v___x_4120_);
v___x_4134_ = lean_box(0);
v_isShared_4135_ = v_isSharedCheck_4139_;
goto v_resetjp_4133_;
}
v_resetjp_4133_:
{
lean_object* v___x_4137_; 
if (v_isShared_4135_ == 0)
{
v___x_4137_ = v___x_4134_;
goto v_reusejp_4136_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v_a_4132_);
v___x_4137_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4136_;
}
v_reusejp_4136_:
{
return v___x_4137_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___boxed(lean_object* v_mvarId_4140_, lean_object* v_a_4141_, lean_object* v_a_4142_, lean_object* v_a_4143_, lean_object* v_a_4144_, lean_object* v_a_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_){
_start:
{
lean_object* v_res_4148_; 
v_res_4148_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(v_mvarId_4140_, v_a_4141_, v_a_4142_, v_a_4143_, v_a_4144_, v_a_4145_, v_a_4146_);
lean_dec(v_a_4146_);
lean_dec_ref(v_a_4145_);
lean_dec(v_a_4144_);
lean_dec_ref(v_a_4143_);
lean_dec(v_a_4142_);
lean_dec_ref(v_a_4141_);
return v_res_4148_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object* v_x_4149_, lean_object* v_x_4150_, lean_object* v_x_4151_, lean_object* v_x_4152_){
_start:
{
lean_object* v_ks_4153_; lean_object* v_vs_4154_; lean_object* v___x_4156_; uint8_t v_isShared_4157_; uint8_t v_isSharedCheck_4178_; 
v_ks_4153_ = lean_ctor_get(v_x_4149_, 0);
v_vs_4154_ = lean_ctor_get(v_x_4149_, 1);
v_isSharedCheck_4178_ = !lean_is_exclusive(v_x_4149_);
if (v_isSharedCheck_4178_ == 0)
{
v___x_4156_ = v_x_4149_;
v_isShared_4157_ = v_isSharedCheck_4178_;
goto v_resetjp_4155_;
}
else
{
lean_inc(v_vs_4154_);
lean_inc(v_ks_4153_);
lean_dec(v_x_4149_);
v___x_4156_ = lean_box(0);
v_isShared_4157_ = v_isSharedCheck_4178_;
goto v_resetjp_4155_;
}
v_resetjp_4155_:
{
lean_object* v___x_4158_; uint8_t v___x_4159_; 
v___x_4158_ = lean_array_get_size(v_ks_4153_);
v___x_4159_ = lean_nat_dec_lt(v_x_4150_, v___x_4158_);
if (v___x_4159_ == 0)
{
lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4163_; 
lean_dec(v_x_4150_);
v___x_4160_ = lean_array_push(v_ks_4153_, v_x_4151_);
v___x_4161_ = lean_array_push(v_vs_4154_, v_x_4152_);
if (v_isShared_4157_ == 0)
{
lean_ctor_set(v___x_4156_, 1, v___x_4161_);
lean_ctor_set(v___x_4156_, 0, v___x_4160_);
v___x_4163_ = v___x_4156_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v___x_4160_);
lean_ctor_set(v_reuseFailAlloc_4164_, 1, v___x_4161_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
return v___x_4163_;
}
}
else
{
lean_object* v_k_x27_4165_; uint8_t v___x_4166_; 
v_k_x27_4165_ = lean_array_fget_borrowed(v_ks_4153_, v_x_4150_);
v___x_4166_ = l_Lean_instBEqMVarId_beq(v_x_4151_, v_k_x27_4165_);
if (v___x_4166_ == 0)
{
lean_object* v___x_4168_; 
if (v_isShared_4157_ == 0)
{
v___x_4168_ = v___x_4156_;
goto v_reusejp_4167_;
}
else
{
lean_object* v_reuseFailAlloc_4172_; 
v_reuseFailAlloc_4172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4172_, 0, v_ks_4153_);
lean_ctor_set(v_reuseFailAlloc_4172_, 1, v_vs_4154_);
v___x_4168_ = v_reuseFailAlloc_4172_;
goto v_reusejp_4167_;
}
v_reusejp_4167_:
{
lean_object* v___x_4169_; lean_object* v___x_4170_; 
v___x_4169_ = lean_unsigned_to_nat(1u);
v___x_4170_ = lean_nat_add(v_x_4150_, v___x_4169_);
lean_dec(v_x_4150_);
v_x_4149_ = v___x_4168_;
v_x_4150_ = v___x_4170_;
goto _start;
}
}
else
{
lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4176_; 
v___x_4173_ = lean_array_fset(v_ks_4153_, v_x_4150_, v_x_4151_);
v___x_4174_ = lean_array_fset(v_vs_4154_, v_x_4150_, v_x_4152_);
lean_dec(v_x_4150_);
if (v_isShared_4157_ == 0)
{
lean_ctor_set(v___x_4156_, 1, v___x_4174_);
lean_ctor_set(v___x_4156_, 0, v___x_4173_);
v___x_4176_ = v___x_4156_;
goto v_reusejp_4175_;
}
else
{
lean_object* v_reuseFailAlloc_4177_; 
v_reuseFailAlloc_4177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4177_, 0, v___x_4173_);
lean_ctor_set(v_reuseFailAlloc_4177_, 1, v___x_4174_);
v___x_4176_ = v_reuseFailAlloc_4177_;
goto v_reusejp_4175_;
}
v_reusejp_4175_:
{
return v___x_4176_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_n_4179_, lean_object* v_k_4180_, lean_object* v_v_4181_){
_start:
{
lean_object* v___x_4182_; lean_object* v___x_4183_; 
v___x_4182_ = lean_unsigned_to_nat(0u);
v___x_4183_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_n_4179_, v___x_4182_, v_k_4180_, v_v_4181_);
return v___x_4183_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_4184_; 
v___x_4184_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_4184_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(lean_object* v_x_4185_, size_t v_x_4186_, size_t v_x_4187_, lean_object* v_x_4188_, lean_object* v_x_4189_){
_start:
{
if (lean_obj_tag(v_x_4185_) == 0)
{
lean_object* v_es_4190_; size_t v___x_4191_; size_t v___x_4192_; lean_object* v_j_4193_; lean_object* v___x_4194_; uint8_t v___x_4195_; 
v_es_4190_ = lean_ctor_get(v_x_4185_, 0);
v___x_4191_ = ((size_t)31ULL);
v___x_4192_ = lean_usize_land(v_x_4186_, v___x_4191_);
v_j_4193_ = lean_usize_to_nat(v___x_4192_);
v___x_4194_ = lean_array_get_size(v_es_4190_);
v___x_4195_ = lean_nat_dec_lt(v_j_4193_, v___x_4194_);
if (v___x_4195_ == 0)
{
lean_dec(v_j_4193_);
lean_dec(v_x_4189_);
lean_dec(v_x_4188_);
return v_x_4185_;
}
else
{
lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4234_; 
lean_inc_ref(v_es_4190_);
v_isSharedCheck_4234_ = !lean_is_exclusive(v_x_4185_);
if (v_isSharedCheck_4234_ == 0)
{
lean_object* v_unused_4235_; 
v_unused_4235_ = lean_ctor_get(v_x_4185_, 0);
lean_dec(v_unused_4235_);
v___x_4197_ = v_x_4185_;
v_isShared_4198_ = v_isSharedCheck_4234_;
goto v_resetjp_4196_;
}
else
{
lean_dec(v_x_4185_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4234_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v_v_4199_; lean_object* v___x_4200_; lean_object* v_xs_x27_4201_; lean_object* v___y_4203_; 
v_v_4199_ = lean_array_fget(v_es_4190_, v_j_4193_);
v___x_4200_ = lean_box(0);
v_xs_x27_4201_ = lean_array_fset(v_es_4190_, v_j_4193_, v___x_4200_);
switch(lean_obj_tag(v_v_4199_))
{
case 0:
{
lean_object* v_key_4208_; lean_object* v_val_4209_; lean_object* v___x_4211_; uint8_t v_isShared_4212_; uint8_t v_isSharedCheck_4219_; 
v_key_4208_ = lean_ctor_get(v_v_4199_, 0);
v_val_4209_ = lean_ctor_get(v_v_4199_, 1);
v_isSharedCheck_4219_ = !lean_is_exclusive(v_v_4199_);
if (v_isSharedCheck_4219_ == 0)
{
v___x_4211_ = v_v_4199_;
v_isShared_4212_ = v_isSharedCheck_4219_;
goto v_resetjp_4210_;
}
else
{
lean_inc(v_val_4209_);
lean_inc(v_key_4208_);
lean_dec(v_v_4199_);
v___x_4211_ = lean_box(0);
v_isShared_4212_ = v_isSharedCheck_4219_;
goto v_resetjp_4210_;
}
v_resetjp_4210_:
{
uint8_t v___x_4213_; 
v___x_4213_ = l_Lean_instBEqMVarId_beq(v_x_4188_, v_key_4208_);
if (v___x_4213_ == 0)
{
lean_object* v___x_4214_; lean_object* v___x_4215_; 
lean_del_object(v___x_4211_);
v___x_4214_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_4208_, v_val_4209_, v_x_4188_, v_x_4189_);
v___x_4215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4215_, 0, v___x_4214_);
v___y_4203_ = v___x_4215_;
goto v___jp_4202_;
}
else
{
lean_object* v___x_4217_; 
lean_dec(v_val_4209_);
lean_dec(v_key_4208_);
if (v_isShared_4212_ == 0)
{
lean_ctor_set(v___x_4211_, 1, v_x_4189_);
lean_ctor_set(v___x_4211_, 0, v_x_4188_);
v___x_4217_ = v___x_4211_;
goto v_reusejp_4216_;
}
else
{
lean_object* v_reuseFailAlloc_4218_; 
v_reuseFailAlloc_4218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4218_, 0, v_x_4188_);
lean_ctor_set(v_reuseFailAlloc_4218_, 1, v_x_4189_);
v___x_4217_ = v_reuseFailAlloc_4218_;
goto v_reusejp_4216_;
}
v_reusejp_4216_:
{
v___y_4203_ = v___x_4217_;
goto v___jp_4202_;
}
}
}
}
case 1:
{
lean_object* v_node_4220_; lean_object* v___x_4222_; uint8_t v_isShared_4223_; uint8_t v_isSharedCheck_4232_; 
v_node_4220_ = lean_ctor_get(v_v_4199_, 0);
v_isSharedCheck_4232_ = !lean_is_exclusive(v_v_4199_);
if (v_isSharedCheck_4232_ == 0)
{
v___x_4222_ = v_v_4199_;
v_isShared_4223_ = v_isSharedCheck_4232_;
goto v_resetjp_4221_;
}
else
{
lean_inc(v_node_4220_);
lean_dec(v_v_4199_);
v___x_4222_ = lean_box(0);
v_isShared_4223_ = v_isSharedCheck_4232_;
goto v_resetjp_4221_;
}
v_resetjp_4221_:
{
size_t v___x_4224_; size_t v___x_4225_; size_t v___x_4226_; size_t v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4230_; 
v___x_4224_ = ((size_t)5ULL);
v___x_4225_ = lean_usize_shift_right(v_x_4186_, v___x_4224_);
v___x_4226_ = ((size_t)1ULL);
v___x_4227_ = lean_usize_add(v_x_4187_, v___x_4226_);
v___x_4228_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_node_4220_, v___x_4225_, v___x_4227_, v_x_4188_, v_x_4189_);
if (v_isShared_4223_ == 0)
{
lean_ctor_set(v___x_4222_, 0, v___x_4228_);
v___x_4230_ = v___x_4222_;
goto v_reusejp_4229_;
}
else
{
lean_object* v_reuseFailAlloc_4231_; 
v_reuseFailAlloc_4231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4231_, 0, v___x_4228_);
v___x_4230_ = v_reuseFailAlloc_4231_;
goto v_reusejp_4229_;
}
v_reusejp_4229_:
{
v___y_4203_ = v___x_4230_;
goto v___jp_4202_;
}
}
}
default: 
{
lean_object* v___x_4233_; 
v___x_4233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4233_, 0, v_x_4188_);
lean_ctor_set(v___x_4233_, 1, v_x_4189_);
v___y_4203_ = v___x_4233_;
goto v___jp_4202_;
}
}
v___jp_4202_:
{
lean_object* v___x_4204_; lean_object* v___x_4206_; 
v___x_4204_ = lean_array_fset(v_xs_x27_4201_, v_j_4193_, v___y_4203_);
lean_dec(v_j_4193_);
if (v_isShared_4198_ == 0)
{
lean_ctor_set(v___x_4197_, 0, v___x_4204_);
v___x_4206_ = v___x_4197_;
goto v_reusejp_4205_;
}
else
{
lean_object* v_reuseFailAlloc_4207_; 
v_reuseFailAlloc_4207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4207_, 0, v___x_4204_);
v___x_4206_ = v_reuseFailAlloc_4207_;
goto v_reusejp_4205_;
}
v_reusejp_4205_:
{
return v___x_4206_;
}
}
}
}
}
else
{
lean_object* v_ks_4236_; lean_object* v_vs_4237_; lean_object* v___x_4239_; uint8_t v_isShared_4240_; uint8_t v_isSharedCheck_4255_; 
v_ks_4236_ = lean_ctor_get(v_x_4185_, 0);
v_vs_4237_ = lean_ctor_get(v_x_4185_, 1);
v_isSharedCheck_4255_ = !lean_is_exclusive(v_x_4185_);
if (v_isSharedCheck_4255_ == 0)
{
v___x_4239_ = v_x_4185_;
v_isShared_4240_ = v_isSharedCheck_4255_;
goto v_resetjp_4238_;
}
else
{
lean_inc(v_vs_4237_);
lean_inc(v_ks_4236_);
lean_dec(v_x_4185_);
v___x_4239_ = lean_box(0);
v_isShared_4240_ = v_isSharedCheck_4255_;
goto v_resetjp_4238_;
}
v_resetjp_4238_:
{
lean_object* v___x_4242_; 
if (v_isShared_4240_ == 0)
{
v___x_4242_ = v___x_4239_;
goto v_reusejp_4241_;
}
else
{
lean_object* v_reuseFailAlloc_4254_; 
v_reuseFailAlloc_4254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4254_, 0, v_ks_4236_);
lean_ctor_set(v_reuseFailAlloc_4254_, 1, v_vs_4237_);
v___x_4242_ = v_reuseFailAlloc_4254_;
goto v_reusejp_4241_;
}
v_reusejp_4241_:
{
lean_object* v_newNode_4243_; size_t v___x_4244_; uint8_t v___x_4245_; 
v_newNode_4243_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(v___x_4242_, v_x_4188_, v_x_4189_);
v___x_4244_ = ((size_t)7ULL);
v___x_4245_ = lean_usize_dec_le(v___x_4244_, v_x_4187_);
if (v___x_4245_ == 0)
{
lean_object* v___x_4246_; lean_object* v___x_4247_; uint8_t v___x_4248_; 
v___x_4246_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_4243_);
v___x_4247_ = lean_unsigned_to_nat(4u);
v___x_4248_ = lean_nat_dec_lt(v___x_4246_, v___x_4247_);
lean_dec(v___x_4246_);
if (v___x_4248_ == 0)
{
lean_object* v_ks_4249_; lean_object* v_vs_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; 
v_ks_4249_ = lean_ctor_get(v_newNode_4243_, 0);
lean_inc_ref(v_ks_4249_);
v_vs_4250_ = lean_ctor_get(v_newNode_4243_, 1);
lean_inc_ref(v_vs_4250_);
lean_dec_ref(v_newNode_4243_);
v___x_4251_ = lean_unsigned_to_nat(0u);
v___x_4252_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_4253_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(v_x_4187_, v_ks_4249_, v_vs_4250_, v___x_4251_, v___x_4252_);
lean_dec_ref(v_vs_4250_);
lean_dec_ref(v_ks_4249_);
return v___x_4253_;
}
else
{
return v_newNode_4243_;
}
}
else
{
return v_newNode_4243_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(size_t v_depth_4256_, lean_object* v_keys_4257_, lean_object* v_vals_4258_, lean_object* v_i_4259_, lean_object* v_entries_4260_){
_start:
{
lean_object* v___x_4261_; uint8_t v___x_4262_; 
v___x_4261_ = lean_array_get_size(v_keys_4257_);
v___x_4262_ = lean_nat_dec_lt(v_i_4259_, v___x_4261_);
if (v___x_4262_ == 0)
{
lean_dec(v_i_4259_);
return v_entries_4260_;
}
else
{
lean_object* v_k_4263_; lean_object* v_v_4264_; uint64_t v___x_4265_; size_t v_h_4266_; size_t v___x_4267_; lean_object* v___x_4268_; size_t v___x_4269_; size_t v___x_4270_; size_t v___x_4271_; size_t v_h_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; 
v_k_4263_ = lean_array_fget_borrowed(v_keys_4257_, v_i_4259_);
v_v_4264_ = lean_array_fget_borrowed(v_vals_4258_, v_i_4259_);
v___x_4265_ = l_Lean_instHashableMVarId_hash(v_k_4263_);
v_h_4266_ = lean_uint64_to_usize(v___x_4265_);
v___x_4267_ = ((size_t)5ULL);
v___x_4268_ = lean_unsigned_to_nat(1u);
v___x_4269_ = ((size_t)1ULL);
v___x_4270_ = lean_usize_sub(v_depth_4256_, v___x_4269_);
v___x_4271_ = lean_usize_mul(v___x_4267_, v___x_4270_);
v_h_4272_ = lean_usize_shift_right(v_h_4266_, v___x_4271_);
v___x_4273_ = lean_nat_add(v_i_4259_, v___x_4268_);
lean_dec(v_i_4259_);
lean_inc(v_v_4264_);
lean_inc(v_k_4263_);
v___x_4274_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_entries_4260_, v_h_4272_, v_depth_4256_, v_k_4263_, v_v_4264_);
v_i_4259_ = v___x_4273_;
v_entries_4260_ = v___x_4274_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_depth_4276_, lean_object* v_keys_4277_, lean_object* v_vals_4278_, lean_object* v_i_4279_, lean_object* v_entries_4280_){
_start:
{
size_t v_depth_boxed_4281_; lean_object* v_res_4282_; 
v_depth_boxed_4281_ = lean_unbox_usize(v_depth_4276_);
lean_dec(v_depth_4276_);
v_res_4282_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(v_depth_boxed_4281_, v_keys_4277_, v_vals_4278_, v_i_4279_, v_entries_4280_);
lean_dec_ref(v_vals_4278_);
lean_dec_ref(v_keys_4277_);
return v_res_4282_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_4283_, lean_object* v_x_4284_, lean_object* v_x_4285_, lean_object* v_x_4286_, lean_object* v_x_4287_){
_start:
{
size_t v_x_4293__boxed_4288_; size_t v_x_4294__boxed_4289_; lean_object* v_res_4290_; 
v_x_4293__boxed_4288_ = lean_unbox_usize(v_x_4284_);
lean_dec(v_x_4284_);
v_x_4294__boxed_4289_ = lean_unbox_usize(v_x_4285_);
lean_dec(v_x_4285_);
v_res_4290_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_x_4283_, v_x_4293__boxed_4288_, v_x_4294__boxed_4289_, v_x_4286_, v_x_4287_);
return v_res_4290_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(lean_object* v_x_4291_, lean_object* v_x_4292_, lean_object* v_x_4293_){
_start:
{
uint64_t v___x_4294_; size_t v___x_4295_; size_t v___x_4296_; lean_object* v___x_4297_; 
v___x_4294_ = l_Lean_instHashableMVarId_hash(v_x_4292_);
v___x_4295_ = lean_uint64_to_usize(v___x_4294_);
v___x_4296_ = ((size_t)1ULL);
v___x_4297_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_x_4291_, v___x_4295_, v___x_4296_, v_x_4292_, v_x_4293_);
return v___x_4297_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(lean_object* v_mvarId_4298_, lean_object* v_val_4299_, lean_object* v___y_4300_){
_start:
{
lean_object* v___x_4302_; lean_object* v_mctx_4303_; lean_object* v_cache_4304_; lean_object* v_zetaDeltaFVarIds_4305_; lean_object* v_postponed_4306_; lean_object* v_diag_4307_; lean_object* v___x_4309_; uint8_t v_isShared_4310_; uint8_t v_isSharedCheck_4336_; 
v___x_4302_ = lean_st_ref_take(v___y_4300_);
v_mctx_4303_ = lean_ctor_get(v___x_4302_, 0);
v_cache_4304_ = lean_ctor_get(v___x_4302_, 1);
v_zetaDeltaFVarIds_4305_ = lean_ctor_get(v___x_4302_, 2);
v_postponed_4306_ = lean_ctor_get(v___x_4302_, 3);
v_diag_4307_ = lean_ctor_get(v___x_4302_, 4);
v_isSharedCheck_4336_ = !lean_is_exclusive(v___x_4302_);
if (v_isSharedCheck_4336_ == 0)
{
v___x_4309_ = v___x_4302_;
v_isShared_4310_ = v_isSharedCheck_4336_;
goto v_resetjp_4308_;
}
else
{
lean_inc(v_diag_4307_);
lean_inc(v_postponed_4306_);
lean_inc(v_zetaDeltaFVarIds_4305_);
lean_inc(v_cache_4304_);
lean_inc(v_mctx_4303_);
lean_dec(v___x_4302_);
v___x_4309_ = lean_box(0);
v_isShared_4310_ = v_isSharedCheck_4336_;
goto v_resetjp_4308_;
}
v_resetjp_4308_:
{
lean_object* v_depth_4311_; lean_object* v_levelAssignDepth_4312_; lean_object* v_lmvarCounter_4313_; lean_object* v_mvarCounter_4314_; lean_object* v_lDecls_4315_; lean_object* v_decls_4316_; lean_object* v_userNames_4317_; lean_object* v_lAssignment_4318_; lean_object* v_eAssignment_4319_; lean_object* v_dAssignment_4320_; lean_object* v_instanceTypedMVars_4321_; lean_object* v___x_4323_; uint8_t v_isShared_4324_; uint8_t v_isSharedCheck_4335_; 
v_depth_4311_ = lean_ctor_get(v_mctx_4303_, 0);
v_levelAssignDepth_4312_ = lean_ctor_get(v_mctx_4303_, 1);
v_lmvarCounter_4313_ = lean_ctor_get(v_mctx_4303_, 2);
v_mvarCounter_4314_ = lean_ctor_get(v_mctx_4303_, 3);
v_lDecls_4315_ = lean_ctor_get(v_mctx_4303_, 4);
v_decls_4316_ = lean_ctor_get(v_mctx_4303_, 5);
v_userNames_4317_ = lean_ctor_get(v_mctx_4303_, 6);
v_lAssignment_4318_ = lean_ctor_get(v_mctx_4303_, 7);
v_eAssignment_4319_ = lean_ctor_get(v_mctx_4303_, 8);
v_dAssignment_4320_ = lean_ctor_get(v_mctx_4303_, 9);
v_instanceTypedMVars_4321_ = lean_ctor_get(v_mctx_4303_, 10);
v_isSharedCheck_4335_ = !lean_is_exclusive(v_mctx_4303_);
if (v_isSharedCheck_4335_ == 0)
{
v___x_4323_ = v_mctx_4303_;
v_isShared_4324_ = v_isSharedCheck_4335_;
goto v_resetjp_4322_;
}
else
{
lean_inc(v_instanceTypedMVars_4321_);
lean_inc(v_dAssignment_4320_);
lean_inc(v_eAssignment_4319_);
lean_inc(v_lAssignment_4318_);
lean_inc(v_userNames_4317_);
lean_inc(v_decls_4316_);
lean_inc(v_lDecls_4315_);
lean_inc(v_mvarCounter_4314_);
lean_inc(v_lmvarCounter_4313_);
lean_inc(v_levelAssignDepth_4312_);
lean_inc(v_depth_4311_);
lean_dec(v_mctx_4303_);
v___x_4323_ = lean_box(0);
v_isShared_4324_ = v_isSharedCheck_4335_;
goto v_resetjp_4322_;
}
v_resetjp_4322_:
{
lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4328_; 
v___x_4325_ = lean_box(0);
v___x_4326_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(v_eAssignment_4319_, v_mvarId_4298_, v_val_4299_);
if (v_isShared_4324_ == 0)
{
lean_ctor_set(v___x_4323_, 8, v___x_4326_);
v___x_4328_ = v___x_4323_;
goto v_reusejp_4327_;
}
else
{
lean_object* v_reuseFailAlloc_4334_; 
v_reuseFailAlloc_4334_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_4334_, 0, v_depth_4311_);
lean_ctor_set(v_reuseFailAlloc_4334_, 1, v_levelAssignDepth_4312_);
lean_ctor_set(v_reuseFailAlloc_4334_, 2, v_lmvarCounter_4313_);
lean_ctor_set(v_reuseFailAlloc_4334_, 3, v_mvarCounter_4314_);
lean_ctor_set(v_reuseFailAlloc_4334_, 4, v_lDecls_4315_);
lean_ctor_set(v_reuseFailAlloc_4334_, 5, v_decls_4316_);
lean_ctor_set(v_reuseFailAlloc_4334_, 6, v_userNames_4317_);
lean_ctor_set(v_reuseFailAlloc_4334_, 7, v_lAssignment_4318_);
lean_ctor_set(v_reuseFailAlloc_4334_, 8, v___x_4326_);
lean_ctor_set(v_reuseFailAlloc_4334_, 9, v_dAssignment_4320_);
lean_ctor_set(v_reuseFailAlloc_4334_, 10, v_instanceTypedMVars_4321_);
v___x_4328_ = v_reuseFailAlloc_4334_;
goto v_reusejp_4327_;
}
v_reusejp_4327_:
{
lean_object* v___x_4330_; 
if (v_isShared_4310_ == 0)
{
lean_ctor_set(v___x_4309_, 0, v___x_4328_);
v___x_4330_ = v___x_4309_;
goto v_reusejp_4329_;
}
else
{
lean_object* v_reuseFailAlloc_4333_; 
v_reuseFailAlloc_4333_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4333_, 0, v___x_4328_);
lean_ctor_set(v_reuseFailAlloc_4333_, 1, v_cache_4304_);
lean_ctor_set(v_reuseFailAlloc_4333_, 2, v_zetaDeltaFVarIds_4305_);
lean_ctor_set(v_reuseFailAlloc_4333_, 3, v_postponed_4306_);
lean_ctor_set(v_reuseFailAlloc_4333_, 4, v_diag_4307_);
v___x_4330_ = v_reuseFailAlloc_4333_;
goto v_reusejp_4329_;
}
v_reusejp_4329_:
{
lean_object* v___x_4331_; lean_object* v___x_4332_; 
v___x_4331_ = lean_st_ref_put(v___y_4300_, v___x_4330_);
v___x_4332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4332_, 0, v___x_4325_);
return v___x_4332_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg___boxed(lean_object* v_mvarId_4337_, lean_object* v_val_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_){
_start:
{
lean_object* v_res_4341_; 
v_res_4341_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mvarId_4337_, v_val_4338_, v___y_4339_);
lean_dec(v___y_4339_);
return v_res_4341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0(lean_object* v_mv_u2081_4346_, lean_object* v_mv_u2082_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_){
_start:
{
lean_object* v___x_4356_; 
lean_inc(v_mv_u2081_4346_);
v___x_4356_ = l_Lean_MVarId_getDecl(v_mv_u2081_4346_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_);
if (lean_obj_tag(v___x_4356_) == 0)
{
lean_object* v_a_4357_; lean_object* v___x_4358_; 
v_a_4357_ = lean_ctor_get(v___x_4356_, 0);
lean_inc(v_a_4357_);
lean_dec_ref_known(v___x_4356_, 1);
lean_inc(v_mv_u2082_4347_);
v___x_4358_ = l_Lean_MVarId_getDecl(v_mv_u2082_4347_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_);
if (lean_obj_tag(v___x_4358_) == 0)
{
lean_object* v_a_4359_; lean_object* v_lctx_4360_; lean_object* v_type_4361_; lean_object* v_lctx_4362_; lean_object* v_type_4363_; uint8_t v___x_4364_; 
v_a_4359_ = lean_ctor_get(v___x_4358_, 0);
lean_inc(v_a_4359_);
lean_dec_ref_known(v___x_4358_, 1);
v_lctx_4360_ = lean_ctor_get(v_a_4357_, 1);
lean_inc_ref(v_lctx_4360_);
v_type_4361_ = lean_ctor_get(v_a_4357_, 2);
lean_inc_ref(v_type_4361_);
lean_dec(v_a_4357_);
v_lctx_4362_ = lean_ctor_get(v_a_4359_, 1);
lean_inc_ref(v_lctx_4362_);
v_type_4363_ = lean_ctor_get(v_a_4359_, 2);
lean_inc_ref(v_type_4363_);
lean_dec(v_a_4359_);
v___x_4364_ = lean_expr_eqv(v_type_4361_, v_type_4363_);
lean_dec_ref(v_type_4363_);
lean_dec_ref(v_type_4361_);
if (v___x_4364_ == 0)
{
lean_dec_ref(v_lctx_4362_);
lean_dec_ref(v_lctx_4360_);
lean_dec(v_mv_u2082_4347_);
lean_dec(v_mv_u2081_4346_);
goto v___jp_4353_;
}
else
{
lean_object* v___x_4365_; uint8_t v___x_4366_; 
v___x_4365_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0));
v___x_4366_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_4360_, v_lctx_4362_, v___x_4365_);
if (v___x_4366_ == 0)
{
uint8_t v___x_4367_; 
v___x_4367_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_4362_, v_lctx_4360_, v___x_4365_);
lean_dec_ref(v_lctx_4360_);
lean_dec_ref(v_lctx_4362_);
if (v___x_4367_ == 0)
{
lean_dec(v_mv_u2082_4347_);
lean_dec(v_mv_u2081_4346_);
goto v___jp_4353_;
}
else
{
lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4371_; uint8_t v_isShared_4372_; uint8_t v_isSharedCheck_4379_; 
v___x_4368_ = l_Lean_Expr_mvar___override(v_mv_u2082_4347_);
v___x_4369_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mv_u2081_4346_, v___x_4368_, v___y_4349_);
v_isSharedCheck_4379_ = !lean_is_exclusive(v___x_4369_);
if (v_isSharedCheck_4379_ == 0)
{
lean_object* v_unused_4380_; 
v_unused_4380_ = lean_ctor_get(v___x_4369_, 0);
lean_dec(v_unused_4380_);
v___x_4371_ = v___x_4369_;
v_isShared_4372_ = v_isSharedCheck_4379_;
goto v_resetjp_4370_;
}
else
{
lean_dec(v___x_4369_);
v___x_4371_ = lean_box(0);
v_isShared_4372_ = v_isSharedCheck_4379_;
goto v_resetjp_4370_;
}
v_resetjp_4370_:
{
lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4377_; 
v___x_4373_ = lean_box(v___x_4366_);
v___x_4374_ = lean_box(v___x_4367_);
v___x_4375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4375_, 0, v___x_4373_);
lean_ctor_set(v___x_4375_, 1, v___x_4374_);
if (v_isShared_4372_ == 0)
{
lean_ctor_set(v___x_4371_, 0, v___x_4375_);
v___x_4377_ = v___x_4371_;
goto v_reusejp_4376_;
}
else
{
lean_object* v_reuseFailAlloc_4378_; 
v_reuseFailAlloc_4378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4378_, 0, v___x_4375_);
v___x_4377_ = v_reuseFailAlloc_4378_;
goto v_reusejp_4376_;
}
v_reusejp_4376_:
{
return v___x_4377_;
}
}
}
}
else
{
lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4384_; uint8_t v_isShared_4385_; uint8_t v_isSharedCheck_4393_; 
lean_dec_ref(v_lctx_4362_);
lean_dec_ref(v_lctx_4360_);
v___x_4381_ = l_Lean_Expr_mvar___override(v_mv_u2081_4346_);
v___x_4382_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mv_u2082_4347_, v___x_4381_, v___y_4349_);
v_isSharedCheck_4393_ = !lean_is_exclusive(v___x_4382_);
if (v_isSharedCheck_4393_ == 0)
{
lean_object* v_unused_4394_; 
v_unused_4394_ = lean_ctor_get(v___x_4382_, 0);
lean_dec(v_unused_4394_);
v___x_4384_ = v___x_4382_;
v_isShared_4385_ = v_isSharedCheck_4393_;
goto v_resetjp_4383_;
}
else
{
lean_dec(v___x_4382_);
v___x_4384_ = lean_box(0);
v_isShared_4385_ = v_isSharedCheck_4393_;
goto v_resetjp_4383_;
}
v_resetjp_4383_:
{
uint8_t v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4391_; 
v___x_4386_ = 0;
v___x_4387_ = lean_box(v___x_4366_);
v___x_4388_ = lean_box(v___x_4386_);
v___x_4389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4389_, 0, v___x_4387_);
lean_ctor_set(v___x_4389_, 1, v___x_4388_);
if (v_isShared_4385_ == 0)
{
lean_ctor_set(v___x_4384_, 0, v___x_4389_);
v___x_4391_ = v___x_4384_;
goto v_reusejp_4390_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v___x_4389_);
v___x_4391_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4390_;
}
v_reusejp_4390_:
{
return v___x_4391_;
}
}
}
}
}
else
{
lean_object* v_a_4395_; lean_object* v___x_4397_; uint8_t v_isShared_4398_; uint8_t v_isSharedCheck_4402_; 
lean_dec(v_a_4357_);
lean_dec(v_mv_u2082_4347_);
lean_dec(v_mv_u2081_4346_);
v_a_4395_ = lean_ctor_get(v___x_4358_, 0);
v_isSharedCheck_4402_ = !lean_is_exclusive(v___x_4358_);
if (v_isSharedCheck_4402_ == 0)
{
v___x_4397_ = v___x_4358_;
v_isShared_4398_ = v_isSharedCheck_4402_;
goto v_resetjp_4396_;
}
else
{
lean_inc(v_a_4395_);
lean_dec(v___x_4358_);
v___x_4397_ = lean_box(0);
v_isShared_4398_ = v_isSharedCheck_4402_;
goto v_resetjp_4396_;
}
v_resetjp_4396_:
{
lean_object* v___x_4400_; 
if (v_isShared_4398_ == 0)
{
v___x_4400_ = v___x_4397_;
goto v_reusejp_4399_;
}
else
{
lean_object* v_reuseFailAlloc_4401_; 
v_reuseFailAlloc_4401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4401_, 0, v_a_4395_);
v___x_4400_ = v_reuseFailAlloc_4401_;
goto v_reusejp_4399_;
}
v_reusejp_4399_:
{
return v___x_4400_;
}
}
}
}
else
{
lean_object* v_a_4403_; lean_object* v___x_4405_; uint8_t v_isShared_4406_; uint8_t v_isSharedCheck_4410_; 
lean_dec(v_mv_u2082_4347_);
lean_dec(v_mv_u2081_4346_);
v_a_4403_ = lean_ctor_get(v___x_4356_, 0);
v_isSharedCheck_4410_ = !lean_is_exclusive(v___x_4356_);
if (v_isSharedCheck_4410_ == 0)
{
v___x_4405_ = v___x_4356_;
v_isShared_4406_ = v_isSharedCheck_4410_;
goto v_resetjp_4404_;
}
else
{
lean_inc(v_a_4403_);
lean_dec(v___x_4356_);
v___x_4405_ = lean_box(0);
v_isShared_4406_ = v_isSharedCheck_4410_;
goto v_resetjp_4404_;
}
v_resetjp_4404_:
{
lean_object* v___x_4408_; 
if (v_isShared_4406_ == 0)
{
v___x_4408_ = v___x_4405_;
goto v_reusejp_4407_;
}
else
{
lean_object* v_reuseFailAlloc_4409_; 
v_reuseFailAlloc_4409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4409_, 0, v_a_4403_);
v___x_4408_ = v_reuseFailAlloc_4409_;
goto v_reusejp_4407_;
}
v_reusejp_4407_:
{
return v___x_4408_;
}
}
}
v___jp_4353_:
{
lean_object* v___x_4354_; lean_object* v___x_4355_; 
v___x_4354_ = ((lean_object*)(l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0));
v___x_4355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4355_, 0, v___x_4354_);
return v___x_4355_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___boxed(lean_object* v_mv_u2081_4411_, lean_object* v_mv_u2082_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_){
_start:
{
lean_object* v_res_4418_; 
v_res_4418_ = l_Lean_Elab_WF_assignSubsumed___lam__0(v_mv_u2081_4411_, v_mv_u2082_4412_, v___y_4413_, v___y_4414_, v___y_4415_, v___y_4416_);
lean_dec(v___y_4416_);
lean_dec_ref(v___y_4415_);
lean_dec(v___y_4414_);
lean_dec_ref(v___y_4413_);
return v_res_4418_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1(lean_object* v_f_4419_, lean_object* v___x_4420_, lean_object* v___x_4421_, lean_object* v___x_4422_, lean_object* v_a_4423_, uint8_t v___x_4424_, lean_object* v_snd_4425_, lean_object* v_fst_4426_, lean_object* v_next_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_){
_start:
{
lean_object* v___x_4433_; 
v___x_4433_ = lean_apply_7(v_f_4419_, v___x_4420_, v___x_4421_, v___y_4428_, v___y_4429_, v___y_4430_, v___y_4431_, lean_box(0));
if (lean_obj_tag(v___x_4433_) == 0)
{
lean_object* v_a_4434_; lean_object* v___x_4436_; uint8_t v_isShared_4437_; uint8_t v_isSharedCheck_4469_; 
v_a_4434_ = lean_ctor_get(v___x_4433_, 0);
v_isSharedCheck_4469_ = !lean_is_exclusive(v___x_4433_);
if (v_isSharedCheck_4469_ == 0)
{
v___x_4436_ = v___x_4433_;
v_isShared_4437_ = v_isSharedCheck_4469_;
goto v_resetjp_4435_;
}
else
{
lean_inc(v_a_4434_);
lean_dec(v___x_4433_);
v___x_4436_ = lean_box(0);
v_isShared_4437_ = v_isSharedCheck_4469_;
goto v_resetjp_4435_;
}
v_resetjp_4435_:
{
lean_object* v_fst_4438_; lean_object* v_snd_4439_; lean_object* v___x_4441_; uint8_t v_isShared_4442_; uint8_t v_isSharedCheck_4468_; 
v_fst_4438_ = lean_ctor_get(v_a_4434_, 0);
v_snd_4439_ = lean_ctor_get(v_a_4434_, 1);
v_isSharedCheck_4468_ = !lean_is_exclusive(v_a_4434_);
if (v_isSharedCheck_4468_ == 0)
{
v___x_4441_ = v_a_4434_;
v_isShared_4442_ = v_isSharedCheck_4468_;
goto v_resetjp_4440_;
}
else
{
lean_inc(v_snd_4439_);
lean_inc(v_fst_4438_);
lean_dec(v_a_4434_);
v___x_4441_ = lean_box(0);
v_isShared_4442_ = v_isSharedCheck_4468_;
goto v_resetjp_4440_;
}
v_resetjp_4440_:
{
lean_object* v_removed_4444_; lean_object* v_numRemoved_4445_; uint8_t v___x_4464_; 
v___x_4464_ = lean_unbox(v_fst_4438_);
lean_dec(v_fst_4438_);
if (v___x_4464_ == 0)
{
lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; 
v___x_4465_ = lean_nat_add(v_snd_4425_, v___x_4422_);
lean_dec(v_snd_4425_);
v___x_4466_ = lean_box(v___x_4424_);
v___x_4467_ = lean_array_set(v_fst_4426_, v_next_4427_, v___x_4466_);
v_removed_4444_ = v___x_4467_;
v_numRemoved_4445_ = v___x_4465_;
goto v___jp_4443_;
}
else
{
v_removed_4444_ = v_fst_4426_;
v_numRemoved_4445_ = v_snd_4425_;
goto v___jp_4443_;
}
v___jp_4443_:
{
uint8_t v___x_4446_; 
v___x_4446_ = lean_unbox(v_snd_4439_);
lean_dec(v_snd_4439_);
if (v___x_4446_ == 0)
{
lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4451_; 
v___x_4447_ = lean_nat_add(v_numRemoved_4445_, v___x_4422_);
lean_dec(v_numRemoved_4445_);
v___x_4448_ = lean_box(v___x_4424_);
v___x_4449_ = lean_array_set(v_removed_4444_, v_a_4423_, v___x_4448_);
if (v_isShared_4442_ == 0)
{
lean_ctor_set(v___x_4441_, 1, v___x_4447_);
lean_ctor_set(v___x_4441_, 0, v___x_4449_);
v___x_4451_ = v___x_4441_;
goto v_reusejp_4450_;
}
else
{
lean_object* v_reuseFailAlloc_4456_; 
v_reuseFailAlloc_4456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4456_, 0, v___x_4449_);
lean_ctor_set(v_reuseFailAlloc_4456_, 1, v___x_4447_);
v___x_4451_ = v_reuseFailAlloc_4456_;
goto v_reusejp_4450_;
}
v_reusejp_4450_:
{
lean_object* v___x_4452_; lean_object* v___x_4454_; 
v___x_4452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4452_, 0, v___x_4451_);
if (v_isShared_4437_ == 0)
{
lean_ctor_set(v___x_4436_, 0, v___x_4452_);
v___x_4454_ = v___x_4436_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v___x_4452_);
v___x_4454_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
return v___x_4454_;
}
}
}
else
{
lean_object* v___x_4458_; 
if (v_isShared_4442_ == 0)
{
lean_ctor_set(v___x_4441_, 1, v_numRemoved_4445_);
lean_ctor_set(v___x_4441_, 0, v_removed_4444_);
v___x_4458_ = v___x_4441_;
goto v_reusejp_4457_;
}
else
{
lean_object* v_reuseFailAlloc_4463_; 
v_reuseFailAlloc_4463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4463_, 0, v_removed_4444_);
lean_ctor_set(v_reuseFailAlloc_4463_, 1, v_numRemoved_4445_);
v___x_4458_ = v_reuseFailAlloc_4463_;
goto v_reusejp_4457_;
}
v_reusejp_4457_:
{
lean_object* v___x_4459_; lean_object* v___x_4461_; 
v___x_4459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4459_, 0, v___x_4458_);
if (v_isShared_4437_ == 0)
{
lean_ctor_set(v___x_4436_, 0, v___x_4459_);
v___x_4461_ = v___x_4436_;
goto v_reusejp_4460_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v___x_4459_);
v___x_4461_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4460_;
}
v_reusejp_4460_:
{
return v___x_4461_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4470_; lean_object* v___x_4472_; uint8_t v_isShared_4473_; uint8_t v_isSharedCheck_4477_; 
lean_dec(v_fst_4426_);
lean_dec(v_snd_4425_);
v_a_4470_ = lean_ctor_get(v___x_4433_, 0);
v_isSharedCheck_4477_ = !lean_is_exclusive(v___x_4433_);
if (v_isSharedCheck_4477_ == 0)
{
v___x_4472_ = v___x_4433_;
v_isShared_4473_ = v_isSharedCheck_4477_;
goto v_resetjp_4471_;
}
else
{
lean_inc(v_a_4470_);
lean_dec(v___x_4433_);
v___x_4472_ = lean_box(0);
v_isShared_4473_ = v_isSharedCheck_4477_;
goto v_resetjp_4471_;
}
v_resetjp_4471_:
{
lean_object* v___x_4475_; 
if (v_isShared_4473_ == 0)
{
v___x_4475_ = v___x_4472_;
goto v_reusejp_4474_;
}
else
{
lean_object* v_reuseFailAlloc_4476_; 
v_reuseFailAlloc_4476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4476_, 0, v_a_4470_);
v___x_4475_ = v_reuseFailAlloc_4476_;
goto v_reusejp_4474_;
}
v_reusejp_4474_:
{
return v___x_4475_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1___boxed(lean_object* v_f_4478_, lean_object* v___x_4479_, lean_object* v___x_4480_, lean_object* v___x_4481_, lean_object* v_a_4482_, lean_object* v___x_4483_, lean_object* v_snd_4484_, lean_object* v_fst_4485_, lean_object* v_next_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_){
_start:
{
uint8_t v___x_4646__boxed_4492_; lean_object* v_res_4493_; 
v___x_4646__boxed_4492_ = lean_unbox(v___x_4483_);
v_res_4493_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1(v_f_4478_, v___x_4479_, v___x_4480_, v___x_4481_, v_a_4482_, v___x_4646__boxed_4492_, v_snd_4484_, v_fst_4485_, v_next_4486_, v___y_4487_, v___y_4488_, v___y_4489_, v___y_4490_);
lean_dec(v_next_4486_);
lean_dec(v_a_4482_);
lean_dec(v___x_4481_);
return v_res_4493_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0(lean_object* v___x_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_){
_start:
{
lean_object* v___x_4500_; 
v___x_4500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4500_, 0, v___x_4494_);
return v___x_4500_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v___x_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_){
_start:
{
lean_object* v_res_4507_; 
v_res_4507_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0(v___x_4501_, v___y_4502_, v___y_4503_, v___y_4504_, v___y_4505_);
lean_dec(v___y_4505_);
lean_dec_ref(v___y_4504_);
lean_dec(v___y_4503_);
lean_dec_ref(v___y_4502_);
return v_res_4507_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(lean_object* v_upperBound_4508_, lean_object* v_next_4509_, lean_object* v_a_4510_, lean_object* v_f_4511_, lean_object* v_a_4512_, lean_object* v_b_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_, lean_object* v___y_4516_, lean_object* v___y_4517_){
_start:
{
uint8_t v___x_4519_; 
v___x_4519_ = lean_nat_dec_lt(v_a_4512_, v_upperBound_4508_);
if (v___x_4519_ == 0)
{
lean_object* v___x_4520_; 
lean_dec(v_a_4512_);
lean_dec_ref(v_f_4511_);
lean_dec(v_next_4509_);
v___x_4520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4520_, 0, v_b_4513_);
return v___x_4520_;
}
else
{
lean_object* v_fst_4521_; lean_object* v_snd_4522_; lean_object* v___x_4524_; uint8_t v_isShared_4525_; uint8_t v_isSharedCheck_4567_; 
v_fst_4521_ = lean_ctor_get(v_b_4513_, 0);
v_snd_4522_ = lean_ctor_get(v_b_4513_, 1);
v_isSharedCheck_4567_ = !lean_is_exclusive(v_b_4513_);
if (v_isSharedCheck_4567_ == 0)
{
v___x_4524_ = v_b_4513_;
v_isShared_4525_ = v_isSharedCheck_4567_;
goto v_resetjp_4523_;
}
else
{
lean_inc(v_snd_4522_);
lean_inc(v_fst_4521_);
lean_dec(v_b_4513_);
v___x_4524_ = lean_box(0);
v_isShared_4525_ = v_isSharedCheck_4567_;
goto v_resetjp_4523_;
}
v_resetjp_4523_:
{
lean_object* v___x_4526_; lean_object* v___y_4528_; uint8_t v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; uint8_t v___x_4559_; 
v___x_4526_ = lean_unsigned_to_nat(1u);
v___x_4556_ = 0;
v___x_4557_ = lean_box(v___x_4556_);
v___x_4558_ = lean_array_get(v___x_4557_, v_fst_4521_, v_next_4509_);
lean_dec(v___x_4557_);
v___x_4559_ = lean_unbox(v___x_4558_);
lean_dec(v___x_4558_);
if (v___x_4559_ == 0)
{
lean_object* v___x_4560_; lean_object* v___x_4561_; uint8_t v___x_4562_; 
v___x_4560_ = lean_box(v___x_4556_);
v___x_4561_ = lean_array_get(v___x_4560_, v_fst_4521_, v_a_4512_);
lean_dec(v___x_4560_);
v___x_4562_ = lean_unbox(v___x_4561_);
lean_dec(v___x_4561_);
if (v___x_4562_ == 0)
{
lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___f_4566_; 
lean_del_object(v___x_4524_);
v___x_4563_ = lean_array_fget_borrowed(v_a_4510_, v_next_4509_);
v___x_4564_ = lean_array_fget_borrowed(v_a_4510_, v_a_4512_);
v___x_4565_ = lean_box(v___x_4519_);
lean_inc(v_next_4509_);
lean_inc(v_a_4512_);
lean_inc(v___x_4564_);
lean_inc(v___x_4563_);
lean_inc_ref(v_f_4511_);
v___f_4566_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1___boxed), 14, 9);
lean_closure_set(v___f_4566_, 0, v_f_4511_);
lean_closure_set(v___f_4566_, 1, v___x_4563_);
lean_closure_set(v___f_4566_, 2, v___x_4564_);
lean_closure_set(v___f_4566_, 3, v___x_4526_);
lean_closure_set(v___f_4566_, 4, v_a_4512_);
lean_closure_set(v___f_4566_, 5, v___x_4565_);
lean_closure_set(v___f_4566_, 6, v_snd_4522_);
lean_closure_set(v___f_4566_, 7, v_fst_4521_);
lean_closure_set(v___f_4566_, 8, v_next_4509_);
v___y_4528_ = v___f_4566_;
goto v___jp_4527_;
}
else
{
goto v___jp_4550_;
}
}
else
{
goto v___jp_4550_;
}
v___jp_4527_:
{
lean_object* v___x_4529_; 
lean_inc(v___y_4517_);
lean_inc_ref(v___y_4516_);
lean_inc(v___y_4515_);
lean_inc_ref(v___y_4514_);
v___x_4529_ = lean_apply_5(v___y_4528_, v___y_4514_, v___y_4515_, v___y_4516_, v___y_4517_, lean_box(0));
if (lean_obj_tag(v___x_4529_) == 0)
{
lean_object* v_a_4530_; lean_object* v___x_4532_; uint8_t v_isShared_4533_; uint8_t v_isSharedCheck_4541_; 
v_a_4530_ = lean_ctor_get(v___x_4529_, 0);
v_isSharedCheck_4541_ = !lean_is_exclusive(v___x_4529_);
if (v_isSharedCheck_4541_ == 0)
{
v___x_4532_ = v___x_4529_;
v_isShared_4533_ = v_isSharedCheck_4541_;
goto v_resetjp_4531_;
}
else
{
lean_inc(v_a_4530_);
lean_dec(v___x_4529_);
v___x_4532_ = lean_box(0);
v_isShared_4533_ = v_isSharedCheck_4541_;
goto v_resetjp_4531_;
}
v_resetjp_4531_:
{
if (lean_obj_tag(v_a_4530_) == 0)
{
lean_object* v_a_4534_; lean_object* v___x_4536_; 
lean_dec(v_a_4512_);
lean_dec_ref(v_f_4511_);
lean_dec(v_next_4509_);
v_a_4534_ = lean_ctor_get(v_a_4530_, 0);
lean_inc(v_a_4534_);
lean_dec_ref_known(v_a_4530_, 1);
if (v_isShared_4533_ == 0)
{
lean_ctor_set(v___x_4532_, 0, v_a_4534_);
v___x_4536_ = v___x_4532_;
goto v_reusejp_4535_;
}
else
{
lean_object* v_reuseFailAlloc_4537_; 
v_reuseFailAlloc_4537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4537_, 0, v_a_4534_);
v___x_4536_ = v_reuseFailAlloc_4537_;
goto v_reusejp_4535_;
}
v_reusejp_4535_:
{
return v___x_4536_;
}
}
else
{
lean_object* v_a_4538_; lean_object* v___x_4539_; 
lean_del_object(v___x_4532_);
v_a_4538_ = lean_ctor_get(v_a_4530_, 0);
lean_inc(v_a_4538_);
lean_dec_ref_known(v_a_4530_, 1);
v___x_4539_ = lean_nat_add(v_a_4512_, v___x_4526_);
lean_dec(v_a_4512_);
v_a_4512_ = v___x_4539_;
v_b_4513_ = v_a_4538_;
goto _start;
}
}
}
else
{
lean_object* v_a_4542_; lean_object* v___x_4544_; uint8_t v_isShared_4545_; uint8_t v_isSharedCheck_4549_; 
lean_dec(v_a_4512_);
lean_dec_ref(v_f_4511_);
lean_dec(v_next_4509_);
v_a_4542_ = lean_ctor_get(v___x_4529_, 0);
v_isSharedCheck_4549_ = !lean_is_exclusive(v___x_4529_);
if (v_isSharedCheck_4549_ == 0)
{
v___x_4544_ = v___x_4529_;
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
else
{
lean_inc(v_a_4542_);
lean_dec(v___x_4529_);
v___x_4544_ = lean_box(0);
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
v_resetjp_4543_:
{
lean_object* v___x_4547_; 
if (v_isShared_4545_ == 0)
{
v___x_4547_ = v___x_4544_;
goto v_reusejp_4546_;
}
else
{
lean_object* v_reuseFailAlloc_4548_; 
v_reuseFailAlloc_4548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4548_, 0, v_a_4542_);
v___x_4547_ = v_reuseFailAlloc_4548_;
goto v_reusejp_4546_;
}
v_reusejp_4546_:
{
return v___x_4547_;
}
}
}
}
v___jp_4550_:
{
lean_object* v___x_4552_; 
if (v_isShared_4525_ == 0)
{
v___x_4552_ = v___x_4524_;
goto v_reusejp_4551_;
}
else
{
lean_object* v_reuseFailAlloc_4555_; 
v_reuseFailAlloc_4555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4555_, 0, v_fst_4521_);
lean_ctor_set(v_reuseFailAlloc_4555_, 1, v_snd_4522_);
v___x_4552_ = v_reuseFailAlloc_4555_;
goto v_reusejp_4551_;
}
v_reusejp_4551_:
{
lean_object* v___x_4553_; lean_object* v___f_4554_; 
v___x_4553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4553_, 0, v___x_4552_);
v___f_4554_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4554_, 0, v___x_4553_);
v___y_4528_ = v___f_4554_;
goto v___jp_4527_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___boxed(lean_object* v_upperBound_4568_, lean_object* v_next_4569_, lean_object* v_a_4570_, lean_object* v_f_4571_, lean_object* v_a_4572_, lean_object* v_b_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_){
_start:
{
lean_object* v_res_4579_; 
v_res_4579_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(v_upperBound_4568_, v_next_4569_, v_a_4570_, v_f_4571_, v_a_4572_, v_b_4573_, v___y_4574_, v___y_4575_, v___y_4576_, v___y_4577_);
lean_dec(v___y_4577_);
lean_dec_ref(v___y_4576_);
lean_dec(v___y_4575_);
lean_dec_ref(v___y_4574_);
lean_dec_ref(v_a_4570_);
lean_dec(v_upperBound_4568_);
return v_res_4579_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(lean_object* v_upperBound_4580_, lean_object* v___x_4581_, lean_object* v_a_4582_, lean_object* v_f_4583_, lean_object* v_a_4584_, lean_object* v_b_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_){
_start:
{
uint8_t v___x_4591_; 
v___x_4591_ = lean_nat_dec_lt(v_a_4584_, v_upperBound_4580_);
if (v___x_4591_ == 0)
{
lean_object* v___x_4592_; 
lean_dec(v_a_4584_);
lean_dec_ref(v_f_4583_);
v___x_4592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4592_, 0, v_b_4585_);
return v___x_4592_;
}
else
{
lean_object* v_fst_4593_; lean_object* v_snd_4594_; lean_object* v___x_4596_; uint8_t v_isShared_4597_; uint8_t v_isSharedCheck_4615_; 
v_fst_4593_ = lean_ctor_get(v_b_4585_, 0);
v_snd_4594_ = lean_ctor_get(v_b_4585_, 1);
v_isSharedCheck_4615_ = !lean_is_exclusive(v_b_4585_);
if (v_isSharedCheck_4615_ == 0)
{
v___x_4596_ = v_b_4585_;
v_isShared_4597_ = v_isSharedCheck_4615_;
goto v_resetjp_4595_;
}
else
{
lean_inc(v_snd_4594_);
lean_inc(v_fst_4593_);
lean_dec(v_b_4585_);
v___x_4596_ = lean_box(0);
v_isShared_4597_ = v_isSharedCheck_4615_;
goto v_resetjp_4595_;
}
v_resetjp_4595_:
{
lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4601_; 
v___x_4598_ = lean_unsigned_to_nat(1u);
v___x_4599_ = lean_nat_add(v_a_4584_, v___x_4598_);
if (v_isShared_4597_ == 0)
{
v___x_4601_ = v___x_4596_;
goto v_reusejp_4600_;
}
else
{
lean_object* v_reuseFailAlloc_4614_; 
v_reuseFailAlloc_4614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4614_, 0, v_fst_4593_);
lean_ctor_set(v_reuseFailAlloc_4614_, 1, v_snd_4594_);
v___x_4601_ = v_reuseFailAlloc_4614_;
goto v_reusejp_4600_;
}
v_reusejp_4600_:
{
lean_object* v___x_4602_; 
lean_inc(v___x_4599_);
lean_inc_ref(v_f_4583_);
v___x_4602_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(v___x_4581_, v_a_4584_, v_a_4582_, v_f_4583_, v___x_4599_, v___x_4601_, v___y_4586_, v___y_4587_, v___y_4588_, v___y_4589_);
if (lean_obj_tag(v___x_4602_) == 0)
{
lean_object* v_a_4603_; lean_object* v_fst_4604_; lean_object* v_snd_4605_; lean_object* v___x_4607_; uint8_t v_isShared_4608_; uint8_t v_isSharedCheck_4613_; 
v_a_4603_ = lean_ctor_get(v___x_4602_, 0);
lean_inc(v_a_4603_);
lean_dec_ref_known(v___x_4602_, 1);
v_fst_4604_ = lean_ctor_get(v_a_4603_, 0);
v_snd_4605_ = lean_ctor_get(v_a_4603_, 1);
v_isSharedCheck_4613_ = !lean_is_exclusive(v_a_4603_);
if (v_isSharedCheck_4613_ == 0)
{
v___x_4607_ = v_a_4603_;
v_isShared_4608_ = v_isSharedCheck_4613_;
goto v_resetjp_4606_;
}
else
{
lean_inc(v_snd_4605_);
lean_inc(v_fst_4604_);
lean_dec(v_a_4603_);
v___x_4607_ = lean_box(0);
v_isShared_4608_ = v_isSharedCheck_4613_;
goto v_resetjp_4606_;
}
v_resetjp_4606_:
{
lean_object* v___x_4610_; 
if (v_isShared_4608_ == 0)
{
v___x_4610_ = v___x_4607_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4612_; 
v_reuseFailAlloc_4612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4612_, 0, v_fst_4604_);
lean_ctor_set(v_reuseFailAlloc_4612_, 1, v_snd_4605_);
v___x_4610_ = v_reuseFailAlloc_4612_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
v_a_4584_ = v___x_4599_;
v_b_4585_ = v___x_4610_;
goto _start;
}
}
}
else
{
lean_dec(v___x_4599_);
lean_dec_ref(v_f_4583_);
return v___x_4602_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg___boxed(lean_object* v_upperBound_4616_, lean_object* v___x_4617_, lean_object* v_a_4618_, lean_object* v_f_4619_, lean_object* v_a_4620_, lean_object* v_b_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_){
_start:
{
lean_object* v_res_4627_; 
v_res_4627_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(v_upperBound_4616_, v___x_4617_, v_a_4618_, v_f_4619_, v_a_4620_, v_b_4621_, v___y_4622_, v___y_4623_, v___y_4624_, v___y_4625_);
lean_dec(v___y_4625_);
lean_dec_ref(v___y_4624_);
lean_dec(v___y_4623_);
lean_dec_ref(v___y_4622_);
lean_dec_ref(v_a_4618_);
lean_dec(v___x_4617_);
lean_dec(v_upperBound_4616_);
return v_res_4627_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0(lean_object* v___x_4628_, lean_object* v___y_4629_, lean_object* v___y_4630_, lean_object* v___y_4631_, lean_object* v___y_4632_){
_start:
{
lean_object* v___x_4634_; 
v___x_4634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4634_, 0, v___x_4628_);
return v___x_4634_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v___x_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_, lean_object* v___y_4639_, lean_object* v___y_4640_){
_start:
{
lean_object* v_res_4641_; 
v_res_4641_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0(v___x_4635_, v___y_4636_, v___y_4637_, v___y_4638_, v___y_4639_);
lean_dec(v___y_4639_);
lean_dec_ref(v___y_4638_);
lean_dec(v___y_4637_);
lean_dec_ref(v___y_4636_);
return v_res_4641_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(lean_object* v_upperBound_4642_, lean_object* v_removed_4643_, lean_object* v_a_4644_, lean_object* v_a_4645_, lean_object* v_b_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_){
_start:
{
lean_object* v___y_4653_; uint8_t v___x_4676_; 
v___x_4676_ = lean_nat_dec_lt(v_a_4645_, v_upperBound_4642_);
if (v___x_4676_ == 0)
{
lean_object* v___x_4677_; 
lean_dec(v_a_4645_);
v___x_4677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4677_, 0, v_b_4646_);
return v___x_4677_;
}
else
{
uint8_t v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; uint8_t v___x_4681_; 
v___x_4678_ = 0;
v___x_4679_ = lean_box(v___x_4678_);
v___x_4680_ = lean_array_get(v___x_4679_, v_removed_4643_, v_a_4645_);
lean_dec(v___x_4679_);
v___x_4681_ = lean_unbox(v___x_4680_);
lean_dec(v___x_4680_);
if (v___x_4681_ == 0)
{
lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___f_4685_; 
v___x_4682_ = lean_array_fget_borrowed(v_a_4644_, v_a_4645_);
lean_inc(v___x_4682_);
v___x_4683_ = lean_array_push(v_b_4646_, v___x_4682_);
v___x_4684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4684_, 0, v___x_4683_);
v___f_4685_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4685_, 0, v___x_4684_);
v___y_4653_ = v___f_4685_;
goto v___jp_4652_;
}
else
{
lean_object* v___x_4686_; lean_object* v___f_4687_; 
v___x_4686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4686_, 0, v_b_4646_);
v___f_4687_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4687_, 0, v___x_4686_);
v___y_4653_ = v___f_4687_;
goto v___jp_4652_;
}
}
v___jp_4652_:
{
lean_object* v___x_4654_; 
lean_inc(v___y_4650_);
lean_inc_ref(v___y_4649_);
lean_inc(v___y_4648_);
lean_inc_ref(v___y_4647_);
v___x_4654_ = lean_apply_5(v___y_4653_, v___y_4647_, v___y_4648_, v___y_4649_, v___y_4650_, lean_box(0));
if (lean_obj_tag(v___x_4654_) == 0)
{
lean_object* v_a_4655_; lean_object* v___x_4657_; uint8_t v_isShared_4658_; uint8_t v_isSharedCheck_4667_; 
v_a_4655_ = lean_ctor_get(v___x_4654_, 0);
v_isSharedCheck_4667_ = !lean_is_exclusive(v___x_4654_);
if (v_isSharedCheck_4667_ == 0)
{
v___x_4657_ = v___x_4654_;
v_isShared_4658_ = v_isSharedCheck_4667_;
goto v_resetjp_4656_;
}
else
{
lean_inc(v_a_4655_);
lean_dec(v___x_4654_);
v___x_4657_ = lean_box(0);
v_isShared_4658_ = v_isSharedCheck_4667_;
goto v_resetjp_4656_;
}
v_resetjp_4656_:
{
if (lean_obj_tag(v_a_4655_) == 0)
{
lean_object* v_a_4659_; lean_object* v___x_4661_; 
lean_dec(v_a_4645_);
v_a_4659_ = lean_ctor_get(v_a_4655_, 0);
lean_inc(v_a_4659_);
lean_dec_ref_known(v_a_4655_, 1);
if (v_isShared_4658_ == 0)
{
lean_ctor_set(v___x_4657_, 0, v_a_4659_);
v___x_4661_ = v___x_4657_;
goto v_reusejp_4660_;
}
else
{
lean_object* v_reuseFailAlloc_4662_; 
v_reuseFailAlloc_4662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4662_, 0, v_a_4659_);
v___x_4661_ = v_reuseFailAlloc_4662_;
goto v_reusejp_4660_;
}
v_reusejp_4660_:
{
return v___x_4661_;
}
}
else
{
lean_object* v_a_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; 
lean_del_object(v___x_4657_);
v_a_4663_ = lean_ctor_get(v_a_4655_, 0);
lean_inc(v_a_4663_);
lean_dec_ref_known(v_a_4655_, 1);
v___x_4664_ = lean_unsigned_to_nat(1u);
v___x_4665_ = lean_nat_add(v_a_4645_, v___x_4664_);
lean_dec(v_a_4645_);
v_a_4645_ = v___x_4665_;
v_b_4646_ = v_a_4663_;
goto _start;
}
}
}
else
{
lean_object* v_a_4668_; lean_object* v___x_4670_; uint8_t v_isShared_4671_; uint8_t v_isSharedCheck_4675_; 
lean_dec(v_a_4645_);
v_a_4668_ = lean_ctor_get(v___x_4654_, 0);
v_isSharedCheck_4675_ = !lean_is_exclusive(v___x_4654_);
if (v_isSharedCheck_4675_ == 0)
{
v___x_4670_ = v___x_4654_;
v_isShared_4671_ = v_isSharedCheck_4675_;
goto v_resetjp_4669_;
}
else
{
lean_inc(v_a_4668_);
lean_dec(v___x_4654_);
v___x_4670_ = lean_box(0);
v_isShared_4671_ = v_isSharedCheck_4675_;
goto v_resetjp_4669_;
}
v_resetjp_4669_:
{
lean_object* v___x_4673_; 
if (v_isShared_4671_ == 0)
{
v___x_4673_ = v___x_4670_;
goto v_reusejp_4672_;
}
else
{
lean_object* v_reuseFailAlloc_4674_; 
v_reuseFailAlloc_4674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4674_, 0, v_a_4668_);
v___x_4673_ = v_reuseFailAlloc_4674_;
goto v_reusejp_4672_;
}
v_reusejp_4672_:
{
return v___x_4673_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___boxed(lean_object* v_upperBound_4688_, lean_object* v_removed_4689_, lean_object* v_a_4690_, lean_object* v_a_4691_, lean_object* v_b_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_, lean_object* v___y_4695_, lean_object* v___y_4696_, lean_object* v___y_4697_){
_start:
{
lean_object* v_res_4698_; 
v_res_4698_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(v_upperBound_4688_, v_removed_4689_, v_a_4690_, v_a_4691_, v_b_4692_, v___y_4693_, v___y_4694_, v___y_4695_, v___y_4696_);
lean_dec(v___y_4696_);
lean_dec_ref(v___y_4695_);
lean_dec(v___y_4694_);
lean_dec_ref(v___y_4693_);
lean_dec_ref(v_a_4690_);
lean_dec_ref(v_removed_4689_);
lean_dec(v_upperBound_4688_);
return v_res_4698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(lean_object* v_a_4699_, lean_object* v_f_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_){
_start:
{
lean_object* v___x_4706_; uint8_t v___x_4707_; lean_object* v___x_4708_; lean_object* v_removed_4709_; lean_object* v_numRemoved_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; 
v___x_4706_ = lean_array_get_size(v_a_4699_);
v___x_4707_ = 0;
v___x_4708_ = lean_box(v___x_4707_);
v_removed_4709_ = lean_mk_array(v___x_4706_, v___x_4708_);
v_numRemoved_4710_ = lean_unsigned_to_nat(0u);
v___x_4711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4711_, 0, v_removed_4709_);
lean_ctor_set(v___x_4711_, 1, v_numRemoved_4710_);
v___x_4712_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(v___x_4706_, v___x_4706_, v_a_4699_, v_f_4700_, v_numRemoved_4710_, v___x_4711_, v___y_4701_, v___y_4702_, v___y_4703_, v___y_4704_);
if (lean_obj_tag(v___x_4712_) == 0)
{
lean_object* v_a_4713_; lean_object* v_fst_4714_; lean_object* v_snd_4715_; lean_object* v_a_x27_4716_; lean_object* v___x_4717_; 
v_a_4713_ = lean_ctor_get(v___x_4712_, 0);
lean_inc(v_a_4713_);
lean_dec_ref_known(v___x_4712_, 1);
v_fst_4714_ = lean_ctor_get(v_a_4713_, 0);
lean_inc(v_fst_4714_);
v_snd_4715_ = lean_ctor_get(v_a_4713_, 1);
lean_inc(v_snd_4715_);
lean_dec(v_a_4713_);
v_a_x27_4716_ = lean_mk_empty_array_with_capacity(v_snd_4715_);
lean_dec(v_snd_4715_);
v___x_4717_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(v___x_4706_, v_fst_4714_, v_a_4699_, v_numRemoved_4710_, v_a_x27_4716_, v___y_4701_, v___y_4702_, v___y_4703_, v___y_4704_);
lean_dec(v_fst_4714_);
return v___x_4717_;
}
else
{
lean_object* v_a_4718_; lean_object* v___x_4720_; uint8_t v_isShared_4721_; uint8_t v_isSharedCheck_4725_; 
v_a_4718_ = lean_ctor_get(v___x_4712_, 0);
v_isSharedCheck_4725_ = !lean_is_exclusive(v___x_4712_);
if (v_isSharedCheck_4725_ == 0)
{
v___x_4720_ = v___x_4712_;
v_isShared_4721_ = v_isSharedCheck_4725_;
goto v_resetjp_4719_;
}
else
{
lean_inc(v_a_4718_);
lean_dec(v___x_4712_);
v___x_4720_ = lean_box(0);
v_isShared_4721_ = v_isSharedCheck_4725_;
goto v_resetjp_4719_;
}
v_resetjp_4719_:
{
lean_object* v___x_4723_; 
if (v_isShared_4721_ == 0)
{
v___x_4723_ = v___x_4720_;
goto v_reusejp_4722_;
}
else
{
lean_object* v_reuseFailAlloc_4724_; 
v_reuseFailAlloc_4724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4724_, 0, v_a_4718_);
v___x_4723_ = v_reuseFailAlloc_4724_;
goto v_reusejp_4722_;
}
v_reusejp_4722_:
{
return v___x_4723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg___boxed(lean_object* v_a_4726_, lean_object* v_f_4727_, lean_object* v___y_4728_, lean_object* v___y_4729_, lean_object* v___y_4730_, lean_object* v___y_4731_, lean_object* v___y_4732_){
_start:
{
lean_object* v_res_4733_; 
v_res_4733_ = l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(v_a_4726_, v_f_4727_, v___y_4728_, v___y_4729_, v___y_4730_, v___y_4731_);
lean_dec(v___y_4731_);
lean_dec_ref(v___y_4730_);
lean_dec(v___y_4729_);
lean_dec_ref(v___y_4728_);
lean_dec_ref(v_a_4726_);
return v_res_4733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed(lean_object* v_mvars_4735_, lean_object* v_a_4736_, lean_object* v_a_4737_, lean_object* v_a_4738_, lean_object* v_a_4739_){
_start:
{
lean_object* v___f_4741_; lean_object* v___x_4742_; 
v___f_4741_ = ((lean_object*)(l_Lean_Elab_WF_assignSubsumed___closed__0));
v___x_4742_ = l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(v_mvars_4735_, v___f_4741_, v_a_4736_, v_a_4737_, v_a_4738_, v_a_4739_);
return v___x_4742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___boxed(lean_object* v_mvars_4743_, lean_object* v_a_4744_, lean_object* v_a_4745_, lean_object* v_a_4746_, lean_object* v_a_4747_, lean_object* v_a_4748_){
_start:
{
lean_object* v_res_4749_; 
v_res_4749_ = l_Lean_Elab_WF_assignSubsumed(v_mvars_4743_, v_a_4744_, v_a_4745_, v_a_4746_, v_a_4747_);
lean_dec(v_a_4747_);
lean_dec_ref(v_a_4746_);
lean_dec(v_a_4745_);
lean_dec_ref(v_a_4744_);
lean_dec_ref(v_mvars_4743_);
return v_res_4749_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0(lean_object* v_mvarId_4750_, lean_object* v_val_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_){
_start:
{
lean_object* v___x_4757_; 
v___x_4757_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mvarId_4750_, v_val_4751_, v___y_4753_);
return v___x_4757_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___boxed(lean_object* v_mvarId_4758_, lean_object* v_val_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_, lean_object* v___y_4763_, lean_object* v___y_4764_){
_start:
{
lean_object* v_res_4765_; 
v_res_4765_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0(v_mvarId_4758_, v_val_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_);
lean_dec(v___y_4763_);
lean_dec_ref(v___y_4762_);
lean_dec(v___y_4761_);
lean_dec_ref(v___y_4760_);
return v_res_4765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1(lean_object* v_00_u03b1_4766_, lean_object* v_a_4767_, lean_object* v_f_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_){
_start:
{
lean_object* v___x_4774_; 
v___x_4774_ = l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(v_a_4767_, v_f_4768_, v___y_4769_, v___y_4770_, v___y_4771_, v___y_4772_);
return v___x_4774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___boxed(lean_object* v_00_u03b1_4775_, lean_object* v_a_4776_, lean_object* v_f_4777_, lean_object* v___y_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_){
_start:
{
lean_object* v_res_4783_; 
v_res_4783_ = l_Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1(v_00_u03b1_4775_, v_a_4776_, v_f_4777_, v___y_4778_, v___y_4779_, v___y_4780_, v___y_4781_);
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
lean_dec(v___y_4779_);
lean_dec_ref(v___y_4778_);
lean_dec_ref(v_a_4776_);
return v_res_4783_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0(lean_object* v_00_u03b2_4784_, lean_object* v_x_4785_, lean_object* v_x_4786_, lean_object* v_x_4787_){
_start:
{
lean_object* v___x_4788_; 
v___x_4788_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(v_x_4785_, v_x_4786_, v_x_4787_);
return v___x_4788_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2(lean_object* v_upperBound_4789_, lean_object* v_next_4790_, lean_object* v_00_u03b1_4791_, lean_object* v_a_4792_, lean_object* v_f_4793_, lean_object* v_inst_4794_, lean_object* v_R_4795_, lean_object* v_a_4796_, lean_object* v_b_4797_, lean_object* v_c_4798_, lean_object* v___y_4799_, lean_object* v___y_4800_, lean_object* v___y_4801_, lean_object* v___y_4802_){
_start:
{
lean_object* v___x_4804_; 
v___x_4804_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(v_upperBound_4789_, v_next_4790_, v_a_4792_, v_f_4793_, v_a_4796_, v_b_4797_, v___y_4799_, v___y_4800_, v___y_4801_, v___y_4802_);
return v___x_4804_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___boxed(lean_object* v_upperBound_4805_, lean_object* v_next_4806_, lean_object* v_00_u03b1_4807_, lean_object* v_a_4808_, lean_object* v_f_4809_, lean_object* v_inst_4810_, lean_object* v_R_4811_, lean_object* v_a_4812_, lean_object* v_b_4813_, lean_object* v_c_4814_, lean_object* v___y_4815_, lean_object* v___y_4816_, lean_object* v___y_4817_, lean_object* v___y_4818_, lean_object* v___y_4819_){
_start:
{
lean_object* v_res_4820_; 
v_res_4820_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2(v_upperBound_4805_, v_next_4806_, v_00_u03b1_4807_, v_a_4808_, v_f_4809_, v_inst_4810_, v_R_4811_, v_a_4812_, v_b_4813_, v_c_4814_, v___y_4815_, v___y_4816_, v___y_4817_, v___y_4818_);
lean_dec(v___y_4818_);
lean_dec_ref(v___y_4817_);
lean_dec(v___y_4816_);
lean_dec_ref(v___y_4815_);
lean_dec_ref(v_a_4808_);
lean_dec(v_upperBound_4805_);
return v_res_4820_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3(lean_object* v_00_u03b1_4821_, lean_object* v_upperBound_4822_, lean_object* v_removed_4823_, lean_object* v_a_4824_, lean_object* v_inst_4825_, lean_object* v_R_4826_, lean_object* v_a_4827_, lean_object* v_b_4828_, lean_object* v_c_4829_, lean_object* v___y_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_, lean_object* v___y_4833_){
_start:
{
lean_object* v___x_4835_; 
v___x_4835_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(v_upperBound_4822_, v_removed_4823_, v_a_4824_, v_a_4827_, v_b_4828_, v___y_4830_, v___y_4831_, v___y_4832_, v___y_4833_);
return v___x_4835_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___boxed(lean_object* v_00_u03b1_4836_, lean_object* v_upperBound_4837_, lean_object* v_removed_4838_, lean_object* v_a_4839_, lean_object* v_inst_4840_, lean_object* v_R_4841_, lean_object* v_a_4842_, lean_object* v_b_4843_, lean_object* v_c_4844_, lean_object* v___y_4845_, lean_object* v___y_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_, lean_object* v___y_4849_){
_start:
{
lean_object* v_res_4850_; 
v_res_4850_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3(v_00_u03b1_4836_, v_upperBound_4837_, v_removed_4838_, v_a_4839_, v_inst_4840_, v_R_4841_, v_a_4842_, v_b_4843_, v_c_4844_, v___y_4845_, v___y_4846_, v___y_4847_, v___y_4848_);
lean_dec(v___y_4848_);
lean_dec_ref(v___y_4847_);
lean_dec(v___y_4846_);
lean_dec_ref(v___y_4845_);
lean_dec_ref(v_a_4839_);
lean_dec_ref(v_removed_4838_);
lean_dec(v_upperBound_4837_);
return v_res_4850_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4(lean_object* v_upperBound_4851_, lean_object* v___x_4852_, lean_object* v_00_u03b1_4853_, lean_object* v_a_4854_, lean_object* v_f_4855_, lean_object* v_inst_4856_, lean_object* v_R_4857_, lean_object* v_a_4858_, lean_object* v_b_4859_, lean_object* v_c_4860_, lean_object* v___y_4861_, lean_object* v___y_4862_, lean_object* v___y_4863_, lean_object* v___y_4864_){
_start:
{
lean_object* v___x_4866_; 
v___x_4866_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(v_upperBound_4851_, v___x_4852_, v_a_4854_, v_f_4855_, v_a_4858_, v_b_4859_, v___y_4861_, v___y_4862_, v___y_4863_, v___y_4864_);
return v___x_4866_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___boxed(lean_object* v_upperBound_4867_, lean_object* v___x_4868_, lean_object* v_00_u03b1_4869_, lean_object* v_a_4870_, lean_object* v_f_4871_, lean_object* v_inst_4872_, lean_object* v_R_4873_, lean_object* v_a_4874_, lean_object* v_b_4875_, lean_object* v_c_4876_, lean_object* v___y_4877_, lean_object* v___y_4878_, lean_object* v___y_4879_, lean_object* v___y_4880_, lean_object* v___y_4881_){
_start:
{
lean_object* v_res_4882_; 
v_res_4882_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4(v_upperBound_4867_, v___x_4868_, v_00_u03b1_4869_, v_a_4870_, v_f_4871_, v_inst_4872_, v_R_4873_, v_a_4874_, v_b_4875_, v_c_4876_, v___y_4877_, v___y_4878_, v___y_4879_, v___y_4880_);
lean_dec(v___y_4880_);
lean_dec_ref(v___y_4879_);
lean_dec(v___y_4878_);
lean_dec_ref(v___y_4877_);
lean_dec_ref(v_a_4870_);
lean_dec(v___x_4868_);
lean_dec(v_upperBound_4867_);
return v_res_4882_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_4883_, lean_object* v_x_4884_, size_t v_x_4885_, size_t v_x_4886_, lean_object* v_x_4887_, lean_object* v_x_4888_){
_start:
{
lean_object* v___x_4889_; 
v___x_4889_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_x_4884_, v_x_4885_, v_x_4886_, v_x_4887_, v_x_4888_);
return v___x_4889_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_4890_, lean_object* v_x_4891_, lean_object* v_x_4892_, lean_object* v_x_4893_, lean_object* v_x_4894_, lean_object* v_x_4895_){
_start:
{
size_t v_x_5232__boxed_4896_; size_t v_x_5233__boxed_4897_; lean_object* v_res_4898_; 
v_x_5232__boxed_4896_ = lean_unbox_usize(v_x_4892_);
lean_dec(v_x_4892_);
v_x_5233__boxed_4897_ = lean_unbox_usize(v_x_4893_);
lean_dec(v_x_4893_);
v_res_4898_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1(v_00_u03b2_4890_, v_x_4891_, v_x_5232__boxed_4896_, v_x_5233__boxed_4897_, v_x_4894_, v_x_4895_);
return v_res_4898_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_4899_, lean_object* v_n_4900_, lean_object* v_k_4901_, lean_object* v_v_4902_){
_start:
{
lean_object* v___x_4903_; 
v___x_4903_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(v_n_4900_, v_k_4901_, v_v_4902_);
return v___x_4903_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_4904_, size_t v_depth_4905_, lean_object* v_keys_4906_, lean_object* v_vals_4907_, lean_object* v_heq_4908_, lean_object* v_i_4909_, lean_object* v_entries_4910_){
_start:
{
lean_object* v___x_4911_; 
v___x_4911_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(v_depth_4905_, v_keys_4906_, v_vals_4907_, v_i_4909_, v_entries_4910_);
return v___x_4911_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_4912_, lean_object* v_depth_4913_, lean_object* v_keys_4914_, lean_object* v_vals_4915_, lean_object* v_heq_4916_, lean_object* v_i_4917_, lean_object* v_entries_4918_){
_start:
{
size_t v_depth_boxed_4919_; lean_object* v_res_4920_; 
v_depth_boxed_4919_ = lean_unbox_usize(v_depth_4913_);
lean_dec(v_depth_4913_);
v_res_4920_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_4912_, v_depth_boxed_4919_, v_keys_4914_, v_vals_4915_, v_heq_4916_, v_i_4917_, v_entries_4918_);
lean_dec_ref(v_vals_4915_);
lean_dec_ref(v_keys_4914_);
return v_res_4920_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_4921_, lean_object* v_x_4922_, lean_object* v_x_4923_, lean_object* v_x_4924_, lean_object* v_x_4925_){
_start:
{
lean_object* v___x_4926_; 
v___x_4926_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_x_4922_, v_x_4923_, v_x_4924_, v_x_4925_);
return v___x_4926_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4928_; lean_object* v___x_4929_; 
v___x_4928_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0));
v___x_4929_ = l_Lean_stringToMessageData(v___x_4928_);
return v___x_4929_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4931_; lean_object* v___x_4932_; 
v___x_4931_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2));
v___x_4932_ = l_Lean_stringToMessageData(v___x_4931_);
return v___x_4932_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(lean_object* v_argsPacker_4933_, lean_object* v_as_4934_, size_t v_sz_4935_, size_t v_i_4936_, lean_object* v_b_4937_, lean_object* v___y_4938_, lean_object* v___y_4939_, lean_object* v___y_4940_, lean_object* v___y_4941_){
_start:
{
lean_object* v_a_4944_; uint8_t v___x_4948_; 
v___x_4948_ = lean_usize_dec_lt(v_i_4936_, v_sz_4935_);
if (v___x_4948_ == 0)
{
lean_object* v___x_4949_; 
v___x_4949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4949_, 0, v_b_4937_);
return v___x_4949_;
}
else
{
lean_object* v_a_4950_; lean_object* v___x_4951_; 
v_a_4950_ = lean_array_uget_borrowed(v_as_4934_, v_i_4936_);
lean_inc(v_a_4950_);
v___x_4951_ = l_Lean_MVarId_getType(v_a_4950_, v___y_4938_, v___y_4939_, v___y_4940_, v___y_4941_);
if (lean_obj_tag(v___x_4951_) == 0)
{
lean_object* v_a_4952_; lean_object* v___y_4954_; lean_object* v___y_4955_; lean_object* v___y_4956_; lean_object* v___y_4957_; 
v_a_4952_ = lean_ctor_get(v___x_4951_, 0);
lean_inc(v_a_4952_);
lean_dec_ref_known(v___x_4951_, 1);
if (lean_obj_tag(v_a_4952_) == 10)
{
lean_object* v_expr_4970_; 
v_expr_4970_ = lean_ctor_get(v_a_4952_, 1);
if (lean_obj_tag(v_expr_4970_) == 5)
{
lean_object* v_arg_4971_; lean_object* v___x_4972_; 
lean_inc_ref(v_expr_4970_);
lean_dec_ref_known(v_a_4952_, 2);
v_arg_4971_ = lean_ctor_get(v_expr_4970_, 1);
lean_inc_ref_n(v_arg_4971_, 2);
lean_dec_ref_known(v_expr_4970_, 2);
v___x_4972_ = l_Lean_Meta_ArgsPacker_unpack(v_argsPacker_4933_, v_arg_4971_);
if (lean_obj_tag(v___x_4972_) == 1)
{
lean_object* v_val_4973_; lean_object* v_fst_4974_; lean_object* v___x_4975_; uint8_t v___x_4976_; 
lean_dec_ref(v_arg_4971_);
v_val_4973_ = lean_ctor_get(v___x_4972_, 0);
lean_inc(v_val_4973_);
lean_dec_ref_known(v___x_4972_, 1);
v_fst_4974_ = lean_ctor_get(v_val_4973_, 0);
lean_inc(v_fst_4974_);
lean_dec(v_val_4973_);
v___x_4975_ = lean_array_get_size(v_b_4937_);
v___x_4976_ = lean_nat_dec_lt(v_fst_4974_, v___x_4975_);
if (v___x_4976_ == 0)
{
lean_dec(v_fst_4974_);
v_a_4944_ = v_b_4937_;
goto v___jp_4943_;
}
else
{
lean_object* v_v_4977_; lean_object* v___x_4978_; lean_object* v_xs_x27_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; 
v_v_4977_ = lean_array_fget(v_b_4937_, v_fst_4974_);
v___x_4978_ = lean_box(0);
v_xs_x27_4979_ = lean_array_fset(v_b_4937_, v_fst_4974_, v___x_4978_);
lean_inc(v_a_4950_);
v___x_4980_ = lean_array_push(v_v_4977_, v_a_4950_);
v___x_4981_ = lean_array_fset(v_xs_x27_4979_, v_fst_4974_, v___x_4980_);
lean_dec(v_fst_4974_);
v_a_4944_ = v___x_4981_;
goto v___jp_4943_;
}
}
else
{
lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; 
lean_dec(v___x_4972_);
v___x_4982_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3);
v___x_4983_ = l_Lean_indentExpr(v_arg_4971_);
v___x_4984_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4984_, 0, v___x_4982_);
lean_ctor_set(v___x_4984_, 1, v___x_4983_);
v___x_4985_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v___x_4984_, v___y_4938_, v___y_4939_, v___y_4940_, v___y_4941_);
if (lean_obj_tag(v___x_4985_) == 0)
{
lean_dec_ref_known(v___x_4985_, 1);
v_a_4944_ = v_b_4937_;
goto v___jp_4943_;
}
else
{
lean_object* v_a_4986_; lean_object* v___x_4988_; uint8_t v_isShared_4989_; uint8_t v_isSharedCheck_4993_; 
lean_dec_ref(v_b_4937_);
v_a_4986_ = lean_ctor_get(v___x_4985_, 0);
v_isSharedCheck_4993_ = !lean_is_exclusive(v___x_4985_);
if (v_isSharedCheck_4993_ == 0)
{
v___x_4988_ = v___x_4985_;
v_isShared_4989_ = v_isSharedCheck_4993_;
goto v_resetjp_4987_;
}
else
{
lean_inc(v_a_4986_);
lean_dec(v___x_4985_);
v___x_4988_ = lean_box(0);
v_isShared_4989_ = v_isSharedCheck_4993_;
goto v_resetjp_4987_;
}
v_resetjp_4987_:
{
lean_object* v___x_4991_; 
if (v_isShared_4989_ == 0)
{
v___x_4991_ = v___x_4988_;
goto v_reusejp_4990_;
}
else
{
lean_object* v_reuseFailAlloc_4992_; 
v_reuseFailAlloc_4992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4992_, 0, v_a_4986_);
v___x_4991_ = v_reuseFailAlloc_4992_;
goto v_reusejp_4990_;
}
v_reusejp_4990_:
{
return v___x_4991_;
}
}
}
}
}
else
{
v___y_4954_ = v___y_4938_;
v___y_4955_ = v___y_4939_;
v___y_4956_ = v___y_4940_;
v___y_4957_ = v___y_4941_;
goto v___jp_4953_;
}
}
else
{
v___y_4954_ = v___y_4938_;
v___y_4955_ = v___y_4939_;
v___y_4956_ = v___y_4940_;
v___y_4957_ = v___y_4941_;
goto v___jp_4953_;
}
v___jp_4953_:
{
lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; 
v___x_4958_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1);
v___x_4959_ = l_Lean_indentExpr(v_a_4952_);
v___x_4960_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4960_, 0, v___x_4958_);
lean_ctor_set(v___x_4960_, 1, v___x_4959_);
v___x_4961_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v___x_4960_, v___y_4954_, v___y_4955_, v___y_4956_, v___y_4957_);
if (lean_obj_tag(v___x_4961_) == 0)
{
lean_dec_ref_known(v___x_4961_, 1);
v_a_4944_ = v_b_4937_;
goto v___jp_4943_;
}
else
{
lean_object* v_a_4962_; lean_object* v___x_4964_; uint8_t v_isShared_4965_; uint8_t v_isSharedCheck_4969_; 
lean_dec_ref(v_b_4937_);
v_a_4962_ = lean_ctor_get(v___x_4961_, 0);
v_isSharedCheck_4969_ = !lean_is_exclusive(v___x_4961_);
if (v_isSharedCheck_4969_ == 0)
{
v___x_4964_ = v___x_4961_;
v_isShared_4965_ = v_isSharedCheck_4969_;
goto v_resetjp_4963_;
}
else
{
lean_inc(v_a_4962_);
lean_dec(v___x_4961_);
v___x_4964_ = lean_box(0);
v_isShared_4965_ = v_isSharedCheck_4969_;
goto v_resetjp_4963_;
}
v_resetjp_4963_:
{
lean_object* v___x_4967_; 
if (v_isShared_4965_ == 0)
{
v___x_4967_ = v___x_4964_;
goto v_reusejp_4966_;
}
else
{
lean_object* v_reuseFailAlloc_4968_; 
v_reuseFailAlloc_4968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4968_, 0, v_a_4962_);
v___x_4967_ = v_reuseFailAlloc_4968_;
goto v_reusejp_4966_;
}
v_reusejp_4966_:
{
return v___x_4967_;
}
}
}
}
}
else
{
lean_object* v_a_4994_; lean_object* v___x_4996_; uint8_t v_isShared_4997_; uint8_t v_isSharedCheck_5001_; 
lean_dec_ref(v_b_4937_);
v_a_4994_ = lean_ctor_get(v___x_4951_, 0);
v_isSharedCheck_5001_ = !lean_is_exclusive(v___x_4951_);
if (v_isSharedCheck_5001_ == 0)
{
v___x_4996_ = v___x_4951_;
v_isShared_4997_ = v_isSharedCheck_5001_;
goto v_resetjp_4995_;
}
else
{
lean_inc(v_a_4994_);
lean_dec(v___x_4951_);
v___x_4996_ = lean_box(0);
v_isShared_4997_ = v_isSharedCheck_5001_;
goto v_resetjp_4995_;
}
v_resetjp_4995_:
{
lean_object* v___x_4999_; 
if (v_isShared_4997_ == 0)
{
v___x_4999_ = v___x_4996_;
goto v_reusejp_4998_;
}
else
{
lean_object* v_reuseFailAlloc_5000_; 
v_reuseFailAlloc_5000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5000_, 0, v_a_4994_);
v___x_4999_ = v_reuseFailAlloc_5000_;
goto v_reusejp_4998_;
}
v_reusejp_4998_:
{
return v___x_4999_;
}
}
}
}
v___jp_4943_:
{
size_t v___x_4945_; size_t v___x_4946_; 
v___x_4945_ = ((size_t)1ULL);
v___x_4946_ = lean_usize_add(v_i_4936_, v___x_4945_);
v_i_4936_ = v___x_4946_;
v_b_4937_ = v_a_4944_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___boxed(lean_object* v_argsPacker_5002_, lean_object* v_as_5003_, lean_object* v_sz_5004_, lean_object* v_i_5005_, lean_object* v_b_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_){
_start:
{
size_t v_sz_boxed_5012_; size_t v_i_boxed_5013_; lean_object* v_res_5014_; 
v_sz_boxed_5012_ = lean_unbox_usize(v_sz_5004_);
lean_dec(v_sz_5004_);
v_i_boxed_5013_ = lean_unbox_usize(v_i_5005_);
lean_dec(v_i_5005_);
v_res_5014_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(v_argsPacker_5002_, v_as_5003_, v_sz_boxed_5012_, v_i_boxed_5013_, v_b_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_);
lean_dec(v___y_5010_);
lean_dec_ref(v___y_5009_);
lean_dec(v___y_5008_);
lean_dec_ref(v___y_5007_);
lean_dec_ref(v_as_5003_);
lean_dec_ref(v_argsPacker_5002_);
return v_res_5014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction(lean_object* v_argsPacker_5015_, lean_object* v_numFuncs_5016_, lean_object* v_goals_5017_, lean_object* v_a_5018_, lean_object* v_a_5019_, lean_object* v_a_5020_, lean_object* v_a_5021_){
_start:
{
lean_object* v___x_5023_; lean_object* v_r_5024_; size_t v_sz_5025_; size_t v___x_5026_; lean_object* v___x_5027_; 
v___x_5023_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0));
v_r_5024_ = lean_mk_array(v_numFuncs_5016_, v___x_5023_);
v_sz_5025_ = lean_array_size(v_goals_5017_);
v___x_5026_ = ((size_t)0ULL);
v___x_5027_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(v_argsPacker_5015_, v_goals_5017_, v_sz_5025_, v___x_5026_, v_r_5024_, v_a_5018_, v_a_5019_, v_a_5020_, v_a_5021_);
return v___x_5027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction___boxed(lean_object* v_argsPacker_5028_, lean_object* v_numFuncs_5029_, lean_object* v_goals_5030_, lean_object* v_a_5031_, lean_object* v_a_5032_, lean_object* v_a_5033_, lean_object* v_a_5034_, lean_object* v_a_5035_){
_start:
{
lean_object* v_res_5036_; 
v_res_5036_ = l_Lean_Elab_WF_groupGoalsByFunction(v_argsPacker_5028_, v_numFuncs_5029_, v_goals_5030_, v_a_5031_, v_a_5032_, v_a_5033_, v_a_5034_);
lean_dec(v_a_5034_);
lean_dec_ref(v_a_5033_);
lean_dec(v_a_5032_);
lean_dec_ref(v_a_5031_);
lean_dec_ref(v_goals_5030_);
lean_dec_ref(v_argsPacker_5028_);
return v_res_5036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(lean_object* v_t_5037_, lean_object* v___y_5038_){
_start:
{
lean_object* v___x_5040_; lean_object* v_infoState_5041_; uint8_t v_enabled_5042_; 
v___x_5040_ = lean_st_ref_get(v___y_5038_);
v_infoState_5041_ = lean_ctor_get(v___x_5040_, 8);
lean_inc_ref(v_infoState_5041_);
lean_dec(v___x_5040_);
v_enabled_5042_ = lean_ctor_get_uint8(v_infoState_5041_, sizeof(void*)*3);
lean_dec_ref(v_infoState_5041_);
if (v_enabled_5042_ == 0)
{
lean_object* v___x_5043_; lean_object* v___x_5044_; 
lean_dec_ref(v_t_5037_);
v___x_5043_ = lean_box(0);
v___x_5044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5044_, 0, v___x_5043_);
return v___x_5044_;
}
else
{
lean_object* v___x_5045_; lean_object* v_infoState_5046_; lean_object* v_env_5047_; lean_object* v_nextMacroScope_5048_; lean_object* v_ngen_5049_; lean_object* v_auxDeclNGen_5050_; lean_object* v_traceState_5051_; lean_object* v_cache_5052_; lean_object* v_recordedDeps_5053_; lean_object* v_messages_5054_; lean_object* v_snapshotTasks_5055_; lean_object* v___x_5057_; uint8_t v_isShared_5058_; uint8_t v_isSharedCheck_5077_; 
v___x_5045_ = lean_st_ref_take(v___y_5038_);
v_infoState_5046_ = lean_ctor_get(v___x_5045_, 8);
v_env_5047_ = lean_ctor_get(v___x_5045_, 0);
v_nextMacroScope_5048_ = lean_ctor_get(v___x_5045_, 1);
v_ngen_5049_ = lean_ctor_get(v___x_5045_, 2);
v_auxDeclNGen_5050_ = lean_ctor_get(v___x_5045_, 3);
v_traceState_5051_ = lean_ctor_get(v___x_5045_, 4);
v_cache_5052_ = lean_ctor_get(v___x_5045_, 5);
v_recordedDeps_5053_ = lean_ctor_get(v___x_5045_, 6);
v_messages_5054_ = lean_ctor_get(v___x_5045_, 7);
v_snapshotTasks_5055_ = lean_ctor_get(v___x_5045_, 9);
v_isSharedCheck_5077_ = !lean_is_exclusive(v___x_5045_);
if (v_isSharedCheck_5077_ == 0)
{
v___x_5057_ = v___x_5045_;
v_isShared_5058_ = v_isSharedCheck_5077_;
goto v_resetjp_5056_;
}
else
{
lean_inc(v_snapshotTasks_5055_);
lean_inc(v_infoState_5046_);
lean_inc(v_messages_5054_);
lean_inc(v_recordedDeps_5053_);
lean_inc(v_cache_5052_);
lean_inc(v_traceState_5051_);
lean_inc(v_auxDeclNGen_5050_);
lean_inc(v_ngen_5049_);
lean_inc(v_nextMacroScope_5048_);
lean_inc(v_env_5047_);
lean_dec(v___x_5045_);
v___x_5057_ = lean_box(0);
v_isShared_5058_ = v_isSharedCheck_5077_;
goto v_resetjp_5056_;
}
v_resetjp_5056_:
{
uint8_t v_enabled_5059_; lean_object* v_assignment_5060_; lean_object* v_lazyAssignment_5061_; lean_object* v_trees_5062_; lean_object* v___x_5064_; uint8_t v_isShared_5065_; uint8_t v_isSharedCheck_5076_; 
v_enabled_5059_ = lean_ctor_get_uint8(v_infoState_5046_, sizeof(void*)*3);
v_assignment_5060_ = lean_ctor_get(v_infoState_5046_, 0);
v_lazyAssignment_5061_ = lean_ctor_get(v_infoState_5046_, 1);
v_trees_5062_ = lean_ctor_get(v_infoState_5046_, 2);
v_isSharedCheck_5076_ = !lean_is_exclusive(v_infoState_5046_);
if (v_isSharedCheck_5076_ == 0)
{
v___x_5064_ = v_infoState_5046_;
v_isShared_5065_ = v_isSharedCheck_5076_;
goto v_resetjp_5063_;
}
else
{
lean_inc(v_trees_5062_);
lean_inc(v_lazyAssignment_5061_);
lean_inc(v_assignment_5060_);
lean_dec(v_infoState_5046_);
v___x_5064_ = lean_box(0);
v_isShared_5065_ = v_isSharedCheck_5076_;
goto v_resetjp_5063_;
}
v_resetjp_5063_:
{
lean_object* v___x_5066_; lean_object* v___x_5067_; lean_object* v___x_5069_; 
v___x_5066_ = lean_box(0);
v___x_5067_ = l_Lean_PersistentArray_push___redArg(v_trees_5062_, v_t_5037_);
if (v_isShared_5065_ == 0)
{
lean_ctor_set(v___x_5064_, 2, v___x_5067_);
v___x_5069_ = v___x_5064_;
goto v_reusejp_5068_;
}
else
{
lean_object* v_reuseFailAlloc_5075_; 
v_reuseFailAlloc_5075_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5075_, 0, v_assignment_5060_);
lean_ctor_set(v_reuseFailAlloc_5075_, 1, v_lazyAssignment_5061_);
lean_ctor_set(v_reuseFailAlloc_5075_, 2, v___x_5067_);
lean_ctor_set_uint8(v_reuseFailAlloc_5075_, sizeof(void*)*3, v_enabled_5059_);
v___x_5069_ = v_reuseFailAlloc_5075_;
goto v_reusejp_5068_;
}
v_reusejp_5068_:
{
lean_object* v___x_5071_; 
if (v_isShared_5058_ == 0)
{
lean_ctor_set(v___x_5057_, 8, v___x_5069_);
v___x_5071_ = v___x_5057_;
goto v_reusejp_5070_;
}
else
{
lean_object* v_reuseFailAlloc_5074_; 
v_reuseFailAlloc_5074_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5074_, 0, v_env_5047_);
lean_ctor_set(v_reuseFailAlloc_5074_, 1, v_nextMacroScope_5048_);
lean_ctor_set(v_reuseFailAlloc_5074_, 2, v_ngen_5049_);
lean_ctor_set(v_reuseFailAlloc_5074_, 3, v_auxDeclNGen_5050_);
lean_ctor_set(v_reuseFailAlloc_5074_, 4, v_traceState_5051_);
lean_ctor_set(v_reuseFailAlloc_5074_, 5, v_cache_5052_);
lean_ctor_set(v_reuseFailAlloc_5074_, 6, v_recordedDeps_5053_);
lean_ctor_set(v_reuseFailAlloc_5074_, 7, v_messages_5054_);
lean_ctor_set(v_reuseFailAlloc_5074_, 8, v___x_5069_);
lean_ctor_set(v_reuseFailAlloc_5074_, 9, v_snapshotTasks_5055_);
v___x_5071_ = v_reuseFailAlloc_5074_;
goto v_reusejp_5070_;
}
v_reusejp_5070_:
{
lean_object* v___x_5072_; lean_object* v___x_5073_; 
v___x_5072_ = lean_st_ref_put(v___y_5038_, v___x_5071_);
v___x_5073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5073_, 0, v___x_5066_);
return v___x_5073_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg___boxed(lean_object* v_t_5078_, lean_object* v___y_5079_, lean_object* v___y_5080_){
_start:
{
lean_object* v_res_5081_; 
v_res_5081_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(v_t_5078_, v___y_5079_);
lean_dec(v___y_5079_);
return v_res_5081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0(lean_object* v_t_5082_, lean_object* v___y_5083_, lean_object* v___y_5084_, lean_object* v___y_5085_, lean_object* v___y_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_){
_start:
{
lean_object* v___x_5090_; 
v___x_5090_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(v_t_5082_, v___y_5088_);
return v___x_5090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___boxed(lean_object* v_t_5091_, lean_object* v___y_5092_, lean_object* v___y_5093_, lean_object* v___y_5094_, lean_object* v___y_5095_, lean_object* v___y_5096_, lean_object* v___y_5097_, lean_object* v___y_5098_){
_start:
{
lean_object* v_res_5099_; 
v_res_5099_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0(v_t_5091_, v___y_5092_, v___y_5093_, v___y_5094_, v___y_5095_, v___y_5096_, v___y_5097_);
lean_dec(v___y_5097_);
lean_dec_ref(v___y_5096_);
lean_dec(v___y_5095_);
lean_dec_ref(v___y_5094_);
lean_dec(v___y_5093_);
lean_dec_ref(v___y_5092_);
return v_res_5099_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(lean_object* v_e_5100_, lean_object* v___y_5101_){
_start:
{
uint8_t v___x_5103_; 
v___x_5103_ = l_Lean_Expr_hasMVar(v_e_5100_);
if (v___x_5103_ == 0)
{
lean_object* v___x_5104_; 
v___x_5104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5104_, 0, v_e_5100_);
return v___x_5104_;
}
else
{
lean_object* v___x_5105_; lean_object* v_mctx_5106_; lean_object* v___x_5107_; lean_object* v_fst_5108_; lean_object* v_snd_5109_; lean_object* v___x_5110_; lean_object* v_cache_5111_; lean_object* v_zetaDeltaFVarIds_5112_; lean_object* v_postponed_5113_; lean_object* v_diag_5114_; lean_object* v___x_5116_; uint8_t v_isShared_5117_; uint8_t v_isSharedCheck_5123_; 
v___x_5105_ = lean_st_ref_get(v___y_5101_);
v_mctx_5106_ = lean_ctor_get(v___x_5105_, 0);
lean_inc_ref(v_mctx_5106_);
lean_dec(v___x_5105_);
v___x_5107_ = l_Lean_instantiateMVarsCore(v_mctx_5106_, v_e_5100_);
v_fst_5108_ = lean_ctor_get(v___x_5107_, 0);
lean_inc(v_fst_5108_);
v_snd_5109_ = lean_ctor_get(v___x_5107_, 1);
lean_inc(v_snd_5109_);
lean_dec_ref(v___x_5107_);
v___x_5110_ = lean_st_ref_take(v___y_5101_);
v_cache_5111_ = lean_ctor_get(v___x_5110_, 1);
v_zetaDeltaFVarIds_5112_ = lean_ctor_get(v___x_5110_, 2);
v_postponed_5113_ = lean_ctor_get(v___x_5110_, 3);
v_diag_5114_ = lean_ctor_get(v___x_5110_, 4);
v_isSharedCheck_5123_ = !lean_is_exclusive(v___x_5110_);
if (v_isSharedCheck_5123_ == 0)
{
lean_object* v_unused_5124_; 
v_unused_5124_ = lean_ctor_get(v___x_5110_, 0);
lean_dec(v_unused_5124_);
v___x_5116_ = v___x_5110_;
v_isShared_5117_ = v_isSharedCheck_5123_;
goto v_resetjp_5115_;
}
else
{
lean_inc(v_diag_5114_);
lean_inc(v_postponed_5113_);
lean_inc(v_zetaDeltaFVarIds_5112_);
lean_inc(v_cache_5111_);
lean_dec(v___x_5110_);
v___x_5116_ = lean_box(0);
v_isShared_5117_ = v_isSharedCheck_5123_;
goto v_resetjp_5115_;
}
v_resetjp_5115_:
{
lean_object* v___x_5119_; 
if (v_isShared_5117_ == 0)
{
lean_ctor_set(v___x_5116_, 0, v_snd_5109_);
v___x_5119_ = v___x_5116_;
goto v_reusejp_5118_;
}
else
{
lean_object* v_reuseFailAlloc_5122_; 
v_reuseFailAlloc_5122_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5122_, 0, v_snd_5109_);
lean_ctor_set(v_reuseFailAlloc_5122_, 1, v_cache_5111_);
lean_ctor_set(v_reuseFailAlloc_5122_, 2, v_zetaDeltaFVarIds_5112_);
lean_ctor_set(v_reuseFailAlloc_5122_, 3, v_postponed_5113_);
lean_ctor_set(v_reuseFailAlloc_5122_, 4, v_diag_5114_);
v___x_5119_ = v_reuseFailAlloc_5122_;
goto v_reusejp_5118_;
}
v_reusejp_5118_:
{
lean_object* v___x_5120_; lean_object* v___x_5121_; 
v___x_5120_ = lean_st_ref_put(v___y_5101_, v___x_5119_);
v___x_5121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5121_, 0, v_fst_5108_);
return v___x_5121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg___boxed(lean_object* v_e_5125_, lean_object* v___y_5126_, lean_object* v___y_5127_){
_start:
{
lean_object* v_res_5128_; 
v_res_5128_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(v_e_5125_, v___y_5126_);
lean_dec(v___y_5126_);
return v_res_5128_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7(lean_object* v_e_5129_, lean_object* v___y_5130_, lean_object* v___y_5131_, lean_object* v___y_5132_, lean_object* v___y_5133_){
_start:
{
lean_object* v___x_5135_; 
v___x_5135_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(v_e_5129_, v___y_5131_);
return v___x_5135_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___boxed(lean_object* v_e_5136_, lean_object* v___y_5137_, lean_object* v___y_5138_, lean_object* v___y_5139_, lean_object* v___y_5140_, lean_object* v___y_5141_){
_start:
{
lean_object* v_res_5142_; 
v_res_5142_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7(v_e_5136_, v___y_5137_, v___y_5138_, v___y_5139_, v___y_5140_);
lean_dec(v___y_5140_);
lean_dec_ref(v___y_5139_);
lean_dec(v___y_5138_);
lean_dec_ref(v___y_5137_);
return v_res_5142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(lean_object* v_as_5143_, size_t v_i_5144_, size_t v_stop_5145_, lean_object* v_b_5146_, lean_object* v___y_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_){
_start:
{
uint8_t v___x_5154_; 
v___x_5154_ = lean_usize_dec_eq(v_i_5144_, v_stop_5145_);
if (v___x_5154_ == 0)
{
lean_object* v___x_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; 
v___x_5155_ = lean_array_uget_borrowed(v_as_5143_, v_i_5144_);
lean_inc(v___x_5155_);
v___x_5156_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_5156_, 0, v___x_5155_);
v___x_5157_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(v___x_5156_, v___y_5152_);
if (lean_obj_tag(v___x_5157_) == 0)
{
lean_object* v_a_5158_; size_t v___x_5159_; size_t v___x_5160_; 
v_a_5158_ = lean_ctor_get(v___x_5157_, 0);
lean_inc(v_a_5158_);
lean_dec_ref_known(v___x_5157_, 1);
v___x_5159_ = ((size_t)1ULL);
v___x_5160_ = lean_usize_add(v_i_5144_, v___x_5159_);
v_i_5144_ = v___x_5160_;
v_b_5146_ = v_a_5158_;
goto _start;
}
else
{
return v___x_5157_;
}
}
else
{
lean_object* v___x_5162_; 
v___x_5162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5162_, 0, v_b_5146_);
return v___x_5162_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4___boxed(lean_object* v_as_5163_, lean_object* v_i_5164_, lean_object* v_stop_5165_, lean_object* v_b_5166_, lean_object* v___y_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_){
_start:
{
size_t v_i_boxed_5174_; size_t v_stop_boxed_5175_; lean_object* v_res_5176_; 
v_i_boxed_5174_ = lean_unbox_usize(v_i_5164_);
lean_dec(v_i_5164_);
v_stop_boxed_5175_ = lean_unbox_usize(v_stop_5165_);
lean_dec(v_stop_5165_);
v_res_5176_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(v_as_5163_, v_i_boxed_5174_, v_stop_boxed_5175_, v_b_5166_, v___y_5167_, v___y_5168_, v___y_5169_, v___y_5170_, v___y_5171_, v___y_5172_);
lean_dec(v___y_5172_);
lean_dec_ref(v___y_5171_);
lean_dec(v___y_5170_);
lean_dec_ref(v___y_5169_);
lean_dec(v___y_5168_);
lean_dec_ref(v___y_5167_);
lean_dec_ref(v_as_5163_);
return v_res_5176_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; 
v___x_5177_ = lean_unsigned_to_nat(32u);
v___x_5178_ = lean_mk_empty_array_with_capacity(v___x_5177_);
v___x_5179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5179_, 0, v___x_5178_);
return v___x_5179_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; 
v___x_5180_ = ((size_t)5ULL);
v___x_5181_ = lean_unsigned_to_nat(0u);
v___x_5182_ = lean_unsigned_to_nat(32u);
v___x_5183_ = lean_mk_empty_array_with_capacity(v___x_5182_);
v___x_5184_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0);
v___x_5185_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_5185_, 0, v___x_5184_);
lean_ctor_set(v___x_5185_, 1, v___x_5183_);
lean_ctor_set(v___x_5185_, 2, v___x_5181_);
lean_ctor_set(v___x_5185_, 3, v___x_5181_);
lean_ctor_set_usize(v___x_5185_, 4, v___x_5180_);
return v___x_5185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(lean_object* v___y_5186_){
_start:
{
lean_object* v___x_5188_; lean_object* v_infoState_5189_; lean_object* v_trees_5190_; lean_object* v___x_5191_; lean_object* v_infoState_5192_; lean_object* v_env_5193_; lean_object* v_nextMacroScope_5194_; lean_object* v_ngen_5195_; lean_object* v_auxDeclNGen_5196_; lean_object* v_traceState_5197_; lean_object* v_cache_5198_; lean_object* v_recordedDeps_5199_; lean_object* v_messages_5200_; lean_object* v_snapshotTasks_5201_; lean_object* v___x_5203_; uint8_t v_isShared_5204_; uint8_t v_isSharedCheck_5222_; 
v___x_5188_ = lean_st_ref_get(v___y_5186_);
v_infoState_5189_ = lean_ctor_get(v___x_5188_, 8);
lean_inc_ref(v_infoState_5189_);
lean_dec(v___x_5188_);
v_trees_5190_ = lean_ctor_get(v_infoState_5189_, 2);
lean_inc_ref(v_trees_5190_);
lean_dec_ref(v_infoState_5189_);
v___x_5191_ = lean_st_ref_take(v___y_5186_);
v_infoState_5192_ = lean_ctor_get(v___x_5191_, 8);
v_env_5193_ = lean_ctor_get(v___x_5191_, 0);
v_nextMacroScope_5194_ = lean_ctor_get(v___x_5191_, 1);
v_ngen_5195_ = lean_ctor_get(v___x_5191_, 2);
v_auxDeclNGen_5196_ = lean_ctor_get(v___x_5191_, 3);
v_traceState_5197_ = lean_ctor_get(v___x_5191_, 4);
v_cache_5198_ = lean_ctor_get(v___x_5191_, 5);
v_recordedDeps_5199_ = lean_ctor_get(v___x_5191_, 6);
v_messages_5200_ = lean_ctor_get(v___x_5191_, 7);
v_snapshotTasks_5201_ = lean_ctor_get(v___x_5191_, 9);
v_isSharedCheck_5222_ = !lean_is_exclusive(v___x_5191_);
if (v_isSharedCheck_5222_ == 0)
{
v___x_5203_ = v___x_5191_;
v_isShared_5204_ = v_isSharedCheck_5222_;
goto v_resetjp_5202_;
}
else
{
lean_inc(v_snapshotTasks_5201_);
lean_inc(v_infoState_5192_);
lean_inc(v_messages_5200_);
lean_inc(v_recordedDeps_5199_);
lean_inc(v_cache_5198_);
lean_inc(v_traceState_5197_);
lean_inc(v_auxDeclNGen_5196_);
lean_inc(v_ngen_5195_);
lean_inc(v_nextMacroScope_5194_);
lean_inc(v_env_5193_);
lean_dec(v___x_5191_);
v___x_5203_ = lean_box(0);
v_isShared_5204_ = v_isSharedCheck_5222_;
goto v_resetjp_5202_;
}
v_resetjp_5202_:
{
uint8_t v_enabled_5205_; lean_object* v_assignment_5206_; lean_object* v_lazyAssignment_5207_; lean_object* v___x_5209_; uint8_t v_isShared_5210_; uint8_t v_isSharedCheck_5220_; 
v_enabled_5205_ = lean_ctor_get_uint8(v_infoState_5192_, sizeof(void*)*3);
v_assignment_5206_ = lean_ctor_get(v_infoState_5192_, 0);
v_lazyAssignment_5207_ = lean_ctor_get(v_infoState_5192_, 1);
v_isSharedCheck_5220_ = !lean_is_exclusive(v_infoState_5192_);
if (v_isSharedCheck_5220_ == 0)
{
lean_object* v_unused_5221_; 
v_unused_5221_ = lean_ctor_get(v_infoState_5192_, 2);
lean_dec(v_unused_5221_);
v___x_5209_ = v_infoState_5192_;
v_isShared_5210_ = v_isSharedCheck_5220_;
goto v_resetjp_5208_;
}
else
{
lean_inc(v_lazyAssignment_5207_);
lean_inc(v_assignment_5206_);
lean_dec(v_infoState_5192_);
v___x_5209_ = lean_box(0);
v_isShared_5210_ = v_isSharedCheck_5220_;
goto v_resetjp_5208_;
}
v_resetjp_5208_:
{
lean_object* v___x_5211_; lean_object* v___x_5213_; 
v___x_5211_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1);
if (v_isShared_5210_ == 0)
{
lean_ctor_set(v___x_5209_, 2, v___x_5211_);
v___x_5213_ = v___x_5209_;
goto v_reusejp_5212_;
}
else
{
lean_object* v_reuseFailAlloc_5219_; 
v_reuseFailAlloc_5219_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5219_, 0, v_assignment_5206_);
lean_ctor_set(v_reuseFailAlloc_5219_, 1, v_lazyAssignment_5207_);
lean_ctor_set(v_reuseFailAlloc_5219_, 2, v___x_5211_);
lean_ctor_set_uint8(v_reuseFailAlloc_5219_, sizeof(void*)*3, v_enabled_5205_);
v___x_5213_ = v_reuseFailAlloc_5219_;
goto v_reusejp_5212_;
}
v_reusejp_5212_:
{
lean_object* v___x_5215_; 
if (v_isShared_5204_ == 0)
{
lean_ctor_set(v___x_5203_, 8, v___x_5213_);
v___x_5215_ = v___x_5203_;
goto v_reusejp_5214_;
}
else
{
lean_object* v_reuseFailAlloc_5218_; 
v_reuseFailAlloc_5218_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5218_, 0, v_env_5193_);
lean_ctor_set(v_reuseFailAlloc_5218_, 1, v_nextMacroScope_5194_);
lean_ctor_set(v_reuseFailAlloc_5218_, 2, v_ngen_5195_);
lean_ctor_set(v_reuseFailAlloc_5218_, 3, v_auxDeclNGen_5196_);
lean_ctor_set(v_reuseFailAlloc_5218_, 4, v_traceState_5197_);
lean_ctor_set(v_reuseFailAlloc_5218_, 5, v_cache_5198_);
lean_ctor_set(v_reuseFailAlloc_5218_, 6, v_recordedDeps_5199_);
lean_ctor_set(v_reuseFailAlloc_5218_, 7, v_messages_5200_);
lean_ctor_set(v_reuseFailAlloc_5218_, 8, v___x_5213_);
lean_ctor_set(v_reuseFailAlloc_5218_, 9, v_snapshotTasks_5201_);
v___x_5215_ = v_reuseFailAlloc_5218_;
goto v_reusejp_5214_;
}
v_reusejp_5214_:
{
lean_object* v___x_5216_; lean_object* v___x_5217_; 
v___x_5216_ = lean_st_ref_put(v___y_5186_, v___x_5215_);
v___x_5217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5217_, 0, v_trees_5190_);
return v___x_5217_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___boxed(lean_object* v___y_5223_, lean_object* v___y_5224_){
_start:
{
lean_object* v_res_5225_; 
v_res_5225_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(v___y_5223_);
lean_dec(v___y_5223_);
return v_res_5225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(lean_object* v___y_5226_, lean_object* v_mkInfoTree_5227_, lean_object* v___y_5228_, lean_object* v___y_5229_, lean_object* v___y_5230_, lean_object* v___y_5231_, lean_object* v___y_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_, lean_object* v_a_5235_, lean_object* v_a_x3f_5236_){
_start:
{
lean_object* v___x_5238_; lean_object* v_infoState_5239_; lean_object* v_trees_5240_; lean_object* v___x_5241_; 
v___x_5238_ = lean_st_ref_get(v___y_5226_);
v_infoState_5239_ = lean_ctor_get(v___x_5238_, 8);
lean_inc_ref(v_infoState_5239_);
lean_dec(v___x_5238_);
v_trees_5240_ = lean_ctor_get(v_infoState_5239_, 2);
lean_inc_ref(v_trees_5240_);
lean_dec_ref(v_infoState_5239_);
lean_inc(v___y_5226_);
lean_inc_ref(v___y_5234_);
lean_inc(v___y_5233_);
lean_inc_ref(v___y_5232_);
lean_inc(v___y_5231_);
lean_inc_ref(v___y_5230_);
lean_inc(v___y_5229_);
lean_inc_ref(v___y_5228_);
v___x_5241_ = lean_apply_10(v_mkInfoTree_5227_, v_trees_5240_, v___y_5228_, v___y_5229_, v___y_5230_, v___y_5231_, v___y_5232_, v___y_5233_, v___y_5234_, v___y_5226_, lean_box(0));
if (lean_obj_tag(v___x_5241_) == 0)
{
lean_object* v_a_5242_; lean_object* v___x_5244_; uint8_t v_isShared_5245_; uint8_t v_isSharedCheck_5281_; 
v_a_5242_ = lean_ctor_get(v___x_5241_, 0);
v_isSharedCheck_5281_ = !lean_is_exclusive(v___x_5241_);
if (v_isSharedCheck_5281_ == 0)
{
v___x_5244_ = v___x_5241_;
v_isShared_5245_ = v_isSharedCheck_5281_;
goto v_resetjp_5243_;
}
else
{
lean_inc(v_a_5242_);
lean_dec(v___x_5241_);
v___x_5244_ = lean_box(0);
v_isShared_5245_ = v_isSharedCheck_5281_;
goto v_resetjp_5243_;
}
v_resetjp_5243_:
{
lean_object* v___x_5246_; lean_object* v_infoState_5247_; lean_object* v_env_5248_; lean_object* v_nextMacroScope_5249_; lean_object* v_ngen_5250_; lean_object* v_auxDeclNGen_5251_; lean_object* v_traceState_5252_; lean_object* v_cache_5253_; lean_object* v_recordedDeps_5254_; lean_object* v_messages_5255_; lean_object* v_snapshotTasks_5256_; lean_object* v___x_5258_; uint8_t v_isShared_5259_; uint8_t v_isSharedCheck_5280_; 
v___x_5246_ = lean_st_ref_take(v___y_5226_);
v_infoState_5247_ = lean_ctor_get(v___x_5246_, 8);
v_env_5248_ = lean_ctor_get(v___x_5246_, 0);
v_nextMacroScope_5249_ = lean_ctor_get(v___x_5246_, 1);
v_ngen_5250_ = lean_ctor_get(v___x_5246_, 2);
v_auxDeclNGen_5251_ = lean_ctor_get(v___x_5246_, 3);
v_traceState_5252_ = lean_ctor_get(v___x_5246_, 4);
v_cache_5253_ = lean_ctor_get(v___x_5246_, 5);
v_recordedDeps_5254_ = lean_ctor_get(v___x_5246_, 6);
v_messages_5255_ = lean_ctor_get(v___x_5246_, 7);
v_snapshotTasks_5256_ = lean_ctor_get(v___x_5246_, 9);
v_isSharedCheck_5280_ = !lean_is_exclusive(v___x_5246_);
if (v_isSharedCheck_5280_ == 0)
{
v___x_5258_ = v___x_5246_;
v_isShared_5259_ = v_isSharedCheck_5280_;
goto v_resetjp_5257_;
}
else
{
lean_inc(v_snapshotTasks_5256_);
lean_inc(v_infoState_5247_);
lean_inc(v_messages_5255_);
lean_inc(v_recordedDeps_5254_);
lean_inc(v_cache_5253_);
lean_inc(v_traceState_5252_);
lean_inc(v_auxDeclNGen_5251_);
lean_inc(v_ngen_5250_);
lean_inc(v_nextMacroScope_5249_);
lean_inc(v_env_5248_);
lean_dec(v___x_5246_);
v___x_5258_ = lean_box(0);
v_isShared_5259_ = v_isSharedCheck_5280_;
goto v_resetjp_5257_;
}
v_resetjp_5257_:
{
uint8_t v_enabled_5260_; lean_object* v_assignment_5261_; lean_object* v_lazyAssignment_5262_; lean_object* v___x_5264_; uint8_t v_isShared_5265_; uint8_t v_isSharedCheck_5278_; 
v_enabled_5260_ = lean_ctor_get_uint8(v_infoState_5247_, sizeof(void*)*3);
v_assignment_5261_ = lean_ctor_get(v_infoState_5247_, 0);
v_lazyAssignment_5262_ = lean_ctor_get(v_infoState_5247_, 1);
v_isSharedCheck_5278_ = !lean_is_exclusive(v_infoState_5247_);
if (v_isSharedCheck_5278_ == 0)
{
lean_object* v_unused_5279_; 
v_unused_5279_ = lean_ctor_get(v_infoState_5247_, 2);
lean_dec(v_unused_5279_);
v___x_5264_ = v_infoState_5247_;
v_isShared_5265_ = v_isSharedCheck_5278_;
goto v_resetjp_5263_;
}
else
{
lean_inc(v_lazyAssignment_5262_);
lean_inc(v_assignment_5261_);
lean_dec(v_infoState_5247_);
v___x_5264_ = lean_box(0);
v_isShared_5265_ = v_isSharedCheck_5278_;
goto v_resetjp_5263_;
}
v_resetjp_5263_:
{
lean_object* v___x_5266_; lean_object* v___x_5267_; lean_object* v___x_5269_; 
v___x_5266_ = lean_box(0);
v___x_5267_ = l_Lean_PersistentArray_push___redArg(v_a_5235_, v_a_5242_);
if (v_isShared_5265_ == 0)
{
lean_ctor_set(v___x_5264_, 2, v___x_5267_);
v___x_5269_ = v___x_5264_;
goto v_reusejp_5268_;
}
else
{
lean_object* v_reuseFailAlloc_5277_; 
v_reuseFailAlloc_5277_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5277_, 0, v_assignment_5261_);
lean_ctor_set(v_reuseFailAlloc_5277_, 1, v_lazyAssignment_5262_);
lean_ctor_set(v_reuseFailAlloc_5277_, 2, v___x_5267_);
lean_ctor_set_uint8(v_reuseFailAlloc_5277_, sizeof(void*)*3, v_enabled_5260_);
v___x_5269_ = v_reuseFailAlloc_5277_;
goto v_reusejp_5268_;
}
v_reusejp_5268_:
{
lean_object* v___x_5271_; 
if (v_isShared_5259_ == 0)
{
lean_ctor_set(v___x_5258_, 8, v___x_5269_);
v___x_5271_ = v___x_5258_;
goto v_reusejp_5270_;
}
else
{
lean_object* v_reuseFailAlloc_5276_; 
v_reuseFailAlloc_5276_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5276_, 0, v_env_5248_);
lean_ctor_set(v_reuseFailAlloc_5276_, 1, v_nextMacroScope_5249_);
lean_ctor_set(v_reuseFailAlloc_5276_, 2, v_ngen_5250_);
lean_ctor_set(v_reuseFailAlloc_5276_, 3, v_auxDeclNGen_5251_);
lean_ctor_set(v_reuseFailAlloc_5276_, 4, v_traceState_5252_);
lean_ctor_set(v_reuseFailAlloc_5276_, 5, v_cache_5253_);
lean_ctor_set(v_reuseFailAlloc_5276_, 6, v_recordedDeps_5254_);
lean_ctor_set(v_reuseFailAlloc_5276_, 7, v_messages_5255_);
lean_ctor_set(v_reuseFailAlloc_5276_, 8, v___x_5269_);
lean_ctor_set(v_reuseFailAlloc_5276_, 9, v_snapshotTasks_5256_);
v___x_5271_ = v_reuseFailAlloc_5276_;
goto v_reusejp_5270_;
}
v_reusejp_5270_:
{
lean_object* v___x_5272_; lean_object* v___x_5274_; 
v___x_5272_ = lean_st_ref_put(v___y_5226_, v___x_5271_);
if (v_isShared_5245_ == 0)
{
lean_ctor_set(v___x_5244_, 0, v___x_5266_);
v___x_5274_ = v___x_5244_;
goto v_reusejp_5273_;
}
else
{
lean_object* v_reuseFailAlloc_5275_; 
v_reuseFailAlloc_5275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5275_, 0, v___x_5266_);
v___x_5274_ = v_reuseFailAlloc_5275_;
goto v_reusejp_5273_;
}
v_reusejp_5273_:
{
return v___x_5274_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5282_; lean_object* v___x_5284_; uint8_t v_isShared_5285_; uint8_t v_isSharedCheck_5289_; 
lean_dec_ref(v_a_5235_);
v_a_5282_ = lean_ctor_get(v___x_5241_, 0);
v_isSharedCheck_5289_ = !lean_is_exclusive(v___x_5241_);
if (v_isSharedCheck_5289_ == 0)
{
v___x_5284_ = v___x_5241_;
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
else
{
lean_inc(v_a_5282_);
lean_dec(v___x_5241_);
v___x_5284_ = lean_box(0);
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
v_resetjp_5283_:
{
lean_object* v___x_5287_; 
if (v_isShared_5285_ == 0)
{
v___x_5287_ = v___x_5284_;
goto v_reusejp_5286_;
}
else
{
lean_object* v_reuseFailAlloc_5288_; 
v_reuseFailAlloc_5288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5288_, 0, v_a_5282_);
v___x_5287_ = v_reuseFailAlloc_5288_;
goto v_reusejp_5286_;
}
v_reusejp_5286_:
{
return v___x_5287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0___boxed(lean_object* v___y_5290_, lean_object* v_mkInfoTree_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_, lean_object* v___y_5296_, lean_object* v___y_5297_, lean_object* v___y_5298_, lean_object* v_a_5299_, lean_object* v_a_x3f_5300_, lean_object* v___y_5301_){
_start:
{
lean_object* v_res_5302_; 
v_res_5302_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(v___y_5290_, v_mkInfoTree_5291_, v___y_5292_, v___y_5293_, v___y_5294_, v___y_5295_, v___y_5296_, v___y_5297_, v___y_5298_, v_a_5299_, v_a_x3f_5300_);
lean_dec(v_a_x3f_5300_);
lean_dec_ref(v___y_5298_);
lean_dec(v___y_5297_);
lean_dec_ref(v___y_5296_);
lean_dec(v___y_5295_);
lean_dec_ref(v___y_5294_);
lean_dec(v___y_5293_);
lean_dec_ref(v___y_5292_);
lean_dec(v___y_5290_);
return v_res_5302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(lean_object* v_x_5303_, lean_object* v_mkInfoTree_5304_, lean_object* v___y_5305_, lean_object* v___y_5306_, lean_object* v___y_5307_, lean_object* v___y_5308_, lean_object* v___y_5309_, lean_object* v___y_5310_, lean_object* v___y_5311_, lean_object* v___y_5312_){
_start:
{
lean_object* v___x_5314_; lean_object* v_infoState_5315_; uint8_t v_enabled_5316_; 
v___x_5314_ = lean_st_ref_get(v___y_5312_);
v_infoState_5315_ = lean_ctor_get(v___x_5314_, 8);
lean_inc_ref(v_infoState_5315_);
lean_dec(v___x_5314_);
v_enabled_5316_ = lean_ctor_get_uint8(v_infoState_5315_, sizeof(void*)*3);
lean_dec_ref(v_infoState_5315_);
if (v_enabled_5316_ == 0)
{
lean_object* v___x_5317_; 
lean_dec_ref(v_mkInfoTree_5304_);
lean_inc(v___y_5312_);
lean_inc_ref(v___y_5311_);
lean_inc(v___y_5310_);
lean_inc_ref(v___y_5309_);
lean_inc(v___y_5308_);
lean_inc_ref(v___y_5307_);
lean_inc(v___y_5306_);
lean_inc_ref(v___y_5305_);
v___x_5317_ = lean_apply_9(v_x_5303_, v___y_5305_, v___y_5306_, v___y_5307_, v___y_5308_, v___y_5309_, v___y_5310_, v___y_5311_, v___y_5312_, lean_box(0));
return v___x_5317_;
}
else
{
lean_object* v___x_5318_; lean_object* v_a_5319_; lean_object* v_r_5320_; 
v___x_5318_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(v___y_5312_);
v_a_5319_ = lean_ctor_get(v___x_5318_, 0);
lean_inc(v_a_5319_);
lean_dec_ref(v___x_5318_);
lean_inc(v___y_5312_);
lean_inc_ref(v___y_5311_);
lean_inc(v___y_5310_);
lean_inc_ref(v___y_5309_);
lean_inc(v___y_5308_);
lean_inc_ref(v___y_5307_);
lean_inc(v___y_5306_);
lean_inc_ref(v___y_5305_);
v_r_5320_ = lean_apply_9(v_x_5303_, v___y_5305_, v___y_5306_, v___y_5307_, v___y_5308_, v___y_5309_, v___y_5310_, v___y_5311_, v___y_5312_, lean_box(0));
if (lean_obj_tag(v_r_5320_) == 0)
{
lean_object* v_a_5321_; lean_object* v___x_5323_; uint8_t v_isShared_5324_; uint8_t v_isSharedCheck_5345_; 
v_a_5321_ = lean_ctor_get(v_r_5320_, 0);
v_isSharedCheck_5345_ = !lean_is_exclusive(v_r_5320_);
if (v_isSharedCheck_5345_ == 0)
{
v___x_5323_ = v_r_5320_;
v_isShared_5324_ = v_isSharedCheck_5345_;
goto v_resetjp_5322_;
}
else
{
lean_inc(v_a_5321_);
lean_dec(v_r_5320_);
v___x_5323_ = lean_box(0);
v_isShared_5324_ = v_isSharedCheck_5345_;
goto v_resetjp_5322_;
}
v_resetjp_5322_:
{
lean_object* v___x_5326_; 
lean_inc(v_a_5321_);
if (v_isShared_5324_ == 0)
{
lean_ctor_set_tag(v___x_5323_, 1);
v___x_5326_ = v___x_5323_;
goto v_reusejp_5325_;
}
else
{
lean_object* v_reuseFailAlloc_5344_; 
v_reuseFailAlloc_5344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5344_, 0, v_a_5321_);
v___x_5326_ = v_reuseFailAlloc_5344_;
goto v_reusejp_5325_;
}
v_reusejp_5325_:
{
lean_object* v___x_5327_; 
v___x_5327_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(v___y_5312_, v_mkInfoTree_5304_, v___y_5305_, v___y_5306_, v___y_5307_, v___y_5308_, v___y_5309_, v___y_5310_, v___y_5311_, v_a_5319_, v___x_5326_);
lean_dec_ref(v___x_5326_);
if (lean_obj_tag(v___x_5327_) == 0)
{
lean_object* v___x_5329_; uint8_t v_isShared_5330_; uint8_t v_isSharedCheck_5334_; 
v_isSharedCheck_5334_ = !lean_is_exclusive(v___x_5327_);
if (v_isSharedCheck_5334_ == 0)
{
lean_object* v_unused_5335_; 
v_unused_5335_ = lean_ctor_get(v___x_5327_, 0);
lean_dec(v_unused_5335_);
v___x_5329_ = v___x_5327_;
v_isShared_5330_ = v_isSharedCheck_5334_;
goto v_resetjp_5328_;
}
else
{
lean_dec(v___x_5327_);
v___x_5329_ = lean_box(0);
v_isShared_5330_ = v_isSharedCheck_5334_;
goto v_resetjp_5328_;
}
v_resetjp_5328_:
{
lean_object* v___x_5332_; 
if (v_isShared_5330_ == 0)
{
lean_ctor_set(v___x_5329_, 0, v_a_5321_);
v___x_5332_ = v___x_5329_;
goto v_reusejp_5331_;
}
else
{
lean_object* v_reuseFailAlloc_5333_; 
v_reuseFailAlloc_5333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5333_, 0, v_a_5321_);
v___x_5332_ = v_reuseFailAlloc_5333_;
goto v_reusejp_5331_;
}
v_reusejp_5331_:
{
return v___x_5332_;
}
}
}
else
{
lean_object* v_a_5336_; lean_object* v___x_5338_; uint8_t v_isShared_5339_; uint8_t v_isSharedCheck_5343_; 
lean_dec(v_a_5321_);
v_a_5336_ = lean_ctor_get(v___x_5327_, 0);
v_isSharedCheck_5343_ = !lean_is_exclusive(v___x_5327_);
if (v_isSharedCheck_5343_ == 0)
{
v___x_5338_ = v___x_5327_;
v_isShared_5339_ = v_isSharedCheck_5343_;
goto v_resetjp_5337_;
}
else
{
lean_inc(v_a_5336_);
lean_dec(v___x_5327_);
v___x_5338_ = lean_box(0);
v_isShared_5339_ = v_isSharedCheck_5343_;
goto v_resetjp_5337_;
}
v_resetjp_5337_:
{
lean_object* v___x_5341_; 
if (v_isShared_5339_ == 0)
{
v___x_5341_ = v___x_5338_;
goto v_reusejp_5340_;
}
else
{
lean_object* v_reuseFailAlloc_5342_; 
v_reuseFailAlloc_5342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5342_, 0, v_a_5336_);
v___x_5341_ = v_reuseFailAlloc_5342_;
goto v_reusejp_5340_;
}
v_reusejp_5340_:
{
return v___x_5341_;
}
}
}
}
}
}
else
{
lean_object* v_a_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; 
v_a_5346_ = lean_ctor_get(v_r_5320_, 0);
lean_inc(v_a_5346_);
lean_dec_ref_known(v_r_5320_, 1);
v___x_5347_ = lean_box(0);
v___x_5348_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(v___y_5312_, v_mkInfoTree_5304_, v___y_5305_, v___y_5306_, v___y_5307_, v___y_5308_, v___y_5309_, v___y_5310_, v___y_5311_, v_a_5319_, v___x_5347_);
if (lean_obj_tag(v___x_5348_) == 0)
{
lean_object* v___x_5350_; uint8_t v_isShared_5351_; uint8_t v_isSharedCheck_5355_; 
v_isSharedCheck_5355_ = !lean_is_exclusive(v___x_5348_);
if (v_isSharedCheck_5355_ == 0)
{
lean_object* v_unused_5356_; 
v_unused_5356_ = lean_ctor_get(v___x_5348_, 0);
lean_dec(v_unused_5356_);
v___x_5350_ = v___x_5348_;
v_isShared_5351_ = v_isSharedCheck_5355_;
goto v_resetjp_5349_;
}
else
{
lean_dec(v___x_5348_);
v___x_5350_ = lean_box(0);
v_isShared_5351_ = v_isSharedCheck_5355_;
goto v_resetjp_5349_;
}
v_resetjp_5349_:
{
lean_object* v___x_5353_; 
if (v_isShared_5351_ == 0)
{
lean_ctor_set_tag(v___x_5350_, 1);
lean_ctor_set(v___x_5350_, 0, v_a_5346_);
v___x_5353_ = v___x_5350_;
goto v_reusejp_5352_;
}
else
{
lean_object* v_reuseFailAlloc_5354_; 
v_reuseFailAlloc_5354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5354_, 0, v_a_5346_);
v___x_5353_ = v_reuseFailAlloc_5354_;
goto v_reusejp_5352_;
}
v_reusejp_5352_:
{
return v___x_5353_;
}
}
}
else
{
lean_object* v_a_5357_; lean_object* v___x_5359_; uint8_t v_isShared_5360_; uint8_t v_isSharedCheck_5364_; 
lean_dec(v_a_5346_);
v_a_5357_ = lean_ctor_get(v___x_5348_, 0);
v_isSharedCheck_5364_ = !lean_is_exclusive(v___x_5348_);
if (v_isSharedCheck_5364_ == 0)
{
v___x_5359_ = v___x_5348_;
v_isShared_5360_ = v_isSharedCheck_5364_;
goto v_resetjp_5358_;
}
else
{
lean_inc(v_a_5357_);
lean_dec(v___x_5348_);
v___x_5359_ = lean_box(0);
v_isShared_5360_ = v_isSharedCheck_5364_;
goto v_resetjp_5358_;
}
v_resetjp_5358_:
{
lean_object* v___x_5362_; 
if (v_isShared_5360_ == 0)
{
v___x_5362_ = v___x_5359_;
goto v_reusejp_5361_;
}
else
{
lean_object* v_reuseFailAlloc_5363_; 
v_reuseFailAlloc_5363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5363_, 0, v_a_5357_);
v___x_5362_ = v_reuseFailAlloc_5363_;
goto v_reusejp_5361_;
}
v_reusejp_5361_:
{
return v___x_5362_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___boxed(lean_object* v_x_5365_, lean_object* v_mkInfoTree_5366_, lean_object* v___y_5367_, lean_object* v___y_5368_, lean_object* v___y_5369_, lean_object* v___y_5370_, lean_object* v___y_5371_, lean_object* v___y_5372_, lean_object* v___y_5373_, lean_object* v___y_5374_, lean_object* v___y_5375_){
_start:
{
lean_object* v_res_5376_; 
v_res_5376_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(v_x_5365_, v_mkInfoTree_5366_, v___y_5367_, v___y_5368_, v___y_5369_, v___y_5370_, v___y_5371_, v___y_5372_, v___y_5373_, v___y_5374_);
lean_dec(v___y_5374_);
lean_dec_ref(v___y_5373_);
lean_dec(v___y_5372_);
lean_dec_ref(v___y_5371_);
lean_dec(v___y_5370_);
lean_dec_ref(v___y_5369_);
lean_dec(v___y_5368_);
lean_dec_ref(v___y_5367_);
return v_res_5376_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1(lean_object* v_a_5377_, lean_object* v_trees_5378_, lean_object* v___y_5379_, lean_object* v___y_5380_, lean_object* v___y_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_, lean_object* v___y_5384_, lean_object* v___y_5385_, lean_object* v___y_5386_){
_start:
{
lean_object* v___x_5388_; 
lean_inc(v___y_5386_);
lean_inc_ref(v___y_5385_);
lean_inc(v___y_5384_);
lean_inc_ref(v___y_5383_);
lean_inc(v___y_5382_);
lean_inc_ref(v___y_5381_);
lean_inc(v___y_5380_);
lean_inc_ref(v___y_5379_);
v___x_5388_ = lean_apply_9(v_a_5377_, v___y_5379_, v___y_5380_, v___y_5381_, v___y_5382_, v___y_5383_, v___y_5384_, v___y_5385_, v___y_5386_, lean_box(0));
if (lean_obj_tag(v___x_5388_) == 0)
{
lean_object* v_a_5389_; lean_object* v___x_5391_; uint8_t v_isShared_5392_; uint8_t v_isSharedCheck_5397_; 
v_a_5389_ = lean_ctor_get(v___x_5388_, 0);
v_isSharedCheck_5397_ = !lean_is_exclusive(v___x_5388_);
if (v_isSharedCheck_5397_ == 0)
{
v___x_5391_ = v___x_5388_;
v_isShared_5392_ = v_isSharedCheck_5397_;
goto v_resetjp_5390_;
}
else
{
lean_inc(v_a_5389_);
lean_dec(v___x_5388_);
v___x_5391_ = lean_box(0);
v_isShared_5392_ = v_isSharedCheck_5397_;
goto v_resetjp_5390_;
}
v_resetjp_5390_:
{
lean_object* v___x_5393_; lean_object* v___x_5395_; 
v___x_5393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5393_, 0, v_a_5389_);
lean_ctor_set(v___x_5393_, 1, v_trees_5378_);
if (v_isShared_5392_ == 0)
{
lean_ctor_set(v___x_5391_, 0, v___x_5393_);
v___x_5395_ = v___x_5391_;
goto v_reusejp_5394_;
}
else
{
lean_object* v_reuseFailAlloc_5396_; 
v_reuseFailAlloc_5396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5396_, 0, v___x_5393_);
v___x_5395_ = v_reuseFailAlloc_5396_;
goto v_reusejp_5394_;
}
v_reusejp_5394_:
{
return v___x_5395_;
}
}
}
else
{
lean_object* v_a_5398_; lean_object* v___x_5400_; uint8_t v_isShared_5401_; uint8_t v_isSharedCheck_5405_; 
lean_dec_ref(v_trees_5378_);
v_a_5398_ = lean_ctor_get(v___x_5388_, 0);
v_isSharedCheck_5405_ = !lean_is_exclusive(v___x_5388_);
if (v_isSharedCheck_5405_ == 0)
{
v___x_5400_ = v___x_5388_;
v_isShared_5401_ = v_isSharedCheck_5405_;
goto v_resetjp_5399_;
}
else
{
lean_inc(v_a_5398_);
lean_dec(v___x_5388_);
v___x_5400_ = lean_box(0);
v_isShared_5401_ = v_isSharedCheck_5405_;
goto v_resetjp_5399_;
}
v_resetjp_5399_:
{
lean_object* v___x_5403_; 
if (v_isShared_5401_ == 0)
{
v___x_5403_ = v___x_5400_;
goto v_reusejp_5402_;
}
else
{
lean_object* v_reuseFailAlloc_5404_; 
v_reuseFailAlloc_5404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5404_, 0, v_a_5398_);
v___x_5403_ = v_reuseFailAlloc_5404_;
goto v_reusejp_5402_;
}
v_reusejp_5402_:
{
return v___x_5403_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1___boxed(lean_object* v_a_5406_, lean_object* v_trees_5407_, lean_object* v___y_5408_, lean_object* v___y_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_, lean_object* v___y_5412_, lean_object* v___y_5413_, lean_object* v___y_5414_, lean_object* v___y_5415_, lean_object* v___y_5416_){
_start:
{
lean_object* v_res_5417_; 
v_res_5417_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1(v_a_5406_, v_trees_5407_, v___y_5408_, v___y_5409_, v___y_5410_, v___y_5411_, v___y_5412_, v___y_5413_, v___y_5414_, v___y_5415_);
lean_dec(v___y_5415_);
lean_dec_ref(v___y_5414_);
lean_dec(v___y_5413_);
lean_dec_ref(v___y_5412_);
lean_dec(v___y_5411_);
lean_dec_ref(v___y_5410_);
lean_dec(v___y_5409_);
lean_dec_ref(v___y_5408_);
return v_res_5417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2(lean_object* v___x_5418_, lean_object* v_tactic_5419_, lean_object* v_ref_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_, lean_object* v___y_5424_, lean_object* v___y_5425_, lean_object* v___y_5426_, lean_object* v___y_5427_, lean_object* v___y_5428_){
_start:
{
lean_object* v___x_5430_; 
v___x_5430_ = l_Lean_Elab_Tactic_setGoals___redArg(v___x_5418_, v___y_5422_);
if (lean_obj_tag(v___x_5430_) == 0)
{
lean_object* v___x_5431_; 
lean_dec_ref_known(v___x_5430_, 1);
v___x_5431_ = l_Lean_Elab_WF_applyCleanWfTactic(v___y_5421_, v___y_5422_, v___y_5423_, v___y_5424_, v___y_5425_, v___y_5426_, v___y_5427_, v___y_5428_);
if (lean_obj_tag(v___x_5431_) == 0)
{
lean_object* v___x_5432_; lean_object* v___x_5433_; 
lean_dec_ref_known(v___x_5431_, 1);
v___x_5432_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___boxed), 10, 1);
lean_closure_set(v___x_5432_, 0, v_tactic_5419_);
v___x_5433_ = l_Lean_Elab_Tactic_mkInitialTacticInfo(v_ref_5420_, v___y_5421_, v___y_5422_, v___y_5423_, v___y_5424_, v___y_5425_, v___y_5426_, v___y_5427_, v___y_5428_);
if (lean_obj_tag(v___x_5433_) == 0)
{
lean_object* v_a_5434_; lean_object* v___f_5435_; lean_object* v___x_5436_; 
v_a_5434_ = lean_ctor_get(v___x_5433_, 0);
lean_inc(v_a_5434_);
lean_dec_ref_known(v___x_5433_, 1);
v___f_5435_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1___boxed), 11, 1);
lean_closure_set(v___f_5435_, 0, v_a_5434_);
v___x_5436_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(v___x_5432_, v___f_5435_, v___y_5421_, v___y_5422_, v___y_5423_, v___y_5424_, v___y_5425_, v___y_5426_, v___y_5427_, v___y_5428_);
return v___x_5436_;
}
else
{
lean_object* v_a_5437_; lean_object* v___x_5439_; uint8_t v_isShared_5440_; uint8_t v_isSharedCheck_5444_; 
lean_dec_ref(v___x_5432_);
v_a_5437_ = lean_ctor_get(v___x_5433_, 0);
v_isSharedCheck_5444_ = !lean_is_exclusive(v___x_5433_);
if (v_isSharedCheck_5444_ == 0)
{
v___x_5439_ = v___x_5433_;
v_isShared_5440_ = v_isSharedCheck_5444_;
goto v_resetjp_5438_;
}
else
{
lean_inc(v_a_5437_);
lean_dec(v___x_5433_);
v___x_5439_ = lean_box(0);
v_isShared_5440_ = v_isSharedCheck_5444_;
goto v_resetjp_5438_;
}
v_resetjp_5438_:
{
lean_object* v___x_5442_; 
if (v_isShared_5440_ == 0)
{
v___x_5442_ = v___x_5439_;
goto v_reusejp_5441_;
}
else
{
lean_object* v_reuseFailAlloc_5443_; 
v_reuseFailAlloc_5443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5443_, 0, v_a_5437_);
v___x_5442_ = v_reuseFailAlloc_5443_;
goto v_reusejp_5441_;
}
v_reusejp_5441_:
{
return v___x_5442_;
}
}
}
}
else
{
lean_dec(v_ref_5420_);
lean_dec(v_tactic_5419_);
return v___x_5431_;
}
}
else
{
lean_dec(v_ref_5420_);
lean_dec(v_tactic_5419_);
return v___x_5430_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2___boxed(lean_object* v___x_5445_, lean_object* v_tactic_5446_, lean_object* v_ref_5447_, lean_object* v___y_5448_, lean_object* v___y_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_, lean_object* v___y_5452_, lean_object* v___y_5453_, lean_object* v___y_5454_, lean_object* v___y_5455_, lean_object* v___y_5456_){
_start:
{
lean_object* v_res_5457_; 
v_res_5457_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2(v___x_5445_, v_tactic_5446_, v_ref_5447_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_, v___y_5453_, v___y_5454_, v___y_5455_);
lean_dec(v___y_5455_);
lean_dec_ref(v___y_5454_);
lean_dec(v___y_5453_);
lean_dec_ref(v___y_5452_);
lean_dec(v___y_5451_);
lean_dec_ref(v___y_5450_);
lean_dec(v___y_5449_);
lean_dec_ref(v___y_5448_);
return v_res_5457_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_5458_; lean_object* v___x_5459_; 
v___x_5458_ = lean_box(1);
v___x_5459_ = l_Lean_MessageData_ofFormat(v___x_5458_);
return v___x_5459_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_5463_; lean_object* v___x_5464_; 
v___x_5463_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2));
v___x_5464_ = l_Lean_MessageData_ofFormat(v___x_5463_);
return v___x_5464_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3(lean_object* v_x_5465_, lean_object* v_x_5466_){
_start:
{
if (lean_obj_tag(v_x_5466_) == 0)
{
return v_x_5465_;
}
else
{
lean_object* v_head_5467_; lean_object* v_tail_5468_; lean_object* v___x_5470_; uint8_t v_isShared_5471_; uint8_t v_isSharedCheck_5490_; 
v_head_5467_ = lean_ctor_get(v_x_5466_, 0);
v_tail_5468_ = lean_ctor_get(v_x_5466_, 1);
v_isSharedCheck_5490_ = !lean_is_exclusive(v_x_5466_);
if (v_isSharedCheck_5490_ == 0)
{
v___x_5470_ = v_x_5466_;
v_isShared_5471_ = v_isSharedCheck_5490_;
goto v_resetjp_5469_;
}
else
{
lean_inc(v_tail_5468_);
lean_inc(v_head_5467_);
lean_dec(v_x_5466_);
v___x_5470_ = lean_box(0);
v_isShared_5471_ = v_isSharedCheck_5490_;
goto v_resetjp_5469_;
}
v_resetjp_5469_:
{
lean_object* v_before_5472_; lean_object* v___x_5474_; uint8_t v_isShared_5475_; uint8_t v_isSharedCheck_5488_; 
v_before_5472_ = lean_ctor_get(v_head_5467_, 0);
v_isSharedCheck_5488_ = !lean_is_exclusive(v_head_5467_);
if (v_isSharedCheck_5488_ == 0)
{
lean_object* v_unused_5489_; 
v_unused_5489_ = lean_ctor_get(v_head_5467_, 1);
lean_dec(v_unused_5489_);
v___x_5474_ = v_head_5467_;
v_isShared_5475_ = v_isSharedCheck_5488_;
goto v_resetjp_5473_;
}
else
{
lean_inc(v_before_5472_);
lean_dec(v_head_5467_);
v___x_5474_ = lean_box(0);
v_isShared_5475_ = v_isSharedCheck_5488_;
goto v_resetjp_5473_;
}
v_resetjp_5473_:
{
lean_object* v___x_5476_; lean_object* v___x_5478_; 
v___x_5476_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0);
if (v_isShared_5475_ == 0)
{
lean_ctor_set_tag(v___x_5474_, 7);
lean_ctor_set(v___x_5474_, 1, v___x_5476_);
lean_ctor_set(v___x_5474_, 0, v_x_5465_);
v___x_5478_ = v___x_5474_;
goto v_reusejp_5477_;
}
else
{
lean_object* v_reuseFailAlloc_5487_; 
v_reuseFailAlloc_5487_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5487_, 0, v_x_5465_);
lean_ctor_set(v_reuseFailAlloc_5487_, 1, v___x_5476_);
v___x_5478_ = v_reuseFailAlloc_5487_;
goto v_reusejp_5477_;
}
v_reusejp_5477_:
{
lean_object* v___x_5479_; lean_object* v___x_5481_; 
v___x_5479_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3);
if (v_isShared_5471_ == 0)
{
lean_ctor_set_tag(v___x_5470_, 7);
lean_ctor_set(v___x_5470_, 1, v___x_5479_);
lean_ctor_set(v___x_5470_, 0, v___x_5478_);
v___x_5481_ = v___x_5470_;
goto v_reusejp_5480_;
}
else
{
lean_object* v_reuseFailAlloc_5486_; 
v_reuseFailAlloc_5486_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5486_, 0, v___x_5478_);
lean_ctor_set(v_reuseFailAlloc_5486_, 1, v___x_5479_);
v___x_5481_ = v_reuseFailAlloc_5486_;
goto v_reusejp_5480_;
}
v_reusejp_5480_:
{
lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; 
v___x_5482_ = l_Lean_MessageData_ofSyntax(v_before_5472_);
v___x_5483_ = l_Lean_indentD(v___x_5482_);
v___x_5484_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5484_, 0, v___x_5481_);
lean_ctor_set(v___x_5484_, 1, v___x_5483_);
v_x_5465_ = v___x_5484_;
v_x_5466_ = v_tail_5468_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_5494_; lean_object* v___x_5495_; 
v___x_5494_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1));
v___x_5495_ = l_Lean_MessageData_ofFormat(v___x_5494_);
return v___x_5495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(lean_object* v_msgData_5496_, lean_object* v_macroStack_5497_, lean_object* v___y_5498_){
_start:
{
lean_object* v___x_5500_; lean_object* v___x_5501_; uint8_t v___x_5502_; 
v___x_5500_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_5498_);
v___x_5501_ = l_Lean_Elab_pp_macroStack;
v___x_5502_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(v___x_5500_, v___x_5501_);
lean_dec_ref(v___x_5500_);
if (v___x_5502_ == 0)
{
lean_object* v___x_5503_; 
lean_dec(v_macroStack_5497_);
v___x_5503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5503_, 0, v_msgData_5496_);
return v___x_5503_;
}
else
{
if (lean_obj_tag(v_macroStack_5497_) == 0)
{
lean_object* v___x_5504_; 
v___x_5504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5504_, 0, v_msgData_5496_);
return v___x_5504_;
}
else
{
lean_object* v_head_5505_; lean_object* v_after_5506_; lean_object* v___x_5508_; uint8_t v_isShared_5509_; uint8_t v_isSharedCheck_5521_; 
v_head_5505_ = lean_ctor_get(v_macroStack_5497_, 0);
lean_inc(v_head_5505_);
v_after_5506_ = lean_ctor_get(v_head_5505_, 1);
v_isSharedCheck_5521_ = !lean_is_exclusive(v_head_5505_);
if (v_isSharedCheck_5521_ == 0)
{
lean_object* v_unused_5522_; 
v_unused_5522_ = lean_ctor_get(v_head_5505_, 0);
lean_dec(v_unused_5522_);
v___x_5508_ = v_head_5505_;
v_isShared_5509_ = v_isSharedCheck_5521_;
goto v_resetjp_5507_;
}
else
{
lean_inc(v_after_5506_);
lean_dec(v_head_5505_);
v___x_5508_ = lean_box(0);
v_isShared_5509_ = v_isSharedCheck_5521_;
goto v_resetjp_5507_;
}
v_resetjp_5507_:
{
lean_object* v___x_5510_; lean_object* v___x_5512_; 
v___x_5510_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0);
if (v_isShared_5509_ == 0)
{
lean_ctor_set_tag(v___x_5508_, 7);
lean_ctor_set(v___x_5508_, 1, v___x_5510_);
lean_ctor_set(v___x_5508_, 0, v_msgData_5496_);
v___x_5512_ = v___x_5508_;
goto v_reusejp_5511_;
}
else
{
lean_object* v_reuseFailAlloc_5520_; 
v_reuseFailAlloc_5520_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5520_, 0, v_msgData_5496_);
lean_ctor_set(v_reuseFailAlloc_5520_, 1, v___x_5510_);
v___x_5512_ = v_reuseFailAlloc_5520_;
goto v_reusejp_5511_;
}
v_reusejp_5511_:
{
lean_object* v___x_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; lean_object* v_msgData_5517_; lean_object* v___x_5518_; lean_object* v___x_5519_; 
v___x_5513_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2);
v___x_5514_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5514_, 0, v___x_5512_);
lean_ctor_set(v___x_5514_, 1, v___x_5513_);
v___x_5515_ = l_Lean_MessageData_ofSyntax(v_after_5506_);
v___x_5516_ = l_Lean_indentD(v___x_5515_);
v_msgData_5517_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_5517_, 0, v___x_5514_);
lean_ctor_set(v_msgData_5517_, 1, v___x_5516_);
v___x_5518_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3(v_msgData_5517_, v_macroStack_5497_);
v___x_5519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5519_, 0, v___x_5518_);
return v___x_5519_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___boxed(lean_object* v_msgData_5523_, lean_object* v_macroStack_5524_, lean_object* v___y_5525_, lean_object* v___y_5526_){
_start:
{
lean_object* v_res_5527_; 
v_res_5527_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(v_msgData_5523_, v_macroStack_5524_, v___y_5525_);
lean_dec_ref(v___y_5525_);
return v_res_5527_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(lean_object* v_msg_5528_, lean_object* v___y_5529_, lean_object* v___y_5530_, lean_object* v___y_5531_, lean_object* v___y_5532_, lean_object* v___y_5533_, lean_object* v___y_5534_){
_start:
{
lean_object* v_ref_5536_; lean_object* v_macroStack_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; lean_object* v_a_5540_; lean_object* v___x_5541_; lean_object* v_a_5542_; lean_object* v___x_5544_; uint8_t v_isShared_5545_; uint8_t v_isSharedCheck_5550_; 
v_ref_5536_ = lean_ctor_get(v___y_5533_, 2);
v_macroStack_5537_ = lean_ctor_get(v___y_5529_, 1);
v___x_5538_ = l_Lean_Elab_getBetterRef(v_ref_5536_, v_macroStack_5537_);
v___x_5539_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_5528_, v___y_5531_, v___y_5532_, v___y_5533_, v___y_5534_);
v_a_5540_ = lean_ctor_get(v___x_5539_, 0);
lean_inc(v_a_5540_);
lean_dec_ref(v___x_5539_);
lean_inc(v_macroStack_5537_);
v___x_5541_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(v_a_5540_, v_macroStack_5537_, v___y_5533_);
v_a_5542_ = lean_ctor_get(v___x_5541_, 0);
v_isSharedCheck_5550_ = !lean_is_exclusive(v___x_5541_);
if (v_isSharedCheck_5550_ == 0)
{
v___x_5544_ = v___x_5541_;
v_isShared_5545_ = v_isSharedCheck_5550_;
goto v_resetjp_5543_;
}
else
{
lean_inc(v_a_5542_);
lean_dec(v___x_5541_);
v___x_5544_ = lean_box(0);
v_isShared_5545_ = v_isSharedCheck_5550_;
goto v_resetjp_5543_;
}
v_resetjp_5543_:
{
lean_object* v___x_5546_; lean_object* v___x_5548_; 
v___x_5546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5546_, 0, v___x_5538_);
lean_ctor_set(v___x_5546_, 1, v_a_5542_);
if (v_isShared_5545_ == 0)
{
lean_ctor_set_tag(v___x_5544_, 1);
lean_ctor_set(v___x_5544_, 0, v___x_5546_);
v___x_5548_ = v___x_5544_;
goto v_reusejp_5547_;
}
else
{
lean_object* v_reuseFailAlloc_5549_; 
v_reuseFailAlloc_5549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5549_, 0, v___x_5546_);
v___x_5548_ = v_reuseFailAlloc_5549_;
goto v_reusejp_5547_;
}
v_reusejp_5547_:
{
return v___x_5548_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg___boxed(lean_object* v_msg_5551_, lean_object* v___y_5552_, lean_object* v___y_5553_, lean_object* v___y_5554_, lean_object* v___y_5555_, lean_object* v___y_5556_, lean_object* v___y_5557_, lean_object* v___y_5558_){
_start:
{
lean_object* v_res_5559_; 
v_res_5559_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(v_msg_5551_, v___y_5552_, v___y_5553_, v___y_5554_, v___y_5555_, v___y_5556_, v___y_5557_);
lean_dec(v___y_5557_);
lean_dec_ref(v___y_5556_);
lean_dec(v___y_5555_);
lean_dec_ref(v___y_5554_);
lean_dec(v___y_5553_);
lean_dec_ref(v___y_5552_);
return v_res_5559_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1(void){
_start:
{
lean_object* v___x_5561_; lean_object* v___x_5562_; 
v___x_5561_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0));
v___x_5562_ = l_Lean_stringToMessageData(v___x_5561_);
return v___x_5562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(lean_object* v_as_5563_, size_t v_sz_5564_, size_t v_i_5565_, lean_object* v_b_5566_, lean_object* v___y_5567_, lean_object* v___y_5568_, lean_object* v___y_5569_, lean_object* v___y_5570_, lean_object* v___y_5571_, lean_object* v___y_5572_){
_start:
{
lean_object* v_a_5575_; uint8_t v___x_5579_; 
v___x_5579_ = lean_usize_dec_lt(v_i_5565_, v_sz_5564_);
if (v___x_5579_ == 0)
{
lean_object* v___x_5580_; 
v___x_5580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5580_, 0, v_b_5566_);
return v___x_5580_;
}
else
{
lean_object* v___x_5581_; lean_object* v_a_5582_; lean_object* v___x_5583_; 
v___x_5581_ = lean_box(0);
v_a_5582_ = lean_array_uget_borrowed(v_as_5563_, v_i_5565_);
lean_inc(v_a_5582_);
v___x_5583_ = l_Lean_MVarId_getType(v_a_5582_, v___y_5569_, v___y_5570_, v___y_5571_, v___y_5572_);
if (lean_obj_tag(v___x_5583_) == 0)
{
lean_object* v_a_5584_; lean_object* v___x_5585_; 
v_a_5584_ = lean_ctor_get(v___x_5583_, 0);
lean_inc(v_a_5584_);
lean_dec_ref_known(v___x_5583_, 1);
lean_inc(v_a_5582_);
v___x_5585_ = l_Lean_MVarId_getType(v_a_5582_, v___y_5569_, v___y_5570_, v___y_5571_, v___y_5572_);
if (lean_obj_tag(v___x_5585_) == 0)
{
lean_object* v_a_5586_; lean_object* v___x_5587_; 
v_a_5586_ = lean_ctor_get(v___x_5585_, 0);
lean_inc(v_a_5586_);
lean_dec_ref_known(v___x_5585_, 1);
v___x_5587_ = l_Lean_getRecAppSyntax_x3f(v_a_5586_);
lean_dec(v_a_5586_);
if (lean_obj_tag(v___x_5587_) == 1)
{
lean_object* v_val_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; 
v_val_5588_ = lean_ctor_get(v___x_5587_, 0);
lean_inc(v_val_5588_);
lean_dec_ref_known(v___x_5587_, 1);
v___x_5589_ = l_Lean_Expr_mdataExpr_x21(v_a_5584_);
lean_dec(v_a_5584_);
lean_inc(v_a_5582_);
v___x_5590_ = l_Lean_MVarId_setType___redArg(v_a_5582_, v___x_5589_, v___y_5570_);
if (lean_obj_tag(v___x_5590_) == 0)
{
lean_object* v_toCold_5591_; lean_object* v_currRecDepth_5592_; lean_object* v_ref_5593_; uint16_t v_optionFlags_5594_; uint8_t v_suppressElabErrors_5595_; uint8_t v_checkDeprecated_5596_; uint8_t v_isRecordingDeps_5597_; lean_object* v_ref_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; 
lean_dec_ref_known(v___x_5590_, 1);
v_toCold_5591_ = lean_ctor_get(v___y_5571_, 0);
v_currRecDepth_5592_ = lean_ctor_get(v___y_5571_, 1);
v_ref_5593_ = lean_ctor_get(v___y_5571_, 2);
v_optionFlags_5594_ = lean_ctor_get_uint16(v___y_5571_, sizeof(void*)*3);
v_suppressElabErrors_5595_ = lean_ctor_get_uint8(v___y_5571_, sizeof(void*)*3 + 2);
v_checkDeprecated_5596_ = lean_ctor_get_uint8(v___y_5571_, sizeof(void*)*3 + 3);
v_isRecordingDeps_5597_ = lean_ctor_get_uint8(v___y_5571_, sizeof(void*)*3 + 4);
v_ref_5598_ = l_Lean_replaceRef(v_val_5588_, v_ref_5593_);
lean_dec(v_val_5588_);
lean_inc(v_currRecDepth_5592_);
lean_inc_ref(v_toCold_5591_);
v___x_5599_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_5599_, 0, v_toCold_5591_);
lean_ctor_set(v___x_5599_, 1, v_currRecDepth_5592_);
lean_ctor_set(v___x_5599_, 2, v_ref_5598_);
lean_ctor_set_uint16(v___x_5599_, sizeof(void*)*3, v_optionFlags_5594_);
lean_ctor_set_uint8(v___x_5599_, sizeof(void*)*3 + 2, v_suppressElabErrors_5595_);
lean_ctor_set_uint8(v___x_5599_, sizeof(void*)*3 + 3, v_checkDeprecated_5596_);
lean_ctor_set_uint8(v___x_5599_, sizeof(void*)*3 + 4, v_isRecordingDeps_5597_);
lean_inc(v_a_5582_);
v___x_5600_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(v_a_5582_, v___y_5567_, v___y_5568_, v___y_5569_, v___y_5570_, v___x_5599_, v___y_5572_);
lean_dec_ref_known(v___x_5599_, 3);
if (lean_obj_tag(v___x_5600_) == 0)
{
lean_dec_ref_known(v___x_5600_, 1);
v_a_5575_ = v___x_5581_;
goto v___jp_5574_;
}
else
{
return v___x_5600_;
}
}
else
{
lean_dec(v_val_5588_);
return v___x_5590_;
}
}
else
{
lean_object* v___x_5601_; lean_object* v___x_5602_; lean_object* v___x_5603_; lean_object* v___x_5604_; 
lean_dec(v___x_5587_);
v___x_5601_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1);
v___x_5602_ = l_Lean_indentExpr(v_a_5584_);
v___x_5603_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5603_, 0, v___x_5601_);
lean_ctor_set(v___x_5603_, 1, v___x_5602_);
v___x_5604_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(v___x_5603_, v___y_5567_, v___y_5568_, v___y_5569_, v___y_5570_, v___y_5571_, v___y_5572_);
if (lean_obj_tag(v___x_5604_) == 0)
{
lean_dec_ref_known(v___x_5604_, 1);
v_a_5575_ = v___x_5581_;
goto v___jp_5574_;
}
else
{
return v___x_5604_;
}
}
}
else
{
lean_object* v_a_5605_; lean_object* v___x_5607_; uint8_t v_isShared_5608_; uint8_t v_isSharedCheck_5612_; 
lean_dec(v_a_5584_);
v_a_5605_ = lean_ctor_get(v___x_5585_, 0);
v_isSharedCheck_5612_ = !lean_is_exclusive(v___x_5585_);
if (v_isSharedCheck_5612_ == 0)
{
v___x_5607_ = v___x_5585_;
v_isShared_5608_ = v_isSharedCheck_5612_;
goto v_resetjp_5606_;
}
else
{
lean_inc(v_a_5605_);
lean_dec(v___x_5585_);
v___x_5607_ = lean_box(0);
v_isShared_5608_ = v_isSharedCheck_5612_;
goto v_resetjp_5606_;
}
v_resetjp_5606_:
{
lean_object* v___x_5610_; 
if (v_isShared_5608_ == 0)
{
v___x_5610_ = v___x_5607_;
goto v_reusejp_5609_;
}
else
{
lean_object* v_reuseFailAlloc_5611_; 
v_reuseFailAlloc_5611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5611_, 0, v_a_5605_);
v___x_5610_ = v_reuseFailAlloc_5611_;
goto v_reusejp_5609_;
}
v_reusejp_5609_:
{
return v___x_5610_;
}
}
}
}
else
{
lean_object* v_a_5613_; lean_object* v___x_5615_; uint8_t v_isShared_5616_; uint8_t v_isSharedCheck_5620_; 
v_a_5613_ = lean_ctor_get(v___x_5583_, 0);
v_isSharedCheck_5620_ = !lean_is_exclusive(v___x_5583_);
if (v_isSharedCheck_5620_ == 0)
{
v___x_5615_ = v___x_5583_;
v_isShared_5616_ = v_isSharedCheck_5620_;
goto v_resetjp_5614_;
}
else
{
lean_inc(v_a_5613_);
lean_dec(v___x_5583_);
v___x_5615_ = lean_box(0);
v_isShared_5616_ = v_isSharedCheck_5620_;
goto v_resetjp_5614_;
}
v_resetjp_5614_:
{
lean_object* v___x_5618_; 
if (v_isShared_5616_ == 0)
{
v___x_5618_ = v___x_5615_;
goto v_reusejp_5617_;
}
else
{
lean_object* v_reuseFailAlloc_5619_; 
v_reuseFailAlloc_5619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5619_, 0, v_a_5613_);
v___x_5618_ = v_reuseFailAlloc_5619_;
goto v_reusejp_5617_;
}
v_reusejp_5617_:
{
return v___x_5618_;
}
}
}
}
v___jp_5574_:
{
size_t v___x_5576_; size_t v___x_5577_; 
v___x_5576_ = ((size_t)1ULL);
v___x_5577_ = lean_usize_add(v_i_5565_, v___x_5576_);
v_i_5565_ = v___x_5577_;
v_b_5566_ = v_a_5575_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___boxed(lean_object* v_as_5621_, lean_object* v_sz_5622_, lean_object* v_i_5623_, lean_object* v_b_5624_, lean_object* v___y_5625_, lean_object* v___y_5626_, lean_object* v___y_5627_, lean_object* v___y_5628_, lean_object* v___y_5629_, lean_object* v___y_5630_, lean_object* v___y_5631_){
_start:
{
size_t v_sz_boxed_5632_; size_t v_i_boxed_5633_; lean_object* v_res_5634_; 
v_sz_boxed_5632_ = lean_unbox_usize(v_sz_5622_);
lean_dec(v_sz_5622_);
v_i_boxed_5633_ = lean_unbox_usize(v_i_5623_);
lean_dec(v_i_5623_);
v_res_5634_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(v_as_5621_, v_sz_boxed_5632_, v_i_boxed_5633_, v_b_5624_, v___y_5625_, v___y_5626_, v___y_5627_, v___y_5628_, v___y_5629_, v___y_5630_);
lean_dec(v___y_5630_);
lean_dec_ref(v___y_5629_);
lean_dec(v___y_5628_);
lean_dec_ref(v___y_5627_);
lean_dec(v___y_5626_);
lean_dec_ref(v___y_5625_);
lean_dec_ref(v_as_5621_);
return v_res_5634_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(lean_object* v_as_5635_, size_t v_i_5636_, size_t v_stop_5637_, lean_object* v_b_5638_, lean_object* v___y_5639_, lean_object* v___y_5640_, lean_object* v___y_5641_, lean_object* v___y_5642_){
_start:
{
uint8_t v___x_5644_; 
v___x_5644_ = lean_usize_dec_eq(v_i_5636_, v_stop_5637_);
if (v___x_5644_ == 0)
{
lean_object* v___x_5645_; lean_object* v___x_5646_; 
v___x_5645_ = lean_array_uget_borrowed(v_as_5635_, v_i_5636_);
lean_inc(v___x_5645_);
v___x_5646_ = l_Lean_MVarId_getType(v___x_5645_, v___y_5639_, v___y_5640_, v___y_5641_, v___y_5642_);
if (lean_obj_tag(v___x_5646_) == 0)
{
lean_object* v_a_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; 
v_a_5647_ = lean_ctor_get(v___x_5646_, 0);
lean_inc(v_a_5647_);
lean_dec_ref_known(v___x_5646_, 1);
v___x_5648_ = l_Lean_Expr_mdataExpr_x21(v_a_5647_);
lean_dec(v_a_5647_);
lean_inc(v___x_5645_);
v___x_5649_ = l_Lean_MVarId_setType___redArg(v___x_5645_, v___x_5648_, v___y_5640_);
if (lean_obj_tag(v___x_5649_) == 0)
{
lean_object* v_a_5650_; size_t v___x_5651_; size_t v___x_5652_; 
v_a_5650_ = lean_ctor_get(v___x_5649_, 0);
lean_inc(v_a_5650_);
lean_dec_ref_known(v___x_5649_, 1);
v___x_5651_ = ((size_t)1ULL);
v___x_5652_ = lean_usize_add(v_i_5636_, v___x_5651_);
v_i_5636_ = v___x_5652_;
v_b_5638_ = v_a_5650_;
goto _start;
}
else
{
return v___x_5649_;
}
}
else
{
lean_object* v_a_5654_; lean_object* v___x_5656_; uint8_t v_isShared_5657_; uint8_t v_isSharedCheck_5661_; 
v_a_5654_ = lean_ctor_get(v___x_5646_, 0);
v_isSharedCheck_5661_ = !lean_is_exclusive(v___x_5646_);
if (v_isSharedCheck_5661_ == 0)
{
v___x_5656_ = v___x_5646_;
v_isShared_5657_ = v_isSharedCheck_5661_;
goto v_resetjp_5655_;
}
else
{
lean_inc(v_a_5654_);
lean_dec(v___x_5646_);
v___x_5656_ = lean_box(0);
v_isShared_5657_ = v_isSharedCheck_5661_;
goto v_resetjp_5655_;
}
v_resetjp_5655_:
{
lean_object* v___x_5659_; 
if (v_isShared_5657_ == 0)
{
v___x_5659_ = v___x_5656_;
goto v_reusejp_5658_;
}
else
{
lean_object* v_reuseFailAlloc_5660_; 
v_reuseFailAlloc_5660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5660_, 0, v_a_5654_);
v___x_5659_ = v_reuseFailAlloc_5660_;
goto v_reusejp_5658_;
}
v_reusejp_5658_:
{
return v___x_5659_;
}
}
}
}
else
{
lean_object* v___x_5662_; 
v___x_5662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5662_, 0, v_b_5638_);
return v___x_5662_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg___boxed(lean_object* v_as_5663_, lean_object* v_i_5664_, lean_object* v_stop_5665_, lean_object* v_b_5666_, lean_object* v___y_5667_, lean_object* v___y_5668_, lean_object* v___y_5669_, lean_object* v___y_5670_, lean_object* v___y_5671_){
_start:
{
size_t v_i_boxed_5672_; size_t v_stop_boxed_5673_; lean_object* v_res_5674_; 
v_i_boxed_5672_ = lean_unbox_usize(v_i_5664_);
lean_dec(v_i_5664_);
v_stop_boxed_5673_ = lean_unbox_usize(v_stop_5665_);
lean_dec(v_stop_5665_);
v_res_5674_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v_as_5663_, v_i_boxed_5672_, v_stop_boxed_5673_, v_b_5666_, v___y_5667_, v___y_5668_, v___y_5669_, v___y_5670_);
lean_dec(v___y_5670_);
lean_dec_ref(v___y_5669_);
lean_dec(v___y_5668_);
lean_dec_ref(v___y_5667_);
lean_dec_ref(v_as_5663_);
return v_res_5674_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3(lean_object* v___x_5675_, lean_object* v___x_5676_, lean_object* v___x_5677_, lean_object* v___y_5678_, lean_object* v___y_5679_, lean_object* v___y_5680_, lean_object* v___y_5681_, lean_object* v___y_5682_, lean_object* v___y_5683_){
_start:
{
if (lean_obj_tag(v___x_5675_) == 0)
{
lean_object* v___x_5688_; size_t v_sz_5689_; size_t v___x_5690_; lean_object* v___x_5691_; 
v___x_5688_ = lean_box(0);
v_sz_5689_ = lean_array_size(v___x_5676_);
v___x_5690_ = ((size_t)0ULL);
v___x_5691_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(v___x_5676_, v_sz_5689_, v___x_5690_, v___x_5688_, v___y_5678_, v___y_5679_, v___y_5680_, v___y_5681_, v___y_5682_, v___y_5683_);
lean_dec_ref(v___x_5676_);
if (lean_obj_tag(v___x_5691_) == 0)
{
lean_object* v___x_5693_; uint8_t v_isShared_5694_; uint8_t v_isSharedCheck_5698_; 
v_isSharedCheck_5698_ = !lean_is_exclusive(v___x_5691_);
if (v_isSharedCheck_5698_ == 0)
{
lean_object* v_unused_5699_; 
v_unused_5699_ = lean_ctor_get(v___x_5691_, 0);
lean_dec(v_unused_5699_);
v___x_5693_ = v___x_5691_;
v_isShared_5694_ = v_isSharedCheck_5698_;
goto v_resetjp_5692_;
}
else
{
lean_dec(v___x_5691_);
v___x_5693_ = lean_box(0);
v_isShared_5694_ = v_isSharedCheck_5698_;
goto v_resetjp_5692_;
}
v_resetjp_5692_:
{
lean_object* v___x_5696_; 
if (v_isShared_5694_ == 0)
{
lean_ctor_set(v___x_5693_, 0, v___x_5688_);
v___x_5696_ = v___x_5693_;
goto v_reusejp_5695_;
}
else
{
lean_object* v_reuseFailAlloc_5697_; 
v_reuseFailAlloc_5697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5697_, 0, v___x_5688_);
v___x_5696_ = v_reuseFailAlloc_5697_;
goto v_reusejp_5695_;
}
v_reusejp_5695_:
{
return v___x_5696_;
}
}
}
else
{
return v___x_5691_;
}
}
else
{
lean_object* v_val_5700_; lean_object* v_ref_5701_; lean_object* v_tactic_5702_; lean_object* v_toCold_5703_; lean_object* v_currRecDepth_5704_; lean_object* v_ref_5705_; uint16_t v_optionFlags_5706_; uint8_t v_suppressElabErrors_5707_; uint8_t v_checkDeprecated_5708_; uint8_t v_isRecordingDeps_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; lean_object* v_ref_5712_; lean_object* v___x_5713_; uint8_t v___x_5737_; 
v_val_5700_ = lean_ctor_get(v___x_5675_, 0);
lean_inc(v_val_5700_);
lean_dec_ref_known(v___x_5675_, 1);
v_ref_5701_ = lean_ctor_get(v_val_5700_, 0);
lean_inc(v_ref_5701_);
v_tactic_5702_ = lean_ctor_get(v_val_5700_, 1);
lean_inc(v_tactic_5702_);
lean_dec(v_val_5700_);
v_toCold_5703_ = lean_ctor_get(v___y_5682_, 0);
v_currRecDepth_5704_ = lean_ctor_get(v___y_5682_, 1);
v_ref_5705_ = lean_ctor_get(v___y_5682_, 2);
v_optionFlags_5706_ = lean_ctor_get_uint16(v___y_5682_, sizeof(void*)*3);
v_suppressElabErrors_5707_ = lean_ctor_get_uint8(v___y_5682_, sizeof(void*)*3 + 2);
v_checkDeprecated_5708_ = lean_ctor_get_uint8(v___y_5682_, sizeof(void*)*3 + 3);
v_isRecordingDeps_5709_ = lean_ctor_get_uint8(v___y_5682_, sizeof(void*)*3 + 4);
v___x_5710_ = lean_unsigned_to_nat(0u);
v___x_5711_ = lean_array_get_size(v___x_5676_);
v_ref_5712_ = l_Lean_replaceRef(v_ref_5701_, v_ref_5705_);
lean_inc(v_currRecDepth_5704_);
lean_inc_ref(v_toCold_5703_);
v___x_5713_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_5713_, 0, v_toCold_5703_);
lean_ctor_set(v___x_5713_, 1, v_currRecDepth_5704_);
lean_ctor_set(v___x_5713_, 2, v_ref_5712_);
lean_ctor_set_uint16(v___x_5713_, sizeof(void*)*3, v_optionFlags_5706_);
lean_ctor_set_uint8(v___x_5713_, sizeof(void*)*3 + 2, v_suppressElabErrors_5707_);
lean_ctor_set_uint8(v___x_5713_, sizeof(void*)*3 + 3, v_checkDeprecated_5708_);
lean_ctor_set_uint8(v___x_5713_, sizeof(void*)*3 + 4, v_isRecordingDeps_5709_);
v___x_5737_ = lean_nat_dec_lt(v___x_5710_, v___x_5711_);
if (v___x_5737_ == 0)
{
goto v___jp_5730_;
}
else
{
lean_object* v___x_5738_; size_t v___x_5739_; size_t v___x_5740_; lean_object* v___x_5741_; 
v___x_5738_ = lean_box(0);
v___x_5739_ = ((size_t)0ULL);
v___x_5740_ = lean_usize_of_nat(v___x_5711_);
v___x_5741_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v___x_5676_, v___x_5739_, v___x_5740_, v___x_5738_, v___y_5680_, v___y_5681_, v___x_5713_, v___y_5683_);
if (lean_obj_tag(v___x_5741_) == 0)
{
lean_dec_ref_known(v___x_5741_, 1);
goto v___jp_5730_;
}
else
{
lean_dec_ref_known(v___x_5713_, 3);
lean_dec(v_tactic_5702_);
lean_dec(v_ref_5701_);
lean_dec_ref(v___x_5676_);
return v___x_5741_;
}
}
v___jp_5714_:
{
lean_object* v___x_5715_; lean_object* v___x_5716_; lean_object* v___f_5717_; lean_object* v___x_5718_; 
v___x_5715_ = lean_array_get(v___x_5677_, v___x_5676_, v___x_5710_);
v___x_5716_ = lean_array_to_list(v___x_5676_);
v___f_5717_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2___boxed), 12, 3);
lean_closure_set(v___f_5717_, 0, v___x_5716_);
lean_closure_set(v___f_5717_, 1, v_tactic_5702_);
lean_closure_set(v___f_5717_, 2, v_ref_5701_);
v___x_5718_ = l_Lean_Elab_Tactic_run(v___x_5715_, v___f_5717_, v___y_5678_, v___y_5679_, v___y_5680_, v___y_5681_, v___x_5713_, v___y_5683_);
if (lean_obj_tag(v___x_5718_) == 0)
{
lean_object* v_a_5719_; uint8_t v___x_5720_; 
v_a_5719_ = lean_ctor_get(v___x_5718_, 0);
lean_inc(v_a_5719_);
lean_dec_ref_known(v___x_5718_, 1);
v___x_5720_ = l_List_isEmpty___redArg(v_a_5719_);
if (v___x_5720_ == 0)
{
lean_object* v___x_5721_; 
v___x_5721_ = l_Lean_Elab_Term_reportUnsolvedGoals(v_a_5719_, v___y_5680_, v___y_5681_, v___x_5713_, v___y_5683_);
lean_dec_ref_known(v___x_5713_, 3);
return v___x_5721_;
}
else
{
lean_dec(v_a_5719_);
lean_dec_ref_known(v___x_5713_, 3);
goto v___jp_5685_;
}
}
else
{
lean_object* v_a_5722_; lean_object* v___x_5724_; uint8_t v_isShared_5725_; uint8_t v_isSharedCheck_5729_; 
lean_dec_ref_known(v___x_5713_, 3);
v_a_5722_ = lean_ctor_get(v___x_5718_, 0);
v_isSharedCheck_5729_ = !lean_is_exclusive(v___x_5718_);
if (v_isSharedCheck_5729_ == 0)
{
v___x_5724_ = v___x_5718_;
v_isShared_5725_ = v_isSharedCheck_5729_;
goto v_resetjp_5723_;
}
else
{
lean_inc(v_a_5722_);
lean_dec(v___x_5718_);
v___x_5724_ = lean_box(0);
v_isShared_5725_ = v_isSharedCheck_5729_;
goto v_resetjp_5723_;
}
v_resetjp_5723_:
{
lean_object* v___x_5727_; 
if (v_isShared_5725_ == 0)
{
v___x_5727_ = v___x_5724_;
goto v_reusejp_5726_;
}
else
{
lean_object* v_reuseFailAlloc_5728_; 
v_reuseFailAlloc_5728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5728_, 0, v_a_5722_);
v___x_5727_ = v_reuseFailAlloc_5728_;
goto v_reusejp_5726_;
}
v_reusejp_5726_:
{
return v___x_5727_;
}
}
}
}
v___jp_5730_:
{
uint8_t v___x_5731_; 
v___x_5731_ = lean_nat_dec_eq(v___x_5711_, v___x_5710_);
if (v___x_5731_ == 0)
{
uint8_t v___x_5732_; 
v___x_5732_ = lean_nat_dec_lt(v___x_5710_, v___x_5711_);
if (v___x_5732_ == 0)
{
goto v___jp_5714_;
}
else
{
lean_object* v___x_5733_; size_t v___x_5734_; size_t v___x_5735_; lean_object* v___x_5736_; 
v___x_5733_ = lean_box(0);
v___x_5734_ = ((size_t)0ULL);
v___x_5735_ = lean_usize_of_nat(v___x_5711_);
v___x_5736_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(v___x_5676_, v___x_5734_, v___x_5735_, v___x_5733_, v___y_5678_, v___y_5679_, v___y_5680_, v___y_5681_, v___x_5713_, v___y_5683_);
if (lean_obj_tag(v___x_5736_) == 0)
{
lean_dec_ref_known(v___x_5736_, 1);
goto v___jp_5714_;
}
else
{
lean_dec_ref_known(v___x_5713_, 3);
lean_dec(v_tactic_5702_);
lean_dec(v_ref_5701_);
lean_dec_ref(v___x_5676_);
return v___x_5736_;
}
}
}
else
{
lean_dec_ref_known(v___x_5713_, 3);
lean_dec(v_tactic_5702_);
lean_dec(v_ref_5701_);
lean_dec_ref(v___x_5676_);
goto v___jp_5685_;
}
}
}
v___jp_5685_:
{
lean_object* v___x_5686_; lean_object* v___x_5687_; 
v___x_5686_ = lean_box(0);
v___x_5687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5687_, 0, v___x_5686_);
return v___x_5687_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3___boxed(lean_object* v___x_5742_, lean_object* v___x_5743_, lean_object* v___x_5744_, lean_object* v___y_5745_, lean_object* v___y_5746_, lean_object* v___y_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_, lean_object* v___y_5751_){
_start:
{
lean_object* v_res_5752_; 
v_res_5752_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3(v___x_5742_, v___x_5743_, v___x_5744_, v___y_5745_, v___y_5746_, v___y_5747_, v___y_5748_, v___y_5749_, v___y_5750_);
lean_dec(v___y_5750_);
lean_dec_ref(v___y_5749_);
lean_dec(v___y_5748_);
lean_dec_ref(v___y_5747_);
lean_dec(v___y_5746_);
lean_dec_ref(v___y_5745_);
lean_dec(v___x_5744_);
return v_res_5752_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0(lean_object* v_x_5753_){
_start:
{
uint8_t v___x_5754_; 
v___x_5754_ = 0;
return v___x_5754_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0___boxed(lean_object* v_x_5755_){
_start:
{
uint8_t v_res_5756_; lean_object* v_r_5757_; 
v_res_5756_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0(v_x_5755_);
lean_dec(v_x_5755_);
v_r_5757_ = lean_box(v_res_5756_);
return v_r_5757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(lean_object* v_as_5764_, size_t v_sz_5765_, size_t v_i_5766_, lean_object* v_b_5767_, lean_object* v___y_5768_, lean_object* v___y_5769_, lean_object* v___y_5770_, lean_object* v___y_5771_){
_start:
{
uint8_t v___x_5773_; 
v___x_5773_ = lean_usize_dec_lt(v_i_5766_, v_sz_5765_);
if (v___x_5773_ == 0)
{
lean_object* v___x_5774_; 
v___x_5774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5774_, 0, v_b_5767_);
return v___x_5774_;
}
else
{
lean_object* v_snd_5775_; lean_object* v_fst_5776_; lean_object* v___x_5778_; uint8_t v_isShared_5779_; uint8_t v_isSharedCheck_5848_; 
v_snd_5775_ = lean_ctor_get(v_b_5767_, 1);
v_fst_5776_ = lean_ctor_get(v_b_5767_, 0);
v_isSharedCheck_5848_ = !lean_is_exclusive(v_b_5767_);
if (v_isSharedCheck_5848_ == 0)
{
v___x_5778_ = v_b_5767_;
v_isShared_5779_ = v_isSharedCheck_5848_;
goto v_resetjp_5777_;
}
else
{
lean_inc(v_snd_5775_);
lean_inc(v_fst_5776_);
lean_dec(v_b_5767_);
v___x_5778_ = lean_box(0);
v_isShared_5779_ = v_isSharedCheck_5848_;
goto v_resetjp_5777_;
}
v_resetjp_5777_:
{
lean_object* v_array_5780_; lean_object* v_start_5781_; lean_object* v_stop_5782_; uint8_t v___x_5783_; 
v_array_5780_ = lean_ctor_get(v_snd_5775_, 0);
v_start_5781_ = lean_ctor_get(v_snd_5775_, 1);
v_stop_5782_ = lean_ctor_get(v_snd_5775_, 2);
v___x_5783_ = lean_nat_dec_lt(v_start_5781_, v_stop_5782_);
if (v___x_5783_ == 0)
{
lean_object* v___x_5785_; 
if (v_isShared_5779_ == 0)
{
v___x_5785_ = v___x_5778_;
goto v_reusejp_5784_;
}
else
{
lean_object* v_reuseFailAlloc_5787_; 
v_reuseFailAlloc_5787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5787_, 0, v_fst_5776_);
lean_ctor_set(v_reuseFailAlloc_5787_, 1, v_snd_5775_);
v___x_5785_ = v_reuseFailAlloc_5787_;
goto v_reusejp_5784_;
}
v_reusejp_5784_:
{
lean_object* v___x_5786_; 
v___x_5786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5786_, 0, v___x_5785_);
return v___x_5786_;
}
}
else
{
lean_object* v___x_5789_; uint8_t v_isShared_5790_; uint8_t v_isSharedCheck_5844_; 
lean_inc(v_stop_5782_);
lean_inc(v_start_5781_);
lean_inc_ref(v_array_5780_);
v_isSharedCheck_5844_ = !lean_is_exclusive(v_snd_5775_);
if (v_isSharedCheck_5844_ == 0)
{
lean_object* v_unused_5845_; lean_object* v_unused_5846_; lean_object* v_unused_5847_; 
v_unused_5845_ = lean_ctor_get(v_snd_5775_, 2);
lean_dec(v_unused_5845_);
v_unused_5846_ = lean_ctor_get(v_snd_5775_, 1);
lean_dec(v_unused_5846_);
v_unused_5847_ = lean_ctor_get(v_snd_5775_, 0);
lean_dec(v_unused_5847_);
v___x_5789_ = v_snd_5775_;
v_isShared_5790_ = v_isSharedCheck_5844_;
goto v_resetjp_5788_;
}
else
{
lean_dec(v_snd_5775_);
v___x_5789_ = lean_box(0);
v_isShared_5790_ = v_isSharedCheck_5844_;
goto v_resetjp_5788_;
}
v_resetjp_5788_:
{
lean_object* v_array_5791_; lean_object* v_start_5792_; lean_object* v_stop_5793_; lean_object* v___x_5794_; lean_object* v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5798_; 
v_array_5791_ = lean_ctor_get(v_fst_5776_, 0);
v_start_5792_ = lean_ctor_get(v_fst_5776_, 1);
v_stop_5793_ = lean_ctor_get(v_fst_5776_, 2);
v___x_5794_ = lean_array_fget(v_array_5780_, v_start_5781_);
v___x_5795_ = lean_unsigned_to_nat(1u);
v___x_5796_ = lean_nat_add(v_start_5781_, v___x_5795_);
lean_dec(v_start_5781_);
if (v_isShared_5790_ == 0)
{
lean_ctor_set(v___x_5789_, 1, v___x_5796_);
v___x_5798_ = v___x_5789_;
goto v_reusejp_5797_;
}
else
{
lean_object* v_reuseFailAlloc_5843_; 
v_reuseFailAlloc_5843_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5843_, 0, v_array_5780_);
lean_ctor_set(v_reuseFailAlloc_5843_, 1, v___x_5796_);
lean_ctor_set(v_reuseFailAlloc_5843_, 2, v_stop_5782_);
v___x_5798_ = v_reuseFailAlloc_5843_;
goto v_reusejp_5797_;
}
v_reusejp_5797_:
{
uint8_t v___x_5799_; 
v___x_5799_ = lean_nat_dec_lt(v_start_5792_, v_stop_5793_);
if (v___x_5799_ == 0)
{
lean_object* v___x_5801_; 
lean_dec(v___x_5794_);
if (v_isShared_5779_ == 0)
{
lean_ctor_set(v___x_5778_, 1, v___x_5798_);
v___x_5801_ = v___x_5778_;
goto v_reusejp_5800_;
}
else
{
lean_object* v_reuseFailAlloc_5803_; 
v_reuseFailAlloc_5803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5803_, 0, v_fst_5776_);
lean_ctor_set(v_reuseFailAlloc_5803_, 1, v___x_5798_);
v___x_5801_ = v_reuseFailAlloc_5803_;
goto v_reusejp_5800_;
}
v_reusejp_5800_:
{
lean_object* v___x_5802_; 
v___x_5802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5802_, 0, v___x_5801_);
return v___x_5802_;
}
}
else
{
lean_object* v___x_5805_; uint8_t v_isShared_5806_; uint8_t v_isSharedCheck_5839_; 
lean_inc(v_stop_5793_);
lean_inc(v_start_5792_);
lean_inc_ref(v_array_5791_);
v_isSharedCheck_5839_ = !lean_is_exclusive(v_fst_5776_);
if (v_isSharedCheck_5839_ == 0)
{
lean_object* v_unused_5840_; lean_object* v_unused_5841_; lean_object* v_unused_5842_; 
v_unused_5840_ = lean_ctor_get(v_fst_5776_, 2);
lean_dec(v_unused_5840_);
v_unused_5841_ = lean_ctor_get(v_fst_5776_, 1);
lean_dec(v_unused_5841_);
v_unused_5842_ = lean_ctor_get(v_fst_5776_, 0);
lean_dec(v_unused_5842_);
v___x_5805_ = v_fst_5776_;
v_isShared_5806_ = v_isSharedCheck_5839_;
goto v_resetjp_5804_;
}
else
{
lean_dec(v_fst_5776_);
v___x_5805_ = lean_box(0);
v_isShared_5806_ = v_isSharedCheck_5839_;
goto v_resetjp_5804_;
}
v_resetjp_5804_:
{
lean_object* v___f_5807_; lean_object* v___x_5808_; lean_object* v_a_5809_; lean_object* v___x_5810_; lean_object* v___y_5811_; lean_object* v___x_5812_; lean_object* v___x_5814_; 
v___f_5807_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0));
v___x_5808_ = lean_box(0);
v_a_5809_ = lean_array_uget_borrowed(v_as_5764_, v_i_5766_);
v___x_5810_ = lean_array_fget_borrowed(v_array_5791_, v_start_5792_);
lean_inc(v___x_5810_);
v___y_5811_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3___boxed), 10, 3);
lean_closure_set(v___y_5811_, 0, v___x_5794_);
lean_closure_set(v___y_5811_, 1, v___x_5810_);
lean_closure_set(v___y_5811_, 2, v___x_5808_);
v___x_5812_ = lean_nat_add(v_start_5792_, v___x_5795_);
lean_dec(v_start_5792_);
if (v_isShared_5806_ == 0)
{
lean_ctor_set(v___x_5805_, 1, v___x_5812_);
v___x_5814_ = v___x_5805_;
goto v_reusejp_5813_;
}
else
{
lean_object* v_reuseFailAlloc_5838_; 
v_reuseFailAlloc_5838_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5838_, 0, v_array_5791_);
lean_ctor_set(v_reuseFailAlloc_5838_, 1, v___x_5812_);
lean_ctor_set(v_reuseFailAlloc_5838_, 2, v_stop_5793_);
v___x_5814_ = v_reuseFailAlloc_5838_;
goto v_reusejp_5813_;
}
v_reusejp_5813_:
{
lean_object* v___x_5815_; lean_object* v___x_5816_; lean_object* v___x_5817_; lean_object* v___x_5818_; uint8_t v___x_5819_; lean_object* v___x_5820_; lean_object* v___x_5821_; lean_object* v___x_5822_; lean_object* v___x_5823_; 
lean_inc(v_a_5809_);
v___x_5815_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDeclName___boxed), 10, 3);
lean_closure_set(v___x_5815_, 0, lean_box(0));
lean_closure_set(v___x_5815_, 1, v_a_5809_);
lean_closure_set(v___x_5815_, 2, v___y_5811_);
v___x_5816_ = lean_box(0);
v___x_5817_ = lean_box(0);
v___x_5818_ = lean_box(1);
v___x_5819_ = 0;
v___x_5820_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1));
v___x_5821_ = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(v___x_5821_, 0, v___x_5816_);
lean_ctor_set(v___x_5821_, 1, v___x_5817_);
lean_ctor_set(v___x_5821_, 2, v___x_5816_);
lean_ctor_set(v___x_5821_, 3, v___f_5807_);
lean_ctor_set(v___x_5821_, 4, v___x_5818_);
lean_ctor_set(v___x_5821_, 5, v___x_5818_);
lean_ctor_set(v___x_5821_, 6, v___x_5816_);
lean_ctor_set(v___x_5821_, 7, v___x_5820_);
lean_ctor_set_uint8(v___x_5821_, sizeof(void*)*8, v___x_5799_);
lean_ctor_set_uint8(v___x_5821_, sizeof(void*)*8 + 1, v___x_5799_);
lean_ctor_set_uint8(v___x_5821_, sizeof(void*)*8 + 2, v___x_5799_);
lean_ctor_set_uint8(v___x_5821_, sizeof(void*)*8 + 3, v___x_5799_);
lean_ctor_set_uint8(v___x_5821_, sizeof(void*)*8 + 4, v___x_5819_);
lean_ctor_set_uint8(v___x_5821_, sizeof(void*)*8 + 5, v___x_5819_);
lean_ctor_set_uint8(v___x_5821_, sizeof(void*)*8 + 6, v___x_5819_);
lean_ctor_set_uint8(v___x_5821_, sizeof(void*)*8 + 7, v___x_5819_);
lean_ctor_set_uint8(v___x_5821_, sizeof(void*)*8 + 8, v___x_5799_);
lean_ctor_set_uint8(v___x_5821_, sizeof(void*)*8 + 9, v___x_5819_);
v___x_5822_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2));
v___x_5823_ = l_Lean_Elab_Term_TermElabM_run___redArg(v___x_5815_, v___x_5821_, v___x_5822_, v___y_5768_, v___y_5769_, v___y_5770_, v___y_5771_);
if (lean_obj_tag(v___x_5823_) == 0)
{
lean_object* v___x_5825_; 
lean_dec_ref_known(v___x_5823_, 1);
if (v_isShared_5779_ == 0)
{
lean_ctor_set(v___x_5778_, 1, v___x_5798_);
lean_ctor_set(v___x_5778_, 0, v___x_5814_);
v___x_5825_ = v___x_5778_;
goto v_reusejp_5824_;
}
else
{
lean_object* v_reuseFailAlloc_5829_; 
v_reuseFailAlloc_5829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5829_, 0, v___x_5814_);
lean_ctor_set(v_reuseFailAlloc_5829_, 1, v___x_5798_);
v___x_5825_ = v_reuseFailAlloc_5829_;
goto v_reusejp_5824_;
}
v_reusejp_5824_:
{
size_t v___x_5826_; size_t v___x_5827_; 
v___x_5826_ = ((size_t)1ULL);
v___x_5827_ = lean_usize_add(v_i_5766_, v___x_5826_);
v_i_5766_ = v___x_5827_;
v_b_5767_ = v___x_5825_;
goto _start;
}
}
else
{
lean_object* v_a_5830_; lean_object* v___x_5832_; uint8_t v_isShared_5833_; uint8_t v_isSharedCheck_5837_; 
lean_dec_ref(v___x_5814_);
lean_dec_ref(v___x_5798_);
lean_del_object(v___x_5778_);
v_a_5830_ = lean_ctor_get(v___x_5823_, 0);
v_isSharedCheck_5837_ = !lean_is_exclusive(v___x_5823_);
if (v_isSharedCheck_5837_ == 0)
{
v___x_5832_ = v___x_5823_;
v_isShared_5833_ = v_isSharedCheck_5837_;
goto v_resetjp_5831_;
}
else
{
lean_inc(v_a_5830_);
lean_dec(v___x_5823_);
v___x_5832_ = lean_box(0);
v_isShared_5833_ = v_isSharedCheck_5837_;
goto v_resetjp_5831_;
}
v_resetjp_5831_:
{
lean_object* v___x_5835_; 
if (v_isShared_5833_ == 0)
{
v___x_5835_ = v___x_5832_;
goto v_reusejp_5834_;
}
else
{
lean_object* v_reuseFailAlloc_5836_; 
v_reuseFailAlloc_5836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5836_, 0, v_a_5830_);
v___x_5835_ = v_reuseFailAlloc_5836_;
goto v_reusejp_5834_;
}
v_reusejp_5834_:
{
return v___x_5835_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___boxed(lean_object* v_as_5849_, lean_object* v_sz_5850_, lean_object* v_i_5851_, lean_object* v_b_5852_, lean_object* v___y_5853_, lean_object* v___y_5854_, lean_object* v___y_5855_, lean_object* v___y_5856_, lean_object* v___y_5857_){
_start:
{
size_t v_sz_boxed_5858_; size_t v_i_boxed_5859_; lean_object* v_res_5860_; 
v_sz_boxed_5858_ = lean_unbox_usize(v_sz_5850_);
lean_dec(v_sz_5850_);
v_i_boxed_5859_ = lean_unbox_usize(v_i_5851_);
lean_dec(v_i_5851_);
v_res_5860_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(v_as_5849_, v_sz_boxed_5858_, v_i_boxed_5859_, v_b_5852_, v___y_5853_, v___y_5854_, v___y_5855_, v___y_5856_);
lean_dec(v___y_5856_);
lean_dec_ref(v___y_5855_);
lean_dec(v___y_5854_);
lean_dec_ref(v___y_5853_);
lean_dec_ref(v_as_5849_);
return v_res_5860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0(lean_object* v_value_5861_, lean_object* v_decrTactics_5862_, lean_object* v_argsPacker_5863_, lean_object* v_funNames_5864_, lean_object* v___y_5865_, lean_object* v___y_5866_, lean_object* v___y_5867_, lean_object* v___y_5868_){
_start:
{
lean_object* v___x_5870_; 
lean_inc_ref(v_value_5861_);
v___x_5870_ = l_Lean_Meta_getMVarsNoDelayed(v_value_5861_, v___y_5865_, v___y_5866_, v___y_5867_, v___y_5868_);
if (lean_obj_tag(v___x_5870_) == 0)
{
lean_object* v_a_5871_; lean_object* v___x_5872_; 
v_a_5871_ = lean_ctor_get(v___x_5870_, 0);
lean_inc(v_a_5871_);
lean_dec_ref_known(v___x_5870_, 1);
v___x_5872_ = l_Lean_Elab_WF_assignSubsumed(v_a_5871_, v___y_5865_, v___y_5866_, v___y_5867_, v___y_5868_);
lean_dec(v_a_5871_);
if (lean_obj_tag(v___x_5872_) == 0)
{
lean_object* v_a_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; 
v_a_5873_ = lean_ctor_get(v___x_5872_, 0);
lean_inc(v_a_5873_);
lean_dec_ref_known(v___x_5872_, 1);
v___x_5874_ = lean_array_get_size(v_decrTactics_5862_);
v___x_5875_ = l_Lean_Elab_WF_groupGoalsByFunction(v_argsPacker_5863_, v___x_5874_, v_a_5873_, v___y_5865_, v___y_5866_, v___y_5867_, v___y_5868_);
lean_dec(v_a_5873_);
if (lean_obj_tag(v___x_5875_) == 0)
{
lean_object* v_a_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; size_t v_sz_5882_; size_t v___x_5883_; lean_object* v___x_5884_; 
v_a_5876_ = lean_ctor_get(v___x_5875_, 0);
lean_inc(v_a_5876_);
lean_dec_ref_known(v___x_5875_, 1);
v___x_5877_ = lean_unsigned_to_nat(0u);
v___x_5878_ = lean_array_get_size(v_a_5876_);
v___x_5879_ = l_Array_toSubarray___redArg(v_a_5876_, v___x_5877_, v___x_5878_);
v___x_5880_ = l_Array_toSubarray___redArg(v_decrTactics_5862_, v___x_5877_, v___x_5874_);
v___x_5881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5881_, 0, v___x_5879_);
lean_ctor_set(v___x_5881_, 1, v___x_5880_);
v_sz_5882_ = lean_array_size(v_funNames_5864_);
v___x_5883_ = ((size_t)0ULL);
v___x_5884_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(v_funNames_5864_, v_sz_5882_, v___x_5883_, v___x_5881_, v___y_5865_, v___y_5866_, v___y_5867_, v___y_5868_);
if (lean_obj_tag(v___x_5884_) == 0)
{
lean_object* v___x_5885_; 
lean_dec_ref_known(v___x_5884_, 1);
v___x_5885_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(v_value_5861_, v___y_5866_);
return v___x_5885_;
}
else
{
lean_object* v_a_5886_; lean_object* v___x_5888_; uint8_t v_isShared_5889_; uint8_t v_isSharedCheck_5893_; 
lean_dec_ref(v_value_5861_);
v_a_5886_ = lean_ctor_get(v___x_5884_, 0);
v_isSharedCheck_5893_ = !lean_is_exclusive(v___x_5884_);
if (v_isSharedCheck_5893_ == 0)
{
v___x_5888_ = v___x_5884_;
v_isShared_5889_ = v_isSharedCheck_5893_;
goto v_resetjp_5887_;
}
else
{
lean_inc(v_a_5886_);
lean_dec(v___x_5884_);
v___x_5888_ = lean_box(0);
v_isShared_5889_ = v_isSharedCheck_5893_;
goto v_resetjp_5887_;
}
v_resetjp_5887_:
{
lean_object* v___x_5891_; 
if (v_isShared_5889_ == 0)
{
v___x_5891_ = v___x_5888_;
goto v_reusejp_5890_;
}
else
{
lean_object* v_reuseFailAlloc_5892_; 
v_reuseFailAlloc_5892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5892_, 0, v_a_5886_);
v___x_5891_ = v_reuseFailAlloc_5892_;
goto v_reusejp_5890_;
}
v_reusejp_5890_:
{
return v___x_5891_;
}
}
}
}
else
{
lean_object* v_a_5894_; lean_object* v___x_5896_; uint8_t v_isShared_5897_; uint8_t v_isSharedCheck_5901_; 
lean_dec_ref(v_decrTactics_5862_);
lean_dec_ref(v_value_5861_);
v_a_5894_ = lean_ctor_get(v___x_5875_, 0);
v_isSharedCheck_5901_ = !lean_is_exclusive(v___x_5875_);
if (v_isSharedCheck_5901_ == 0)
{
v___x_5896_ = v___x_5875_;
v_isShared_5897_ = v_isSharedCheck_5901_;
goto v_resetjp_5895_;
}
else
{
lean_inc(v_a_5894_);
lean_dec(v___x_5875_);
v___x_5896_ = lean_box(0);
v_isShared_5897_ = v_isSharedCheck_5901_;
goto v_resetjp_5895_;
}
v_resetjp_5895_:
{
lean_object* v___x_5899_; 
if (v_isShared_5897_ == 0)
{
v___x_5899_ = v___x_5896_;
goto v_reusejp_5898_;
}
else
{
lean_object* v_reuseFailAlloc_5900_; 
v_reuseFailAlloc_5900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5900_, 0, v_a_5894_);
v___x_5899_ = v_reuseFailAlloc_5900_;
goto v_reusejp_5898_;
}
v_reusejp_5898_:
{
return v___x_5899_;
}
}
}
}
else
{
lean_object* v_a_5902_; lean_object* v___x_5904_; uint8_t v_isShared_5905_; uint8_t v_isSharedCheck_5909_; 
lean_dec_ref(v_decrTactics_5862_);
lean_dec_ref(v_value_5861_);
v_a_5902_ = lean_ctor_get(v___x_5872_, 0);
v_isSharedCheck_5909_ = !lean_is_exclusive(v___x_5872_);
if (v_isSharedCheck_5909_ == 0)
{
v___x_5904_ = v___x_5872_;
v_isShared_5905_ = v_isSharedCheck_5909_;
goto v_resetjp_5903_;
}
else
{
lean_inc(v_a_5902_);
lean_dec(v___x_5872_);
v___x_5904_ = lean_box(0);
v_isShared_5905_ = v_isSharedCheck_5909_;
goto v_resetjp_5903_;
}
v_resetjp_5903_:
{
lean_object* v___x_5907_; 
if (v_isShared_5905_ == 0)
{
v___x_5907_ = v___x_5904_;
goto v_reusejp_5906_;
}
else
{
lean_object* v_reuseFailAlloc_5908_; 
v_reuseFailAlloc_5908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5908_, 0, v_a_5902_);
v___x_5907_ = v_reuseFailAlloc_5908_;
goto v_reusejp_5906_;
}
v_reusejp_5906_:
{
return v___x_5907_;
}
}
}
}
else
{
lean_object* v_a_5910_; lean_object* v___x_5912_; uint8_t v_isShared_5913_; uint8_t v_isSharedCheck_5917_; 
lean_dec_ref(v_decrTactics_5862_);
lean_dec_ref(v_value_5861_);
v_a_5910_ = lean_ctor_get(v___x_5870_, 0);
v_isSharedCheck_5917_ = !lean_is_exclusive(v___x_5870_);
if (v_isSharedCheck_5917_ == 0)
{
v___x_5912_ = v___x_5870_;
v_isShared_5913_ = v_isSharedCheck_5917_;
goto v_resetjp_5911_;
}
else
{
lean_inc(v_a_5910_);
lean_dec(v___x_5870_);
v___x_5912_ = lean_box(0);
v_isShared_5913_ = v_isSharedCheck_5917_;
goto v_resetjp_5911_;
}
v_resetjp_5911_:
{
lean_object* v___x_5915_; 
if (v_isShared_5913_ == 0)
{
v___x_5915_ = v___x_5912_;
goto v_reusejp_5914_;
}
else
{
lean_object* v_reuseFailAlloc_5916_; 
v_reuseFailAlloc_5916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5916_, 0, v_a_5910_);
v___x_5915_ = v_reuseFailAlloc_5916_;
goto v_reusejp_5914_;
}
v_reusejp_5914_:
{
return v___x_5915_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed(lean_object* v_value_5918_, lean_object* v_decrTactics_5919_, lean_object* v_argsPacker_5920_, lean_object* v_funNames_5921_, lean_object* v___y_5922_, lean_object* v___y_5923_, lean_object* v___y_5924_, lean_object* v___y_5925_, lean_object* v___y_5926_){
_start:
{
lean_object* v_res_5927_; 
v_res_5927_ = l_Lean_Elab_WF_solveDecreasingGoals___lam__0(v_value_5918_, v_decrTactics_5919_, v_argsPacker_5920_, v_funNames_5921_, v___y_5922_, v___y_5923_, v___y_5924_, v___y_5925_);
lean_dec(v___y_5925_);
lean_dec_ref(v___y_5924_);
lean_dec(v___y_5923_);
lean_dec_ref(v___y_5922_);
lean_dec_ref(v_funNames_5921_);
lean_dec_ref(v_argsPacker_5920_);
return v_res_5927_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(lean_object* v___y_5928_, uint8_t v_isExporting_5929_, lean_object* v___x_5930_, lean_object* v___y_5931_, lean_object* v___x_5932_, lean_object* v_a_x3f_5933_){
_start:
{
lean_object* v___x_5935_; lean_object* v_env_5936_; lean_object* v_nextMacroScope_5937_; lean_object* v_ngen_5938_; lean_object* v_auxDeclNGen_5939_; lean_object* v_traceState_5940_; lean_object* v_recordedDeps_5941_; lean_object* v_messages_5942_; lean_object* v_infoState_5943_; lean_object* v_snapshotTasks_5944_; lean_object* v___x_5946_; uint8_t v_isShared_5947_; uint8_t v_isSharedCheck_5969_; 
v___x_5935_ = lean_st_ref_take(v___y_5928_);
v_env_5936_ = lean_ctor_get(v___x_5935_, 0);
v_nextMacroScope_5937_ = lean_ctor_get(v___x_5935_, 1);
v_ngen_5938_ = lean_ctor_get(v___x_5935_, 2);
v_auxDeclNGen_5939_ = lean_ctor_get(v___x_5935_, 3);
v_traceState_5940_ = lean_ctor_get(v___x_5935_, 4);
v_recordedDeps_5941_ = lean_ctor_get(v___x_5935_, 6);
v_messages_5942_ = lean_ctor_get(v___x_5935_, 7);
v_infoState_5943_ = lean_ctor_get(v___x_5935_, 8);
v_snapshotTasks_5944_ = lean_ctor_get(v___x_5935_, 9);
v_isSharedCheck_5969_ = !lean_is_exclusive(v___x_5935_);
if (v_isSharedCheck_5969_ == 0)
{
lean_object* v_unused_5970_; 
v_unused_5970_ = lean_ctor_get(v___x_5935_, 5);
lean_dec(v_unused_5970_);
v___x_5946_ = v___x_5935_;
v_isShared_5947_ = v_isSharedCheck_5969_;
goto v_resetjp_5945_;
}
else
{
lean_inc(v_snapshotTasks_5944_);
lean_inc(v_infoState_5943_);
lean_inc(v_messages_5942_);
lean_inc(v_recordedDeps_5941_);
lean_inc(v_traceState_5940_);
lean_inc(v_auxDeclNGen_5939_);
lean_inc(v_ngen_5938_);
lean_inc(v_nextMacroScope_5937_);
lean_inc(v_env_5936_);
lean_dec(v___x_5935_);
v___x_5946_ = lean_box(0);
v_isShared_5947_ = v_isSharedCheck_5969_;
goto v_resetjp_5945_;
}
v_resetjp_5945_:
{
lean_object* v___x_5948_; lean_object* v___x_5950_; 
v___x_5948_ = l_Lean_Environment_setExporting(v_env_5936_, v_isExporting_5929_);
if (v_isShared_5947_ == 0)
{
lean_ctor_set(v___x_5946_, 5, v___x_5930_);
lean_ctor_set(v___x_5946_, 0, v___x_5948_);
v___x_5950_ = v___x_5946_;
goto v_reusejp_5949_;
}
else
{
lean_object* v_reuseFailAlloc_5968_; 
v_reuseFailAlloc_5968_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5968_, 0, v___x_5948_);
lean_ctor_set(v_reuseFailAlloc_5968_, 1, v_nextMacroScope_5937_);
lean_ctor_set(v_reuseFailAlloc_5968_, 2, v_ngen_5938_);
lean_ctor_set(v_reuseFailAlloc_5968_, 3, v_auxDeclNGen_5939_);
lean_ctor_set(v_reuseFailAlloc_5968_, 4, v_traceState_5940_);
lean_ctor_set(v_reuseFailAlloc_5968_, 5, v___x_5930_);
lean_ctor_set(v_reuseFailAlloc_5968_, 6, v_recordedDeps_5941_);
lean_ctor_set(v_reuseFailAlloc_5968_, 7, v_messages_5942_);
lean_ctor_set(v_reuseFailAlloc_5968_, 8, v_infoState_5943_);
lean_ctor_set(v_reuseFailAlloc_5968_, 9, v_snapshotTasks_5944_);
v___x_5950_ = v_reuseFailAlloc_5968_;
goto v_reusejp_5949_;
}
v_reusejp_5949_:
{
lean_object* v___x_5951_; lean_object* v___x_5952_; lean_object* v_mctx_5953_; lean_object* v_zetaDeltaFVarIds_5954_; lean_object* v_postponed_5955_; lean_object* v_diag_5956_; lean_object* v___x_5958_; uint8_t v_isShared_5959_; uint8_t v_isSharedCheck_5966_; 
v___x_5951_ = lean_st_ref_put(v___y_5928_, v___x_5950_);
v___x_5952_ = lean_st_ref_take(v___y_5931_);
v_mctx_5953_ = lean_ctor_get(v___x_5952_, 0);
v_zetaDeltaFVarIds_5954_ = lean_ctor_get(v___x_5952_, 2);
v_postponed_5955_ = lean_ctor_get(v___x_5952_, 3);
v_diag_5956_ = lean_ctor_get(v___x_5952_, 4);
v_isSharedCheck_5966_ = !lean_is_exclusive(v___x_5952_);
if (v_isSharedCheck_5966_ == 0)
{
lean_object* v_unused_5967_; 
v_unused_5967_ = lean_ctor_get(v___x_5952_, 1);
lean_dec(v_unused_5967_);
v___x_5958_ = v___x_5952_;
v_isShared_5959_ = v_isSharedCheck_5966_;
goto v_resetjp_5957_;
}
else
{
lean_inc(v_diag_5956_);
lean_inc(v_postponed_5955_);
lean_inc(v_zetaDeltaFVarIds_5954_);
lean_inc(v_mctx_5953_);
lean_dec(v___x_5952_);
v___x_5958_ = lean_box(0);
v_isShared_5959_ = v_isSharedCheck_5966_;
goto v_resetjp_5957_;
}
v_resetjp_5957_:
{
lean_object* v___x_5960_; lean_object* v___x_5962_; 
v___x_5960_ = lean_box(0);
if (v_isShared_5959_ == 0)
{
lean_ctor_set(v___x_5958_, 1, v___x_5932_);
v___x_5962_ = v___x_5958_;
goto v_reusejp_5961_;
}
else
{
lean_object* v_reuseFailAlloc_5965_; 
v_reuseFailAlloc_5965_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5965_, 0, v_mctx_5953_);
lean_ctor_set(v_reuseFailAlloc_5965_, 1, v___x_5932_);
lean_ctor_set(v_reuseFailAlloc_5965_, 2, v_zetaDeltaFVarIds_5954_);
lean_ctor_set(v_reuseFailAlloc_5965_, 3, v_postponed_5955_);
lean_ctor_set(v_reuseFailAlloc_5965_, 4, v_diag_5956_);
v___x_5962_ = v_reuseFailAlloc_5965_;
goto v_reusejp_5961_;
}
v_reusejp_5961_:
{
lean_object* v___x_5963_; lean_object* v___x_5964_; 
v___x_5963_ = lean_st_ref_put(v___y_5931_, v___x_5962_);
v___x_5964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5964_, 0, v___x_5960_);
return v___x_5964_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0___boxed(lean_object* v___y_5971_, lean_object* v_isExporting_5972_, lean_object* v___x_5973_, lean_object* v___y_5974_, lean_object* v___x_5975_, lean_object* v_a_x3f_5976_, lean_object* v___y_5977_){
_start:
{
uint8_t v_isExporting_boxed_5978_; lean_object* v_res_5979_; 
v_isExporting_boxed_5978_ = lean_unbox(v_isExporting_5972_);
v_res_5979_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(v___y_5971_, v_isExporting_boxed_5978_, v___x_5973_, v___y_5974_, v___x_5975_, v_a_x3f_5976_);
lean_dec(v_a_x3f_5976_);
lean_dec(v___y_5974_);
lean_dec(v___y_5971_);
return v_res_5979_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12_spec__13___redArg___closed__0(void){
_start:
{
lean_object* v___x_5980_; lean_object* v___x_5981_; 
v___x_5980_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0);
v___x_5981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5981_, 0, v___x_5980_);
return v___x_5981_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12_spec__13___redArg(){
_start:
{
lean_object* v___x_5983_; 
v___x_5983_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12_spec__13___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12_spec__13___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12_spec__13___redArg___closed__0);
return v___x_5983_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12_spec__13___redArg___boxed(lean_object* v___dummy_5984_){
_start:
{
lean_object* v_res_5985_; 
v_res_5985_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12_spec__13___redArg();
return v_res_5985_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_5986_; lean_object* v___x_5987_; 
v___x_5986_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0);
v___x_5987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5987_, 0, v___x_5986_);
return v___x_5987_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1(void){
_start:
{
lean_object* v___x_5988_; lean_object* v___x_5989_; 
v___x_5988_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0);
v___x_5989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5989_, 0, v___x_5988_);
lean_ctor_set(v___x_5989_, 1, v___x_5988_);
return v___x_5989_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_5990_; 
v___x_5990_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12_spec__13___redArg();
return v___x_5990_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__3(void){
_start:
{
lean_object* v___x_5991_; lean_object* v___x_5992_; 
v___x_5991_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0);
v___x_5992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5992_, 0, v___x_5991_);
lean_ctor_set(v___x_5992_, 1, v___x_5991_);
return v___x_5992_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__4(void){
_start:
{
lean_object* v___x_5993_; lean_object* v___x_5994_; lean_object* v___x_5995_; 
v___x_5993_ = lean_unsigned_to_nat(0u);
v___x_5994_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0);
v___x_5995_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5995_, 0, v___x_5994_);
lean_ctor_set(v___x_5995_, 1, v___x_5994_);
lean_ctor_set(v___x_5995_, 2, v___x_5993_);
return v___x_5995_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__5(void){
_start:
{
lean_object* v___x_5996_; lean_object* v___x_5997_; lean_object* v___x_5998_; lean_object* v___x_5999_; lean_object* v___x_6000_; 
v___x_5996_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__4, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__4_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__4);
v___x_5997_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__3);
v___x_5998_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0);
v___x_5999_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2);
v___x_6000_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6000_, 0, v___x_5999_);
lean_ctor_set(v___x_6000_, 1, v___x_5998_);
lean_ctor_set(v___x_6000_, 2, v___x_5997_);
lean_ctor_set(v___x_6000_, 3, v___x_5998_);
lean_ctor_set(v___x_6000_, 4, v___x_5998_);
lean_ctor_set(v___x_6000_, 5, v___x_5998_);
lean_ctor_set(v___x_6000_, 6, v___x_5998_);
lean_ctor_set(v___x_6000_, 7, v___x_5996_);
return v___x_6000_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(lean_object* v_x_6001_, uint8_t v_isExporting_6002_, lean_object* v___y_6003_, lean_object* v___y_6004_, lean_object* v___y_6005_, lean_object* v___y_6006_){
_start:
{
lean_object* v___x_6008_; lean_object* v_env_6009_; lean_object* v___x_6010_; uint8_t v_isModule_6011_; 
v___x_6008_ = lean_st_ref_get(v___y_6006_);
v_env_6009_ = lean_ctor_get(v___x_6008_, 0);
lean_inc_ref(v_env_6009_);
lean_dec(v___x_6008_);
v___x_6010_ = l_Lean_Environment_header(v_env_6009_);
v_isModule_6011_ = lean_ctor_get_uint8(v___x_6010_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_6010_);
if (v_isModule_6011_ == 0)
{
lean_object* v___x_6012_; 
lean_dec_ref(v_env_6009_);
lean_inc(v___y_6006_);
lean_inc_ref(v___y_6005_);
lean_inc(v___y_6004_);
lean_inc_ref(v___y_6003_);
v___x_6012_ = lean_apply_5(v_x_6001_, v___y_6003_, v___y_6004_, v___y_6005_, v___y_6006_, lean_box(0));
return v___x_6012_;
}
else
{
uint8_t v_isExporting_6013_; 
v_isExporting_6013_ = lean_ctor_get_uint8(v_env_6009_, sizeof(void*)*13);
lean_dec_ref(v_env_6009_);
if (v_isExporting_6002_ == 0)
{
if (v_isExporting_6013_ == 0)
{
lean_object* v___x_6080_; 
lean_inc(v___y_6006_);
lean_inc_ref(v___y_6005_);
lean_inc(v___y_6004_);
lean_inc_ref(v___y_6003_);
v___x_6080_ = lean_apply_5(v_x_6001_, v___y_6003_, v___y_6004_, v___y_6005_, v___y_6006_, lean_box(0));
return v___x_6080_;
}
else
{
goto v___jp_6014_;
}
}
else
{
if (v_isExporting_6013_ == 0)
{
goto v___jp_6014_;
}
else
{
lean_object* v___x_6081_; 
lean_inc(v___y_6006_);
lean_inc_ref(v___y_6005_);
lean_inc(v___y_6004_);
lean_inc_ref(v___y_6003_);
v___x_6081_ = lean_apply_5(v_x_6001_, v___y_6003_, v___y_6004_, v___y_6005_, v___y_6006_, lean_box(0));
return v___x_6081_;
}
}
v___jp_6014_:
{
lean_object* v___x_6015_; lean_object* v_env_6016_; lean_object* v_nextMacroScope_6017_; lean_object* v_ngen_6018_; lean_object* v_auxDeclNGen_6019_; lean_object* v_traceState_6020_; lean_object* v_recordedDeps_6021_; lean_object* v_messages_6022_; lean_object* v_infoState_6023_; lean_object* v_snapshotTasks_6024_; lean_object* v___x_6026_; uint8_t v_isShared_6027_; uint8_t v_isSharedCheck_6078_; 
v___x_6015_ = lean_st_ref_take(v___y_6006_);
v_env_6016_ = lean_ctor_get(v___x_6015_, 0);
v_nextMacroScope_6017_ = lean_ctor_get(v___x_6015_, 1);
v_ngen_6018_ = lean_ctor_get(v___x_6015_, 2);
v_auxDeclNGen_6019_ = lean_ctor_get(v___x_6015_, 3);
v_traceState_6020_ = lean_ctor_get(v___x_6015_, 4);
v_recordedDeps_6021_ = lean_ctor_get(v___x_6015_, 6);
v_messages_6022_ = lean_ctor_get(v___x_6015_, 7);
v_infoState_6023_ = lean_ctor_get(v___x_6015_, 8);
v_snapshotTasks_6024_ = lean_ctor_get(v___x_6015_, 9);
v_isSharedCheck_6078_ = !lean_is_exclusive(v___x_6015_);
if (v_isSharedCheck_6078_ == 0)
{
lean_object* v_unused_6079_; 
v_unused_6079_ = lean_ctor_get(v___x_6015_, 5);
lean_dec(v_unused_6079_);
v___x_6026_ = v___x_6015_;
v_isShared_6027_ = v_isSharedCheck_6078_;
goto v_resetjp_6025_;
}
else
{
lean_inc(v_snapshotTasks_6024_);
lean_inc(v_infoState_6023_);
lean_inc(v_messages_6022_);
lean_inc(v_recordedDeps_6021_);
lean_inc(v_traceState_6020_);
lean_inc(v_auxDeclNGen_6019_);
lean_inc(v_ngen_6018_);
lean_inc(v_nextMacroScope_6017_);
lean_inc(v_env_6016_);
lean_dec(v___x_6015_);
v___x_6026_ = lean_box(0);
v_isShared_6027_ = v_isSharedCheck_6078_;
goto v_resetjp_6025_;
}
v_resetjp_6025_:
{
lean_object* v___x_6028_; lean_object* v___x_6029_; lean_object* v___x_6031_; 
v___x_6028_ = l_Lean_Environment_setExporting(v_env_6016_, v_isExporting_6002_);
v___x_6029_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1);
if (v_isShared_6027_ == 0)
{
lean_ctor_set(v___x_6026_, 5, v___x_6029_);
lean_ctor_set(v___x_6026_, 0, v___x_6028_);
v___x_6031_ = v___x_6026_;
goto v_reusejp_6030_;
}
else
{
lean_object* v_reuseFailAlloc_6077_; 
v_reuseFailAlloc_6077_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6077_, 0, v___x_6028_);
lean_ctor_set(v_reuseFailAlloc_6077_, 1, v_nextMacroScope_6017_);
lean_ctor_set(v_reuseFailAlloc_6077_, 2, v_ngen_6018_);
lean_ctor_set(v_reuseFailAlloc_6077_, 3, v_auxDeclNGen_6019_);
lean_ctor_set(v_reuseFailAlloc_6077_, 4, v_traceState_6020_);
lean_ctor_set(v_reuseFailAlloc_6077_, 5, v___x_6029_);
lean_ctor_set(v_reuseFailAlloc_6077_, 6, v_recordedDeps_6021_);
lean_ctor_set(v_reuseFailAlloc_6077_, 7, v_messages_6022_);
lean_ctor_set(v_reuseFailAlloc_6077_, 8, v_infoState_6023_);
lean_ctor_set(v_reuseFailAlloc_6077_, 9, v_snapshotTasks_6024_);
v___x_6031_ = v_reuseFailAlloc_6077_;
goto v_reusejp_6030_;
}
v_reusejp_6030_:
{
lean_object* v___x_6032_; lean_object* v___x_6033_; lean_object* v_mctx_6034_; lean_object* v_zetaDeltaFVarIds_6035_; lean_object* v_postponed_6036_; lean_object* v_diag_6037_; lean_object* v___x_6039_; uint8_t v_isShared_6040_; uint8_t v_isSharedCheck_6075_; 
v___x_6032_ = lean_st_ref_put(v___y_6006_, v___x_6031_);
v___x_6033_ = lean_st_ref_take(v___y_6004_);
v_mctx_6034_ = lean_ctor_get(v___x_6033_, 0);
v_zetaDeltaFVarIds_6035_ = lean_ctor_get(v___x_6033_, 2);
v_postponed_6036_ = lean_ctor_get(v___x_6033_, 3);
v_diag_6037_ = lean_ctor_get(v___x_6033_, 4);
v_isSharedCheck_6075_ = !lean_is_exclusive(v___x_6033_);
if (v_isSharedCheck_6075_ == 0)
{
lean_object* v_unused_6076_; 
v_unused_6076_ = lean_ctor_get(v___x_6033_, 1);
lean_dec(v_unused_6076_);
v___x_6039_ = v___x_6033_;
v_isShared_6040_ = v_isSharedCheck_6075_;
goto v_resetjp_6038_;
}
else
{
lean_inc(v_diag_6037_);
lean_inc(v_postponed_6036_);
lean_inc(v_zetaDeltaFVarIds_6035_);
lean_inc(v_mctx_6034_);
lean_dec(v___x_6033_);
v___x_6039_ = lean_box(0);
v_isShared_6040_ = v_isSharedCheck_6075_;
goto v_resetjp_6038_;
}
v_resetjp_6038_:
{
lean_object* v___x_6041_; lean_object* v___x_6043_; 
v___x_6041_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__5, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__5_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__5);
if (v_isShared_6040_ == 0)
{
lean_ctor_set(v___x_6039_, 1, v___x_6041_);
v___x_6043_ = v___x_6039_;
goto v_reusejp_6042_;
}
else
{
lean_object* v_reuseFailAlloc_6074_; 
v_reuseFailAlloc_6074_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6074_, 0, v_mctx_6034_);
lean_ctor_set(v_reuseFailAlloc_6074_, 1, v___x_6041_);
lean_ctor_set(v_reuseFailAlloc_6074_, 2, v_zetaDeltaFVarIds_6035_);
lean_ctor_set(v_reuseFailAlloc_6074_, 3, v_postponed_6036_);
lean_ctor_set(v_reuseFailAlloc_6074_, 4, v_diag_6037_);
v___x_6043_ = v_reuseFailAlloc_6074_;
goto v_reusejp_6042_;
}
v_reusejp_6042_:
{
lean_object* v___x_6044_; lean_object* v_r_6045_; 
v___x_6044_ = lean_st_ref_put(v___y_6004_, v___x_6043_);
lean_inc(v___y_6006_);
lean_inc_ref(v___y_6005_);
lean_inc(v___y_6004_);
lean_inc_ref(v___y_6003_);
v_r_6045_ = lean_apply_5(v_x_6001_, v___y_6003_, v___y_6004_, v___y_6005_, v___y_6006_, lean_box(0));
if (lean_obj_tag(v_r_6045_) == 0)
{
lean_object* v_a_6046_; lean_object* v___x_6048_; uint8_t v_isShared_6049_; uint8_t v_isSharedCheck_6062_; 
v_a_6046_ = lean_ctor_get(v_r_6045_, 0);
v_isSharedCheck_6062_ = !lean_is_exclusive(v_r_6045_);
if (v_isSharedCheck_6062_ == 0)
{
v___x_6048_ = v_r_6045_;
v_isShared_6049_ = v_isSharedCheck_6062_;
goto v_resetjp_6047_;
}
else
{
lean_inc(v_a_6046_);
lean_dec(v_r_6045_);
v___x_6048_ = lean_box(0);
v_isShared_6049_ = v_isSharedCheck_6062_;
goto v_resetjp_6047_;
}
v_resetjp_6047_:
{
lean_object* v___x_6051_; 
lean_inc(v_a_6046_);
if (v_isShared_6049_ == 0)
{
lean_ctor_set_tag(v___x_6048_, 1);
v___x_6051_ = v___x_6048_;
goto v_reusejp_6050_;
}
else
{
lean_object* v_reuseFailAlloc_6061_; 
v_reuseFailAlloc_6061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6061_, 0, v_a_6046_);
v___x_6051_ = v_reuseFailAlloc_6061_;
goto v_reusejp_6050_;
}
v_reusejp_6050_:
{
lean_object* v___x_6052_; lean_object* v___x_6054_; uint8_t v_isShared_6055_; uint8_t v_isSharedCheck_6059_; 
v___x_6052_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(v___y_6006_, v_isExporting_6013_, v___x_6029_, v___y_6004_, v___x_6041_, v___x_6051_);
lean_dec_ref(v___x_6051_);
v_isSharedCheck_6059_ = !lean_is_exclusive(v___x_6052_);
if (v_isSharedCheck_6059_ == 0)
{
lean_object* v_unused_6060_; 
v_unused_6060_ = lean_ctor_get(v___x_6052_, 0);
lean_dec(v_unused_6060_);
v___x_6054_ = v___x_6052_;
v_isShared_6055_ = v_isSharedCheck_6059_;
goto v_resetjp_6053_;
}
else
{
lean_dec(v___x_6052_);
v___x_6054_ = lean_box(0);
v_isShared_6055_ = v_isSharedCheck_6059_;
goto v_resetjp_6053_;
}
v_resetjp_6053_:
{
lean_object* v___x_6057_; 
if (v_isShared_6055_ == 0)
{
lean_ctor_set(v___x_6054_, 0, v_a_6046_);
v___x_6057_ = v___x_6054_;
goto v_reusejp_6056_;
}
else
{
lean_object* v_reuseFailAlloc_6058_; 
v_reuseFailAlloc_6058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6058_, 0, v_a_6046_);
v___x_6057_ = v_reuseFailAlloc_6058_;
goto v_reusejp_6056_;
}
v_reusejp_6056_:
{
return v___x_6057_;
}
}
}
}
}
else
{
lean_object* v_a_6063_; lean_object* v___x_6064_; lean_object* v___x_6065_; lean_object* v___x_6067_; uint8_t v_isShared_6068_; uint8_t v_isSharedCheck_6072_; 
v_a_6063_ = lean_ctor_get(v_r_6045_, 0);
lean_inc(v_a_6063_);
lean_dec_ref_known(v_r_6045_, 1);
v___x_6064_ = lean_box(0);
v___x_6065_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(v___y_6006_, v_isExporting_6013_, v___x_6029_, v___y_6004_, v___x_6041_, v___x_6064_);
v_isSharedCheck_6072_ = !lean_is_exclusive(v___x_6065_);
if (v_isSharedCheck_6072_ == 0)
{
lean_object* v_unused_6073_; 
v_unused_6073_ = lean_ctor_get(v___x_6065_, 0);
lean_dec(v_unused_6073_);
v___x_6067_ = v___x_6065_;
v_isShared_6068_ = v_isSharedCheck_6072_;
goto v_resetjp_6066_;
}
else
{
lean_dec(v___x_6065_);
v___x_6067_ = lean_box(0);
v_isShared_6068_ = v_isSharedCheck_6072_;
goto v_resetjp_6066_;
}
v_resetjp_6066_:
{
lean_object* v___x_6070_; 
if (v_isShared_6068_ == 0)
{
lean_ctor_set_tag(v___x_6067_, 1);
lean_ctor_set(v___x_6067_, 0, v_a_6063_);
v___x_6070_ = v___x_6067_;
goto v_reusejp_6069_;
}
else
{
lean_object* v_reuseFailAlloc_6071_; 
v_reuseFailAlloc_6071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6071_, 0, v_a_6063_);
v___x_6070_ = v_reuseFailAlloc_6071_;
goto v_reusejp_6069_;
}
v_reusejp_6069_:
{
return v___x_6070_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___boxed(lean_object* v_x_6082_, lean_object* v_isExporting_6083_, lean_object* v___y_6084_, lean_object* v___y_6085_, lean_object* v___y_6086_, lean_object* v___y_6087_, lean_object* v___y_6088_){
_start:
{
uint8_t v_isExporting_boxed_6089_; lean_object* v_res_6090_; 
v_isExporting_boxed_6089_ = lean_unbox(v_isExporting_6083_);
v_res_6090_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(v_x_6082_, v_isExporting_boxed_6089_, v___y_6084_, v___y_6085_, v___y_6086_, v___y_6087_);
lean_dec(v___y_6087_);
lean_dec_ref(v___y_6086_);
lean_dec(v___y_6085_);
lean_dec_ref(v___y_6084_);
return v_res_6090_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(lean_object* v_x_6091_, uint8_t v_when_6092_, lean_object* v___y_6093_, lean_object* v___y_6094_, lean_object* v___y_6095_, lean_object* v___y_6096_){
_start:
{
if (v_when_6092_ == 0)
{
lean_object* v___x_6098_; 
lean_inc(v___y_6096_);
lean_inc_ref(v___y_6095_);
lean_inc(v___y_6094_);
lean_inc_ref(v___y_6093_);
v___x_6098_ = lean_apply_5(v_x_6091_, v___y_6093_, v___y_6094_, v___y_6095_, v___y_6096_, lean_box(0));
return v___x_6098_;
}
else
{
uint8_t v___x_6099_; lean_object* v___x_6100_; 
v___x_6099_ = 0;
v___x_6100_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(v_x_6091_, v___x_6099_, v___y_6093_, v___y_6094_, v___y_6095_, v___y_6096_);
return v___x_6100_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg___boxed(lean_object* v_x_6101_, lean_object* v_when_6102_, lean_object* v___y_6103_, lean_object* v___y_6104_, lean_object* v___y_6105_, lean_object* v___y_6106_, lean_object* v___y_6107_){
_start:
{
uint8_t v_when_boxed_6108_; lean_object* v_res_6109_; 
v_when_boxed_6108_ = lean_unbox(v_when_6102_);
v_res_6109_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(v_x_6101_, v_when_boxed_6108_, v___y_6103_, v___y_6104_, v___y_6105_, v___y_6106_);
lean_dec(v___y_6106_);
lean_dec_ref(v___y_6105_);
lean_dec(v___y_6104_);
lean_dec_ref(v___y_6103_);
return v_res_6109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals(lean_object* v_funNames_6110_, lean_object* v_argsPacker_6111_, lean_object* v_decrTactics_6112_, lean_object* v_value_6113_, lean_object* v_a_6114_, lean_object* v_a_6115_, lean_object* v_a_6116_, lean_object* v_a_6117_){
_start:
{
lean_object* v___f_6119_; uint8_t v___x_6120_; lean_object* v___x_6121_; 
v___f_6119_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed), 9, 4);
lean_closure_set(v___f_6119_, 0, v_value_6113_);
lean_closure_set(v___f_6119_, 1, v_decrTactics_6112_);
lean_closure_set(v___f_6119_, 2, v_argsPacker_6111_);
lean_closure_set(v___f_6119_, 3, v_funNames_6110_);
v___x_6120_ = 1;
v___x_6121_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(v___f_6119_, v___x_6120_, v_a_6114_, v_a_6115_, v_a_6116_, v_a_6117_);
return v___x_6121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___boxed(lean_object* v_funNames_6122_, lean_object* v_argsPacker_6123_, lean_object* v_decrTactics_6124_, lean_object* v_value_6125_, lean_object* v_a_6126_, lean_object* v_a_6127_, lean_object* v_a_6128_, lean_object* v_a_6129_, lean_object* v_a_6130_){
_start:
{
lean_object* v_res_6131_; 
v_res_6131_ = l_Lean_Elab_WF_solveDecreasingGoals(v_funNames_6122_, v_argsPacker_6123_, v_decrTactics_6124_, v_value_6125_, v_a_6126_, v_a_6127_, v_a_6128_, v_a_6129_);
lean_dec(v_a_6129_);
lean_dec_ref(v_a_6128_);
lean_dec(v_a_6127_);
lean_dec_ref(v_a_6126_);
return v_res_6131_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1(lean_object* v_00_u03b1_6132_, lean_object* v_msg_6133_, lean_object* v___y_6134_, lean_object* v___y_6135_, lean_object* v___y_6136_, lean_object* v___y_6137_, lean_object* v___y_6138_, lean_object* v___y_6139_){
_start:
{
lean_object* v___x_6141_; 
v___x_6141_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(v_msg_6133_, v___y_6134_, v___y_6135_, v___y_6136_, v___y_6137_, v___y_6138_, v___y_6139_);
return v___x_6141_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___boxed(lean_object* v_00_u03b1_6142_, lean_object* v_msg_6143_, lean_object* v___y_6144_, lean_object* v___y_6145_, lean_object* v___y_6146_, lean_object* v___y_6147_, lean_object* v___y_6148_, lean_object* v___y_6149_, lean_object* v___y_6150_){
_start:
{
lean_object* v_res_6151_; 
v_res_6151_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1(v_00_u03b1_6142_, v_msg_6143_, v___y_6144_, v___y_6145_, v___y_6146_, v___y_6147_, v___y_6148_, v___y_6149_);
lean_dec(v___y_6149_);
lean_dec_ref(v___y_6148_);
lean_dec(v___y_6147_);
lean_dec_ref(v___y_6146_);
lean_dec(v___y_6145_);
lean_dec_ref(v___y_6144_);
return v_res_6151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4(lean_object* v___y_6152_, lean_object* v___y_6153_, lean_object* v___y_6154_, lean_object* v___y_6155_, lean_object* v___y_6156_, lean_object* v___y_6157_, lean_object* v___y_6158_, lean_object* v___y_6159_){
_start:
{
lean_object* v___x_6161_; 
v___x_6161_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(v___y_6159_);
return v___x_6161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___boxed(lean_object* v___y_6162_, lean_object* v___y_6163_, lean_object* v___y_6164_, lean_object* v___y_6165_, lean_object* v___y_6166_, lean_object* v___y_6167_, lean_object* v___y_6168_, lean_object* v___y_6169_, lean_object* v___y_6170_){
_start:
{
lean_object* v_res_6171_; 
v_res_6171_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4(v___y_6162_, v___y_6163_, v___y_6164_, v___y_6165_, v___y_6166_, v___y_6167_, v___y_6168_, v___y_6169_);
lean_dec(v___y_6169_);
lean_dec_ref(v___y_6168_);
lean_dec(v___y_6167_);
lean_dec_ref(v___y_6166_);
lean_dec(v___y_6165_);
lean_dec_ref(v___y_6164_);
lean_dec(v___y_6163_);
lean_dec_ref(v___y_6162_);
return v_res_6171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3(lean_object* v_00_u03b1_6172_, lean_object* v_x_6173_, lean_object* v_mkInfoTree_6174_, lean_object* v___y_6175_, lean_object* v___y_6176_, lean_object* v___y_6177_, lean_object* v___y_6178_, lean_object* v___y_6179_, lean_object* v___y_6180_, lean_object* v___y_6181_, lean_object* v___y_6182_){
_start:
{
lean_object* v___x_6184_; 
v___x_6184_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(v_x_6173_, v_mkInfoTree_6174_, v___y_6175_, v___y_6176_, v___y_6177_, v___y_6178_, v___y_6179_, v___y_6180_, v___y_6181_, v___y_6182_);
return v___x_6184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___boxed(lean_object* v_00_u03b1_6185_, lean_object* v_x_6186_, lean_object* v_mkInfoTree_6187_, lean_object* v___y_6188_, lean_object* v___y_6189_, lean_object* v___y_6190_, lean_object* v___y_6191_, lean_object* v___y_6192_, lean_object* v___y_6193_, lean_object* v___y_6194_, lean_object* v___y_6195_, lean_object* v___y_6196_){
_start:
{
lean_object* v_res_6197_; 
v_res_6197_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3(v_00_u03b1_6185_, v_x_6186_, v_mkInfoTree_6187_, v___y_6188_, v___y_6189_, v___y_6190_, v___y_6191_, v___y_6192_, v___y_6193_, v___y_6194_, v___y_6195_);
lean_dec(v___y_6195_);
lean_dec_ref(v___y_6194_);
lean_dec(v___y_6193_);
lean_dec_ref(v___y_6192_);
lean_dec(v___y_6191_);
lean_dec_ref(v___y_6190_);
lean_dec(v___y_6189_);
lean_dec_ref(v___y_6188_);
return v_res_6197_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5(lean_object* v_as_6198_, size_t v_i_6199_, size_t v_stop_6200_, lean_object* v_b_6201_, lean_object* v___y_6202_, lean_object* v___y_6203_, lean_object* v___y_6204_, lean_object* v___y_6205_, lean_object* v___y_6206_, lean_object* v___y_6207_){
_start:
{
lean_object* v___x_6209_; 
v___x_6209_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v_as_6198_, v_i_6199_, v_stop_6200_, v_b_6201_, v___y_6204_, v___y_6205_, v___y_6206_, v___y_6207_);
return v___x_6209_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___boxed(lean_object* v_as_6210_, lean_object* v_i_6211_, lean_object* v_stop_6212_, lean_object* v_b_6213_, lean_object* v___y_6214_, lean_object* v___y_6215_, lean_object* v___y_6216_, lean_object* v___y_6217_, lean_object* v___y_6218_, lean_object* v___y_6219_, lean_object* v___y_6220_){
_start:
{
size_t v_i_boxed_6221_; size_t v_stop_boxed_6222_; lean_object* v_res_6223_; 
v_i_boxed_6221_ = lean_unbox_usize(v_i_6211_);
lean_dec(v_i_6211_);
v_stop_boxed_6222_ = lean_unbox_usize(v_stop_6212_);
lean_dec(v_stop_6212_);
v_res_6223_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5(v_as_6210_, v_i_boxed_6221_, v_stop_boxed_6222_, v_b_6213_, v___y_6214_, v___y_6215_, v___y_6216_, v___y_6217_, v___y_6218_, v___y_6219_);
lean_dec(v___y_6219_);
lean_dec_ref(v___y_6218_);
lean_dec(v___y_6217_);
lean_dec_ref(v___y_6216_);
lean_dec(v___y_6215_);
lean_dec_ref(v___y_6214_);
lean_dec_ref(v_as_6210_);
return v_res_6223_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8(lean_object* v_00_u03b1_6224_, lean_object* v_x_6225_, uint8_t v_when_6226_, lean_object* v___y_6227_, lean_object* v___y_6228_, lean_object* v___y_6229_, lean_object* v___y_6230_){
_start:
{
lean_object* v___x_6232_; 
v___x_6232_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(v_x_6225_, v_when_6226_, v___y_6227_, v___y_6228_, v___y_6229_, v___y_6230_);
return v___x_6232_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___boxed(lean_object* v_00_u03b1_6233_, lean_object* v_x_6234_, lean_object* v_when_6235_, lean_object* v___y_6236_, lean_object* v___y_6237_, lean_object* v___y_6238_, lean_object* v___y_6239_, lean_object* v___y_6240_){
_start:
{
uint8_t v_when_boxed_6241_; lean_object* v_res_6242_; 
v_when_boxed_6241_ = lean_unbox(v_when_6235_);
v_res_6242_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8(v_00_u03b1_6233_, v_x_6234_, v_when_boxed_6241_, v___y_6236_, v___y_6237_, v___y_6238_, v___y_6239_);
lean_dec(v___y_6239_);
lean_dec_ref(v___y_6238_);
lean_dec(v___y_6237_);
lean_dec_ref(v___y_6236_);
return v_res_6242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(lean_object* v_msgData_6243_, lean_object* v_macroStack_6244_, lean_object* v___y_6245_, lean_object* v___y_6246_, lean_object* v___y_6247_, lean_object* v___y_6248_, lean_object* v___y_6249_, lean_object* v___y_6250_){
_start:
{
lean_object* v___x_6252_; 
v___x_6252_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(v_msgData_6243_, v_macroStack_6244_, v___y_6249_);
return v___x_6252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___boxed(lean_object* v_msgData_6253_, lean_object* v_macroStack_6254_, lean_object* v___y_6255_, lean_object* v___y_6256_, lean_object* v___y_6257_, lean_object* v___y_6258_, lean_object* v___y_6259_, lean_object* v___y_6260_, lean_object* v___y_6261_){
_start:
{
lean_object* v_res_6262_; 
v_res_6262_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(v_msgData_6253_, v_macroStack_6254_, v___y_6255_, v___y_6256_, v___y_6257_, v___y_6258_, v___y_6259_, v___y_6260_);
lean_dec(v___y_6260_);
lean_dec_ref(v___y_6259_);
lean_dec(v___y_6258_);
lean_dec_ref(v___y_6257_);
lean_dec(v___y_6256_);
lean_dec_ref(v___y_6255_);
return v_res_6262_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10(lean_object* v_00_u03b1_6263_, lean_object* v_x_6264_, uint8_t v_isExporting_6265_, lean_object* v___y_6266_, lean_object* v___y_6267_, lean_object* v___y_6268_, lean_object* v___y_6269_){
_start:
{
lean_object* v___x_6271_; 
v___x_6271_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(v_x_6264_, v_isExporting_6265_, v___y_6266_, v___y_6267_, v___y_6268_, v___y_6269_);
return v___x_6271_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___boxed(lean_object* v_00_u03b1_6272_, lean_object* v_x_6273_, lean_object* v_isExporting_6274_, lean_object* v___y_6275_, lean_object* v___y_6276_, lean_object* v___y_6277_, lean_object* v___y_6278_, lean_object* v___y_6279_){
_start:
{
uint8_t v_isExporting_boxed_6280_; lean_object* v_res_6281_; 
v_isExporting_boxed_6280_ = lean_unbox(v_isExporting_6274_);
v_res_6281_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10(v_00_u03b1_6272_, v_x_6273_, v_isExporting_boxed_6280_, v___y_6275_, v___y_6276_, v___y_6277_, v___y_6278_);
lean_dec(v___y_6278_);
lean_dec_ref(v___y_6277_);
lean_dec(v___y_6276_);
lean_dec_ref(v___y_6275_);
return v_res_6281_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12_spec__13(lean_object* v_00_u03b2_6282_){
_start:
{
lean_object* v___x_6283_; 
v___x_6283_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2);
return v___x_6283_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12___redArg(){
_start:
{
lean_object* v___x_6285_; 
v___x_6285_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2);
return v___x_6285_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12___redArg___boxed(lean_object* v___dummy_6286_){
_start:
{
lean_object* v_res_6287_; 
v_res_6287_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12___redArg();
return v_res_6287_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10_spec__12(lean_object* v_00_u03b2_6288_){
_start:
{
lean_object* v___x_6289_; 
v___x_6289_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2);
return v___x_6289_;
}
}
static lean_object* _init_l_Lean_Elab_WF_isNatLtWF___closed__4(void){
_start:
{
lean_object* v___x_6296_; lean_object* v___x_6297_; lean_object* v___x_6298_; 
v___x_6296_ = lean_box(0);
v___x_6297_ = ((lean_object*)(l_Lean_Elab_WF_isNatLtWF___closed__3));
v___x_6298_ = l_Lean_mkConst(v___x_6297_, v___x_6296_);
return v___x_6298_;
}
}
static lean_object* _init_l_Lean_Elab_WF_isNatLtWF___closed__7(void){
_start:
{
lean_object* v___x_6303_; lean_object* v___x_6304_; lean_object* v___x_6305_; 
v___x_6303_ = lean_box(0);
v___x_6304_ = ((lean_object*)(l_Lean_Elab_WF_isNatLtWF___closed__6));
v___x_6305_ = l_Lean_mkConst(v___x_6304_, v___x_6303_);
return v___x_6305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF(lean_object* v_wfRel_6306_, lean_object* v_a_6307_, lean_object* v_a_6308_, lean_object* v_a_6309_, lean_object* v_a_6310_){
_start:
{
lean_object* v___x_6315_; 
v___x_6315_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_wfRel_6306_, v_a_6308_);
if (lean_obj_tag(v___x_6315_) == 0)
{
lean_object* v_a_6316_; lean_object* v___x_6317_; uint8_t v___x_6318_; 
v_a_6316_ = lean_ctor_get(v___x_6315_, 0);
lean_inc(v_a_6316_);
lean_dec_ref_known(v___x_6315_, 1);
v___x_6317_ = l_Lean_Expr_cleanupAnnotations(v_a_6316_);
lean_dec(v_a_6316_);
v___x_6318_ = l_Lean_Expr_isApp(v___x_6317_);
if (v___x_6318_ == 0)
{
lean_dec_ref(v___x_6317_);
goto v___jp_6312_;
}
else
{
lean_object* v___x_6319_; uint8_t v___x_6320_; 
v___x_6319_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6317_);
v___x_6320_ = l_Lean_Expr_isApp(v___x_6319_);
if (v___x_6320_ == 0)
{
lean_dec_ref(v___x_6319_);
lean_dec_ref(v___x_6317_);
goto v___jp_6312_;
}
else
{
lean_object* v___x_6321_; uint8_t v___x_6322_; 
v___x_6321_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6319_);
v___x_6322_ = l_Lean_Expr_isApp(v___x_6321_);
if (v___x_6322_ == 0)
{
lean_dec_ref(v___x_6321_);
lean_dec_ref(v___x_6319_);
lean_dec_ref(v___x_6317_);
goto v___jp_6312_;
}
else
{
lean_object* v___x_6323_; uint8_t v___x_6324_; 
v___x_6323_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6321_);
v___x_6324_ = l_Lean_Expr_isApp(v___x_6323_);
if (v___x_6324_ == 0)
{
lean_dec_ref(v___x_6323_);
lean_dec_ref(v___x_6321_);
lean_dec_ref(v___x_6319_);
lean_dec_ref(v___x_6317_);
goto v___jp_6312_;
}
else
{
lean_object* v___x_6325_; lean_object* v___x_6326_; uint8_t v___x_6327_; 
v___x_6325_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6323_);
lean_dec_ref(v___x_6323_);
v___x_6326_ = ((lean_object*)(l_Lean_Elab_WF_isNatLtWF___closed__1));
v___x_6327_ = l_Lean_Expr_isConstOf(v___x_6325_, v___x_6326_);
lean_dec_ref(v___x_6325_);
if (v___x_6327_ == 0)
{
lean_dec_ref(v___x_6321_);
lean_dec_ref(v___x_6319_);
lean_dec_ref(v___x_6317_);
goto v___jp_6312_;
}
else
{
lean_object* v_arg_6328_; lean_object* v_arg_6329_; lean_object* v_arg_6330_; lean_object* v___x_6331_; lean_object* v___x_6332_; 
v_arg_6328_ = lean_ctor_get(v___x_6317_, 1);
lean_inc_ref(v_arg_6328_);
lean_dec_ref(v___x_6317_);
v_arg_6329_ = lean_ctor_get(v___x_6319_, 1);
lean_inc_ref(v_arg_6329_);
lean_dec_ref(v___x_6319_);
v_arg_6330_ = lean_ctor_get(v___x_6321_, 1);
lean_inc_ref(v_arg_6330_);
lean_dec_ref(v___x_6321_);
v___x_6331_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__4, &l_Lean_Elab_WF_isNatLtWF___closed__4_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__4);
v___x_6332_ = l_Lean_Meta_isExprDefEq(v_arg_6330_, v___x_6331_, v_a_6307_, v_a_6308_, v_a_6309_, v_a_6310_);
if (lean_obj_tag(v___x_6332_) == 0)
{
lean_object* v_a_6333_; lean_object* v___x_6335_; uint8_t v_isShared_6336_; uint8_t v_isSharedCheck_6366_; 
v_a_6333_ = lean_ctor_get(v___x_6332_, 0);
v_isSharedCheck_6366_ = !lean_is_exclusive(v___x_6332_);
if (v_isSharedCheck_6366_ == 0)
{
v___x_6335_ = v___x_6332_;
v_isShared_6336_ = v_isSharedCheck_6366_;
goto v_resetjp_6334_;
}
else
{
lean_inc(v_a_6333_);
lean_dec(v___x_6332_);
v___x_6335_ = lean_box(0);
v_isShared_6336_ = v_isSharedCheck_6366_;
goto v_resetjp_6334_;
}
v_resetjp_6334_:
{
uint8_t v___x_6337_; 
v___x_6337_ = lean_unbox(v_a_6333_);
lean_dec(v_a_6333_);
if (v___x_6337_ == 0)
{
lean_object* v___x_6338_; lean_object* v___x_6340_; 
lean_dec_ref(v_arg_6329_);
lean_dec_ref(v_arg_6328_);
v___x_6338_ = lean_box(0);
if (v_isShared_6336_ == 0)
{
lean_ctor_set(v___x_6335_, 0, v___x_6338_);
v___x_6340_ = v___x_6335_;
goto v_reusejp_6339_;
}
else
{
lean_object* v_reuseFailAlloc_6341_; 
v_reuseFailAlloc_6341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6341_, 0, v___x_6338_);
v___x_6340_ = v_reuseFailAlloc_6341_;
goto v_reusejp_6339_;
}
v_reusejp_6339_:
{
return v___x_6340_;
}
}
else
{
lean_object* v___x_6342_; lean_object* v___x_6343_; 
lean_del_object(v___x_6335_);
v___x_6342_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__7, &l_Lean_Elab_WF_isNatLtWF___closed__7_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__7);
v___x_6343_ = l_Lean_Meta_isExprDefEq(v_arg_6328_, v___x_6342_, v_a_6307_, v_a_6308_, v_a_6309_, v_a_6310_);
if (lean_obj_tag(v___x_6343_) == 0)
{
lean_object* v_a_6344_; lean_object* v___x_6346_; uint8_t v_isShared_6347_; uint8_t v_isSharedCheck_6357_; 
v_a_6344_ = lean_ctor_get(v___x_6343_, 0);
v_isSharedCheck_6357_ = !lean_is_exclusive(v___x_6343_);
if (v_isSharedCheck_6357_ == 0)
{
v___x_6346_ = v___x_6343_;
v_isShared_6347_ = v_isSharedCheck_6357_;
goto v_resetjp_6345_;
}
else
{
lean_inc(v_a_6344_);
lean_dec(v___x_6343_);
v___x_6346_ = lean_box(0);
v_isShared_6347_ = v_isSharedCheck_6357_;
goto v_resetjp_6345_;
}
v_resetjp_6345_:
{
uint8_t v___x_6348_; 
v___x_6348_ = lean_unbox(v_a_6344_);
lean_dec(v_a_6344_);
if (v___x_6348_ == 0)
{
lean_object* v___x_6349_; lean_object* v___x_6351_; 
lean_dec_ref(v_arg_6329_);
v___x_6349_ = lean_box(0);
if (v_isShared_6347_ == 0)
{
lean_ctor_set(v___x_6346_, 0, v___x_6349_);
v___x_6351_ = v___x_6346_;
goto v_reusejp_6350_;
}
else
{
lean_object* v_reuseFailAlloc_6352_; 
v_reuseFailAlloc_6352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6352_, 0, v___x_6349_);
v___x_6351_ = v_reuseFailAlloc_6352_;
goto v_reusejp_6350_;
}
v_reusejp_6350_:
{
return v___x_6351_;
}
}
else
{
lean_object* v___x_6353_; lean_object* v___x_6355_; 
v___x_6353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6353_, 0, v_arg_6329_);
if (v_isShared_6347_ == 0)
{
lean_ctor_set(v___x_6346_, 0, v___x_6353_);
v___x_6355_ = v___x_6346_;
goto v_reusejp_6354_;
}
else
{
lean_object* v_reuseFailAlloc_6356_; 
v_reuseFailAlloc_6356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6356_, 0, v___x_6353_);
v___x_6355_ = v_reuseFailAlloc_6356_;
goto v_reusejp_6354_;
}
v_reusejp_6354_:
{
return v___x_6355_;
}
}
}
}
else
{
lean_object* v_a_6358_; lean_object* v___x_6360_; uint8_t v_isShared_6361_; uint8_t v_isSharedCheck_6365_; 
lean_dec_ref(v_arg_6329_);
v_a_6358_ = lean_ctor_get(v___x_6343_, 0);
v_isSharedCheck_6365_ = !lean_is_exclusive(v___x_6343_);
if (v_isSharedCheck_6365_ == 0)
{
v___x_6360_ = v___x_6343_;
v_isShared_6361_ = v_isSharedCheck_6365_;
goto v_resetjp_6359_;
}
else
{
lean_inc(v_a_6358_);
lean_dec(v___x_6343_);
v___x_6360_ = lean_box(0);
v_isShared_6361_ = v_isSharedCheck_6365_;
goto v_resetjp_6359_;
}
v_resetjp_6359_:
{
lean_object* v___x_6363_; 
if (v_isShared_6361_ == 0)
{
v___x_6363_ = v___x_6360_;
goto v_reusejp_6362_;
}
else
{
lean_object* v_reuseFailAlloc_6364_; 
v_reuseFailAlloc_6364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6364_, 0, v_a_6358_);
v___x_6363_ = v_reuseFailAlloc_6364_;
goto v_reusejp_6362_;
}
v_reusejp_6362_:
{
return v___x_6363_;
}
}
}
}
}
}
else
{
lean_object* v_a_6367_; lean_object* v___x_6369_; uint8_t v_isShared_6370_; uint8_t v_isSharedCheck_6374_; 
lean_dec_ref(v_arg_6329_);
lean_dec_ref(v_arg_6328_);
v_a_6367_ = lean_ctor_get(v___x_6332_, 0);
v_isSharedCheck_6374_ = !lean_is_exclusive(v___x_6332_);
if (v_isSharedCheck_6374_ == 0)
{
v___x_6369_ = v___x_6332_;
v_isShared_6370_ = v_isSharedCheck_6374_;
goto v_resetjp_6368_;
}
else
{
lean_inc(v_a_6367_);
lean_dec(v___x_6332_);
v___x_6369_ = lean_box(0);
v_isShared_6370_ = v_isSharedCheck_6374_;
goto v_resetjp_6368_;
}
v_resetjp_6368_:
{
lean_object* v___x_6372_; 
if (v_isShared_6370_ == 0)
{
v___x_6372_ = v___x_6369_;
goto v_reusejp_6371_;
}
else
{
lean_object* v_reuseFailAlloc_6373_; 
v_reuseFailAlloc_6373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6373_, 0, v_a_6367_);
v___x_6372_ = v_reuseFailAlloc_6373_;
goto v_reusejp_6371_;
}
v_reusejp_6371_:
{
return v___x_6372_;
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
lean_object* v_a_6375_; lean_object* v___x_6377_; uint8_t v_isShared_6378_; uint8_t v_isSharedCheck_6382_; 
v_a_6375_ = lean_ctor_get(v___x_6315_, 0);
v_isSharedCheck_6382_ = !lean_is_exclusive(v___x_6315_);
if (v_isSharedCheck_6382_ == 0)
{
v___x_6377_ = v___x_6315_;
v_isShared_6378_ = v_isSharedCheck_6382_;
goto v_resetjp_6376_;
}
else
{
lean_inc(v_a_6375_);
lean_dec(v___x_6315_);
v___x_6377_ = lean_box(0);
v_isShared_6378_ = v_isSharedCheck_6382_;
goto v_resetjp_6376_;
}
v_resetjp_6376_:
{
lean_object* v___x_6380_; 
if (v_isShared_6378_ == 0)
{
v___x_6380_ = v___x_6377_;
goto v_reusejp_6379_;
}
else
{
lean_object* v_reuseFailAlloc_6381_; 
v_reuseFailAlloc_6381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6381_, 0, v_a_6375_);
v___x_6380_ = v_reuseFailAlloc_6381_;
goto v_reusejp_6379_;
}
v_reusejp_6379_:
{
return v___x_6380_;
}
}
}
v___jp_6312_:
{
lean_object* v___x_6313_; lean_object* v___x_6314_; 
v___x_6313_ = lean_box(0);
v___x_6314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6314_, 0, v___x_6313_);
return v___x_6314_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF___boxed(lean_object* v_wfRel_6383_, lean_object* v_a_6384_, lean_object* v_a_6385_, lean_object* v_a_6386_, lean_object* v_a_6387_, lean_object* v_a_6388_){
_start:
{
lean_object* v_res_6389_; 
v_res_6389_ = l_Lean_Elab_WF_isNatLtWF(v_wfRel_6383_, v_a_6384_, v_a_6385_, v_a_6386_, v_a_6387_);
lean_dec(v_a_6387_);
lean_dec_ref(v_a_6386_);
lean_dec(v_a_6385_);
lean_dec_ref(v_a_6384_);
return v_res_6389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(lean_object* v_type_6390_, lean_object* v_maxFVars_x3f_6391_, lean_object* v_k_6392_, uint8_t v_cleanupAnnotations_6393_, uint8_t v_whnfType_6394_, lean_object* v___y_6395_, lean_object* v___y_6396_, lean_object* v___y_6397_, lean_object* v___y_6398_, lean_object* v___y_6399_, lean_object* v___y_6400_){
_start:
{
lean_object* v___f_6402_; lean_object* v___x_6403_; 
lean_inc(v___y_6396_);
lean_inc_ref(v___y_6395_);
v___f_6402_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_6402_, 0, v_k_6392_);
lean_closure_set(v___f_6402_, 1, v___y_6395_);
lean_closure_set(v___f_6402_, 2, v___y_6396_);
v___x_6403_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_6390_, v_maxFVars_x3f_6391_, v___f_6402_, v_cleanupAnnotations_6393_, v_whnfType_6394_, v___y_6397_, v___y_6398_, v___y_6399_, v___y_6400_);
if (lean_obj_tag(v___x_6403_) == 0)
{
return v___x_6403_;
}
else
{
lean_object* v_a_6404_; lean_object* v___x_6406_; uint8_t v_isShared_6407_; uint8_t v_isSharedCheck_6411_; 
v_a_6404_ = lean_ctor_get(v___x_6403_, 0);
v_isSharedCheck_6411_ = !lean_is_exclusive(v___x_6403_);
if (v_isSharedCheck_6411_ == 0)
{
v___x_6406_ = v___x_6403_;
v_isShared_6407_ = v_isSharedCheck_6411_;
goto v_resetjp_6405_;
}
else
{
lean_inc(v_a_6404_);
lean_dec(v___x_6403_);
v___x_6406_ = lean_box(0);
v_isShared_6407_ = v_isSharedCheck_6411_;
goto v_resetjp_6405_;
}
v_resetjp_6405_:
{
lean_object* v___x_6409_; 
if (v_isShared_6407_ == 0)
{
v___x_6409_ = v___x_6406_;
goto v_reusejp_6408_;
}
else
{
lean_object* v_reuseFailAlloc_6410_; 
v_reuseFailAlloc_6410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6410_, 0, v_a_6404_);
v___x_6409_ = v_reuseFailAlloc_6410_;
goto v_reusejp_6408_;
}
v_reusejp_6408_:
{
return v___x_6409_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg___boxed(lean_object* v_type_6412_, lean_object* v_maxFVars_x3f_6413_, lean_object* v_k_6414_, lean_object* v_cleanupAnnotations_6415_, lean_object* v_whnfType_6416_, lean_object* v___y_6417_, lean_object* v___y_6418_, lean_object* v___y_6419_, lean_object* v___y_6420_, lean_object* v___y_6421_, lean_object* v___y_6422_, lean_object* v___y_6423_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_6424_; uint8_t v_whnfType_boxed_6425_; lean_object* v_res_6426_; 
v_cleanupAnnotations_boxed_6424_ = lean_unbox(v_cleanupAnnotations_6415_);
v_whnfType_boxed_6425_ = lean_unbox(v_whnfType_6416_);
v_res_6426_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v_type_6412_, v_maxFVars_x3f_6413_, v_k_6414_, v_cleanupAnnotations_boxed_6424_, v_whnfType_boxed_6425_, v___y_6417_, v___y_6418_, v___y_6419_, v___y_6420_, v___y_6421_, v___y_6422_);
lean_dec(v___y_6422_);
lean_dec_ref(v___y_6421_);
lean_dec(v___y_6420_);
lean_dec_ref(v___y_6419_);
lean_dec(v___y_6418_);
lean_dec_ref(v___y_6417_);
return v_res_6426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0(lean_object* v_00_u03b1_6427_, lean_object* v_type_6428_, lean_object* v_maxFVars_x3f_6429_, lean_object* v_k_6430_, uint8_t v_cleanupAnnotations_6431_, uint8_t v_whnfType_6432_, lean_object* v___y_6433_, lean_object* v___y_6434_, lean_object* v___y_6435_, lean_object* v___y_6436_, lean_object* v___y_6437_, lean_object* v___y_6438_){
_start:
{
lean_object* v___x_6440_; 
v___x_6440_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v_type_6428_, v_maxFVars_x3f_6429_, v_k_6430_, v_cleanupAnnotations_6431_, v_whnfType_6432_, v___y_6433_, v___y_6434_, v___y_6435_, v___y_6436_, v___y_6437_, v___y_6438_);
return v___x_6440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___boxed(lean_object* v_00_u03b1_6441_, lean_object* v_type_6442_, lean_object* v_maxFVars_x3f_6443_, lean_object* v_k_6444_, lean_object* v_cleanupAnnotations_6445_, lean_object* v_whnfType_6446_, lean_object* v___y_6447_, lean_object* v___y_6448_, lean_object* v___y_6449_, lean_object* v___y_6450_, lean_object* v___y_6451_, lean_object* v___y_6452_, lean_object* v___y_6453_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_6454_; uint8_t v_whnfType_boxed_6455_; lean_object* v_res_6456_; 
v_cleanupAnnotations_boxed_6454_ = lean_unbox(v_cleanupAnnotations_6445_);
v_whnfType_boxed_6455_ = lean_unbox(v_whnfType_6446_);
v_res_6456_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0(v_00_u03b1_6441_, v_type_6442_, v_maxFVars_x3f_6443_, v_k_6444_, v_cleanupAnnotations_boxed_6454_, v_whnfType_boxed_6455_, v___y_6447_, v___y_6448_, v___y_6449_, v___y_6450_, v___y_6451_, v___y_6452_);
lean_dec(v___y_6452_);
lean_dec_ref(v___y_6451_);
lean_dec(v___y_6450_);
lean_dec_ref(v___y_6449_);
lean_dec(v___y_6448_);
lean_dec_ref(v___y_6447_);
return v_res_6456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(lean_object* v_lctx_6457_, lean_object* v_x_6458_, lean_object* v___y_6459_, lean_object* v___y_6460_, lean_object* v___y_6461_, lean_object* v___y_6462_, lean_object* v___y_6463_, lean_object* v___y_6464_){
_start:
{
lean_object* v_keyedConfig_6466_; uint8_t v_trackZetaDelta_6467_; lean_object* v_zetaDeltaSet_6468_; lean_object* v_localInstances_6469_; lean_object* v_defEqCtx_x3f_6470_; lean_object* v_synthPendingDepth_6471_; lean_object* v_customCanUnfoldPredicate_x3f_6472_; uint8_t v_univApprox_6473_; uint8_t v_inTypeClassResolution_6474_; uint8_t v_cacheInferType_6475_; lean_object* v___x_6476_; lean_object* v___x_6477_; 
v_keyedConfig_6466_ = lean_ctor_get(v___y_6461_, 0);
v_trackZetaDelta_6467_ = lean_ctor_get_uint8(v___y_6461_, sizeof(void*)*7);
v_zetaDeltaSet_6468_ = lean_ctor_get(v___y_6461_, 1);
v_localInstances_6469_ = lean_ctor_get(v___y_6461_, 3);
v_defEqCtx_x3f_6470_ = lean_ctor_get(v___y_6461_, 4);
v_synthPendingDepth_6471_ = lean_ctor_get(v___y_6461_, 5);
v_customCanUnfoldPredicate_x3f_6472_ = lean_ctor_get(v___y_6461_, 6);
v_univApprox_6473_ = lean_ctor_get_uint8(v___y_6461_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_6474_ = lean_ctor_get_uint8(v___y_6461_, sizeof(void*)*7 + 2);
v_cacheInferType_6475_ = lean_ctor_get_uint8(v___y_6461_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_6472_);
lean_inc(v_synthPendingDepth_6471_);
lean_inc(v_defEqCtx_x3f_6470_);
lean_inc_ref(v_localInstances_6469_);
lean_inc(v_zetaDeltaSet_6468_);
lean_inc_ref(v_keyedConfig_6466_);
v___x_6476_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_6476_, 0, v_keyedConfig_6466_);
lean_ctor_set(v___x_6476_, 1, v_zetaDeltaSet_6468_);
lean_ctor_set(v___x_6476_, 2, v_lctx_6457_);
lean_ctor_set(v___x_6476_, 3, v_localInstances_6469_);
lean_ctor_set(v___x_6476_, 4, v_defEqCtx_x3f_6470_);
lean_ctor_set(v___x_6476_, 5, v_synthPendingDepth_6471_);
lean_ctor_set(v___x_6476_, 6, v_customCanUnfoldPredicate_x3f_6472_);
lean_ctor_set_uint8(v___x_6476_, sizeof(void*)*7, v_trackZetaDelta_6467_);
lean_ctor_set_uint8(v___x_6476_, sizeof(void*)*7 + 1, v_univApprox_6473_);
lean_ctor_set_uint8(v___x_6476_, sizeof(void*)*7 + 2, v_inTypeClassResolution_6474_);
lean_ctor_set_uint8(v___x_6476_, sizeof(void*)*7 + 3, v_cacheInferType_6475_);
lean_inc(v___y_6464_);
lean_inc_ref(v___y_6463_);
lean_inc(v___y_6462_);
lean_inc(v___y_6460_);
lean_inc_ref(v___y_6459_);
v___x_6477_ = lean_apply_7(v_x_6458_, v___y_6459_, v___y_6460_, v___x_6476_, v___y_6462_, v___y_6463_, v___y_6464_, lean_box(0));
if (lean_obj_tag(v___x_6477_) == 0)
{
lean_object* v_a_6478_; lean_object* v___x_6480_; uint8_t v_isShared_6481_; uint8_t v_isSharedCheck_6485_; 
v_a_6478_ = lean_ctor_get(v___x_6477_, 0);
v_isSharedCheck_6485_ = !lean_is_exclusive(v___x_6477_);
if (v_isSharedCheck_6485_ == 0)
{
v___x_6480_ = v___x_6477_;
v_isShared_6481_ = v_isSharedCheck_6485_;
goto v_resetjp_6479_;
}
else
{
lean_inc(v_a_6478_);
lean_dec(v___x_6477_);
v___x_6480_ = lean_box(0);
v_isShared_6481_ = v_isSharedCheck_6485_;
goto v_resetjp_6479_;
}
v_resetjp_6479_:
{
lean_object* v___x_6483_; 
if (v_isShared_6481_ == 0)
{
v___x_6483_ = v___x_6480_;
goto v_reusejp_6482_;
}
else
{
lean_object* v_reuseFailAlloc_6484_; 
v_reuseFailAlloc_6484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6484_, 0, v_a_6478_);
v___x_6483_ = v_reuseFailAlloc_6484_;
goto v_reusejp_6482_;
}
v_reusejp_6482_:
{
return v___x_6483_;
}
}
}
else
{
return v___x_6477_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg___boxed(lean_object* v_lctx_6486_, lean_object* v_x_6487_, lean_object* v___y_6488_, lean_object* v___y_6489_, lean_object* v___y_6490_, lean_object* v___y_6491_, lean_object* v___y_6492_, lean_object* v___y_6493_, lean_object* v___y_6494_){
_start:
{
lean_object* v_res_6495_; 
v_res_6495_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(v_lctx_6486_, v_x_6487_, v___y_6488_, v___y_6489_, v___y_6490_, v___y_6491_, v___y_6492_, v___y_6493_);
lean_dec(v___y_6493_);
lean_dec_ref(v___y_6492_);
lean_dec(v___y_6491_);
lean_dec_ref(v___y_6490_);
lean_dec(v___y_6489_);
lean_dec_ref(v___y_6488_);
return v_res_6495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1(lean_object* v_00_u03b1_6496_, lean_object* v_lctx_6497_, lean_object* v_x_6498_, lean_object* v___y_6499_, lean_object* v___y_6500_, lean_object* v___y_6501_, lean_object* v___y_6502_, lean_object* v___y_6503_, lean_object* v___y_6504_){
_start:
{
lean_object* v___x_6506_; 
v___x_6506_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(v_lctx_6497_, v_x_6498_, v___y_6499_, v___y_6500_, v___y_6501_, v___y_6502_, v___y_6503_, v___y_6504_);
return v___x_6506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___boxed(lean_object* v_00_u03b1_6507_, lean_object* v_lctx_6508_, lean_object* v_x_6509_, lean_object* v___y_6510_, lean_object* v___y_6511_, lean_object* v___y_6512_, lean_object* v___y_6513_, lean_object* v___y_6514_, lean_object* v___y_6515_, lean_object* v___y_6516_){
_start:
{
lean_object* v_res_6517_; 
v_res_6517_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1(v_00_u03b1_6507_, v_lctx_6508_, v_x_6509_, v___y_6510_, v___y_6511_, v___y_6512_, v___y_6513_, v___y_6514_, v___y_6515_);
lean_dec(v___y_6515_);
lean_dec_ref(v___y_6514_);
lean_dec(v___y_6513_);
lean_dec_ref(v___y_6512_);
lean_dec(v___y_6511_);
lean_dec_ref(v___y_6510_);
return v_res_6517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0(lean_object* v_prefixArgs_6518_, lean_object* v_declName_6519_, lean_object* v_x_6520_, lean_object* v_F_6521_, lean_object* v_val_6522_, lean_object* v___y_6523_, lean_object* v___y_6524_, lean_object* v___y_6525_, lean_object* v___y_6526_, lean_object* v___y_6527_, lean_object* v___y_6528_){
_start:
{
lean_object* v___x_6530_; lean_object* v___x_6531_; lean_object* v___x_6532_; 
v___x_6530_ = lean_array_get_size(v_prefixArgs_6518_);
v___x_6531_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___boxed), 11, 2);
lean_closure_set(v___x_6531_, 0, v_declName_6519_);
lean_closure_set(v___x_6531_, 1, v___x_6530_);
v___x_6532_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(v_x_6520_, v_F_6521_, v_val_6522_, v___x_6531_, v___y_6523_, v___y_6524_, v___y_6525_, v___y_6526_, v___y_6527_, v___y_6528_);
return v___x_6532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0___boxed(lean_object* v_prefixArgs_6533_, lean_object* v_declName_6534_, lean_object* v_x_6535_, lean_object* v_F_6536_, lean_object* v_val_6537_, lean_object* v___y_6538_, lean_object* v___y_6539_, lean_object* v___y_6540_, lean_object* v___y_6541_, lean_object* v___y_6542_, lean_object* v___y_6543_, lean_object* v___y_6544_){
_start:
{
lean_object* v_res_6545_; 
v_res_6545_ = l_Lean_Elab_WF_mkFix___lam__0(v_prefixArgs_6533_, v_declName_6534_, v_x_6535_, v_F_6536_, v_val_6537_, v___y_6538_, v___y_6539_, v___y_6540_, v___y_6541_, v___y_6542_, v___y_6543_);
lean_dec(v___y_6543_);
lean_dec_ref(v___y_6542_);
lean_dec(v___y_6541_);
lean_dec_ref(v___y_6540_);
lean_dec(v___y_6539_);
lean_dec_ref(v___y_6538_);
lean_dec_ref(v_prefixArgs_6533_);
return v_res_6545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1(lean_object* v___x_6562_, lean_object* v___x_6563_, lean_object* v_wfRel_6564_, lean_object* v_x_6565_, lean_object* v_type_6566_, lean_object* v___y_6567_, lean_object* v___y_6568_, lean_object* v___y_6569_, lean_object* v___y_6570_, lean_object* v___y_6571_, lean_object* v___y_6572_){
_start:
{
lean_object* v___x_6574_; lean_object* v___x_6575_; lean_object* v___x_6576_; lean_object* v___x_6577_; 
v___x_6574_ = lean_unsigned_to_nat(0u);
v___x_6575_ = lean_array_get_borrowed(v___x_6562_, v_x_6565_, v___x_6574_);
v___x_6576_ = l_Lean_Expr_fvarId_x21(v___x_6575_);
v___x_6577_ = l_Lean_FVarId_getUserName___redArg(v___x_6576_, v___y_6569_, v___y_6571_, v___y_6572_);
if (lean_obj_tag(v___x_6577_) == 0)
{
lean_object* v_a_6578_; lean_object* v___x_6579_; 
v_a_6578_ = lean_ctor_get(v___x_6577_, 0);
lean_inc(v_a_6578_);
lean_dec_ref_known(v___x_6577_, 1);
lean_inc(v___y_6572_);
lean_inc_ref(v___y_6571_);
lean_inc(v___y_6570_);
lean_inc_ref(v___y_6569_);
lean_inc(v___x_6575_);
v___x_6579_ = lean_infer_type(v___x_6575_, v___y_6569_, v___y_6570_, v___y_6571_, v___y_6572_);
if (lean_obj_tag(v___x_6579_) == 0)
{
lean_object* v_a_6580_; lean_object* v___x_6581_; 
v_a_6580_ = lean_ctor_get(v___x_6579_, 0);
lean_inc_n(v_a_6580_, 2);
lean_dec_ref_known(v___x_6579_, 1);
v___x_6581_ = l_Lean_Meta_getLevel(v_a_6580_, v___y_6569_, v___y_6570_, v___y_6571_, v___y_6572_);
if (lean_obj_tag(v___x_6581_) == 0)
{
lean_object* v_a_6582_; lean_object* v___x_6583_; 
v_a_6582_ = lean_ctor_get(v___x_6581_, 0);
lean_inc(v_a_6582_);
lean_dec_ref_known(v___x_6581_, 1);
lean_inc_ref(v_type_6566_);
v___x_6583_ = l_Lean_Meta_getLevel(v_type_6566_, v___y_6569_, v___y_6570_, v___y_6571_, v___y_6572_);
if (lean_obj_tag(v___x_6583_) == 0)
{
lean_object* v_a_6584_; lean_object* v___x_6585_; lean_object* v___x_6586_; uint8_t v___x_6587_; uint8_t v___x_6588_; uint8_t v___x_6589_; lean_object* v___x_6590_; 
v_a_6584_ = lean_ctor_get(v___x_6583_, 0);
lean_inc(v_a_6584_);
lean_dec_ref_known(v___x_6583_, 1);
v___x_6585_ = lean_mk_empty_array_with_capacity(v___x_6563_);
lean_inc(v___x_6575_);
lean_inc_ref(v___x_6585_);
v___x_6586_ = lean_array_push(v___x_6585_, v___x_6575_);
v___x_6587_ = 0;
v___x_6588_ = 1;
v___x_6589_ = 1;
v___x_6590_ = l_Lean_Meta_mkLambdaFVars(v___x_6586_, v_type_6566_, v___x_6587_, v___x_6588_, v___x_6587_, v___x_6588_, v___x_6589_, v___y_6569_, v___y_6570_, v___y_6571_, v___y_6572_);
lean_dec_ref(v___x_6586_);
if (lean_obj_tag(v___x_6590_) == 0)
{
lean_object* v_a_6591_; lean_object* v___x_6592_; 
v_a_6591_ = lean_ctor_get(v___x_6590_, 0);
lean_inc(v_a_6591_);
lean_dec_ref_known(v___x_6590_, 1);
lean_inc_ref(v_wfRel_6564_);
v___x_6592_ = l_Lean_Elab_WF_isNatLtWF(v_wfRel_6564_, v___y_6569_, v___y_6570_, v___y_6571_, v___y_6572_);
if (lean_obj_tag(v___x_6592_) == 0)
{
lean_object* v_a_6593_; lean_object* v___x_6595_; uint8_t v_isShared_6596_; uint8_t v_isSharedCheck_6637_; 
v_a_6593_ = lean_ctor_get(v___x_6592_, 0);
v_isSharedCheck_6637_ = !lean_is_exclusive(v___x_6592_);
if (v_isSharedCheck_6637_ == 0)
{
v___x_6595_ = v___x_6592_;
v_isShared_6596_ = v_isSharedCheck_6637_;
goto v_resetjp_6594_;
}
else
{
lean_inc(v_a_6593_);
lean_dec(v___x_6592_);
v___x_6595_ = lean_box(0);
v_isShared_6596_ = v_isSharedCheck_6637_;
goto v_resetjp_6594_;
}
v_resetjp_6594_:
{
if (lean_obj_tag(v_a_6593_) == 1)
{
lean_object* v_val_6597_; lean_object* v___x_6598_; lean_object* v___x_6599_; lean_object* v___x_6600_; lean_object* v___x_6601_; lean_object* v___x_6602_; lean_object* v___x_6603_; lean_object* v___x_6604_; lean_object* v___x_6606_; 
lean_dec_ref(v___x_6585_);
lean_dec_ref(v_wfRel_6564_);
lean_dec(v___x_6563_);
v_val_6597_ = lean_ctor_get(v_a_6593_, 0);
lean_inc(v_val_6597_);
lean_dec_ref_known(v_a_6593_, 1);
v___x_6598_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___lam__1___closed__2));
v___x_6599_ = lean_box(0);
v___x_6600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6600_, 0, v_a_6584_);
lean_ctor_set(v___x_6600_, 1, v___x_6599_);
v___x_6601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6601_, 0, v_a_6582_);
lean_ctor_set(v___x_6601_, 1, v___x_6600_);
v___x_6602_ = l_Lean_mkConst(v___x_6598_, v___x_6601_);
v___x_6603_ = l_Lean_mkApp3(v___x_6602_, v_a_6580_, v_a_6591_, v_val_6597_);
v___x_6604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6604_, 0, v___x_6603_);
lean_ctor_set(v___x_6604_, 1, v_a_6578_);
if (v_isShared_6596_ == 0)
{
lean_ctor_set(v___x_6595_, 0, v___x_6604_);
v___x_6606_ = v___x_6595_;
goto v_reusejp_6605_;
}
else
{
lean_object* v_reuseFailAlloc_6607_; 
v_reuseFailAlloc_6607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6607_, 0, v___x_6604_);
v___x_6606_ = v_reuseFailAlloc_6607_;
goto v_reusejp_6605_;
}
v_reusejp_6605_:
{
return v___x_6606_;
}
}
else
{
lean_object* v___x_6608_; lean_object* v___x_6609_; lean_object* v___x_6610_; lean_object* v___x_6611_; lean_object* v___x_6612_; lean_object* v___x_6613_; 
lean_del_object(v___x_6595_);
lean_dec(v_a_6593_);
v___x_6608_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___lam__1___closed__4));
lean_inc_ref(v_wfRel_6564_);
v___x_6609_ = l_Lean_mkProj(v___x_6608_, v___x_6574_, v_wfRel_6564_);
v___x_6610_ = l_Lean_mkProj(v___x_6608_, v___x_6563_, v_wfRel_6564_);
v___x_6611_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___lam__1___closed__6));
v___x_6612_ = lean_array_push(v___x_6585_, v___x_6610_);
v___x_6613_ = l_Lean_Meta_mkAppM(v___x_6611_, v___x_6612_, v___y_6569_, v___y_6570_, v___y_6571_, v___y_6572_);
if (lean_obj_tag(v___x_6613_) == 0)
{
lean_object* v_a_6614_; lean_object* v___x_6616_; uint8_t v_isShared_6617_; uint8_t v_isSharedCheck_6628_; 
v_a_6614_ = lean_ctor_get(v___x_6613_, 0);
v_isSharedCheck_6628_ = !lean_is_exclusive(v___x_6613_);
if (v_isSharedCheck_6628_ == 0)
{
v___x_6616_ = v___x_6613_;
v_isShared_6617_ = v_isSharedCheck_6628_;
goto v_resetjp_6615_;
}
else
{
lean_inc(v_a_6614_);
lean_dec(v___x_6613_);
v___x_6616_ = lean_box(0);
v_isShared_6617_ = v_isSharedCheck_6628_;
goto v_resetjp_6615_;
}
v_resetjp_6615_:
{
lean_object* v___x_6618_; lean_object* v___x_6619_; lean_object* v___x_6620_; lean_object* v___x_6621_; lean_object* v___x_6622_; lean_object* v___x_6623_; lean_object* v___x_6624_; lean_object* v___x_6626_; 
v___x_6618_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___lam__1___closed__7));
v___x_6619_ = lean_box(0);
v___x_6620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6620_, 0, v_a_6584_);
lean_ctor_set(v___x_6620_, 1, v___x_6619_);
v___x_6621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6621_, 0, v_a_6582_);
lean_ctor_set(v___x_6621_, 1, v___x_6620_);
v___x_6622_ = l_Lean_mkConst(v___x_6618_, v___x_6621_);
v___x_6623_ = l_Lean_mkApp4(v___x_6622_, v_a_6580_, v_a_6591_, v___x_6609_, v_a_6614_);
v___x_6624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6624_, 0, v___x_6623_);
lean_ctor_set(v___x_6624_, 1, v_a_6578_);
if (v_isShared_6617_ == 0)
{
lean_ctor_set(v___x_6616_, 0, v___x_6624_);
v___x_6626_ = v___x_6616_;
goto v_reusejp_6625_;
}
else
{
lean_object* v_reuseFailAlloc_6627_; 
v_reuseFailAlloc_6627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6627_, 0, v___x_6624_);
v___x_6626_ = v_reuseFailAlloc_6627_;
goto v_reusejp_6625_;
}
v_reusejp_6625_:
{
return v___x_6626_;
}
}
}
else
{
lean_object* v_a_6629_; lean_object* v___x_6631_; uint8_t v_isShared_6632_; uint8_t v_isSharedCheck_6636_; 
lean_dec_ref(v___x_6609_);
lean_dec(v_a_6591_);
lean_dec(v_a_6584_);
lean_dec(v_a_6582_);
lean_dec(v_a_6580_);
lean_dec(v_a_6578_);
v_a_6629_ = lean_ctor_get(v___x_6613_, 0);
v_isSharedCheck_6636_ = !lean_is_exclusive(v___x_6613_);
if (v_isSharedCheck_6636_ == 0)
{
v___x_6631_ = v___x_6613_;
v_isShared_6632_ = v_isSharedCheck_6636_;
goto v_resetjp_6630_;
}
else
{
lean_inc(v_a_6629_);
lean_dec(v___x_6613_);
v___x_6631_ = lean_box(0);
v_isShared_6632_ = v_isSharedCheck_6636_;
goto v_resetjp_6630_;
}
v_resetjp_6630_:
{
lean_object* v___x_6634_; 
if (v_isShared_6632_ == 0)
{
v___x_6634_ = v___x_6631_;
goto v_reusejp_6633_;
}
else
{
lean_object* v_reuseFailAlloc_6635_; 
v_reuseFailAlloc_6635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6635_, 0, v_a_6629_);
v___x_6634_ = v_reuseFailAlloc_6635_;
goto v_reusejp_6633_;
}
v_reusejp_6633_:
{
return v___x_6634_;
}
}
}
}
}
}
else
{
lean_object* v_a_6638_; lean_object* v___x_6640_; uint8_t v_isShared_6641_; uint8_t v_isSharedCheck_6645_; 
lean_dec(v_a_6591_);
lean_dec_ref(v___x_6585_);
lean_dec(v_a_6584_);
lean_dec(v_a_6582_);
lean_dec(v_a_6580_);
lean_dec(v_a_6578_);
lean_dec_ref(v_wfRel_6564_);
lean_dec(v___x_6563_);
v_a_6638_ = lean_ctor_get(v___x_6592_, 0);
v_isSharedCheck_6645_ = !lean_is_exclusive(v___x_6592_);
if (v_isSharedCheck_6645_ == 0)
{
v___x_6640_ = v___x_6592_;
v_isShared_6641_ = v_isSharedCheck_6645_;
goto v_resetjp_6639_;
}
else
{
lean_inc(v_a_6638_);
lean_dec(v___x_6592_);
v___x_6640_ = lean_box(0);
v_isShared_6641_ = v_isSharedCheck_6645_;
goto v_resetjp_6639_;
}
v_resetjp_6639_:
{
lean_object* v___x_6643_; 
if (v_isShared_6641_ == 0)
{
v___x_6643_ = v___x_6640_;
goto v_reusejp_6642_;
}
else
{
lean_object* v_reuseFailAlloc_6644_; 
v_reuseFailAlloc_6644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6644_, 0, v_a_6638_);
v___x_6643_ = v_reuseFailAlloc_6644_;
goto v_reusejp_6642_;
}
v_reusejp_6642_:
{
return v___x_6643_;
}
}
}
}
else
{
lean_object* v_a_6646_; lean_object* v___x_6648_; uint8_t v_isShared_6649_; uint8_t v_isSharedCheck_6653_; 
lean_dec_ref(v___x_6585_);
lean_dec(v_a_6584_);
lean_dec(v_a_6582_);
lean_dec(v_a_6580_);
lean_dec(v_a_6578_);
lean_dec_ref(v_wfRel_6564_);
lean_dec(v___x_6563_);
v_a_6646_ = lean_ctor_get(v___x_6590_, 0);
v_isSharedCheck_6653_ = !lean_is_exclusive(v___x_6590_);
if (v_isSharedCheck_6653_ == 0)
{
v___x_6648_ = v___x_6590_;
v_isShared_6649_ = v_isSharedCheck_6653_;
goto v_resetjp_6647_;
}
else
{
lean_inc(v_a_6646_);
lean_dec(v___x_6590_);
v___x_6648_ = lean_box(0);
v_isShared_6649_ = v_isSharedCheck_6653_;
goto v_resetjp_6647_;
}
v_resetjp_6647_:
{
lean_object* v___x_6651_; 
if (v_isShared_6649_ == 0)
{
v___x_6651_ = v___x_6648_;
goto v_reusejp_6650_;
}
else
{
lean_object* v_reuseFailAlloc_6652_; 
v_reuseFailAlloc_6652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6652_, 0, v_a_6646_);
v___x_6651_ = v_reuseFailAlloc_6652_;
goto v_reusejp_6650_;
}
v_reusejp_6650_:
{
return v___x_6651_;
}
}
}
}
else
{
lean_object* v_a_6654_; lean_object* v___x_6656_; uint8_t v_isShared_6657_; uint8_t v_isSharedCheck_6661_; 
lean_dec(v_a_6582_);
lean_dec(v_a_6580_);
lean_dec(v_a_6578_);
lean_dec_ref(v_type_6566_);
lean_dec_ref(v_wfRel_6564_);
lean_dec(v___x_6563_);
v_a_6654_ = lean_ctor_get(v___x_6583_, 0);
v_isSharedCheck_6661_ = !lean_is_exclusive(v___x_6583_);
if (v_isSharedCheck_6661_ == 0)
{
v___x_6656_ = v___x_6583_;
v_isShared_6657_ = v_isSharedCheck_6661_;
goto v_resetjp_6655_;
}
else
{
lean_inc(v_a_6654_);
lean_dec(v___x_6583_);
v___x_6656_ = lean_box(0);
v_isShared_6657_ = v_isSharedCheck_6661_;
goto v_resetjp_6655_;
}
v_resetjp_6655_:
{
lean_object* v___x_6659_; 
if (v_isShared_6657_ == 0)
{
v___x_6659_ = v___x_6656_;
goto v_reusejp_6658_;
}
else
{
lean_object* v_reuseFailAlloc_6660_; 
v_reuseFailAlloc_6660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6660_, 0, v_a_6654_);
v___x_6659_ = v_reuseFailAlloc_6660_;
goto v_reusejp_6658_;
}
v_reusejp_6658_:
{
return v___x_6659_;
}
}
}
}
else
{
lean_object* v_a_6662_; lean_object* v___x_6664_; uint8_t v_isShared_6665_; uint8_t v_isSharedCheck_6669_; 
lean_dec(v_a_6580_);
lean_dec(v_a_6578_);
lean_dec_ref(v_type_6566_);
lean_dec_ref(v_wfRel_6564_);
lean_dec(v___x_6563_);
v_a_6662_ = lean_ctor_get(v___x_6581_, 0);
v_isSharedCheck_6669_ = !lean_is_exclusive(v___x_6581_);
if (v_isSharedCheck_6669_ == 0)
{
v___x_6664_ = v___x_6581_;
v_isShared_6665_ = v_isSharedCheck_6669_;
goto v_resetjp_6663_;
}
else
{
lean_inc(v_a_6662_);
lean_dec(v___x_6581_);
v___x_6664_ = lean_box(0);
v_isShared_6665_ = v_isSharedCheck_6669_;
goto v_resetjp_6663_;
}
v_resetjp_6663_:
{
lean_object* v___x_6667_; 
if (v_isShared_6665_ == 0)
{
v___x_6667_ = v___x_6664_;
goto v_reusejp_6666_;
}
else
{
lean_object* v_reuseFailAlloc_6668_; 
v_reuseFailAlloc_6668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6668_, 0, v_a_6662_);
v___x_6667_ = v_reuseFailAlloc_6668_;
goto v_reusejp_6666_;
}
v_reusejp_6666_:
{
return v___x_6667_;
}
}
}
}
else
{
lean_object* v_a_6670_; lean_object* v___x_6672_; uint8_t v_isShared_6673_; uint8_t v_isSharedCheck_6677_; 
lean_dec(v_a_6578_);
lean_dec_ref(v_type_6566_);
lean_dec_ref(v_wfRel_6564_);
lean_dec(v___x_6563_);
v_a_6670_ = lean_ctor_get(v___x_6579_, 0);
v_isSharedCheck_6677_ = !lean_is_exclusive(v___x_6579_);
if (v_isSharedCheck_6677_ == 0)
{
v___x_6672_ = v___x_6579_;
v_isShared_6673_ = v_isSharedCheck_6677_;
goto v_resetjp_6671_;
}
else
{
lean_inc(v_a_6670_);
lean_dec(v___x_6579_);
v___x_6672_ = lean_box(0);
v_isShared_6673_ = v_isSharedCheck_6677_;
goto v_resetjp_6671_;
}
v_resetjp_6671_:
{
lean_object* v___x_6675_; 
if (v_isShared_6673_ == 0)
{
v___x_6675_ = v___x_6672_;
goto v_reusejp_6674_;
}
else
{
lean_object* v_reuseFailAlloc_6676_; 
v_reuseFailAlloc_6676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6676_, 0, v_a_6670_);
v___x_6675_ = v_reuseFailAlloc_6676_;
goto v_reusejp_6674_;
}
v_reusejp_6674_:
{
return v___x_6675_;
}
}
}
}
else
{
lean_object* v_a_6678_; lean_object* v___x_6680_; uint8_t v_isShared_6681_; uint8_t v_isSharedCheck_6685_; 
lean_dec_ref(v_type_6566_);
lean_dec_ref(v_wfRel_6564_);
lean_dec(v___x_6563_);
v_a_6678_ = lean_ctor_get(v___x_6577_, 0);
v_isSharedCheck_6685_ = !lean_is_exclusive(v___x_6577_);
if (v_isSharedCheck_6685_ == 0)
{
v___x_6680_ = v___x_6577_;
v_isShared_6681_ = v_isSharedCheck_6685_;
goto v_resetjp_6679_;
}
else
{
lean_inc(v_a_6678_);
lean_dec(v___x_6577_);
v___x_6680_ = lean_box(0);
v_isShared_6681_ = v_isSharedCheck_6685_;
goto v_resetjp_6679_;
}
v_resetjp_6679_:
{
lean_object* v___x_6683_; 
if (v_isShared_6681_ == 0)
{
v___x_6683_ = v___x_6680_;
goto v_reusejp_6682_;
}
else
{
lean_object* v_reuseFailAlloc_6684_; 
v_reuseFailAlloc_6684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6684_, 0, v_a_6678_);
v___x_6683_ = v_reuseFailAlloc_6684_;
goto v_reusejp_6682_;
}
v_reusejp_6682_:
{
return v___x_6683_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1___boxed(lean_object* v___x_6686_, lean_object* v___x_6687_, lean_object* v_wfRel_6688_, lean_object* v_x_6689_, lean_object* v_type_6690_, lean_object* v___y_6691_, lean_object* v___y_6692_, lean_object* v___y_6693_, lean_object* v___y_6694_, lean_object* v___y_6695_, lean_object* v___y_6696_, lean_object* v___y_6697_){
_start:
{
lean_object* v_res_6698_; 
v_res_6698_ = l_Lean_Elab_WF_mkFix___lam__1(v___x_6686_, v___x_6687_, v_wfRel_6688_, v_x_6689_, v_type_6690_, v___y_6691_, v___y_6692_, v___y_6693_, v___y_6694_, v___y_6695_, v___y_6696_);
lean_dec(v___y_6696_);
lean_dec_ref(v___y_6695_);
lean_dec(v___y_6694_);
lean_dec_ref(v___y_6693_);
lean_dec(v___y_6692_);
lean_dec_ref(v___y_6691_);
lean_dec_ref(v_x_6689_);
lean_dec_ref(v___x_6686_);
return v_res_6698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2(lean_object* v___x_6699_, lean_object* v___x_6700_, lean_object* v___x_6701_, lean_object* v___f_6702_, lean_object* v_funNames_6703_, lean_object* v_argsPacker_6704_, lean_object* v_decrTactics_6705_, uint8_t v___x_6706_, lean_object* v_fst_6707_, lean_object* v_prefixArgs_6708_, lean_object* v___y_6709_, lean_object* v___y_6710_, lean_object* v___y_6711_, lean_object* v___y_6712_, lean_object* v___y_6713_, lean_object* v___y_6714_){
_start:
{
lean_object* v___x_6716_; 
lean_inc_ref(v___x_6700_);
lean_inc_ref(v___x_6699_);
v___x_6716_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(v___x_6699_, v___x_6700_, v___x_6701_, v___f_6702_, v___y_6709_, v___y_6710_, v___y_6711_, v___y_6712_, v___y_6713_, v___y_6714_);
if (lean_obj_tag(v___x_6716_) == 0)
{
lean_object* v_a_6717_; lean_object* v___x_6718_; 
v_a_6717_ = lean_ctor_get(v___x_6716_, 0);
lean_inc(v_a_6717_);
lean_dec_ref_known(v___x_6716_, 1);
v___x_6718_ = l_Lean_Elab_WF_solveDecreasingGoals(v_funNames_6703_, v_argsPacker_6704_, v_decrTactics_6705_, v_a_6717_, v___y_6711_, v___y_6712_, v___y_6713_, v___y_6714_);
if (lean_obj_tag(v___x_6718_) == 0)
{
lean_object* v_a_6719_; lean_object* v___x_6720_; lean_object* v___x_6721_; lean_object* v___x_6722_; lean_object* v___x_6723_; uint8_t v___x_6724_; uint8_t v___x_6725_; lean_object* v___x_6726_; 
v_a_6719_ = lean_ctor_get(v___x_6718_, 0);
lean_inc(v_a_6719_);
lean_dec_ref_known(v___x_6718_, 1);
v___x_6720_ = lean_unsigned_to_nat(2u);
v___x_6721_ = lean_mk_empty_array_with_capacity(v___x_6720_);
v___x_6722_ = lean_array_push(v___x_6721_, v___x_6699_);
v___x_6723_ = lean_array_push(v___x_6722_, v___x_6700_);
v___x_6724_ = 1;
v___x_6725_ = 1;
v___x_6726_ = l_Lean_Meta_mkLambdaFVars(v___x_6723_, v_a_6719_, v___x_6706_, v___x_6724_, v___x_6706_, v___x_6724_, v___x_6725_, v___y_6711_, v___y_6712_, v___y_6713_, v___y_6714_);
lean_dec_ref(v___x_6723_);
if (lean_obj_tag(v___x_6726_) == 0)
{
lean_object* v_a_6727_; lean_object* v___x_6728_; lean_object* v___x_6729_; 
v_a_6727_ = lean_ctor_get(v___x_6726_, 0);
lean_inc(v_a_6727_);
lean_dec_ref_known(v___x_6726_, 1);
v___x_6728_ = l_Lean_Expr_app___override(v_fst_6707_, v_a_6727_);
v___x_6729_ = l_Lean_Meta_mkLambdaFVars(v_prefixArgs_6708_, v___x_6728_, v___x_6706_, v___x_6724_, v___x_6706_, v___x_6724_, v___x_6725_, v___y_6711_, v___y_6712_, v___y_6713_, v___y_6714_);
return v___x_6729_;
}
else
{
lean_dec_ref(v_fst_6707_);
return v___x_6726_;
}
}
else
{
lean_dec_ref(v_fst_6707_);
lean_dec_ref(v___x_6700_);
lean_dec_ref(v___x_6699_);
return v___x_6718_;
}
}
else
{
lean_dec_ref(v_fst_6707_);
lean_dec_ref(v_decrTactics_6705_);
lean_dec_ref(v_argsPacker_6704_);
lean_dec_ref(v_funNames_6703_);
lean_dec_ref(v___x_6700_);
lean_dec_ref(v___x_6699_);
return v___x_6716_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2___boxed(lean_object** _args){
lean_object* v___x_6730_ = _args[0];
lean_object* v___x_6731_ = _args[1];
lean_object* v___x_6732_ = _args[2];
lean_object* v___f_6733_ = _args[3];
lean_object* v_funNames_6734_ = _args[4];
lean_object* v_argsPacker_6735_ = _args[5];
lean_object* v_decrTactics_6736_ = _args[6];
lean_object* v___x_6737_ = _args[7];
lean_object* v_fst_6738_ = _args[8];
lean_object* v_prefixArgs_6739_ = _args[9];
lean_object* v___y_6740_ = _args[10];
lean_object* v___y_6741_ = _args[11];
lean_object* v___y_6742_ = _args[12];
lean_object* v___y_6743_ = _args[13];
lean_object* v___y_6744_ = _args[14];
lean_object* v___y_6745_ = _args[15];
lean_object* v___y_6746_ = _args[16];
_start:
{
uint8_t v___x_5939__boxed_6747_; lean_object* v_res_6748_; 
v___x_5939__boxed_6747_ = lean_unbox(v___x_6737_);
v_res_6748_ = l_Lean_Elab_WF_mkFix___lam__2(v___x_6730_, v___x_6731_, v___x_6732_, v___f_6733_, v_funNames_6734_, v_argsPacker_6735_, v_decrTactics_6736_, v___x_5939__boxed_6747_, v_fst_6738_, v_prefixArgs_6739_, v___y_6740_, v___y_6741_, v___y_6742_, v___y_6743_, v___y_6744_, v___y_6745_);
lean_dec(v___y_6745_);
lean_dec_ref(v___y_6744_);
lean_dec(v___y_6743_);
lean_dec_ref(v___y_6742_);
lean_dec(v___y_6741_);
lean_dec_ref(v___y_6740_);
lean_dec_ref(v_prefixArgs_6739_);
return v_res_6748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3(lean_object* v___x_6749_, lean_object* v_snd_6750_, lean_object* v___x_6751_, lean_object* v_prefixArgs_6752_, lean_object* v_value_6753_, lean_object* v___f_6754_, lean_object* v_funNames_6755_, lean_object* v_argsPacker_6756_, lean_object* v_decrTactics_6757_, uint8_t v___x_6758_, lean_object* v_fst_6759_, lean_object* v_xs_6760_, lean_object* v_x_6761_, lean_object* v___y_6762_, lean_object* v___y_6763_, lean_object* v___y_6764_, lean_object* v___y_6765_, lean_object* v___y_6766_, lean_object* v___y_6767_){
_start:
{
lean_object* v_lctx_6769_; lean_object* v___x_6770_; lean_object* v___x_6771_; lean_object* v___x_6772_; lean_object* v___x_6773_; lean_object* v___x_6774_; lean_object* v___x_6775_; lean_object* v___x_6776_; lean_object* v___x_6777_; lean_object* v___f_6778_; lean_object* v___x_6779_; 
v_lctx_6769_ = lean_ctor_get(v___y_6764_, 2);
v___x_6770_ = lean_unsigned_to_nat(0u);
v___x_6771_ = lean_array_get_borrowed(v___x_6749_, v_xs_6760_, v___x_6770_);
v___x_6772_ = l_Lean_Expr_fvarId_x21(v___x_6771_);
lean_inc_ref(v_lctx_6769_);
v___x_6773_ = l_Lean_LocalContext_setUserName(v_lctx_6769_, v___x_6772_, v_snd_6750_);
v___x_6774_ = lean_array_get_borrowed(v___x_6749_, v_xs_6760_, v___x_6751_);
lean_inc_n(v___x_6771_, 2);
lean_inc_ref(v_prefixArgs_6752_);
v___x_6775_ = lean_array_push(v_prefixArgs_6752_, v___x_6771_);
v___x_6776_ = l_Lean_Expr_beta(v_value_6753_, v___x_6775_);
v___x_6777_ = lean_box(v___x_6758_);
lean_inc(v___x_6774_);
v___f_6778_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__2___boxed), 17, 10);
lean_closure_set(v___f_6778_, 0, v___x_6771_);
lean_closure_set(v___f_6778_, 1, v___x_6774_);
lean_closure_set(v___f_6778_, 2, v___x_6776_);
lean_closure_set(v___f_6778_, 3, v___f_6754_);
lean_closure_set(v___f_6778_, 4, v_funNames_6755_);
lean_closure_set(v___f_6778_, 5, v_argsPacker_6756_);
lean_closure_set(v___f_6778_, 6, v_decrTactics_6757_);
lean_closure_set(v___f_6778_, 7, v___x_6777_);
lean_closure_set(v___f_6778_, 8, v_fst_6759_);
lean_closure_set(v___f_6778_, 9, v_prefixArgs_6752_);
v___x_6779_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(v___x_6773_, v___f_6778_, v___y_6762_, v___y_6763_, v___y_6764_, v___y_6765_, v___y_6766_, v___y_6767_);
return v___x_6779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3___boxed(lean_object** _args){
lean_object* v___x_6780_ = _args[0];
lean_object* v_snd_6781_ = _args[1];
lean_object* v___x_6782_ = _args[2];
lean_object* v_prefixArgs_6783_ = _args[3];
lean_object* v_value_6784_ = _args[4];
lean_object* v___f_6785_ = _args[5];
lean_object* v_funNames_6786_ = _args[6];
lean_object* v_argsPacker_6787_ = _args[7];
lean_object* v_decrTactics_6788_ = _args[8];
lean_object* v___x_6789_ = _args[9];
lean_object* v_fst_6790_ = _args[10];
lean_object* v_xs_6791_ = _args[11];
lean_object* v_x_6792_ = _args[12];
lean_object* v___y_6793_ = _args[13];
lean_object* v___y_6794_ = _args[14];
lean_object* v___y_6795_ = _args[15];
lean_object* v___y_6796_ = _args[16];
lean_object* v___y_6797_ = _args[17];
lean_object* v___y_6798_ = _args[18];
lean_object* v___y_6799_ = _args[19];
_start:
{
uint8_t v___x_6009__boxed_6800_; lean_object* v_res_6801_; 
v___x_6009__boxed_6800_ = lean_unbox(v___x_6789_);
v_res_6801_ = l_Lean_Elab_WF_mkFix___lam__3(v___x_6780_, v_snd_6781_, v___x_6782_, v_prefixArgs_6783_, v_value_6784_, v___f_6785_, v_funNames_6786_, v_argsPacker_6787_, v_decrTactics_6788_, v___x_6009__boxed_6800_, v_fst_6790_, v_xs_6791_, v_x_6792_, v___y_6793_, v___y_6794_, v___y_6795_, v___y_6796_, v___y_6797_, v___y_6798_);
lean_dec(v___y_6798_);
lean_dec_ref(v___y_6797_);
lean_dec(v___y_6796_);
lean_dec_ref(v___y_6795_);
lean_dec(v___y_6794_);
lean_dec_ref(v___y_6793_);
lean_dec_ref(v_x_6792_);
lean_dec_ref(v_xs_6791_);
lean_dec(v___x_6782_);
lean_dec_ref(v___x_6780_);
return v_res_6801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix(lean_object* v_preDef_6806_, lean_object* v_prefixArgs_6807_, lean_object* v_argsPacker_6808_, lean_object* v_wfRel_6809_, lean_object* v_funNames_6810_, lean_object* v_decrTactics_6811_, lean_object* v_a_6812_, lean_object* v_a_6813_, lean_object* v_a_6814_, lean_object* v_a_6815_, lean_object* v_a_6816_, lean_object* v_a_6817_){
_start:
{
lean_object* v_declName_6819_; lean_object* v_type_6820_; lean_object* v_value_6821_; lean_object* v___f_6822_; lean_object* v___x_6823_; lean_object* v___x_6824_; 
v_declName_6819_ = lean_ctor_get(v_preDef_6806_, 3);
lean_inc(v_declName_6819_);
v_type_6820_ = lean_ctor_get(v_preDef_6806_, 6);
lean_inc_ref(v_type_6820_);
v_value_6821_ = lean_ctor_get(v_preDef_6806_, 7);
lean_inc_ref(v_value_6821_);
lean_dec_ref(v_preDef_6806_);
lean_inc_ref(v_prefixArgs_6807_);
v___f_6822_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__0___boxed), 12, 2);
lean_closure_set(v___f_6822_, 0, v_prefixArgs_6807_);
lean_closure_set(v___f_6822_, 1, v_declName_6819_);
v___x_6823_ = l_Lean_instInhabitedExpr;
v___x_6824_ = l_Lean_Meta_instantiateForall(v_type_6820_, v_prefixArgs_6807_, v_a_6814_, v_a_6815_, v_a_6816_, v_a_6817_);
if (lean_obj_tag(v___x_6824_) == 0)
{
lean_object* v_a_6825_; lean_object* v___x_6826_; lean_object* v___f_6827_; lean_object* v___x_6828_; uint8_t v___x_6829_; lean_object* v___x_6830_; 
v_a_6825_ = lean_ctor_get(v___x_6824_, 0);
lean_inc(v_a_6825_);
lean_dec_ref_known(v___x_6824_, 1);
v___x_6826_ = lean_unsigned_to_nat(1u);
v___f_6827_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__1___boxed), 12, 3);
lean_closure_set(v___f_6827_, 0, v___x_6823_);
lean_closure_set(v___f_6827_, 1, v___x_6826_);
lean_closure_set(v___f_6827_, 2, v_wfRel_6809_);
v___x_6828_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___closed__0));
v___x_6829_ = 0;
v___x_6830_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v_a_6825_, v___x_6828_, v___f_6827_, v___x_6829_, v___x_6829_, v_a_6812_, v_a_6813_, v_a_6814_, v_a_6815_, v_a_6816_, v_a_6817_);
if (lean_obj_tag(v___x_6830_) == 0)
{
lean_object* v_a_6831_; lean_object* v_fst_6832_; lean_object* v_snd_6833_; lean_object* v___x_6834_; lean_object* v___f_6835_; lean_object* v___x_6836_; 
v_a_6831_ = lean_ctor_get(v___x_6830_, 0);
lean_inc(v_a_6831_);
lean_dec_ref_known(v___x_6830_, 1);
v_fst_6832_ = lean_ctor_get(v_a_6831_, 0);
lean_inc_n(v_fst_6832_, 2);
v_snd_6833_ = lean_ctor_get(v_a_6831_, 1);
lean_inc(v_snd_6833_);
lean_dec(v_a_6831_);
v___x_6834_ = lean_box(v___x_6829_);
v___f_6835_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__3___boxed), 20, 11);
lean_closure_set(v___f_6835_, 0, v___x_6823_);
lean_closure_set(v___f_6835_, 1, v_snd_6833_);
lean_closure_set(v___f_6835_, 2, v___x_6826_);
lean_closure_set(v___f_6835_, 3, v_prefixArgs_6807_);
lean_closure_set(v___f_6835_, 4, v_value_6821_);
lean_closure_set(v___f_6835_, 5, v___f_6822_);
lean_closure_set(v___f_6835_, 6, v_funNames_6810_);
lean_closure_set(v___f_6835_, 7, v_argsPacker_6808_);
lean_closure_set(v___f_6835_, 8, v_decrTactics_6811_);
lean_closure_set(v___f_6835_, 9, v___x_6834_);
lean_closure_set(v___f_6835_, 10, v_fst_6832_);
lean_inc(v_a_6817_);
lean_inc_ref(v_a_6816_);
lean_inc(v_a_6815_);
lean_inc_ref(v_a_6814_);
v___x_6836_ = lean_infer_type(v_fst_6832_, v_a_6814_, v_a_6815_, v_a_6816_, v_a_6817_);
if (lean_obj_tag(v___x_6836_) == 0)
{
lean_object* v_a_6837_; lean_object* v___x_6838_; 
v_a_6837_ = lean_ctor_get(v___x_6836_, 0);
lean_inc(v_a_6837_);
lean_dec_ref_known(v___x_6836_, 1);
lean_inc(v_a_6817_);
lean_inc_ref(v_a_6816_);
lean_inc(v_a_6815_);
lean_inc_ref(v_a_6814_);
v___x_6838_ = lean_whnf(v_a_6837_, v_a_6814_, v_a_6815_, v_a_6816_, v_a_6817_);
if (lean_obj_tag(v___x_6838_) == 0)
{
lean_object* v_a_6839_; lean_object* v___x_6840_; lean_object* v___x_6841_; lean_object* v___x_6842_; 
v_a_6839_ = lean_ctor_get(v___x_6838_, 0);
lean_inc(v_a_6839_);
lean_dec_ref_known(v___x_6838_, 1);
v___x_6840_ = l_Lean_Expr_bindingDomain_x21(v_a_6839_);
lean_dec(v_a_6839_);
v___x_6841_ = ((lean_object*)(l_Lean_Elab_WF_mkFix___closed__1));
v___x_6842_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v___x_6840_, v___x_6841_, v___f_6835_, v___x_6829_, v___x_6829_, v_a_6812_, v_a_6813_, v_a_6814_, v_a_6815_, v_a_6816_, v_a_6817_);
return v___x_6842_;
}
else
{
lean_dec_ref(v___f_6835_);
return v___x_6838_;
}
}
else
{
lean_dec_ref(v___f_6835_);
return v___x_6836_;
}
}
else
{
lean_object* v_a_6843_; lean_object* v___x_6845_; uint8_t v_isShared_6846_; uint8_t v_isSharedCheck_6850_; 
lean_dec_ref(v___f_6822_);
lean_dec_ref(v_value_6821_);
lean_dec_ref(v_decrTactics_6811_);
lean_dec_ref(v_funNames_6810_);
lean_dec_ref(v_argsPacker_6808_);
lean_dec_ref(v_prefixArgs_6807_);
v_a_6843_ = lean_ctor_get(v___x_6830_, 0);
v_isSharedCheck_6850_ = !lean_is_exclusive(v___x_6830_);
if (v_isSharedCheck_6850_ == 0)
{
v___x_6845_ = v___x_6830_;
v_isShared_6846_ = v_isSharedCheck_6850_;
goto v_resetjp_6844_;
}
else
{
lean_inc(v_a_6843_);
lean_dec(v___x_6830_);
v___x_6845_ = lean_box(0);
v_isShared_6846_ = v_isSharedCheck_6850_;
goto v_resetjp_6844_;
}
v_resetjp_6844_:
{
lean_object* v___x_6848_; 
if (v_isShared_6846_ == 0)
{
v___x_6848_ = v___x_6845_;
goto v_reusejp_6847_;
}
else
{
lean_object* v_reuseFailAlloc_6849_; 
v_reuseFailAlloc_6849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6849_, 0, v_a_6843_);
v___x_6848_ = v_reuseFailAlloc_6849_;
goto v_reusejp_6847_;
}
v_reusejp_6847_:
{
return v___x_6848_;
}
}
}
}
else
{
lean_dec_ref(v___f_6822_);
lean_dec_ref(v_value_6821_);
lean_dec_ref(v_decrTactics_6811_);
lean_dec_ref(v_funNames_6810_);
lean_dec_ref(v_wfRel_6809_);
lean_dec_ref(v_argsPacker_6808_);
lean_dec_ref(v_prefixArgs_6807_);
return v___x_6824_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___boxed(lean_object* v_preDef_6851_, lean_object* v_prefixArgs_6852_, lean_object* v_argsPacker_6853_, lean_object* v_wfRel_6854_, lean_object* v_funNames_6855_, lean_object* v_decrTactics_6856_, lean_object* v_a_6857_, lean_object* v_a_6858_, lean_object* v_a_6859_, lean_object* v_a_6860_, lean_object* v_a_6861_, lean_object* v_a_6862_, lean_object* v_a_6863_){
_start:
{
lean_object* v_res_6864_; 
v_res_6864_ = l_Lean_Elab_WF_mkFix(v_preDef_6851_, v_prefixArgs_6852_, v_argsPacker_6853_, v_wfRel_6854_, v_funNames_6855_, v_decrTactics_6856_, v_a_6857_, v_a_6858_, v_a_6859_, v_a_6860_, v_a_6861_, v_a_6862_);
lean_dec(v_a_6862_);
lean_dec_ref(v_a_6861_);
lean_dec(v_a_6860_);
lean_dec_ref(v_a_6859_);
lean_dec(v_a_6858_);
lean_dec_ref(v_a_6857_);
return v_res_6864_;
}
}
lean_object* runtime_initialize_Lean_Data_Array(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ArgsPacker(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cleanup(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_HasConstCache(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cleanup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_HasConstCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_34085118____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_WF_debug_definition_wf_replaceRecApps = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_WF_debug_definition_wf_replaceRecApps);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Array(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_ArgsPacker(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cleanup(uint8_t builtin);
lean_object* initialize_Lean_Util_HasConstCache(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cleanup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_HasConstCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
}
#ifdef __cplusplus
}
#endif
