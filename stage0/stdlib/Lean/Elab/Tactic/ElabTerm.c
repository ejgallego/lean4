// Lean compiler output
// Module: Lean.Elab.Tactic.ElabTerm
// Imports: public import Lean.Meta.Tactic.Constructor public import Lean.Meta.Tactic.Replace public import Lean.Meta.Tactic.Rename public import Lean.Elab.Tactic.Basic public import Lean.Elab.SyntheticMVars import Lean.Elab.ConfigEval import Lean.Meta.Hint
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Elab_Term_isLetRecAuxMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_PostponeBehavior_ofBool(uint8_t);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_withoutRecover___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_SavedState_restore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_MVarId_rename(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Tactic_tagUntaggedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortTacticExceptionId;
lean_object* l_Lean_MVarId_getKind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MetavarKind_isNatural(uint8_t);
lean_object* l_Lean_Elab_Tactic_getMainTag___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getLambdaBody(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_MVarId_replace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_popMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_checked_assign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Elab_Tactic_pushGoal___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instMonadMCtxMetaM;
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_ConfigEval_unsupportedExprExceptionId;
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalConfigItem_defaultOnErr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_throwInvalidOption___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_addCompletionInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_getRootStr(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_shift(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_evalBoolItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
extern lean_object* l_Lean_Elab_abortTermExceptionId;
uint8_t l_Lean_Expr_hasSorry(lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_MVarId_constructorCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_andList(lean_object*);
lean_object* l_Lean_MessageData_hint(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Elab_Term_resolveId_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withoutRecover___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_mkMVar(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_FindMVar_main(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "reuse"};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(46, 30, 230, 20, 64, 162, 204, 1)}};
static const lean_ctor_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(32, 17, 142, 189, 192, 166, 31, 124)}};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "reuse stopped: guard failed at "};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "attempting to close the goal using"};
static const lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "\nthis is often due to an occurs-check failure"};
static const lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalExact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_evalExact___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_evalExact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_evalExact___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_evalExact___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_evalExact___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_evalExact___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Elab_Tactic_evalExact___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__3_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Elab_Tactic_evalExact___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__3_value),LEAN_SCALAR_PTR_LITERAL(181, 27, 253, 38, 166, 91, 92, 173)}};
static const lean_object* l_Lean_Elab_Tactic_evalExact___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "evalExact"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(96, 234, 120, 244, 69, 129, 106, 222)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(71) << 1) | 1)),((lean_object*)(((size_t)(26) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(78) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__0_value),((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(71) << 1) | 1)),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(71) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__3_value),((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__4_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdsByIndex___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdsByIndex(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1;
static const lean_closure_object l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermWithHoles(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermWithHoles___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_refineCore___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_refineCore___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "`refine` tactic failed, value"};
static const lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_refineCore___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_refineCore___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_refineCore___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "\ndepends on the main goal metavariable `"};
static const lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_refineCore___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_refineCore___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_refineCore___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_refineCore___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_refineCore___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalRefine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "refine"};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 130, 130, 160, 131, 48, 178, 245)}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__0_value),LEAN_SCALAR_PTR_LITERAL(240, 66, 166, 159, 104, 233, 32, 227)}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "evalRefine"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 145, 22, 71, 20, 173, 227, 208)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(189) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(192) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__0_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__1_value),((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(189) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(189) << 1) | 1)),((lean_object*)(((size_t)(41) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__3_value),((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__4_value),((lean_object*)(((size_t)(41) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalRefine_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "refine'"};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 47, 162, 14, 79, 14, 110, 97)}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(138, 29, 86, 242, 162, 231, 137, 148)}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "evalRefine'"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 77, 214, 78, 10, 226, 57, 225)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(194) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(197) << 1) | 1)),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__0_value),((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__1_value),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(194) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(194) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__3_value),((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__4_value),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 95, .m_capacity = 95, .m_length = 94, .m_data = "`specialize` requires a term of the form `h x_1 .. x_n` where `h` appears in the local context"};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalSpecialize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "specialize"};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 64, 50, 7, 167, 240, 212, 2)}};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "evalSpecialize"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 32, 237, 136, 248, 73, 56, 16)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(199) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(212) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__0_value),((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(199) << 1) | 1)),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(199) << 1) | 1)),((lean_object*)(((size_t)(49) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__3_value),((lean_object*)(((size_t)(35) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__4_value),((lean_object*)(((size_t)(49) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_elabTermForApply___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Elab_Tactic_elabTermForApply___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_elabTermForApply___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermForApply(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermForApply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_getFVarId___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Unexpected term `"};
static const lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_getFVarId___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_getFVarId___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "`; expected single reference to variable"};
static const lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_getFVarId___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_getFVarIds___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_getFVarIds___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Tactic_getFVarIds___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalApply___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* l_Lean_Elab_Tactic_evalApply___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalApply___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalApply___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalApply___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalApply___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalApply___closed__0_value),LEAN_SCALAR_PTR_LITERAL(202, 125, 237, 78, 179, 140, 218, 80)}};
static const lean_object* l_Lean_Elab_Tactic_evalApply___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalApply___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "evalApply"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(226, 174, 163, 187, 9, 67, 156, 69)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(303) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(306) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__0_value),((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(303) << 1) | 1)),((lean_object*)(((size_t)(47) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(303) << 1) | 1)),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__3_value),((lean_object*)(((size_t)(47) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__4_value),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__0;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ConstructorConfig"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(97, 249, 41, 57, 31, 122, 146, 10)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig;
static lean_once_cell_t l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nof type `"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__3;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__4;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Could not evaluate the expression"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__5_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__6;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Expression contains `sorry`:"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__7_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "config"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "first"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(97, 249, 41, 57, 31, 122, 146, 10)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(232, 74, 180, 42, 194, 193, 172, 110)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_elabConstructorConfig___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_elabConstructorConfig___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_elabConstructorConfig___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabConstructorConfig___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabConstructorConfig___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabConstructorConfig(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabConstructorConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__4_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " the goal."};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__1;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "constructor!"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__3_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 0, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "Use `constructor!` to apply the first matching constructor without this warning:"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__7;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Tactic `constructor` applied constructor `"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__9;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "`, but "};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__11;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " also "};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__13;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "matches"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__15 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__15_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "constructor"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 188, 57, 91, 27, 124, 155, 13)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "evalConstructor"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(27, 148, 222, 77, 61, 137, 212, 52)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(308) << 1) | 1)),((lean_object*)(((size_t)(49) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(312) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__0_value),((lean_object*)(((size_t)(49) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__1_value),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(308) << 1) | 1)),((lean_object*)(((size_t)(53) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(308) << 1) | 1)),((lean_object*)(((size_t)(68) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__3_value),((lean_object*)(((size_t)(53) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__4_value),((lean_object*)(((size_t)(68) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "withReducible"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(197, 44, 223, 192, 8, 197, 146, 83)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "evalWithReducible"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(52, 233, 43, 192, 30, 109, 64, 100)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(314) << 1) | 1)),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(315) << 1) | 1)),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__0_value),((lean_object*)(((size_t)(51) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__1_value),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(314) << 1) | 1)),((lean_object*)(((size_t)(55) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(314) << 1) | 1)),((lean_object*)(((size_t)(72) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__3_value),((lean_object*)(((size_t)(55) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__4_value),((lean_object*)(((size_t)(72) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "withReducibleAndInstances"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(128, 231, 54, 217, 251, 49, 216, 49)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "evalWithReducibleAndInstances"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(66, 161, 97, 73, 21, 6, 2, 115)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(317) << 1) | 1)),((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(318) << 1) | 1)),((lean_object*)(((size_t)(48) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__0_value),((lean_object*)(((size_t)(63) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__1_value),((lean_object*)(((size_t)(48) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(317) << 1) | 1)),((lean_object*)(((size_t)(67) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(317) << 1) | 1)),((lean_object*)(((size_t)(96) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__3_value),((lean_object*)(((size_t)(67) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__4_value),((lean_object*)(((size_t)(96) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithImplicit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithImplicit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "withImplicit"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(150, 55, 151, 94, 210, 189, 147, 133)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "evalWithImplicit"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(32, 18, 145, 67, 71, 155, 218, 120)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "withUnfoldingAll"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(38, 182, 19, 172, 53, 51, 56, 135)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "evalWithUnfoldingAll"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(77, 149, 127, 27, 154, 31, 88, 150)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(320) << 1) | 1)),((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(321) << 1) | 1)),((lean_object*)(((size_t)(60) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__0_value),((lean_object*)(((size_t)(54) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__1_value),((lean_object*)(((size_t)(60) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(320) << 1) | 1)),((lean_object*)(((size_t)(58) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(320) << 1) | 1)),((lean_object*)(((size_t)(78) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__3_value),((lean_object*)(((size_t)(58) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__4_value),((lean_object*)(((size_t)(78) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "withUnfoldingNone"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(168, 40, 27, 134, 15, 218, 231, 86)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "evalWithUnfoldingNone"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(163, 180, 80, 132, 38, 173, 2, 159)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalRename___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Failed to find a hypothesis with type"};
static const lean_object* l_Lean_Elab_Tactic_evalRename___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRename___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRename___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalRename___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rename"};
static const lean_object* l_Lean_Elab_Tactic_evalRename___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 242, 239, 56, 25, 190, 128, 68)}};
static const lean_object* l_Lean_Elab_Tactic_evalRename___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_evalRename___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Tactic_evalRename___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__2_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Tactic_evalRename___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "evalRename"};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 112, 92, 205, 132, 47, 133, 163)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(344) << 1) | 1)),((lean_object*)(((size_t)(44) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(359) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__0_value),((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(344) << 1) | 1)),((lean_object*)(((size_t)(48) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(344) << 1) | 1)),((lean_object*)(((size_t)(58) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__3_value),((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__4_value),((lean_object*)(((size_t)(58) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(lean_object* v_k_1_, uint8_t v_mayPostpone_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_){
_start:
{
lean_object* v___x_10_; 
lean_inc(v_a_8_);
lean_inc_ref(v_a_7_);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
lean_inc(v_a_4_);
lean_inc_ref(v_a_3_);
v___x_10_ = lean_apply_7(v_k_1_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, lean_box(0));
if (lean_obj_tag(v___x_10_) == 0)
{
lean_object* v_a_11_; uint8_t v___x_12_; uint8_t v___x_13_; lean_object* v___x_14_; 
v_a_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_a_11_);
lean_dec_ref_known(v___x_10_, 1);
v___x_12_ = l_Lean_Elab_Term_PostponeBehavior_ofBool(v_mayPostpone_2_);
v___x_13_ = 0;
v___x_14_ = l_Lean_Elab_Term_synthesizeSyntheticMVars(v___x_12_, v___x_13_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_);
if (lean_obj_tag(v___x_14_) == 0)
{
lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_21_; 
v_isSharedCheck_21_ = !lean_is_exclusive(v___x_14_);
if (v_isSharedCheck_21_ == 0)
{
lean_object* v_unused_22_; 
v_unused_22_ = lean_ctor_get(v___x_14_, 0);
lean_dec(v_unused_22_);
v___x_16_ = v___x_14_;
v_isShared_17_ = v_isSharedCheck_21_;
goto v_resetjp_15_;
}
else
{
lean_dec(v___x_14_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_21_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v___x_19_; 
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 0, v_a_11_);
v___x_19_ = v___x_16_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_20_, 0, v_a_11_);
v___x_19_ = v_reuseFailAlloc_20_;
goto v_reusejp_18_;
}
v_reusejp_18_:
{
return v___x_19_;
}
}
}
else
{
lean_object* v_a_23_; lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_30_; 
lean_dec(v_a_11_);
v_a_23_ = lean_ctor_get(v___x_14_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_14_);
if (v_isSharedCheck_30_ == 0)
{
v___x_25_ = v___x_14_;
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
else
{
lean_inc(v_a_23_);
lean_dec(v___x_14_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
lean_object* v___x_28_; 
if (v_isShared_26_ == 0)
{
v___x_28_ = v___x_25_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v_a_23_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
}
}
else
{
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg___boxed(lean_object* v_k_31_, lean_object* v_mayPostpone_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
uint8_t v_mayPostpone_boxed_40_; lean_object* v_res_41_; 
v_mayPostpone_boxed_40_ = lean_unbox(v_mayPostpone_32_);
v_res_41_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(v_k_31_, v_mayPostpone_boxed_40_, v_a_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_);
lean_dec(v_a_38_);
lean_dec_ref(v_a_37_);
lean_dec(v_a_36_);
lean_dec_ref(v_a_35_);
lean_dec(v_a_34_);
lean_dec_ref(v_a_33_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go(lean_object* v_00_u03b1_42_, lean_object* v_k_43_, uint8_t v_mayPostpone_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(v_k_43_, v_mayPostpone_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___boxed(lean_object* v_00_u03b1_53_, lean_object* v_k_54_, lean_object* v_mayPostpone_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
uint8_t v_mayPostpone_boxed_63_; lean_object* v_res_64_; 
v_mayPostpone_boxed_63_ = lean_unbox(v_mayPostpone_55_);
v_res_64_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go(v_00_u03b1_53_, v_k_54_, v_mayPostpone_boxed_63_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_);
lean_dec(v_a_61_);
lean_dec_ref(v_a_60_);
lean_dec(v_a_59_);
lean_dec_ref(v_a_58_);
lean_dec(v_a_57_);
lean_dec_ref(v_a_56_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(lean_object* v_a_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
lean_inc(v___y_67_);
lean_inc_ref(v___y_66_);
v___x_75_ = lean_apply_2(v_a_65_, v___y_66_, v___y_67_);
v___x_76_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___x_75_, v___y_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg___boxed(lean_object* v_a_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(v_a_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0(lean_object* v_00_u03b1_88_, lean_object* v_a_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(v_a_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___boxed(lean_object* v_00_u03b1_100_, lean_object* v_a_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0(v_00_u03b1_100_, v_a_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_);
lean_dec(v___y_109_);
lean_dec_ref(v___y_108_);
lean_dec(v___y_107_);
lean_dec_ref(v___y_106_);
lean_dec(v___y_105_);
lean_dec_ref(v___y_104_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
return v_res_111_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(uint8_t v_cond_112_, lean_object* v_____r_113_){
_start:
{
if (v_cond_112_ == 0)
{
uint8_t v___x_114_; 
v___x_114_ = 1;
return v___x_114_;
}
else
{
uint8_t v___x_115_; 
v___x_115_ = 0;
return v___x_115_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0___boxed(lean_object* v_cond_116_, lean_object* v_____r_117_){
_start:
{
uint8_t v_cond_boxed_118_; uint8_t v_res_119_; lean_object* v_r_120_; 
v_cond_boxed_118_ = lean_unbox(v_cond_116_);
v_res_119_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(v_cond_boxed_118_, v_____r_117_);
v_r_120_ = lean_box(v_res_119_);
return v_r_120_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1(lean_object* v___f_121_, lean_object* v_x_122_){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_123_ = lean_box(0);
v___x_124_ = lean_apply_1(v___f_121_, v___x_123_);
v___x_125_ = lean_unbox(v___x_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1___boxed(lean_object* v___f_126_, lean_object* v_x_127_){
_start:
{
uint8_t v_res_128_; lean_object* v_r_129_; 
v_res_128_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1(v___f_126_, v_x_127_);
v_r_129_ = lean_box(v_res_128_);
return v_r_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(uint8_t v_cond_138_, lean_object* v_act_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v_declName_x3f_149_; lean_object* v_macroStack_150_; uint8_t v_mayPostpone_151_; uint8_t v_errToSorry_152_; lean_object* v_autoBoundImplicitContext_153_; lean_object* v_autoBoundImplicitForbidden_154_; lean_object* v_sectionVars_155_; lean_object* v_sectionFVars_156_; uint8_t v_implicitLambda_157_; uint8_t v_heedElabAsElim_158_; uint8_t v_isNoncomputableSection_159_; uint8_t v_isMetaSection_160_; uint8_t v_ignoreTCFailures_161_; uint8_t v_inPattern_162_; lean_object* v_tacSnap_x3f_163_; uint8_t v_saveRecAppSyntax_164_; uint8_t v_holesAsSyntheticOpaque_165_; lean_object* v_fixedTermElabs_166_; lean_object* v___y_168_; uint8_t v___y_172_; 
v_declName_x3f_149_ = lean_ctor_get(v___y_142_, 0);
v_macroStack_150_ = lean_ctor_get(v___y_142_, 1);
v_mayPostpone_151_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8);
v_errToSorry_152_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_153_ = lean_ctor_get(v___y_142_, 2);
v_autoBoundImplicitForbidden_154_ = lean_ctor_get(v___y_142_, 3);
v_sectionVars_155_ = lean_ctor_get(v___y_142_, 4);
v_sectionFVars_156_ = lean_ctor_get(v___y_142_, 5);
v_implicitLambda_157_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 2);
v_heedElabAsElim_158_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_159_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 4);
v_isMetaSection_160_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 5);
v_ignoreTCFailures_161_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 6);
v_inPattern_162_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_163_ = lean_ctor_get(v___y_142_, 6);
v_saveRecAppSyntax_164_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_165_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 9);
v_fixedTermElabs_166_ = lean_ctor_get(v___y_142_, 7);
if (lean_obj_tag(v_tacSnap_x3f_163_) == 0)
{
v___y_168_ = v_tacSnap_x3f_163_;
goto v___jp_167_;
}
else
{
lean_object* v_val_174_; lean_object* v_old_x3f_175_; lean_object* v___x_176_; lean_object* v___f_177_; 
v_val_174_ = lean_ctor_get(v_tacSnap_x3f_163_, 0);
v_old_x3f_175_ = lean_ctor_get(v_val_174_, 0);
v___x_176_ = lean_box(v_cond_138_);
v___f_177_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_177_, 0, v___x_176_);
if (lean_obj_tag(v_old_x3f_175_) == 1)
{
if (v_cond_138_ == 0)
{
lean_dec_ref(v___f_177_);
goto v___jp_178_;
}
else
{
lean_object* v_val_181_; lean_object* v___x_182_; lean_object* v_map_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v_val_181_ = lean_ctor_get(v_old_x3f_175_, 0);
v___x_182_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_146_);
v_map_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc(v_map_183_);
lean_dec_ref(v___x_182_);
v___x_184_ = ((lean_object*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3));
v___x_185_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_183_, v___x_184_);
lean_dec(v_map_183_);
if (lean_obj_tag(v___x_185_) == 0)
{
lean_dec_ref(v___f_177_);
goto v___jp_178_;
}
else
{
lean_object* v_val_186_; 
v_val_186_ = lean_ctor_get(v___x_185_, 0);
lean_inc(v_val_186_);
lean_dec_ref_known(v___x_185_, 1);
if (lean_obj_tag(v_val_186_) == 1)
{
uint8_t v_v_187_; 
v_v_187_ = lean_ctor_get_uint8(v_val_186_, 0);
lean_dec_ref_known(v_val_186_, 0);
if (v_v_187_ == 0)
{
lean_dec_ref(v___f_177_);
goto v___jp_178_;
}
else
{
lean_object* v_stx_188_; lean_object* v___f_189_; lean_object* v___x_190_; lean_object* v___x_191_; uint8_t v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; uint8_t v___x_199_; 
v_stx_188_ = lean_ctor_get(v_val_181_, 0);
v___f_189_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_189_, 0, v___f_177_);
v___x_190_ = ((lean_object*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__4));
v___x_191_ = lean_box(0);
v___x_192_ = 0;
lean_inc(v_stx_188_);
v___x_193_ = l_Lean_Syntax_formatStx(v_stx_188_, v___x_191_, v___x_192_);
v___x_194_ = l_Std_Format_defWidth;
v___x_195_ = lean_unsigned_to_nat(0u);
v___x_196_ = l_Std_Format_pretty(v___x_193_, v___x_194_, v___x_195_, v___x_195_);
v___x_197_ = lean_string_append(v___x_190_, v___x_196_);
lean_dec_ref(v___x_196_);
v___x_198_ = lean_dbg_trace(v___x_197_, v___f_189_);
v___x_199_ = lean_unbox(v___x_198_);
lean_dec(v___x_198_);
v___y_172_ = v___x_199_;
goto v___jp_171_;
}
}
else
{
lean_dec(v_val_186_);
lean_dec_ref(v___f_177_);
goto v___jp_178_;
}
}
}
}
else
{
lean_object* v___x_200_; uint8_t v___x_201_; 
lean_dec_ref(v___f_177_);
v___x_200_ = lean_box(0);
v___x_201_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(v_cond_138_, v___x_200_);
v___y_172_ = v___x_201_;
goto v___jp_171_;
}
v___jp_178_:
{
lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_179_ = lean_box(0);
v___x_180_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(v_cond_138_, v___x_179_);
v___y_172_ = v___x_180_;
goto v___jp_171_;
}
}
v___jp_167_:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
lean_inc_ref(v_fixedTermElabs_166_);
lean_inc(v_sectionFVars_156_);
lean_inc(v_sectionVars_155_);
lean_inc_ref(v_autoBoundImplicitForbidden_154_);
lean_inc(v_autoBoundImplicitContext_153_);
lean_inc(v_macroStack_150_);
lean_inc(v_declName_x3f_149_);
v___x_169_ = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(v___x_169_, 0, v_declName_x3f_149_);
lean_ctor_set(v___x_169_, 1, v_macroStack_150_);
lean_ctor_set(v___x_169_, 2, v_autoBoundImplicitContext_153_);
lean_ctor_set(v___x_169_, 3, v_autoBoundImplicitForbidden_154_);
lean_ctor_set(v___x_169_, 4, v_sectionVars_155_);
lean_ctor_set(v___x_169_, 5, v_sectionFVars_156_);
lean_ctor_set(v___x_169_, 6, v___y_168_);
lean_ctor_set(v___x_169_, 7, v_fixedTermElabs_166_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*8, v_mayPostpone_151_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*8 + 1, v_errToSorry_152_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*8 + 2, v_implicitLambda_157_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*8 + 3, v_heedElabAsElim_158_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*8 + 4, v_isNoncomputableSection_159_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*8 + 5, v_isMetaSection_160_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*8 + 6, v_ignoreTCFailures_161_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*8 + 7, v_inPattern_162_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_164_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_165_);
lean_inc(v___y_147_);
lean_inc_ref(v___y_146_);
lean_inc(v___y_145_);
lean_inc_ref(v___y_144_);
lean_inc(v___y_143_);
lean_inc(v___y_141_);
lean_inc_ref(v___y_140_);
v___x_170_ = lean_apply_9(v_act_139_, v___y_140_, v___y_141_, v___x_169_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, lean_box(0));
return v___x_170_;
}
v___jp_171_:
{
if (v___y_172_ == 0)
{
lean_object* v___x_173_; 
v___x_173_ = lean_box(0);
v___y_168_ = v___x_173_;
goto v___jp_167_;
}
else
{
lean_inc(v_tacSnap_x3f_163_);
v___y_168_ = v_tacSnap_x3f_163_;
goto v___jp_167_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___boxed(lean_object* v_cond_202_, lean_object* v_act_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
uint8_t v_cond_boxed_213_; lean_object* v_res_214_; 
v_cond_boxed_213_ = lean_unbox(v_cond_202_);
v_res_214_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(v_cond_boxed_213_, v_act_203_, v___y_204_, v___y_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_);
lean_dec(v___y_211_);
lean_dec_ref(v___y_210_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
lean_dec(v___y_205_);
lean_dec_ref(v___y_204_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1(lean_object* v_00_u03b1_215_, uint8_t v_cond_216_, lean_object* v_act_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(v_cond_216_, v_act_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___boxed(lean_object* v_00_u03b1_228_, lean_object* v_cond_229_, lean_object* v_act_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
uint8_t v_cond_boxed_240_; lean_object* v_res_241_; 
v_cond_boxed_240_ = lean_unbox(v_cond_229_);
v_res_241_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1(v_00_u03b1_228_, v_cond_boxed_240_, v_act_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_);
lean_dec(v___y_238_);
lean_dec_ref(v___y_237_);
lean_dec(v___y_236_);
lean_dec_ref(v___y_235_);
lean_dec(v___y_234_);
lean_dec_ref(v___y_233_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__0(lean_object* v_k_242_, uint8_t v_mayPostpone_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(v_k_242_, v_mayPostpone_243_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__0___boxed(lean_object* v_k_254_, lean_object* v_mayPostpone_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_){
_start:
{
uint8_t v_mayPostpone_boxed_265_; lean_object* v_res_266_; 
v_mayPostpone_boxed_265_ = lean_unbox(v_mayPostpone_255_);
v_res_266_ = l_Lean_Elab_Tactic_runTermElab___redArg___lam__0(v_k_254_, v_mayPostpone_boxed_265_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
lean_dec(v___y_263_);
lean_dec_ref(v___y_262_);
lean_dec(v___y_261_);
lean_dec_ref(v___y_260_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__1(lean_object* v___f_267_, lean_object* v_k_268_, uint8_t v_mayPostpone_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_){
_start:
{
uint8_t v_recover_279_; 
v_recover_279_ = lean_ctor_get_uint8(v___y_270_, sizeof(void*)*1);
if (v_recover_279_ == 0)
{
lean_object* v___x_280_; 
lean_dec_ref(v_k_268_);
v___x_280_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(v___f_267_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
return v___x_280_;
}
else
{
lean_object* v___x_281_; 
lean_dec_ref(v___f_267_);
v___x_281_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(v_k_268_, v_mayPostpone_269_, v___y_272_, v___y_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
return v___x_281_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__1___boxed(lean_object* v___f_282_, lean_object* v_k_283_, lean_object* v_mayPostpone_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
uint8_t v_mayPostpone_boxed_294_; lean_object* v_res_295_; 
v_mayPostpone_boxed_294_ = lean_unbox(v_mayPostpone_284_);
v_res_295_ = l_Lean_Elab_Tactic_runTermElab___redArg___lam__1(v___f_282_, v_k_283_, v_mayPostpone_boxed_294_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_);
lean_dec(v___y_292_);
lean_dec_ref(v___y_291_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg(lean_object* v_k_296_, uint8_t v_mayPostpone_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_){
_start:
{
lean_object* v___x_307_; lean_object* v___f_308_; lean_object* v___x_309_; lean_object* v___f_310_; uint8_t v___x_311_; lean_object* v___x_312_; 
v___x_307_ = lean_box(v_mayPostpone_297_);
lean_inc_ref(v_k_296_);
v___f_308_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___redArg___lam__0___boxed), 11, 2);
lean_closure_set(v___f_308_, 0, v_k_296_);
lean_closure_set(v___f_308_, 1, v___x_307_);
v___x_309_ = lean_box(v_mayPostpone_297_);
v___f_310_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___redArg___lam__1___boxed), 12, 3);
lean_closure_set(v___f_310_, 0, v___f_308_);
lean_closure_set(v___f_310_, 1, v_k_296_);
lean_closure_set(v___f_310_, 2, v___x_309_);
v___x_311_ = 1;
v___x_312_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(v___x_311_, v___f_310_, v_a_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___boxed(lean_object* v_k_313_, lean_object* v_mayPostpone_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
uint8_t v_mayPostpone_boxed_324_; lean_object* v_res_325_; 
v_mayPostpone_boxed_324_ = lean_unbox(v_mayPostpone_314_);
v_res_325_ = l_Lean_Elab_Tactic_runTermElab___redArg(v_k_313_, v_mayPostpone_boxed_324_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_);
lean_dec(v_a_322_);
lean_dec_ref(v_a_321_);
lean_dec(v_a_320_);
lean_dec_ref(v_a_319_);
lean_dec(v_a_318_);
lean_dec_ref(v_a_317_);
lean_dec(v_a_316_);
lean_dec_ref(v_a_315_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab(lean_object* v_00_u03b1_326_, lean_object* v_k_327_, uint8_t v_mayPostpone_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_){
_start:
{
lean_object* v___x_338_; 
v___x_338_ = l_Lean_Elab_Tactic_runTermElab___redArg(v_k_327_, v_mayPostpone_328_, v_a_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___boxed(lean_object* v_00_u03b1_339_, lean_object* v_k_340_, lean_object* v_mayPostpone_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_){
_start:
{
uint8_t v_mayPostpone_boxed_351_; lean_object* v_res_352_; 
v_mayPostpone_boxed_351_ = lean_unbox(v_mayPostpone_341_);
v_res_352_ = l_Lean_Elab_Tactic_runTermElab(v_00_u03b1_339_, v_k_340_, v_mayPostpone_boxed_351_, v_a_342_, v_a_343_, v_a_344_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_);
lean_dec(v_a_349_);
lean_dec_ref(v_a_348_);
lean_dec(v_a_347_);
lean_dec_ref(v_a_346_);
lean_dec(v_a_345_);
lean_dec_ref(v_a_344_);
lean_dec(v_a_343_);
lean_dec_ref(v_a_342_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(lean_object* v_e_353_, lean_object* v___y_354_){
_start:
{
uint8_t v___x_356_; 
v___x_356_ = l_Lean_Expr_hasMVar(v_e_353_);
if (v___x_356_ == 0)
{
lean_object* v___x_357_; 
v___x_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_357_, 0, v_e_353_);
return v___x_357_;
}
else
{
lean_object* v___x_358_; lean_object* v_mctx_359_; lean_object* v___x_360_; lean_object* v_fst_361_; lean_object* v_snd_362_; lean_object* v___x_363_; lean_object* v_cache_364_; lean_object* v_zetaDeltaFVarIds_365_; lean_object* v_postponed_366_; lean_object* v_diag_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_376_; 
v___x_358_ = lean_st_ref_get(v___y_354_);
v_mctx_359_ = lean_ctor_get(v___x_358_, 0);
lean_inc_ref(v_mctx_359_);
lean_dec(v___x_358_);
v___x_360_ = l_Lean_instantiateMVarsCore(v_mctx_359_, v_e_353_);
v_fst_361_ = lean_ctor_get(v___x_360_, 0);
lean_inc(v_fst_361_);
v_snd_362_ = lean_ctor_get(v___x_360_, 1);
lean_inc(v_snd_362_);
lean_dec_ref(v___x_360_);
v___x_363_ = lean_st_ref_take(v___y_354_);
v_cache_364_ = lean_ctor_get(v___x_363_, 1);
v_zetaDeltaFVarIds_365_ = lean_ctor_get(v___x_363_, 2);
v_postponed_366_ = lean_ctor_get(v___x_363_, 3);
v_diag_367_ = lean_ctor_get(v___x_363_, 4);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_376_ == 0)
{
lean_object* v_unused_377_; 
v_unused_377_ = lean_ctor_get(v___x_363_, 0);
lean_dec(v_unused_377_);
v___x_369_ = v___x_363_;
v_isShared_370_ = v_isSharedCheck_376_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_diag_367_);
lean_inc(v_postponed_366_);
lean_inc(v_zetaDeltaFVarIds_365_);
lean_inc(v_cache_364_);
lean_dec(v___x_363_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_376_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_372_; 
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 0, v_snd_362_);
v___x_372_ = v___x_369_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_snd_362_);
lean_ctor_set(v_reuseFailAlloc_375_, 1, v_cache_364_);
lean_ctor_set(v_reuseFailAlloc_375_, 2, v_zetaDeltaFVarIds_365_);
lean_ctor_set(v_reuseFailAlloc_375_, 3, v_postponed_366_);
lean_ctor_set(v_reuseFailAlloc_375_, 4, v_diag_367_);
v___x_372_ = v_reuseFailAlloc_375_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_st_ref_put(v___y_354_, v___x_372_);
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v_fst_361_);
return v___x_374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg___boxed(lean_object* v_e_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_e_378_, v___y_379_);
lean_dec(v___y_379_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0(lean_object* v_e_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_e_382_, v___y_388_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___boxed(lean_object* v_e_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0(v_e_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object* v_stx_404_, lean_object* v_expectedType_x3f_405_, uint8_t v_mayPostpone_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
uint8_t v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v_toCold_420_; lean_object* v_currRecDepth_421_; lean_object* v_ref_422_; uint16_t v_optionFlags_423_; uint8_t v_suppressElabErrors_424_; uint8_t v_checkDeprecated_425_; uint8_t v_isRecordingDeps_426_; lean_object* v_ref_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_416_ = 1;
v___x_417_ = lean_box(v___x_416_);
v___x_418_ = lean_box(v___x_416_);
lean_inc(v_stx_404_);
v___x_419_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(v___x_419_, 0, v_stx_404_);
lean_closure_set(v___x_419_, 1, v_expectedType_x3f_405_);
lean_closure_set(v___x_419_, 2, v___x_417_);
lean_closure_set(v___x_419_, 3, v___x_418_);
v_toCold_420_ = lean_ctor_get(v_a_413_, 0);
v_currRecDepth_421_ = lean_ctor_get(v_a_413_, 1);
v_ref_422_ = lean_ctor_get(v_a_413_, 2);
v_optionFlags_423_ = lean_ctor_get_uint16(v_a_413_, sizeof(void*)*3);
v_suppressElabErrors_424_ = lean_ctor_get_uint8(v_a_413_, sizeof(void*)*3 + 2);
v_checkDeprecated_425_ = lean_ctor_get_uint8(v_a_413_, sizeof(void*)*3 + 3);
v_isRecordingDeps_426_ = lean_ctor_get_uint8(v_a_413_, sizeof(void*)*3 + 4);
v_ref_427_ = l_Lean_replaceRef(v_stx_404_, v_ref_422_);
lean_dec(v_stx_404_);
lean_inc(v_currRecDepth_421_);
lean_inc_ref(v_toCold_420_);
v___x_428_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_428_, 0, v_toCold_420_);
lean_ctor_set(v___x_428_, 1, v_currRecDepth_421_);
lean_ctor_set(v___x_428_, 2, v_ref_427_);
lean_ctor_set_uint16(v___x_428_, sizeof(void*)*3, v_optionFlags_423_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*3 + 2, v_suppressElabErrors_424_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*3 + 3, v_checkDeprecated_425_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*3 + 4, v_isRecordingDeps_426_);
v___x_429_ = l_Lean_Elab_Tactic_runTermElab___redArg(v___x_419_, v_mayPostpone_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v___x_428_, v_a_414_);
lean_dec_ref_known(v___x_428_, 3);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v_a_430_; lean_object* v___x_431_; 
v_a_430_ = lean_ctor_get(v___x_429_, 0);
lean_inc(v_a_430_);
lean_dec_ref_known(v___x_429_, 1);
v___x_431_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_a_430_, v_a_412_);
return v___x_431_;
}
else
{
return v___x_429_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTerm___boxed(lean_object* v_stx_432_, lean_object* v_expectedType_x3f_433_, lean_object* v_mayPostpone_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_){
_start:
{
uint8_t v_mayPostpone_boxed_444_; lean_object* v_res_445_; 
v_mayPostpone_boxed_444_ = lean_unbox(v_mayPostpone_434_);
v_res_445_ = l_Lean_Elab_Tactic_elabTerm(v_stx_432_, v_expectedType_x3f_433_, v_mayPostpone_boxed_444_, v_a_435_, v_a_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_);
lean_dec(v_a_442_);
lean_dec_ref(v_a_441_);
lean_dec(v_a_440_);
lean_dec_ref(v_a_439_);
lean_dec(v_a_438_);
lean_dec_ref(v_a_437_);
lean_dec(v_a_436_);
lean_dec_ref(v_a_435_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType(lean_object* v_stx_446_, lean_object* v_expectedType_x3f_447_, uint8_t v_mayPostpone_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_){
_start:
{
lean_object* v___x_458_; 
lean_inc(v_expectedType_x3f_447_);
v___x_458_ = l_Lean_Elab_Tactic_elabTerm(v_stx_446_, v_expectedType_x3f_447_, v_mayPostpone_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_, v_a_456_);
if (lean_obj_tag(v___x_458_) == 0)
{
if (lean_obj_tag(v_expectedType_x3f_447_) == 0)
{
return v___x_458_;
}
else
{
lean_object* v_a_459_; lean_object* v_val_460_; lean_object* v___x_461_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc_n(v_a_459_, 2);
lean_dec_ref_known(v___x_458_, 1);
v_val_460_ = lean_ctor_get(v_expectedType_x3f_447_, 0);
lean_inc(v_val_460_);
lean_dec_ref_known(v_expectedType_x3f_447_, 1);
lean_inc(v_a_456_);
lean_inc_ref(v_a_455_);
lean_inc(v_a_454_);
lean_inc_ref(v_a_453_);
v___x_461_ = lean_infer_type(v_a_459_, v_a_453_, v_a_454_, v_a_455_, v_a_456_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; lean_object* v___x_463_; uint8_t v_foApprox_464_; uint8_t v_ctxApprox_465_; uint8_t v_quasiPatternApprox_466_; uint8_t v_constApprox_467_; uint8_t v_isDefEqStuckEx_468_; uint8_t v_unificationHints_469_; uint8_t v_proofIrrelevance_470_; uint8_t v_offsetCnstrs_471_; uint8_t v_transparency_472_; uint8_t v_etaStruct_473_; uint8_t v_univApprox_474_; uint8_t v_iota_475_; uint8_t v_beta_476_; uint8_t v_proj_477_; uint8_t v_zeta_478_; uint8_t v_zetaDelta_479_; uint8_t v_zetaUnused_480_; uint8_t v_zetaHave_481_; uint8_t v_canUnfoldPredicateConfig_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_539_; 
v_a_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc(v_a_462_);
lean_dec_ref_known(v___x_461_, 1);
v___x_463_ = l_Lean_Meta_Context_config(v_a_453_);
v_foApprox_464_ = lean_ctor_get_uint8(v___x_463_, 0);
v_ctxApprox_465_ = lean_ctor_get_uint8(v___x_463_, 1);
v_quasiPatternApprox_466_ = lean_ctor_get_uint8(v___x_463_, 2);
v_constApprox_467_ = lean_ctor_get_uint8(v___x_463_, 3);
v_isDefEqStuckEx_468_ = lean_ctor_get_uint8(v___x_463_, 4);
v_unificationHints_469_ = lean_ctor_get_uint8(v___x_463_, 5);
v_proofIrrelevance_470_ = lean_ctor_get_uint8(v___x_463_, 6);
v_offsetCnstrs_471_ = lean_ctor_get_uint8(v___x_463_, 8);
v_transparency_472_ = lean_ctor_get_uint8(v___x_463_, 9);
v_etaStruct_473_ = lean_ctor_get_uint8(v___x_463_, 10);
v_univApprox_474_ = lean_ctor_get_uint8(v___x_463_, 11);
v_iota_475_ = lean_ctor_get_uint8(v___x_463_, 12);
v_beta_476_ = lean_ctor_get_uint8(v___x_463_, 13);
v_proj_477_ = lean_ctor_get_uint8(v___x_463_, 14);
v_zeta_478_ = lean_ctor_get_uint8(v___x_463_, 15);
v_zetaDelta_479_ = lean_ctor_get_uint8(v___x_463_, 16);
v_zetaUnused_480_ = lean_ctor_get_uint8(v___x_463_, 17);
v_zetaHave_481_ = lean_ctor_get_uint8(v___x_463_, 18);
v_canUnfoldPredicateConfig_482_ = lean_ctor_get_uint8(v___x_463_, 19);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_539_ == 0)
{
v___x_484_ = v___x_463_;
v_isShared_485_ = v_isSharedCheck_539_;
goto v_resetjp_483_;
}
else
{
lean_dec(v___x_463_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_539_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
uint8_t v_trackZetaDelta_486_; lean_object* v_zetaDeltaSet_487_; lean_object* v_lctx_488_; lean_object* v_localInstances_489_; lean_object* v_defEqCtx_x3f_490_; lean_object* v_synthPendingDepth_491_; lean_object* v_customCanUnfoldPredicate_x3f_492_; uint8_t v_univApprox_493_; uint8_t v_inTypeClassResolution_494_; uint8_t v_cacheInferType_495_; uint8_t v___x_496_; lean_object* v___x_498_; 
v_trackZetaDelta_486_ = lean_ctor_get_uint8(v_a_453_, sizeof(void*)*7);
v_zetaDeltaSet_487_ = lean_ctor_get(v_a_453_, 1);
v_lctx_488_ = lean_ctor_get(v_a_453_, 2);
v_localInstances_489_ = lean_ctor_get(v_a_453_, 3);
v_defEqCtx_x3f_490_ = lean_ctor_get(v_a_453_, 4);
v_synthPendingDepth_491_ = lean_ctor_get(v_a_453_, 5);
v_customCanUnfoldPredicate_x3f_492_ = lean_ctor_get(v_a_453_, 6);
v_univApprox_493_ = lean_ctor_get_uint8(v_a_453_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_494_ = lean_ctor_get_uint8(v_a_453_, sizeof(void*)*7 + 2);
v_cacheInferType_495_ = lean_ctor_get_uint8(v_a_453_, sizeof(void*)*7 + 3);
v___x_496_ = 1;
if (v_isShared_485_ == 0)
{
v___x_498_ = v___x_484_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 0, v_foApprox_464_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 1, v_ctxApprox_465_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 2, v_quasiPatternApprox_466_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 3, v_constApprox_467_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 4, v_isDefEqStuckEx_468_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 5, v_unificationHints_469_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 6, v_proofIrrelevance_470_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 8, v_offsetCnstrs_471_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 9, v_transparency_472_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 10, v_etaStruct_473_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 11, v_univApprox_474_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 12, v_iota_475_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 13, v_beta_476_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 14, v_proj_477_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 15, v_zeta_478_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 16, v_zetaDelta_479_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 17, v_zetaUnused_480_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 18, v_zetaHave_481_);
lean_ctor_set_uint8(v_reuseFailAlloc_538_, 19, v_canUnfoldPredicateConfig_482_);
v___x_498_ = v_reuseFailAlloc_538_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
uint64_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
lean_ctor_set_uint8(v___x_498_, 7, v___x_496_);
v___x_499_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_498_);
v___x_500_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set_uint64(v___x_500_, sizeof(void*)*1, v___x_499_);
lean_inc(v_customCanUnfoldPredicate_x3f_492_);
lean_inc(v_synthPendingDepth_491_);
lean_inc(v_defEqCtx_x3f_490_);
lean_inc_ref(v_localInstances_489_);
lean_inc_ref(v_lctx_488_);
lean_inc(v_zetaDeltaSet_487_);
v___x_501_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_501_, 0, v___x_500_);
lean_ctor_set(v___x_501_, 1, v_zetaDeltaSet_487_);
lean_ctor_set(v___x_501_, 2, v_lctx_488_);
lean_ctor_set(v___x_501_, 3, v_localInstances_489_);
lean_ctor_set(v___x_501_, 4, v_defEqCtx_x3f_490_);
lean_ctor_set(v___x_501_, 5, v_synthPendingDepth_491_);
lean_ctor_set(v___x_501_, 6, v_customCanUnfoldPredicate_x3f_492_);
lean_ctor_set_uint8(v___x_501_, sizeof(void*)*7, v_trackZetaDelta_486_);
lean_ctor_set_uint8(v___x_501_, sizeof(void*)*7 + 1, v_univApprox_493_);
lean_ctor_set_uint8(v___x_501_, sizeof(void*)*7 + 2, v_inTypeClassResolution_494_);
lean_ctor_set_uint8(v___x_501_, sizeof(void*)*7 + 3, v_cacheInferType_495_);
lean_inc(v_val_460_);
lean_inc(v_a_462_);
v___x_502_ = l_Lean_Meta_isExprDefEq(v_a_462_, v_val_460_, v___x_501_, v_a_454_, v_a_455_, v_a_456_);
lean_dec_ref_known(v___x_501_, 7);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_529_; 
v_a_503_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_529_ == 0)
{
v___x_505_ = v___x_502_;
v_isShared_506_ = v_isSharedCheck_529_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_502_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_529_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
uint8_t v___x_507_; 
v___x_507_ = lean_unbox(v_a_503_);
lean_dec(v_a_503_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_509_; 
lean_del_object(v___x_505_);
v___x_508_ = lean_box(0);
lean_inc(v_a_459_);
v___x_509_ = l_Lean_Elab_Term_throwTypeMismatchError___redArg(v___x_508_, v_val_460_, v_a_462_, v_a_459_, v___x_508_, v_a_453_, v_a_454_, v_a_455_, v_a_456_);
if (lean_obj_tag(v___x_509_) == 0)
{
lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_516_; 
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_516_ == 0)
{
lean_object* v_unused_517_; 
v_unused_517_ = lean_ctor_get(v___x_509_, 0);
lean_dec(v_unused_517_);
v___x_511_ = v___x_509_;
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
else
{
lean_dec(v___x_509_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_514_; 
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 0, v_a_459_);
v___x_514_ = v___x_511_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_a_459_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_dec(v_a_459_);
v_a_518_ = lean_ctor_get(v___x_509_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_509_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_509_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
else
{
lean_object* v___x_527_; 
lean_dec(v_a_462_);
lean_dec(v_val_460_);
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 0, v_a_459_);
v___x_527_ = v___x_505_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_a_459_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
}
else
{
lean_object* v_a_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_537_; 
lean_dec(v_a_462_);
lean_dec(v_val_460_);
lean_dec(v_a_459_);
v_a_530_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_537_ == 0)
{
v___x_532_ = v___x_502_;
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_a_530_);
lean_dec(v___x_502_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_535_; 
if (v_isShared_533_ == 0)
{
v___x_535_ = v___x_532_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_a_530_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
}
}
}
}
else
{
lean_dec(v_val_460_);
lean_dec(v_a_459_);
return v___x_461_;
}
}
}
else
{
lean_dec(v_expectedType_x3f_447_);
return v___x_458_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType___boxed(lean_object* v_stx_540_, lean_object* v_expectedType_x3f_541_, lean_object* v_mayPostpone_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
uint8_t v_mayPostpone_boxed_552_; lean_object* v_res_553_; 
v_mayPostpone_boxed_552_ = lean_unbox(v_mayPostpone_542_);
v_res_553_ = l_Lean_Elab_Tactic_elabTermEnsuringType(v_stx_540_, v_expectedType_x3f_541_, v_mayPostpone_boxed_552_, v_a_543_, v_a_544_, v_a_545_, v_a_546_, v_a_547_, v_a_548_, v_a_549_, v_a_550_);
lean_dec(v_a_550_);
lean_dec_ref(v_a_549_);
lean_dec(v_a_548_);
lean_dec_ref(v_a_547_);
lean_dec(v_a_546_);
lean_dec_ref(v_a_545_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
return v_res_553_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_554_ = lean_box(0);
v___x_555_ = l_Lean_Elab_abortTacticExceptionId;
v___x_556_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
lean_ctor_set(v___x_556_, 1, v___x_554_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg(){
_start:
{
lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_558_ = lean_obj_once(&l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0, &l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0);
v___x_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___boxed(lean_object* v___y_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg();
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0(lean_object* v_00_u03b1_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_){
_start:
{
lean_object* v___x_572_; 
v___x_572_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg();
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___boxed(lean_object* v_00_u03b1_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0(v_00_u03b1_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort(lean_object* v_mvarIds_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = lean_box(0);
v___x_595_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_mvarIds_584_, v___x_594_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_606_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_606_ == 0)
{
v___x_598_ = v___x_595_;
v_isShared_599_ = v_isSharedCheck_606_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_595_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_606_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
uint8_t v___x_600_; 
v___x_600_ = lean_unbox(v_a_596_);
lean_dec(v_a_596_);
if (v___x_600_ == 0)
{
lean_object* v___x_601_; lean_object* v___x_603_; 
v___x_601_ = lean_box(0);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v___x_601_);
v___x_603_ = v___x_598_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_601_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
else
{
lean_object* v___x_605_; 
lean_del_object(v___x_598_);
v___x_605_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg();
return v___x_605_;
}
}
}
else
{
lean_object* v_a_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_614_; 
v_a_607_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_614_ == 0)
{
v___x_609_ = v___x_595_;
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_a_607_);
lean_dec(v___x_595_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_a_607_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort___boxed(lean_object* v_mvarIds_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lean_Elab_Tactic_logUnassignedAndAbort(v_mvarIds_615_, v_a_616_, v_a_617_, v_a_618_, v_a_619_, v_a_620_, v_a_621_, v_a_622_, v_a_623_);
lean_dec(v_a_623_);
lean_dec_ref(v_a_622_);
lean_dec(v_a_621_);
lean_dec_ref(v_a_620_);
lean_dec(v_a_619_);
lean_dec_ref(v_a_618_);
lean_dec(v_a_617_);
lean_dec_ref(v_a_616_);
lean_dec_ref(v_mvarIds_615_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0(lean_object* v___x_626_, lean_object* v_mvarCounterSaved_627_, lean_object* v_as_628_, size_t v_i_629_, size_t v_stop_630_, lean_object* v_b_631_){
_start:
{
lean_object* v___y_633_; uint8_t v___x_637_; 
v___x_637_ = lean_usize_dec_eq(v_i_629_, v_stop_630_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v_index_640_; uint8_t v___x_641_; 
v___x_638_ = lean_array_uget_borrowed(v_as_628_, v_i_629_);
lean_inc(v___x_638_);
v___x_639_ = l_Lean_MetavarContext_getDecl(v___x_626_, v___x_638_);
v_index_640_ = lean_ctor_get(v___x_639_, 6);
lean_inc(v_index_640_);
lean_dec_ref(v___x_639_);
v___x_641_ = lean_nat_dec_le(v_mvarCounterSaved_627_, v_index_640_);
lean_dec(v_index_640_);
if (v___x_641_ == 0)
{
v___y_633_ = v_b_631_;
goto v___jp_632_;
}
else
{
lean_object* v___x_642_; 
lean_inc(v___x_638_);
v___x_642_ = lean_array_push(v_b_631_, v___x_638_);
v___y_633_ = v___x_642_;
goto v___jp_632_;
}
}
else
{
return v_b_631_;
}
v___jp_632_:
{
size_t v___x_634_; size_t v___x_635_; 
v___x_634_ = ((size_t)1ULL);
v___x_635_ = lean_usize_add(v_i_629_, v___x_634_);
v_i_629_ = v___x_635_;
v_b_631_ = v___y_633_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0___boxed(lean_object* v___x_643_, lean_object* v_mvarCounterSaved_644_, lean_object* v_as_645_, lean_object* v_i_646_, lean_object* v_stop_647_, lean_object* v_b_648_){
_start:
{
size_t v_i_boxed_649_; size_t v_stop_boxed_650_; lean_object* v_res_651_; 
v_i_boxed_649_ = lean_unbox_usize(v_i_646_);
lean_dec(v_i_646_);
v_stop_boxed_650_ = lean_unbox_usize(v_stop_647_);
lean_dec(v_stop_647_);
v_res_651_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0(v___x_643_, v_mvarCounterSaved_644_, v_as_645_, v_i_boxed_649_, v_stop_boxed_650_, v_b_648_);
lean_dec_ref(v_as_645_);
lean_dec(v_mvarCounterSaved_644_);
lean_dec_ref(v___x_643_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg(lean_object* v_mvarIds_654_, lean_object* v_mvarCounterSaved_655_, lean_object* v_a_656_){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; uint8_t v___x_662_; 
v___x_658_ = lean_st_ref_get(v_a_656_);
v___x_659_ = lean_unsigned_to_nat(0u);
v___x_660_ = lean_array_get_size(v_mvarIds_654_);
v___x_661_ = ((lean_object*)(l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0));
v___x_662_ = lean_nat_dec_lt(v___x_659_, v___x_660_);
if (v___x_662_ == 0)
{
lean_object* v___x_663_; 
lean_dec(v___x_658_);
v___x_663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_663_, 0, v___x_661_);
return v___x_663_;
}
else
{
lean_object* v_mctx_664_; size_t v___x_665_; size_t v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_mctx_664_ = lean_ctor_get(v___x_658_, 0);
lean_inc_ref(v_mctx_664_);
lean_dec(v___x_658_);
v___x_665_ = ((size_t)0ULL);
v___x_666_ = lean_usize_of_nat(v___x_660_);
v___x_667_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0(v_mctx_664_, v_mvarCounterSaved_655_, v_mvarIds_654_, v___x_665_, v___x_666_, v___x_661_);
lean_dec_ref(v_mctx_664_);
v___x_668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
return v___x_668_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg___boxed(lean_object* v_mvarIds_669_, lean_object* v_mvarCounterSaved_670_, lean_object* v_a_671_, lean_object* v_a_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_mvarIds_669_, v_mvarCounterSaved_670_, v_a_671_);
lean_dec(v_a_671_);
lean_dec(v_mvarCounterSaved_670_);
lean_dec_ref(v_mvarIds_669_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars(lean_object* v_mvarIds_674_, lean_object* v_mvarCounterSaved_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_mvarIds_674_, v_mvarCounterSaved_675_, v_a_677_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___boxed(lean_object* v_mvarIds_682_, lean_object* v_mvarCounterSaved_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Lean_Elab_Tactic_filterOldMVars(v_mvarIds_682_, v_mvarCounterSaved_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_);
lean_dec(v_a_687_);
lean_dec_ref(v_a_686_);
lean_dec(v_a_685_);
lean_dec_ref(v_a_684_);
lean_dec(v_mvarCounterSaved_683_);
lean_dec_ref(v_mvarIds_682_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0(lean_object* v_x_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
lean_object* v___x_700_; 
lean_inc(v___y_694_);
lean_inc_ref(v___y_693_);
lean_inc(v___y_692_);
lean_inc_ref(v___y_691_);
v___x_700_ = lean_apply_9(v_x_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, lean_box(0));
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0___boxed(lean_object* v_x_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0(v_x_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_);
lean_dec(v___y_705_);
lean_dec_ref(v___y_704_);
lean_dec(v___y_703_);
lean_dec_ref(v___y_702_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(lean_object* v_mvarId_712_, lean_object* v_x_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_){
_start:
{
lean_object* v___f_723_; lean_object* v___x_724_; 
lean_inc(v___y_717_);
lean_inc_ref(v___y_716_);
lean_inc(v___y_715_);
lean_inc_ref(v___y_714_);
v___f_723_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_723_, 0, v_x_713_);
lean_closure_set(v___f_723_, 1, v___y_714_);
lean_closure_set(v___f_723_, 2, v___y_715_);
lean_closure_set(v___f_723_, 3, v___y_716_);
lean_closure_set(v___f_723_, 4, v___y_717_);
v___x_724_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_712_, v___f_723_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
if (lean_obj_tag(v___x_724_) == 0)
{
return v___x_724_;
}
else
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_732_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_732_ == 0)
{
v___x_727_ = v___x_724_;
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v___x_724_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_730_; 
if (v_isShared_728_ == 0)
{
v___x_730_ = v___x_727_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_a_725_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___boxed(lean_object* v_mvarId_733_, lean_object* v_x_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(v_mvarId_733_, v_x_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0(lean_object* v_00_u03b1_745_, lean_object* v_mvarId_746_, lean_object* v_x_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_){
_start:
{
lean_object* v___x_757_; 
v___x_757_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(v_mvarId_746_, v_x_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___boxed(lean_object* v_00_u03b1_758_, lean_object* v_mvarId_759_, lean_object* v_x_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0(v_00_u03b1_758_, v_mvarId_759_, v_x_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
return v_res_770_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1(void){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = ((lean_object*)(l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__0));
v___x_773_ = l_Lean_stringToMessageData(v___x_772_);
return v___x_773_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3(void){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_775_ = ((lean_object*)(l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__2));
v___x_776_ = l_Lean_stringToMessageData(v___x_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0(lean_object* v_a_777_, lean_object* v_x_778_, lean_object* v_tacName_779_, uint8_t v_checkNewUnassigned_780_, lean_object* v_mvarCounter_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
lean_object* v___x_791_; 
lean_inc(v_a_777_);
v___x_791_ = l_Lean_MVarId_getType(v_a_777_, v___y_786_, v___y_787_, v___y_788_, v___y_789_);
if (lean_obj_tag(v___x_791_) == 0)
{
lean_object* v_a_792_; lean_object* v___x_793_; 
v_a_792_ = lean_ctor_get(v___x_791_, 0);
lean_inc(v_a_792_);
lean_dec_ref_known(v___x_791_, 1);
lean_inc(v_a_777_);
v___x_793_ = l_Lean_MVarId_getTag(v_a_777_, v___y_786_, v___y_787_, v___y_788_, v___y_789_);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v_a_794_; lean_object* v___x_795_; 
v_a_794_ = lean_ctor_get(v___x_793_, 0);
lean_inc(v_a_794_);
lean_dec_ref_known(v___x_793_, 1);
lean_inc(v___y_789_);
lean_inc_ref(v___y_788_);
lean_inc(v___y_787_);
lean_inc_ref(v___y_786_);
lean_inc(v___y_785_);
lean_inc_ref(v___y_784_);
lean_inc(v___y_783_);
lean_inc_ref(v___y_782_);
v___x_795_ = lean_apply_11(v_x_778_, v_a_792_, v_a_794_, v___y_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, lean_box(0));
if (lean_obj_tag(v___x_795_) == 0)
{
lean_object* v_a_796_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_801_; 
v_a_796_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_a_796_);
lean_dec_ref_known(v___x_795_, 1);
if (v_checkNewUnassigned_780_ == 0)
{
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
v___y_798_ = v___y_786_;
v___y_799_ = v___y_787_;
v___y_800_ = v___y_788_;
v___y_801_ = v___y_789_;
goto v___jp_797_;
}
else
{
lean_object* v___x_828_; 
lean_inc(v_a_796_);
v___x_828_ = l_Lean_Meta_getMVars(v_a_796_, v___y_786_, v___y_787_, v___y_788_, v___y_789_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___x_830_; lean_object* v_a_831_; lean_object* v___x_832_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_a_829_);
lean_dec_ref_known(v___x_828_, 1);
v___x_830_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_a_829_, v_mvarCounter_781_, v___y_787_);
lean_dec(v_a_829_);
v_a_831_ = lean_ctor_get(v___x_830_, 0);
lean_inc(v_a_831_);
lean_dec_ref(v___x_830_);
v___x_832_ = l_Lean_Elab_Tactic_logUnassignedAndAbort(v_a_831_, v___y_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec(v_a_831_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_dec_ref_known(v___x_832_, 1);
v___y_798_ = v___y_786_;
v___y_799_ = v___y_787_;
v___y_800_ = v___y_788_;
v___y_801_ = v___y_789_;
goto v___jp_797_;
}
else
{
lean_dec(v_a_796_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
lean_dec(v_tacName_779_);
lean_dec(v_a_777_);
return v___x_832_;
}
}
else
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
lean_dec(v_a_796_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec(v_tacName_779_);
lean_dec(v_a_777_);
v_a_833_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_828_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_828_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
}
v___jp_797_:
{
lean_object* v___x_802_; 
lean_inc(v___y_801_);
lean_inc_ref(v___y_800_);
lean_inc(v___y_799_);
lean_inc_ref(v___y_798_);
lean_inc(v_a_796_);
lean_inc(v_a_777_);
v___x_802_ = lean_checked_assign(v_a_777_, v_a_796_, v___y_798_, v___y_799_, v___y_800_, v___y_801_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_819_; 
v_a_803_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_819_ == 0)
{
v___x_805_ = v___x_802_;
v_isShared_806_ = v_isSharedCheck_819_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v___x_802_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_819_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
uint8_t v___x_807_; 
v___x_807_ = lean_unbox(v_a_803_);
lean_dec(v_a_803_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
lean_del_object(v___x_805_);
v___x_808_ = lean_obj_once(&l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1, &l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1);
v___x_809_ = l_Lean_indentExpr(v_a_796_);
v___x_810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_810_, 0, v___x_808_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
v___x_811_ = lean_obj_once(&l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3, &l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3);
v___x_812_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_810_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
v___x_814_ = l_Lean_Meta_throwTacticEx___redArg(v_tacName_779_, v_a_777_, v___x_813_, v___y_798_, v___y_799_, v___y_800_, v___y_801_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
return v___x_814_;
}
else
{
lean_object* v___x_815_; lean_object* v___x_817_; 
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v_a_796_);
lean_dec(v_tacName_779_);
lean_dec(v_a_777_);
v___x_815_ = lean_box(0);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 0, v___x_815_);
v___x_817_ = v___x_805_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v___x_815_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
else
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_827_; 
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v_a_796_);
lean_dec(v_tacName_779_);
lean_dec(v_a_777_);
v_a_820_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_827_ == 0)
{
v___x_822_ = v___x_802_;
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___x_802_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_825_; 
if (v_isShared_823_ == 0)
{
v___x_825_ = v___x_822_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_a_820_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
}
else
{
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_848_; 
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec(v_tacName_779_);
lean_dec(v_a_777_);
v_a_841_ = lean_ctor_get(v___x_795_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_795_);
if (v_isSharedCheck_848_ == 0)
{
v___x_843_ = v___x_795_;
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v___x_795_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_841_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
else
{
lean_object* v_a_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_856_; 
lean_dec(v_a_792_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec(v_tacName_779_);
lean_dec_ref(v_x_778_);
lean_dec(v_a_777_);
v_a_849_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_856_ == 0)
{
v___x_851_ = v___x_793_;
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_a_849_);
lean_dec(v___x_793_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___x_854_; 
if (v_isShared_852_ == 0)
{
v___x_854_ = v___x_851_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_a_849_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
}
}
else
{
lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_864_; 
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec(v_tacName_779_);
lean_dec_ref(v_x_778_);
lean_dec(v_a_777_);
v_a_857_ = lean_ctor_get(v___x_791_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_864_ == 0)
{
v___x_859_ = v___x_791_;
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_a_857_);
lean_dec(v___x_791_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_862_; 
if (v_isShared_860_ == 0)
{
v___x_862_ = v___x_859_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_857_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___boxed(lean_object* v_a_865_, lean_object* v_x_866_, lean_object* v_tacName_867_, lean_object* v_checkNewUnassigned_868_, lean_object* v_mvarCounter_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
uint8_t v_checkNewUnassigned_boxed_879_; lean_object* v_res_880_; 
v_checkNewUnassigned_boxed_879_ = lean_unbox(v_checkNewUnassigned_868_);
v_res_880_ = l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0(v_a_865_, v_x_866_, v_tacName_867_, v_checkNewUnassigned_boxed_879_, v_mvarCounter_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_);
lean_dec(v_mvarCounter_869_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing(lean_object* v_tacName_881_, lean_object* v_x_882_, uint8_t v_checkNewUnassigned_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_){
_start:
{
lean_object* v___x_893_; lean_object* v_mctx_894_; lean_object* v_mvarCounter_895_; lean_object* v___x_896_; 
v___x_893_ = lean_st_ref_get(v_a_889_);
v_mctx_894_ = lean_ctor_get(v___x_893_, 0);
lean_inc_ref(v_mctx_894_);
lean_dec(v___x_893_);
v_mvarCounter_895_ = lean_ctor_get(v_mctx_894_, 3);
lean_inc(v_mvarCounter_895_);
lean_dec_ref(v_mctx_894_);
v___x_896_ = l_Lean_Elab_Tactic_popMainGoal___redArg(v_a_885_, v_a_888_, v_a_889_, v_a_890_, v_a_891_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___x_898_; lean_object* v___f_899_; lean_object* v___x_900_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc_n(v_a_897_, 3);
lean_dec_ref_known(v___x_896_, 1);
v___x_898_ = lean_box(v_checkNewUnassigned_883_);
v___f_899_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___boxed), 14, 5);
lean_closure_set(v___f_899_, 0, v_a_897_);
lean_closure_set(v___f_899_, 1, v_x_882_);
lean_closure_set(v___f_899_, 2, v_tacName_881_);
lean_closure_set(v___f_899_, 3, v___x_898_);
lean_closure_set(v___f_899_, 4, v_mvarCounter_895_);
v___x_900_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(v_a_897_, v___f_899_, v_a_884_, v_a_885_, v_a_886_, v_a_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_dec(v_a_897_);
return v___x_900_;
}
else
{
lean_object* v_a_901_; uint8_t v___x_902_; 
v_a_901_ = lean_ctor_get(v___x_900_, 0);
v___x_902_ = l_Lean_Exception_isInterrupt(v_a_901_);
if (v___x_902_ == 0)
{
uint8_t v___x_903_; 
lean_inc(v_a_901_);
v___x_903_ = l_Lean_Exception_isRuntime(v_a_901_);
if (v___x_903_ == 0)
{
lean_object* v___x_904_; 
lean_inc(v_a_901_);
lean_dec_ref_known(v___x_900_, 1);
v___x_904_ = l_Lean_Elab_Tactic_pushGoal___redArg(v_a_897_, v_a_885_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_911_ == 0)
{
lean_object* v_unused_912_; 
v_unused_912_ = lean_ctor_get(v___x_904_, 0);
lean_dec(v_unused_912_);
v___x_906_ = v___x_904_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_dec(v___x_904_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
lean_ctor_set_tag(v___x_906_, 1);
lean_ctor_set(v___x_906_, 0, v_a_901_);
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_901_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
else
{
lean_dec(v_a_901_);
return v___x_904_;
}
}
else
{
lean_dec(v_a_897_);
return v___x_900_;
}
}
else
{
lean_dec(v_a_897_);
return v___x_900_;
}
}
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
lean_dec(v_mvarCounter_895_);
lean_dec_ref(v_x_882_);
lean_dec(v_tacName_881_);
v_a_913_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_896_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_896_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___boxed(lean_object* v_tacName_921_, lean_object* v_x_922_, lean_object* v_checkNewUnassigned_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_){
_start:
{
uint8_t v_checkNewUnassigned_boxed_933_; lean_object* v_res_934_; 
v_checkNewUnassigned_boxed_933_ = lean_unbox(v_checkNewUnassigned_923_);
v_res_934_ = l_Lean_Elab_Tactic_closeMainGoalUsing(v_tacName_921_, v_x_922_, v_checkNewUnassigned_boxed_933_, v_a_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_, v_a_930_, v_a_931_);
lean_dec(v_a_931_);
lean_dec_ref(v_a_930_);
lean_dec(v_a_929_);
lean_dec_ref(v_a_928_);
lean_dec(v_a_927_);
lean_dec_ref(v_a_926_);
lean_dec(v_a_925_);
lean_dec_ref(v_a_924_);
return v_res_934_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_935_ = lean_box(0);
v___x_936_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_937_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
lean_ctor_set(v___x_937_, 1, v___x_935_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg(){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0);
v___x_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___boxed(lean_object* v___y_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0(lean_object* v_00_u03b1_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
lean_object* v___x_953_; 
v___x_953_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___boxed(lean_object* v_00_u03b1_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0(v_00_u03b1_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
lean_dec(v___y_958_);
lean_dec_ref(v___y_957_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___lam__0(lean_object* v___x_965_, lean_object* v_type_966_, lean_object* v_x_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
lean_object* v___x_977_; uint8_t v___x_978_; lean_object* v___x_979_; 
v___x_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_977_, 0, v_type_966_);
v___x_978_ = 0;
v___x_979_ = l_Lean_Elab_Tactic_elabTermEnsuringType(v___x_965_, v___x_977_, v___x_978_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___lam__0___boxed(lean_object* v___x_980_, lean_object* v_type_981_, lean_object* v_x_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lean_Elab_Tactic_evalExact___lam__0(v___x_980_, v_type_981_, v_x_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v_x_982_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact(lean_object* v_stx_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v___x_1014_; uint8_t v___x_1015_; 
v___x_1014_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExact___closed__4));
lean_inc(v_stx_1004_);
v___x_1015_ = l_Lean_Syntax_isOfKind(v_stx_1004_, v___x_1014_);
if (v___x_1015_ == 0)
{
lean_object* v___x_1016_; 
lean_dec(v_stx_1004_);
v___x_1016_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_1016_;
}
else
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___f_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1017_ = lean_unsigned_to_nat(1u);
v___x_1018_ = l_Lean_Syntax_getArg(v_stx_1004_, v___x_1017_);
lean_dec(v_stx_1004_);
v___f_1019_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalExact___lam__0___boxed), 12, 1);
lean_closure_set(v___f_1019_, 0, v___x_1018_);
v___x_1020_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExact___closed__5));
v___x_1021_ = l_Lean_Elab_Tactic_closeMainGoalUsing(v___x_1020_, v___f_1019_, v___x_1015_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_);
return v___x_1021_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___boxed(lean_object* v_stx_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l_Lean_Elab_Tactic_evalExact(v_stx_1022_, v_a_1023_, v_a_1024_, v_a_1025_, v_a_1026_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_);
lean_dec(v_a_1030_);
lean_dec_ref(v_a_1029_);
lean_dec(v_a_1028_);
lean_dec_ref(v_a_1027_);
lean_dec(v_a_1026_);
lean_dec_ref(v_a_1025_);
lean_dec(v_a_1024_);
lean_dec_ref(v_a_1023_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1(){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1040_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1041_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExact___closed__4));
v___x_1042_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1));
v___x_1043_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalExact___boxed), 10, 0);
v___x_1044_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1040_, v___x_1041_, v___x_1042_, v___x_1043_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___boxed(lean_object* v_a_1045_){
_start:
{
lean_object* v_res_1046_; 
v_res_1046_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1();
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3(){
_start:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1073_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1));
v___x_1074_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__6));
v___x_1075_ = l_Lean_addBuiltinDeclarationRanges(v___x_1073_, v___x_1074_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___boxed(lean_object* v_a_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3();
return v_res_1077_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0(lean_object* v_mctx_1078_, lean_object* v_mvarId_u2081_1079_, lean_object* v_mvarId_u2082_1080_){
_start:
{
lean_object* v_decl_u2081_1081_; lean_object* v_index_1082_; lean_object* v_decl_u2082_1083_; lean_object* v_index_1084_; uint8_t v___x_1085_; 
lean_inc(v_mvarId_u2081_1079_);
v_decl_u2081_1081_ = l_Lean_MetavarContext_getDecl(v_mctx_1078_, v_mvarId_u2081_1079_);
v_index_1082_ = lean_ctor_get(v_decl_u2081_1081_, 6);
lean_inc(v_index_1082_);
lean_dec_ref(v_decl_u2081_1081_);
lean_inc(v_mvarId_u2082_1080_);
v_decl_u2082_1083_ = l_Lean_MetavarContext_getDecl(v_mctx_1078_, v_mvarId_u2082_1080_);
v_index_1084_ = lean_ctor_get(v_decl_u2082_1083_, 6);
lean_inc(v_index_1084_);
lean_dec_ref(v_decl_u2082_1083_);
v___x_1085_ = lean_nat_dec_eq(v_index_1082_, v_index_1084_);
if (v___x_1085_ == 0)
{
uint8_t v___x_1086_; 
lean_dec(v_mvarId_u2082_1080_);
lean_dec(v_mvarId_u2081_1079_);
v___x_1086_ = lean_nat_dec_lt(v_index_1082_, v_index_1084_);
lean_dec(v_index_1084_);
lean_dec(v_index_1082_);
return v___x_1086_;
}
else
{
uint8_t v___x_1087_; 
lean_dec(v_index_1084_);
lean_dec(v_index_1082_);
v___x_1087_ = l_Lean_Name_quickLt(v_mvarId_u2081_1079_, v_mvarId_u2082_1080_);
lean_dec(v_mvarId_u2082_1080_);
lean_dec(v_mvarId_u2081_1079_);
return v___x_1087_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0___boxed(lean_object* v_mctx_1088_, lean_object* v_mvarId_u2081_1089_, lean_object* v_mvarId_u2082_1090_){
_start:
{
uint8_t v_res_1091_; lean_object* v_r_1092_; 
v_res_1091_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0(v_mctx_1088_, v_mvarId_u2081_1089_, v_mvarId_u2082_1090_);
lean_dec_ref(v_mctx_1088_);
v_r_1092_ = lean_box(v_res_1091_);
return v_r_1092_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__1(lean_object* v_mvarIds_1093_, lean_object* v_toPure_1094_, lean_object* v_mctx_1095_){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; uint8_t v___x_1098_; 
v___x_1096_ = lean_array_get_size(v_mvarIds_1093_);
v___x_1097_ = lean_unsigned_to_nat(0u);
v___x_1098_ = lean_nat_dec_eq(v___x_1096_, v___x_1097_);
if (v___x_1098_ == 0)
{
lean_object* v___f_1099_; lean_object* v___y_1101_; lean_object* v___y_1102_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___y_1108_; uint8_t v___x_1110_; 
v___f_1099_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1099_, 0, v_mctx_1095_);
v___x_1105_ = lean_unsigned_to_nat(1u);
v___x_1106_ = lean_nat_sub(v___x_1096_, v___x_1105_);
v___x_1110_ = lean_nat_dec_le(v___x_1097_, v___x_1106_);
if (v___x_1110_ == 0)
{
lean_inc(v___x_1106_);
v___y_1108_ = v___x_1106_;
goto v___jp_1107_;
}
else
{
v___y_1108_ = v___x_1097_;
goto v___jp_1107_;
}
v___jp_1100_:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_1099_, v___x_1096_, v_mvarIds_1093_, v___y_1101_, v___y_1102_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_1102_);
v___x_1104_ = lean_apply_2(v_toPure_1094_, lean_box(0), v___x_1103_);
return v___x_1104_;
}
v___jp_1107_:
{
uint8_t v___x_1109_; 
v___x_1109_ = lean_nat_dec_le(v___y_1108_, v___x_1106_);
if (v___x_1109_ == 0)
{
lean_dec(v___x_1106_);
lean_inc(v___y_1108_);
v___y_1101_ = v___y_1108_;
v___y_1102_ = v___y_1108_;
goto v___jp_1100_;
}
else
{
v___y_1101_ = v___y_1108_;
v___y_1102_ = v___x_1106_;
goto v___jp_1100_;
}
}
}
else
{
lean_object* v___x_1111_; 
lean_dec_ref(v_mctx_1095_);
v___x_1111_ = lean_apply_2(v_toPure_1094_, lean_box(0), v_mvarIds_1093_);
return v___x_1111_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(lean_object* v_inst_1112_, lean_object* v_inst_1113_, lean_object* v_mvarIds_1114_){
_start:
{
lean_object* v_toApplicative_1115_; lean_object* v_toBind_1116_; lean_object* v_getMCtx_1117_; lean_object* v_toPure_1118_; lean_object* v___f_1119_; lean_object* v___x_1120_; 
v_toApplicative_1115_ = lean_ctor_get(v_inst_1113_, 0);
lean_inc_ref(v_toApplicative_1115_);
v_toBind_1116_ = lean_ctor_get(v_inst_1113_, 1);
lean_inc(v_toBind_1116_);
lean_dec_ref(v_inst_1113_);
v_getMCtx_1117_ = lean_ctor_get(v_inst_1112_, 0);
lean_inc(v_getMCtx_1117_);
lean_dec_ref(v_inst_1112_);
v_toPure_1118_ = lean_ctor_get(v_toApplicative_1115_, 1);
lean_inc(v_toPure_1118_);
lean_dec_ref(v_toApplicative_1115_);
v___f_1119_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1119_, 0, v_mvarIds_1114_);
lean_closure_set(v___f_1119_, 1, v_toPure_1118_);
v___x_1120_ = lean_apply_4(v_toBind_1116_, lean_box(0), lean_box(0), v_getMCtx_1117_, v___f_1119_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex(lean_object* v_m_1121_, lean_object* v_inst_1122_, lean_object* v_inst_1123_, lean_object* v_mvarIds_1124_){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(v_inst_1122_, v_inst_1123_, v_mvarIds_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdsByIndex___redArg(lean_object* v_inst_1126_, lean_object* v_inst_1127_, lean_object* v_mvarIds_1128_){
_start:
{
lean_object* v___x_1129_; 
v___x_1129_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(v_inst_1126_, v_inst_1127_, v_mvarIds_1128_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdsByIndex(lean_object* v_m_1130_, lean_object* v_inst_1131_, lean_object* v_inst_1132_, lean_object* v_mvarIds_1133_){
_start:
{
lean_object* v___x_1134_; 
v___x_1134_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(v_inst_1131_, v_inst_1132_, v_mvarIds_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0(lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v___x_1140_; lean_object* v_mctx_1141_; lean_object* v___x_1142_; 
v___x_1140_ = lean_st_ref_get(v___y_1136_);
v_mctx_1141_ = lean_ctor_get(v___x_1140_, 0);
lean_inc_ref(v_mctx_1141_);
lean_dec(v___x_1140_);
v___x_1142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1142_, 0, v_mctx_1141_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0___boxed(lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0(v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_);
lean_dec(v___y_1146_);
lean_dec_ref(v___y_1145_);
lean_dec(v___y_1144_);
lean_dec_ref(v___y_1143_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__1(lean_object* v_val_1149_, lean_object* v_toPure_1150_, lean_object* v_newMVarIds_1151_){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1152_, 0, v_val_1149_);
lean_ctor_set(v___x_1152_, 1, v_newMVarIds_1151_);
v___x_1153_ = lean_apply_2(v_toPure_1150_, lean_box(0), v___x_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__2(lean_object* v___x_1154_, lean_object* v___x_1155_, lean_object* v_inst_1156_, lean_object* v_toBind_1157_, lean_object* v___f_1158_, lean_object* v_newMVarIds_1159_){
_start:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1160_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(v___x_1154_, v___x_1155_, v_newMVarIds_1159_);
v___x_1161_ = lean_apply_2(v_inst_1156_, lean_box(0), v___x_1160_);
v___x_1162_ = lean_apply_4(v_toBind_1157_, lean_box(0), lean_box(0), v___x_1161_, v___f_1158_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__3(lean_object* v_mvarCounter_1163_, lean_object* v_inst_1164_, lean_object* v_toBind_1165_, lean_object* v___f_1166_, lean_object* v_newMVarIds_1167_){
_start:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1168_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_filterOldMVars___boxed), 7, 2);
lean_closure_set(v___x_1168_, 0, v_newMVarIds_1167_);
lean_closure_set(v___x_1168_, 1, v_mvarCounter_1163_);
v___x_1169_ = lean_apply_2(v_inst_1164_, lean_box(0), v___x_1168_);
v___x_1170_ = lean_apply_4(v_toBind_1165_, lean_box(0), lean_box(0), v___x_1169_, v___f_1166_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__4(lean_object* v_toPure_1171_, lean_object* v___x_1172_, lean_object* v___x_1173_, lean_object* v_inst_1174_, lean_object* v_toBind_1175_, lean_object* v_mvarCounter_1176_, lean_object* v_val_1177_){
_start:
{
lean_object* v___f_1178_; lean_object* v___f_1179_; lean_object* v___f_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; 
lean_inc_ref(v_val_1177_);
v___f_1178_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1178_, 0, v_val_1177_);
lean_closure_set(v___f_1178_, 1, v_toPure_1171_);
lean_inc_n(v_toBind_1175_, 2);
lean_inc_n(v_inst_1174_, 2);
v___f_1179_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__2), 6, 5);
lean_closure_set(v___f_1179_, 0, v___x_1172_);
lean_closure_set(v___f_1179_, 1, v___x_1173_);
lean_closure_set(v___f_1179_, 2, v_inst_1174_);
lean_closure_set(v___f_1179_, 3, v_toBind_1175_);
lean_closure_set(v___f_1179_, 4, v___f_1178_);
v___f_1180_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__3), 5, 4);
lean_closure_set(v___f_1180_, 0, v_mvarCounter_1176_);
lean_closure_set(v___f_1180_, 1, v_inst_1174_);
lean_closure_set(v___f_1180_, 2, v_toBind_1175_);
lean_closure_set(v___f_1180_, 3, v___f_1179_);
v___x_1181_ = lean_alloc_closure((void*)(l_Lean_Meta_getMVarsNoDelayed___boxed), 6, 1);
lean_closure_set(v___x_1181_, 0, v_val_1177_);
v___x_1182_ = lean_apply_2(v_inst_1174_, lean_box(0), v___x_1181_);
v___x_1183_ = lean_apply_4(v_toBind_1175_, lean_box(0), lean_box(0), v___x_1182_, v___f_1180_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__5(lean_object* v_toPure_1184_, lean_object* v___x_1185_, lean_object* v___x_1186_, lean_object* v_inst_1187_, lean_object* v_toBind_1188_, lean_object* v_k_1189_, lean_object* v_____do__lift_1190_){
_start:
{
lean_object* v_mvarCounter_1191_; lean_object* v___f_1192_; lean_object* v___x_1193_; 
v_mvarCounter_1191_ = lean_ctor_get(v_____do__lift_1190_, 3);
lean_inc(v_mvarCounter_1191_);
lean_dec_ref(v_____do__lift_1190_);
lean_inc(v_toBind_1188_);
v___f_1192_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__4), 7, 6);
lean_closure_set(v___f_1192_, 0, v_toPure_1184_);
lean_closure_set(v___f_1192_, 1, v___x_1185_);
lean_closure_set(v___f_1192_, 2, v___x_1186_);
lean_closure_set(v___f_1192_, 3, v_inst_1187_);
lean_closure_set(v___f_1192_, 4, v_toBind_1188_);
lean_closure_set(v___f_1192_, 5, v_mvarCounter_1191_);
v___x_1193_ = lean_apply_4(v_toBind_1188_, lean_box(0), lean_box(0), v_k_1189_, v___f_1192_);
return v___x_1193_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0(void){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l_instMonadEIO___redArg();
return v___x_1194_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1(void){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1195_ = lean_obj_once(&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0, &l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0);
v___x_1196_ = l_StateRefT_x27_instMonad___redArg(v___x_1195_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg(lean_object* v_inst_1202_, lean_object* v_inst_1203_, lean_object* v_k_1204_){
_start:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v_toApplicative_1207_; lean_object* v_toFunctor_1208_; lean_object* v_toSeq_1209_; lean_object* v_toSeqLeft_1210_; lean_object* v_toSeqRight_1211_; lean_object* v___f_1212_; lean_object* v___f_1213_; lean_object* v___f_1214_; lean_object* v___f_1215_; lean_object* v___x_1216_; lean_object* v___f_1217_; lean_object* v___f_1218_; lean_object* v___f_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v_toApplicative_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1257_; 
v___x_1205_ = l_Lean_Meta_instMonadMCtxMetaM;
v___x_1206_ = lean_obj_once(&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1, &l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1);
v_toApplicative_1207_ = lean_ctor_get(v___x_1206_, 0);
v_toFunctor_1208_ = lean_ctor_get(v_toApplicative_1207_, 0);
v_toSeq_1209_ = lean_ctor_get(v_toApplicative_1207_, 2);
v_toSeqLeft_1210_ = lean_ctor_get(v_toApplicative_1207_, 3);
v_toSeqRight_1211_ = lean_ctor_get(v_toApplicative_1207_, 4);
v___f_1212_ = ((lean_object*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__2));
v___f_1213_ = ((lean_object*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1208_, 2);
v___f_1214_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1214_, 0, v_toFunctor_1208_);
v___f_1215_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1215_, 0, v_toFunctor_1208_);
v___x_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___f_1214_);
lean_ctor_set(v___x_1216_, 1, v___f_1215_);
lean_inc(v_toSeqRight_1211_);
v___f_1217_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1217_, 0, v_toSeqRight_1211_);
lean_inc(v_toSeqLeft_1210_);
v___f_1218_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1218_, 0, v_toSeqLeft_1210_);
lean_inc(v_toSeq_1209_);
v___f_1219_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1219_, 0, v_toSeq_1209_);
v___x_1220_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1216_);
lean_ctor_set(v___x_1220_, 1, v___f_1212_);
lean_ctor_set(v___x_1220_, 2, v___f_1219_);
lean_ctor_set(v___x_1220_, 3, v___f_1218_);
lean_ctor_set(v___x_1220_, 4, v___f_1217_);
v___x_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1220_);
lean_ctor_set(v___x_1221_, 1, v___f_1213_);
v___x_1222_ = l_StateRefT_x27_instMonad___redArg(v___x_1221_);
v_toApplicative_1223_ = lean_ctor_get(v___x_1222_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1222_);
if (v_isSharedCheck_1257_ == 0)
{
lean_object* v_unused_1258_; 
v_unused_1258_ = lean_ctor_get(v___x_1222_, 1);
lean_dec(v_unused_1258_);
v___x_1225_ = v___x_1222_;
v_isShared_1226_ = v_isSharedCheck_1257_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_toApplicative_1223_);
lean_dec(v___x_1222_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1257_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v_toFunctor_1227_; lean_object* v_toSeq_1228_; lean_object* v_toSeqLeft_1229_; lean_object* v_toSeqRight_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1255_; 
v_toFunctor_1227_ = lean_ctor_get(v_toApplicative_1223_, 0);
v_toSeq_1228_ = lean_ctor_get(v_toApplicative_1223_, 2);
v_toSeqLeft_1229_ = lean_ctor_get(v_toApplicative_1223_, 3);
v_toSeqRight_1230_ = lean_ctor_get(v_toApplicative_1223_, 4);
v_isSharedCheck_1255_ = !lean_is_exclusive(v_toApplicative_1223_);
if (v_isSharedCheck_1255_ == 0)
{
lean_object* v_unused_1256_; 
v_unused_1256_ = lean_ctor_get(v_toApplicative_1223_, 1);
lean_dec(v_unused_1256_);
v___x_1232_ = v_toApplicative_1223_;
v_isShared_1233_ = v_isSharedCheck_1255_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_toSeqRight_1230_);
lean_inc(v_toSeqLeft_1229_);
lean_inc(v_toSeq_1228_);
lean_inc(v_toFunctor_1227_);
lean_dec(v_toApplicative_1223_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1255_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v___f_1234_; lean_object* v___f_1235_; lean_object* v___f_1236_; lean_object* v___f_1237_; lean_object* v___x_1238_; lean_object* v___f_1239_; lean_object* v___f_1240_; lean_object* v___f_1241_; lean_object* v___x_1243_; 
v___f_1234_ = ((lean_object*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__4));
v___f_1235_ = ((lean_object*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__5));
lean_inc_ref(v_toFunctor_1227_);
v___f_1236_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1236_, 0, v_toFunctor_1227_);
v___f_1237_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1237_, 0, v_toFunctor_1227_);
v___x_1238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___f_1236_);
lean_ctor_set(v___x_1238_, 1, v___f_1237_);
v___f_1239_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1239_, 0, v_toSeqRight_1230_);
v___f_1240_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1240_, 0, v_toSeqLeft_1229_);
v___f_1241_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1241_, 0, v_toSeq_1228_);
if (v_isShared_1233_ == 0)
{
lean_ctor_set(v___x_1232_, 4, v___f_1239_);
lean_ctor_set(v___x_1232_, 3, v___f_1240_);
lean_ctor_set(v___x_1232_, 2, v___f_1241_);
lean_ctor_set(v___x_1232_, 1, v___f_1234_);
lean_ctor_set(v___x_1232_, 0, v___x_1238_);
v___x_1243_ = v___x_1232_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v___x_1238_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v___f_1234_);
lean_ctor_set(v_reuseFailAlloc_1254_, 2, v___f_1241_);
lean_ctor_set(v_reuseFailAlloc_1254_, 3, v___f_1240_);
lean_ctor_set(v_reuseFailAlloc_1254_, 4, v___f_1239_);
v___x_1243_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
lean_object* v___x_1245_; 
if (v_isShared_1226_ == 0)
{
lean_ctor_set(v___x_1225_, 1, v___f_1235_);
lean_ctor_set(v___x_1225_, 0, v___x_1243_);
v___x_1245_ = v___x_1225_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v___x_1243_);
lean_ctor_set(v_reuseFailAlloc_1253_, 1, v___f_1235_);
v___x_1245_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
lean_object* v_toApplicative_1246_; lean_object* v_toBind_1247_; lean_object* v_toPure_1248_; lean_object* v___f_1249_; lean_object* v___x_1250_; lean_object* v___f_1251_; lean_object* v___x_1252_; 
v_toApplicative_1246_ = lean_ctor_get(v_inst_1202_, 0);
lean_inc_ref(v_toApplicative_1246_);
v_toBind_1247_ = lean_ctor_get(v_inst_1202_, 1);
lean_inc_n(v_toBind_1247_, 2);
lean_dec_ref(v_inst_1202_);
v_toPure_1248_ = lean_ctor_get(v_toApplicative_1246_, 1);
lean_inc(v_toPure_1248_);
lean_dec_ref(v_toApplicative_1246_);
v___f_1249_ = ((lean_object*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__6));
lean_inc(v_inst_1203_);
v___x_1250_ = lean_apply_2(v_inst_1203_, lean_box(0), v___f_1249_);
v___f_1251_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__5), 7, 6);
lean_closure_set(v___f_1251_, 0, v_toPure_1248_);
lean_closure_set(v___f_1251_, 1, v___x_1205_);
lean_closure_set(v___f_1251_, 2, v___x_1245_);
lean_closure_set(v___f_1251_, 3, v_inst_1203_);
lean_closure_set(v___f_1251_, 4, v_toBind_1247_);
lean_closure_set(v___f_1251_, 5, v_k_1204_);
v___x_1252_ = lean_apply_4(v_toBind_1247_, lean_box(0), lean_box(0), v___x_1250_, v___f_1251_);
return v___x_1252_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars(lean_object* v_m_1259_, lean_object* v_inst_1260_, lean_object* v_inst_1261_, lean_object* v_k_1262_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l_Lean_Elab_Tactic_collectFreshMVars___redArg(v_inst_1260_, v_inst_1261_, v_k_1262_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(lean_object* v_as_1264_, size_t v_i_1265_, size_t v_stop_1266_, lean_object* v_b_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v_a_1276_; uint8_t v___x_1280_; 
v___x_1280_ = lean_usize_dec_eq(v_i_1265_, v_stop_1266_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1281_ = lean_array_uget_borrowed(v_as_1264_, v_i_1265_);
lean_inc(v___x_1281_);
v___x_1282_ = l_Lean_Elab_Term_isLetRecAuxMVar(v___x_1281_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; uint8_t v___x_1284_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_a_1283_);
lean_dec_ref_known(v___x_1282_, 1);
v___x_1284_ = lean_unbox(v_a_1283_);
lean_dec(v_a_1283_);
if (v___x_1284_ == 0)
{
lean_object* v___x_1285_; 
lean_inc(v___x_1281_);
v___x_1285_ = lean_array_push(v_b_1267_, v___x_1281_);
v_a_1276_ = v___x_1285_;
goto v___jp_1275_;
}
else
{
v_a_1276_ = v_b_1267_;
goto v___jp_1275_;
}
}
else
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1293_; 
lean_dec_ref(v_b_1267_);
v_a_1286_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1288_ = v___x_1282_;
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1282_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1291_; 
if (v_isShared_1289_ == 0)
{
v___x_1291_ = v___x_1288_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_a_1286_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
}
else
{
lean_object* v___x_1294_; 
v___x_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1294_, 0, v_b_1267_);
return v___x_1294_;
}
v___jp_1275_:
{
size_t v___x_1277_; size_t v___x_1278_; 
v___x_1277_ = ((size_t)1ULL);
v___x_1278_ = lean_usize_add(v_i_1265_, v___x_1277_);
v_i_1265_ = v___x_1278_;
v_b_1267_ = v_a_1276_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg___boxed(lean_object* v_as_1295_, lean_object* v_i_1296_, lean_object* v_stop_1297_, lean_object* v_b_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_){
_start:
{
size_t v_i_boxed_1306_; size_t v_stop_boxed_1307_; lean_object* v_res_1308_; 
v_i_boxed_1306_ = lean_unbox_usize(v_i_1296_);
lean_dec(v_i_1296_);
v_stop_boxed_1307_ = lean_unbox_usize(v_stop_1297_);
lean_dec(v_stop_1297_);
v_res_1308_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(v_as_1295_, v_i_boxed_1306_, v_stop_boxed_1307_, v_b_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec_ref(v_as_1295_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(lean_object* v_as_1309_, size_t v_i_1310_, size_t v_stop_1311_, lean_object* v_b_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_){
_start:
{
lean_object* v_a_1319_; uint8_t v___x_1323_; 
v___x_1323_ = lean_usize_dec_eq(v_i_1310_, v_stop_1311_);
if (v___x_1323_ == 0)
{
lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1324_ = lean_array_uget_borrowed(v_as_1309_, v_i_1310_);
lean_inc(v___x_1324_);
v___x_1325_ = l_Lean_MVarId_getKind(v___x_1324_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v_a_1326_; uint8_t v___x_1327_; uint8_t v___x_1328_; 
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc(v_a_1326_);
lean_dec_ref_known(v___x_1325_, 1);
v___x_1327_ = lean_unbox(v_a_1326_);
lean_dec(v_a_1326_);
v___x_1328_ = l_Lean_MetavarKind_isNatural(v___x_1327_);
if (v___x_1328_ == 0)
{
v_a_1319_ = v_b_1312_;
goto v___jp_1318_;
}
else
{
lean_object* v___x_1329_; 
lean_inc(v___x_1324_);
v___x_1329_ = lean_array_push(v_b_1312_, v___x_1324_);
v_a_1319_ = v___x_1329_;
goto v___jp_1318_;
}
}
else
{
lean_object* v_a_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1337_; 
lean_dec_ref(v_b_1312_);
v_a_1330_ = lean_ctor_get(v___x_1325_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1332_ = v___x_1325_;
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_a_1330_);
lean_dec(v___x_1325_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1335_; 
if (v_isShared_1333_ == 0)
{
v___x_1335_ = v___x_1332_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v_a_1330_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
}
}
else
{
lean_object* v___x_1338_; 
v___x_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1338_, 0, v_b_1312_);
return v___x_1338_;
}
v___jp_1318_:
{
size_t v___x_1320_; size_t v___x_1321_; 
v___x_1320_ = ((size_t)1ULL);
v___x_1321_ = lean_usize_add(v_i_1310_, v___x_1320_);
v_i_1310_ = v___x_1321_;
v_b_1312_ = v_a_1319_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg___boxed(lean_object* v_as_1339_, lean_object* v_i_1340_, lean_object* v_stop_1341_, lean_object* v_b_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
size_t v_i_boxed_1348_; size_t v_stop_boxed_1349_; lean_object* v_res_1350_; 
v_i_boxed_1348_ = lean_unbox_usize(v_i_1340_);
lean_dec(v_i_1340_);
v_stop_boxed_1349_ = lean_unbox_usize(v_stop_1341_);
lean_dec(v_stop_1341_);
v_res_1350_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(v_as_1339_, v_i_boxed_1348_, v_stop_boxed_1349_, v_b_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1345_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
lean_dec_ref(v_as_1339_);
return v_res_1350_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(lean_object* v___x_1351_, lean_object* v_mvarId_u2081_1352_, lean_object* v_mvarId_u2082_1353_){
_start:
{
lean_object* v_decl_u2081_1354_; lean_object* v_index_1355_; lean_object* v_decl_u2082_1356_; lean_object* v_index_1357_; uint8_t v___x_1358_; 
lean_inc(v_mvarId_u2081_1352_);
v_decl_u2081_1354_ = l_Lean_MetavarContext_getDecl(v___x_1351_, v_mvarId_u2081_1352_);
v_index_1355_ = lean_ctor_get(v_decl_u2081_1354_, 6);
lean_inc(v_index_1355_);
lean_dec_ref(v_decl_u2081_1354_);
lean_inc(v_mvarId_u2082_1353_);
v_decl_u2082_1356_ = l_Lean_MetavarContext_getDecl(v___x_1351_, v_mvarId_u2082_1353_);
v_index_1357_ = lean_ctor_get(v_decl_u2082_1356_, 6);
lean_inc(v_index_1357_);
lean_dec_ref(v_decl_u2082_1356_);
v___x_1358_ = lean_nat_dec_eq(v_index_1355_, v_index_1357_);
if (v___x_1358_ == 0)
{
uint8_t v___x_1359_; 
lean_dec(v_mvarId_u2082_1353_);
lean_dec(v_mvarId_u2081_1352_);
v___x_1359_ = lean_nat_dec_lt(v_index_1355_, v_index_1357_);
lean_dec(v_index_1357_);
lean_dec(v_index_1355_);
return v___x_1359_;
}
else
{
uint8_t v___x_1360_; 
lean_dec(v_index_1357_);
lean_dec(v_index_1355_);
v___x_1360_ = l_Lean_Name_quickLt(v_mvarId_u2081_1352_, v_mvarId_u2082_1353_);
lean_dec(v_mvarId_u2082_1353_);
lean_dec(v_mvarId_u2081_1352_);
return v___x_1360_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v___x_1361_, lean_object* v_mvarId_u2081_1362_, lean_object* v_mvarId_u2082_1363_){
_start:
{
uint8_t v_res_1364_; lean_object* v_r_1365_; 
v_res_1364_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(v___x_1361_, v_mvarId_u2081_1362_, v_mvarId_u2082_1363_);
lean_dec_ref(v___x_1361_);
v_r_1365_ = lean_box(v_res_1364_);
return v_r_1365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v___x_1366_, lean_object* v_hi_1367_, lean_object* v_pivot_1368_, lean_object* v_as_1369_, lean_object* v_i_1370_, lean_object* v_k_1371_){
_start:
{
uint8_t v___y_1373_; uint8_t v___x_1382_; 
v___x_1382_ = lean_nat_dec_lt(v_k_1371_, v_hi_1367_);
if (v___x_1382_ == 0)
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
lean_dec(v_k_1371_);
lean_dec(v_pivot_1368_);
v___x_1383_ = lean_array_fswap(v_as_1369_, v_i_1370_, v_hi_1367_);
v___x_1384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1384_, 0, v_i_1370_);
lean_ctor_set(v___x_1384_, 1, v___x_1383_);
return v___x_1384_;
}
else
{
lean_object* v___x_1385_; lean_object* v_decl_u2081_1386_; lean_object* v_index_1387_; lean_object* v_decl_u2082_1388_; lean_object* v_index_1389_; uint8_t v___x_1390_; 
v___x_1385_ = lean_array_fget_borrowed(v_as_1369_, v_k_1371_);
lean_inc(v___x_1385_);
v_decl_u2081_1386_ = l_Lean_MetavarContext_getDecl(v___x_1366_, v___x_1385_);
v_index_1387_ = lean_ctor_get(v_decl_u2081_1386_, 6);
lean_inc(v_index_1387_);
lean_dec_ref(v_decl_u2081_1386_);
lean_inc(v_pivot_1368_);
v_decl_u2082_1388_ = l_Lean_MetavarContext_getDecl(v___x_1366_, v_pivot_1368_);
v_index_1389_ = lean_ctor_get(v_decl_u2082_1388_, 6);
lean_inc(v_index_1389_);
lean_dec_ref(v_decl_u2082_1388_);
v___x_1390_ = lean_nat_dec_eq(v_index_1387_, v_index_1389_);
if (v___x_1390_ == 0)
{
uint8_t v___x_1391_; 
v___x_1391_ = lean_nat_dec_lt(v_index_1387_, v_index_1389_);
lean_dec(v_index_1389_);
lean_dec(v_index_1387_);
v___y_1373_ = v___x_1391_;
goto v___jp_1372_;
}
else
{
uint8_t v___x_1392_; 
lean_dec(v_index_1389_);
lean_dec(v_index_1387_);
v___x_1392_ = l_Lean_Name_quickLt(v___x_1385_, v_pivot_1368_);
v___y_1373_ = v___x_1392_;
goto v___jp_1372_;
}
}
v___jp_1372_:
{
if (v___y_1373_ == 0)
{
lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1374_ = lean_unsigned_to_nat(1u);
v___x_1375_ = lean_nat_add(v_k_1371_, v___x_1374_);
lean_dec(v_k_1371_);
v_k_1371_ = v___x_1375_;
goto _start;
}
else
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1377_ = lean_array_fswap(v_as_1369_, v_i_1370_, v_k_1371_);
v___x_1378_ = lean_unsigned_to_nat(1u);
v___x_1379_ = lean_nat_add(v_i_1370_, v___x_1378_);
lean_dec(v_i_1370_);
v___x_1380_ = lean_nat_add(v_k_1371_, v___x_1378_);
lean_dec(v_k_1371_);
v_as_1369_ = v___x_1377_;
v_i_1370_ = v___x_1379_;
v_k_1371_ = v___x_1380_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v___x_1393_, lean_object* v_hi_1394_, lean_object* v_pivot_1395_, lean_object* v_as_1396_, lean_object* v_i_1397_, lean_object* v_k_1398_){
_start:
{
lean_object* v_res_1399_; 
v_res_1399_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___redArg(v___x_1393_, v_hi_1394_, v_pivot_1395_, v_as_1396_, v_i_1397_, v_k_1398_);
lean_dec(v_hi_1394_);
lean_dec_ref(v___x_1393_);
return v_res_1399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(lean_object* v___x_1400_, lean_object* v_n_1401_, lean_object* v_as_1402_, lean_object* v_lo_1403_, lean_object* v_hi_1404_){
_start:
{
lean_object* v___y_1406_; uint8_t v___x_1416_; 
v___x_1416_ = lean_nat_dec_lt(v_lo_1403_, v_hi_1404_);
if (v___x_1416_ == 0)
{
lean_dec(v_lo_1403_);
return v_as_1402_;
}
else
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v_mid_1419_; lean_object* v___y_1421_; lean_object* v___y_1427_; lean_object* v___x_1432_; lean_object* v___x_1433_; uint8_t v___x_1434_; 
v___x_1417_ = lean_nat_add(v_lo_1403_, v_hi_1404_);
v___x_1418_ = lean_unsigned_to_nat(1u);
v_mid_1419_ = lean_nat_shiftr(v___x_1417_, v___x_1418_);
lean_dec(v___x_1417_);
v___x_1432_ = lean_array_fget_borrowed(v_as_1402_, v_mid_1419_);
v___x_1433_ = lean_array_fget_borrowed(v_as_1402_, v_lo_1403_);
lean_inc(v___x_1433_);
lean_inc(v___x_1432_);
v___x_1434_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(v___x_1400_, v___x_1432_, v___x_1433_);
if (v___x_1434_ == 0)
{
v___y_1427_ = v_as_1402_;
goto v___jp_1426_;
}
else
{
lean_object* v___x_1435_; 
v___x_1435_ = lean_array_fswap(v_as_1402_, v_lo_1403_, v_mid_1419_);
v___y_1427_ = v___x_1435_;
goto v___jp_1426_;
}
v___jp_1420_:
{
lean_object* v___x_1422_; lean_object* v___x_1423_; uint8_t v___x_1424_; 
v___x_1422_ = lean_array_fget_borrowed(v___y_1421_, v_mid_1419_);
v___x_1423_ = lean_array_fget_borrowed(v___y_1421_, v_hi_1404_);
lean_inc(v___x_1423_);
lean_inc(v___x_1422_);
v___x_1424_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(v___x_1400_, v___x_1422_, v___x_1423_);
if (v___x_1424_ == 0)
{
lean_dec(v_mid_1419_);
v___y_1406_ = v___y_1421_;
goto v___jp_1405_;
}
else
{
lean_object* v___x_1425_; 
v___x_1425_ = lean_array_fswap(v___y_1421_, v_mid_1419_, v_hi_1404_);
lean_dec(v_mid_1419_);
v___y_1406_ = v___x_1425_;
goto v___jp_1405_;
}
}
v___jp_1426_:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; uint8_t v___x_1430_; 
v___x_1428_ = lean_array_fget_borrowed(v___y_1427_, v_hi_1404_);
v___x_1429_ = lean_array_fget_borrowed(v___y_1427_, v_lo_1403_);
lean_inc(v___x_1429_);
lean_inc(v___x_1428_);
v___x_1430_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(v___x_1400_, v___x_1428_, v___x_1429_);
if (v___x_1430_ == 0)
{
v___y_1421_ = v___y_1427_;
goto v___jp_1420_;
}
else
{
lean_object* v___x_1431_; 
v___x_1431_ = lean_array_fswap(v___y_1427_, v_lo_1403_, v_hi_1404_);
v___y_1421_ = v___x_1431_;
goto v___jp_1420_;
}
}
}
v___jp_1405_:
{
lean_object* v_pivot_1407_; lean_object* v___x_1408_; lean_object* v_fst_1409_; lean_object* v_snd_1410_; uint8_t v___x_1411_; 
v_pivot_1407_ = lean_array_fget(v___y_1406_, v_hi_1404_);
lean_inc_n(v_lo_1403_, 2);
v___x_1408_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___redArg(v___x_1400_, v_hi_1404_, v_pivot_1407_, v___y_1406_, v_lo_1403_, v_lo_1403_);
v_fst_1409_ = lean_ctor_get(v___x_1408_, 0);
lean_inc(v_fst_1409_);
v_snd_1410_ = lean_ctor_get(v___x_1408_, 1);
lean_inc(v_snd_1410_);
lean_dec_ref(v___x_1408_);
v___x_1411_ = lean_nat_dec_le(v_hi_1404_, v_fst_1409_);
if (v___x_1411_ == 0)
{
lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; 
v___x_1412_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(v___x_1400_, v_n_1401_, v_snd_1410_, v_lo_1403_, v_fst_1409_);
v___x_1413_ = lean_unsigned_to_nat(1u);
v___x_1414_ = lean_nat_add(v_fst_1409_, v___x_1413_);
lean_dec(v_fst_1409_);
v_as_1402_ = v___x_1412_;
v_lo_1403_ = v___x_1414_;
goto _start;
}
else
{
lean_dec(v_fst_1409_);
lean_dec(v_lo_1403_);
return v_snd_1410_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v___x_1436_, lean_object* v_n_1437_, lean_object* v_as_1438_, lean_object* v_lo_1439_, lean_object* v_hi_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(v___x_1436_, v_n_1437_, v_as_1438_, v_lo_1439_, v_hi_1440_);
lean_dec(v_hi_1440_);
lean_dec(v_n_1437_);
lean_dec_ref(v___x_1436_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(lean_object* v_mvarIds_1442_, lean_object* v___y_1443_){
_start:
{
lean_object* v___x_1445_; lean_object* v_mctx_1446_; lean_object* v___x_1447_; lean_object* v___y_1449_; lean_object* v___y_1450_; lean_object* v___x_1453_; uint8_t v___x_1454_; 
v___x_1445_ = lean_st_ref_get(v___y_1443_);
v_mctx_1446_ = lean_ctor_get(v___x_1445_, 0);
lean_inc_ref(v_mctx_1446_);
lean_dec(v___x_1445_);
v___x_1447_ = lean_array_get_size(v_mvarIds_1442_);
v___x_1453_ = lean_unsigned_to_nat(0u);
v___x_1454_ = lean_nat_dec_eq(v___x_1447_, v___x_1453_);
if (v___x_1454_ == 0)
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___y_1458_; uint8_t v___x_1460_; 
v___x_1455_ = lean_unsigned_to_nat(1u);
v___x_1456_ = lean_nat_sub(v___x_1447_, v___x_1455_);
v___x_1460_ = lean_nat_dec_le(v___x_1453_, v___x_1456_);
if (v___x_1460_ == 0)
{
lean_inc(v___x_1456_);
v___y_1458_ = v___x_1456_;
goto v___jp_1457_;
}
else
{
v___y_1458_ = v___x_1453_;
goto v___jp_1457_;
}
v___jp_1457_:
{
uint8_t v___x_1459_; 
v___x_1459_ = lean_nat_dec_le(v___y_1458_, v___x_1456_);
if (v___x_1459_ == 0)
{
lean_dec(v___x_1456_);
lean_inc(v___y_1458_);
v___y_1449_ = v___y_1458_;
v___y_1450_ = v___y_1458_;
goto v___jp_1448_;
}
else
{
v___y_1449_ = v___y_1458_;
v___y_1450_ = v___x_1456_;
goto v___jp_1448_;
}
}
}
else
{
lean_object* v___x_1461_; 
lean_dec_ref(v_mctx_1446_);
v___x_1461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1461_, 0, v_mvarIds_1442_);
return v___x_1461_;
}
v___jp_1448_:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1451_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(v_mctx_1446_, v___x_1447_, v_mvarIds_1442_, v___y_1449_, v___y_1450_);
lean_dec(v___y_1450_);
lean_dec_ref(v_mctx_1446_);
v___x_1452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
return v___x_1452_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg___boxed(lean_object* v_mvarIds_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v_res_1465_; 
v_res_1465_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(v_mvarIds_1462_, v___y_1463_);
lean_dec(v___y_1463_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0(lean_object* v_k_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v___x_1476_; lean_object* v_mctx_1477_; lean_object* v_mvarCounter_1478_; lean_object* v___x_1479_; 
v___x_1476_ = lean_st_ref_get(v___y_1472_);
v_mctx_1477_ = lean_ctor_get(v___x_1476_, 0);
lean_inc_ref(v_mctx_1477_);
lean_dec(v___x_1476_);
v_mvarCounter_1478_ = lean_ctor_get(v_mctx_1477_, 3);
lean_inc(v_mvarCounter_1478_);
lean_dec_ref(v_mctx_1477_);
lean_inc(v___y_1474_);
lean_inc_ref(v___y_1473_);
lean_inc(v___y_1472_);
lean_inc_ref(v___y_1471_);
lean_inc(v___y_1470_);
lean_inc_ref(v___y_1469_);
lean_inc(v___y_1468_);
lean_inc_ref(v___y_1467_);
v___x_1479_ = lean_apply_9(v_k_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, lean_box(0));
if (lean_obj_tag(v___x_1479_) == 0)
{
lean_object* v_a_1480_; lean_object* v___x_1481_; 
v_a_1480_ = lean_ctor_get(v___x_1479_, 0);
lean_inc_n(v_a_1480_, 2);
lean_dec_ref_known(v___x_1479_, 1);
v___x_1481_ = l_Lean_Meta_getMVarsNoDelayed(v_a_1480_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; lean_object* v___x_1483_; lean_object* v_a_1484_; lean_object* v___x_1485_; lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1494_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_a_1482_);
lean_dec_ref_known(v___x_1481_, 1);
v___x_1483_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_a_1482_, v_mvarCounter_1478_, v___y_1472_);
lean_dec(v_mvarCounter_1478_);
lean_dec(v_a_1482_);
v_a_1484_ = lean_ctor_get(v___x_1483_, 0);
lean_inc(v_a_1484_);
lean_dec_ref(v___x_1483_);
v___x_1485_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(v_a_1484_, v___y_1472_);
v_a_1486_ = lean_ctor_get(v___x_1485_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1485_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1488_ = v___x_1485_;
v_isShared_1489_ = v_isSharedCheck_1494_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1485_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1494_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1490_; lean_object* v___x_1492_; 
v___x_1490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1490_, 0, v_a_1480_);
lean_ctor_set(v___x_1490_, 1, v_a_1486_);
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 0, v___x_1490_);
v___x_1492_ = v___x_1488_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v___x_1490_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
else
{
lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1502_; 
lean_dec(v_a_1480_);
lean_dec(v_mvarCounter_1478_);
v_a_1495_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1497_ = v___x_1481_;
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___x_1481_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1500_; 
if (v_isShared_1498_ == 0)
{
v___x_1500_ = v___x_1497_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1495_);
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
else
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
lean_dec(v_mvarCounter_1478_);
v_a_1503_ = lean_ctor_get(v___x_1479_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1479_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1479_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
if (v_isShared_1506_ == 0)
{
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1503_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0___boxed(lean_object* v_k_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0(v_k_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
lean_dec(v___y_1515_);
lean_dec_ref(v___y_1514_);
lean_dec(v___y_1513_);
lean_dec_ref(v___y_1512_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(lean_object* v_k_1522_, lean_object* v_parentTag_1523_, lean_object* v_tagSuffix_1524_, uint8_t v_allowNaturalHoles_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_){
_start:
{
lean_object* v___x_1535_; 
v___x_1535_ = l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0(v_k_1522_, v_a_1526_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_, v_a_1533_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v_a_1536_; lean_object* v_fst_1537_; lean_object* v_snd_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1618_; 
v_a_1536_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_a_1536_);
lean_dec_ref_known(v___x_1535_, 1);
v_fst_1537_ = lean_ctor_get(v_a_1536_, 0);
v_snd_1538_ = lean_ctor_get(v_a_1536_, 1);
v_isSharedCheck_1618_ = !lean_is_exclusive(v_a_1536_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1540_ = v_a_1536_;
v_isShared_1541_ = v_isSharedCheck_1618_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_snd_1538_);
lean_inc(v_fst_1537_);
lean_dec(v_a_1536_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1618_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1545_; lean_object* v___y_1546_; lean_object* v___y_1547_; lean_object* v___y_1548_; lean_object* v___y_1549_; lean_object* v___y_1550_; lean_object* v___y_1551_; lean_object* v___y_1574_; lean_object* v_a_1575_; lean_object* v___x_1585_; lean_object* v_a_1587_; lean_object* v___x_1603_; lean_object* v___x_1604_; uint8_t v___x_1605_; 
v___x_1585_ = lean_unsigned_to_nat(0u);
v___x_1603_ = lean_array_get_size(v_snd_1538_);
v___x_1604_ = ((lean_object*)(l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0));
v___x_1605_ = lean_nat_dec_lt(v___x_1585_, v___x_1603_);
if (v___x_1605_ == 0)
{
lean_dec(v_snd_1538_);
v_a_1587_ = v___x_1604_;
goto v___jp_1586_;
}
else
{
size_t v___x_1606_; size_t v___x_1607_; lean_object* v___x_1608_; 
v___x_1606_ = ((size_t)0ULL);
v___x_1607_ = lean_usize_of_nat(v___x_1603_);
v___x_1608_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(v_snd_1538_, v___x_1606_, v___x_1607_, v___x_1604_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_, v_a_1533_);
lean_dec(v_snd_1538_);
if (lean_obj_tag(v___x_1608_) == 0)
{
lean_object* v_a_1609_; 
v_a_1609_ = lean_ctor_get(v___x_1608_, 0);
lean_inc(v_a_1609_);
lean_dec_ref_known(v___x_1608_, 1);
v_a_1587_ = v_a_1609_;
goto v___jp_1586_;
}
else
{
lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1617_; 
lean_del_object(v___x_1540_);
lean_dec(v_fst_1537_);
lean_dec(v_tagSuffix_1524_);
lean_dec(v_parentTag_1523_);
v_a_1610_ = lean_ctor_get(v___x_1608_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1608_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1612_ = v___x_1608_;
v_isShared_1613_ = v_isSharedCheck_1617_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v___x_1608_);
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
v___jp_1542_:
{
lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1552_ = lean_array_to_list(v___y_1543_);
v___x_1553_ = l_Lean_Elab_Tactic_tagUntaggedGoals(v_parentTag_1523_, v_tagSuffix_1524_, v___x_1552_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1563_; 
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1563_ == 0)
{
lean_object* v_unused_1564_; 
v_unused_1564_ = lean_ctor_get(v___x_1553_, 0);
lean_dec(v_unused_1564_);
v___x_1555_ = v___x_1553_;
v_isShared_1556_ = v_isSharedCheck_1563_;
goto v_resetjp_1554_;
}
else
{
lean_dec(v___x_1553_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1563_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1541_ == 0)
{
lean_ctor_set(v___x_1540_, 1, v___x_1552_);
v___x_1558_ = v___x_1540_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_fst_1537_);
lean_ctor_set(v_reuseFailAlloc_1562_, 1, v___x_1552_);
v___x_1558_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
lean_object* v___x_1560_; 
if (v_isShared_1556_ == 0)
{
lean_ctor_set(v___x_1555_, 0, v___x_1558_);
v___x_1560_ = v___x_1555_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v___x_1558_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
}
else
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
lean_dec(v___x_1552_);
lean_del_object(v___x_1540_);
lean_dec(v_fst_1537_);
v_a_1565_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v___x_1553_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1553_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1565_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
}
v___jp_1573_:
{
lean_object* v___x_1576_; 
v___x_1576_ = l_Lean_Elab_Tactic_logUnassignedAndAbort(v_a_1575_, v_a_1526_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_, v_a_1533_);
lean_dec_ref(v_a_1575_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_dec_ref_known(v___x_1576_, 1);
v___y_1543_ = v___y_1574_;
v___y_1544_ = v_a_1526_;
v___y_1545_ = v_a_1527_;
v___y_1546_ = v_a_1528_;
v___y_1547_ = v_a_1529_;
v___y_1548_ = v_a_1530_;
v___y_1549_ = v_a_1531_;
v___y_1550_ = v_a_1532_;
v___y_1551_ = v_a_1533_;
goto v___jp_1542_;
}
else
{
lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1584_; 
lean_dec_ref(v___y_1574_);
lean_del_object(v___x_1540_);
lean_dec(v_fst_1537_);
lean_dec(v_tagSuffix_1524_);
lean_dec(v_parentTag_1523_);
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
v_isSharedCheck_1584_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1584_ == 0)
{
v___x_1579_ = v___x_1576_;
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_dec(v___x_1576_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1582_; 
if (v_isShared_1580_ == 0)
{
v___x_1582_ = v___x_1579_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v_a_1577_);
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
v___jp_1586_:
{
if (v_allowNaturalHoles_1525_ == 0)
{
lean_object* v___x_1588_; lean_object* v___x_1589_; uint8_t v___x_1590_; 
v___x_1588_ = lean_array_get_size(v_a_1587_);
v___x_1589_ = ((lean_object*)(l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0));
v___x_1590_ = lean_nat_dec_lt(v___x_1585_, v___x_1588_);
if (v___x_1590_ == 0)
{
v___y_1574_ = v_a_1587_;
v_a_1575_ = v___x_1589_;
goto v___jp_1573_;
}
else
{
size_t v___x_1591_; size_t v___x_1592_; lean_object* v___x_1593_; 
v___x_1591_ = ((size_t)0ULL);
v___x_1592_ = lean_usize_of_nat(v___x_1588_);
v___x_1593_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(v_a_1587_, v___x_1591_, v___x_1592_, v___x_1589_, v_a_1530_, v_a_1531_, v_a_1532_, v_a_1533_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc(v_a_1594_);
lean_dec_ref_known(v___x_1593_, 1);
v___y_1574_ = v_a_1587_;
v_a_1575_ = v_a_1594_;
goto v___jp_1573_;
}
else
{
lean_object* v_a_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1602_; 
lean_dec_ref(v_a_1587_);
lean_del_object(v___x_1540_);
lean_dec(v_fst_1537_);
lean_dec(v_tagSuffix_1524_);
lean_dec(v_parentTag_1523_);
v_a_1595_ = lean_ctor_get(v___x_1593_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1597_ = v___x_1593_;
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_a_1595_);
lean_dec(v___x_1593_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1600_; 
if (v_isShared_1598_ == 0)
{
v___x_1600_ = v___x_1597_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v_a_1595_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
return v___x_1600_;
}
}
}
}
}
else
{
v___y_1543_ = v_a_1587_;
v___y_1544_ = v_a_1526_;
v___y_1545_ = v_a_1527_;
v___y_1546_ = v_a_1528_;
v___y_1547_ = v_a_1529_;
v___y_1548_ = v_a_1530_;
v___y_1549_ = v_a_1531_;
v___y_1550_ = v_a_1532_;
v___y_1551_ = v_a_1533_;
goto v___jp_1542_;
}
}
}
}
else
{
lean_object* v_a_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1626_; 
lean_dec(v_tagSuffix_1524_);
lean_dec(v_parentTag_1523_);
v_a_1619_ = lean_ctor_get(v___x_1535_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1535_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1621_ = v___x_1535_;
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_a_1619_);
lean_dec(v___x_1535_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1624_; 
if (v_isShared_1622_ == 0)
{
v___x_1624_ = v___x_1621_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_a_1619_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go___boxed(lean_object* v_k_1627_, lean_object* v_parentTag_1628_, lean_object* v_tagSuffix_1629_, lean_object* v_allowNaturalHoles_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_1640_; lean_object* v_res_1641_; 
v_allowNaturalHoles_boxed_1640_ = lean_unbox(v_allowNaturalHoles_1630_);
v_res_1641_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(v_k_1627_, v_parentTag_1628_, v_tagSuffix_1629_, v_allowNaturalHoles_boxed_1640_, v_a_1631_, v_a_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_);
lean_dec(v_a_1638_);
lean_dec_ref(v_a_1637_);
lean_dec(v_a_1636_);
lean_dec_ref(v_a_1635_);
lean_dec(v_a_1634_);
lean_dec_ref(v_a_1633_);
lean_dec(v_a_1632_);
lean_dec_ref(v_a_1631_);
return v_res_1641_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1(lean_object* v_as_1642_, size_t v_i_1643_, size_t v_stop_1644_, lean_object* v_b_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(v_as_1642_, v_i_1643_, v_stop_1644_, v_b_1645_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___boxed(lean_object* v_as_1656_, lean_object* v_i_1657_, lean_object* v_stop_1658_, lean_object* v_b_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
size_t v_i_boxed_1669_; size_t v_stop_boxed_1670_; lean_object* v_res_1671_; 
v_i_boxed_1669_ = lean_unbox_usize(v_i_1657_);
lean_dec(v_i_1657_);
v_stop_boxed_1670_ = lean_unbox_usize(v_stop_1658_);
lean_dec(v_stop_1658_);
v_res_1671_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1(v_as_1656_, v_i_boxed_1669_, v_stop_boxed_1670_, v_b_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_);
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1666_);
lean_dec(v___y_1665_);
lean_dec_ref(v___y_1664_);
lean_dec(v___y_1663_);
lean_dec_ref(v___y_1662_);
lean_dec(v___y_1661_);
lean_dec_ref(v___y_1660_);
lean_dec_ref(v_as_1656_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2(lean_object* v_as_1672_, size_t v_i_1673_, size_t v_stop_1674_, lean_object* v_b_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_){
_start:
{
lean_object* v___x_1685_; 
v___x_1685_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(v_as_1672_, v_i_1673_, v_stop_1674_, v_b_1675_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_);
return v___x_1685_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___boxed(lean_object* v_as_1686_, lean_object* v_i_1687_, lean_object* v_stop_1688_, lean_object* v_b_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_){
_start:
{
size_t v_i_boxed_1699_; size_t v_stop_boxed_1700_; lean_object* v_res_1701_; 
v_i_boxed_1699_ = lean_unbox_usize(v_i_1687_);
lean_dec(v_i_1687_);
v_stop_boxed_1700_ = lean_unbox_usize(v_stop_1688_);
lean_dec(v_stop_1688_);
v_res_1701_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2(v_as_1686_, v_i_boxed_1699_, v_stop_boxed_1700_, v_b_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_);
lean_dec(v___y_1697_);
lean_dec_ref(v___y_1696_);
lean_dec(v___y_1695_);
lean_dec_ref(v___y_1694_);
lean_dec(v___y_1693_);
lean_dec_ref(v___y_1692_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec_ref(v_as_1686_);
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0(lean_object* v_mvarIds_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_){
_start:
{
lean_object* v___x_1708_; 
v___x_1708_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(v_mvarIds_1702_, v___y_1704_);
return v___x_1708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___boxed(lean_object* v_mvarIds_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_){
_start:
{
lean_object* v_res_1715_; 
v_res_1715_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0(v_mvarIds_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
return v_res_1715_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1(lean_object* v___x_1716_, lean_object* v_n_1717_, lean_object* v_as_1718_, lean_object* v_lo_1719_, lean_object* v_hi_1720_, lean_object* v_w_1721_, lean_object* v_hlo_1722_, lean_object* v_hhi_1723_){
_start:
{
lean_object* v___x_1724_; 
v___x_1724_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(v___x_1716_, v_n_1717_, v_as_1718_, v_lo_1719_, v_hi_1720_);
return v___x_1724_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___boxed(lean_object* v___x_1725_, lean_object* v_n_1726_, lean_object* v_as_1727_, lean_object* v_lo_1728_, lean_object* v_hi_1729_, lean_object* v_w_1730_, lean_object* v_hlo_1731_, lean_object* v_hhi_1732_){
_start:
{
lean_object* v_res_1733_; 
v_res_1733_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1(v___x_1725_, v_n_1726_, v_as_1727_, v_lo_1728_, v_hi_1729_, v_w_1730_, v_hlo_1731_, v_hhi_1732_);
lean_dec(v_hi_1729_);
lean_dec(v_n_1726_);
lean_dec_ref(v___x_1725_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4(lean_object* v___x_1734_, lean_object* v_n_1735_, lean_object* v_lo_1736_, lean_object* v_hi_1737_, lean_object* v_hhi_1738_, lean_object* v_pivot_1739_, lean_object* v_as_1740_, lean_object* v_i_1741_, lean_object* v_k_1742_, lean_object* v_ilo_1743_, lean_object* v_ik_1744_, lean_object* v_w_1745_){
_start:
{
lean_object* v___x_1746_; 
v___x_1746_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___redArg(v___x_1734_, v_hi_1737_, v_pivot_1739_, v_as_1740_, v_i_1741_, v_k_1742_);
return v___x_1746_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v___x_1747_, lean_object* v_n_1748_, lean_object* v_lo_1749_, lean_object* v_hi_1750_, lean_object* v_hhi_1751_, lean_object* v_pivot_1752_, lean_object* v_as_1753_, lean_object* v_i_1754_, lean_object* v_k_1755_, lean_object* v_ilo_1756_, lean_object* v_ik_1757_, lean_object* v_w_1758_){
_start:
{
lean_object* v_res_1759_; 
v_res_1759_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4(v___x_1747_, v_n_1748_, v_lo_1749_, v_hi_1750_, v_hhi_1751_, v_pivot_1752_, v_as_1753_, v_i_1754_, v_k_1755_, v_ilo_1756_, v_ik_1757_, v_w_1758_);
lean_dec(v_hi_1750_);
lean_dec(v_lo_1749_);
lean_dec(v_n_1748_);
lean_dec_ref(v___x_1747_);
return v_res_1759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(lean_object* v_k_1760_, lean_object* v_parentTag_1761_, lean_object* v_tagSuffix_1762_, uint8_t v_allowNaturalHoles_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_){
_start:
{
if (v_allowNaturalHoles_1763_ == 0)
{
lean_object* v___x_1773_; 
v___x_1773_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(v_k_1760_, v_parentTag_1761_, v_tagSuffix_1762_, v_allowNaturalHoles_1763_, v_a_1764_, v_a_1765_, v_a_1766_, v_a_1767_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_);
return v___x_1773_;
}
else
{
lean_object* v_declName_x3f_1774_; lean_object* v_macroStack_1775_; uint8_t v_mayPostpone_1776_; uint8_t v_errToSorry_1777_; lean_object* v_autoBoundImplicitContext_1778_; lean_object* v_autoBoundImplicitForbidden_1779_; lean_object* v_sectionVars_1780_; lean_object* v_sectionFVars_1781_; uint8_t v_implicitLambda_1782_; uint8_t v_heedElabAsElim_1783_; uint8_t v_isNoncomputableSection_1784_; uint8_t v_isMetaSection_1785_; uint8_t v_ignoreTCFailures_1786_; uint8_t v_inPattern_1787_; lean_object* v_tacSnap_x3f_1788_; uint8_t v_saveRecAppSyntax_1789_; uint8_t v_holesAsSyntheticOpaque_1790_; lean_object* v_fixedTermElabs_1791_; uint8_t v___y_1793_; 
v_declName_x3f_1774_ = lean_ctor_get(v_a_1766_, 0);
v_macroStack_1775_ = lean_ctor_get(v_a_1766_, 1);
v_mayPostpone_1776_ = lean_ctor_get_uint8(v_a_1766_, sizeof(void*)*8);
v_errToSorry_1777_ = lean_ctor_get_uint8(v_a_1766_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_1778_ = lean_ctor_get(v_a_1766_, 2);
v_autoBoundImplicitForbidden_1779_ = lean_ctor_get(v_a_1766_, 3);
v_sectionVars_1780_ = lean_ctor_get(v_a_1766_, 4);
v_sectionFVars_1781_ = lean_ctor_get(v_a_1766_, 5);
v_implicitLambda_1782_ = lean_ctor_get_uint8(v_a_1766_, sizeof(void*)*8 + 2);
v_heedElabAsElim_1783_ = lean_ctor_get_uint8(v_a_1766_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_1784_ = lean_ctor_get_uint8(v_a_1766_, sizeof(void*)*8 + 4);
v_isMetaSection_1785_ = lean_ctor_get_uint8(v_a_1766_, sizeof(void*)*8 + 5);
v_ignoreTCFailures_1786_ = lean_ctor_get_uint8(v_a_1766_, sizeof(void*)*8 + 6);
v_inPattern_1787_ = lean_ctor_get_uint8(v_a_1766_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_1788_ = lean_ctor_get(v_a_1766_, 6);
v_saveRecAppSyntax_1789_ = lean_ctor_get_uint8(v_a_1766_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_1790_ = lean_ctor_get_uint8(v_a_1766_, sizeof(void*)*8 + 9);
v_fixedTermElabs_1791_ = lean_ctor_get(v_a_1766_, 7);
if (v_holesAsSyntheticOpaque_1790_ == 0)
{
v___y_1793_ = v_allowNaturalHoles_1763_;
goto v___jp_1792_;
}
else
{
v___y_1793_ = v_holesAsSyntheticOpaque_1790_;
goto v___jp_1792_;
}
v___jp_1792_:
{
lean_object* v___x_1794_; uint8_t v_foApprox_1795_; uint8_t v_ctxApprox_1796_; uint8_t v_quasiPatternApprox_1797_; uint8_t v_constApprox_1798_; uint8_t v_isDefEqStuckEx_1799_; uint8_t v_unificationHints_1800_; uint8_t v_proofIrrelevance_1801_; uint8_t v_offsetCnstrs_1802_; uint8_t v_transparency_1803_; uint8_t v_etaStruct_1804_; uint8_t v_univApprox_1805_; uint8_t v_iota_1806_; uint8_t v_beta_1807_; uint8_t v_proj_1808_; uint8_t v_zeta_1809_; uint8_t v_zetaDelta_1810_; uint8_t v_zetaUnused_1811_; uint8_t v_zetaHave_1812_; uint8_t v_canUnfoldPredicateConfig_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1843_; 
v___x_1794_ = l_Lean_Meta_Context_config(v_a_1768_);
v_foApprox_1795_ = lean_ctor_get_uint8(v___x_1794_, 0);
v_ctxApprox_1796_ = lean_ctor_get_uint8(v___x_1794_, 1);
v_quasiPatternApprox_1797_ = lean_ctor_get_uint8(v___x_1794_, 2);
v_constApprox_1798_ = lean_ctor_get_uint8(v___x_1794_, 3);
v_isDefEqStuckEx_1799_ = lean_ctor_get_uint8(v___x_1794_, 4);
v_unificationHints_1800_ = lean_ctor_get_uint8(v___x_1794_, 5);
v_proofIrrelevance_1801_ = lean_ctor_get_uint8(v___x_1794_, 6);
v_offsetCnstrs_1802_ = lean_ctor_get_uint8(v___x_1794_, 8);
v_transparency_1803_ = lean_ctor_get_uint8(v___x_1794_, 9);
v_etaStruct_1804_ = lean_ctor_get_uint8(v___x_1794_, 10);
v_univApprox_1805_ = lean_ctor_get_uint8(v___x_1794_, 11);
v_iota_1806_ = lean_ctor_get_uint8(v___x_1794_, 12);
v_beta_1807_ = lean_ctor_get_uint8(v___x_1794_, 13);
v_proj_1808_ = lean_ctor_get_uint8(v___x_1794_, 14);
v_zeta_1809_ = lean_ctor_get_uint8(v___x_1794_, 15);
v_zetaDelta_1810_ = lean_ctor_get_uint8(v___x_1794_, 16);
v_zetaUnused_1811_ = lean_ctor_get_uint8(v___x_1794_, 17);
v_zetaHave_1812_ = lean_ctor_get_uint8(v___x_1794_, 18);
v_canUnfoldPredicateConfig_1813_ = lean_ctor_get_uint8(v___x_1794_, 19);
v_isSharedCheck_1843_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1815_ = v___x_1794_;
v_isShared_1816_ = v_isSharedCheck_1843_;
goto v_resetjp_1814_;
}
else
{
lean_dec(v___x_1794_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1843_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
uint8_t v_trackZetaDelta_1817_; lean_object* v_zetaDeltaSet_1818_; lean_object* v_lctx_1819_; lean_object* v_localInstances_1820_; lean_object* v_defEqCtx_x3f_1821_; lean_object* v_synthPendingDepth_1822_; lean_object* v_customCanUnfoldPredicate_x3f_1823_; uint8_t v_univApprox_1824_; uint8_t v_inTypeClassResolution_1825_; uint8_t v_cacheInferType_1826_; lean_object* v___x_1828_; 
v_trackZetaDelta_1817_ = lean_ctor_get_uint8(v_a_1768_, sizeof(void*)*7);
v_zetaDeltaSet_1818_ = lean_ctor_get(v_a_1768_, 1);
v_lctx_1819_ = lean_ctor_get(v_a_1768_, 2);
v_localInstances_1820_ = lean_ctor_get(v_a_1768_, 3);
v_defEqCtx_x3f_1821_ = lean_ctor_get(v_a_1768_, 4);
v_synthPendingDepth_1822_ = lean_ctor_get(v_a_1768_, 5);
v_customCanUnfoldPredicate_x3f_1823_ = lean_ctor_get(v_a_1768_, 6);
v_univApprox_1824_ = lean_ctor_get_uint8(v_a_1768_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1825_ = lean_ctor_get_uint8(v_a_1768_, sizeof(void*)*7 + 2);
v_cacheInferType_1826_ = lean_ctor_get_uint8(v_a_1768_, sizeof(void*)*7 + 3);
if (v_isShared_1816_ == 0)
{
v___x_1828_ = v___x_1815_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 0, v_foApprox_1795_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 1, v_ctxApprox_1796_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 2, v_quasiPatternApprox_1797_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 3, v_constApprox_1798_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 4, v_isDefEqStuckEx_1799_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 5, v_unificationHints_1800_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 6, v_proofIrrelevance_1801_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 8, v_offsetCnstrs_1802_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 9, v_transparency_1803_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 10, v_etaStruct_1804_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 11, v_univApprox_1805_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 12, v_iota_1806_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 13, v_beta_1807_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 14, v_proj_1808_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 15, v_zeta_1809_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 16, v_zetaDelta_1810_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 17, v_zetaUnused_1811_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 18, v_zetaHave_1812_);
lean_ctor_set_uint8(v_reuseFailAlloc_1842_, 19, v_canUnfoldPredicateConfig_1813_);
v___x_1828_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
uint64_t v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
lean_ctor_set_uint8(v___x_1828_, 7, v_allowNaturalHoles_1763_);
v___x_1829_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1828_);
lean_inc_ref(v_fixedTermElabs_1791_);
lean_inc(v_tacSnap_x3f_1788_);
lean_inc(v_sectionFVars_1781_);
lean_inc(v_sectionVars_1780_);
lean_inc_ref(v_autoBoundImplicitForbidden_1779_);
lean_inc(v_autoBoundImplicitContext_1778_);
lean_inc(v_macroStack_1775_);
lean_inc(v_declName_x3f_1774_);
v___x_1830_ = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(v___x_1830_, 0, v_declName_x3f_1774_);
lean_ctor_set(v___x_1830_, 1, v_macroStack_1775_);
lean_ctor_set(v___x_1830_, 2, v_autoBoundImplicitContext_1778_);
lean_ctor_set(v___x_1830_, 3, v_autoBoundImplicitForbidden_1779_);
lean_ctor_set(v___x_1830_, 4, v_sectionVars_1780_);
lean_ctor_set(v___x_1830_, 5, v_sectionFVars_1781_);
lean_ctor_set(v___x_1830_, 6, v_tacSnap_x3f_1788_);
lean_ctor_set(v___x_1830_, 7, v_fixedTermElabs_1791_);
lean_ctor_set_uint8(v___x_1830_, sizeof(void*)*8, v_mayPostpone_1776_);
lean_ctor_set_uint8(v___x_1830_, sizeof(void*)*8 + 1, v_errToSorry_1777_);
lean_ctor_set_uint8(v___x_1830_, sizeof(void*)*8 + 2, v_implicitLambda_1782_);
lean_ctor_set_uint8(v___x_1830_, sizeof(void*)*8 + 3, v_heedElabAsElim_1783_);
lean_ctor_set_uint8(v___x_1830_, sizeof(void*)*8 + 4, v_isNoncomputableSection_1784_);
lean_ctor_set_uint8(v___x_1830_, sizeof(void*)*8 + 5, v_isMetaSection_1785_);
lean_ctor_set_uint8(v___x_1830_, sizeof(void*)*8 + 6, v_ignoreTCFailures_1786_);
lean_ctor_set_uint8(v___x_1830_, sizeof(void*)*8 + 7, v_inPattern_1787_);
lean_ctor_set_uint8(v___x_1830_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_1789_);
lean_ctor_set_uint8(v___x_1830_, sizeof(void*)*8 + 9, v___y_1793_);
v___x_1831_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1831_, 0, v___x_1828_);
lean_ctor_set_uint64(v___x_1831_, sizeof(void*)*1, v___x_1829_);
lean_inc(v_customCanUnfoldPredicate_x3f_1823_);
lean_inc(v_synthPendingDepth_1822_);
lean_inc(v_defEqCtx_x3f_1821_);
lean_inc_ref(v_localInstances_1820_);
lean_inc_ref(v_lctx_1819_);
lean_inc(v_zetaDeltaSet_1818_);
v___x_1832_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1832_, 0, v___x_1831_);
lean_ctor_set(v___x_1832_, 1, v_zetaDeltaSet_1818_);
lean_ctor_set(v___x_1832_, 2, v_lctx_1819_);
lean_ctor_set(v___x_1832_, 3, v_localInstances_1820_);
lean_ctor_set(v___x_1832_, 4, v_defEqCtx_x3f_1821_);
lean_ctor_set(v___x_1832_, 5, v_synthPendingDepth_1822_);
lean_ctor_set(v___x_1832_, 6, v_customCanUnfoldPredicate_x3f_1823_);
lean_ctor_set_uint8(v___x_1832_, sizeof(void*)*7, v_trackZetaDelta_1817_);
lean_ctor_set_uint8(v___x_1832_, sizeof(void*)*7 + 1, v_univApprox_1824_);
lean_ctor_set_uint8(v___x_1832_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1825_);
lean_ctor_set_uint8(v___x_1832_, sizeof(void*)*7 + 3, v_cacheInferType_1826_);
v___x_1833_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(v_k_1760_, v_parentTag_1761_, v_tagSuffix_1762_, v_allowNaturalHoles_1763_, v_a_1764_, v_a_1765_, v___x_1830_, v_a_1767_, v___x_1832_, v_a_1769_, v_a_1770_, v_a_1771_);
lean_dec_ref_known(v___x_1832_, 7);
lean_dec_ref_known(v___x_1830_, 8);
if (lean_obj_tag(v___x_1833_) == 0)
{
lean_object* v_a_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1841_; 
v_a_1834_ = lean_ctor_get(v___x_1833_, 0);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___x_1833_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1836_ = v___x_1833_;
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_a_1834_);
lean_dec(v___x_1833_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1841_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1839_; 
if (v_isShared_1837_ == 0)
{
v___x_1839_ = v___x_1836_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_a_1834_);
v___x_1839_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
return v___x_1839_;
}
}
}
else
{
return v___x_1833_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom___boxed(lean_object* v_k_1844_, lean_object* v_parentTag_1845_, lean_object* v_tagSuffix_1846_, lean_object* v_allowNaturalHoles_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_1857_; lean_object* v_res_1858_; 
v_allowNaturalHoles_boxed_1857_ = lean_unbox(v_allowNaturalHoles_1847_);
v_res_1858_ = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(v_k_1844_, v_parentTag_1845_, v_tagSuffix_1846_, v_allowNaturalHoles_boxed_1857_, v_a_1848_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_);
lean_dec(v_a_1855_);
lean_dec_ref(v_a_1854_);
lean_dec(v_a_1853_);
lean_dec_ref(v_a_1852_);
lean_dec(v_a_1851_);
lean_dec_ref(v_a_1850_);
lean_dec(v_a_1849_);
lean_dec_ref(v_a_1848_);
return v_res_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermWithHoles(lean_object* v_stx_1859_, lean_object* v_expectedType_x3f_1860_, lean_object* v_tagSuffix_1861_, uint8_t v_allowNaturalHoles_1862_, lean_object* v_parentTag_x3f_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_){
_start:
{
lean_object* v_a_1874_; 
if (lean_obj_tag(v_parentTag_x3f_1863_) == 0)
{
lean_object* v___x_1879_; 
v___x_1879_ = l_Lean_Elab_Tactic_getMainTag___redArg(v_a_1865_, v_a_1868_, v_a_1869_, v_a_1870_, v_a_1871_);
if (lean_obj_tag(v___x_1879_) == 0)
{
lean_object* v_a_1880_; 
v_a_1880_ = lean_ctor_get(v___x_1879_, 0);
lean_inc(v_a_1880_);
lean_dec_ref_known(v___x_1879_, 1);
v_a_1874_ = v_a_1880_;
goto v___jp_1873_;
}
else
{
lean_object* v_a_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1888_; 
lean_dec(v_tagSuffix_1861_);
lean_dec(v_expectedType_x3f_1860_);
lean_dec(v_stx_1859_);
v_a_1881_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1888_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1883_ = v___x_1879_;
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_a_1881_);
lean_dec(v___x_1879_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
lean_object* v___x_1886_; 
if (v_isShared_1884_ == 0)
{
v___x_1886_ = v___x_1883_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_a_1881_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
}
}
}
}
else
{
lean_object* v_val_1889_; 
v_val_1889_ = lean_ctor_get(v_parentTag_x3f_1863_, 0);
lean_inc(v_val_1889_);
lean_dec_ref_known(v_parentTag_x3f_1863_, 1);
v_a_1874_ = v_val_1889_;
goto v___jp_1873_;
}
v___jp_1873_:
{
uint8_t v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1875_ = 0;
v___x_1876_ = lean_box(v___x_1875_);
v___x_1877_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabTermEnsuringType___boxed), 12, 3);
lean_closure_set(v___x_1877_, 0, v_stx_1859_);
lean_closure_set(v___x_1877_, 1, v_expectedType_x3f_1860_);
lean_closure_set(v___x_1877_, 2, v___x_1876_);
v___x_1878_ = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(v___x_1877_, v_a_1874_, v_tagSuffix_1861_, v_allowNaturalHoles_1862_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_, v_a_1868_, v_a_1869_, v_a_1870_, v_a_1871_);
return v___x_1878_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermWithHoles___boxed(lean_object* v_stx_1890_, lean_object* v_expectedType_x3f_1891_, lean_object* v_tagSuffix_1892_, lean_object* v_allowNaturalHoles_1893_, lean_object* v_parentTag_x3f_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_1904_; lean_object* v_res_1905_; 
v_allowNaturalHoles_boxed_1904_ = lean_unbox(v_allowNaturalHoles_1893_);
v_res_1905_ = l_Lean_Elab_Tactic_elabTermWithHoles(v_stx_1890_, v_expectedType_x3f_1891_, v_tagSuffix_1892_, v_allowNaturalHoles_boxed_1904_, v_parentTag_x3f_1894_, v_a_1895_, v_a_1896_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_);
lean_dec(v_a_1902_);
lean_dec_ref(v_a_1901_);
lean_dec(v_a_1900_);
lean_dec_ref(v_a_1899_);
lean_dec(v_a_1898_);
lean_dec_ref(v_a_1897_);
lean_dec(v_a_1896_);
lean_dec_ref(v_a_1895_);
return v_res_1905_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_refineCore___lam__0(lean_object* v_a_1906_, lean_object* v_x_1907_){
_start:
{
uint8_t v___x_1908_; 
v___x_1908_ = l_Lean_instBEqMVarId_beq(v_x_1907_, v_a_1906_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__0___boxed(lean_object* v_a_1909_, lean_object* v_x_1910_){
_start:
{
uint8_t v_res_1911_; lean_object* v_r_1912_; 
v_res_1911_ = l_Lean_Elab_Tactic_refineCore___lam__0(v_a_1909_, v_x_1910_);
lean_dec(v_x_1910_);
lean_dec(v_a_1909_);
v_r_1912_ = lean_box(v_res_1911_);
return v_r_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(lean_object* v_x_1913_, lean_object* v_x_1914_, lean_object* v_x_1915_, lean_object* v_x_1916_){
_start:
{
lean_object* v_ks_1917_; lean_object* v_vs_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1942_; 
v_ks_1917_ = lean_ctor_get(v_x_1913_, 0);
v_vs_1918_ = lean_ctor_get(v_x_1913_, 1);
v_isSharedCheck_1942_ = !lean_is_exclusive(v_x_1913_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1920_ = v_x_1913_;
v_isShared_1921_ = v_isSharedCheck_1942_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_vs_1918_);
lean_inc(v_ks_1917_);
lean_dec(v_x_1913_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1942_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1922_; uint8_t v___x_1923_; 
v___x_1922_ = lean_array_get_size(v_ks_1917_);
v___x_1923_ = lean_nat_dec_lt(v_x_1914_, v___x_1922_);
if (v___x_1923_ == 0)
{
lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1927_; 
lean_dec(v_x_1914_);
v___x_1924_ = lean_array_push(v_ks_1917_, v_x_1915_);
v___x_1925_ = lean_array_push(v_vs_1918_, v_x_1916_);
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 1, v___x_1925_);
lean_ctor_set(v___x_1920_, 0, v___x_1924_);
v___x_1927_ = v___x_1920_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v___x_1924_);
lean_ctor_set(v_reuseFailAlloc_1928_, 1, v___x_1925_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
else
{
lean_object* v_k_x27_1929_; uint8_t v___x_1930_; 
v_k_x27_1929_ = lean_array_fget_borrowed(v_ks_1917_, v_x_1914_);
v___x_1930_ = l_Lean_instBEqMVarId_beq(v_x_1915_, v_k_x27_1929_);
if (v___x_1930_ == 0)
{
lean_object* v___x_1932_; 
if (v_isShared_1921_ == 0)
{
v___x_1932_ = v___x_1920_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_ks_1917_);
lean_ctor_set(v_reuseFailAlloc_1936_, 1, v_vs_1918_);
v___x_1932_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; 
v___x_1933_ = lean_unsigned_to_nat(1u);
v___x_1934_ = lean_nat_add(v_x_1914_, v___x_1933_);
lean_dec(v_x_1914_);
v_x_1913_ = v___x_1932_;
v_x_1914_ = v___x_1934_;
goto _start;
}
}
else
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1940_; 
v___x_1937_ = lean_array_fset(v_ks_1917_, v_x_1914_, v_x_1915_);
v___x_1938_ = lean_array_fset(v_vs_1918_, v_x_1914_, v_x_1916_);
lean_dec(v_x_1914_);
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 1, v___x_1938_);
lean_ctor_set(v___x_1920_, 0, v___x_1937_);
v___x_1940_ = v___x_1920_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v___x_1937_);
lean_ctor_set(v_reuseFailAlloc_1941_, 1, v___x_1938_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_n_1943_, lean_object* v_k_1944_, lean_object* v_v_1945_){
_start:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1946_ = lean_unsigned_to_nat(0u);
v___x_1947_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(v_n_1943_, v___x_1946_, v_k_1944_, v_v_1945_);
return v___x_1947_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1948_; 
v___x_1948_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1948_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(lean_object* v_x_1949_, size_t v_x_1950_, size_t v_x_1951_, lean_object* v_x_1952_, lean_object* v_x_1953_){
_start:
{
if (lean_obj_tag(v_x_1949_) == 0)
{
lean_object* v_es_1954_; size_t v___x_1955_; size_t v___x_1956_; lean_object* v_j_1957_; lean_object* v___x_1958_; uint8_t v___x_1959_; 
v_es_1954_ = lean_ctor_get(v_x_1949_, 0);
v___x_1955_ = ((size_t)31ULL);
v___x_1956_ = lean_usize_land(v_x_1950_, v___x_1955_);
v_j_1957_ = lean_usize_to_nat(v___x_1956_);
v___x_1958_ = lean_array_get_size(v_es_1954_);
v___x_1959_ = lean_nat_dec_lt(v_j_1957_, v___x_1958_);
if (v___x_1959_ == 0)
{
lean_dec(v_j_1957_);
lean_dec(v_x_1953_);
lean_dec(v_x_1952_);
return v_x_1949_;
}
else
{
lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1998_; 
lean_inc_ref(v_es_1954_);
v_isSharedCheck_1998_ = !lean_is_exclusive(v_x_1949_);
if (v_isSharedCheck_1998_ == 0)
{
lean_object* v_unused_1999_; 
v_unused_1999_ = lean_ctor_get(v_x_1949_, 0);
lean_dec(v_unused_1999_);
v___x_1961_ = v_x_1949_;
v_isShared_1962_ = v_isSharedCheck_1998_;
goto v_resetjp_1960_;
}
else
{
lean_dec(v_x_1949_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1998_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v_v_1963_; lean_object* v___x_1964_; lean_object* v_xs_x27_1965_; lean_object* v___y_1967_; 
v_v_1963_ = lean_array_fget(v_es_1954_, v_j_1957_);
v___x_1964_ = lean_box(0);
v_xs_x27_1965_ = lean_array_fset(v_es_1954_, v_j_1957_, v___x_1964_);
switch(lean_obj_tag(v_v_1963_))
{
case 0:
{
lean_object* v_key_1972_; lean_object* v_val_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1983_; 
v_key_1972_ = lean_ctor_get(v_v_1963_, 0);
v_val_1973_ = lean_ctor_get(v_v_1963_, 1);
v_isSharedCheck_1983_ = !lean_is_exclusive(v_v_1963_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1975_ = v_v_1963_;
v_isShared_1976_ = v_isSharedCheck_1983_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_val_1973_);
lean_inc(v_key_1972_);
lean_dec(v_v_1963_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1983_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
uint8_t v___x_1977_; 
v___x_1977_ = l_Lean_instBEqMVarId_beq(v_x_1952_, v_key_1972_);
if (v___x_1977_ == 0)
{
lean_object* v___x_1978_; lean_object* v___x_1979_; 
lean_del_object(v___x_1975_);
v___x_1978_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1972_, v_val_1973_, v_x_1952_, v_x_1953_);
v___x_1979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1979_, 0, v___x_1978_);
v___y_1967_ = v___x_1979_;
goto v___jp_1966_;
}
else
{
lean_object* v___x_1981_; 
lean_dec(v_val_1973_);
lean_dec(v_key_1972_);
if (v_isShared_1976_ == 0)
{
lean_ctor_set(v___x_1975_, 1, v_x_1953_);
lean_ctor_set(v___x_1975_, 0, v_x_1952_);
v___x_1981_ = v___x_1975_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_x_1952_);
lean_ctor_set(v_reuseFailAlloc_1982_, 1, v_x_1953_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
v___y_1967_ = v___x_1981_;
goto v___jp_1966_;
}
}
}
}
case 1:
{
lean_object* v_node_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1996_; 
v_node_1984_ = lean_ctor_get(v_v_1963_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v_v_1963_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1986_ = v_v_1963_;
v_isShared_1987_ = v_isSharedCheck_1996_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_node_1984_);
lean_dec(v_v_1963_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1996_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
size_t v___x_1988_; size_t v___x_1989_; size_t v___x_1990_; size_t v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1994_; 
v___x_1988_ = ((size_t)5ULL);
v___x_1989_ = lean_usize_shift_right(v_x_1950_, v___x_1988_);
v___x_1990_ = ((size_t)1ULL);
v___x_1991_ = lean_usize_add(v_x_1951_, v___x_1990_);
v___x_1992_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_node_1984_, v___x_1989_, v___x_1991_, v_x_1952_, v_x_1953_);
if (v_isShared_1987_ == 0)
{
lean_ctor_set(v___x_1986_, 0, v___x_1992_);
v___x_1994_ = v___x_1986_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v___x_1992_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
v___y_1967_ = v___x_1994_;
goto v___jp_1966_;
}
}
}
default: 
{
lean_object* v___x_1997_; 
v___x_1997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1997_, 0, v_x_1952_);
lean_ctor_set(v___x_1997_, 1, v_x_1953_);
v___y_1967_ = v___x_1997_;
goto v___jp_1966_;
}
}
v___jp_1966_:
{
lean_object* v___x_1968_; lean_object* v___x_1970_; 
v___x_1968_ = lean_array_fset(v_xs_x27_1965_, v_j_1957_, v___y_1967_);
lean_dec(v_j_1957_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 0, v___x_1968_);
v___x_1970_ = v___x_1961_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v___x_1968_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
}
}
}
else
{
lean_object* v_ks_2000_; lean_object* v_vs_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2019_; 
v_ks_2000_ = lean_ctor_get(v_x_1949_, 0);
v_vs_2001_ = lean_ctor_get(v_x_1949_, 1);
v_isSharedCheck_2019_ = !lean_is_exclusive(v_x_1949_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2003_ = v_x_1949_;
v_isShared_2004_ = v_isSharedCheck_2019_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_vs_2001_);
lean_inc(v_ks_2000_);
lean_dec(v_x_1949_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2019_;
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
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_ks_2000_);
lean_ctor_set(v_reuseFailAlloc_2018_, 1, v_vs_2001_);
v___x_2006_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
lean_object* v_newNode_2007_; size_t v___x_2008_; uint8_t v___x_2009_; 
v_newNode_2007_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4___redArg(v___x_2006_, v_x_1952_, v_x_1953_);
v___x_2008_ = ((size_t)7ULL);
v___x_2009_ = lean_usize_dec_le(v___x_2008_, v_x_1951_);
if (v___x_2009_ == 0)
{
lean_object* v___x_2010_; lean_object* v___x_2011_; uint8_t v___x_2012_; 
v___x_2010_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2007_);
v___x_2011_ = lean_unsigned_to_nat(4u);
v___x_2012_ = lean_nat_dec_lt(v___x_2010_, v___x_2011_);
lean_dec(v___x_2010_);
if (v___x_2012_ == 0)
{
lean_object* v_ks_2013_; lean_object* v_vs_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
v_ks_2013_ = lean_ctor_get(v_newNode_2007_, 0);
lean_inc_ref(v_ks_2013_);
v_vs_2014_ = lean_ctor_get(v_newNode_2007_, 1);
lean_inc_ref(v_vs_2014_);
lean_dec_ref(v_newNode_2007_);
v___x_2015_ = lean_unsigned_to_nat(0u);
v___x_2016_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_2017_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(v_x_1951_, v_ks_2013_, v_vs_2014_, v___x_2015_, v___x_2016_);
lean_dec_ref(v_vs_2014_);
lean_dec_ref(v_ks_2013_);
return v___x_2017_;
}
else
{
return v_newNode_2007_;
}
}
else
{
return v_newNode_2007_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(size_t v_depth_2020_, lean_object* v_keys_2021_, lean_object* v_vals_2022_, lean_object* v_i_2023_, lean_object* v_entries_2024_){
_start:
{
lean_object* v___x_2025_; uint8_t v___x_2026_; 
v___x_2025_ = lean_array_get_size(v_keys_2021_);
v___x_2026_ = lean_nat_dec_lt(v_i_2023_, v___x_2025_);
if (v___x_2026_ == 0)
{
lean_dec(v_i_2023_);
return v_entries_2024_;
}
else
{
lean_object* v_k_2027_; lean_object* v_v_2028_; uint64_t v___x_2029_; size_t v_h_2030_; size_t v___x_2031_; lean_object* v___x_2032_; size_t v___x_2033_; size_t v___x_2034_; size_t v___x_2035_; size_t v_h_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; 
v_k_2027_ = lean_array_fget_borrowed(v_keys_2021_, v_i_2023_);
v_v_2028_ = lean_array_fget_borrowed(v_vals_2022_, v_i_2023_);
v___x_2029_ = l_Lean_instHashableMVarId_hash(v_k_2027_);
v_h_2030_ = lean_uint64_to_usize(v___x_2029_);
v___x_2031_ = ((size_t)5ULL);
v___x_2032_ = lean_unsigned_to_nat(1u);
v___x_2033_ = ((size_t)1ULL);
v___x_2034_ = lean_usize_sub(v_depth_2020_, v___x_2033_);
v___x_2035_ = lean_usize_mul(v___x_2031_, v___x_2034_);
v_h_2036_ = lean_usize_shift_right(v_h_2030_, v___x_2035_);
v___x_2037_ = lean_nat_add(v_i_2023_, v___x_2032_);
lean_dec(v_i_2023_);
lean_inc(v_v_2028_);
lean_inc(v_k_2027_);
v___x_2038_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_entries_2024_, v_h_2036_, v_depth_2020_, v_k_2027_, v_v_2028_);
v_i_2023_ = v___x_2037_;
v_entries_2024_ = v___x_2038_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_depth_2040_, lean_object* v_keys_2041_, lean_object* v_vals_2042_, lean_object* v_i_2043_, lean_object* v_entries_2044_){
_start:
{
size_t v_depth_boxed_2045_; lean_object* v_res_2046_; 
v_depth_boxed_2045_ = lean_unbox_usize(v_depth_2040_);
lean_dec(v_depth_2040_);
v_res_2046_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(v_depth_boxed_2045_, v_keys_2041_, v_vals_2042_, v_i_2043_, v_entries_2044_);
lean_dec_ref(v_vals_2042_);
lean_dec_ref(v_keys_2041_);
return v_res_2046_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_2047_, lean_object* v_x_2048_, lean_object* v_x_2049_, lean_object* v_x_2050_, lean_object* v_x_2051_){
_start:
{
size_t v_x_3598__boxed_2052_; size_t v_x_3599__boxed_2053_; lean_object* v_res_2054_; 
v_x_3598__boxed_2052_ = lean_unbox_usize(v_x_2048_);
lean_dec(v_x_2048_);
v_x_3599__boxed_2053_ = lean_unbox_usize(v_x_2049_);
lean_dec(v_x_2049_);
v_res_2054_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_x_2047_, v_x_3598__boxed_2052_, v_x_3599__boxed_2053_, v_x_2050_, v_x_2051_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0___redArg(lean_object* v_x_2055_, lean_object* v_x_2056_, lean_object* v_x_2057_){
_start:
{
uint64_t v___x_2058_; size_t v___x_2059_; size_t v___x_2060_; lean_object* v___x_2061_; 
v___x_2058_ = l_Lean_instHashableMVarId_hash(v_x_2056_);
v___x_2059_ = lean_uint64_to_usize(v___x_2058_);
v___x_2060_ = ((size_t)1ULL);
v___x_2061_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_x_2055_, v___x_2059_, v___x_2060_, v_x_2056_, v_x_2057_);
return v___x_2061_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(lean_object* v_mvarId_2062_, lean_object* v_val_2063_, lean_object* v___y_2064_){
_start:
{
lean_object* v___x_2066_; lean_object* v_mctx_2067_; lean_object* v_cache_2068_; lean_object* v_zetaDeltaFVarIds_2069_; lean_object* v_postponed_2070_; lean_object* v_diag_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2100_; 
v___x_2066_ = lean_st_ref_take(v___y_2064_);
v_mctx_2067_ = lean_ctor_get(v___x_2066_, 0);
v_cache_2068_ = lean_ctor_get(v___x_2066_, 1);
v_zetaDeltaFVarIds_2069_ = lean_ctor_get(v___x_2066_, 2);
v_postponed_2070_ = lean_ctor_get(v___x_2066_, 3);
v_diag_2071_ = lean_ctor_get(v___x_2066_, 4);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2073_ = v___x_2066_;
v_isShared_2074_ = v_isSharedCheck_2100_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_diag_2071_);
lean_inc(v_postponed_2070_);
lean_inc(v_zetaDeltaFVarIds_2069_);
lean_inc(v_cache_2068_);
lean_inc(v_mctx_2067_);
lean_dec(v___x_2066_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2100_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v_depth_2075_; lean_object* v_levelAssignDepth_2076_; lean_object* v_lmvarCounter_2077_; lean_object* v_mvarCounter_2078_; lean_object* v_lDecls_2079_; lean_object* v_decls_2080_; lean_object* v_userNames_2081_; lean_object* v_lAssignment_2082_; lean_object* v_eAssignment_2083_; lean_object* v_dAssignment_2084_; lean_object* v_instanceTypedMVars_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2099_; 
v_depth_2075_ = lean_ctor_get(v_mctx_2067_, 0);
v_levelAssignDepth_2076_ = lean_ctor_get(v_mctx_2067_, 1);
v_lmvarCounter_2077_ = lean_ctor_get(v_mctx_2067_, 2);
v_mvarCounter_2078_ = lean_ctor_get(v_mctx_2067_, 3);
v_lDecls_2079_ = lean_ctor_get(v_mctx_2067_, 4);
v_decls_2080_ = lean_ctor_get(v_mctx_2067_, 5);
v_userNames_2081_ = lean_ctor_get(v_mctx_2067_, 6);
v_lAssignment_2082_ = lean_ctor_get(v_mctx_2067_, 7);
v_eAssignment_2083_ = lean_ctor_get(v_mctx_2067_, 8);
v_dAssignment_2084_ = lean_ctor_get(v_mctx_2067_, 9);
v_instanceTypedMVars_2085_ = lean_ctor_get(v_mctx_2067_, 10);
v_isSharedCheck_2099_ = !lean_is_exclusive(v_mctx_2067_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2087_ = v_mctx_2067_;
v_isShared_2088_ = v_isSharedCheck_2099_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_instanceTypedMVars_2085_);
lean_inc(v_dAssignment_2084_);
lean_inc(v_eAssignment_2083_);
lean_inc(v_lAssignment_2082_);
lean_inc(v_userNames_2081_);
lean_inc(v_decls_2080_);
lean_inc(v_lDecls_2079_);
lean_inc(v_mvarCounter_2078_);
lean_inc(v_lmvarCounter_2077_);
lean_inc(v_levelAssignDepth_2076_);
lean_inc(v_depth_2075_);
lean_dec(v_mctx_2067_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2099_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2092_; 
v___x_2089_ = lean_box(0);
v___x_2090_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0___redArg(v_eAssignment_2083_, v_mvarId_2062_, v_val_2063_);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 8, v___x_2090_);
v___x_2092_ = v___x_2087_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v_depth_2075_);
lean_ctor_set(v_reuseFailAlloc_2098_, 1, v_levelAssignDepth_2076_);
lean_ctor_set(v_reuseFailAlloc_2098_, 2, v_lmvarCounter_2077_);
lean_ctor_set(v_reuseFailAlloc_2098_, 3, v_mvarCounter_2078_);
lean_ctor_set(v_reuseFailAlloc_2098_, 4, v_lDecls_2079_);
lean_ctor_set(v_reuseFailAlloc_2098_, 5, v_decls_2080_);
lean_ctor_set(v_reuseFailAlloc_2098_, 6, v_userNames_2081_);
lean_ctor_set(v_reuseFailAlloc_2098_, 7, v_lAssignment_2082_);
lean_ctor_set(v_reuseFailAlloc_2098_, 8, v___x_2090_);
lean_ctor_set(v_reuseFailAlloc_2098_, 9, v_dAssignment_2084_);
lean_ctor_set(v_reuseFailAlloc_2098_, 10, v_instanceTypedMVars_2085_);
v___x_2092_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
lean_object* v___x_2094_; 
if (v_isShared_2074_ == 0)
{
lean_ctor_set(v___x_2073_, 0, v___x_2092_);
v___x_2094_ = v___x_2073_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v___x_2092_);
lean_ctor_set(v_reuseFailAlloc_2097_, 1, v_cache_2068_);
lean_ctor_set(v_reuseFailAlloc_2097_, 2, v_zetaDeltaFVarIds_2069_);
lean_ctor_set(v_reuseFailAlloc_2097_, 3, v_postponed_2070_);
lean_ctor_set(v_reuseFailAlloc_2097_, 4, v_diag_2071_);
v___x_2094_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2095_ = lean_st_ref_put(v___y_2064_, v___x_2094_);
v___x_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2089_);
return v___x_2096_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg___boxed(lean_object* v_mvarId_2101_, lean_object* v_val_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_){
_start:
{
lean_object* v_res_2105_; 
v_res_2105_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(v_mvarId_2101_, v_val_2102_, v___y_2103_);
lean_dec(v___y_2103_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(lean_object* v_msgData_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_){
_start:
{
lean_object* v___x_2112_; lean_object* v_env_2113_; uint8_t v___x_2114_; lean_object* v_env_2115_; lean_object* v___x_2116_; lean_object* v_toCold_2117_; lean_object* v_mctx_2118_; lean_object* v_lctx_2119_; lean_object* v_options_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; 
v___x_2112_ = lean_st_ref_get(v___y_2110_);
v_env_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc_ref(v_env_2113_);
lean_dec(v___x_2112_);
v___x_2114_ = 0;
v_env_2115_ = l_Lean_Environment_setRecordingDeps(v_env_2113_, v___x_2114_);
v___x_2116_ = lean_st_ref_get(v___y_2108_);
v_toCold_2117_ = lean_ctor_get(v___y_2109_, 0);
v_mctx_2118_ = lean_ctor_get(v___x_2116_, 0);
lean_inc_ref(v_mctx_2118_);
lean_dec(v___x_2116_);
v_lctx_2119_ = lean_ctor_get(v___y_2107_, 2);
v_options_2120_ = lean_ctor_get(v_toCold_2117_, 2);
lean_inc_ref(v_options_2120_);
lean_inc_ref(v_lctx_2119_);
v___x_2121_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2121_, 0, v_env_2115_);
lean_ctor_set(v___x_2121_, 1, v_mctx_2118_);
lean_ctor_set(v___x_2121_, 2, v_lctx_2119_);
lean_ctor_set(v___x_2121_, 3, v_options_2120_);
v___x_2122_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2121_);
lean_ctor_set(v___x_2122_, 1, v_msgData_2106_);
v___x_2123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2122_);
return v___x_2123_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2___boxed(lean_object* v_msgData_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_){
_start:
{
lean_object* v_res_2130_; 
v_res_2130_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(v_msgData_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
return v_res_2130_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(lean_object* v_msg_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
lean_object* v_ref_2137_; lean_object* v___x_2138_; lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2147_; 
v_ref_2137_ = lean_ctor_get(v___y_2134_, 2);
v___x_2138_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(v_msg_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
v_a_2139_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2141_ = v___x_2138_;
v_isShared_2142_ = v_isSharedCheck_2147_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2138_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2147_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2143_; lean_object* v___x_2145_; 
lean_inc(v_ref_2137_);
v___x_2143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2143_, 0, v_ref_2137_);
lean_ctor_set(v___x_2143_, 1, v_a_2139_);
if (v_isShared_2142_ == 0)
{
lean_ctor_set_tag(v___x_2141_, 1);
lean_ctor_set(v___x_2141_, 0, v___x_2143_);
v___x_2145_ = v___x_2141_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v___x_2143_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg___boxed(lean_object* v_msg_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v_msg_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
return v_res_2154_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2156_ = ((lean_object*)(l_Lean_Elab_Tactic_refineCore___lam__1___closed__0));
v___x_2157_ = l_Lean_stringToMessageData(v___x_2156_);
return v___x_2157_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2159_ = ((lean_object*)(l_Lean_Elab_Tactic_refineCore___lam__1___closed__2));
v___x_2160_ = l_Lean_stringToMessageData(v___x_2159_);
return v___x_2160_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__5(void){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2162_ = ((lean_object*)(l_Lean_Elab_Tactic_refineCore___lam__1___closed__4));
v___x_2163_ = l_Lean_stringToMessageData(v___x_2162_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__1(lean_object* v_stx_2164_, lean_object* v_tagSuffix_2165_, uint8_t v_allowNaturalHoles_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_){
_start:
{
lean_object* v___x_2176_; 
v___x_2176_ = l_Lean_Elab_Tactic_getMainTarget(v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_);
if (lean_obj_tag(v___x_2176_) == 0)
{
lean_object* v_a_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v_a_2177_ = lean_ctor_get(v___x_2176_, 0);
lean_inc(v_a_2177_);
lean_dec_ref_known(v___x_2176_, 1);
v___x_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2178_, 0, v_a_2177_);
v___x_2179_ = lean_box(0);
v___x_2180_ = l_Lean_Elab_Tactic_elabTermWithHoles(v_stx_2164_, v___x_2178_, v_tagSuffix_2165_, v_allowNaturalHoles_2166_, v___x_2179_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_object* v_a_2181_; lean_object* v_fst_2182_; lean_object* v_snd_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2230_; 
v_a_2181_ = lean_ctor_get(v___x_2180_, 0);
lean_inc(v_a_2181_);
lean_dec_ref_known(v___x_2180_, 1);
v_fst_2182_ = lean_ctor_get(v_a_2181_, 0);
v_snd_2183_ = lean_ctor_get(v_a_2181_, 1);
v_isSharedCheck_2230_ = !lean_is_exclusive(v_a_2181_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2185_ = v_a_2181_;
v_isShared_2186_ = v_isSharedCheck_2230_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_snd_2183_);
lean_inc(v_fst_2182_);
lean_dec(v_a_2181_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2230_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2187_; 
v___x_2187_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2168_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_);
if (lean_obj_tag(v___x_2187_) == 0)
{
lean_object* v_a_2188_; lean_object* v___f_2189_; lean_object* v___x_2190_; lean_object* v_a_2191_; lean_object* v___y_2193_; lean_object* v___y_2194_; lean_object* v___y_2195_; lean_object* v___y_2196_; lean_object* v___y_2197_; lean_object* v___y_2198_; lean_object* v___y_2199_; lean_object* v___y_2200_; lean_object* v___x_2203_; uint8_t v___x_2204_; 
v_a_2188_ = lean_ctor_get(v___x_2187_, 0);
lean_inc_n(v_a_2188_, 3);
lean_dec_ref_known(v___x_2187_, 1);
v___f_2189_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_refineCore___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2189_, 0, v_a_2188_);
v___x_2190_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_fst_2182_, v___y_2172_);
v_a_2191_ = lean_ctor_get(v___x_2190_, 0);
lean_inc(v_a_2191_);
lean_dec_ref(v___x_2190_);
v___x_2203_ = l_Lean_mkMVar(v_a_2188_);
v___x_2204_ = lean_expr_eqv(v_a_2191_, v___x_2203_);
if (v___x_2204_ == 0)
{
lean_object* v___x_2205_; 
lean_inc(v_a_2191_);
v___x_2205_ = l_Lean_FindMVar_main(v___f_2189_, v_a_2191_, v___x_2179_);
if (lean_obj_tag(v___x_2205_) == 1)
{
lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2209_; 
lean_dec_ref_known(v___x_2205_, 1);
lean_dec(v_a_2188_);
lean_dec(v_snd_2183_);
v___x_2206_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__1, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__1);
v___x_2207_ = l_Lean_indentExpr(v_a_2191_);
if (v_isShared_2186_ == 0)
{
lean_ctor_set_tag(v___x_2185_, 7);
lean_ctor_set(v___x_2185_, 1, v___x_2207_);
lean_ctor_set(v___x_2185_, 0, v___x_2206_);
v___x_2209_ = v___x_2185_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v___x_2206_);
lean_ctor_set(v_reuseFailAlloc_2217_, 1, v___x_2207_);
v___x_2209_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2210_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__3, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__3_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__3);
v___x_2211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2211_, 0, v___x_2209_);
lean_ctor_set(v___x_2211_, 1, v___x_2210_);
v___x_2212_ = l_Lean_MessageData_ofExpr(v___x_2203_);
v___x_2213_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2213_, 0, v___x_2211_);
lean_ctor_set(v___x_2213_, 1, v___x_2212_);
v___x_2214_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__5, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__5_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__5);
v___x_2215_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2215_, 0, v___x_2213_);
lean_ctor_set(v___x_2215_, 1, v___x_2214_);
v___x_2216_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v___x_2215_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_);
return v___x_2216_;
}
}
else
{
lean_dec(v___x_2205_);
lean_dec_ref(v___x_2203_);
lean_del_object(v___x_2185_);
v___y_2193_ = v___y_2167_;
v___y_2194_ = v___y_2168_;
v___y_2195_ = v___y_2169_;
v___y_2196_ = v___y_2170_;
v___y_2197_ = v___y_2171_;
v___y_2198_ = v___y_2172_;
v___y_2199_ = v___y_2173_;
v___y_2200_ = v___y_2174_;
goto v___jp_2192_;
}
}
else
{
lean_object* v___x_2219_; 
lean_dec_ref(v___x_2203_);
lean_dec(v_a_2191_);
lean_dec_ref(v___f_2189_);
if (v_isShared_2186_ == 0)
{
lean_ctor_set_tag(v___x_2185_, 1);
lean_ctor_set(v___x_2185_, 0, v_a_2188_);
v___x_2219_ = v___x_2185_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v_a_2188_);
lean_ctor_set(v_reuseFailAlloc_2221_, 1, v_snd_2183_);
v___x_2219_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
lean_object* v___x_2220_; 
v___x_2220_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2219_, v___y_2168_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_);
return v___x_2220_;
}
}
v___jp_2192_:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2201_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(v_a_2188_, v_a_2191_, v___y_2198_);
lean_dec_ref(v___x_2201_);
v___x_2202_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_snd_2183_, v___y_2194_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_);
return v___x_2202_;
}
}
else
{
lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2229_; 
lean_del_object(v___x_2185_);
lean_dec(v_snd_2183_);
lean_dec(v_fst_2182_);
v_a_2222_ = lean_ctor_get(v___x_2187_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2187_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2224_ = v___x_2187_;
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v___x_2187_);
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
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
v_a_2231_ = lean_ctor_get(v___x_2180_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2180_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2180_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2180_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
}
else
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2246_; 
lean_dec(v_tagSuffix_2165_);
lean_dec(v_stx_2164_);
v_a_2239_ = lean_ctor_get(v___x_2176_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v___x_2176_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2241_ = v___x_2176_;
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___x_2176_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2244_; 
if (v_isShared_2242_ == 0)
{
v___x_2244_ = v___x_2241_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_a_2239_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___boxed(lean_object* v_stx_2247_, lean_object* v_tagSuffix_2248_, lean_object* v_allowNaturalHoles_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_2259_; lean_object* v_res_2260_; 
v_allowNaturalHoles_boxed_2259_ = lean_unbox(v_allowNaturalHoles_2249_);
v_res_2260_ = l_Lean_Elab_Tactic_refineCore___lam__1(v_stx_2247_, v_tagSuffix_2248_, v_allowNaturalHoles_boxed_2259_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_);
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2256_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
lean_dec(v___y_2253_);
lean_dec_ref(v___y_2252_);
lean_dec(v___y_2251_);
lean_dec_ref(v___y_2250_);
return v_res_2260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore(lean_object* v_stx_2261_, lean_object* v_tagSuffix_2262_, uint8_t v_allowNaturalHoles_2263_, lean_object* v_a_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_){
_start:
{
lean_object* v___x_2273_; lean_object* v___f_2274_; lean_object* v___x_2275_; 
v___x_2273_ = lean_box(v_allowNaturalHoles_2263_);
v___f_2274_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_refineCore___lam__1___boxed), 12, 3);
lean_closure_set(v___f_2274_, 0, v_stx_2261_);
lean_closure_set(v___f_2274_, 1, v_tagSuffix_2262_);
lean_closure_set(v___f_2274_, 2, v___x_2273_);
v___x_2275_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_2274_, v_a_2264_, v_a_2265_, v_a_2266_, v_a_2267_, v_a_2268_, v_a_2269_, v_a_2270_, v_a_2271_);
return v___x_2275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___boxed(lean_object* v_stx_2276_, lean_object* v_tagSuffix_2277_, lean_object* v_allowNaturalHoles_2278_, lean_object* v_a_2279_, lean_object* v_a_2280_, lean_object* v_a_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_2288_; lean_object* v_res_2289_; 
v_allowNaturalHoles_boxed_2288_ = lean_unbox(v_allowNaturalHoles_2278_);
v_res_2289_ = l_Lean_Elab_Tactic_refineCore(v_stx_2276_, v_tagSuffix_2277_, v_allowNaturalHoles_boxed_2288_, v_a_2279_, v_a_2280_, v_a_2281_, v_a_2282_, v_a_2283_, v_a_2284_, v_a_2285_, v_a_2286_);
lean_dec(v_a_2286_);
lean_dec_ref(v_a_2285_);
lean_dec(v_a_2284_);
lean_dec_ref(v_a_2283_);
lean_dec(v_a_2282_);
lean_dec_ref(v_a_2281_);
lean_dec(v_a_2280_);
lean_dec_ref(v_a_2279_);
return v_res_2289_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0(lean_object* v_mvarId_2290_, lean_object* v_val_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v___x_2301_; 
v___x_2301_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(v_mvarId_2290_, v_val_2291_, v___y_2297_);
return v___x_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___boxed(lean_object* v_mvarId_2302_, lean_object* v_val_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_){
_start:
{
lean_object* v_res_2313_; 
v_res_2313_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0(v_mvarId_2302_, v_val_2303_, v___y_2304_, v___y_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_);
lean_dec(v___y_2311_);
lean_dec_ref(v___y_2310_);
lean_dec(v___y_2309_);
lean_dec_ref(v___y_2308_);
lean_dec(v___y_2307_);
lean_dec_ref(v___y_2306_);
lean_dec(v___y_2305_);
lean_dec_ref(v___y_2304_);
return v_res_2313_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1(lean_object* v_00_u03b1_2314_, lean_object* v_msg_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_){
_start:
{
lean_object* v___x_2325_; 
v___x_2325_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v_msg_2315_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_);
return v___x_2325_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___boxed(lean_object* v_00_u03b1_2326_, lean_object* v_msg_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_){
_start:
{
lean_object* v_res_2337_; 
v_res_2337_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1(v_00_u03b1_2326_, v_msg_2327_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_);
lean_dec(v___y_2335_);
lean_dec_ref(v___y_2334_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
return v_res_2337_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0(lean_object* v_00_u03b2_2338_, lean_object* v_x_2339_, lean_object* v_x_2340_, lean_object* v_x_2341_){
_start:
{
lean_object* v___x_2342_; 
v___x_2342_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0___redArg(v_x_2339_, v_x_2340_, v_x_2341_);
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2343_, lean_object* v_x_2344_, size_t v_x_2345_, size_t v_x_2346_, lean_object* v_x_2347_, lean_object* v_x_2348_){
_start:
{
lean_object* v___x_2349_; 
v___x_2349_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_x_2344_, v_x_2345_, v_x_2346_, v_x_2347_, v_x_2348_);
return v___x_2349_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2350_, lean_object* v_x_2351_, lean_object* v_x_2352_, lean_object* v_x_2353_, lean_object* v_x_2354_, lean_object* v_x_2355_){
_start:
{
size_t v_x_4148__boxed_2356_; size_t v_x_4149__boxed_2357_; lean_object* v_res_2358_; 
v_x_4148__boxed_2356_ = lean_unbox_usize(v_x_2352_);
lean_dec(v_x_2352_);
v_x_4149__boxed_2357_ = lean_unbox_usize(v_x_2353_);
lean_dec(v_x_2353_);
v_res_2358_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1(v_00_u03b2_2350_, v_x_2351_, v_x_4148__boxed_2356_, v_x_4149__boxed_2357_, v_x_2354_, v_x_2355_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_2359_, lean_object* v_n_2360_, lean_object* v_k_2361_, lean_object* v_v_2362_){
_start:
{
lean_object* v___x_2363_; 
v___x_2363_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4___redArg(v_n_2360_, v_k_2361_, v_v_2362_);
return v___x_2363_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_2364_, size_t v_depth_2365_, lean_object* v_keys_2366_, lean_object* v_vals_2367_, lean_object* v_heq_2368_, lean_object* v_i_2369_, lean_object* v_entries_2370_){
_start:
{
lean_object* v___x_2371_; 
v___x_2371_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(v_depth_2365_, v_keys_2366_, v_vals_2367_, v_i_2369_, v_entries_2370_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03b2_2372_, lean_object* v_depth_2373_, lean_object* v_keys_2374_, lean_object* v_vals_2375_, lean_object* v_heq_2376_, lean_object* v_i_2377_, lean_object* v_entries_2378_){
_start:
{
size_t v_depth_boxed_2379_; lean_object* v_res_2380_; 
v_depth_boxed_2379_ = lean_unbox_usize(v_depth_2373_);
lean_dec(v_depth_2373_);
v_res_2380_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5(v_00_u03b2_2372_, v_depth_boxed_2379_, v_keys_2374_, v_vals_2375_, v_heq_2376_, v_i_2377_, v_entries_2378_);
lean_dec_ref(v_vals_2375_);
lean_dec_ref(v_keys_2374_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object* v_00_u03b2_2381_, lean_object* v_x_2382_, lean_object* v_x_2383_, lean_object* v_x_2384_, lean_object* v_x_2385_){
_start:
{
lean_object* v___x_2386_; 
v___x_2386_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(v_x_2382_, v_x_2383_, v_x_2384_, v_x_2385_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine(lean_object* v_stx_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_){
_start:
{
lean_object* v___x_2405_; uint8_t v___x_2406_; 
v___x_2405_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine___closed__1));
lean_inc(v_stx_2395_);
v___x_2406_ = l_Lean_Syntax_isOfKind(v_stx_2395_, v___x_2405_);
if (v___x_2406_ == 0)
{
lean_object* v___x_2407_; 
lean_dec(v_stx_2395_);
v___x_2407_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_2407_;
}
else
{
lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; uint8_t v___x_2411_; lean_object* v___x_2412_; 
v___x_2408_ = lean_unsigned_to_nat(1u);
v___x_2409_ = l_Lean_Syntax_getArg(v_stx_2395_, v___x_2408_);
lean_dec(v_stx_2395_);
v___x_2410_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine___closed__2));
v___x_2411_ = 0;
v___x_2412_ = l_Lean_Elab_Tactic_refineCore(v___x_2409_, v___x_2410_, v___x_2411_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_, v_a_2403_);
return v___x_2412_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine___boxed(lean_object* v_stx_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l_Lean_Elab_Tactic_evalRefine(v_stx_2413_, v_a_2414_, v_a_2415_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_);
lean_dec(v_a_2421_);
lean_dec_ref(v_a_2420_);
lean_dec(v_a_2419_);
lean_dec_ref(v_a_2418_);
lean_dec(v_a_2417_);
lean_dec_ref(v_a_2416_);
lean_dec(v_a_2415_);
lean_dec_ref(v_a_2414_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1(){
_start:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; 
v___x_2431_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2432_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine___closed__1));
v___x_2433_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1));
v___x_2434_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRefine___boxed), 10, 0);
v___x_2435_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2431_, v___x_2432_, v___x_2433_, v___x_2434_);
return v___x_2435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___boxed(lean_object* v_a_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1();
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3(){
_start:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; 
v___x_2464_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1));
v___x_2465_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__6));
v___x_2466_ = l_Lean_addBuiltinDeclarationRanges(v___x_2464_, v___x_2465_);
return v___x_2466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___boxed(lean_object* v_a_2467_){
_start:
{
lean_object* v_res_2468_; 
v_res_2468_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3();
return v_res_2468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27(lean_object* v_stx_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_){
_start:
{
lean_object* v___x_2487_; uint8_t v___x_2488_; 
v___x_2487_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine_x27___closed__1));
lean_inc(v_stx_2477_);
v___x_2488_ = l_Lean_Syntax_isOfKind(v_stx_2477_, v___x_2487_);
if (v___x_2488_ == 0)
{
lean_object* v___x_2489_; 
lean_dec(v_stx_2477_);
v___x_2489_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_2489_;
}
else
{
lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2490_ = lean_unsigned_to_nat(1u);
v___x_2491_ = l_Lean_Syntax_getArg(v_stx_2477_, v___x_2490_);
lean_dec(v_stx_2477_);
v___x_2492_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine_x27___closed__2));
v___x_2493_ = l_Lean_Elab_Tactic_refineCore(v___x_2491_, v___x_2492_, v___x_2488_, v_a_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_, v_a_2483_, v_a_2484_, v_a_2485_);
return v___x_2493_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27___boxed(lean_object* v_stx_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_){
_start:
{
lean_object* v_res_2504_; 
v_res_2504_ = l_Lean_Elab_Tactic_evalRefine_x27(v_stx_2494_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_);
lean_dec(v_a_2502_);
lean_dec_ref(v_a_2501_);
lean_dec(v_a_2500_);
lean_dec_ref(v_a_2499_);
lean_dec(v_a_2498_);
lean_dec_ref(v_a_2497_);
lean_dec(v_a_2496_);
lean_dec_ref(v_a_2495_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1(){
_start:
{
lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2512_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2513_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine_x27___closed__1));
v___x_2514_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1));
v___x_2515_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRefine_x27___boxed), 10, 0);
v___x_2516_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2512_, v___x_2513_, v___x_2514_, v___x_2515_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___boxed(lean_object* v_a_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1();
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3(){
_start:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; 
v___x_2545_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1));
v___x_2546_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__6));
v___x_2547_ = l_Lean_addBuiltinDeclarationRanges(v___x_2545_, v___x_2546_);
return v___x_2547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___boxed(lean_object* v_a_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3();
return v_res_2549_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2551_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__0));
v___x_2552_ = l_Lean_stringToMessageData(v___x_2551_);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0(uint8_t v___x_2553_, lean_object* v_stx_2554_, lean_object* v___x_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_){
_start:
{
if (v___x_2553_ == 0)
{
lean_object* v___x_2565_; 
lean_dec_ref(v___x_2555_);
v___x_2565_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_2565_;
}
else
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2566_ = lean_unsigned_to_nat(1u);
v___x_2567_ = l_Lean_Syntax_getArg(v_stx_2554_, v___x_2566_);
v___x_2568_ = lean_box(0);
v___x_2569_ = l_Lean_Name_mkStr1(v___x_2555_);
v___x_2570_ = l_Lean_Elab_Tactic_elabTermWithHoles(v___x_2567_, v___x_2568_, v___x_2569_, v___x_2553_, v___x_2568_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v_a_2571_; lean_object* v_fst_2572_; lean_object* v_snd_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2621_; 
v_a_2571_ = lean_ctor_get(v___x_2570_, 0);
lean_inc(v_a_2571_);
lean_dec_ref_known(v___x_2570_, 1);
v_fst_2572_ = lean_ctor_get(v_a_2571_, 0);
v_snd_2573_ = lean_ctor_get(v_a_2571_, 1);
v_isSharedCheck_2621_ = !lean_is_exclusive(v_a_2571_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2575_ = v_a_2571_;
v_isShared_2576_ = v_isSharedCheck_2621_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_snd_2573_);
lean_inc(v_fst_2572_);
lean_dec(v_a_2571_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2621_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2577_ = l_Lean_Expr_getLambdaBody(v_fst_2572_);
v___x_2578_ = l_Lean_Expr_getAppFn(v___x_2577_);
lean_dec_ref(v___x_2577_);
if (lean_obj_tag(v___x_2578_) == 1)
{
lean_object* v_fvarId_2579_; lean_object* v___x_2580_; 
v_fvarId_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_fvarId_2579_);
lean_dec_ref_known(v___x_2578_, 1);
v___x_2580_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2557_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2580_) == 0)
{
lean_object* v_a_2581_; lean_object* v___x_2582_; 
v_a_2581_ = lean_ctor_get(v___x_2580_, 0);
lean_inc(v_a_2581_);
lean_dec_ref_known(v___x_2580_, 1);
lean_inc(v___y_2563_);
lean_inc_ref(v___y_2562_);
lean_inc(v___y_2561_);
lean_inc_ref(v___y_2560_);
lean_inc(v_fst_2572_);
v___x_2582_ = lean_infer_type(v_fst_2572_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
lean_inc(v_a_2583_);
lean_dec_ref_known(v___x_2582_, 1);
v___x_2584_ = l_Lean_Expr_headBeta(v_a_2583_);
v___x_2585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2585_, 0, v___x_2584_);
v___x_2586_ = l_Lean_MVarId_replace(v_a_2581_, v_fvarId_2579_, v_fst_2572_, v___x_2585_, v___x_2568_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2586_) == 0)
{
lean_object* v_a_2587_; lean_object* v_mvarId_2588_; lean_object* v___x_2589_; lean_object* v___x_2591_; 
v_a_2587_ = lean_ctor_get(v___x_2586_, 0);
lean_inc(v_a_2587_);
lean_dec_ref_known(v___x_2586_, 1);
v_mvarId_2588_ = lean_ctor_get(v_a_2587_, 1);
lean_inc(v_mvarId_2588_);
lean_dec(v_a_2587_);
v___x_2589_ = lean_box(0);
if (v_isShared_2576_ == 0)
{
lean_ctor_set_tag(v___x_2575_, 1);
lean_ctor_set(v___x_2575_, 1, v___x_2589_);
lean_ctor_set(v___x_2575_, 0, v_mvarId_2588_);
v___x_2591_ = v___x_2575_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v_mvarId_2588_);
lean_ctor_set(v_reuseFailAlloc_2594_, 1, v___x_2589_);
v___x_2591_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2592_ = l_List_appendTR___redArg(v_snd_2573_, v___x_2591_);
v___x_2593_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2592_, v___y_2557_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
return v___x_2593_;
}
}
else
{
lean_object* v_a_2595_; lean_object* v___x_2597_; uint8_t v_isShared_2598_; uint8_t v_isSharedCheck_2602_; 
lean_del_object(v___x_2575_);
lean_dec(v_snd_2573_);
v_a_2595_ = lean_ctor_get(v___x_2586_, 0);
v_isSharedCheck_2602_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2597_ = v___x_2586_;
v_isShared_2598_ = v_isSharedCheck_2602_;
goto v_resetjp_2596_;
}
else
{
lean_inc(v_a_2595_);
lean_dec(v___x_2586_);
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
else
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2610_; 
lean_dec(v_a_2581_);
lean_dec(v_fvarId_2579_);
lean_del_object(v___x_2575_);
lean_dec(v_snd_2573_);
lean_dec(v_fst_2572_);
v_a_2603_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2605_ = v___x_2582_;
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2582_);
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
}
else
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
lean_dec(v_fvarId_2579_);
lean_del_object(v___x_2575_);
lean_dec(v_snd_2573_);
lean_dec(v_fst_2572_);
v_a_2611_ = lean_ctor_get(v___x_2580_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2580_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2580_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
else
{
lean_object* v___x_2619_; lean_object* v___x_2620_; 
lean_dec_ref(v___x_2578_);
lean_del_object(v___x_2575_);
lean_dec(v_snd_2573_);
lean_dec(v_fst_2572_);
v___x_2619_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1, &l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1);
v___x_2620_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v___x_2619_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
return v___x_2620_;
}
}
}
else
{
lean_object* v_a_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_2629_; 
v_a_2622_ = lean_ctor_get(v___x_2570_, 0);
v_isSharedCheck_2629_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2629_ == 0)
{
v___x_2624_ = v___x_2570_;
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_a_2622_);
lean_dec(v___x_2570_);
v___x_2624_ = lean_box(0);
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
v_resetjp_2623_:
{
lean_object* v___x_2627_; 
if (v_isShared_2625_ == 0)
{
v___x_2627_ = v___x_2624_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v_a_2622_);
v___x_2627_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
return v___x_2627_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0___boxed(lean_object* v___x_2630_, lean_object* v_stx_2631_, lean_object* v___x_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
uint8_t v___x_1058__boxed_2642_; lean_object* v_res_2643_; 
v___x_1058__boxed_2642_ = lean_unbox(v___x_2630_);
v_res_2643_ = l_Lean_Elab_Tactic_evalSpecialize___lam__0(v___x_1058__boxed_2642_, v_stx_2631_, v___x_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_);
lean_dec(v___y_2640_);
lean_dec_ref(v___y_2639_);
lean_dec(v___y_2638_);
lean_dec_ref(v___y_2637_);
lean_dec(v___y_2636_);
lean_dec_ref(v___y_2635_);
lean_dec(v___y_2634_);
lean_dec_ref(v___y_2633_);
lean_dec(v_stx_2631_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize(lean_object* v_stx_2650_, lean_object* v_a_2651_, lean_object* v_a_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_, lean_object* v_a_2658_){
_start:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; uint8_t v___x_2662_; lean_object* v___x_2663_; lean_object* v___y_2664_; lean_object* v___x_2665_; 
v___x_2660_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSpecialize___closed__0));
v___x_2661_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSpecialize___closed__1));
lean_inc(v_stx_2650_);
v___x_2662_ = l_Lean_Syntax_isOfKind(v_stx_2650_, v___x_2661_);
v___x_2663_ = lean_box(v___x_2662_);
v___y_2664_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSpecialize___lam__0___boxed), 12, 3);
lean_closure_set(v___y_2664_, 0, v___x_2663_);
lean_closure_set(v___y_2664_, 1, v_stx_2650_);
lean_closure_set(v___y_2664_, 2, v___x_2660_);
v___x_2665_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___y_2664_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_, v_a_2655_, v_a_2656_, v_a_2657_, v_a_2658_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___boxed(lean_object* v_stx_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_, lean_object* v_a_2674_, lean_object* v_a_2675_){
_start:
{
lean_object* v_res_2676_; 
v_res_2676_ = l_Lean_Elab_Tactic_evalSpecialize(v_stx_2666_, v_a_2667_, v_a_2668_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_);
lean_dec(v_a_2674_);
lean_dec_ref(v_a_2673_);
lean_dec(v_a_2672_);
lean_dec_ref(v_a_2671_);
lean_dec(v_a_2670_);
lean_dec_ref(v_a_2669_);
lean_dec(v_a_2668_);
lean_dec_ref(v_a_2667_);
return v_res_2676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1(){
_start:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___x_2684_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2685_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSpecialize___closed__1));
v___x_2686_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1));
v___x_2687_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSpecialize___boxed), 10, 0);
v___x_2688_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2684_, v___x_2685_, v___x_2686_, v___x_2687_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___boxed(lean_object* v_a_2689_){
_start:
{
lean_object* v_res_2690_; 
v_res_2690_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1();
return v_res_2690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3(){
_start:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2716_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1));
v___x_2717_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__6));
v___x_2718_ = l_Lean_addBuiltinDeclarationRanges(v___x_2716_, v___x_2717_);
return v___x_2718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___boxed(lean_object* v_a_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3();
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermForApply(lean_object* v_stx_2722_, uint8_t v_mayPostpone_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_, lean_object* v_a_2728_, lean_object* v_a_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_){
_start:
{
lean_object* v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2739_; lean_object* v___y_2740_; lean_object* v___y_2741_; uint8_t v___x_2744_; 
v___x_2744_ = l_Lean_Syntax_isIdent(v_stx_2722_);
if (v___x_2744_ == 0)
{
v___y_2734_ = v_a_2724_;
v___y_2735_ = v_a_2725_;
v___y_2736_ = v_a_2726_;
v___y_2737_ = v_a_2727_;
v___y_2738_ = v_a_2728_;
v___y_2739_ = v_a_2729_;
v___y_2740_ = v_a_2730_;
v___y_2741_ = v_a_2731_;
goto v___jp_2733_;
}
else
{
lean_object* v___x_2745_; lean_object* v___x_2746_; 
v___x_2745_ = ((lean_object*)(l_Lean_Elab_Tactic_elabTermForApply___closed__0));
lean_inc(v_stx_2722_);
v___x_2746_ = l_Lean_Elab_Term_resolveId_x3f(v_stx_2722_, v___x_2745_, v___x_2744_, v_a_2726_, v_a_2727_, v_a_2728_, v_a_2729_, v_a_2730_, v_a_2731_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2755_; 
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2755_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2749_ = v___x_2746_;
v_isShared_2750_ = v_isSharedCheck_2755_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_dec(v___x_2746_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2755_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
if (lean_obj_tag(v_a_2747_) == 1)
{
lean_object* v_val_2751_; lean_object* v___x_2753_; 
lean_dec(v_stx_2722_);
v_val_2751_ = lean_ctor_get(v_a_2747_, 0);
lean_inc(v_val_2751_);
lean_dec_ref_known(v_a_2747_, 1);
if (v_isShared_2750_ == 0)
{
lean_ctor_set(v___x_2749_, 0, v_val_2751_);
v___x_2753_ = v___x_2749_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_val_2751_);
v___x_2753_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
return v___x_2753_;
}
}
else
{
lean_del_object(v___x_2749_);
lean_dec(v_a_2747_);
v___y_2734_ = v_a_2724_;
v___y_2735_ = v_a_2725_;
v___y_2736_ = v_a_2726_;
v___y_2737_ = v_a_2727_;
v___y_2738_ = v_a_2728_;
v___y_2739_ = v_a_2729_;
v___y_2740_ = v_a_2730_;
v___y_2741_ = v_a_2731_;
goto v___jp_2733_;
}
}
}
else
{
lean_object* v_a_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2763_; 
lean_dec(v_stx_2722_);
v_a_2756_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2758_ = v___x_2746_;
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_a_2756_);
lean_dec(v___x_2746_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___x_2761_; 
if (v_isShared_2759_ == 0)
{
v___x_2761_ = v___x_2758_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_a_2756_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
}
}
v___jp_2733_:
{
lean_object* v___x_2742_; lean_object* v___x_2743_; 
v___x_2742_ = lean_box(0);
v___x_2743_ = l_Lean_Elab_Tactic_elabTerm(v_stx_2722_, v___x_2742_, v_mayPostpone_2723_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_);
return v___x_2743_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermForApply___boxed(lean_object* v_stx_2764_, lean_object* v_mayPostpone_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_, lean_object* v_a_2768_, lean_object* v_a_2769_, lean_object* v_a_2770_, lean_object* v_a_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_){
_start:
{
uint8_t v_mayPostpone_boxed_2775_; lean_object* v_res_2776_; 
v_mayPostpone_boxed_2775_ = lean_unbox(v_mayPostpone_2765_);
v_res_2776_ = l_Lean_Elab_Tactic_elabTermForApply(v_stx_2764_, v_mayPostpone_boxed_2775_, v_a_2766_, v_a_2767_, v_a_2768_, v_a_2769_, v_a_2770_, v_a_2771_, v_a_2772_, v_a_2773_);
lean_dec(v_a_2773_);
lean_dec_ref(v_a_2772_);
lean_dec(v_a_2771_);
lean_dec_ref(v_a_2770_);
lean_dec(v_a_2769_);
lean_dec_ref(v_a_2768_);
lean_dec(v_a_2767_);
lean_dec_ref(v_a_2766_);
return v_res_2776_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2778_; lean_object* v___x_2779_; 
v___x_2778_ = ((lean_object*)(l_Lean_Elab_Tactic_getFVarId___lam__0___closed__0));
v___x_2779_ = l_Lean_stringToMessageData(v___x_2778_);
return v___x_2779_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; 
v___x_2781_ = ((lean_object*)(l_Lean_Elab_Tactic_getFVarId___lam__0___closed__2));
v___x_2782_ = l_Lean_stringToMessageData(v___x_2781_);
return v___x_2782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0(lean_object* v___x_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_){
_start:
{
lean_object* v___x_2793_; 
v___x_2793_ = l_Lean_Elab_Tactic_withoutRecover___redArg(v___x_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_);
if (lean_obj_tag(v___x_2793_) == 0)
{
lean_object* v_a_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2808_; 
v_a_2794_ = lean_ctor_get(v___x_2793_, 0);
v_isSharedCheck_2808_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2796_ = v___x_2793_;
v_isShared_2797_ = v_isSharedCheck_2808_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_a_2794_);
lean_dec(v___x_2793_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2808_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
if (lean_obj_tag(v_a_2794_) == 1)
{
lean_object* v_fvarId_2798_; lean_object* v___x_2800_; 
v_fvarId_2798_ = lean_ctor_get(v_a_2794_, 0);
lean_inc(v_fvarId_2798_);
lean_dec_ref_known(v_a_2794_, 1);
if (v_isShared_2797_ == 0)
{
lean_ctor_set(v___x_2796_, 0, v_fvarId_2798_);
v___x_2800_ = v___x_2796_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_fvarId_2798_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
return v___x_2800_;
}
}
else
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; 
lean_del_object(v___x_2796_);
v___x_2802_ = lean_obj_once(&l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1, &l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1);
v___x_2803_ = l_Lean_MessageData_ofExpr(v_a_2794_);
v___x_2804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2804_, 0, v___x_2802_);
lean_ctor_set(v___x_2804_, 1, v___x_2803_);
v___x_2805_ = lean_obj_once(&l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3, &l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3);
v___x_2806_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2804_);
lean_ctor_set(v___x_2806_, 1, v___x_2805_);
v___x_2807_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v___x_2806_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_);
return v___x_2807_;
}
}
}
else
{
lean_object* v_a_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2816_; 
v_a_2809_ = lean_ctor_get(v___x_2793_, 0);
v_isSharedCheck_2816_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2816_ == 0)
{
v___x_2811_ = v___x_2793_;
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_a_2809_);
lean_dec(v___x_2793_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
lean_object* v___x_2814_; 
if (v_isShared_2812_ == 0)
{
v___x_2814_ = v___x_2811_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v_a_2809_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
return v___x_2814_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___boxed(lean_object* v___x_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_){
_start:
{
lean_object* v_res_2827_; 
v_res_2827_ = l_Lean_Elab_Tactic_getFVarId___lam__0(v___x_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_, v___y_2825_);
lean_dec(v___y_2825_);
lean_dec_ref(v___y_2824_);
lean_dec(v___y_2823_);
lean_dec_ref(v___y_2822_);
lean_dec(v___y_2821_);
lean_dec_ref(v___y_2820_);
lean_dec(v___y_2819_);
lean_dec_ref(v___y_2818_);
return v_res_2827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId(lean_object* v_id_2828_, lean_object* v_a_2829_, lean_object* v_a_2830_, lean_object* v_a_2831_, lean_object* v_a_2832_, lean_object* v_a_2833_, lean_object* v_a_2834_, lean_object* v_a_2835_, lean_object* v_a_2836_){
_start:
{
lean_object* v_toCold_2838_; lean_object* v_currRecDepth_2839_; lean_object* v_ref_2840_; uint16_t v_optionFlags_2841_; uint8_t v_suppressElabErrors_2842_; uint8_t v_checkDeprecated_2843_; uint8_t v_isRecordingDeps_2844_; uint8_t v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___f_2848_; lean_object* v_ref_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; 
v_toCold_2838_ = lean_ctor_get(v_a_2835_, 0);
v_currRecDepth_2839_ = lean_ctor_get(v_a_2835_, 1);
v_ref_2840_ = lean_ctor_get(v_a_2835_, 2);
v_optionFlags_2841_ = lean_ctor_get_uint16(v_a_2835_, sizeof(void*)*3);
v_suppressElabErrors_2842_ = lean_ctor_get_uint8(v_a_2835_, sizeof(void*)*3 + 2);
v_checkDeprecated_2843_ = lean_ctor_get_uint8(v_a_2835_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2844_ = lean_ctor_get_uint8(v_a_2835_, sizeof(void*)*3 + 4);
v___x_2845_ = 0;
v___x_2846_ = lean_box(v___x_2845_);
lean_inc(v_id_2828_);
v___x_2847_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabTermForApply___boxed), 11, 2);
lean_closure_set(v___x_2847_, 0, v_id_2828_);
lean_closure_set(v___x_2847_, 1, v___x_2846_);
v___f_2848_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_getFVarId___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2848_, 0, v___x_2847_);
v_ref_2849_ = l_Lean_replaceRef(v_id_2828_, v_ref_2840_);
lean_dec(v_id_2828_);
lean_inc(v_currRecDepth_2839_);
lean_inc_ref(v_toCold_2838_);
v___x_2850_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2850_, 0, v_toCold_2838_);
lean_ctor_set(v___x_2850_, 1, v_currRecDepth_2839_);
lean_ctor_set(v___x_2850_, 2, v_ref_2849_);
lean_ctor_set_uint16(v___x_2850_, sizeof(void*)*3, v_optionFlags_2841_);
lean_ctor_set_uint8(v___x_2850_, sizeof(void*)*3 + 2, v_suppressElabErrors_2842_);
lean_ctor_set_uint8(v___x_2850_, sizeof(void*)*3 + 3, v_checkDeprecated_2843_);
lean_ctor_set_uint8(v___x_2850_, sizeof(void*)*3 + 4, v_isRecordingDeps_2844_);
v___x_2851_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_2848_, v_a_2829_, v_a_2830_, v_a_2831_, v_a_2832_, v_a_2833_, v_a_2834_, v___x_2850_, v_a_2836_);
lean_dec_ref_known(v___x_2850_, 3);
return v___x_2851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___boxed(lean_object* v_id_2852_, lean_object* v_a_2853_, lean_object* v_a_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_){
_start:
{
lean_object* v_res_2862_; 
v_res_2862_ = l_Lean_Elab_Tactic_getFVarId(v_id_2852_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_, v_a_2859_, v_a_2860_);
lean_dec(v_a_2860_);
lean_dec_ref(v_a_2859_);
lean_dec(v_a_2858_);
lean_dec_ref(v_a_2857_);
lean_dec(v_a_2856_);
lean_dec_ref(v_a_2855_);
lean_dec(v_a_2854_);
lean_dec_ref(v_a_2853_);
return v_res_2862_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0(size_t v_sz_2863_, size_t v_i_2864_, lean_object* v_bs_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_){
_start:
{
uint8_t v___x_2875_; 
v___x_2875_ = lean_usize_dec_lt(v_i_2864_, v_sz_2863_);
if (v___x_2875_ == 0)
{
lean_object* v___x_2876_; 
v___x_2876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2876_, 0, v_bs_2865_);
return v___x_2876_;
}
else
{
lean_object* v_v_2877_; lean_object* v___x_2878_; lean_object* v_bs_x27_2879_; lean_object* v___x_2880_; 
v_v_2877_ = lean_array_uget(v_bs_2865_, v_i_2864_);
v___x_2878_ = lean_unsigned_to_nat(0u);
v_bs_x27_2879_ = lean_array_uset(v_bs_2865_, v_i_2864_, v___x_2878_);
v___x_2880_ = l_Lean_Elab_Tactic_getFVarId(v_v_2877_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_object* v_a_2881_; size_t v___x_2882_; size_t v___x_2883_; lean_object* v___x_2884_; 
v_a_2881_ = lean_ctor_get(v___x_2880_, 0);
lean_inc(v_a_2881_);
lean_dec_ref_known(v___x_2880_, 1);
v___x_2882_ = ((size_t)1ULL);
v___x_2883_ = lean_usize_add(v_i_2864_, v___x_2882_);
v___x_2884_ = lean_array_uset(v_bs_x27_2879_, v_i_2864_, v_a_2881_);
v_i_2864_ = v___x_2883_;
v_bs_2865_ = v___x_2884_;
goto _start;
}
else
{
lean_object* v_a_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2893_; 
lean_dec_ref(v_bs_x27_2879_);
v_a_2886_ = lean_ctor_get(v___x_2880_, 0);
v_isSharedCheck_2893_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_2893_ == 0)
{
v___x_2888_ = v___x_2880_;
v_isShared_2889_ = v_isSharedCheck_2893_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_a_2886_);
lean_dec(v___x_2880_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2893_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v___x_2891_; 
if (v_isShared_2889_ == 0)
{
v___x_2891_ = v___x_2888_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v_a_2886_);
v___x_2891_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
return v___x_2891_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0___boxed(lean_object* v_sz_2894_, lean_object* v_i_2895_, lean_object* v_bs_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_){
_start:
{
size_t v_sz_boxed_2906_; size_t v_i_boxed_2907_; lean_object* v_res_2908_; 
v_sz_boxed_2906_ = lean_unbox_usize(v_sz_2894_);
lean_dec(v_sz_2894_);
v_i_boxed_2907_ = lean_unbox_usize(v_i_2895_);
lean_dec(v_i_2895_);
v_res_2908_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0(v_sz_boxed_2906_, v_i_boxed_2907_, v_bs_2896_, v___y_2897_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_);
lean_dec(v___y_2904_);
lean_dec_ref(v___y_2903_);
lean_dec(v___y_2902_);
lean_dec_ref(v___y_2901_);
lean_dec(v___y_2900_);
lean_dec_ref(v___y_2899_);
lean_dec(v___y_2898_);
lean_dec_ref(v___y_2897_);
return v_res_2908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIds(lean_object* v_ids_2911_, lean_object* v_a_2912_, lean_object* v_a_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_){
_start:
{
size_t v_sz_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; 
v_sz_2921_ = lean_array_size(v_ids_2911_);
v___x_2922_ = lean_box_usize(v_sz_2921_);
v___x_2923_ = ((lean_object*)(l_Lean_Elab_Tactic_getFVarIds___boxed__const__1));
v___x_2924_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0___boxed), 12, 3);
lean_closure_set(v___x_2924_, 0, v___x_2922_);
lean_closure_set(v___x_2924_, 1, v___x_2923_);
lean_closure_set(v___x_2924_, 2, v_ids_2911_);
v___x_2925_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___x_2924_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_, v_a_2916_, v_a_2917_, v_a_2918_, v_a_2919_);
return v___x_2925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIds___boxed(lean_object* v_ids_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_, lean_object* v_a_2930_, lean_object* v_a_2931_, lean_object* v_a_2932_, lean_object* v_a_2933_, lean_object* v_a_2934_, lean_object* v_a_2935_){
_start:
{
lean_object* v_res_2936_; 
v_res_2936_ = l_Lean_Elab_Tactic_getFVarIds(v_ids_2926_, v_a_2927_, v_a_2928_, v_a_2929_, v_a_2930_, v_a_2931_, v_a_2932_, v_a_2933_, v_a_2934_);
lean_dec(v_a_2934_);
lean_dec_ref(v_a_2933_);
lean_dec(v_a_2932_);
lean_dec_ref(v_a_2931_);
lean_dec(v_a_2930_);
lean_dec_ref(v_a_2929_);
lean_dec(v_a_2928_);
lean_dec_ref(v_a_2927_);
return v_res_2936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0(lean_object* v_tac_2937_, lean_object* v_e_2938_, uint8_t v___x_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_){
_start:
{
lean_object* v_val_2950_; lean_object* v___x_2974_; 
v___x_2974_ = l_Lean_Elab_Tactic_elabTermForApply(v_e_2938_, v___x_2939_, v___y_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_);
if (lean_obj_tag(v___x_2974_) == 0)
{
lean_object* v_a_2975_; lean_object* v___x_2976_; lean_object* v_a_2977_; uint8_t v___x_2978_; 
v_a_2975_ = lean_ctor_get(v___x_2974_, 0);
lean_inc(v_a_2975_);
lean_dec_ref_known(v___x_2974_, 1);
v___x_2976_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_a_2975_, v___y_2945_);
v_a_2977_ = lean_ctor_get(v___x_2976_, 0);
lean_inc(v_a_2977_);
lean_dec_ref(v___x_2976_);
v___x_2978_ = l_Lean_Expr_isMVar(v_a_2977_);
if (v___x_2978_ == 0)
{
v_val_2950_ = v_a_2977_;
goto v___jp_2949_;
}
else
{
uint8_t v___x_2979_; lean_object* v___x_2980_; 
v___x_2979_ = 0;
v___x_2980_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_2979_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v___x_2981_; lean_object* v_a_2982_; 
lean_dec_ref_known(v___x_2980_, 1);
v___x_2981_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_a_2977_, v___y_2945_);
v_a_2982_ = lean_ctor_get(v___x_2981_, 0);
lean_inc(v_a_2982_);
lean_dec_ref(v___x_2981_);
v_val_2950_ = v_a_2982_;
goto v___jp_2949_;
}
else
{
lean_dec(v_a_2977_);
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec(v___y_2945_);
lean_dec_ref(v___y_2944_);
lean_dec_ref(v_tac_2937_);
return v___x_2980_;
}
}
}
else
{
lean_object* v_a_2983_; lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_2990_; 
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec(v___y_2945_);
lean_dec_ref(v___y_2944_);
lean_dec_ref(v_tac_2937_);
v_a_2983_ = lean_ctor_get(v___x_2974_, 0);
v_isSharedCheck_2990_ = !lean_is_exclusive(v___x_2974_);
if (v_isSharedCheck_2990_ == 0)
{
v___x_2985_ = v___x_2974_;
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
else
{
lean_inc(v_a_2983_);
lean_dec(v___x_2974_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
lean_object* v___x_2988_; 
if (v_isShared_2986_ == 0)
{
v___x_2988_ = v___x_2985_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_a_2983_);
v___x_2988_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
return v___x_2988_;
}
}
}
v___jp_2949_:
{
lean_object* v___x_2951_; 
v___x_2951_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2941_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_);
if (lean_obj_tag(v___x_2951_) == 0)
{
lean_object* v_a_2952_; lean_object* v___x_2953_; 
v_a_2952_ = lean_ctor_get(v___x_2951_, 0);
lean_inc(v_a_2952_);
lean_dec_ref_known(v___x_2951_, 1);
lean_inc(v___y_2947_);
lean_inc_ref(v___y_2946_);
lean_inc(v___y_2945_);
lean_inc_ref(v___y_2944_);
v___x_2953_ = lean_apply_7(v_tac_2937_, v_a_2952_, v_val_2950_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_, lean_box(0));
if (lean_obj_tag(v___x_2953_) == 0)
{
lean_object* v_a_2954_; uint8_t v___x_2955_; lean_object* v___x_2956_; 
v_a_2954_ = lean_ctor_get(v___x_2953_, 0);
lean_inc(v_a_2954_);
lean_dec_ref_known(v___x_2953_, 1);
v___x_2955_ = 0;
v___x_2956_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_2955_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_);
if (lean_obj_tag(v___x_2956_) == 0)
{
lean_object* v___x_2957_; 
lean_dec_ref_known(v___x_2956_, 1);
v___x_2957_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_a_2954_, v___y_2941_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_);
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec(v___y_2945_);
lean_dec_ref(v___y_2944_);
return v___x_2957_;
}
else
{
lean_dec(v_a_2954_);
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec(v___y_2945_);
lean_dec_ref(v___y_2944_);
return v___x_2956_;
}
}
else
{
lean_object* v_a_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2965_; 
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec(v___y_2945_);
lean_dec_ref(v___y_2944_);
v_a_2958_ = lean_ctor_get(v___x_2953_, 0);
v_isSharedCheck_2965_ = !lean_is_exclusive(v___x_2953_);
if (v_isSharedCheck_2965_ == 0)
{
v___x_2960_ = v___x_2953_;
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_a_2958_);
lean_dec(v___x_2953_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2963_; 
if (v_isShared_2961_ == 0)
{
v___x_2963_ = v___x_2960_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v_a_2958_);
v___x_2963_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
return v___x_2963_;
}
}
}
}
else
{
lean_object* v_a_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2973_; 
lean_dec_ref(v_val_2950_);
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec(v___y_2945_);
lean_dec_ref(v___y_2944_);
lean_dec_ref(v_tac_2937_);
v_a_2966_ = lean_ctor_get(v___x_2951_, 0);
v_isSharedCheck_2973_ = !lean_is_exclusive(v___x_2951_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2968_ = v___x_2951_;
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_a_2966_);
lean_dec(v___x_2951_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2971_; 
if (v_isShared_2969_ == 0)
{
v___x_2971_ = v___x_2968_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v_a_2966_);
v___x_2971_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2970_;
}
v_reusejp_2970_:
{
return v___x_2971_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0___boxed(lean_object* v_tac_2991_, lean_object* v_e_2992_, lean_object* v___x_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_){
_start:
{
uint8_t v___x_1014__boxed_3003_; lean_object* v_res_3004_; 
v___x_1014__boxed_3003_ = lean_unbox(v___x_2993_);
v_res_3004_ = l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0(v_tac_2991_, v_e_2992_, v___x_1014__boxed_3003_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_);
lean_dec(v___y_2997_);
lean_dec_ref(v___y_2996_);
lean_dec(v___y_2995_);
lean_dec_ref(v___y_2994_);
return v_res_3004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic(lean_object* v_tac_3005_, lean_object* v_e_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_, lean_object* v_a_3014_){
_start:
{
uint8_t v___x_3016_; lean_object* v___x_3017_; lean_object* v___f_3018_; lean_object* v___x_3019_; 
v___x_3016_ = 1;
v___x_3017_ = lean_box(v___x_3016_);
v___f_3018_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0___boxed), 12, 3);
lean_closure_set(v___f_3018_, 0, v_tac_3005_);
lean_closure_set(v___f_3018_, 1, v_e_3006_);
lean_closure_set(v___f_3018_, 2, v___x_3017_);
v___x_3019_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_3018_, v_a_3007_, v_a_3008_, v_a_3009_, v_a_3010_, v_a_3011_, v_a_3012_, v_a_3013_, v_a_3014_);
return v___x_3019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___boxed(lean_object* v_tac_3020_, lean_object* v_e_3021_, lean_object* v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_, lean_object* v_a_3029_, lean_object* v_a_3030_){
_start:
{
lean_object* v_res_3031_; 
v_res_3031_ = l_Lean_Elab_Tactic_evalApplyLikeTactic(v_tac_3020_, v_e_3021_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_);
lean_dec(v_a_3029_);
lean_dec_ref(v_a_3028_);
lean_dec(v_a_3027_);
lean_dec_ref(v_a_3026_);
lean_dec(v_a_3025_);
lean_dec_ref(v_a_3024_);
lean_dec(v_a_3023_);
lean_dec_ref(v_a_3022_);
return v_res_3031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___lam__0(uint8_t v___x_3032_, lean_object* v_g_3033_, lean_object* v_e_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_){
_start:
{
uint8_t v___x_3040_; uint8_t v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; 
v___x_3040_ = 0;
v___x_3041_ = 0;
v___x_3042_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3042_, 0, v___x_3040_);
lean_ctor_set_uint8(v___x_3042_, 1, v___x_3032_);
lean_ctor_set_uint8(v___x_3042_, 2, v___x_3041_);
lean_ctor_set_uint8(v___x_3042_, 3, v___x_3032_);
v___x_3043_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__5, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__5_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__5);
lean_inc_ref(v_e_3034_);
v___x_3044_ = l_Lean_MessageData_ofExpr(v_e_3034_);
v___x_3045_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3045_, 0, v___x_3043_);
lean_ctor_set(v___x_3045_, 1, v___x_3044_);
v___x_3046_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3046_, 0, v___x_3045_);
lean_ctor_set(v___x_3046_, 1, v___x_3043_);
v___x_3047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3047_, 0, v___x_3046_);
v___x_3048_ = l_Lean_MVarId_apply(v_g_3033_, v_e_3034_, v___x_3042_, v___x_3047_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_);
return v___x_3048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___lam__0___boxed(lean_object* v___x_3049_, lean_object* v_g_3050_, lean_object* v_e_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_){
_start:
{
uint8_t v___x_195__boxed_3057_; lean_object* v_res_3058_; 
v___x_195__boxed_3057_ = lean_unbox(v___x_3049_);
v_res_3058_ = l_Lean_Elab_Tactic_evalApply___lam__0(v___x_195__boxed_3057_, v_g_3050_, v_e_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_);
lean_dec(v___y_3055_);
lean_dec_ref(v___y_3054_);
lean_dec(v___y_3053_);
lean_dec_ref(v___y_3052_);
return v_res_3058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply(lean_object* v_stx_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_, lean_object* v_a_3072_, lean_object* v_a_3073_){
_start:
{
lean_object* v___x_3075_; uint8_t v___x_3076_; 
v___x_3075_ = ((lean_object*)(l_Lean_Elab_Tactic_evalApply___closed__1));
lean_inc(v_stx_3065_);
v___x_3076_ = l_Lean_Syntax_isOfKind(v_stx_3065_, v___x_3075_);
if (v___x_3076_ == 0)
{
lean_object* v___x_3077_; 
lean_dec(v_stx_3065_);
v___x_3077_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_3077_;
}
else
{
lean_object* v___x_3078_; lean_object* v___f_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3078_ = lean_box(v___x_3076_);
v___f_3079_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalApply___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3079_, 0, v___x_3078_);
v___x_3080_ = lean_unsigned_to_nat(1u);
v___x_3081_ = l_Lean_Syntax_getArg(v_stx_3065_, v___x_3080_);
lean_dec(v_stx_3065_);
v___x_3082_ = l_Lean_Elab_Tactic_evalApplyLikeTactic(v___f_3079_, v___x_3081_, v_a_3066_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_, v_a_3073_);
return v___x_3082_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___boxed(lean_object* v_stx_3083_, lean_object* v_a_3084_, lean_object* v_a_3085_, lean_object* v_a_3086_, lean_object* v_a_3087_, lean_object* v_a_3088_, lean_object* v_a_3089_, lean_object* v_a_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_){
_start:
{
lean_object* v_res_3093_; 
v_res_3093_ = l_Lean_Elab_Tactic_evalApply(v_stx_3083_, v_a_3084_, v_a_3085_, v_a_3086_, v_a_3087_, v_a_3088_, v_a_3089_, v_a_3090_, v_a_3091_);
lean_dec(v_a_3091_);
lean_dec_ref(v_a_3090_);
lean_dec(v_a_3089_);
lean_dec_ref(v_a_3088_);
lean_dec(v_a_3087_);
lean_dec_ref(v_a_3086_);
lean_dec(v_a_3085_);
lean_dec_ref(v_a_3084_);
return v_res_3093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1(){
_start:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3101_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3102_ = ((lean_object*)(l_Lean_Elab_Tactic_evalApply___closed__1));
v___x_3103_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1));
v___x_3104_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalApply___boxed), 10, 0);
v___x_3105_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3101_, v___x_3102_, v___x_3103_, v___x_3104_);
return v___x_3105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___boxed(lean_object* v_a_3106_){
_start:
{
lean_object* v_res_3107_; 
v_res_3107_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1();
return v_res_3107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3(){
_start:
{
lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; 
v___x_3134_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1));
v___x_3135_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__6));
v___x_3136_ = l_Lean_addBuiltinDeclarationRanges(v___x_3134_, v___x_3135_);
return v___x_3136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___boxed(lean_object* v_a_3137_){
_start:
{
lean_object* v_res_3138_; 
v_res_3138_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3();
return v_res_3138_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3139_ = lean_box(0);
v___x_3140_ = l_Lean_Elab_ConfigEval_unsupportedExprExceptionId;
v___x_3141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3141_, 0, v___x_3140_);
lean_ctor_set(v___x_3141_, 1, v___x_3139_);
return v___x_3141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___redArg(){
_start:
{
lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3143_ = lean_obj_once(&l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___redArg___closed__0, &l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___redArg___closed__0);
v___x_3144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3143_);
return v___x_3144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___redArg___boxed(lean_object* v___y_3145_){
_start:
{
lean_object* v_res_3146_; 
v_res_3146_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___redArg();
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0(lean_object* v_00_u03b1_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_){
_start:
{
lean_object* v___x_3153_; 
v___x_3153_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___redArg();
return v___x_3153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___boxed(lean_object* v_00_u03b1_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_){
_start:
{
lean_object* v_res_3160_; 
v_res_3160_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0(v_00_u03b1_3154_, v___y_3155_, v___y_3156_, v___y_3157_, v___y_3158_);
lean_dec(v___y_3158_);
lean_dec_ref(v___y_3157_);
lean_dec(v___y_3156_);
lean_dec_ref(v___y_3155_);
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__1___redArg(lean_object* v_msg_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_){
_start:
{
lean_object* v_ref_3167_; lean_object* v___x_3168_; lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3177_; 
v_ref_3167_ = lean_ctor_get(v___y_3164_, 2);
v___x_3168_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(v_msg_3161_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_);
v_a_3169_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3177_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3177_ == 0)
{
v___x_3171_ = v___x_3168_;
v_isShared_3172_ = v_isSharedCheck_3177_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3168_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3177_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3173_; lean_object* v___x_3175_; 
lean_inc(v_ref_3167_);
v___x_3173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3173_, 0, v_ref_3167_);
lean_ctor_set(v___x_3173_, 1, v_a_3169_);
if (v_isShared_3172_ == 0)
{
lean_ctor_set_tag(v___x_3171_, 1);
lean_ctor_set(v___x_3171_, 0, v___x_3173_);
v___x_3175_ = v___x_3171_;
goto v_reusejp_3174_;
}
else
{
lean_object* v_reuseFailAlloc_3176_; 
v_reuseFailAlloc_3176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3176_, 0, v___x_3173_);
v___x_3175_ = v_reuseFailAlloc_3176_;
goto v_reusejp_3174_;
}
v_reusejp_3174_:
{
return v___x_3175_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__1___redArg___boxed(lean_object* v_msg_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_){
_start:
{
lean_object* v_res_3184_; 
v_res_3184_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__1___redArg(v_msg_3178_, v___y_3179_, v___y_3180_, v___y_3181_, v___y_3182_);
lean_dec(v___y_3182_);
lean_dec_ref(v___y_3181_);
lean_dec(v___y_3180_);
lean_dec_ref(v___y_3179_);
return v_res_3184_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3187_; lean_object* v___x_3188_; 
v___x_3187_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___closed__1));
v___x_3188_ = l_Lean_stringToMessageData(v___x_3187_);
return v___x_3188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0(lean_object* v___x_3189_, lean_object* v_ctor_3190_, lean_object* v_args_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_){
_start:
{
lean_object* v___x_3217_; uint8_t v___x_3218_; 
v___x_3217_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___closed__0));
v___x_3218_ = lean_string_dec_eq(v_ctor_3190_, v___x_3217_);
if (v___x_3218_ == 0)
{
lean_object* v___x_3219_; 
v___x_3219_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__0___redArg();
return v___x_3219_;
}
else
{
lean_object* v___x_3220_; lean_object* v___x_3221_; uint8_t v___x_3222_; 
v___x_3220_ = lean_array_get_size(v_args_3191_);
v___x_3221_ = lean_unsigned_to_nat(1u);
v___x_3222_ = lean_nat_dec_eq(v___x_3220_, v___x_3221_);
if (v___x_3222_ == 0)
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v_a_3225_; lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3232_; 
v___x_3223_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___closed__2);
v___x_3224_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__1___redArg(v___x_3223_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_);
v_a_3225_ = lean_ctor_get(v___x_3224_, 0);
v_isSharedCheck_3232_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3232_ == 0)
{
v___x_3227_ = v___x_3224_;
v_isShared_3228_ = v_isSharedCheck_3232_;
goto v_resetjp_3226_;
}
else
{
lean_inc(v_a_3225_);
lean_dec(v___x_3224_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3232_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
lean_object* v___x_3230_; 
if (v_isShared_3228_ == 0)
{
v___x_3230_ = v___x_3227_;
goto v_reusejp_3229_;
}
else
{
lean_object* v_reuseFailAlloc_3231_; 
v_reuseFailAlloc_3231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3231_, 0, v_a_3225_);
v___x_3230_ = v_reuseFailAlloc_3231_;
goto v_reusejp_3229_;
}
v_reusejp_3229_:
{
return v___x_3230_;
}
}
}
else
{
goto v___jp_3197_;
}
}
v___jp_3197_:
{
lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3198_ = lean_unsigned_to_nat(0u);
v___x_3199_ = lean_array_get_borrowed(v___x_3189_, v_args_3191_, v___x_3198_);
lean_inc(v___x_3199_);
v___x_3200_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_3199_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_);
if (lean_obj_tag(v___x_3200_) == 0)
{
lean_object* v_a_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3208_; 
v_a_3201_ = lean_ctor_get(v___x_3200_, 0);
v_isSharedCheck_3208_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3203_ = v___x_3200_;
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_a_3201_);
lean_dec(v___x_3200_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v___x_3206_; 
if (v_isShared_3204_ == 0)
{
v___x_3206_ = v___x_3203_;
goto v_reusejp_3205_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v_a_3201_);
v___x_3206_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3205_;
}
v_reusejp_3205_:
{
return v___x_3206_;
}
}
}
else
{
lean_object* v_a_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3216_; 
v_a_3209_ = lean_ctor_get(v___x_3200_, 0);
v_isSharedCheck_3216_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3211_ = v___x_3200_;
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_a_3209_);
lean_dec(v___x_3200_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v___x_3214_; 
if (v_isShared_3212_ == 0)
{
v___x_3214_ = v___x_3211_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v_a_3209_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___boxed(lean_object* v___x_3233_, lean_object* v_ctor_3234_, lean_object* v_args_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_){
_start:
{
lean_object* v_res_3241_; 
v_res_3241_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0(v___x_3233_, v_ctor_3234_, v_args_3235_, v___y_3236_, v___y_3237_, v___y_3238_, v___y_3239_);
lean_dec(v___y_3239_);
lean_dec_ref(v___y_3238_);
lean_dec(v___y_3237_);
lean_dec_ref(v___y_3236_);
lean_dec_ref(v_args_3235_);
lean_dec_ref(v_ctor_3234_);
lean_dec_ref(v___x_3233_);
return v_res_3241_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__0(void){
_start:
{
lean_object* v___x_3242_; lean_object* v___f_3243_; 
v___x_3242_ = l_Lean_instInhabitedExpr;
v___f_3243_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3243_, 0, v___x_3242_);
return v___f_3243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr(lean_object* v_a_3250_, lean_object* v_a_3251_, lean_object* v_a_3252_, lean_object* v_a_3253_, lean_object* v_a_3254_){
_start:
{
lean_object* v___f_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
v___f_3256_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__0);
v___x_3257_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__2));
v___x_3258_ = l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(v___x_3257_, v___f_3256_, v_a_3250_, v_a_3251_, v_a_3252_, v_a_3253_, v_a_3254_);
return v___x_3258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___boxed(lean_object* v_a_3259_, lean_object* v_a_3260_, lean_object* v_a_3261_, lean_object* v_a_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_){
_start:
{
lean_object* v_res_3265_; 
v_res_3265_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr(v_a_3259_, v_a_3260_, v_a_3261_, v_a_3262_, v_a_3263_);
lean_dec(v_a_3263_);
lean_dec_ref(v_a_3262_);
lean_dec(v_a_3261_);
lean_dec_ref(v_a_3260_);
return v_res_3265_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__1(lean_object* v_00_u03b1_3266_, lean_object* v_msg_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_){
_start:
{
lean_object* v___x_3273_; 
v___x_3273_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__1___redArg(v_msg_3267_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_);
return v___x_3273_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__1___boxed(lean_object* v_00_u03b1_3274_, lean_object* v_msg_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_){
_start:
{
lean_object* v_res_3281_; 
v_res_3281_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr_spec__1(v_00_u03b1_3274_, v_msg_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_);
lean_dec(v___y_3279_);
lean_dec_ref(v___y_3278_);
lean_dec(v___y_3277_);
lean_dec_ref(v___y_3276_);
return v_res_3281_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__1(void){
_start:
{
lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; 
v___x_3283_ = lean_box(0);
v___x_3284_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__2));
v___x_3285_ = l_Lean_Expr_const___override(v___x_3284_, v___x_3283_);
return v___x_3285_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__2(void){
_start:
{
lean_object* v___x_3286_; lean_object* v___x_3287_; 
v___x_3286_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__1);
v___x_3287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3287_, 0, v___x_3286_);
return v___x_3287_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__3(void){
_start:
{
lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; 
v___x_3288_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__2);
v___x_3289_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__0));
v___x_3290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3289_);
lean_ctor_set(v___x_3290_, 1, v___x_3288_);
return v___x_3290_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig(void){
_start:
{
lean_object* v___x_3291_; 
v___x_3291_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__3);
return v___x_3291_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; 
v___x_3292_ = lean_box(0);
v___x_3293_ = l_Lean_Elab_abortTermExceptionId;
v___x_3294_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3293_);
lean_ctor_set(v___x_3294_, 1, v___x_3292_);
return v___x_3294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___redArg(){
_start:
{
lean_object* v___x_3296_; lean_object* v___x_3297_; 
v___x_3296_ = lean_obj_once(&l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0, &l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0);
v___x_3297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3297_, 0, v___x_3296_);
return v___x_3297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___redArg___boxed(lean_object* v___y_3298_){
_start:
{
lean_object* v_res_3299_; 
v_res_3299_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___redArg();
return v_res_3299_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__0___redArg(lean_object* v_e_3300_, lean_object* v___y_3301_){
_start:
{
uint8_t v___x_3303_; 
v___x_3303_ = l_Lean_Expr_hasMVar(v_e_3300_);
if (v___x_3303_ == 0)
{
lean_object* v___x_3304_; 
v___x_3304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3304_, 0, v_e_3300_);
return v___x_3304_;
}
else
{
lean_object* v___x_3305_; lean_object* v_mctx_3306_; lean_object* v___x_3307_; lean_object* v_fst_3308_; lean_object* v_snd_3309_; lean_object* v___x_3310_; lean_object* v_cache_3311_; lean_object* v_zetaDeltaFVarIds_3312_; lean_object* v_postponed_3313_; lean_object* v_diag_3314_; lean_object* v___x_3316_; uint8_t v_isShared_3317_; uint8_t v_isSharedCheck_3323_; 
v___x_3305_ = lean_st_ref_get(v___y_3301_);
v_mctx_3306_ = lean_ctor_get(v___x_3305_, 0);
lean_inc_ref(v_mctx_3306_);
lean_dec(v___x_3305_);
v___x_3307_ = l_Lean_instantiateMVarsCore(v_mctx_3306_, v_e_3300_);
v_fst_3308_ = lean_ctor_get(v___x_3307_, 0);
lean_inc(v_fst_3308_);
v_snd_3309_ = lean_ctor_get(v___x_3307_, 1);
lean_inc(v_snd_3309_);
lean_dec_ref(v___x_3307_);
v___x_3310_ = lean_st_ref_take(v___y_3301_);
v_cache_3311_ = lean_ctor_get(v___x_3310_, 1);
v_zetaDeltaFVarIds_3312_ = lean_ctor_get(v___x_3310_, 2);
v_postponed_3313_ = lean_ctor_get(v___x_3310_, 3);
v_diag_3314_ = lean_ctor_get(v___x_3310_, 4);
v_isSharedCheck_3323_ = !lean_is_exclusive(v___x_3310_);
if (v_isSharedCheck_3323_ == 0)
{
lean_object* v_unused_3324_; 
v_unused_3324_ = lean_ctor_get(v___x_3310_, 0);
lean_dec(v_unused_3324_);
v___x_3316_ = v___x_3310_;
v_isShared_3317_ = v_isSharedCheck_3323_;
goto v_resetjp_3315_;
}
else
{
lean_inc(v_diag_3314_);
lean_inc(v_postponed_3313_);
lean_inc(v_zetaDeltaFVarIds_3312_);
lean_inc(v_cache_3311_);
lean_dec(v___x_3310_);
v___x_3316_ = lean_box(0);
v_isShared_3317_ = v_isSharedCheck_3323_;
goto v_resetjp_3315_;
}
v_resetjp_3315_:
{
lean_object* v___x_3319_; 
if (v_isShared_3317_ == 0)
{
lean_ctor_set(v___x_3316_, 0, v_snd_3309_);
v___x_3319_ = v___x_3316_;
goto v_reusejp_3318_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v_snd_3309_);
lean_ctor_set(v_reuseFailAlloc_3322_, 1, v_cache_3311_);
lean_ctor_set(v_reuseFailAlloc_3322_, 2, v_zetaDeltaFVarIds_3312_);
lean_ctor_set(v_reuseFailAlloc_3322_, 3, v_postponed_3313_);
lean_ctor_set(v_reuseFailAlloc_3322_, 4, v_diag_3314_);
v___x_3319_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3318_;
}
v_reusejp_3318_:
{
lean_object* v___x_3320_; lean_object* v___x_3321_; 
v___x_3320_ = lean_st_ref_put(v___y_3301_, v___x_3319_);
v___x_3321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3321_, 0, v_fst_3308_);
return v___x_3321_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__0___redArg___boxed(lean_object* v_e_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_){
_start:
{
lean_object* v_res_3328_; 
v_res_3328_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__0___redArg(v_e_3325_, v___y_3326_);
lean_dec(v___y_3326_);
return v_res_3328_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4(lean_object* v_opts_3329_, lean_object* v_opt_3330_){
_start:
{
lean_object* v_name_3331_; lean_object* v_defValue_3332_; lean_object* v_map_3333_; lean_object* v___x_3334_; 
v_name_3331_ = lean_ctor_get(v_opt_3330_, 0);
v_defValue_3332_ = lean_ctor_get(v_opt_3330_, 1);
v_map_3333_ = lean_ctor_get(v_opts_3329_, 0);
v___x_3334_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3333_, v_name_3331_);
if (lean_obj_tag(v___x_3334_) == 0)
{
uint8_t v___x_3335_; 
v___x_3335_ = lean_unbox(v_defValue_3332_);
return v___x_3335_;
}
else
{
lean_object* v_val_3336_; 
v_val_3336_ = lean_ctor_get(v___x_3334_, 0);
lean_inc(v_val_3336_);
lean_dec_ref_known(v___x_3334_, 1);
if (lean_obj_tag(v_val_3336_) == 1)
{
uint8_t v_v_3337_; 
v_v_3337_ = lean_ctor_get_uint8(v_val_3336_, 0);
lean_dec_ref_known(v_val_3336_, 0);
return v_v_3337_;
}
else
{
uint8_t v___x_3338_; 
lean_dec(v_val_3336_);
v___x_3338_ = lean_unbox(v_defValue_3332_);
return v___x_3338_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_opts_3339_, lean_object* v_opt_3340_){
_start:
{
uint8_t v_res_3341_; lean_object* v_r_3342_; 
v_res_3341_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4(v_opts_3339_, v_opt_3340_);
lean_dec_ref(v_opt_3340_);
lean_dec_ref(v_opts_3339_);
v_r_3342_ = lean_box(v_res_3341_);
return v_r_3342_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0(void){
_start:
{
lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3343_ = lean_box(1);
v___x_3344_ = l_Lean_MessageData_ofFormat(v___x_3343_);
return v___x_3344_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__3(void){
_start:
{
lean_object* v___x_3348_; lean_object* v___x_3349_; 
v___x_3348_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_3349_ = l_Lean_MessageData_ofFormat(v___x_3348_);
return v___x_3349_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5(lean_object* v_x_3350_, lean_object* v_x_3351_){
_start:
{
if (lean_obj_tag(v_x_3351_) == 0)
{
return v_x_3350_;
}
else
{
lean_object* v_head_3352_; lean_object* v_tail_3353_; lean_object* v___x_3355_; uint8_t v_isShared_3356_; uint8_t v_isSharedCheck_3375_; 
v_head_3352_ = lean_ctor_get(v_x_3351_, 0);
v_tail_3353_ = lean_ctor_get(v_x_3351_, 1);
v_isSharedCheck_3375_ = !lean_is_exclusive(v_x_3351_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3355_ = v_x_3351_;
v_isShared_3356_ = v_isSharedCheck_3375_;
goto v_resetjp_3354_;
}
else
{
lean_inc(v_tail_3353_);
lean_inc(v_head_3352_);
lean_dec(v_x_3351_);
v___x_3355_ = lean_box(0);
v_isShared_3356_ = v_isSharedCheck_3375_;
goto v_resetjp_3354_;
}
v_resetjp_3354_:
{
lean_object* v_before_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3373_; 
v_before_3357_ = lean_ctor_get(v_head_3352_, 0);
v_isSharedCheck_3373_ = !lean_is_exclusive(v_head_3352_);
if (v_isSharedCheck_3373_ == 0)
{
lean_object* v_unused_3374_; 
v_unused_3374_ = lean_ctor_get(v_head_3352_, 1);
lean_dec(v_unused_3374_);
v___x_3359_ = v_head_3352_;
v_isShared_3360_ = v_isSharedCheck_3373_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_before_3357_);
lean_dec(v_head_3352_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3373_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
lean_object* v___x_3361_; lean_object* v___x_3363_; 
v___x_3361_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0);
if (v_isShared_3360_ == 0)
{
lean_ctor_set_tag(v___x_3359_, 7);
lean_ctor_set(v___x_3359_, 1, v___x_3361_);
lean_ctor_set(v___x_3359_, 0, v_x_3350_);
v___x_3363_ = v___x_3359_;
goto v_reusejp_3362_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v_x_3350_);
lean_ctor_set(v_reuseFailAlloc_3372_, 1, v___x_3361_);
v___x_3363_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3362_;
}
v_reusejp_3362_:
{
lean_object* v___x_3364_; lean_object* v___x_3366_; 
v___x_3364_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__3);
if (v_isShared_3356_ == 0)
{
lean_ctor_set_tag(v___x_3355_, 7);
lean_ctor_set(v___x_3355_, 1, v___x_3364_);
lean_ctor_set(v___x_3355_, 0, v___x_3363_);
v___x_3366_ = v___x_3355_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3371_; 
v_reuseFailAlloc_3371_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3371_, 0, v___x_3363_);
lean_ctor_set(v_reuseFailAlloc_3371_, 1, v___x_3364_);
v___x_3366_ = v_reuseFailAlloc_3371_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3367_ = l_Lean_MessageData_ofSyntax(v_before_3357_);
v___x_3368_ = l_Lean_indentD(v___x_3367_);
v___x_3369_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3369_, 0, v___x_3366_);
lean_ctor_set(v___x_3369_, 1, v___x_3368_);
v_x_3350_ = v___x_3369_;
v_x_3351_ = v_tail_3353_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_3379_; lean_object* v___x_3380_; 
v___x_3379_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__1));
v___x_3380_ = l_Lean_MessageData_ofFormat(v___x_3379_);
return v___x_3380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(lean_object* v_msgData_3381_, lean_object* v_macroStack_3382_, lean_object* v___y_3383_){
_start:
{
lean_object* v___x_3385_; lean_object* v___x_3386_; uint8_t v___x_3387_; 
v___x_3385_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3383_);
v___x_3386_ = l_Lean_Elab_pp_macroStack;
v___x_3387_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4(v___x_3385_, v___x_3386_);
lean_dec_ref(v___x_3385_);
if (v___x_3387_ == 0)
{
lean_object* v___x_3388_; 
lean_dec(v_macroStack_3382_);
v___x_3388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3388_, 0, v_msgData_3381_);
return v___x_3388_;
}
else
{
if (lean_obj_tag(v_macroStack_3382_) == 0)
{
lean_object* v___x_3389_; 
v___x_3389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3389_, 0, v_msgData_3381_);
return v___x_3389_;
}
else
{
lean_object* v_head_3390_; lean_object* v_after_3391_; lean_object* v___x_3393_; uint8_t v_isShared_3394_; uint8_t v_isSharedCheck_3406_; 
v_head_3390_ = lean_ctor_get(v_macroStack_3382_, 0);
lean_inc(v_head_3390_);
v_after_3391_ = lean_ctor_get(v_head_3390_, 1);
v_isSharedCheck_3406_ = !lean_is_exclusive(v_head_3390_);
if (v_isSharedCheck_3406_ == 0)
{
lean_object* v_unused_3407_; 
v_unused_3407_ = lean_ctor_get(v_head_3390_, 0);
lean_dec(v_unused_3407_);
v___x_3393_ = v_head_3390_;
v_isShared_3394_ = v_isSharedCheck_3406_;
goto v_resetjp_3392_;
}
else
{
lean_inc(v_after_3391_);
lean_dec(v_head_3390_);
v___x_3393_ = lean_box(0);
v_isShared_3394_ = v_isSharedCheck_3406_;
goto v_resetjp_3392_;
}
v_resetjp_3392_:
{
lean_object* v___x_3395_; lean_object* v___x_3397_; 
v___x_3395_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0);
if (v_isShared_3394_ == 0)
{
lean_ctor_set_tag(v___x_3393_, 7);
lean_ctor_set(v___x_3393_, 1, v___x_3395_);
lean_ctor_set(v___x_3393_, 0, v_msgData_3381_);
v___x_3397_ = v___x_3393_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v_msgData_3381_);
lean_ctor_set(v_reuseFailAlloc_3405_, 1, v___x_3395_);
v___x_3397_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v_msgData_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; 
v___x_3398_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2);
v___x_3399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3397_);
lean_ctor_set(v___x_3399_, 1, v___x_3398_);
v___x_3400_ = l_Lean_MessageData_ofSyntax(v_after_3391_);
v___x_3401_ = l_Lean_indentD(v___x_3400_);
v_msgData_3402_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_3402_, 0, v___x_3399_);
lean_ctor_set(v_msgData_3402_, 1, v___x_3401_);
v___x_3403_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5(v_msgData_3402_, v_macroStack_3382_);
v___x_3404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3404_, 0, v___x_3403_);
return v___x_3404_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_3408_, lean_object* v_macroStack_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_){
_start:
{
lean_object* v_res_3412_; 
v_res_3412_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(v_msgData_3408_, v_macroStack_3409_, v___y_3410_);
lean_dec_ref(v___y_3410_);
return v_res_3412_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1___redArg(lean_object* v_msg_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_){
_start:
{
lean_object* v_ref_3421_; lean_object* v_macroStack_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v_a_3425_; lean_object* v___x_3426_; lean_object* v_a_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3435_; 
v_ref_3421_ = lean_ctor_get(v___y_3418_, 2);
v_macroStack_3422_ = lean_ctor_get(v___y_3414_, 1);
v___x_3423_ = l_Lean_Elab_getBetterRef(v_ref_3421_, v_macroStack_3422_);
v___x_3424_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(v_msg_3413_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_);
v_a_3425_ = lean_ctor_get(v___x_3424_, 0);
lean_inc(v_a_3425_);
lean_dec_ref(v___x_3424_);
lean_inc(v_macroStack_3422_);
v___x_3426_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(v_a_3425_, v_macroStack_3422_, v___y_3418_);
v_a_3427_ = lean_ctor_get(v___x_3426_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v___x_3426_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3429_ = v___x_3426_;
v_isShared_3430_ = v_isSharedCheck_3435_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_a_3427_);
lean_dec(v___x_3426_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3435_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v___x_3431_; lean_object* v___x_3433_; 
v___x_3431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3431_, 0, v___x_3423_);
lean_ctor_set(v___x_3431_, 1, v_a_3427_);
if (v_isShared_3430_ == 0)
{
lean_ctor_set_tag(v___x_3429_, 1);
lean_ctor_set(v___x_3429_, 0, v___x_3431_);
v___x_3433_ = v___x_3429_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v___x_3431_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1___redArg___boxed(lean_object* v_msg_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_){
_start:
{
lean_object* v_res_3444_; 
v_res_3444_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1___redArg(v_msg_3436_, v___y_3437_, v___y_3438_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_);
lean_dec(v___y_3442_);
lean_dec_ref(v___y_3441_);
lean_dec(v___y_3440_);
lean_dec_ref(v___y_3439_);
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3437_);
return v_res_3444_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3446_; lean_object* v___x_3447_; 
v___x_3446_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__0));
v___x_3447_ = l_Lean_stringToMessageData(v___x_3446_);
return v___x_3447_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__2(void){
_start:
{
lean_object* v___x_3448_; lean_object* v___x_3449_; 
v___x_3448_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__1);
v___x_3449_ = l_Lean_MessageData_ofExpr(v___x_3448_);
return v___x_3449_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__3(void){
_start:
{
lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; 
v___x_3450_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__2, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__2_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__2);
v___x_3451_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__1, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__1_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__1);
v___x_3452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3452_, 0, v___x_3451_);
lean_ctor_set(v___x_3452_, 1, v___x_3450_);
return v___x_3452_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__4(void){
_start:
{
lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; 
v___x_3453_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__5, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__5_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__5);
v___x_3454_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__3, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__3_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__3);
v___x_3455_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3454_);
lean_ctor_set(v___x_3455_, 1, v___x_3453_);
return v___x_3455_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__6(void){
_start:
{
lean_object* v___x_3457_; lean_object* v___x_3458_; 
v___x_3457_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__5));
v___x_3458_ = l_Lean_stringToMessageData(v___x_3457_);
return v___x_3458_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__8(void){
_start:
{
lean_object* v___x_3460_; lean_object* v___x_3461_; 
v___x_3460_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__7));
v___x_3461_ = l_Lean_stringToMessageData(v___x_3460_);
return v___x_3461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0(lean_object* v_stx_3462_, lean_object* v_a_3463_, lean_object* v_a_3464_, lean_object* v_a_3465_, lean_object* v_a_3466_, lean_object* v_a_3467_, lean_object* v_a_3468_){
_start:
{
lean_object* v_ty_x3f_3470_; uint8_t v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v_toCold_3476_; lean_object* v_currRecDepth_3477_; lean_object* v_ref_3478_; uint16_t v_optionFlags_3479_; uint8_t v_suppressElabErrors_3480_; uint8_t v_checkDeprecated_3481_; uint8_t v_isRecordingDeps_3482_; uint8_t v___x_3483_; lean_object* v_ref_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; 
v_ty_x3f_3470_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig___closed__2);
v___x_3471_ = 1;
v___x_3472_ = lean_box(0);
v___x_3473_ = lean_box(v___x_3471_);
v___x_3474_ = lean_box(v___x_3471_);
lean_inc(v_stx_3462_);
v___x_3475_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermEnsuringType___boxed), 12, 5);
lean_closure_set(v___x_3475_, 0, v_stx_3462_);
lean_closure_set(v___x_3475_, 1, v_ty_x3f_3470_);
lean_closure_set(v___x_3475_, 2, v___x_3473_);
lean_closure_set(v___x_3475_, 3, v___x_3474_);
lean_closure_set(v___x_3475_, 4, v___x_3472_);
v_toCold_3476_ = lean_ctor_get(v_a_3467_, 0);
v_currRecDepth_3477_ = lean_ctor_get(v_a_3467_, 1);
v_ref_3478_ = lean_ctor_get(v_a_3467_, 2);
v_optionFlags_3479_ = lean_ctor_get_uint16(v_a_3467_, sizeof(void*)*3);
v_suppressElabErrors_3480_ = lean_ctor_get_uint8(v_a_3467_, sizeof(void*)*3 + 2);
v_checkDeprecated_3481_ = lean_ctor_get_uint8(v_a_3467_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3482_ = lean_ctor_get_uint8(v_a_3467_, sizeof(void*)*3 + 4);
v___x_3483_ = 1;
v_ref_3484_ = l_Lean_replaceRef(v_stx_3462_, v_ref_3478_);
lean_dec(v_stx_3462_);
lean_inc(v_currRecDepth_3477_);
lean_inc_ref(v_toCold_3476_);
v___x_3485_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3485_, 0, v_toCold_3476_);
lean_ctor_set(v___x_3485_, 1, v_currRecDepth_3477_);
lean_ctor_set(v___x_3485_, 2, v_ref_3484_);
lean_ctor_set_uint16(v___x_3485_, sizeof(void*)*3, v_optionFlags_3479_);
lean_ctor_set_uint8(v___x_3485_, sizeof(void*)*3 + 2, v_suppressElabErrors_3480_);
lean_ctor_set_uint8(v___x_3485_, sizeof(void*)*3 + 3, v_checkDeprecated_3481_);
lean_ctor_set_uint8(v___x_3485_, sizeof(void*)*3 + 4, v_isRecordingDeps_3482_);
v___x_3486_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_3475_, v___x_3483_, v_a_3463_, v_a_3464_, v_a_3465_, v_a_3466_, v___x_3485_, v_a_3468_);
if (lean_obj_tag(v___x_3486_) == 0)
{
lean_object* v_a_3487_; lean_object* v___x_3488_; lean_object* v_a_3489_; lean_object* v___y_3491_; lean_object* v___y_3492_; lean_object* v___y_3493_; lean_object* v___y_3494_; lean_object* v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3518_; lean_object* v___y_3519_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3522_; lean_object* v___y_3523_; lean_object* v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3557_; lean_object* v___y_3558_; lean_object* v___y_3559_; lean_object* v___y_3560_; uint8_t v___x_3573_; 
v_a_3487_ = lean_ctor_get(v___x_3486_, 0);
lean_inc(v_a_3487_);
lean_dec_ref_known(v___x_3486_, 1);
v___x_3488_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__0___redArg(v_a_3487_, v_a_3466_);
v_a_3489_ = lean_ctor_get(v___x_3488_, 0);
lean_inc(v_a_3489_);
lean_dec_ref(v___x_3488_);
v___x_3573_ = l_Lean_Expr_hasSorry(v_a_3489_);
if (v___x_3573_ == 0)
{
v___y_3518_ = v_a_3463_;
v___y_3519_ = v_a_3464_;
v___y_3520_ = v_a_3465_;
v___y_3521_ = v_a_3466_;
v___y_3522_ = v___x_3485_;
v___y_3523_ = v_a_3468_;
goto v___jp_3517_;
}
else
{
uint8_t v___x_3574_; 
v___x_3574_ = l_Lean_Expr_hasSyntheticSorry(v_a_3489_);
if (v___x_3574_ == 0)
{
v___y_3555_ = v_a_3463_;
v___y_3556_ = v_a_3464_;
v___y_3557_ = v_a_3465_;
v___y_3558_ = v_a_3466_;
v___y_3559_ = v___x_3485_;
v___y_3560_ = v_a_3468_;
goto v___jp_3554_;
}
else
{
lean_object* v___x_3575_; lean_object* v_a_3576_; lean_object* v___x_3578_; uint8_t v_isShared_3579_; uint8_t v_isSharedCheck_3583_; 
lean_dec(v_a_3489_);
lean_dec_ref_known(v___x_3485_, 3);
v___x_3575_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___redArg();
v_a_3576_ = lean_ctor_get(v___x_3575_, 0);
v_isSharedCheck_3583_ = !lean_is_exclusive(v___x_3575_);
if (v_isSharedCheck_3583_ == 0)
{
v___x_3578_ = v___x_3575_;
v_isShared_3579_ = v_isSharedCheck_3583_;
goto v_resetjp_3577_;
}
else
{
lean_inc(v_a_3576_);
lean_dec(v___x_3575_);
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
v___jp_3490_:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; 
v___x_3497_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_inc(v_a_3489_);
v___x_3498_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr(v_a_3489_, v___y_3493_, v___y_3494_, v___y_3495_, v___y_3496_);
if (lean_obj_tag(v___x_3498_) == 0)
{
lean_dec_ref(v___y_3495_);
lean_dec(v_a_3489_);
return v___x_3498_;
}
else
{
lean_object* v_a_3499_; uint8_t v___x_3500_; 
v_a_3499_ = lean_ctor_get(v___x_3498_, 0);
lean_inc(v_a_3499_);
v___x_3500_ = l_Lean_Exception_isInterrupt(v_a_3499_);
if (v___x_3500_ == 0)
{
uint8_t v___x_3501_; 
lean_inc(v_a_3499_);
v___x_3501_ = l_Lean_Exception_isRuntime(v_a_3499_);
if (v___x_3501_ == 0)
{
if (lean_obj_tag(v_a_3499_) == 0)
{
lean_dec_ref_known(v_a_3499_, 2);
lean_dec_ref(v___y_3495_);
lean_dec(v_a_3489_);
return v___x_3498_;
}
else
{
lean_object* v_id_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3515_; 
v_id_3502_ = lean_ctor_get(v_a_3499_, 0);
v_isSharedCheck_3515_ = !lean_is_exclusive(v_a_3499_);
if (v_isSharedCheck_3515_ == 0)
{
lean_object* v_unused_3516_; 
v_unused_3516_ = lean_ctor_get(v_a_3499_, 1);
lean_dec(v_unused_3516_);
v___x_3504_ = v_a_3499_;
v_isShared_3505_ = v_isSharedCheck_3515_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_id_3502_);
lean_dec(v_a_3499_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3515_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
uint8_t v___x_3506_; 
v___x_3506_ = l_Lean_instBEqInternalExceptionId_beq(v___x_3497_, v_id_3502_);
lean_dec(v_id_3502_);
if (v___x_3506_ == 0)
{
lean_del_object(v___x_3504_);
lean_dec_ref(v___y_3495_);
lean_dec(v_a_3489_);
return v___x_3498_;
}
else
{
lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3511_; 
lean_dec_ref_known(v___x_3498_, 1);
v___x_3507_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__4, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__4_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__4);
v___x_3508_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__6, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__6_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__6);
v___x_3509_ = l_Lean_indentExpr(v_a_3489_);
if (v_isShared_3505_ == 0)
{
lean_ctor_set_tag(v___x_3504_, 7);
lean_ctor_set(v___x_3504_, 1, v___x_3509_);
lean_ctor_set(v___x_3504_, 0, v___x_3508_);
v___x_3511_ = v___x_3504_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v___x_3508_);
lean_ctor_set(v_reuseFailAlloc_3514_, 1, v___x_3509_);
v___x_3511_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
lean_object* v___x_3512_; lean_object* v___x_3513_; 
v___x_3512_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3512_, 0, v___x_3511_);
lean_ctor_set(v___x_3512_, 1, v___x_3507_);
v___x_3513_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1___redArg(v___x_3512_, v___y_3491_, v___y_3492_, v___y_3493_, v___y_3494_, v___y_3495_, v___y_3496_);
lean_dec_ref(v___y_3495_);
return v___x_3513_;
}
}
}
}
}
else
{
lean_dec(v_a_3499_);
lean_dec_ref(v___y_3495_);
lean_dec(v_a_3489_);
return v___x_3498_;
}
}
else
{
lean_dec(v_a_3499_);
lean_dec_ref(v___y_3495_);
lean_dec(v_a_3489_);
return v___x_3498_;
}
}
}
v___jp_3517_:
{
lean_object* v___x_3524_; 
lean_inc(v_a_3489_);
v___x_3524_ = l_Lean_Meta_getMVars(v_a_3489_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v_a_3525_; lean_object* v___x_3526_; 
v_a_3525_ = lean_ctor_get(v___x_3524_, 0);
lean_inc(v_a_3525_);
lean_dec_ref_known(v___x_3524_, 1);
v___x_3526_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_a_3525_, v___x_3472_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_);
lean_dec(v_a_3525_);
if (lean_obj_tag(v___x_3526_) == 0)
{
lean_object* v_a_3527_; uint8_t v___x_3528_; 
v_a_3527_ = lean_ctor_get(v___x_3526_, 0);
lean_inc(v_a_3527_);
lean_dec_ref_known(v___x_3526_, 1);
v___x_3528_ = lean_unbox(v_a_3527_);
lean_dec(v_a_3527_);
if (v___x_3528_ == 0)
{
v___y_3491_ = v___y_3518_;
v___y_3492_ = v___y_3519_;
v___y_3493_ = v___y_3520_;
v___y_3494_ = v___y_3521_;
v___y_3495_ = v___y_3522_;
v___y_3496_ = v___y_3523_;
goto v___jp_3490_;
}
else
{
lean_object* v___x_3529_; lean_object* v_a_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3537_; 
lean_dec_ref(v___y_3522_);
lean_dec(v_a_3489_);
v___x_3529_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___redArg();
v_a_3530_ = lean_ctor_get(v___x_3529_, 0);
v_isSharedCheck_3537_ = !lean_is_exclusive(v___x_3529_);
if (v_isSharedCheck_3537_ == 0)
{
v___x_3532_ = v___x_3529_;
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_a_3530_);
lean_dec(v___x_3529_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
lean_object* v___x_3535_; 
if (v_isShared_3533_ == 0)
{
v___x_3535_ = v___x_3532_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v_a_3530_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
return v___x_3535_;
}
}
}
}
else
{
lean_object* v_a_3538_; lean_object* v___x_3540_; uint8_t v_isShared_3541_; uint8_t v_isSharedCheck_3545_; 
lean_dec_ref(v___y_3522_);
lean_dec(v_a_3489_);
v_a_3538_ = lean_ctor_get(v___x_3526_, 0);
v_isSharedCheck_3545_ = !lean_is_exclusive(v___x_3526_);
if (v_isSharedCheck_3545_ == 0)
{
v___x_3540_ = v___x_3526_;
v_isShared_3541_ = v_isSharedCheck_3545_;
goto v_resetjp_3539_;
}
else
{
lean_inc(v_a_3538_);
lean_dec(v___x_3526_);
v___x_3540_ = lean_box(0);
v_isShared_3541_ = v_isSharedCheck_3545_;
goto v_resetjp_3539_;
}
v_resetjp_3539_:
{
lean_object* v___x_3543_; 
if (v_isShared_3541_ == 0)
{
v___x_3543_ = v___x_3540_;
goto v_reusejp_3542_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v_a_3538_);
v___x_3543_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3542_;
}
v_reusejp_3542_:
{
return v___x_3543_;
}
}
}
}
else
{
lean_object* v_a_3546_; lean_object* v___x_3548_; uint8_t v_isShared_3549_; uint8_t v_isSharedCheck_3553_; 
lean_dec_ref(v___y_3522_);
lean_dec(v_a_3489_);
v_a_3546_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3553_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3548_ = v___x_3524_;
v_isShared_3549_ = v_isSharedCheck_3553_;
goto v_resetjp_3547_;
}
else
{
lean_inc(v_a_3546_);
lean_dec(v___x_3524_);
v___x_3548_ = lean_box(0);
v_isShared_3549_ = v_isSharedCheck_3553_;
goto v_resetjp_3547_;
}
v_resetjp_3547_:
{
lean_object* v___x_3551_; 
if (v_isShared_3549_ == 0)
{
v___x_3551_ = v___x_3548_;
goto v_reusejp_3550_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v_a_3546_);
v___x_3551_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3550_;
}
v_reusejp_3550_:
{
return v___x_3551_;
}
}
}
}
v___jp_3554_:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v_a_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3572_; 
v___x_3561_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__8, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__8_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___closed__8);
v___x_3562_ = l_Lean_indentExpr(v_a_3489_);
v___x_3563_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3563_, 0, v___x_3561_);
lean_ctor_set(v___x_3563_, 1, v___x_3562_);
v___x_3564_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1___redArg(v___x_3563_, v___y_3555_, v___y_3556_, v___y_3557_, v___y_3558_, v___y_3559_, v___y_3560_);
lean_dec_ref(v___y_3559_);
v_a_3565_ = lean_ctor_get(v___x_3564_, 0);
v_isSharedCheck_3572_ = !lean_is_exclusive(v___x_3564_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3567_ = v___x_3564_;
v_isShared_3568_ = v_isSharedCheck_3572_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_a_3565_);
lean_dec(v___x_3564_);
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
else
{
lean_object* v_a_3584_; lean_object* v___x_3586_; uint8_t v_isShared_3587_; uint8_t v_isSharedCheck_3591_; 
lean_dec_ref_known(v___x_3485_, 3);
v_a_3584_ = lean_ctor_get(v___x_3486_, 0);
v_isSharedCheck_3591_ = !lean_is_exclusive(v___x_3486_);
if (v_isSharedCheck_3591_ == 0)
{
v___x_3586_ = v___x_3486_;
v_isShared_3587_ = v_isSharedCheck_3591_;
goto v_resetjp_3585_;
}
else
{
lean_inc(v_a_3584_);
lean_dec(v___x_3486_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0___boxed(lean_object* v_stx_3592_, lean_object* v_a_3593_, lean_object* v_a_3594_, lean_object* v_a_3595_, lean_object* v_a_3596_, lean_object* v_a_3597_, lean_object* v_a_3598_, lean_object* v_a_3599_){
_start:
{
lean_object* v_res_3600_; 
v_res_3600_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0(v_stx_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_);
lean_dec(v_a_3598_);
lean_dec_ref(v_a_3597_);
lean_dec(v_a_3596_);
lean_dec_ref(v_a_3595_);
lean_dec(v_a_3594_);
lean_dec_ref(v_a_3593_);
return v_res_3600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0(uint8_t v_config_3611_, lean_object* v_item_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_){
_start:
{
lean_object* v_item_3621_; lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3624_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__2));
v___x_3625_ = l_Lean_Elab_ConfigEval_ConfigItem_addCompletionInfo(v_item_3612_, v___x_3624_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_);
if (lean_obj_tag(v___x_3625_) == 0)
{
uint8_t v___x_3626_; 
lean_dec_ref_known(v___x_3625_, 1);
v___x_3626_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v_item_3612_);
if (v___x_3626_ == 0)
{
lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; uint8_t v___x_3630_; 
v___x_3627_ = l_Lean_Elab_ConfigEval_ConfigItem_getRootStr(v_item_3612_);
lean_inc_ref(v_item_3612_);
v___x_3628_ = l_Lean_Elab_ConfigEval_ConfigItem_shift(v_item_3612_);
v___x_3629_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__1));
v___x_3630_ = lean_string_dec_eq(v___x_3627_, v___x_3629_);
if (v___x_3630_ == 0)
{
lean_object* v___x_3631_; uint8_t v___x_3632_; 
v___x_3631_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__2));
v___x_3632_ = lean_string_dec_eq(v___x_3627_, v___x_3631_);
lean_dec_ref(v___x_3627_);
if (v___x_3632_ == 0)
{
lean_dec_ref(v_item_3612_);
v_item_3621_ = v___x_3628_;
goto v___jp_3620_;
}
else
{
lean_object* v___x_3633_; lean_object* v___x_3634_; 
v___x_3633_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__3));
v___x_3634_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_3612_, v___x_3633_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_);
if (lean_obj_tag(v___x_3634_) == 0)
{
uint8_t v___x_3635_; 
lean_dec_ref_known(v___x_3634_, 1);
v___x_3635_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_3628_);
if (v___x_3635_ == 0)
{
lean_dec_ref(v_item_3612_);
v_item_3621_ = v___x_3628_;
goto v___jp_3620_;
}
else
{
lean_object* v___x_3636_; 
lean_dec_ref(v___x_3628_);
v___x_3636_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_3612_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_3644_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3639_ = v___x_3636_;
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
else
{
lean_inc(v_a_3637_);
lean_dec(v___x_3636_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
lean_object* v___x_3642_; 
if (v_isShared_3640_ == 0)
{
v___x_3642_ = v___x_3639_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_a_3637_);
v___x_3642_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
return v___x_3642_;
}
}
}
else
{
lean_object* v_a_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3652_; 
v_a_3645_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3652_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3647_ = v___x_3636_;
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_a_3645_);
lean_dec(v___x_3636_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3650_; 
if (v_isShared_3648_ == 0)
{
v___x_3650_ = v___x_3647_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v_a_3645_);
v___x_3650_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
return v___x_3650_;
}
}
}
}
}
else
{
lean_object* v_a_3653_; lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3660_; 
lean_dec_ref(v___x_3628_);
lean_dec_ref(v_item_3612_);
v_a_3653_ = lean_ctor_get(v___x_3634_, 0);
v_isSharedCheck_3660_ = !lean_is_exclusive(v___x_3634_);
if (v_isSharedCheck_3660_ == 0)
{
v___x_3655_ = v___x_3634_;
v_isShared_3656_ = v_isSharedCheck_3660_;
goto v_resetjp_3654_;
}
else
{
lean_inc(v_a_3653_);
lean_dec(v___x_3634_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3660_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v___x_3658_; 
if (v_isShared_3656_ == 0)
{
v___x_3658_ = v___x_3655_;
goto v_reusejp_3657_;
}
else
{
lean_object* v_reuseFailAlloc_3659_; 
v_reuseFailAlloc_3659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3659_, 0, v_a_3653_);
v___x_3658_ = v_reuseFailAlloc_3659_;
goto v_reusejp_3657_;
}
v_reusejp_3657_:
{
return v___x_3658_;
}
}
}
}
}
else
{
uint8_t v___x_3661_; 
lean_dec_ref(v___x_3627_);
v___x_3661_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_3628_);
if (v___x_3661_ == 0)
{
lean_dec_ref(v_item_3612_);
v_item_3621_ = v___x_3628_;
goto v___jp_3620_;
}
else
{
lean_object* v_value_3662_; lean_object* v___x_3663_; 
lean_dec_ref(v___x_3628_);
v_value_3662_ = lean_ctor_get(v_item_3612_, 2);
lean_inc(v_value_3662_);
lean_dec_ref(v_item_3612_);
v___x_3663_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0(v_value_3662_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_);
return v___x_3663_;
}
}
}
else
{
v_item_3621_ = v_item_3612_;
goto v___jp_3620_;
}
}
else
{
lean_object* v_a_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3671_; 
lean_dec_ref(v_item_3612_);
v_a_3664_ = lean_ctor_get(v___x_3625_, 0);
v_isSharedCheck_3671_ = !lean_is_exclusive(v___x_3625_);
if (v_isSharedCheck_3671_ == 0)
{
v___x_3666_ = v___x_3625_;
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_a_3664_);
lean_dec(v___x_3625_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v___x_3669_; 
if (v_isShared_3667_ == 0)
{
v___x_3669_ = v___x_3666_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v_a_3664_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
return v___x_3669_;
}
}
}
v___jp_3620_:
{
lean_object* v___x_3622_; lean_object* v___x_3623_; 
v___x_3622_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___closed__0));
v___x_3623_ = l_Lean_Elab_ConfigEval_ConfigItem_throwInvalidOption___redArg(v_item_3621_, v___x_3622_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_);
return v___x_3623_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0___boxed(lean_object* v_config_3672_, lean_object* v_item_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_){
_start:
{
uint8_t v_config_4009__boxed_3681_; lean_object* v_res_3682_; 
v_config_4009__boxed_3681_ = lean_unbox(v_config_3672_);
v_res_3682_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___lam__0(v_config_4009__boxed_3681_, v_item_3673_, v___y_3674_, v___y_3675_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
lean_dec(v___y_3679_);
lean_dec_ref(v___y_3678_);
lean_dec(v___y_3677_);
lean_dec_ref(v___y_3676_);
lean_dec(v___y_3675_);
lean_dec_ref(v___y_3674_);
return v_res_3682_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__0(lean_object* v_e_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_){
_start:
{
lean_object* v___x_3693_; 
v___x_3693_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__0___redArg(v_e_3685_, v___y_3689_);
return v___x_3693_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__0___boxed(lean_object* v_e_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_){
_start:
{
lean_object* v_res_3702_; 
v_res_3702_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__0(v_e_3694_, v___y_3695_, v___y_3696_, v___y_3697_, v___y_3698_, v___y_3699_, v___y_3700_);
lean_dec(v___y_3700_);
lean_dec_ref(v___y_3699_);
lean_dec(v___y_3698_);
lean_dec_ref(v___y_3697_);
lean_dec(v___y_3696_);
lean_dec_ref(v___y_3695_);
return v_res_3702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2(lean_object* v_00_u03b1_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_){
_start:
{
lean_object* v___x_3711_; 
v___x_3711_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___redArg();
return v___x_3711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_){
_start:
{
lean_object* v_res_3720_; 
v_res_3720_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__2(v_00_u03b1_3712_, v___y_3713_, v___y_3714_, v___y_3715_, v___y_3716_, v___y_3717_, v___y_3718_);
lean_dec(v___y_3718_);
lean_dec_ref(v___y_3717_);
lean_dec(v___y_3716_);
lean_dec_ref(v___y_3715_);
lean_dec(v___y_3714_);
lean_dec_ref(v___y_3713_);
return v_res_3720_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1(lean_object* v_00_u03b1_3721_, lean_object* v_msg_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_){
_start:
{
lean_object* v___x_3730_; 
v___x_3730_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1___redArg(v_msg_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_, v___y_3727_, v___y_3728_);
return v___x_3730_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3731_, lean_object* v_msg_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_){
_start:
{
lean_object* v_res_3740_; 
v_res_3740_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1(v_00_u03b1_3731_, v_msg_3732_, v___y_3733_, v___y_3734_, v___y_3735_, v___y_3736_, v___y_3737_, v___y_3738_);
lean_dec(v___y_3738_);
lean_dec_ref(v___y_3737_);
lean_dec(v___y_3736_);
lean_dec_ref(v___y_3735_);
lean_dec(v___y_3734_);
lean_dec_ref(v___y_3733_);
return v_res_3740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2(lean_object* v_msgData_3741_, lean_object* v_macroStack_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_){
_start:
{
lean_object* v___x_3750_; 
v___x_3750_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(v_msgData_3741_, v_macroStack_3742_, v___y_3747_);
return v___x_3750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2___boxed(lean_object* v_msgData_3751_, lean_object* v_macroStack_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_){
_start:
{
lean_object* v_res_3760_; 
v_res_3760_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2(v_msgData_3751_, v_macroStack_3752_, v___y_3753_, v___y_3754_, v___y_3755_, v___y_3756_, v___y_3757_, v___y_3758_);
lean_dec(v___y_3758_);
lean_dec_ref(v___y_3757_);
lean_dec(v___y_3756_);
lean_dec_ref(v___y_3755_);
lean_dec(v___y_3754_);
lean_dec_ref(v___y_3753_);
return v_res_3760_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; 
v___x_3761_ = lean_box(0);
v___x_3762_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig_evalExpr___closed__2));
v___x_3763_ = l_Lean_mkConst(v___x_3762_, v___x_3761_);
return v___x_3763_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3764_; lean_object* v___x_3765_; 
v___x_3764_ = lean_obj_once(&l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___closed__0);
v___x_3765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3765_, 0, v___x_3764_);
return v___x_3765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0(uint8_t v_cfg_3766_, lean_object* v_cfgItem_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_){
_start:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; 
v___x_3775_ = lean_obj_once(&l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___closed__1);
v___x_3776_ = lean_box(v_cfg_3766_);
v___x_3777_ = l_Lean_Elab_ConfigEval_EvalConfigItem_defaultOnErr___redArg(v___x_3776_, v_cfgItem_3767_, v___x_3775_, v___y_3768_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_, v___y_3773_);
return v___x_3777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0___boxed(lean_object* v_cfg_3778_, lean_object* v_cfgItem_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_){
_start:
{
uint8_t v_cfg_boxed_3787_; lean_object* v_res_3788_; 
v_cfg_boxed_3787_ = lean_unbox(v_cfg_3778_);
v_res_3788_ = l_Lean_Elab_Tactic_elabConstructorConfig___redArg___lam__0(v_cfg_boxed_3787_, v_cfgItem_3779_, v___y_3780_, v___y_3781_, v___y_3782_, v___y_3783_, v___y_3784_, v___y_3785_);
lean_dec(v___y_3785_);
lean_dec_ref(v___y_3784_);
lean_dec(v___y_3783_);
lean_dec_ref(v___y_3782_);
lean_dec(v___y_3781_);
lean_dec_ref(v___y_3780_);
lean_dec(v_cfgItem_3779_);
return v_res_3788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabConstructorConfig___redArg(lean_object* v_cfg_3790_, uint8_t v_init_3791_, uint8_t v_logExceptions_3792_, lean_object* v_a_3793_, lean_object* v_a_3794_, lean_object* v_a_3795_){
_start:
{
lean_object* v_onErr_3797_; lean_object* v_eval_3798_; 
v_onErr_3797_ = ((lean_object*)(l_Lean_Elab_Tactic_elabConstructorConfig___redArg___closed__0));
v_eval_3798_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem___closed__0));
if (v_logExceptions_3792_ == 0)
{
lean_object* v___x_3799_; lean_object* v___x_3800_; 
v___x_3799_ = lean_box(v_init_3791_);
v___x_3800_ = l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(v_eval_3798_, v___x_3799_, v_cfg_3790_, v_onErr_3797_, v_logExceptions_3792_, v_a_3794_, v_a_3795_);
return v___x_3800_;
}
else
{
uint8_t v_recover_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; 
v_recover_3801_ = lean_ctor_get_uint8(v_a_3793_, sizeof(void*)*1);
v___x_3802_ = lean_box(v_init_3791_);
v___x_3803_ = l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(v_eval_3798_, v___x_3802_, v_cfg_3790_, v_onErr_3797_, v_recover_3801_, v_a_3794_, v_a_3795_);
return v___x_3803_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabConstructorConfig___redArg___boxed(lean_object* v_cfg_3804_, lean_object* v_init_3805_, lean_object* v_logExceptions_3806_, lean_object* v_a_3807_, lean_object* v_a_3808_, lean_object* v_a_3809_, lean_object* v_a_3810_){
_start:
{
uint8_t v_init_boxed_3811_; uint8_t v_logExceptions_boxed_3812_; lean_object* v_res_3813_; 
v_init_boxed_3811_ = lean_unbox(v_init_3805_);
v_logExceptions_boxed_3812_ = lean_unbox(v_logExceptions_3806_);
v_res_3813_ = l_Lean_Elab_Tactic_elabConstructorConfig___redArg(v_cfg_3804_, v_init_boxed_3811_, v_logExceptions_boxed_3812_, v_a_3807_, v_a_3808_, v_a_3809_);
lean_dec(v_a_3809_);
lean_dec_ref(v_a_3808_);
lean_dec_ref(v_a_3807_);
return v_res_3813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabConstructorConfig(lean_object* v_cfg_3814_, uint8_t v_init_3815_, uint8_t v_logExceptions_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_, lean_object* v_a_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_, lean_object* v_a_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_){
_start:
{
lean_object* v___x_3826_; 
v___x_3826_ = l_Lean_Elab_Tactic_elabConstructorConfig___redArg(v_cfg_3814_, v_init_3815_, v_logExceptions_3816_, v_a_3817_, v_a_3823_, v_a_3824_);
return v___x_3826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabConstructorConfig___boxed(lean_object* v_cfg_3827_, lean_object* v_init_3828_, lean_object* v_logExceptions_3829_, lean_object* v_a_3830_, lean_object* v_a_3831_, lean_object* v_a_3832_, lean_object* v_a_3833_, lean_object* v_a_3834_, lean_object* v_a_3835_, lean_object* v_a_3836_, lean_object* v_a_3837_, lean_object* v_a_3838_){
_start:
{
uint8_t v_init_boxed_3839_; uint8_t v_logExceptions_boxed_3840_; lean_object* v_res_3841_; 
v_init_boxed_3839_ = lean_unbox(v_init_3828_);
v_logExceptions_boxed_3840_ = lean_unbox(v_logExceptions_3829_);
v_res_3841_ = l_Lean_Elab_Tactic_elabConstructorConfig(v_cfg_3827_, v_init_boxed_3839_, v_logExceptions_boxed_3840_, v_a_3830_, v_a_3831_, v_a_3832_, v_a_3833_, v_a_3834_, v_a_3835_, v_a_3836_, v_a_3837_);
lean_dec(v_a_3837_);
lean_dec_ref(v_a_3836_);
lean_dec(v_a_3835_);
lean_dec_ref(v_a_3834_);
lean_dec(v_a_3833_);
lean_dec_ref(v_a_3832_);
lean_dec(v_a_3831_);
lean_dec_ref(v_a_3830_);
return v_res_3841_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__0(lean_object* v_a_3842_, lean_object* v_a_3843_){
_start:
{
if (lean_obj_tag(v_a_3842_) == 0)
{
lean_object* v___x_3844_; 
v___x_3844_ = l_List_reverse___redArg(v_a_3843_);
return v___x_3844_;
}
else
{
lean_object* v_head_3845_; lean_object* v_tail_3846_; lean_object* v___x_3848_; uint8_t v_isShared_3849_; uint8_t v_isSharedCheck_3859_; 
v_head_3845_ = lean_ctor_get(v_a_3842_, 0);
v_tail_3846_ = lean_ctor_get(v_a_3842_, 1);
v_isSharedCheck_3859_ = !lean_is_exclusive(v_a_3842_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3848_ = v_a_3842_;
v_isShared_3849_ = v_isSharedCheck_3859_;
goto v_resetjp_3847_;
}
else
{
lean_inc(v_tail_3846_);
lean_inc(v_head_3845_);
lean_dec(v_a_3842_);
v___x_3848_ = lean_box(0);
v_isShared_3849_ = v_isSharedCheck_3859_;
goto v_resetjp_3847_;
}
v_resetjp_3847_:
{
uint8_t v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3856_; 
v___x_3850_ = 0;
v___x_3851_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__5, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__5_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__5);
v___x_3852_ = l_Lean_MessageData_ofConstName(v_head_3845_, v___x_3850_);
v___x_3853_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3853_, 0, v___x_3851_);
lean_ctor_set(v___x_3853_, 1, v___x_3852_);
v___x_3854_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3854_, 0, v___x_3853_);
lean_ctor_set(v___x_3854_, 1, v___x_3851_);
if (v_isShared_3849_ == 0)
{
lean_ctor_set(v___x_3848_, 1, v_a_3843_);
lean_ctor_set(v___x_3848_, 0, v___x_3854_);
v___x_3856_ = v___x_3848_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v___x_3854_);
lean_ctor_set(v_reuseFailAlloc_3858_, 1, v_a_3843_);
v___x_3856_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
v_a_3842_ = v_tail_3846_;
v_a_3843_ = v___x_3856_;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0(uint8_t v___x_3865_, lean_object* v_x_3866_){
_start:
{
if (lean_obj_tag(v_x_3866_) == 1)
{
lean_object* v_pre_3867_; 
v_pre_3867_ = lean_ctor_get(v_x_3866_, 0);
switch(lean_obj_tag(v_pre_3867_))
{
case 1:
{
lean_object* v_pre_3868_; 
v_pre_3868_ = lean_ctor_get(v_pre_3867_, 0);
switch(lean_obj_tag(v_pre_3868_))
{
case 0:
{
lean_object* v_str_3869_; lean_object* v_str_3870_; lean_object* v___x_3871_; uint8_t v___x_3872_; 
v_str_3869_ = lean_ctor_get(v_x_3866_, 1);
v_str_3870_ = lean_ctor_get(v_pre_3867_, 1);
v___x_3871_ = ((lean_object*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1));
v___x_3872_ = lean_string_dec_eq(v_str_3870_, v___x_3871_);
if (v___x_3872_ == 0)
{
lean_object* v___x_3873_; uint8_t v___x_3874_; 
v___x_3873_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExact___closed__2));
v___x_3874_ = lean_string_dec_eq(v_str_3870_, v___x_3873_);
if (v___x_3874_ == 0)
{
return v___x_3874_;
}
else
{
lean_object* v___x_3875_; uint8_t v___x_3876_; 
v___x_3875_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__0));
v___x_3876_ = lean_string_dec_eq(v_str_3869_, v___x_3875_);
return v___x_3876_;
}
}
else
{
lean_object* v___x_3877_; uint8_t v___x_3878_; 
v___x_3877_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__1));
v___x_3878_ = lean_string_dec_eq(v_str_3869_, v___x_3877_);
return v___x_3878_;
}
}
case 1:
{
lean_object* v_pre_3879_; 
v_pre_3879_ = lean_ctor_get(v_pre_3868_, 0);
if (lean_obj_tag(v_pre_3879_) == 0)
{
lean_object* v_str_3880_; lean_object* v_str_3881_; lean_object* v_str_3882_; lean_object* v___x_3883_; uint8_t v___x_3884_; 
v_str_3880_ = lean_ctor_get(v_x_3866_, 1);
v_str_3881_ = lean_ctor_get(v_pre_3867_, 1);
v_str_3882_ = lean_ctor_get(v_pre_3868_, 1);
v___x_3883_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__2));
v___x_3884_ = lean_string_dec_eq(v_str_3882_, v___x_3883_);
if (v___x_3884_ == 0)
{
return v___x_3884_;
}
else
{
lean_object* v___x_3885_; uint8_t v___x_3886_; 
v___x_3885_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__3));
v___x_3886_ = lean_string_dec_eq(v_str_3881_, v___x_3885_);
if (v___x_3886_ == 0)
{
return v___x_3886_;
}
else
{
lean_object* v___x_3887_; uint8_t v___x_3888_; 
v___x_3887_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___closed__4));
v___x_3888_ = lean_string_dec_eq(v_str_3880_, v___x_3887_);
return v___x_3888_;
}
}
}
else
{
return v___x_3865_;
}
}
default: 
{
return v___x_3865_;
}
}
}
case 0:
{
lean_object* v_str_3889_; lean_object* v___x_3890_; uint8_t v___x_3891_; 
v_str_3889_ = lean_ctor_get(v_x_3866_, 1);
v___x_3890_ = ((lean_object*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0));
v___x_3891_ = lean_string_dec_eq(v_str_3889_, v___x_3890_);
return v___x_3891_;
}
default: 
{
return v___x_3865_;
}
}
}
else
{
return v___x_3865_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v___x_3892_, lean_object* v_x_3893_){
_start:
{
uint8_t v___x_5648__boxed_3894_; uint8_t v_res_3895_; lean_object* v_r_3896_; 
v___x_5648__boxed_3894_ = lean_unbox(v___x_3892_);
v_res_3895_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___lam__0(v___x_5648__boxed_3894_, v_x_3893_);
lean_dec(v_x_3893_);
v_r_3896_ = lean_box(v_res_3895_);
return v_r_3896_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg(lean_object* v_ref_3901_, lean_object* v_msgData_3902_, uint8_t v_severity_3903_, uint8_t v_isSilent_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_){
_start:
{
uint8_t v___y_3911_; lean_object* v___y_3912_; lean_object* v___y_3913_; uint8_t v___y_3914_; lean_object* v___y_3915_; lean_object* v___y_3916_; lean_object* v___y_3917_; lean_object* v_toCold_3918_; lean_object* v___y_3919_; lean_object* v___y_3948_; lean_object* v___y_3949_; uint8_t v___y_3950_; uint8_t v___y_3951_; uint8_t v___y_3952_; lean_object* v___y_3953_; lean_object* v___y_3954_; lean_object* v___y_3955_; lean_object* v___y_3975_; uint8_t v___y_3976_; lean_object* v___y_3977_; uint8_t v___y_3978_; lean_object* v___y_3979_; uint8_t v___y_3980_; lean_object* v___y_3981_; uint8_t v___y_3985_; uint8_t v___x_4002_; uint8_t v___x_4003_; 
v___x_4002_ = 2;
v___x_4003_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3903_, v___x_4002_);
if (v___x_4003_ == 0)
{
goto v___jp_3995_;
}
else
{
uint8_t v___x_4004_; 
lean_inc_ref(v_msgData_3902_);
v___x_4004_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3902_);
if (v___x_4004_ == 0)
{
goto v___jp_3995_;
}
else
{
lean_object* v___x_4005_; lean_object* v___x_4006_; 
lean_dec_ref(v_msgData_3902_);
v___x_4005_ = lean_box(0);
v___x_4006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4006_, 0, v___x_4005_);
return v___x_4006_;
}
}
v___jp_3910_:
{
lean_object* v_currNamespace_3920_; lean_object* v_openDecls_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v_env_3926_; lean_object* v_nextMacroScope_3927_; lean_object* v_ngen_3928_; lean_object* v_auxDeclNGen_3929_; lean_object* v_traceState_3930_; lean_object* v_cache_3931_; lean_object* v_recordedDeps_3932_; lean_object* v_messages_3933_; lean_object* v_infoState_3934_; lean_object* v_snapshotTasks_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3946_; 
v_currNamespace_3920_ = lean_ctor_get(v_toCold_3918_, 4);
v_openDecls_3921_ = lean_ctor_get(v_toCold_3918_, 5);
lean_inc(v_openDecls_3921_);
lean_inc(v_currNamespace_3920_);
v___x_3922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3922_, 0, v_currNamespace_3920_);
lean_ctor_set(v___x_3922_, 1, v_openDecls_3921_);
v___x_3923_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3923_, 0, v___x_3922_);
lean_ctor_set(v___x_3923_, 1, v___y_3917_);
lean_inc_ref(v___y_3915_);
lean_inc_ref(v___y_3913_);
v___x_3924_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3924_, 0, v___y_3913_);
lean_ctor_set(v___x_3924_, 1, v___y_3912_);
lean_ctor_set(v___x_3924_, 2, v___y_3916_);
lean_ctor_set(v___x_3924_, 3, v___y_3915_);
lean_ctor_set(v___x_3924_, 4, v___x_3923_);
lean_ctor_set_uint8(v___x_3924_, sizeof(void*)*5, v___y_3914_);
lean_ctor_set_uint8(v___x_3924_, sizeof(void*)*5 + 1, v___y_3911_);
lean_ctor_set_uint8(v___x_3924_, sizeof(void*)*5 + 2, v_isSilent_3904_);
v___x_3925_ = lean_st_ref_take(v___y_3919_);
v_env_3926_ = lean_ctor_get(v___x_3925_, 0);
v_nextMacroScope_3927_ = lean_ctor_get(v___x_3925_, 1);
v_ngen_3928_ = lean_ctor_get(v___x_3925_, 2);
v_auxDeclNGen_3929_ = lean_ctor_get(v___x_3925_, 3);
v_traceState_3930_ = lean_ctor_get(v___x_3925_, 4);
v_cache_3931_ = lean_ctor_get(v___x_3925_, 5);
v_recordedDeps_3932_ = lean_ctor_get(v___x_3925_, 6);
v_messages_3933_ = lean_ctor_get(v___x_3925_, 7);
v_infoState_3934_ = lean_ctor_get(v___x_3925_, 8);
v_snapshotTasks_3935_ = lean_ctor_get(v___x_3925_, 9);
v_isSharedCheck_3946_ = !lean_is_exclusive(v___x_3925_);
if (v_isSharedCheck_3946_ == 0)
{
v___x_3937_ = v___x_3925_;
v_isShared_3938_ = v_isSharedCheck_3946_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_snapshotTasks_3935_);
lean_inc(v_infoState_3934_);
lean_inc(v_messages_3933_);
lean_inc(v_recordedDeps_3932_);
lean_inc(v_cache_3931_);
lean_inc(v_traceState_3930_);
lean_inc(v_auxDeclNGen_3929_);
lean_inc(v_ngen_3928_);
lean_inc(v_nextMacroScope_3927_);
lean_inc(v_env_3926_);
lean_dec(v___x_3925_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3946_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3942_; 
v___x_3939_ = lean_box(0);
v___x_3940_ = l_Lean_MessageLog_add(v___x_3924_, v_messages_3933_);
if (v_isShared_3938_ == 0)
{
lean_ctor_set(v___x_3937_, 7, v___x_3940_);
v___x_3942_ = v___x_3937_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v_env_3926_);
lean_ctor_set(v_reuseFailAlloc_3945_, 1, v_nextMacroScope_3927_);
lean_ctor_set(v_reuseFailAlloc_3945_, 2, v_ngen_3928_);
lean_ctor_set(v_reuseFailAlloc_3945_, 3, v_auxDeclNGen_3929_);
lean_ctor_set(v_reuseFailAlloc_3945_, 4, v_traceState_3930_);
lean_ctor_set(v_reuseFailAlloc_3945_, 5, v_cache_3931_);
lean_ctor_set(v_reuseFailAlloc_3945_, 6, v_recordedDeps_3932_);
lean_ctor_set(v_reuseFailAlloc_3945_, 7, v___x_3940_);
lean_ctor_set(v_reuseFailAlloc_3945_, 8, v_infoState_3934_);
lean_ctor_set(v_reuseFailAlloc_3945_, 9, v_snapshotTasks_3935_);
v___x_3942_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
lean_object* v___x_3943_; lean_object* v___x_3944_; 
v___x_3943_ = lean_st_ref_put(v___y_3919_, v___x_3942_);
v___x_3944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3944_, 0, v___x_3939_);
return v___x_3944_;
}
}
}
v___jp_3947_:
{
lean_object* v_fileName_3956_; lean_object* v_fileMap_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v_a_3960_; lean_object* v___x_3962_; uint8_t v_isShared_3963_; uint8_t v_isSharedCheck_3973_; 
v_fileName_3956_ = lean_ctor_get(v___y_3954_, 0);
v_fileMap_3957_ = lean_ctor_get(v___y_3954_, 1);
v___x_3958_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3902_);
v___x_3959_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(v___x_3958_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_);
v_a_3960_ = lean_ctor_get(v___x_3959_, 0);
v_isSharedCheck_3973_ = !lean_is_exclusive(v___x_3959_);
if (v_isSharedCheck_3973_ == 0)
{
v___x_3962_ = v___x_3959_;
v_isShared_3963_ = v_isSharedCheck_3973_;
goto v_resetjp_3961_;
}
else
{
lean_inc(v_a_3960_);
lean_dec(v___x_3959_);
v___x_3962_ = lean_box(0);
v_isShared_3963_ = v_isSharedCheck_3973_;
goto v_resetjp_3961_;
}
v_resetjp_3961_:
{
lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; 
lean_inc_ref_n(v_fileMap_3957_, 2);
v___x_3964_ = l_Lean_FileMap_toPosition(v_fileMap_3957_, v___y_3953_);
lean_dec(v___y_3953_);
v___x_3965_ = l_Lean_FileMap_toPosition(v_fileMap_3957_, v___y_3955_);
lean_dec(v___y_3955_);
v___x_3966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3965_);
v___x_3967_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___closed__0));
if (v___y_3952_ == 0)
{
lean_del_object(v___x_3962_);
v___y_3911_ = v___y_3950_;
v___y_3912_ = v___x_3964_;
v___y_3913_ = v_fileName_3956_;
v___y_3914_ = v___y_3951_;
v___y_3915_ = v___x_3967_;
v___y_3916_ = v___x_3966_;
v___y_3917_ = v_a_3960_;
v_toCold_3918_ = v___y_3948_;
v___y_3919_ = v___y_3908_;
goto v___jp_3910_;
}
else
{
uint8_t v___x_3968_; 
lean_inc(v_a_3960_);
lean_inc_ref(v___y_3949_);
v___x_3968_ = l_Lean_MessageData_hasTag(v___y_3949_, v_a_3960_);
if (v___x_3968_ == 0)
{
lean_object* v___x_3969_; lean_object* v___x_3971_; 
lean_dec_ref_known(v___x_3966_, 1);
lean_dec_ref(v___x_3964_);
lean_dec(v_a_3960_);
v___x_3969_ = lean_box(0);
if (v_isShared_3963_ == 0)
{
lean_ctor_set(v___x_3962_, 0, v___x_3969_);
v___x_3971_ = v___x_3962_;
goto v_reusejp_3970_;
}
else
{
lean_object* v_reuseFailAlloc_3972_; 
v_reuseFailAlloc_3972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3972_, 0, v___x_3969_);
v___x_3971_ = v_reuseFailAlloc_3972_;
goto v_reusejp_3970_;
}
v_reusejp_3970_:
{
return v___x_3971_;
}
}
else
{
lean_del_object(v___x_3962_);
v___y_3911_ = v___y_3950_;
v___y_3912_ = v___x_3964_;
v___y_3913_ = v_fileName_3956_;
v___y_3914_ = v___y_3951_;
v___y_3915_ = v___x_3967_;
v___y_3916_ = v___x_3966_;
v___y_3917_ = v_a_3960_;
v_toCold_3918_ = v___y_3948_;
v___y_3919_ = v___y_3908_;
goto v___jp_3910_;
}
}
}
}
v___jp_3974_:
{
lean_object* v___x_3982_; 
v___x_3982_ = l_Lean_Syntax_getTailPos_x3f(v___y_3975_, v___y_3976_);
lean_dec(v___y_3975_);
if (lean_obj_tag(v___x_3982_) == 0)
{
lean_inc(v___y_3981_);
v___y_3948_ = v___y_3977_;
v___y_3949_ = v___y_3979_;
v___y_3950_ = v___y_3980_;
v___y_3951_ = v___y_3976_;
v___y_3952_ = v___y_3978_;
v___y_3953_ = v___y_3981_;
v___y_3954_ = v___y_3977_;
v___y_3955_ = v___y_3981_;
goto v___jp_3947_;
}
else
{
lean_object* v_val_3983_; 
v_val_3983_ = lean_ctor_get(v___x_3982_, 0);
lean_inc(v_val_3983_);
lean_dec_ref_known(v___x_3982_, 1);
v___y_3948_ = v___y_3977_;
v___y_3949_ = v___y_3979_;
v___y_3950_ = v___y_3980_;
v___y_3951_ = v___y_3976_;
v___y_3952_ = v___y_3978_;
v___y_3953_ = v___y_3981_;
v___y_3954_ = v___y_3977_;
v___y_3955_ = v_val_3983_;
goto v___jp_3947_;
}
}
v___jp_3984_:
{
lean_object* v_toCold_3986_; lean_object* v_ref_3987_; uint8_t v_suppressElabErrors_3988_; lean_object* v_ref_3989_; uint8_t v___x_3990_; lean_object* v___f_3991_; lean_object* v___x_3992_; 
v_toCold_3986_ = lean_ctor_get(v___y_3907_, 0);
v_ref_3987_ = lean_ctor_get(v___y_3907_, 2);
v_suppressElabErrors_3988_ = lean_ctor_get_uint8(v___y_3907_, sizeof(void*)*3 + 2);
v_ref_3989_ = l_Lean_replaceRef(v_ref_3901_, v_ref_3987_);
v___x_3990_ = 0;
v___f_3991_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___closed__1));
v___x_3992_ = l_Lean_Syntax_getPos_x3f(v_ref_3989_, v___x_3990_);
if (lean_obj_tag(v___x_3992_) == 0)
{
lean_object* v___x_3993_; 
v___x_3993_ = lean_unsigned_to_nat(0u);
v___y_3975_ = v_ref_3989_;
v___y_3976_ = v___x_3990_;
v___y_3977_ = v_toCold_3986_;
v___y_3978_ = v_suppressElabErrors_3988_;
v___y_3979_ = v___f_3991_;
v___y_3980_ = v___y_3985_;
v___y_3981_ = v___x_3993_;
goto v___jp_3974_;
}
else
{
lean_object* v_val_3994_; 
v_val_3994_ = lean_ctor_get(v___x_3992_, 0);
lean_inc(v_val_3994_);
lean_dec_ref_known(v___x_3992_, 1);
v___y_3975_ = v_ref_3989_;
v___y_3976_ = v___x_3990_;
v___y_3977_ = v_toCold_3986_;
v___y_3978_ = v_suppressElabErrors_3988_;
v___y_3979_ = v___f_3991_;
v___y_3980_ = v___y_3985_;
v___y_3981_ = v_val_3994_;
goto v___jp_3974_;
}
}
v___jp_3995_:
{
uint8_t v___x_3996_; uint8_t v___x_3997_; 
v___x_3996_ = 1;
v___x_3997_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3903_, v___x_3996_);
if (v___x_3997_ == 0)
{
v___y_3985_ = v_severity_3903_;
goto v___jp_3984_;
}
else
{
lean_object* v___x_3998_; lean_object* v___x_3999_; uint8_t v___x_4000_; 
v___x_3998_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3907_);
v___x_3999_ = l_Lean_warningAsError;
v___x_4000_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_elabConstructorConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4(v___x_3998_, v___x_3999_);
lean_dec_ref(v___x_3998_);
if (v___x_4000_ == 0)
{
v___y_3985_ = v_severity_3903_;
goto v___jp_3984_;
}
else
{
uint8_t v___x_4001_; 
v___x_4001_ = 2;
v___y_3985_ = v___x_4001_;
goto v___jp_3984_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_ref_4007_, lean_object* v_msgData_4008_, lean_object* v_severity_4009_, lean_object* v_isSilent_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_){
_start:
{
uint8_t v_severity_boxed_4016_; uint8_t v_isSilent_boxed_4017_; lean_object* v_res_4018_; 
v_severity_boxed_4016_ = lean_unbox(v_severity_4009_);
v_isSilent_boxed_4017_ = lean_unbox(v_isSilent_4010_);
v_res_4018_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg(v_ref_4007_, v_msgData_4008_, v_severity_boxed_4016_, v_isSilent_boxed_4017_, v___y_4011_, v___y_4012_, v___y_4013_, v___y_4014_);
lean_dec(v___y_4014_);
lean_dec_ref(v___y_4013_);
lean_dec(v___y_4012_);
lean_dec_ref(v___y_4011_);
lean_dec(v_ref_4007_);
return v_res_4018_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1(lean_object* v_msgData_4019_, uint8_t v_severity_4020_, uint8_t v_isSilent_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_){
_start:
{
lean_object* v_ref_4031_; lean_object* v___x_4032_; 
v_ref_4031_ = lean_ctor_get(v___y_4028_, 2);
v___x_4032_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg(v_ref_4031_, v_msgData_4019_, v_severity_4020_, v_isSilent_4021_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_);
return v___x_4032_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1___boxed(lean_object* v_msgData_4033_, lean_object* v_severity_4034_, lean_object* v_isSilent_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_){
_start:
{
uint8_t v_severity_boxed_4045_; uint8_t v_isSilent_boxed_4046_; lean_object* v_res_4047_; 
v_severity_boxed_4045_ = lean_unbox(v_severity_4034_);
v_isSilent_boxed_4046_ = lean_unbox(v_isSilent_4035_);
v_res_4047_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1(v_msgData_4033_, v_severity_boxed_4045_, v_isSilent_boxed_4046_, v___y_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_, v___y_4043_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
lean_dec(v___y_4039_);
lean_dec_ref(v___y_4038_);
lean_dec(v___y_4037_);
lean_dec_ref(v___y_4036_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1(lean_object* v_msgData_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_){
_start:
{
uint8_t v___x_4058_; uint8_t v___x_4059_; lean_object* v___x_4060_; 
v___x_4058_ = 1;
v___x_4059_ = 0;
v___x_4060_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1(v_msgData_4048_, v___x_4058_, v___x_4059_, v___y_4049_, v___y_4050_, v___y_4051_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_);
return v___x_4060_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1___boxed(lean_object* v_msgData_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_){
_start:
{
lean_object* v_res_4071_; 
v_res_4071_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1(v_msgData_4061_, v___y_4062_, v___y_4063_, v___y_4064_, v___y_4065_, v___y_4066_, v___y_4067_, v___y_4068_, v___y_4069_);
lean_dec(v___y_4069_);
lean_dec_ref(v___y_4068_);
lean_dec(v___y_4067_);
lean_dec_ref(v___y_4066_);
lean_dec(v___y_4065_);
lean_dec_ref(v___y_4064_);
lean_dec(v___y_4063_);
lean_dec_ref(v___y_4062_);
return v_res_4071_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4073_; lean_object* v___x_4074_; 
v___x_4073_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__0));
v___x_4074_ = l_Lean_stringToMessageData(v___x_4073_);
return v___x_4074_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__7(void){
_start:
{
lean_object* v___x_4086_; lean_object* v___x_4087_; 
v___x_4086_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__6));
v___x_4087_ = l_Lean_stringToMessageData(v___x_4086_);
return v___x_4087_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__9(void){
_start:
{
lean_object* v___x_4089_; lean_object* v___x_4090_; 
v___x_4089_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__8));
v___x_4090_ = l_Lean_stringToMessageData(v___x_4089_);
return v___x_4090_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__11(void){
_start:
{
lean_object* v___x_4092_; lean_object* v___x_4093_; 
v___x_4092_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__10));
v___x_4093_ = l_Lean_stringToMessageData(v___x_4092_);
return v___x_4093_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__13(void){
_start:
{
lean_object* v___x_4095_; lean_object* v___x_4096_; 
v___x_4095_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__12));
v___x_4096_ = l_Lean_stringToMessageData(v___x_4095_);
return v___x_4096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0(lean_object* v_stx_4099_, lean_object* v___x_4100_, uint8_t v_cfg_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_){
_start:
{
lean_object* v___x_4111_; 
v___x_4111_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_4103_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_);
if (lean_obj_tag(v___x_4111_) == 0)
{
lean_object* v_a_4112_; uint8_t v___x_4113_; uint8_t v___x_4114_; lean_object* v___y_4116_; lean_object* v___y_4117_; lean_object* v___y_4118_; lean_object* v___y_4119_; lean_object* v___y_4120_; lean_object* v___y_4121_; lean_object* v___y_4122_; lean_object* v___y_4123_; lean_object* v___y_4127_; lean_object* v___y_4128_; lean_object* v___y_4129_; lean_object* v___y_4130_; lean_object* v___x_4137_; uint8_t v___y_4139_; 
v_a_4112_ = lean_ctor_get(v___x_4111_, 0);
lean_inc(v_a_4112_);
lean_dec_ref_known(v___x_4111_, 1);
v___x_4113_ = 1;
v___x_4114_ = 0;
v___x_4137_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__2));
if (v_cfg_4101_ == 0)
{
v___y_4139_ = v___x_4113_;
goto v___jp_4138_;
}
else
{
v___y_4139_ = v___x_4114_;
goto v___jp_4138_;
}
v___jp_4115_:
{
lean_object* v___x_4124_; 
v___x_4124_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_4114_, v___y_4118_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_);
if (lean_obj_tag(v___x_4124_) == 0)
{
lean_object* v___x_4125_; 
lean_dec_ref_known(v___x_4124_, 1);
v___x_4125_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___y_4116_, v___y_4117_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_);
return v___x_4125_;
}
else
{
lean_dec(v___y_4116_);
return v___x_4124_;
}
}
v___jp_4126_:
{
lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; 
lean_inc_ref(v___y_4130_);
v___x_4131_ = l_Lean_stringToMessageData(v___y_4130_);
v___x_4132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4132_, 0, v___y_4129_);
lean_ctor_set(v___x_4132_, 1, v___x_4131_);
v___x_4133_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__1);
v___x_4134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4134_, 0, v___x_4132_);
lean_ctor_set(v___x_4134_, 1, v___x_4133_);
v___x_4135_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4135_, 0, v___x_4134_);
lean_ctor_set(v___x_4135_, 1, v___y_4127_);
v___x_4136_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1(v___x_4135_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_);
if (lean_obj_tag(v___x_4136_) == 0)
{
lean_dec_ref_known(v___x_4136_, 1);
v___y_4116_ = v___y_4128_;
v___y_4117_ = v___y_4103_;
v___y_4118_ = v___y_4104_;
v___y_4119_ = v___y_4105_;
v___y_4120_ = v___y_4106_;
v___y_4121_ = v___y_4107_;
v___y_4122_ = v___y_4108_;
v___y_4123_ = v___y_4109_;
goto v___jp_4115_;
}
else
{
lean_dec(v___y_4128_);
return v___x_4136_;
}
}
v___jp_4138_:
{
lean_object* v___x_4140_; 
v___x_4140_ = l_Lean_MVarId_constructorCore(v_a_4112_, v___x_4137_, v___y_4139_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_);
if (lean_obj_tag(v___x_4140_) == 0)
{
lean_object* v_a_4141_; lean_object* v_fst_4142_; lean_object* v_snd_4143_; lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4190_; 
v_a_4141_ = lean_ctor_get(v___x_4140_, 0);
lean_inc(v_a_4141_);
lean_dec_ref_known(v___x_4140_, 1);
v_fst_4142_ = lean_ctor_get(v_a_4141_, 0);
v_snd_4143_ = lean_ctor_get(v_a_4141_, 1);
v_isSharedCheck_4190_ = !lean_is_exclusive(v_a_4141_);
if (v_isSharedCheck_4190_ == 0)
{
v___x_4145_ = v_a_4141_;
v_isShared_4146_ = v_isSharedCheck_4190_;
goto v_resetjp_4144_;
}
else
{
lean_inc(v_snd_4143_);
lean_inc(v_fst_4142_);
lean_dec(v_a_4141_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4190_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
lean_object* v___x_4147_; lean_object* v___x_4148_; uint8_t v___x_4149_; 
v___x_4147_ = lean_unsigned_to_nat(1u);
v___x_4148_ = lean_array_get_size(v_snd_4143_);
v___x_4149_ = lean_nat_dec_lt(v___x_4147_, v___x_4148_);
if (v___x_4149_ == 0)
{
lean_del_object(v___x_4145_);
lean_dec(v_snd_4143_);
v___y_4116_ = v_fst_4142_;
v___y_4117_ = v___y_4103_;
v___y_4118_ = v___y_4104_;
v___y_4119_ = v___y_4105_;
v___y_4120_ = v___y_4106_;
v___y_4121_ = v___y_4107_;
v___y_4122_ = v___y_4108_;
v___y_4123_ = v___y_4109_;
goto v___jp_4115_;
}
else
{
lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; uint8_t v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; 
lean_inc(v_snd_4143_);
v___x_4150_ = lean_array_to_list(v_snd_4143_);
v___x_4151_ = l_List_drop___redArg(v___x_4147_, v___x_4150_);
lean_dec(v___x_4150_);
v___x_4152_ = lean_box(0);
lean_inc(v___x_4151_);
v___x_4153_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__0(v___x_4151_, v___x_4152_);
v___x_4154_ = l_Lean_MessageData_andList(v___x_4153_);
v___x_4155_ = lean_box(0);
v___x_4156_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__5));
v___x_4157_ = lean_unsigned_to_nat(0u);
v___x_4158_ = l_Lean_Syntax_getArg(v_stx_4099_, v___x_4157_);
v___x_4159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4159_, 0, v___x_4158_);
v___x_4160_ = 4;
v___x_4161_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_4161_, 0, v___x_4156_);
lean_ctor_set(v___x_4161_, 1, v___x_4159_);
lean_ctor_set(v___x_4161_, 2, v___x_4155_);
lean_ctor_set_uint8(v___x_4161_, sizeof(void*)*3, v___x_4160_);
v___x_4162_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__7, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__7_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__7);
v___x_4163_ = lean_mk_empty_array_with_capacity(v___x_4147_);
v___x_4164_ = lean_array_push(v___x_4163_, v___x_4161_);
v___x_4165_ = l_Lean_MessageData_hint(v___x_4162_, v___x_4164_, v___x_4155_, v___x_4155_, v___x_4114_, v___y_4108_, v___y_4109_);
lean_dec_ref(v___x_4164_);
if (lean_obj_tag(v___x_4165_) == 0)
{
lean_object* v_a_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4171_; 
v_a_4166_ = lean_ctor_get(v___x_4165_, 0);
lean_inc(v_a_4166_);
lean_dec_ref_known(v___x_4165_, 1);
v___x_4167_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__9, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__9_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__9);
v___x_4168_ = lean_array_get(v___x_4100_, v_snd_4143_, v___x_4157_);
lean_dec(v_snd_4143_);
v___x_4169_ = l_Lean_MessageData_ofConstName(v___x_4168_, v___x_4114_);
if (v_isShared_4146_ == 0)
{
lean_ctor_set_tag(v___x_4145_, 7);
lean_ctor_set(v___x_4145_, 1, v___x_4169_);
lean_ctor_set(v___x_4145_, 0, v___x_4167_);
v___x_4171_ = v___x_4145_;
goto v_reusejp_4170_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v___x_4167_);
lean_ctor_set(v_reuseFailAlloc_4181_, 1, v___x_4169_);
v___x_4171_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4170_;
}
v_reusejp_4170_:
{
lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; uint8_t v___x_4178_; 
v___x_4172_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__11, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__11_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__11);
v___x_4173_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4173_, 0, v___x_4171_);
lean_ctor_set(v___x_4173_, 1, v___x_4172_);
v___x_4174_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4174_, 0, v___x_4173_);
lean_ctor_set(v___x_4174_, 1, v___x_4154_);
v___x_4175_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__13, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__13_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__13);
v___x_4176_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4176_, 0, v___x_4174_);
lean_ctor_set(v___x_4176_, 1, v___x_4175_);
v___x_4177_ = l_List_lengthTR___redArg(v___x_4151_);
lean_dec(v___x_4151_);
v___x_4178_ = lean_nat_dec_eq(v___x_4177_, v___x_4147_);
lean_dec(v___x_4177_);
if (v___x_4178_ == 0)
{
lean_object* v___x_4179_; 
v___x_4179_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__14));
v___y_4127_ = v_a_4166_;
v___y_4128_ = v_fst_4142_;
v___y_4129_ = v___x_4176_;
v___y_4130_ = v___x_4179_;
goto v___jp_4126_;
}
else
{
lean_object* v___x_4180_; 
v___x_4180_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___closed__15));
v___y_4127_ = v_a_4166_;
v___y_4128_ = v_fst_4142_;
v___y_4129_ = v___x_4176_;
v___y_4130_ = v___x_4180_;
goto v___jp_4126_;
}
}
}
else
{
lean_object* v_a_4182_; lean_object* v___x_4184_; uint8_t v_isShared_4185_; uint8_t v_isSharedCheck_4189_; 
lean_dec_ref(v___x_4154_);
lean_dec(v___x_4151_);
lean_del_object(v___x_4145_);
lean_dec(v_snd_4143_);
lean_dec(v_fst_4142_);
v_a_4182_ = lean_ctor_get(v___x_4165_, 0);
v_isSharedCheck_4189_ = !lean_is_exclusive(v___x_4165_);
if (v_isSharedCheck_4189_ == 0)
{
v___x_4184_ = v___x_4165_;
v_isShared_4185_ = v_isSharedCheck_4189_;
goto v_resetjp_4183_;
}
else
{
lean_inc(v_a_4182_);
lean_dec(v___x_4165_);
v___x_4184_ = lean_box(0);
v_isShared_4185_ = v_isSharedCheck_4189_;
goto v_resetjp_4183_;
}
v_resetjp_4183_:
{
lean_object* v___x_4187_; 
if (v_isShared_4185_ == 0)
{
v___x_4187_ = v___x_4184_;
goto v_reusejp_4186_;
}
else
{
lean_object* v_reuseFailAlloc_4188_; 
v_reuseFailAlloc_4188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4188_, 0, v_a_4182_);
v___x_4187_ = v_reuseFailAlloc_4188_;
goto v_reusejp_4186_;
}
v_reusejp_4186_:
{
return v___x_4187_;
}
}
}
}
}
}
else
{
lean_object* v_a_4191_; lean_object* v___x_4193_; uint8_t v_isShared_4194_; uint8_t v_isSharedCheck_4198_; 
v_a_4191_ = lean_ctor_get(v___x_4140_, 0);
v_isSharedCheck_4198_ = !lean_is_exclusive(v___x_4140_);
if (v_isSharedCheck_4198_ == 0)
{
v___x_4193_ = v___x_4140_;
v_isShared_4194_ = v_isSharedCheck_4198_;
goto v_resetjp_4192_;
}
else
{
lean_inc(v_a_4191_);
lean_dec(v___x_4140_);
v___x_4193_ = lean_box(0);
v_isShared_4194_ = v_isSharedCheck_4198_;
goto v_resetjp_4192_;
}
v_resetjp_4192_:
{
lean_object* v___x_4196_; 
if (v_isShared_4194_ == 0)
{
v___x_4196_ = v___x_4193_;
goto v_reusejp_4195_;
}
else
{
lean_object* v_reuseFailAlloc_4197_; 
v_reuseFailAlloc_4197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4197_, 0, v_a_4191_);
v___x_4196_ = v_reuseFailAlloc_4197_;
goto v_reusejp_4195_;
}
v_reusejp_4195_:
{
return v___x_4196_;
}
}
}
}
}
else
{
lean_object* v_a_4199_; lean_object* v___x_4201_; uint8_t v_isShared_4202_; uint8_t v_isSharedCheck_4206_; 
v_a_4199_ = lean_ctor_get(v___x_4111_, 0);
v_isSharedCheck_4206_ = !lean_is_exclusive(v___x_4111_);
if (v_isSharedCheck_4206_ == 0)
{
v___x_4201_ = v___x_4111_;
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
else
{
lean_inc(v_a_4199_);
lean_dec(v___x_4111_);
v___x_4201_ = lean_box(0);
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
v_resetjp_4200_:
{
lean_object* v___x_4204_; 
if (v_isShared_4202_ == 0)
{
v___x_4204_ = v___x_4201_;
goto v_reusejp_4203_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v_a_4199_);
v___x_4204_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4203_;
}
v_reusejp_4203_:
{
return v___x_4204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___boxed(lean_object* v_stx_4207_, lean_object* v___x_4208_, lean_object* v_cfg_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_){
_start:
{
uint8_t v_cfg_boxed_4219_; lean_object* v_res_4220_; 
v_cfg_boxed_4219_ = lean_unbox(v_cfg_4209_);
v_res_4220_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0(v_stx_4207_, v___x_4208_, v_cfg_boxed_4219_, v___y_4210_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_);
lean_dec(v___y_4217_);
lean_dec_ref(v___y_4216_);
lean_dec(v___y_4215_);
lean_dec_ref(v___y_4214_);
lean_dec(v___y_4213_);
lean_dec_ref(v___y_4212_);
lean_dec(v___y_4211_);
lean_dec_ref(v___y_4210_);
lean_dec(v___x_4208_);
lean_dec(v_stx_4207_);
return v_res_4220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore(lean_object* v_stx_4221_, uint8_t v_cfg_4222_, lean_object* v_a_4223_, lean_object* v_a_4224_, lean_object* v_a_4225_, lean_object* v_a_4226_, lean_object* v_a_4227_, lean_object* v_a_4228_, lean_object* v_a_4229_, lean_object* v_a_4230_){
_start:
{
lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___f_4234_; lean_object* v___x_4235_; 
v___x_4232_ = lean_box(0);
v___x_4233_ = lean_box(v_cfg_4222_);
v___f_4234_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___lam__0___boxed), 12, 3);
lean_closure_set(v___f_4234_, 0, v_stx_4221_);
lean_closure_set(v___f_4234_, 1, v___x_4232_);
lean_closure_set(v___f_4234_, 2, v___x_4233_);
v___x_4235_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_4234_, v_a_4223_, v_a_4224_, v_a_4225_, v_a_4226_, v_a_4227_, v_a_4228_, v_a_4229_, v_a_4230_);
return v___x_4235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore___boxed(lean_object* v_stx_4236_, lean_object* v_cfg_4237_, lean_object* v_a_4238_, lean_object* v_a_4239_, lean_object* v_a_4240_, lean_object* v_a_4241_, lean_object* v_a_4242_, lean_object* v_a_4243_, lean_object* v_a_4244_, lean_object* v_a_4245_, lean_object* v_a_4246_){
_start:
{
uint8_t v_cfg_boxed_4247_; lean_object* v_res_4248_; 
v_cfg_boxed_4247_ = lean_unbox(v_cfg_4237_);
v_res_4248_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore(v_stx_4236_, v_cfg_boxed_4247_, v_a_4238_, v_a_4239_, v_a_4240_, v_a_4241_, v_a_4242_, v_a_4243_, v_a_4244_, v_a_4245_);
lean_dec(v_a_4245_);
lean_dec_ref(v_a_4244_);
lean_dec(v_a_4243_);
lean_dec_ref(v_a_4242_);
lean_dec(v_a_4241_);
lean_dec_ref(v_a_4240_);
lean_dec(v_a_4239_);
lean_dec_ref(v_a_4238_);
return v_res_4248_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2(lean_object* v_ref_4249_, lean_object* v_msgData_4250_, uint8_t v_severity_4251_, uint8_t v_isSilent_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_){
_start:
{
lean_object* v___x_4262_; 
v___x_4262_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___redArg(v_ref_4249_, v_msgData_4250_, v_severity_4251_, v_isSilent_4252_, v___y_4257_, v___y_4258_, v___y_4259_, v___y_4260_);
return v___x_4262_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2___boxed(lean_object* v_ref_4263_, lean_object* v_msgData_4264_, lean_object* v_severity_4265_, lean_object* v_isSilent_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_){
_start:
{
uint8_t v_severity_boxed_4276_; uint8_t v_isSilent_boxed_4277_; lean_object* v_res_4278_; 
v_severity_boxed_4276_ = lean_unbox(v_severity_4265_);
v_isSilent_boxed_4277_ = lean_unbox(v_isSilent_4266_);
v_res_4278_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore_spec__1_spec__1_spec__2(v_ref_4263_, v_msgData_4264_, v_severity_boxed_4276_, v_isSilent_boxed_4277_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_, v___y_4274_);
lean_dec(v___y_4274_);
lean_dec_ref(v___y_4273_);
lean_dec(v___y_4272_);
lean_dec_ref(v___y_4271_);
lean_dec(v___y_4270_);
lean_dec_ref(v___y_4269_);
lean_dec(v___y_4268_);
lean_dec_ref(v___y_4267_);
lean_dec(v_ref_4263_);
return v_res_4278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor(lean_object* v_stx_4279_, lean_object* v_a_4280_, lean_object* v_a_4281_, lean_object* v_a_4282_, lean_object* v_a_4283_, lean_object* v_a_4284_, lean_object* v_a_4285_, lean_object* v_a_4286_, lean_object* v_a_4287_){
_start:
{
lean_object* v___x_4289_; lean_object* v___x_4290_; uint8_t v___x_4291_; uint8_t v___x_4292_; lean_object* v___x_4293_; 
v___x_4289_ = lean_unsigned_to_nat(1u);
v___x_4290_ = l_Lean_Syntax_getArg(v_stx_4279_, v___x_4289_);
v___x_4291_ = 0;
v___x_4292_ = 1;
v___x_4293_ = l_Lean_Elab_Tactic_elabConstructorConfig___redArg(v___x_4290_, v___x_4291_, v___x_4292_, v_a_4280_, v_a_4286_, v_a_4287_);
if (lean_obj_tag(v___x_4293_) == 0)
{
lean_object* v_a_4294_; uint8_t v___x_4295_; lean_object* v___x_4296_; 
v_a_4294_ = lean_ctor_get(v___x_4293_, 0);
lean_inc(v_a_4294_);
lean_dec_ref_known(v___x_4293_, 1);
v___x_4295_ = lean_unbox(v_a_4294_);
lean_dec(v_a_4294_);
v___x_4296_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructorCore(v_stx_4279_, v___x_4295_, v_a_4280_, v_a_4281_, v_a_4282_, v_a_4283_, v_a_4284_, v_a_4285_, v_a_4286_, v_a_4287_);
return v___x_4296_;
}
else
{
lean_object* v_a_4297_; lean_object* v___x_4299_; uint8_t v_isShared_4300_; uint8_t v_isSharedCheck_4304_; 
lean_dec(v_stx_4279_);
v_a_4297_ = lean_ctor_get(v___x_4293_, 0);
v_isSharedCheck_4304_ = !lean_is_exclusive(v___x_4293_);
if (v_isSharedCheck_4304_ == 0)
{
v___x_4299_ = v___x_4293_;
v_isShared_4300_ = v_isSharedCheck_4304_;
goto v_resetjp_4298_;
}
else
{
lean_inc(v_a_4297_);
lean_dec(v___x_4293_);
v___x_4299_ = lean_box(0);
v_isShared_4300_ = v_isSharedCheck_4304_;
goto v_resetjp_4298_;
}
v_resetjp_4298_:
{
lean_object* v___x_4302_; 
if (v_isShared_4300_ == 0)
{
v___x_4302_ = v___x_4299_;
goto v_reusejp_4301_;
}
else
{
lean_object* v_reuseFailAlloc_4303_; 
v_reuseFailAlloc_4303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4303_, 0, v_a_4297_);
v___x_4302_ = v_reuseFailAlloc_4303_;
goto v_reusejp_4301_;
}
v_reusejp_4301_:
{
return v___x_4302_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___boxed(lean_object* v_stx_4305_, lean_object* v_a_4306_, lean_object* v_a_4307_, lean_object* v_a_4308_, lean_object* v_a_4309_, lean_object* v_a_4310_, lean_object* v_a_4311_, lean_object* v_a_4312_, lean_object* v_a_4313_, lean_object* v_a_4314_){
_start:
{
lean_object* v_res_4315_; 
v_res_4315_ = l_Lean_Elab_Tactic_evalConstructor(v_stx_4305_, v_a_4306_, v_a_4307_, v_a_4308_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_);
lean_dec(v_a_4313_);
lean_dec_ref(v_a_4312_);
lean_dec(v_a_4311_);
lean_dec_ref(v_a_4310_);
lean_dec(v_a_4309_);
lean_dec_ref(v_a_4308_);
lean_dec(v_a_4307_);
lean_dec_ref(v_a_4306_);
return v_res_4315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1(){
_start:
{
lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; 
v___x_4329_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4330_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1));
v___x_4331_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3));
v___x_4332_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalConstructor___boxed), 10, 0);
v___x_4333_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4329_, v___x_4330_, v___x_4331_, v___x_4332_);
return v___x_4333_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___boxed(lean_object* v_a_4334_){
_start:
{
lean_object* v_res_4335_; 
v_res_4335_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1();
return v_res_4335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3(){
_start:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; 
v___x_4362_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3));
v___x_4363_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__6));
v___x_4364_ = l_Lean_addBuiltinDeclarationRanges(v___x_4362_, v___x_4363_);
return v___x_4364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___boxed(lean_object* v_a_4365_){
_start:
{
lean_object* v_res_4366_; 
v_res_4366_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3();
return v_res_4366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible(lean_object* v_stx_4367_, lean_object* v_a_4368_, lean_object* v_a_4369_, lean_object* v_a_4370_, lean_object* v_a_4371_, lean_object* v_a_4372_, lean_object* v_a_4373_, lean_object* v_a_4374_, lean_object* v_a_4375_){
_start:
{
lean_object* v___y_4378_; lean_object* v___x_4387_; uint8_t v_transparency_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; uint8_t v___x_4391_; uint8_t v___x_4392_; 
v___x_4387_ = l_Lean_Meta_Context_config(v_a_4372_);
v_transparency_4388_ = lean_ctor_get_uint8(v___x_4387_, 9);
lean_dec_ref(v___x_4387_);
v___x_4389_ = lean_unsigned_to_nat(1u);
v___x_4390_ = l_Lean_Syntax_getArg(v_stx_4367_, v___x_4389_);
v___x_4391_ = 2;
v___x_4392_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4388_, v___x_4391_);
if (v___x_4392_ == 0)
{
lean_object* v_keyedConfig_4393_; uint8_t v_trackZetaDelta_4394_; lean_object* v_zetaDeltaSet_4395_; lean_object* v_lctx_4396_; lean_object* v_localInstances_4397_; lean_object* v_defEqCtx_x3f_4398_; lean_object* v_synthPendingDepth_4399_; lean_object* v_customCanUnfoldPredicate_x3f_4400_; uint8_t v_univApprox_4401_; uint8_t v_inTypeClassResolution_4402_; uint8_t v_cacheInferType_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; 
v_keyedConfig_4393_ = lean_ctor_get(v_a_4372_, 0);
v_trackZetaDelta_4394_ = lean_ctor_get_uint8(v_a_4372_, sizeof(void*)*7);
v_zetaDeltaSet_4395_ = lean_ctor_get(v_a_4372_, 1);
v_lctx_4396_ = lean_ctor_get(v_a_4372_, 2);
v_localInstances_4397_ = lean_ctor_get(v_a_4372_, 3);
v_defEqCtx_x3f_4398_ = lean_ctor_get(v_a_4372_, 4);
v_synthPendingDepth_4399_ = lean_ctor_get(v_a_4372_, 5);
v_customCanUnfoldPredicate_x3f_4400_ = lean_ctor_get(v_a_4372_, 6);
v_univApprox_4401_ = lean_ctor_get_uint8(v_a_4372_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4402_ = lean_ctor_get_uint8(v_a_4372_, sizeof(void*)*7 + 2);
v_cacheInferType_4403_ = lean_ctor_get_uint8(v_a_4372_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4393_);
v___x_4404_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4391_, v_keyedConfig_4393_);
lean_inc(v_customCanUnfoldPredicate_x3f_4400_);
lean_inc(v_synthPendingDepth_4399_);
lean_inc(v_defEqCtx_x3f_4398_);
lean_inc_ref(v_localInstances_4397_);
lean_inc_ref(v_lctx_4396_);
lean_inc(v_zetaDeltaSet_4395_);
v___x_4405_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4405_, 0, v___x_4404_);
lean_ctor_set(v___x_4405_, 1, v_zetaDeltaSet_4395_);
lean_ctor_set(v___x_4405_, 2, v_lctx_4396_);
lean_ctor_set(v___x_4405_, 3, v_localInstances_4397_);
lean_ctor_set(v___x_4405_, 4, v_defEqCtx_x3f_4398_);
lean_ctor_set(v___x_4405_, 5, v_synthPendingDepth_4399_);
lean_ctor_set(v___x_4405_, 6, v_customCanUnfoldPredicate_x3f_4400_);
lean_ctor_set_uint8(v___x_4405_, sizeof(void*)*7, v_trackZetaDelta_4394_);
lean_ctor_set_uint8(v___x_4405_, sizeof(void*)*7 + 1, v_univApprox_4401_);
lean_ctor_set_uint8(v___x_4405_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4402_);
lean_ctor_set_uint8(v___x_4405_, sizeof(void*)*7 + 3, v_cacheInferType_4403_);
v___x_4406_ = l_Lean_Elab_Tactic_evalTactic(v___x_4390_, v_a_4368_, v_a_4369_, v_a_4370_, v_a_4371_, v___x_4405_, v_a_4373_, v_a_4374_, v_a_4375_);
lean_dec_ref_known(v___x_4405_, 7);
v___y_4378_ = v___x_4406_;
goto v___jp_4377_;
}
else
{
lean_object* v___x_4407_; 
v___x_4407_ = l_Lean_Elab_Tactic_evalTactic(v___x_4390_, v_a_4368_, v_a_4369_, v_a_4370_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_, v_a_4375_);
v___y_4378_ = v___x_4407_;
goto v___jp_4377_;
}
v___jp_4377_:
{
if (lean_obj_tag(v___y_4378_) == 0)
{
return v___y_4378_;
}
else
{
lean_object* v_a_4379_; lean_object* v___x_4381_; uint8_t v_isShared_4382_; uint8_t v_isSharedCheck_4386_; 
v_a_4379_ = lean_ctor_get(v___y_4378_, 0);
v_isSharedCheck_4386_ = !lean_is_exclusive(v___y_4378_);
if (v_isSharedCheck_4386_ == 0)
{
v___x_4381_ = v___y_4378_;
v_isShared_4382_ = v_isSharedCheck_4386_;
goto v_resetjp_4380_;
}
else
{
lean_inc(v_a_4379_);
lean_dec(v___y_4378_);
v___x_4381_ = lean_box(0);
v_isShared_4382_ = v_isSharedCheck_4386_;
goto v_resetjp_4380_;
}
v_resetjp_4380_:
{
lean_object* v___x_4384_; 
if (v_isShared_4382_ == 0)
{
v___x_4384_ = v___x_4381_;
goto v_reusejp_4383_;
}
else
{
lean_object* v_reuseFailAlloc_4385_; 
v_reuseFailAlloc_4385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4385_, 0, v_a_4379_);
v___x_4384_ = v_reuseFailAlloc_4385_;
goto v_reusejp_4383_;
}
v_reusejp_4383_:
{
return v___x_4384_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible___boxed(lean_object* v_stx_4408_, lean_object* v_a_4409_, lean_object* v_a_4410_, lean_object* v_a_4411_, lean_object* v_a_4412_, lean_object* v_a_4413_, lean_object* v_a_4414_, lean_object* v_a_4415_, lean_object* v_a_4416_, lean_object* v_a_4417_){
_start:
{
lean_object* v_res_4418_; 
v_res_4418_ = l_Lean_Elab_Tactic_evalWithReducible(v_stx_4408_, v_a_4409_, v_a_4410_, v_a_4411_, v_a_4412_, v_a_4413_, v_a_4414_, v_a_4415_, v_a_4416_);
lean_dec(v_a_4416_);
lean_dec_ref(v_a_4415_);
lean_dec(v_a_4414_);
lean_dec_ref(v_a_4413_);
lean_dec(v_a_4412_);
lean_dec_ref(v_a_4411_);
lean_dec(v_a_4410_);
lean_dec_ref(v_a_4409_);
lean_dec(v_stx_4408_);
return v_res_4418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1(){
_start:
{
lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; 
v___x_4432_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4433_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1));
v___x_4434_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3));
v___x_4435_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalWithReducible___boxed), 10, 0);
v___x_4436_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4432_, v___x_4433_, v___x_4434_, v___x_4435_);
return v___x_4436_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___boxed(lean_object* v_a_4437_){
_start:
{
lean_object* v_res_4438_; 
v_res_4438_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1();
return v_res_4438_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3(){
_start:
{
lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; 
v___x_4465_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3));
v___x_4466_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__6));
v___x_4467_ = l_Lean_addBuiltinDeclarationRanges(v___x_4465_, v___x_4466_);
return v___x_4467_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___boxed(lean_object* v_a_4468_){
_start:
{
lean_object* v_res_4469_; 
v_res_4469_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3();
return v_res_4469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances(lean_object* v_stx_4470_, lean_object* v_a_4471_, lean_object* v_a_4472_, lean_object* v_a_4473_, lean_object* v_a_4474_, lean_object* v_a_4475_, lean_object* v_a_4476_, lean_object* v_a_4477_, lean_object* v_a_4478_){
_start:
{
lean_object* v___y_4481_; lean_object* v___x_4490_; uint8_t v_transparency_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; uint8_t v___x_4494_; uint8_t v___x_4495_; 
v___x_4490_ = l_Lean_Meta_Context_config(v_a_4475_);
v_transparency_4491_ = lean_ctor_get_uint8(v___x_4490_, 9);
lean_dec_ref(v___x_4490_);
v___x_4492_ = lean_unsigned_to_nat(1u);
v___x_4493_ = l_Lean_Syntax_getArg(v_stx_4470_, v___x_4492_);
v___x_4494_ = 3;
v___x_4495_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4491_, v___x_4494_);
if (v___x_4495_ == 0)
{
lean_object* v_keyedConfig_4496_; uint8_t v_trackZetaDelta_4497_; lean_object* v_zetaDeltaSet_4498_; lean_object* v_lctx_4499_; lean_object* v_localInstances_4500_; lean_object* v_defEqCtx_x3f_4501_; lean_object* v_synthPendingDepth_4502_; lean_object* v_customCanUnfoldPredicate_x3f_4503_; uint8_t v_univApprox_4504_; uint8_t v_inTypeClassResolution_4505_; uint8_t v_cacheInferType_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; 
v_keyedConfig_4496_ = lean_ctor_get(v_a_4475_, 0);
v_trackZetaDelta_4497_ = lean_ctor_get_uint8(v_a_4475_, sizeof(void*)*7);
v_zetaDeltaSet_4498_ = lean_ctor_get(v_a_4475_, 1);
v_lctx_4499_ = lean_ctor_get(v_a_4475_, 2);
v_localInstances_4500_ = lean_ctor_get(v_a_4475_, 3);
v_defEqCtx_x3f_4501_ = lean_ctor_get(v_a_4475_, 4);
v_synthPendingDepth_4502_ = lean_ctor_get(v_a_4475_, 5);
v_customCanUnfoldPredicate_x3f_4503_ = lean_ctor_get(v_a_4475_, 6);
v_univApprox_4504_ = lean_ctor_get_uint8(v_a_4475_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4505_ = lean_ctor_get_uint8(v_a_4475_, sizeof(void*)*7 + 2);
v_cacheInferType_4506_ = lean_ctor_get_uint8(v_a_4475_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4496_);
v___x_4507_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4494_, v_keyedConfig_4496_);
lean_inc(v_customCanUnfoldPredicate_x3f_4503_);
lean_inc(v_synthPendingDepth_4502_);
lean_inc(v_defEqCtx_x3f_4501_);
lean_inc_ref(v_localInstances_4500_);
lean_inc_ref(v_lctx_4499_);
lean_inc(v_zetaDeltaSet_4498_);
v___x_4508_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4508_, 0, v___x_4507_);
lean_ctor_set(v___x_4508_, 1, v_zetaDeltaSet_4498_);
lean_ctor_set(v___x_4508_, 2, v_lctx_4499_);
lean_ctor_set(v___x_4508_, 3, v_localInstances_4500_);
lean_ctor_set(v___x_4508_, 4, v_defEqCtx_x3f_4501_);
lean_ctor_set(v___x_4508_, 5, v_synthPendingDepth_4502_);
lean_ctor_set(v___x_4508_, 6, v_customCanUnfoldPredicate_x3f_4503_);
lean_ctor_set_uint8(v___x_4508_, sizeof(void*)*7, v_trackZetaDelta_4497_);
lean_ctor_set_uint8(v___x_4508_, sizeof(void*)*7 + 1, v_univApprox_4504_);
lean_ctor_set_uint8(v___x_4508_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4505_);
lean_ctor_set_uint8(v___x_4508_, sizeof(void*)*7 + 3, v_cacheInferType_4506_);
v___x_4509_ = l_Lean_Elab_Tactic_evalTactic(v___x_4493_, v_a_4471_, v_a_4472_, v_a_4473_, v_a_4474_, v___x_4508_, v_a_4476_, v_a_4477_, v_a_4478_);
lean_dec_ref_known(v___x_4508_, 7);
v___y_4481_ = v___x_4509_;
goto v___jp_4480_;
}
else
{
lean_object* v___x_4510_; 
v___x_4510_ = l_Lean_Elab_Tactic_evalTactic(v___x_4493_, v_a_4471_, v_a_4472_, v_a_4473_, v_a_4474_, v_a_4475_, v_a_4476_, v_a_4477_, v_a_4478_);
v___y_4481_ = v___x_4510_;
goto v___jp_4480_;
}
v___jp_4480_:
{
if (lean_obj_tag(v___y_4481_) == 0)
{
return v___y_4481_;
}
else
{
lean_object* v_a_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4489_; 
v_a_4482_ = lean_ctor_get(v___y_4481_, 0);
v_isSharedCheck_4489_ = !lean_is_exclusive(v___y_4481_);
if (v_isSharedCheck_4489_ == 0)
{
v___x_4484_ = v___y_4481_;
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_a_4482_);
lean_dec(v___y_4481_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v___x_4487_; 
if (v_isShared_4485_ == 0)
{
v___x_4487_ = v___x_4484_;
goto v_reusejp_4486_;
}
else
{
lean_object* v_reuseFailAlloc_4488_; 
v_reuseFailAlloc_4488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4488_, 0, v_a_4482_);
v___x_4487_ = v_reuseFailAlloc_4488_;
goto v_reusejp_4486_;
}
v_reusejp_4486_:
{
return v___x_4487_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___boxed(lean_object* v_stx_4511_, lean_object* v_a_4512_, lean_object* v_a_4513_, lean_object* v_a_4514_, lean_object* v_a_4515_, lean_object* v_a_4516_, lean_object* v_a_4517_, lean_object* v_a_4518_, lean_object* v_a_4519_, lean_object* v_a_4520_){
_start:
{
lean_object* v_res_4521_; 
v_res_4521_ = l_Lean_Elab_Tactic_evalWithReducibleAndInstances(v_stx_4511_, v_a_4512_, v_a_4513_, v_a_4514_, v_a_4515_, v_a_4516_, v_a_4517_, v_a_4518_, v_a_4519_);
lean_dec(v_a_4519_);
lean_dec_ref(v_a_4518_);
lean_dec(v_a_4517_);
lean_dec_ref(v_a_4516_);
lean_dec(v_a_4515_);
lean_dec_ref(v_a_4514_);
lean_dec(v_a_4513_);
lean_dec_ref(v_a_4512_);
lean_dec(v_stx_4511_);
return v_res_4521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1(){
_start:
{
lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; 
v___x_4535_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4536_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1));
v___x_4537_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3));
v___x_4538_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalWithReducibleAndInstances___boxed), 10, 0);
v___x_4539_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4535_, v___x_4536_, v___x_4537_, v___x_4538_);
return v___x_4539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___boxed(lean_object* v_a_4540_){
_start:
{
lean_object* v_res_4541_; 
v_res_4541_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1();
return v_res_4541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3(){
_start:
{
lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; 
v___x_4568_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3));
v___x_4569_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__6));
v___x_4570_ = l_Lean_addBuiltinDeclarationRanges(v___x_4568_, v___x_4569_);
return v___x_4570_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___boxed(lean_object* v_a_4571_){
_start:
{
lean_object* v_res_4572_; 
v_res_4572_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3();
return v_res_4572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithImplicit(lean_object* v_stx_4573_, lean_object* v_a_4574_, lean_object* v_a_4575_, lean_object* v_a_4576_, lean_object* v_a_4577_, lean_object* v_a_4578_, lean_object* v_a_4579_, lean_object* v_a_4580_, lean_object* v_a_4581_){
_start:
{
lean_object* v___y_4584_; lean_object* v___x_4593_; uint8_t v_transparency_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; uint8_t v___x_4597_; uint8_t v___x_4598_; 
v___x_4593_ = l_Lean_Meta_Context_config(v_a_4578_);
v_transparency_4594_ = lean_ctor_get_uint8(v___x_4593_, 9);
lean_dec_ref(v___x_4593_);
v___x_4595_ = lean_unsigned_to_nat(1u);
v___x_4596_ = l_Lean_Syntax_getArg(v_stx_4573_, v___x_4595_);
v___x_4597_ = 5;
v___x_4598_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4594_, v___x_4597_);
if (v___x_4598_ == 0)
{
lean_object* v_keyedConfig_4599_; uint8_t v_trackZetaDelta_4600_; lean_object* v_zetaDeltaSet_4601_; lean_object* v_lctx_4602_; lean_object* v_localInstances_4603_; lean_object* v_defEqCtx_x3f_4604_; lean_object* v_synthPendingDepth_4605_; lean_object* v_customCanUnfoldPredicate_x3f_4606_; uint8_t v_univApprox_4607_; uint8_t v_inTypeClassResolution_4608_; uint8_t v_cacheInferType_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; 
v_keyedConfig_4599_ = lean_ctor_get(v_a_4578_, 0);
v_trackZetaDelta_4600_ = lean_ctor_get_uint8(v_a_4578_, sizeof(void*)*7);
v_zetaDeltaSet_4601_ = lean_ctor_get(v_a_4578_, 1);
v_lctx_4602_ = lean_ctor_get(v_a_4578_, 2);
v_localInstances_4603_ = lean_ctor_get(v_a_4578_, 3);
v_defEqCtx_x3f_4604_ = lean_ctor_get(v_a_4578_, 4);
v_synthPendingDepth_4605_ = lean_ctor_get(v_a_4578_, 5);
v_customCanUnfoldPredicate_x3f_4606_ = lean_ctor_get(v_a_4578_, 6);
v_univApprox_4607_ = lean_ctor_get_uint8(v_a_4578_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4608_ = lean_ctor_get_uint8(v_a_4578_, sizeof(void*)*7 + 2);
v_cacheInferType_4609_ = lean_ctor_get_uint8(v_a_4578_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4599_);
v___x_4610_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4597_, v_keyedConfig_4599_);
lean_inc(v_customCanUnfoldPredicate_x3f_4606_);
lean_inc(v_synthPendingDepth_4605_);
lean_inc(v_defEqCtx_x3f_4604_);
lean_inc_ref(v_localInstances_4603_);
lean_inc_ref(v_lctx_4602_);
lean_inc(v_zetaDeltaSet_4601_);
v___x_4611_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4611_, 0, v___x_4610_);
lean_ctor_set(v___x_4611_, 1, v_zetaDeltaSet_4601_);
lean_ctor_set(v___x_4611_, 2, v_lctx_4602_);
lean_ctor_set(v___x_4611_, 3, v_localInstances_4603_);
lean_ctor_set(v___x_4611_, 4, v_defEqCtx_x3f_4604_);
lean_ctor_set(v___x_4611_, 5, v_synthPendingDepth_4605_);
lean_ctor_set(v___x_4611_, 6, v_customCanUnfoldPredicate_x3f_4606_);
lean_ctor_set_uint8(v___x_4611_, sizeof(void*)*7, v_trackZetaDelta_4600_);
lean_ctor_set_uint8(v___x_4611_, sizeof(void*)*7 + 1, v_univApprox_4607_);
lean_ctor_set_uint8(v___x_4611_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4608_);
lean_ctor_set_uint8(v___x_4611_, sizeof(void*)*7 + 3, v_cacheInferType_4609_);
v___x_4612_ = l_Lean_Elab_Tactic_evalTactic(v___x_4596_, v_a_4574_, v_a_4575_, v_a_4576_, v_a_4577_, v___x_4611_, v_a_4579_, v_a_4580_, v_a_4581_);
lean_dec_ref_known(v___x_4611_, 7);
v___y_4584_ = v___x_4612_;
goto v___jp_4583_;
}
else
{
lean_object* v___x_4613_; 
v___x_4613_ = l_Lean_Elab_Tactic_evalTactic(v___x_4596_, v_a_4574_, v_a_4575_, v_a_4576_, v_a_4577_, v_a_4578_, v_a_4579_, v_a_4580_, v_a_4581_);
v___y_4584_ = v___x_4613_;
goto v___jp_4583_;
}
v___jp_4583_:
{
if (lean_obj_tag(v___y_4584_) == 0)
{
return v___y_4584_;
}
else
{
lean_object* v_a_4585_; lean_object* v___x_4587_; uint8_t v_isShared_4588_; uint8_t v_isSharedCheck_4592_; 
v_a_4585_ = lean_ctor_get(v___y_4584_, 0);
v_isSharedCheck_4592_ = !lean_is_exclusive(v___y_4584_);
if (v_isSharedCheck_4592_ == 0)
{
v___x_4587_ = v___y_4584_;
v_isShared_4588_ = v_isSharedCheck_4592_;
goto v_resetjp_4586_;
}
else
{
lean_inc(v_a_4585_);
lean_dec(v___y_4584_);
v___x_4587_ = lean_box(0);
v_isShared_4588_ = v_isSharedCheck_4592_;
goto v_resetjp_4586_;
}
v_resetjp_4586_:
{
lean_object* v___x_4590_; 
if (v_isShared_4588_ == 0)
{
v___x_4590_ = v___x_4587_;
goto v_reusejp_4589_;
}
else
{
lean_object* v_reuseFailAlloc_4591_; 
v_reuseFailAlloc_4591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4591_, 0, v_a_4585_);
v___x_4590_ = v_reuseFailAlloc_4591_;
goto v_reusejp_4589_;
}
v_reusejp_4589_:
{
return v___x_4590_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithImplicit___boxed(lean_object* v_stx_4614_, lean_object* v_a_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_, lean_object* v_a_4618_, lean_object* v_a_4619_, lean_object* v_a_4620_, lean_object* v_a_4621_, lean_object* v_a_4622_, lean_object* v_a_4623_){
_start:
{
lean_object* v_res_4624_; 
v_res_4624_ = l_Lean_Elab_Tactic_evalWithImplicit(v_stx_4614_, v_a_4615_, v_a_4616_, v_a_4617_, v_a_4618_, v_a_4619_, v_a_4620_, v_a_4621_, v_a_4622_);
lean_dec(v_a_4622_);
lean_dec_ref(v_a_4621_);
lean_dec(v_a_4620_);
lean_dec_ref(v_a_4619_);
lean_dec(v_a_4618_);
lean_dec_ref(v_a_4617_);
lean_dec(v_a_4616_);
lean_dec_ref(v_a_4615_);
lean_dec(v_stx_4614_);
return v_res_4624_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1(){
_start:
{
lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; 
v___x_4638_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4639_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__1));
v___x_4640_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___closed__3));
v___x_4641_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalWithImplicit___boxed), 10, 0);
v___x_4642_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4638_, v___x_4639_, v___x_4640_, v___x_4641_);
return v___x_4642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1___boxed(lean_object* v_a_4643_){
_start:
{
lean_object* v_res_4644_; 
v_res_4644_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1();
return v_res_4644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll(lean_object* v_stx_4645_, lean_object* v_a_4646_, lean_object* v_a_4647_, lean_object* v_a_4648_, lean_object* v_a_4649_, lean_object* v_a_4650_, lean_object* v_a_4651_, lean_object* v_a_4652_, lean_object* v_a_4653_){
_start:
{
lean_object* v___y_4656_; lean_object* v___x_4665_; uint8_t v_transparency_4666_; uint8_t v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; uint8_t v___x_4670_; 
v___x_4665_ = l_Lean_Meta_Context_config(v_a_4650_);
v_transparency_4666_ = lean_ctor_get_uint8(v___x_4665_, 9);
lean_dec_ref(v___x_4665_);
v___x_4667_ = 0;
v___x_4668_ = lean_unsigned_to_nat(1u);
v___x_4669_ = l_Lean_Syntax_getArg(v_stx_4645_, v___x_4668_);
v___x_4670_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4666_, v___x_4667_);
if (v___x_4670_ == 0)
{
lean_object* v_keyedConfig_4671_; uint8_t v_trackZetaDelta_4672_; lean_object* v_zetaDeltaSet_4673_; lean_object* v_lctx_4674_; lean_object* v_localInstances_4675_; lean_object* v_defEqCtx_x3f_4676_; lean_object* v_synthPendingDepth_4677_; lean_object* v_customCanUnfoldPredicate_x3f_4678_; uint8_t v_univApprox_4679_; uint8_t v_inTypeClassResolution_4680_; uint8_t v_cacheInferType_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; 
v_keyedConfig_4671_ = lean_ctor_get(v_a_4650_, 0);
v_trackZetaDelta_4672_ = lean_ctor_get_uint8(v_a_4650_, sizeof(void*)*7);
v_zetaDeltaSet_4673_ = lean_ctor_get(v_a_4650_, 1);
v_lctx_4674_ = lean_ctor_get(v_a_4650_, 2);
v_localInstances_4675_ = lean_ctor_get(v_a_4650_, 3);
v_defEqCtx_x3f_4676_ = lean_ctor_get(v_a_4650_, 4);
v_synthPendingDepth_4677_ = lean_ctor_get(v_a_4650_, 5);
v_customCanUnfoldPredicate_x3f_4678_ = lean_ctor_get(v_a_4650_, 6);
v_univApprox_4679_ = lean_ctor_get_uint8(v_a_4650_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4680_ = lean_ctor_get_uint8(v_a_4650_, sizeof(void*)*7 + 2);
v_cacheInferType_4681_ = lean_ctor_get_uint8(v_a_4650_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4671_);
v___x_4682_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4667_, v_keyedConfig_4671_);
lean_inc(v_customCanUnfoldPredicate_x3f_4678_);
lean_inc(v_synthPendingDepth_4677_);
lean_inc(v_defEqCtx_x3f_4676_);
lean_inc_ref(v_localInstances_4675_);
lean_inc_ref(v_lctx_4674_);
lean_inc(v_zetaDeltaSet_4673_);
v___x_4683_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4683_, 0, v___x_4682_);
lean_ctor_set(v___x_4683_, 1, v_zetaDeltaSet_4673_);
lean_ctor_set(v___x_4683_, 2, v_lctx_4674_);
lean_ctor_set(v___x_4683_, 3, v_localInstances_4675_);
lean_ctor_set(v___x_4683_, 4, v_defEqCtx_x3f_4676_);
lean_ctor_set(v___x_4683_, 5, v_synthPendingDepth_4677_);
lean_ctor_set(v___x_4683_, 6, v_customCanUnfoldPredicate_x3f_4678_);
lean_ctor_set_uint8(v___x_4683_, sizeof(void*)*7, v_trackZetaDelta_4672_);
lean_ctor_set_uint8(v___x_4683_, sizeof(void*)*7 + 1, v_univApprox_4679_);
lean_ctor_set_uint8(v___x_4683_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4680_);
lean_ctor_set_uint8(v___x_4683_, sizeof(void*)*7 + 3, v_cacheInferType_4681_);
v___x_4684_ = l_Lean_Elab_Tactic_evalTactic(v___x_4669_, v_a_4646_, v_a_4647_, v_a_4648_, v_a_4649_, v___x_4683_, v_a_4651_, v_a_4652_, v_a_4653_);
lean_dec_ref_known(v___x_4683_, 7);
v___y_4656_ = v___x_4684_;
goto v___jp_4655_;
}
else
{
lean_object* v___x_4685_; 
v___x_4685_ = l_Lean_Elab_Tactic_evalTactic(v___x_4669_, v_a_4646_, v_a_4647_, v_a_4648_, v_a_4649_, v_a_4650_, v_a_4651_, v_a_4652_, v_a_4653_);
v___y_4656_ = v___x_4685_;
goto v___jp_4655_;
}
v___jp_4655_:
{
if (lean_obj_tag(v___y_4656_) == 0)
{
return v___y_4656_;
}
else
{
lean_object* v_a_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4664_; 
v_a_4657_ = lean_ctor_get(v___y_4656_, 0);
v_isSharedCheck_4664_ = !lean_is_exclusive(v___y_4656_);
if (v_isSharedCheck_4664_ == 0)
{
v___x_4659_ = v___y_4656_;
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_a_4657_);
lean_dec(v___y_4656_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
lean_object* v___x_4662_; 
if (v_isShared_4660_ == 0)
{
v___x_4662_ = v___x_4659_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v_a_4657_);
v___x_4662_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
return v___x_4662_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___boxed(lean_object* v_stx_4686_, lean_object* v_a_4687_, lean_object* v_a_4688_, lean_object* v_a_4689_, lean_object* v_a_4690_, lean_object* v_a_4691_, lean_object* v_a_4692_, lean_object* v_a_4693_, lean_object* v_a_4694_, lean_object* v_a_4695_){
_start:
{
lean_object* v_res_4696_; 
v_res_4696_ = l_Lean_Elab_Tactic_evalWithUnfoldingAll(v_stx_4686_, v_a_4687_, v_a_4688_, v_a_4689_, v_a_4690_, v_a_4691_, v_a_4692_, v_a_4693_, v_a_4694_);
lean_dec(v_a_4694_);
lean_dec_ref(v_a_4693_);
lean_dec(v_a_4692_);
lean_dec_ref(v_a_4691_);
lean_dec(v_a_4690_);
lean_dec_ref(v_a_4689_);
lean_dec(v_a_4688_);
lean_dec_ref(v_a_4687_);
lean_dec(v_stx_4686_);
return v_res_4696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1(){
_start:
{
lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; 
v___x_4710_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4711_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1));
v___x_4712_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3));
v___x_4713_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalWithUnfoldingAll___boxed), 10, 0);
v___x_4714_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4710_, v___x_4711_, v___x_4712_, v___x_4713_);
return v___x_4714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___boxed(lean_object* v_a_4715_){
_start:
{
lean_object* v_res_4716_; 
v_res_4716_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1();
return v_res_4716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3(){
_start:
{
lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; 
v___x_4743_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3));
v___x_4744_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__6));
v___x_4745_ = l_Lean_addBuiltinDeclarationRanges(v___x_4743_, v___x_4744_);
return v___x_4745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___boxed(lean_object* v_a_4746_){
_start:
{
lean_object* v_res_4747_; 
v_res_4747_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3();
return v_res_4747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone(lean_object* v_stx_4748_, lean_object* v_a_4749_, lean_object* v_a_4750_, lean_object* v_a_4751_, lean_object* v_a_4752_, lean_object* v_a_4753_, lean_object* v_a_4754_, lean_object* v_a_4755_, lean_object* v_a_4756_){
_start:
{
lean_object* v___y_4759_; lean_object* v___x_4768_; uint8_t v_transparency_4769_; uint8_t v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; uint8_t v___x_4773_; 
v___x_4768_ = l_Lean_Meta_Context_config(v_a_4753_);
v_transparency_4769_ = lean_ctor_get_uint8(v___x_4768_, 9);
lean_dec_ref(v___x_4768_);
v___x_4770_ = 4;
v___x_4771_ = lean_unsigned_to_nat(1u);
v___x_4772_ = l_Lean_Syntax_getArg(v_stx_4748_, v___x_4771_);
v___x_4773_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4769_, v___x_4770_);
if (v___x_4773_ == 0)
{
lean_object* v_keyedConfig_4774_; uint8_t v_trackZetaDelta_4775_; lean_object* v_zetaDeltaSet_4776_; lean_object* v_lctx_4777_; lean_object* v_localInstances_4778_; lean_object* v_defEqCtx_x3f_4779_; lean_object* v_synthPendingDepth_4780_; lean_object* v_customCanUnfoldPredicate_x3f_4781_; uint8_t v_univApprox_4782_; uint8_t v_inTypeClassResolution_4783_; uint8_t v_cacheInferType_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; 
v_keyedConfig_4774_ = lean_ctor_get(v_a_4753_, 0);
v_trackZetaDelta_4775_ = lean_ctor_get_uint8(v_a_4753_, sizeof(void*)*7);
v_zetaDeltaSet_4776_ = lean_ctor_get(v_a_4753_, 1);
v_lctx_4777_ = lean_ctor_get(v_a_4753_, 2);
v_localInstances_4778_ = lean_ctor_get(v_a_4753_, 3);
v_defEqCtx_x3f_4779_ = lean_ctor_get(v_a_4753_, 4);
v_synthPendingDepth_4780_ = lean_ctor_get(v_a_4753_, 5);
v_customCanUnfoldPredicate_x3f_4781_ = lean_ctor_get(v_a_4753_, 6);
v_univApprox_4782_ = lean_ctor_get_uint8(v_a_4753_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4783_ = lean_ctor_get_uint8(v_a_4753_, sizeof(void*)*7 + 2);
v_cacheInferType_4784_ = lean_ctor_get_uint8(v_a_4753_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4774_);
v___x_4785_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4770_, v_keyedConfig_4774_);
lean_inc(v_customCanUnfoldPredicate_x3f_4781_);
lean_inc(v_synthPendingDepth_4780_);
lean_inc(v_defEqCtx_x3f_4779_);
lean_inc_ref(v_localInstances_4778_);
lean_inc_ref(v_lctx_4777_);
lean_inc(v_zetaDeltaSet_4776_);
v___x_4786_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4786_, 0, v___x_4785_);
lean_ctor_set(v___x_4786_, 1, v_zetaDeltaSet_4776_);
lean_ctor_set(v___x_4786_, 2, v_lctx_4777_);
lean_ctor_set(v___x_4786_, 3, v_localInstances_4778_);
lean_ctor_set(v___x_4786_, 4, v_defEqCtx_x3f_4779_);
lean_ctor_set(v___x_4786_, 5, v_synthPendingDepth_4780_);
lean_ctor_set(v___x_4786_, 6, v_customCanUnfoldPredicate_x3f_4781_);
lean_ctor_set_uint8(v___x_4786_, sizeof(void*)*7, v_trackZetaDelta_4775_);
lean_ctor_set_uint8(v___x_4786_, sizeof(void*)*7 + 1, v_univApprox_4782_);
lean_ctor_set_uint8(v___x_4786_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4783_);
lean_ctor_set_uint8(v___x_4786_, sizeof(void*)*7 + 3, v_cacheInferType_4784_);
v___x_4787_ = l_Lean_Elab_Tactic_evalTactic(v___x_4772_, v_a_4749_, v_a_4750_, v_a_4751_, v_a_4752_, v___x_4786_, v_a_4754_, v_a_4755_, v_a_4756_);
lean_dec_ref_known(v___x_4786_, 7);
v___y_4759_ = v___x_4787_;
goto v___jp_4758_;
}
else
{
lean_object* v___x_4788_; 
v___x_4788_ = l_Lean_Elab_Tactic_evalTactic(v___x_4772_, v_a_4749_, v_a_4750_, v_a_4751_, v_a_4752_, v_a_4753_, v_a_4754_, v_a_4755_, v_a_4756_);
v___y_4759_ = v___x_4788_;
goto v___jp_4758_;
}
v___jp_4758_:
{
if (lean_obj_tag(v___y_4759_) == 0)
{
return v___y_4759_;
}
else
{
lean_object* v_a_4760_; lean_object* v___x_4762_; uint8_t v_isShared_4763_; uint8_t v_isSharedCheck_4767_; 
v_a_4760_ = lean_ctor_get(v___y_4759_, 0);
v_isSharedCheck_4767_ = !lean_is_exclusive(v___y_4759_);
if (v_isSharedCheck_4767_ == 0)
{
v___x_4762_ = v___y_4759_;
v_isShared_4763_ = v_isSharedCheck_4767_;
goto v_resetjp_4761_;
}
else
{
lean_inc(v_a_4760_);
lean_dec(v___y_4759_);
v___x_4762_ = lean_box(0);
v_isShared_4763_ = v_isSharedCheck_4767_;
goto v_resetjp_4761_;
}
v_resetjp_4761_:
{
lean_object* v___x_4765_; 
if (v_isShared_4763_ == 0)
{
v___x_4765_ = v___x_4762_;
goto v_reusejp_4764_;
}
else
{
lean_object* v_reuseFailAlloc_4766_; 
v_reuseFailAlloc_4766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4766_, 0, v_a_4760_);
v___x_4765_ = v_reuseFailAlloc_4766_;
goto v_reusejp_4764_;
}
v_reusejp_4764_:
{
return v___x_4765_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone___boxed(lean_object* v_stx_4789_, lean_object* v_a_4790_, lean_object* v_a_4791_, lean_object* v_a_4792_, lean_object* v_a_4793_, lean_object* v_a_4794_, lean_object* v_a_4795_, lean_object* v_a_4796_, lean_object* v_a_4797_, lean_object* v_a_4798_){
_start:
{
lean_object* v_res_4799_; 
v_res_4799_ = l_Lean_Elab_Tactic_evalWithUnfoldingNone(v_stx_4789_, v_a_4790_, v_a_4791_, v_a_4792_, v_a_4793_, v_a_4794_, v_a_4795_, v_a_4796_, v_a_4797_);
lean_dec(v_a_4797_);
lean_dec_ref(v_a_4796_);
lean_dec(v_a_4795_);
lean_dec_ref(v_a_4794_);
lean_dec(v_a_4793_);
lean_dec_ref(v_a_4792_);
lean_dec(v_a_4791_);
lean_dec_ref(v_a_4790_);
lean_dec(v_stx_4789_);
return v_res_4799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1(){
_start:
{
lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; 
v___x_4813_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4814_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1));
v___x_4815_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3));
v___x_4816_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalWithUnfoldingNone___boxed), 10, 0);
v___x_4817_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4813_, v___x_4814_, v___x_4815_, v___x_4816_);
return v___x_4817_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___boxed(lean_object* v_a_4818_){
_start:
{
lean_object* v_res_4819_; 
v_res_4819_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1();
return v_res_4819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0(lean_object* v_stx_4823_, lean_object* v___x_4824_, uint8_t v___x_4825_, lean_object* v_userName_x3f_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_, lean_object* v___y_4833_, lean_object* v___y_4834_){
_start:
{
lean_object* v___x_4836_; 
v___x_4836_ = l_Lean_Elab_Tactic_elabTerm(v_stx_4823_, v___x_4824_, v___x_4825_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_, v___y_4831_, v___y_4832_, v___y_4833_, v___y_4834_);
if (lean_obj_tag(v___x_4836_) == 0)
{
lean_object* v_a_4837_; lean_object* v___x_4839_; uint8_t v_isShared_4840_; uint8_t v_isSharedCheck_4923_; 
v_a_4837_ = lean_ctor_get(v___x_4836_, 0);
v_isSharedCheck_4923_ = !lean_is_exclusive(v___x_4836_);
if (v_isSharedCheck_4923_ == 0)
{
v___x_4839_ = v___x_4836_;
v_isShared_4840_ = v_isSharedCheck_4923_;
goto v_resetjp_4838_;
}
else
{
lean_inc(v_a_4837_);
lean_dec(v___x_4836_);
v___x_4839_ = lean_box(0);
v_isShared_4840_ = v_isSharedCheck_4923_;
goto v_resetjp_4838_;
}
v_resetjp_4838_:
{
if (lean_obj_tag(v_a_4837_) == 1)
{
lean_object* v_fvarId_4841_; lean_object* v___x_4843_; 
lean_dec(v___y_4834_);
lean_dec_ref(v___y_4833_);
lean_dec(v___y_4832_);
lean_dec_ref(v___y_4831_);
lean_dec(v_userName_x3f_4826_);
v_fvarId_4841_ = lean_ctor_get(v_a_4837_, 0);
lean_inc(v_fvarId_4841_);
lean_dec_ref_known(v_a_4837_, 1);
if (v_isShared_4840_ == 0)
{
lean_ctor_set(v___x_4839_, 0, v_fvarId_4841_);
v___x_4843_ = v___x_4839_;
goto v_reusejp_4842_;
}
else
{
lean_object* v_reuseFailAlloc_4844_; 
v_reuseFailAlloc_4844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4844_, 0, v_fvarId_4841_);
v___x_4843_ = v_reuseFailAlloc_4844_;
goto v_reusejp_4842_;
}
v_reusejp_4842_:
{
return v___x_4843_;
}
}
else
{
lean_object* v___x_4845_; 
lean_del_object(v___x_4839_);
lean_inc(v___y_4834_);
lean_inc_ref(v___y_4833_);
lean_inc(v___y_4832_);
lean_inc_ref(v___y_4831_);
lean_inc(v_a_4837_);
v___x_4845_ = lean_infer_type(v_a_4837_, v___y_4831_, v___y_4832_, v___y_4833_, v___y_4834_);
if (lean_obj_tag(v___x_4845_) == 0)
{
lean_object* v_a_4846_; lean_object* v_userName_4848_; uint8_t v_preserveBinderNames_4849_; lean_object* v___y_4850_; lean_object* v___y_4851_; lean_object* v___y_4852_; lean_object* v___y_4853_; lean_object* v___y_4854_; 
v_a_4846_ = lean_ctor_get(v___x_4845_, 0);
lean_inc(v_a_4846_);
lean_dec_ref_known(v___x_4845_, 1);
if (lean_obj_tag(v_userName_x3f_4826_) == 0)
{
lean_object* v___x_4912_; 
v___x_4912_ = ((lean_object*)(l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__1));
v_userName_4848_ = v___x_4912_;
v_preserveBinderNames_4849_ = v___x_4825_;
v___y_4850_ = v___y_4828_;
v___y_4851_ = v___y_4831_;
v___y_4852_ = v___y_4832_;
v___y_4853_ = v___y_4833_;
v___y_4854_ = v___y_4834_;
goto v___jp_4847_;
}
else
{
lean_object* v_val_4913_; uint8_t v___x_4914_; 
v_val_4913_ = lean_ctor_get(v_userName_x3f_4826_, 0);
lean_inc(v_val_4913_);
lean_dec_ref_known(v_userName_x3f_4826_, 1);
v___x_4914_ = 1;
v_userName_4848_ = v_val_4913_;
v_preserveBinderNames_4849_ = v___x_4914_;
v___y_4850_ = v___y_4828_;
v___y_4851_ = v___y_4831_;
v___y_4852_ = v___y_4832_;
v___y_4853_ = v___y_4833_;
v___y_4854_ = v___y_4834_;
goto v___jp_4847_;
}
v___jp_4847_:
{
lean_object* v___x_4855_; 
v___x_4855_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_4850_, v___y_4851_, v___y_4852_, v___y_4853_, v___y_4854_);
if (lean_obj_tag(v___x_4855_) == 0)
{
lean_object* v_a_4856_; lean_object* v___x_4857_; 
v_a_4856_ = lean_ctor_get(v___x_4855_, 0);
lean_inc(v_a_4856_);
lean_dec_ref_known(v___x_4855_, 1);
v___x_4857_ = l_Lean_MVarId_assert(v_a_4856_, v_userName_4848_, v_a_4846_, v_a_4837_, v___y_4851_, v___y_4852_, v___y_4853_, v___y_4854_);
if (lean_obj_tag(v___x_4857_) == 0)
{
lean_object* v_a_4858_; lean_object* v___x_4859_; 
v_a_4858_ = lean_ctor_get(v___x_4857_, 0);
lean_inc(v_a_4858_);
lean_dec_ref_known(v___x_4857_, 1);
v___x_4859_ = l_Lean_Meta_intro1Core(v_a_4858_, v_preserveBinderNames_4849_, v___y_4851_, v___y_4852_, v___y_4853_, v___y_4854_);
if (lean_obj_tag(v___x_4859_) == 0)
{
lean_object* v_a_4860_; lean_object* v_fst_4861_; lean_object* v_snd_4862_; lean_object* v___x_4864_; uint8_t v_isShared_4865_; uint8_t v_isSharedCheck_4887_; 
v_a_4860_ = lean_ctor_get(v___x_4859_, 0);
lean_inc(v_a_4860_);
lean_dec_ref_known(v___x_4859_, 1);
v_fst_4861_ = lean_ctor_get(v_a_4860_, 0);
v_snd_4862_ = lean_ctor_get(v_a_4860_, 1);
v_isSharedCheck_4887_ = !lean_is_exclusive(v_a_4860_);
if (v_isSharedCheck_4887_ == 0)
{
v___x_4864_ = v_a_4860_;
v_isShared_4865_ = v_isSharedCheck_4887_;
goto v_resetjp_4863_;
}
else
{
lean_inc(v_snd_4862_);
lean_inc(v_fst_4861_);
lean_dec(v_a_4860_);
v___x_4864_ = lean_box(0);
v_isShared_4865_ = v_isSharedCheck_4887_;
goto v_resetjp_4863_;
}
v_resetjp_4863_:
{
lean_object* v___x_4866_; lean_object* v___x_4868_; 
v___x_4866_ = lean_box(0);
if (v_isShared_4865_ == 0)
{
lean_ctor_set_tag(v___x_4864_, 1);
lean_ctor_set(v___x_4864_, 1, v___x_4866_);
lean_ctor_set(v___x_4864_, 0, v_snd_4862_);
v___x_4868_ = v___x_4864_;
goto v_reusejp_4867_;
}
else
{
lean_object* v_reuseFailAlloc_4886_; 
v_reuseFailAlloc_4886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4886_, 0, v_snd_4862_);
lean_ctor_set(v_reuseFailAlloc_4886_, 1, v___x_4866_);
v___x_4868_ = v_reuseFailAlloc_4886_;
goto v_reusejp_4867_;
}
v_reusejp_4867_:
{
lean_object* v___x_4869_; 
v___x_4869_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_4868_, v___y_4850_, v___y_4851_, v___y_4852_, v___y_4853_, v___y_4854_);
lean_dec(v___y_4854_);
lean_dec_ref(v___y_4853_);
lean_dec(v___y_4852_);
lean_dec_ref(v___y_4851_);
if (lean_obj_tag(v___x_4869_) == 0)
{
lean_object* v___x_4871_; uint8_t v_isShared_4872_; uint8_t v_isSharedCheck_4876_; 
v_isSharedCheck_4876_ = !lean_is_exclusive(v___x_4869_);
if (v_isSharedCheck_4876_ == 0)
{
lean_object* v_unused_4877_; 
v_unused_4877_ = lean_ctor_get(v___x_4869_, 0);
lean_dec(v_unused_4877_);
v___x_4871_ = v___x_4869_;
v_isShared_4872_ = v_isSharedCheck_4876_;
goto v_resetjp_4870_;
}
else
{
lean_dec(v___x_4869_);
v___x_4871_ = lean_box(0);
v_isShared_4872_ = v_isSharedCheck_4876_;
goto v_resetjp_4870_;
}
v_resetjp_4870_:
{
lean_object* v___x_4874_; 
if (v_isShared_4872_ == 0)
{
lean_ctor_set(v___x_4871_, 0, v_fst_4861_);
v___x_4874_ = v___x_4871_;
goto v_reusejp_4873_;
}
else
{
lean_object* v_reuseFailAlloc_4875_; 
v_reuseFailAlloc_4875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4875_, 0, v_fst_4861_);
v___x_4874_ = v_reuseFailAlloc_4875_;
goto v_reusejp_4873_;
}
v_reusejp_4873_:
{
return v___x_4874_;
}
}
}
else
{
lean_object* v_a_4878_; lean_object* v___x_4880_; uint8_t v_isShared_4881_; uint8_t v_isSharedCheck_4885_; 
lean_dec(v_fst_4861_);
v_a_4878_ = lean_ctor_get(v___x_4869_, 0);
v_isSharedCheck_4885_ = !lean_is_exclusive(v___x_4869_);
if (v_isSharedCheck_4885_ == 0)
{
v___x_4880_ = v___x_4869_;
v_isShared_4881_ = v_isSharedCheck_4885_;
goto v_resetjp_4879_;
}
else
{
lean_inc(v_a_4878_);
lean_dec(v___x_4869_);
v___x_4880_ = lean_box(0);
v_isShared_4881_ = v_isSharedCheck_4885_;
goto v_resetjp_4879_;
}
v_resetjp_4879_:
{
lean_object* v___x_4883_; 
if (v_isShared_4881_ == 0)
{
v___x_4883_ = v___x_4880_;
goto v_reusejp_4882_;
}
else
{
lean_object* v_reuseFailAlloc_4884_; 
v_reuseFailAlloc_4884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4884_, 0, v_a_4878_);
v___x_4883_ = v_reuseFailAlloc_4884_;
goto v_reusejp_4882_;
}
v_reusejp_4882_:
{
return v___x_4883_;
}
}
}
}
}
}
else
{
lean_object* v_a_4888_; lean_object* v___x_4890_; uint8_t v_isShared_4891_; uint8_t v_isSharedCheck_4895_; 
lean_dec(v___y_4854_);
lean_dec_ref(v___y_4853_);
lean_dec(v___y_4852_);
lean_dec_ref(v___y_4851_);
v_a_4888_ = lean_ctor_get(v___x_4859_, 0);
v_isSharedCheck_4895_ = !lean_is_exclusive(v___x_4859_);
if (v_isSharedCheck_4895_ == 0)
{
v___x_4890_ = v___x_4859_;
v_isShared_4891_ = v_isSharedCheck_4895_;
goto v_resetjp_4889_;
}
else
{
lean_inc(v_a_4888_);
lean_dec(v___x_4859_);
v___x_4890_ = lean_box(0);
v_isShared_4891_ = v_isSharedCheck_4895_;
goto v_resetjp_4889_;
}
v_resetjp_4889_:
{
lean_object* v___x_4893_; 
if (v_isShared_4891_ == 0)
{
v___x_4893_ = v___x_4890_;
goto v_reusejp_4892_;
}
else
{
lean_object* v_reuseFailAlloc_4894_; 
v_reuseFailAlloc_4894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4894_, 0, v_a_4888_);
v___x_4893_ = v_reuseFailAlloc_4894_;
goto v_reusejp_4892_;
}
v_reusejp_4892_:
{
return v___x_4893_;
}
}
}
}
else
{
lean_object* v_a_4896_; lean_object* v___x_4898_; uint8_t v_isShared_4899_; uint8_t v_isSharedCheck_4903_; 
lean_dec(v___y_4854_);
lean_dec_ref(v___y_4853_);
lean_dec(v___y_4852_);
lean_dec_ref(v___y_4851_);
v_a_4896_ = lean_ctor_get(v___x_4857_, 0);
v_isSharedCheck_4903_ = !lean_is_exclusive(v___x_4857_);
if (v_isSharedCheck_4903_ == 0)
{
v___x_4898_ = v___x_4857_;
v_isShared_4899_ = v_isSharedCheck_4903_;
goto v_resetjp_4897_;
}
else
{
lean_inc(v_a_4896_);
lean_dec(v___x_4857_);
v___x_4898_ = lean_box(0);
v_isShared_4899_ = v_isSharedCheck_4903_;
goto v_resetjp_4897_;
}
v_resetjp_4897_:
{
lean_object* v___x_4901_; 
if (v_isShared_4899_ == 0)
{
v___x_4901_ = v___x_4898_;
goto v_reusejp_4900_;
}
else
{
lean_object* v_reuseFailAlloc_4902_; 
v_reuseFailAlloc_4902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4902_, 0, v_a_4896_);
v___x_4901_ = v_reuseFailAlloc_4902_;
goto v_reusejp_4900_;
}
v_reusejp_4900_:
{
return v___x_4901_;
}
}
}
}
else
{
lean_object* v_a_4904_; lean_object* v___x_4906_; uint8_t v_isShared_4907_; uint8_t v_isSharedCheck_4911_; 
lean_dec(v___y_4854_);
lean_dec_ref(v___y_4853_);
lean_dec(v___y_4852_);
lean_dec_ref(v___y_4851_);
lean_dec(v_userName_4848_);
lean_dec(v_a_4846_);
lean_dec(v_a_4837_);
v_a_4904_ = lean_ctor_get(v___x_4855_, 0);
v_isSharedCheck_4911_ = !lean_is_exclusive(v___x_4855_);
if (v_isSharedCheck_4911_ == 0)
{
v___x_4906_ = v___x_4855_;
v_isShared_4907_ = v_isSharedCheck_4911_;
goto v_resetjp_4905_;
}
else
{
lean_inc(v_a_4904_);
lean_dec(v___x_4855_);
v___x_4906_ = lean_box(0);
v_isShared_4907_ = v_isSharedCheck_4911_;
goto v_resetjp_4905_;
}
v_resetjp_4905_:
{
lean_object* v___x_4909_; 
if (v_isShared_4907_ == 0)
{
v___x_4909_ = v___x_4906_;
goto v_reusejp_4908_;
}
else
{
lean_object* v_reuseFailAlloc_4910_; 
v_reuseFailAlloc_4910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4910_, 0, v_a_4904_);
v___x_4909_ = v_reuseFailAlloc_4910_;
goto v_reusejp_4908_;
}
v_reusejp_4908_:
{
return v___x_4909_;
}
}
}
}
}
else
{
lean_object* v_a_4915_; lean_object* v___x_4917_; uint8_t v_isShared_4918_; uint8_t v_isSharedCheck_4922_; 
lean_dec(v_a_4837_);
lean_dec(v___y_4834_);
lean_dec_ref(v___y_4833_);
lean_dec(v___y_4832_);
lean_dec_ref(v___y_4831_);
lean_dec(v_userName_x3f_4826_);
v_a_4915_ = lean_ctor_get(v___x_4845_, 0);
v_isSharedCheck_4922_ = !lean_is_exclusive(v___x_4845_);
if (v_isSharedCheck_4922_ == 0)
{
v___x_4917_ = v___x_4845_;
v_isShared_4918_ = v_isSharedCheck_4922_;
goto v_resetjp_4916_;
}
else
{
lean_inc(v_a_4915_);
lean_dec(v___x_4845_);
v___x_4917_ = lean_box(0);
v_isShared_4918_ = v_isSharedCheck_4922_;
goto v_resetjp_4916_;
}
v_resetjp_4916_:
{
lean_object* v___x_4920_; 
if (v_isShared_4918_ == 0)
{
v___x_4920_ = v___x_4917_;
goto v_reusejp_4919_;
}
else
{
lean_object* v_reuseFailAlloc_4921_; 
v_reuseFailAlloc_4921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4921_, 0, v_a_4915_);
v___x_4920_ = v_reuseFailAlloc_4921_;
goto v_reusejp_4919_;
}
v_reusejp_4919_:
{
return v___x_4920_;
}
}
}
}
}
}
else
{
lean_object* v_a_4924_; lean_object* v___x_4926_; uint8_t v_isShared_4927_; uint8_t v_isSharedCheck_4931_; 
lean_dec(v___y_4834_);
lean_dec_ref(v___y_4833_);
lean_dec(v___y_4832_);
lean_dec_ref(v___y_4831_);
lean_dec(v_userName_x3f_4826_);
v_a_4924_ = lean_ctor_get(v___x_4836_, 0);
v_isSharedCheck_4931_ = !lean_is_exclusive(v___x_4836_);
if (v_isSharedCheck_4931_ == 0)
{
v___x_4926_ = v___x_4836_;
v_isShared_4927_ = v_isSharedCheck_4931_;
goto v_resetjp_4925_;
}
else
{
lean_inc(v_a_4924_);
lean_dec(v___x_4836_);
v___x_4926_ = lean_box(0);
v_isShared_4927_ = v_isSharedCheck_4931_;
goto v_resetjp_4925_;
}
v_resetjp_4925_:
{
lean_object* v___x_4929_; 
if (v_isShared_4927_ == 0)
{
v___x_4929_ = v___x_4926_;
goto v_reusejp_4928_;
}
else
{
lean_object* v_reuseFailAlloc_4930_; 
v_reuseFailAlloc_4930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4930_, 0, v_a_4924_);
v___x_4929_ = v_reuseFailAlloc_4930_;
goto v_reusejp_4928_;
}
v_reusejp_4928_:
{
return v___x_4929_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0___boxed(lean_object* v_stx_4932_, lean_object* v___x_4933_, lean_object* v___x_4934_, lean_object* v_userName_x3f_4935_, lean_object* v___y_4936_, lean_object* v___y_4937_, lean_object* v___y_4938_, lean_object* v___y_4939_, lean_object* v___y_4940_, lean_object* v___y_4941_, lean_object* v___y_4942_, lean_object* v___y_4943_, lean_object* v___y_4944_){
_start:
{
uint8_t v___x_1502__boxed_4945_; lean_object* v_res_4946_; 
v___x_1502__boxed_4945_ = lean_unbox(v___x_4934_);
v_res_4946_ = l_Lean_Elab_Tactic_elabAsFVar___lam__0(v_stx_4932_, v___x_4933_, v___x_1502__boxed_4945_, v_userName_x3f_4935_, v___y_4936_, v___y_4937_, v___y_4938_, v___y_4939_, v___y_4940_, v___y_4941_, v___y_4942_, v___y_4943_);
lean_dec(v___y_4939_);
lean_dec_ref(v___y_4938_);
lean_dec(v___y_4937_);
lean_dec_ref(v___y_4936_);
return v_res_4946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar(lean_object* v_stx_4947_, lean_object* v_userName_x3f_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_, lean_object* v_a_4952_, lean_object* v_a_4953_, lean_object* v_a_4954_, lean_object* v_a_4955_, lean_object* v_a_4956_){
_start:
{
lean_object* v___x_4958_; uint8_t v___x_4959_; lean_object* v___x_4960_; lean_object* v___f_4961_; lean_object* v___x_4962_; 
v___x_4958_ = lean_box(0);
v___x_4959_ = 0;
v___x_4960_ = lean_box(v___x_4959_);
v___f_4961_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabAsFVar___lam__0___boxed), 13, 4);
lean_closure_set(v___f_4961_, 0, v_stx_4947_);
lean_closure_set(v___f_4961_, 1, v___x_4958_);
lean_closure_set(v___f_4961_, 2, v___x_4960_);
lean_closure_set(v___f_4961_, 3, v_userName_x3f_4948_);
v___x_4962_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_4961_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_, v_a_4953_, v_a_4954_, v_a_4955_, v_a_4956_);
return v___x_4962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___boxed(lean_object* v_stx_4963_, lean_object* v_userName_x3f_4964_, lean_object* v_a_4965_, lean_object* v_a_4966_, lean_object* v_a_4967_, lean_object* v_a_4968_, lean_object* v_a_4969_, lean_object* v_a_4970_, lean_object* v_a_4971_, lean_object* v_a_4972_, lean_object* v_a_4973_){
_start:
{
lean_object* v_res_4974_; 
v_res_4974_ = l_Lean_Elab_Tactic_elabAsFVar(v_stx_4963_, v_userName_x3f_4964_, v_a_4965_, v_a_4966_, v_a_4967_, v_a_4968_, v_a_4969_, v_a_4970_, v_a_4971_, v_a_4972_);
lean_dec(v_a_4972_);
lean_dec_ref(v_a_4971_);
lean_dec(v_a_4970_);
lean_dec_ref(v_a_4969_);
lean_dec(v_a_4968_);
lean_dec_ref(v_a_4967_);
lean_dec(v_a_4966_);
lean_dec_ref(v_a_4965_);
return v_res_4974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0(lean_object* v_k_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_, lean_object* v___y_4982_, lean_object* v___y_4983_){
_start:
{
lean_object* v___x_4985_; 
lean_inc(v___y_4979_);
lean_inc_ref(v___y_4978_);
lean_inc(v___y_4977_);
lean_inc_ref(v___y_4976_);
v___x_4985_ = lean_apply_9(v_k_4975_, v___y_4976_, v___y_4977_, v___y_4978_, v___y_4979_, v___y_4980_, v___y_4981_, v___y_4982_, v___y_4983_, lean_box(0));
return v___x_4985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0___boxed(lean_object* v_k_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_, lean_object* v___y_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_){
_start:
{
lean_object* v_res_4996_; 
v_res_4996_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0(v_k_4986_, v___y_4987_, v___y_4988_, v___y_4989_, v___y_4990_, v___y_4991_, v___y_4992_, v___y_4993_, v___y_4994_);
lean_dec(v___y_4990_);
lean_dec_ref(v___y_4989_);
lean_dec(v___y_4988_);
lean_dec_ref(v___y_4987_);
return v_res_4996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg(lean_object* v_k_4997_, uint8_t v_allowLevelAssignments_4998_, lean_object* v___y_4999_, lean_object* v___y_5000_, lean_object* v___y_5001_, lean_object* v___y_5002_, lean_object* v___y_5003_, lean_object* v___y_5004_, lean_object* v___y_5005_, lean_object* v___y_5006_){
_start:
{
lean_object* v___f_5008_; lean_object* v___x_5009_; 
lean_inc(v___y_5002_);
lean_inc_ref(v___y_5001_);
lean_inc(v___y_5000_);
lean_inc_ref(v___y_4999_);
v___f_5008_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_5008_, 0, v_k_4997_);
lean_closure_set(v___f_5008_, 1, v___y_4999_);
lean_closure_set(v___f_5008_, 2, v___y_5000_);
lean_closure_set(v___f_5008_, 3, v___y_5001_);
lean_closure_set(v___f_5008_, 4, v___y_5002_);
v___x_5009_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_4998_, v___f_5008_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_);
if (lean_obj_tag(v___x_5009_) == 0)
{
return v___x_5009_;
}
else
{
lean_object* v_a_5010_; lean_object* v___x_5012_; uint8_t v_isShared_5013_; uint8_t v_isSharedCheck_5017_; 
v_a_5010_ = lean_ctor_get(v___x_5009_, 0);
v_isSharedCheck_5017_ = !lean_is_exclusive(v___x_5009_);
if (v_isSharedCheck_5017_ == 0)
{
v___x_5012_ = v___x_5009_;
v_isShared_5013_ = v_isSharedCheck_5017_;
goto v_resetjp_5011_;
}
else
{
lean_inc(v_a_5010_);
lean_dec(v___x_5009_);
v___x_5012_ = lean_box(0);
v_isShared_5013_ = v_isSharedCheck_5017_;
goto v_resetjp_5011_;
}
v_resetjp_5011_:
{
lean_object* v___x_5015_; 
if (v_isShared_5013_ == 0)
{
v___x_5015_ = v___x_5012_;
goto v_reusejp_5014_;
}
else
{
lean_object* v_reuseFailAlloc_5016_; 
v_reuseFailAlloc_5016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5016_, 0, v_a_5010_);
v___x_5015_ = v_reuseFailAlloc_5016_;
goto v_reusejp_5014_;
}
v_reusejp_5014_:
{
return v___x_5015_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___boxed(lean_object* v_k_5018_, lean_object* v_allowLevelAssignments_5019_, lean_object* v___y_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_, lean_object* v___y_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_, lean_object* v___y_5027_, lean_object* v___y_5028_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_5029_; lean_object* v_res_5030_; 
v_allowLevelAssignments_boxed_5029_ = lean_unbox(v_allowLevelAssignments_5019_);
v_res_5030_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg(v_k_5018_, v_allowLevelAssignments_boxed_5029_, v___y_5020_, v___y_5021_, v___y_5022_, v___y_5023_, v___y_5024_, v___y_5025_, v___y_5026_, v___y_5027_);
lean_dec(v___y_5027_);
lean_dec_ref(v___y_5026_);
lean_dec(v___y_5025_);
lean_dec_ref(v___y_5024_);
lean_dec(v___y_5023_);
lean_dec_ref(v___y_5022_);
lean_dec(v___y_5021_);
lean_dec_ref(v___y_5020_);
return v_res_5030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1(lean_object* v_00_u03b1_5031_, lean_object* v_k_5032_, uint8_t v_allowLevelAssignments_5033_, lean_object* v___y_5034_, lean_object* v___y_5035_, lean_object* v___y_5036_, lean_object* v___y_5037_, lean_object* v___y_5038_, lean_object* v___y_5039_, lean_object* v___y_5040_, lean_object* v___y_5041_){
_start:
{
lean_object* v___x_5043_; 
v___x_5043_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg(v_k_5032_, v_allowLevelAssignments_5033_, v___y_5034_, v___y_5035_, v___y_5036_, v___y_5037_, v___y_5038_, v___y_5039_, v___y_5040_, v___y_5041_);
return v___x_5043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___boxed(lean_object* v_00_u03b1_5044_, lean_object* v_k_5045_, lean_object* v_allowLevelAssignments_5046_, lean_object* v___y_5047_, lean_object* v___y_5048_, lean_object* v___y_5049_, lean_object* v___y_5050_, lean_object* v___y_5051_, lean_object* v___y_5052_, lean_object* v___y_5053_, lean_object* v___y_5054_, lean_object* v___y_5055_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_5056_; lean_object* v_res_5057_; 
v_allowLevelAssignments_boxed_5056_ = lean_unbox(v_allowLevelAssignments_5046_);
v_res_5057_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1(v_00_u03b1_5044_, v_k_5045_, v_allowLevelAssignments_boxed_5056_, v___y_5047_, v___y_5048_, v___y_5049_, v___y_5050_, v___y_5051_, v___y_5052_, v___y_5053_, v___y_5054_);
lean_dec(v___y_5054_);
lean_dec_ref(v___y_5053_);
lean_dec(v___y_5052_);
lean_dec_ref(v___y_5051_);
lean_dec(v___y_5050_);
lean_dec_ref(v___y_5049_);
lean_dec(v___y_5048_);
lean_dec_ref(v___y_5047_);
return v_res_5057_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(lean_object* v_a_5058_, lean_object* v___y_5059_, lean_object* v___y_5060_, lean_object* v___y_5061_, lean_object* v___y_5062_, lean_object* v___y_5063_, lean_object* v___y_5064_, lean_object* v___y_5065_, lean_object* v_a_x3f_5066_){
_start:
{
uint8_t v___x_5068_; lean_object* v___x_5069_; 
v___x_5068_ = 0;
v___x_5069_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_5058_, v___x_5068_, v___y_5059_, v___y_5060_, v___y_5061_, v___y_5062_, v___y_5063_, v___y_5064_, v___y_5065_);
return v___x_5069_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0___boxed(lean_object* v_a_5070_, lean_object* v___y_5071_, lean_object* v___y_5072_, lean_object* v___y_5073_, lean_object* v___y_5074_, lean_object* v___y_5075_, lean_object* v___y_5076_, lean_object* v___y_5077_, lean_object* v_a_x3f_5078_, lean_object* v___y_5079_){
_start:
{
lean_object* v_res_5080_; 
v_res_5080_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(v_a_5070_, v___y_5071_, v___y_5072_, v___y_5073_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_, v_a_x3f_5078_);
lean_dec(v_a_x3f_5078_);
lean_dec(v___y_5077_);
lean_dec_ref(v___y_5076_);
lean_dec(v___y_5075_);
lean_dec_ref(v___y_5074_);
lean_dec(v___y_5073_);
lean_dec_ref(v___y_5072_);
lean_dec(v___y_5071_);
return v_res_5080_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(lean_object* v_x_5081_, lean_object* v___y_5082_, lean_object* v___y_5083_, lean_object* v___y_5084_, lean_object* v___y_5085_, lean_object* v___y_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_, lean_object* v___y_5089_){
_start:
{
lean_object* v___x_5091_; 
v___x_5091_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_5083_, v___y_5085_, v___y_5087_, v___y_5089_);
if (lean_obj_tag(v___x_5091_) == 0)
{
lean_object* v_a_5092_; lean_object* v_r_5093_; 
v_a_5092_ = lean_ctor_get(v___x_5091_, 0);
lean_inc(v_a_5092_);
lean_dec_ref_known(v___x_5091_, 1);
lean_inc(v___y_5089_);
lean_inc_ref(v___y_5088_);
lean_inc(v___y_5087_);
lean_inc_ref(v___y_5086_);
lean_inc(v___y_5085_);
lean_inc_ref(v___y_5084_);
lean_inc(v___y_5083_);
lean_inc_ref(v___y_5082_);
v_r_5093_ = lean_apply_9(v_x_5081_, v___y_5082_, v___y_5083_, v___y_5084_, v___y_5085_, v___y_5086_, v___y_5087_, v___y_5088_, v___y_5089_, lean_box(0));
if (lean_obj_tag(v_r_5093_) == 0)
{
lean_object* v_a_5094_; lean_object* v___x_5096_; uint8_t v_isShared_5097_; uint8_t v_isSharedCheck_5118_; 
v_a_5094_ = lean_ctor_get(v_r_5093_, 0);
v_isSharedCheck_5118_ = !lean_is_exclusive(v_r_5093_);
if (v_isSharedCheck_5118_ == 0)
{
v___x_5096_ = v_r_5093_;
v_isShared_5097_ = v_isSharedCheck_5118_;
goto v_resetjp_5095_;
}
else
{
lean_inc(v_a_5094_);
lean_dec(v_r_5093_);
v___x_5096_ = lean_box(0);
v_isShared_5097_ = v_isSharedCheck_5118_;
goto v_resetjp_5095_;
}
v_resetjp_5095_:
{
lean_object* v___x_5099_; 
lean_inc(v_a_5094_);
if (v_isShared_5097_ == 0)
{
lean_ctor_set_tag(v___x_5096_, 1);
v___x_5099_ = v___x_5096_;
goto v_reusejp_5098_;
}
else
{
lean_object* v_reuseFailAlloc_5117_; 
v_reuseFailAlloc_5117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5117_, 0, v_a_5094_);
v___x_5099_ = v_reuseFailAlloc_5117_;
goto v_reusejp_5098_;
}
v_reusejp_5098_:
{
lean_object* v___x_5100_; 
v___x_5100_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(v_a_5092_, v___y_5083_, v___y_5084_, v___y_5085_, v___y_5086_, v___y_5087_, v___y_5088_, v___y_5089_, v___x_5099_);
lean_dec_ref(v___x_5099_);
if (lean_obj_tag(v___x_5100_) == 0)
{
lean_object* v___x_5102_; uint8_t v_isShared_5103_; uint8_t v_isSharedCheck_5107_; 
v_isSharedCheck_5107_ = !lean_is_exclusive(v___x_5100_);
if (v_isSharedCheck_5107_ == 0)
{
lean_object* v_unused_5108_; 
v_unused_5108_ = lean_ctor_get(v___x_5100_, 0);
lean_dec(v_unused_5108_);
v___x_5102_ = v___x_5100_;
v_isShared_5103_ = v_isSharedCheck_5107_;
goto v_resetjp_5101_;
}
else
{
lean_dec(v___x_5100_);
v___x_5102_ = lean_box(0);
v_isShared_5103_ = v_isSharedCheck_5107_;
goto v_resetjp_5101_;
}
v_resetjp_5101_:
{
lean_object* v___x_5105_; 
if (v_isShared_5103_ == 0)
{
lean_ctor_set(v___x_5102_, 0, v_a_5094_);
v___x_5105_ = v___x_5102_;
goto v_reusejp_5104_;
}
else
{
lean_object* v_reuseFailAlloc_5106_; 
v_reuseFailAlloc_5106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5106_, 0, v_a_5094_);
v___x_5105_ = v_reuseFailAlloc_5106_;
goto v_reusejp_5104_;
}
v_reusejp_5104_:
{
return v___x_5105_;
}
}
}
else
{
lean_object* v_a_5109_; lean_object* v___x_5111_; uint8_t v_isShared_5112_; uint8_t v_isSharedCheck_5116_; 
lean_dec(v_a_5094_);
v_a_5109_ = lean_ctor_get(v___x_5100_, 0);
v_isSharedCheck_5116_ = !lean_is_exclusive(v___x_5100_);
if (v_isSharedCheck_5116_ == 0)
{
v___x_5111_ = v___x_5100_;
v_isShared_5112_ = v_isSharedCheck_5116_;
goto v_resetjp_5110_;
}
else
{
lean_inc(v_a_5109_);
lean_dec(v___x_5100_);
v___x_5111_ = lean_box(0);
v_isShared_5112_ = v_isSharedCheck_5116_;
goto v_resetjp_5110_;
}
v_resetjp_5110_:
{
lean_object* v___x_5114_; 
if (v_isShared_5112_ == 0)
{
v___x_5114_ = v___x_5111_;
goto v_reusejp_5113_;
}
else
{
lean_object* v_reuseFailAlloc_5115_; 
v_reuseFailAlloc_5115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5115_, 0, v_a_5109_);
v___x_5114_ = v_reuseFailAlloc_5115_;
goto v_reusejp_5113_;
}
v_reusejp_5113_:
{
return v___x_5114_;
}
}
}
}
}
}
else
{
lean_object* v_a_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; 
v_a_5119_ = lean_ctor_get(v_r_5093_, 0);
lean_inc(v_a_5119_);
lean_dec_ref_known(v_r_5093_, 1);
v___x_5120_ = lean_box(0);
v___x_5121_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(v_a_5092_, v___y_5083_, v___y_5084_, v___y_5085_, v___y_5086_, v___y_5087_, v___y_5088_, v___y_5089_, v___x_5120_);
if (lean_obj_tag(v___x_5121_) == 0)
{
lean_object* v___x_5123_; uint8_t v_isShared_5124_; uint8_t v_isSharedCheck_5128_; 
v_isSharedCheck_5128_ = !lean_is_exclusive(v___x_5121_);
if (v_isSharedCheck_5128_ == 0)
{
lean_object* v_unused_5129_; 
v_unused_5129_ = lean_ctor_get(v___x_5121_, 0);
lean_dec(v_unused_5129_);
v___x_5123_ = v___x_5121_;
v_isShared_5124_ = v_isSharedCheck_5128_;
goto v_resetjp_5122_;
}
else
{
lean_dec(v___x_5121_);
v___x_5123_ = lean_box(0);
v_isShared_5124_ = v_isSharedCheck_5128_;
goto v_resetjp_5122_;
}
v_resetjp_5122_:
{
lean_object* v___x_5126_; 
if (v_isShared_5124_ == 0)
{
lean_ctor_set_tag(v___x_5123_, 1);
lean_ctor_set(v___x_5123_, 0, v_a_5119_);
v___x_5126_ = v___x_5123_;
goto v_reusejp_5125_;
}
else
{
lean_object* v_reuseFailAlloc_5127_; 
v_reuseFailAlloc_5127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5127_, 0, v_a_5119_);
v___x_5126_ = v_reuseFailAlloc_5127_;
goto v_reusejp_5125_;
}
v_reusejp_5125_:
{
return v___x_5126_;
}
}
}
else
{
lean_object* v_a_5130_; lean_object* v___x_5132_; uint8_t v_isShared_5133_; uint8_t v_isSharedCheck_5137_; 
lean_dec(v_a_5119_);
v_a_5130_ = lean_ctor_get(v___x_5121_, 0);
v_isSharedCheck_5137_ = !lean_is_exclusive(v___x_5121_);
if (v_isSharedCheck_5137_ == 0)
{
v___x_5132_ = v___x_5121_;
v_isShared_5133_ = v_isSharedCheck_5137_;
goto v_resetjp_5131_;
}
else
{
lean_inc(v_a_5130_);
lean_dec(v___x_5121_);
v___x_5132_ = lean_box(0);
v_isShared_5133_ = v_isSharedCheck_5137_;
goto v_resetjp_5131_;
}
v_resetjp_5131_:
{
lean_object* v___x_5135_; 
if (v_isShared_5133_ == 0)
{
v___x_5135_ = v___x_5132_;
goto v_reusejp_5134_;
}
else
{
lean_object* v_reuseFailAlloc_5136_; 
v_reuseFailAlloc_5136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5136_, 0, v_a_5130_);
v___x_5135_ = v_reuseFailAlloc_5136_;
goto v_reusejp_5134_;
}
v_reusejp_5134_:
{
return v___x_5135_;
}
}
}
}
}
else
{
lean_object* v_a_5138_; lean_object* v___x_5140_; uint8_t v_isShared_5141_; uint8_t v_isSharedCheck_5145_; 
lean_dec_ref(v_x_5081_);
v_a_5138_ = lean_ctor_get(v___x_5091_, 0);
v_isSharedCheck_5145_ = !lean_is_exclusive(v___x_5091_);
if (v_isSharedCheck_5145_ == 0)
{
v___x_5140_ = v___x_5091_;
v_isShared_5141_ = v_isSharedCheck_5145_;
goto v_resetjp_5139_;
}
else
{
lean_inc(v_a_5138_);
lean_dec(v___x_5091_);
v___x_5140_ = lean_box(0);
v_isShared_5141_ = v_isSharedCheck_5145_;
goto v_resetjp_5139_;
}
v_resetjp_5139_:
{
lean_object* v___x_5143_; 
if (v_isShared_5141_ == 0)
{
v___x_5143_ = v___x_5140_;
goto v_reusejp_5142_;
}
else
{
lean_object* v_reuseFailAlloc_5144_; 
v_reuseFailAlloc_5144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5144_, 0, v_a_5138_);
v___x_5143_ = v_reuseFailAlloc_5144_;
goto v_reusejp_5142_;
}
v_reusejp_5142_:
{
return v___x_5143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___boxed(lean_object* v_x_5146_, lean_object* v___y_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_, lean_object* v___y_5153_, lean_object* v___y_5154_, lean_object* v___y_5155_){
_start:
{
lean_object* v_res_5156_; 
v_res_5156_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(v_x_5146_, v___y_5147_, v___y_5148_, v___y_5149_, v___y_5150_, v___y_5151_, v___y_5152_, v___y_5153_, v___y_5154_);
lean_dec(v___y_5154_);
lean_dec_ref(v___y_5153_);
lean_dec(v___y_5152_);
lean_dec_ref(v___y_5151_);
lean_dec(v___y_5150_);
lean_dec_ref(v___y_5149_);
lean_dec(v___y_5148_);
lean_dec_ref(v___y_5147_);
return v_res_5156_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2(lean_object* v_00_u03b1_5157_, lean_object* v_x_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_, lean_object* v___y_5161_, lean_object* v___y_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_){
_start:
{
lean_object* v___x_5168_; 
v___x_5168_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(v_x_5158_, v___y_5159_, v___y_5160_, v___y_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_);
return v___x_5168_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___boxed(lean_object* v_00_u03b1_5169_, lean_object* v_x_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_, lean_object* v___y_5174_, lean_object* v___y_5175_, lean_object* v___y_5176_, lean_object* v___y_5177_, lean_object* v___y_5178_, lean_object* v___y_5179_){
_start:
{
lean_object* v_res_5180_; 
v_res_5180_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2(v_00_u03b1_5169_, v_x_5170_, v___y_5171_, v___y_5172_, v___y_5173_, v___y_5174_, v___y_5175_, v___y_5176_, v___y_5177_, v___y_5178_);
lean_dec(v___y_5178_);
lean_dec_ref(v___y_5177_);
lean_dec(v___y_5176_);
lean_dec_ref(v___y_5175_);
lean_dec(v___y_5174_);
lean_dec_ref(v___y_5173_);
lean_dec(v___y_5172_);
lean_dec_ref(v___y_5171_);
return v_res_5180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(lean_object* v_a_5181_, lean_object* v_as_5182_, lean_object* v_i_5183_, lean_object* v___y_5184_, lean_object* v___y_5185_, lean_object* v___y_5186_, lean_object* v___y_5187_){
_start:
{
lean_object* v_zero_5189_; uint8_t v_isZero_5190_; 
v_zero_5189_ = lean_unsigned_to_nat(0u);
v_isZero_5190_ = lean_nat_dec_eq(v_i_5183_, v_zero_5189_);
if (v_isZero_5190_ == 1)
{
lean_object* v___x_5191_; lean_object* v___x_5192_; 
lean_dec(v_i_5183_);
lean_dec_ref(v_a_5181_);
v___x_5191_ = lean_box(0);
v___x_5192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5192_, 0, v___x_5191_);
return v___x_5192_;
}
else
{
lean_object* v_one_5193_; lean_object* v_n_5194_; lean_object* v___x_5195_; 
v_one_5193_ = lean_unsigned_to_nat(1u);
v_n_5194_ = lean_nat_sub(v_i_5183_, v_one_5193_);
lean_dec(v_i_5183_);
v___x_5195_ = lean_array_fget(v_as_5182_, v_n_5194_);
if (lean_obj_tag(v___x_5195_) == 0)
{
v_i_5183_ = v_n_5194_;
goto _start;
}
else
{
lean_object* v_val_5197_; lean_object* v___x_5199_; uint8_t v_isShared_5200_; uint8_t v_isSharedCheck_5227_; 
v_val_5197_ = lean_ctor_get(v___x_5195_, 0);
v_isSharedCheck_5227_ = !lean_is_exclusive(v___x_5195_);
if (v_isSharedCheck_5227_ == 0)
{
v___x_5199_ = v___x_5195_;
v_isShared_5200_ = v_isSharedCheck_5227_;
goto v_resetjp_5198_;
}
else
{
lean_inc(v_val_5197_);
lean_dec(v___x_5195_);
v___x_5199_ = lean_box(0);
v_isShared_5200_ = v_isSharedCheck_5227_;
goto v_resetjp_5198_;
}
v_resetjp_5198_:
{
lean_object* v___x_5201_; lean_object* v___x_5202_; 
v___x_5201_ = l_Lean_LocalDecl_type(v_val_5197_);
lean_inc_ref(v_a_5181_);
v___x_5202_ = l_Lean_Meta_isExprDefEq(v_a_5181_, v___x_5201_, v___y_5184_, v___y_5185_, v___y_5186_, v___y_5187_);
if (lean_obj_tag(v___x_5202_) == 0)
{
lean_object* v_a_5203_; lean_object* v___x_5205_; uint8_t v_isShared_5206_; uint8_t v_isSharedCheck_5218_; 
v_a_5203_ = lean_ctor_get(v___x_5202_, 0);
v_isSharedCheck_5218_ = !lean_is_exclusive(v___x_5202_);
if (v_isSharedCheck_5218_ == 0)
{
v___x_5205_ = v___x_5202_;
v_isShared_5206_ = v_isSharedCheck_5218_;
goto v_resetjp_5204_;
}
else
{
lean_inc(v_a_5203_);
lean_dec(v___x_5202_);
v___x_5205_ = lean_box(0);
v_isShared_5206_ = v_isSharedCheck_5218_;
goto v_resetjp_5204_;
}
v_resetjp_5204_:
{
uint8_t v___x_5207_; 
v___x_5207_ = l_Lean_LocalDecl_isImplementationDetail(v_val_5197_);
if (v___x_5207_ == 0)
{
uint8_t v___x_5208_; 
v___x_5208_ = lean_unbox(v_a_5203_);
lean_dec(v_a_5203_);
if (v___x_5208_ == 0)
{
lean_del_object(v___x_5205_);
lean_del_object(v___x_5199_);
lean_dec(v_val_5197_);
v_i_5183_ = v_n_5194_;
goto _start;
}
else
{
lean_object* v___x_5210_; lean_object* v___x_5212_; 
lean_dec(v_n_5194_);
lean_dec_ref(v_a_5181_);
v___x_5210_ = l_Lean_LocalDecl_fvarId(v_val_5197_);
lean_dec(v_val_5197_);
if (v_isShared_5200_ == 0)
{
lean_ctor_set(v___x_5199_, 0, v___x_5210_);
v___x_5212_ = v___x_5199_;
goto v_reusejp_5211_;
}
else
{
lean_object* v_reuseFailAlloc_5216_; 
v_reuseFailAlloc_5216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5216_, 0, v___x_5210_);
v___x_5212_ = v_reuseFailAlloc_5216_;
goto v_reusejp_5211_;
}
v_reusejp_5211_:
{
lean_object* v___x_5214_; 
if (v_isShared_5206_ == 0)
{
lean_ctor_set(v___x_5205_, 0, v___x_5212_);
v___x_5214_ = v___x_5205_;
goto v_reusejp_5213_;
}
else
{
lean_object* v_reuseFailAlloc_5215_; 
v_reuseFailAlloc_5215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5215_, 0, v___x_5212_);
v___x_5214_ = v_reuseFailAlloc_5215_;
goto v_reusejp_5213_;
}
v_reusejp_5213_:
{
return v___x_5214_;
}
}
}
}
else
{
lean_del_object(v___x_5205_);
lean_dec(v_a_5203_);
lean_del_object(v___x_5199_);
lean_dec(v_val_5197_);
v_i_5183_ = v_n_5194_;
goto _start;
}
}
}
else
{
lean_object* v_a_5219_; lean_object* v___x_5221_; uint8_t v_isShared_5222_; uint8_t v_isSharedCheck_5226_; 
lean_del_object(v___x_5199_);
lean_dec(v_val_5197_);
lean_dec(v_n_5194_);
lean_dec_ref(v_a_5181_);
v_a_5219_ = lean_ctor_get(v___x_5202_, 0);
v_isSharedCheck_5226_ = !lean_is_exclusive(v___x_5202_);
if (v_isSharedCheck_5226_ == 0)
{
v___x_5221_ = v___x_5202_;
v_isShared_5222_ = v_isSharedCheck_5226_;
goto v_resetjp_5220_;
}
else
{
lean_inc(v_a_5219_);
lean_dec(v___x_5202_);
v___x_5221_ = lean_box(0);
v_isShared_5222_ = v_isSharedCheck_5226_;
goto v_resetjp_5220_;
}
v_resetjp_5220_:
{
lean_object* v___x_5224_; 
if (v_isShared_5222_ == 0)
{
v___x_5224_ = v___x_5221_;
goto v_reusejp_5223_;
}
else
{
lean_object* v_reuseFailAlloc_5225_; 
v_reuseFailAlloc_5225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5225_, 0, v_a_5219_);
v___x_5224_ = v_reuseFailAlloc_5225_;
goto v_reusejp_5223_;
}
v_reusejp_5223_:
{
return v___x_5224_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_a_5228_, lean_object* v_as_5229_, lean_object* v_i_5230_, lean_object* v___y_5231_, lean_object* v___y_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_, lean_object* v___y_5235_){
_start:
{
lean_object* v_res_5236_; 
v_res_5236_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(v_a_5228_, v_as_5229_, v_i_5230_, v___y_5231_, v___y_5232_, v___y_5233_, v___y_5234_);
lean_dec(v___y_5234_);
lean_dec_ref(v___y_5233_);
lean_dec(v___y_5232_);
lean_dec_ref(v___y_5231_);
lean_dec_ref(v_as_5229_);
return v_res_5236_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(lean_object* v_a_5237_, lean_object* v_as_5238_, lean_object* v_i_5239_, lean_object* v___y_5240_, lean_object* v___y_5241_, lean_object* v___y_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_){
_start:
{
lean_object* v_zero_5249_; uint8_t v_isZero_5250_; 
v_zero_5249_ = lean_unsigned_to_nat(0u);
v_isZero_5250_ = lean_nat_dec_eq(v_i_5239_, v_zero_5249_);
if (v_isZero_5250_ == 1)
{
lean_object* v___x_5251_; lean_object* v___x_5252_; 
lean_dec(v_i_5239_);
lean_dec_ref(v_a_5237_);
v___x_5251_ = lean_box(0);
v___x_5252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5252_, 0, v___x_5251_);
return v___x_5252_;
}
else
{
lean_object* v_one_5253_; lean_object* v_n_5254_; lean_object* v___x_5255_; lean_object* v___x_5256_; 
v_one_5253_ = lean_unsigned_to_nat(1u);
v_n_5254_ = lean_nat_sub(v_i_5239_, v_one_5253_);
lean_dec(v_i_5239_);
v___x_5255_ = lean_array_fget_borrowed(v_as_5238_, v_n_5254_);
lean_inc_ref(v_a_5237_);
v___x_5256_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(v_a_5237_, v___x_5255_, v___y_5240_, v___y_5241_, v___y_5242_, v___y_5243_, v___y_5244_, v___y_5245_, v___y_5246_, v___y_5247_);
if (lean_obj_tag(v___x_5256_) == 0)
{
lean_object* v_a_5257_; 
v_a_5257_ = lean_ctor_get(v___x_5256_, 0);
if (lean_obj_tag(v_a_5257_) == 0)
{
lean_dec_ref_known(v___x_5256_, 1);
v_i_5239_ = v_n_5254_;
goto _start;
}
else
{
lean_dec(v_n_5254_);
lean_dec_ref(v_a_5237_);
return v___x_5256_;
}
}
else
{
lean_dec(v_n_5254_);
lean_dec_ref(v_a_5237_);
return v___x_5256_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(lean_object* v_a_5259_, lean_object* v_x_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_, lean_object* v___y_5267_, lean_object* v___y_5268_){
_start:
{
if (lean_obj_tag(v_x_5260_) == 0)
{
lean_object* v_cs_5270_; lean_object* v___x_5271_; lean_object* v___x_5272_; 
v_cs_5270_ = lean_ctor_get(v_x_5260_, 0);
v___x_5271_ = lean_array_get_size(v_cs_5270_);
v___x_5272_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(v_a_5259_, v_cs_5270_, v___x_5271_, v___y_5261_, v___y_5262_, v___y_5263_, v___y_5264_, v___y_5265_, v___y_5266_, v___y_5267_, v___y_5268_);
return v___x_5272_;
}
else
{
lean_object* v_vs_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; 
v_vs_5273_ = lean_ctor_get(v_x_5260_, 0);
v___x_5274_ = lean_array_get_size(v_vs_5273_);
v___x_5275_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(v_a_5259_, v_vs_5273_, v___x_5274_, v___y_5265_, v___y_5266_, v___y_5267_, v___y_5268_);
return v___x_5275_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4___boxed(lean_object* v_a_5276_, lean_object* v_x_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_, lean_object* v___y_5285_, lean_object* v___y_5286_){
_start:
{
lean_object* v_res_5287_; 
v_res_5287_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(v_a_5276_, v_x_5277_, v___y_5278_, v___y_5279_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_);
lean_dec(v___y_5285_);
lean_dec_ref(v___y_5284_);
lean_dec(v___y_5283_);
lean_dec_ref(v___y_5282_);
lean_dec(v___y_5281_);
lean_dec_ref(v___y_5280_);
lean_dec(v___y_5279_);
lean_dec_ref(v___y_5278_);
lean_dec_ref(v_x_5277_);
return v_res_5287_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg___boxed(lean_object* v_a_5288_, lean_object* v_as_5289_, lean_object* v_i_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_, lean_object* v___y_5296_, lean_object* v___y_5297_, lean_object* v___y_5298_, lean_object* v___y_5299_){
_start:
{
lean_object* v_res_5300_; 
v_res_5300_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(v_a_5288_, v_as_5289_, v_i_5290_, v___y_5291_, v___y_5292_, v___y_5293_, v___y_5294_, v___y_5295_, v___y_5296_, v___y_5297_, v___y_5298_);
lean_dec(v___y_5298_);
lean_dec_ref(v___y_5297_);
lean_dec(v___y_5296_);
lean_dec_ref(v___y_5295_);
lean_dec(v___y_5294_);
lean_dec_ref(v___y_5293_);
lean_dec(v___y_5292_);
lean_dec_ref(v___y_5291_);
lean_dec_ref(v_as_5289_);
return v_res_5300_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0(lean_object* v_a_5301_, lean_object* v_t_5302_, lean_object* v___y_5303_, lean_object* v___y_5304_, lean_object* v___y_5305_, lean_object* v___y_5306_, lean_object* v___y_5307_, lean_object* v___y_5308_, lean_object* v___y_5309_, lean_object* v___y_5310_){
_start:
{
lean_object* v_root_5312_; lean_object* v_tail_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; 
v_root_5312_ = lean_ctor_get(v_t_5302_, 0);
v_tail_5313_ = lean_ctor_get(v_t_5302_, 1);
v___x_5314_ = lean_array_get_size(v_tail_5313_);
lean_inc_ref(v_a_5301_);
v___x_5315_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(v_a_5301_, v_tail_5313_, v___x_5314_, v___y_5307_, v___y_5308_, v___y_5309_, v___y_5310_);
if (lean_obj_tag(v___x_5315_) == 0)
{
lean_object* v_a_5316_; 
v_a_5316_ = lean_ctor_get(v___x_5315_, 0);
if (lean_obj_tag(v_a_5316_) == 0)
{
lean_object* v___x_5317_; 
lean_dec_ref_known(v___x_5315_, 1);
v___x_5317_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(v_a_5301_, v_root_5312_, v___y_5303_, v___y_5304_, v___y_5305_, v___y_5306_, v___y_5307_, v___y_5308_, v___y_5309_, v___y_5310_);
return v___x_5317_;
}
else
{
lean_dec_ref(v_a_5301_);
return v___x_5315_;
}
}
else
{
lean_dec_ref(v_a_5301_);
return v___x_5315_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0___boxed(lean_object* v_a_5318_, lean_object* v_t_5319_, lean_object* v___y_5320_, lean_object* v___y_5321_, lean_object* v___y_5322_, lean_object* v___y_5323_, lean_object* v___y_5324_, lean_object* v___y_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_){
_start:
{
lean_object* v_res_5329_; 
v_res_5329_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0(v_a_5318_, v_t_5319_, v___y_5320_, v___y_5321_, v___y_5322_, v___y_5323_, v___y_5324_, v___y_5325_, v___y_5326_, v___y_5327_);
lean_dec(v___y_5327_);
lean_dec_ref(v___y_5326_);
lean_dec(v___y_5325_);
lean_dec_ref(v___y_5324_);
lean_dec(v___y_5323_);
lean_dec_ref(v___y_5322_);
lean_dec(v___y_5321_);
lean_dec_ref(v___y_5320_);
lean_dec_ref(v_t_5319_);
return v_res_5329_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0(lean_object* v_a_5330_, lean_object* v_lctx_5331_, lean_object* v___y_5332_, lean_object* v___y_5333_, lean_object* v___y_5334_, lean_object* v___y_5335_, lean_object* v___y_5336_, lean_object* v___y_5337_, lean_object* v___y_5338_, lean_object* v___y_5339_){
_start:
{
lean_object* v_decls_5341_; lean_object* v___x_5342_; 
v_decls_5341_ = lean_ctor_get(v_lctx_5331_, 1);
v___x_5342_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0(v_a_5330_, v_decls_5341_, v___y_5332_, v___y_5333_, v___y_5334_, v___y_5335_, v___y_5336_, v___y_5337_, v___y_5338_, v___y_5339_);
return v___x_5342_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0___boxed(lean_object* v_a_5343_, lean_object* v_lctx_5344_, lean_object* v___y_5345_, lean_object* v___y_5346_, lean_object* v___y_5347_, lean_object* v___y_5348_, lean_object* v___y_5349_, lean_object* v___y_5350_, lean_object* v___y_5351_, lean_object* v___y_5352_, lean_object* v___y_5353_){
_start:
{
lean_object* v_res_5354_; 
v_res_5354_ = l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0(v_a_5343_, v_lctx_5344_, v___y_5345_, v___y_5346_, v___y_5347_, v___y_5348_, v___y_5349_, v___y_5350_, v___y_5351_, v___y_5352_);
lean_dec(v___y_5352_);
lean_dec_ref(v___y_5351_);
lean_dec(v___y_5350_);
lean_dec_ref(v___y_5349_);
lean_dec(v___y_5348_);
lean_dec_ref(v___y_5347_);
lean_dec(v___y_5346_);
lean_dec_ref(v___y_5345_);
lean_dec_ref(v_lctx_5344_);
return v_res_5354_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRename___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5356_; lean_object* v___x_5357_; 
v___x_5356_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRename___lam__0___closed__0));
v___x_5357_ = l_Lean_stringToMessageData(v___x_5356_);
return v___x_5357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__0(lean_object* v___x_5358_, lean_object* v___x_5359_, uint8_t v___x_5360_, lean_object* v___y_5361_, lean_object* v___y_5362_, lean_object* v___y_5363_, lean_object* v___y_5364_, lean_object* v___y_5365_, lean_object* v___y_5366_, lean_object* v___y_5367_, lean_object* v___y_5368_){
_start:
{
lean_object* v___x_5370_; 
v___x_5370_ = l_Lean_Elab_Tactic_elabTerm(v___x_5358_, v___x_5359_, v___x_5360_, v___y_5361_, v___y_5362_, v___y_5363_, v___y_5364_, v___y_5365_, v___y_5366_, v___y_5367_, v___y_5368_);
if (lean_obj_tag(v___x_5370_) == 0)
{
lean_object* v_a_5371_; lean_object* v_lctx_5372_; lean_object* v___x_5373_; 
v_a_5371_ = lean_ctor_get(v___x_5370_, 0);
lean_inc_n(v_a_5371_, 2);
lean_dec_ref_known(v___x_5370_, 1);
v_lctx_5372_ = lean_ctor_get(v___y_5365_, 2);
v___x_5373_ = l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0(v_a_5371_, v_lctx_5372_, v___y_5361_, v___y_5362_, v___y_5363_, v___y_5364_, v___y_5365_, v___y_5366_, v___y_5367_, v___y_5368_);
if (lean_obj_tag(v___x_5373_) == 0)
{
lean_object* v_a_5374_; lean_object* v___x_5376_; uint8_t v_isShared_5377_; uint8_t v_isSharedCheck_5386_; 
v_a_5374_ = lean_ctor_get(v___x_5373_, 0);
v_isSharedCheck_5386_ = !lean_is_exclusive(v___x_5373_);
if (v_isSharedCheck_5386_ == 0)
{
v___x_5376_ = v___x_5373_;
v_isShared_5377_ = v_isSharedCheck_5386_;
goto v_resetjp_5375_;
}
else
{
lean_inc(v_a_5374_);
lean_dec(v___x_5373_);
v___x_5376_ = lean_box(0);
v_isShared_5377_ = v_isSharedCheck_5386_;
goto v_resetjp_5375_;
}
v_resetjp_5375_:
{
if (lean_obj_tag(v_a_5374_) == 0)
{
lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; 
lean_del_object(v___x_5376_);
v___x_5378_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRename___lam__0___closed__1, &l_Lean_Elab_Tactic_evalRename___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_evalRename___lam__0___closed__1);
v___x_5379_ = l_Lean_indentExpr(v_a_5371_);
v___x_5380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5380_, 0, v___x_5378_);
lean_ctor_set(v___x_5380_, 1, v___x_5379_);
v___x_5381_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v___x_5380_, v___y_5365_, v___y_5366_, v___y_5367_, v___y_5368_);
return v___x_5381_;
}
else
{
lean_object* v_val_5382_; lean_object* v___x_5384_; 
lean_dec(v_a_5371_);
v_val_5382_ = lean_ctor_get(v_a_5374_, 0);
lean_inc(v_val_5382_);
lean_dec_ref_known(v_a_5374_, 1);
if (v_isShared_5377_ == 0)
{
lean_ctor_set(v___x_5376_, 0, v_val_5382_);
v___x_5384_ = v___x_5376_;
goto v_reusejp_5383_;
}
else
{
lean_object* v_reuseFailAlloc_5385_; 
v_reuseFailAlloc_5385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5385_, 0, v_val_5382_);
v___x_5384_ = v_reuseFailAlloc_5385_;
goto v_reusejp_5383_;
}
v_reusejp_5383_:
{
return v___x_5384_;
}
}
}
}
else
{
lean_object* v_a_5387_; lean_object* v___x_5389_; uint8_t v_isShared_5390_; uint8_t v_isSharedCheck_5394_; 
lean_dec(v_a_5371_);
v_a_5387_ = lean_ctor_get(v___x_5373_, 0);
v_isSharedCheck_5394_ = !lean_is_exclusive(v___x_5373_);
if (v_isSharedCheck_5394_ == 0)
{
v___x_5389_ = v___x_5373_;
v_isShared_5390_ = v_isSharedCheck_5394_;
goto v_resetjp_5388_;
}
else
{
lean_inc(v_a_5387_);
lean_dec(v___x_5373_);
v___x_5389_ = lean_box(0);
v_isShared_5390_ = v_isSharedCheck_5394_;
goto v_resetjp_5388_;
}
v_resetjp_5388_:
{
lean_object* v___x_5392_; 
if (v_isShared_5390_ == 0)
{
v___x_5392_ = v___x_5389_;
goto v_reusejp_5391_;
}
else
{
lean_object* v_reuseFailAlloc_5393_; 
v_reuseFailAlloc_5393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5393_, 0, v_a_5387_);
v___x_5392_ = v_reuseFailAlloc_5393_;
goto v_reusejp_5391_;
}
v_reusejp_5391_:
{
return v___x_5392_;
}
}
}
}
else
{
lean_object* v_a_5395_; lean_object* v___x_5397_; uint8_t v_isShared_5398_; uint8_t v_isSharedCheck_5402_; 
v_a_5395_ = lean_ctor_get(v___x_5370_, 0);
v_isSharedCheck_5402_ = !lean_is_exclusive(v___x_5370_);
if (v_isSharedCheck_5402_ == 0)
{
v___x_5397_ = v___x_5370_;
v_isShared_5398_ = v_isSharedCheck_5402_;
goto v_resetjp_5396_;
}
else
{
lean_inc(v_a_5395_);
lean_dec(v___x_5370_);
v___x_5397_ = lean_box(0);
v_isShared_5398_ = v_isSharedCheck_5402_;
goto v_resetjp_5396_;
}
v_resetjp_5396_:
{
lean_object* v___x_5400_; 
if (v_isShared_5398_ == 0)
{
v___x_5400_ = v___x_5397_;
goto v_reusejp_5399_;
}
else
{
lean_object* v_reuseFailAlloc_5401_; 
v_reuseFailAlloc_5401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5401_, 0, v_a_5395_);
v___x_5400_ = v_reuseFailAlloc_5401_;
goto v_reusejp_5399_;
}
v_reusejp_5399_:
{
return v___x_5400_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__0___boxed(lean_object* v___x_5403_, lean_object* v___x_5404_, lean_object* v___x_5405_, lean_object* v___y_5406_, lean_object* v___y_5407_, lean_object* v___y_5408_, lean_object* v___y_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_, lean_object* v___y_5412_, lean_object* v___y_5413_, lean_object* v___y_5414_){
_start:
{
uint8_t v___x_6838__boxed_5415_; lean_object* v_res_5416_; 
v___x_6838__boxed_5415_ = lean_unbox(v___x_5405_);
v_res_5416_ = l_Lean_Elab_Tactic_evalRename___lam__0(v___x_5403_, v___x_5404_, v___x_6838__boxed_5415_, v___y_5406_, v___y_5407_, v___y_5408_, v___y_5409_, v___y_5410_, v___y_5411_, v___y_5412_, v___y_5413_);
lean_dec(v___y_5413_);
lean_dec_ref(v___y_5412_);
lean_dec(v___y_5411_);
lean_dec_ref(v___y_5410_);
lean_dec(v___y_5409_);
lean_dec_ref(v___y_5408_);
lean_dec(v___y_5407_);
lean_dec_ref(v___y_5406_);
return v_res_5416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__1(lean_object* v___x_5417_, lean_object* v_h_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_, lean_object* v___y_5424_, lean_object* v___y_5425_, lean_object* v___y_5426_){
_start:
{
lean_object* v___x_5428_; 
v___x_5428_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(v___x_5417_, v___y_5419_, v___y_5420_, v___y_5421_, v___y_5422_, v___y_5423_, v___y_5424_, v___y_5425_, v___y_5426_);
if (lean_obj_tag(v___x_5428_) == 0)
{
lean_object* v_a_5429_; lean_object* v___x_5430_; 
v_a_5429_ = lean_ctor_get(v___x_5428_, 0);
lean_inc(v_a_5429_);
lean_dec_ref_known(v___x_5428_, 1);
v___x_5430_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_5420_, v___y_5423_, v___y_5424_, v___y_5425_, v___y_5426_);
if (lean_obj_tag(v___x_5430_) == 0)
{
lean_object* v_a_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; 
v_a_5431_ = lean_ctor_get(v___x_5430_, 0);
lean_inc(v_a_5431_);
lean_dec_ref_known(v___x_5430_, 1);
v___x_5432_ = l_Lean_TSyntax_getId(v_h_5418_);
v___x_5433_ = l_Lean_MVarId_rename(v_a_5431_, v_a_5429_, v___x_5432_, v___y_5423_, v___y_5424_, v___y_5425_, v___y_5426_);
if (lean_obj_tag(v___x_5433_) == 0)
{
lean_object* v_a_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; 
v_a_5434_ = lean_ctor_get(v___x_5433_, 0);
lean_inc(v_a_5434_);
lean_dec_ref_known(v___x_5433_, 1);
v___x_5435_ = lean_box(0);
v___x_5436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5436_, 0, v_a_5434_);
lean_ctor_set(v___x_5436_, 1, v___x_5435_);
v___x_5437_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_5436_, v___y_5420_, v___y_5423_, v___y_5424_, v___y_5425_, v___y_5426_);
return v___x_5437_;
}
else
{
lean_object* v_a_5438_; lean_object* v___x_5440_; uint8_t v_isShared_5441_; uint8_t v_isSharedCheck_5445_; 
v_a_5438_ = lean_ctor_get(v___x_5433_, 0);
v_isSharedCheck_5445_ = !lean_is_exclusive(v___x_5433_);
if (v_isSharedCheck_5445_ == 0)
{
v___x_5440_ = v___x_5433_;
v_isShared_5441_ = v_isSharedCheck_5445_;
goto v_resetjp_5439_;
}
else
{
lean_inc(v_a_5438_);
lean_dec(v___x_5433_);
v___x_5440_ = lean_box(0);
v_isShared_5441_ = v_isSharedCheck_5445_;
goto v_resetjp_5439_;
}
v_resetjp_5439_:
{
lean_object* v___x_5443_; 
if (v_isShared_5441_ == 0)
{
v___x_5443_ = v___x_5440_;
goto v_reusejp_5442_;
}
else
{
lean_object* v_reuseFailAlloc_5444_; 
v_reuseFailAlloc_5444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5444_, 0, v_a_5438_);
v___x_5443_ = v_reuseFailAlloc_5444_;
goto v_reusejp_5442_;
}
v_reusejp_5442_:
{
return v___x_5443_;
}
}
}
}
else
{
lean_object* v_a_5446_; lean_object* v___x_5448_; uint8_t v_isShared_5449_; uint8_t v_isSharedCheck_5453_; 
lean_dec(v_a_5429_);
v_a_5446_ = lean_ctor_get(v___x_5430_, 0);
v_isSharedCheck_5453_ = !lean_is_exclusive(v___x_5430_);
if (v_isSharedCheck_5453_ == 0)
{
v___x_5448_ = v___x_5430_;
v_isShared_5449_ = v_isSharedCheck_5453_;
goto v_resetjp_5447_;
}
else
{
lean_inc(v_a_5446_);
lean_dec(v___x_5430_);
v___x_5448_ = lean_box(0);
v_isShared_5449_ = v_isSharedCheck_5453_;
goto v_resetjp_5447_;
}
v_resetjp_5447_:
{
lean_object* v___x_5451_; 
if (v_isShared_5449_ == 0)
{
v___x_5451_ = v___x_5448_;
goto v_reusejp_5450_;
}
else
{
lean_object* v_reuseFailAlloc_5452_; 
v_reuseFailAlloc_5452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5452_, 0, v_a_5446_);
v___x_5451_ = v_reuseFailAlloc_5452_;
goto v_reusejp_5450_;
}
v_reusejp_5450_:
{
return v___x_5451_;
}
}
}
}
else
{
lean_object* v_a_5454_; lean_object* v___x_5456_; uint8_t v_isShared_5457_; uint8_t v_isSharedCheck_5461_; 
v_a_5454_ = lean_ctor_get(v___x_5428_, 0);
v_isSharedCheck_5461_ = !lean_is_exclusive(v___x_5428_);
if (v_isSharedCheck_5461_ == 0)
{
v___x_5456_ = v___x_5428_;
v_isShared_5457_ = v_isSharedCheck_5461_;
goto v_resetjp_5455_;
}
else
{
lean_inc(v_a_5454_);
lean_dec(v___x_5428_);
v___x_5456_ = lean_box(0);
v_isShared_5457_ = v_isSharedCheck_5461_;
goto v_resetjp_5455_;
}
v_resetjp_5455_:
{
lean_object* v___x_5459_; 
if (v_isShared_5457_ == 0)
{
v___x_5459_ = v___x_5456_;
goto v_reusejp_5458_;
}
else
{
lean_object* v_reuseFailAlloc_5460_; 
v_reuseFailAlloc_5460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5460_, 0, v_a_5454_);
v___x_5459_ = v_reuseFailAlloc_5460_;
goto v_reusejp_5458_;
}
v_reusejp_5458_:
{
return v___x_5459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__1___boxed(lean_object* v___x_5462_, lean_object* v_h_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_, lean_object* v___y_5467_, lean_object* v___y_5468_, lean_object* v___y_5469_, lean_object* v___y_5470_, lean_object* v___y_5471_, lean_object* v___y_5472_){
_start:
{
lean_object* v_res_5473_; 
v_res_5473_ = l_Lean_Elab_Tactic_evalRename___lam__1(v___x_5462_, v_h_5463_, v___y_5464_, v___y_5465_, v___y_5466_, v___y_5467_, v___y_5468_, v___y_5469_, v___y_5470_, v___y_5471_);
lean_dec(v___y_5471_);
lean_dec_ref(v___y_5470_);
lean_dec(v___y_5469_);
lean_dec_ref(v___y_5468_);
lean_dec(v___y_5467_);
lean_dec_ref(v___y_5466_);
lean_dec(v___y_5465_);
lean_dec_ref(v___y_5464_);
lean_dec(v_h_5463_);
return v_res_5473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename(lean_object* v_stx_5483_, lean_object* v_a_5484_, lean_object* v_a_5485_, lean_object* v_a_5486_, lean_object* v_a_5487_, lean_object* v_a_5488_, lean_object* v_a_5489_, lean_object* v_a_5490_, lean_object* v_a_5491_){
_start:
{
lean_object* v___x_5493_; uint8_t v___x_5494_; 
v___x_5493_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRename___closed__1));
lean_inc(v_stx_5483_);
v___x_5494_ = l_Lean_Syntax_isOfKind(v_stx_5483_, v___x_5493_);
if (v___x_5494_ == 0)
{
lean_object* v___x_5495_; 
lean_dec(v_stx_5483_);
v___x_5495_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_5495_;
}
else
{
lean_object* v___x_5496_; lean_object* v_h_5497_; lean_object* v___x_5498_; uint8_t v___x_5499_; 
v___x_5496_ = lean_unsigned_to_nat(3u);
v_h_5497_ = l_Lean_Syntax_getArg(v_stx_5483_, v___x_5496_);
v___x_5498_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRename___closed__3));
lean_inc(v_h_5497_);
v___x_5499_ = l_Lean_Syntax_isOfKind(v_h_5497_, v___x_5498_);
if (v___x_5499_ == 0)
{
lean_object* v___x_5500_; 
lean_dec(v_h_5497_);
lean_dec(v_stx_5483_);
v___x_5500_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_5500_;
}
else
{
lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___f_5505_; lean_object* v___x_5506_; uint8_t v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; lean_object* v___f_5510_; lean_object* v___x_5511_; 
v___x_5501_ = lean_unsigned_to_nat(1u);
v___x_5502_ = l_Lean_Syntax_getArg(v_stx_5483_, v___x_5501_);
lean_dec(v_stx_5483_);
v___x_5503_ = lean_box(0);
v___x_5504_ = lean_box(v___x_5499_);
v___f_5505_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRename___lam__0___boxed), 12, 3);
lean_closure_set(v___f_5505_, 0, v___x_5502_);
lean_closure_set(v___f_5505_, 1, v___x_5503_);
lean_closure_set(v___f_5505_, 2, v___x_5504_);
v___x_5506_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___boxed), 11, 2);
lean_closure_set(v___x_5506_, 0, lean_box(0));
lean_closure_set(v___x_5506_, 1, v___f_5505_);
v___x_5507_ = 0;
v___x_5508_ = lean_box(v___x_5507_);
v___x_5509_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___boxed), 12, 3);
lean_closure_set(v___x_5509_, 0, lean_box(0));
lean_closure_set(v___x_5509_, 1, v___x_5506_);
lean_closure_set(v___x_5509_, 2, v___x_5508_);
v___f_5510_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRename___lam__1___boxed), 11, 2);
lean_closure_set(v___f_5510_, 0, v___x_5509_);
lean_closure_set(v___f_5510_, 1, v_h_5497_);
v___x_5511_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_5510_, v_a_5484_, v_a_5485_, v_a_5486_, v_a_5487_, v_a_5488_, v_a_5489_, v_a_5490_, v_a_5491_);
return v___x_5511_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___boxed(lean_object* v_stx_5512_, lean_object* v_a_5513_, lean_object* v_a_5514_, lean_object* v_a_5515_, lean_object* v_a_5516_, lean_object* v_a_5517_, lean_object* v_a_5518_, lean_object* v_a_5519_, lean_object* v_a_5520_, lean_object* v_a_5521_){
_start:
{
lean_object* v_res_5522_; 
v_res_5522_ = l_Lean_Elab_Tactic_evalRename(v_stx_5512_, v_a_5513_, v_a_5514_, v_a_5515_, v_a_5516_, v_a_5517_, v_a_5518_, v_a_5519_, v_a_5520_);
lean_dec(v_a_5520_);
lean_dec_ref(v_a_5519_);
lean_dec(v_a_5518_);
lean_dec_ref(v_a_5517_);
lean_dec(v_a_5516_);
lean_dec_ref(v_a_5515_);
lean_dec(v_a_5514_);
lean_dec_ref(v_a_5513_);
return v_res_5522_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3(lean_object* v_a_5523_, lean_object* v_as_5524_, lean_object* v_i_5525_, lean_object* v_a_5526_, lean_object* v___y_5527_, lean_object* v___y_5528_, lean_object* v___y_5529_, lean_object* v___y_5530_, lean_object* v___y_5531_, lean_object* v___y_5532_, lean_object* v___y_5533_, lean_object* v___y_5534_){
_start:
{
lean_object* v___x_5536_; 
v___x_5536_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(v_a_5523_, v_as_5524_, v_i_5525_, v___y_5531_, v___y_5532_, v___y_5533_, v___y_5534_);
return v___x_5536_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___boxed(lean_object* v_a_5537_, lean_object* v_as_5538_, lean_object* v_i_5539_, lean_object* v_a_5540_, lean_object* v___y_5541_, lean_object* v___y_5542_, lean_object* v___y_5543_, lean_object* v___y_5544_, lean_object* v___y_5545_, lean_object* v___y_5546_, lean_object* v___y_5547_, lean_object* v___y_5548_, lean_object* v___y_5549_){
_start:
{
lean_object* v_res_5550_; 
v_res_5550_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3(v_a_5537_, v_as_5538_, v_i_5539_, v_a_5540_, v___y_5541_, v___y_5542_, v___y_5543_, v___y_5544_, v___y_5545_, v___y_5546_, v___y_5547_, v___y_5548_);
lean_dec(v___y_5548_);
lean_dec_ref(v___y_5547_);
lean_dec(v___y_5546_);
lean_dec_ref(v___y_5545_);
lean_dec(v___y_5544_);
lean_dec_ref(v___y_5543_);
lean_dec(v___y_5542_);
lean_dec_ref(v___y_5541_);
lean_dec_ref(v_as_5538_);
return v_res_5550_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5(lean_object* v_a_5551_, lean_object* v_as_5552_, lean_object* v_i_5553_, lean_object* v_a_5554_, lean_object* v___y_5555_, lean_object* v___y_5556_, lean_object* v___y_5557_, lean_object* v___y_5558_, lean_object* v___y_5559_, lean_object* v___y_5560_, lean_object* v___y_5561_, lean_object* v___y_5562_){
_start:
{
lean_object* v___x_5564_; 
v___x_5564_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(v_a_5551_, v_as_5552_, v_i_5553_, v___y_5555_, v___y_5556_, v___y_5557_, v___y_5558_, v___y_5559_, v___y_5560_, v___y_5561_, v___y_5562_);
return v___x_5564_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___boxed(lean_object* v_a_5565_, lean_object* v_as_5566_, lean_object* v_i_5567_, lean_object* v_a_5568_, lean_object* v___y_5569_, lean_object* v___y_5570_, lean_object* v___y_5571_, lean_object* v___y_5572_, lean_object* v___y_5573_, lean_object* v___y_5574_, lean_object* v___y_5575_, lean_object* v___y_5576_, lean_object* v___y_5577_){
_start:
{
lean_object* v_res_5578_; 
v_res_5578_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5(v_a_5565_, v_as_5566_, v_i_5567_, v_a_5568_, v___y_5569_, v___y_5570_, v___y_5571_, v___y_5572_, v___y_5573_, v___y_5574_, v___y_5575_, v___y_5576_);
lean_dec(v___y_5576_);
lean_dec_ref(v___y_5575_);
lean_dec(v___y_5574_);
lean_dec_ref(v___y_5573_);
lean_dec(v___y_5572_);
lean_dec_ref(v___y_5571_);
lean_dec(v___y_5570_);
lean_dec_ref(v___y_5569_);
lean_dec_ref(v_as_5566_);
return v_res_5578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1(){
_start:
{
lean_object* v___x_5586_; lean_object* v___x_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; 
v___x_5586_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_5587_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRename___closed__1));
v___x_5588_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1));
v___x_5589_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRename___boxed), 10, 0);
v___x_5590_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5586_, v___x_5587_, v___x_5588_, v___x_5589_);
return v___x_5590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___boxed(lean_object* v_a_5591_){
_start:
{
lean_object* v_res_5592_; 
v_res_5592_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1();
return v_res_5592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3(){
_start:
{
lean_object* v___x_5619_; lean_object* v___x_5620_; lean_object* v___x_5621_; 
v___x_5619_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1));
v___x_5620_ = ((lean_object*)(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__6));
v___x_5621_ = l_Lean_addBuiltinDeclarationRanges(v___x_5619_, v___x_5620_);
return v___x_5621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___boxed(lean_object* v_a_5622_){
_start:
{
lean_object* v_res_5623_; 
v_res_5623_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3();
return v_res_5623_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Constructor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Rename(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ConfigEval(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Hint(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Constructor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Rename(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ConfigEval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig = _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig();
lean_mark_persistent(l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_instEvalExprConstructorConfig);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithImplicit___regBuiltin_Lean_Elab_Tactic_evalWithImplicit__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Constructor(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Rename(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
lean_object* initialize_Lean_Elab_ConfigEval(uint8_t builtin);
lean_object* initialize_Lean_Meta_Hint(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Constructor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Rename(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ConfigEval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_ElabTerm(builtin);
}
#ifdef __cplusplus
}
#endif
