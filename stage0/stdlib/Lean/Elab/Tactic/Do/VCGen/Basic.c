// Lean compiler output
// Module: Lean.Elab.Tactic.Do.VCGen.Basic
// Imports: public import Lean.Elab.Tactic.Simp public import Lean.Elab.Tactic.Do.Attr import Init.Omega import Lean.Elab.ConfigEval
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
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Simp_mkDefaultMethodsCore(lean_object*);
lean_object* l_Lean_Meta_Simp_Methods_toMethodsRefImpl(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instNat;
lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instOption___redArg(lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortTermExceptionId;
uint8_t l_Lean_Expr_hasSorry(lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromLocal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_erase(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_throwInvalidOption___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_addCompletionInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_getRootStr(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_shift(lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_evalBoolItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_checkNotBool(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_ConfigEval_unsupportedExprExceptionId;
lean_object* l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalConfigItem_defaultOnErr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_getSpecTheorems___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_SavedState_restore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveId_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isLocalIdent_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_getSpecSimpTheorems___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkSimpContext(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_num_indices(lean_object*);
lean_object* l_Lean_Meta_getPropHyps(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_isErased(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MetavarContext_findDecl_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setKind___redArg(lean_object*, uint8_t, lean_object*);
uint8_t l_Lean_Elab_Tactic_Do_SpecAttr_isSpecInvariantType(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMData(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Environment_getProjectionStructureName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_mkAppRev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceProj_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "vcgen"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(180, 190, 140, 210, 253, 78, 130, 238)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(212, 104, 229, 54, 179, 197, 12, 87)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(49, 235, 69, 93, 100, 93, 190, 221)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__11_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(89, 242, 56, 182, 153, 42, 114, 203)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__11_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__11_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "VCGen"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__11_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(134, 105, 233, 55, 174, 94, 97, 77)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__14_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Basic"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__14_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__14_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__13_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__14_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(189, 68, 95, 253, 186, 119, 149, 40)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__16_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__15_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(72, 48, 76, 98, 214, 72, 44, 78)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__16_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__16_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__17_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__16_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(33, 75, 207, 246, 76, 246, 41, 61)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__17_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__17_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__18_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__17_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(191, 199, 152, 134, 144, 220, 55, 211)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__18_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__18_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__19_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__18_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(14, 201, 7, 192, 148, 72, 34, 31)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__19_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__19_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__20_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__19_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(22, 45, 74, 93, 100, 247, 195, 97)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__20_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__20_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__21_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__21_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__21_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__22_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__20_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__21_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(251, 79, 2, 134, 178, 227, 219, 79)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__22_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__22_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__23_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__23_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__23_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__24_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__22_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__23_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(222, 89, 143, 116, 220, 103, 214, 162)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__24_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__24_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__25_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__24_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(39, 134, 235, 227, 114, 41, 14, 240)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__25_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__25_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__26_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__25_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(233, 201, 67, 63, 162, 209, 110, 96)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__26_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__26_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__27_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__26_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 127, 236, 20, 208, 60, 55, 183)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__27_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__27_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__28_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__27_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(240, 24, 62, 169, 38, 41, 106, 27)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__28_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__28_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__29_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__28_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(83, 43, 72, 80, 203, 37, 115, 211)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__29_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__29_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__29_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__14_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(140, 159, 252, 240, 92, 57, 206, 59)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__31_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)(((size_t)(540456248) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(139, 232, 253, 244, 224, 124, 180, 190)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__31_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__31_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__33_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__31_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(240, 201, 132, 188, 184, 197, 210, 173)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__33_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__33_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__35_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__33_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(116, 139, 180, 129, 225, 59, 72, 122)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__35_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__35_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__36_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__35_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(205, 187, 211, 38, 21, 229, 65, 67)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__36_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__36_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "split"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(180, 190, 140, 210, 253, 78, 130, 238)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(212, 104, 229, 54, 179, 197, 12, 87)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(49, 235, 69, 93, 100, 93, 190, 221)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 145, 235, 80, 149, 84, 119, 130)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mvcgen"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "warning"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(199, 186, 72, 71, 180, 239, 13, 70)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(161, 197, 164, 82, 155, 28, 143, 213)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 107, .m_capacity = 107, .m_length = 106, .m_data = "this option has no effect; `mvcgen` reports a deprecation warning controlled by `linter.deprecated.syntax`"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "2026-09-23"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "this option has no effect"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__6_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__8_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(217, 19, 39, 228, 182, 81, 226, 63)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(127, 41, 69, 108, 13, 191, 254, 76)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_mvcgen_warning;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_limited_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_limited_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_unlimited_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_unlimited_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_instDecidableEqFuel_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instDecidableEqFuel_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_instDecidableEqFuel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instDecidableEqFuel___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Config"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(58, 70, 17, 154, 2, 122, 181, 174)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 35, 146, 212, 201, 162, 158, 65)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg___boxed(lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Could not evaluate the expression"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__1;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nof type `"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__4_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__6_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__7;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Expression contains `sorry`:"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__2;
static const lean_closure_object l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__0;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "jp"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "leave"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "stepLimit"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(58, 70, 17, 154, 2, 122, 181, 174)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 35, 146, 212, 201, 162, 158, 65)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6_value_aux_5),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(142, 49, 149, 7, 10, 60, 240, 239)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(58, 70, 17, 154, 2, 122, 181, 174)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 35, 146, 212, 201, 162, 158, 65)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7_value_aux_5),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(59, 152, 202, 139, 125, 6, 69, 121)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(58, 70, 17, 154, 2, 122, 181, 174)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 35, 146, 212, 201, 162, 158, 65)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8_value_aux_5),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 227, 227, 137, 253, 205, 47, 249)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(58, 70, 17, 154, 2, 122, 181, 174)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 35, 146, 212, 201, 162, 158, 65)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9_value_aux_5),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 37, 172, 141, 181, 136, 108, 8)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(58, 70, 17, 154, 2, 122, 181, 174)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 35, 146, 212, 201, 162, 158, 65)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10_value_aux_5),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(193, 70, 2, 82, 51, 3, 30, 44)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "config"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__11_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "elimLets"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "errorOnMissingSpec"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "internalize"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__15 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(58, 70, 17, 154, 2, 122, 181, 174)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 35, 146, 212, 201, 162, 158, 65)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16_value_aux_5),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(176, 123, 177, 168, 195, 132, 224, 9)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(58, 70, 17, 154, 2, 122, 181, 174)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 35, 146, 212, 201, 162, 158, 65)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17_value_aux_5),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(10, 226, 168, 6, 221, 105, 122, 19)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(58, 70, 17, 154, 2, 122, 181, 174)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 35, 146, 212, 201, 162, 158, 65)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18_value_aux_5),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(203, 171, 238, 235, 95, 6, 75, 210)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__0_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__12_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(58, 70, 17, 154, 2, 122, 181, 174)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 35, 146, 212, 201, 162, 158, 65)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19_value_aux_5),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(166, 217, 146, 51, 246, 70, 143, 72)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_elabConfig___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_elabConfig___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elabConfig___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabConfig___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabConfig___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabConfig(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_burnOne___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_burnOne___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_burnOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_burnOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ifOutOfFuel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ifOutOfFuel___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ifOutOfFuel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ifOutOfFuel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unknown metavariable "};
static const lean_object* l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0___closed__0 = (const lean_object*)&l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_addSubGoalAsVC(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_addSubGoalAsVC___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_emitVC(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_emitVC___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_liftSimpM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_liftSimpM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_liftSimpM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_liftSimpM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instMonadLiftSimpMVCGenM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instMonadLiftSimpMVCGenM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_instMonadLiftSimpMVCGenM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_instMonadLiftSimpMVCGenM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_instMonadLiftSimpMVCGenM___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_instMonadLiftSimpMVCGenM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Do_instMonadLiftSimpMVCGenM = (const lean_object*)&l_Lean_Elab_Tactic_Do_instMonadLiftSimpMVCGenM___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withJP___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withJP___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withJP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withJP___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Elab_Tactic_Do_knownJP_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Elab_Tactic_Do_knownJP_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_knownJP_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_knownJP_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_knownJP_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_knownJP_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Elab_Tactic_Do_knownJP_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Elab_Tactic_Do_knownJP_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_isDuplicable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Lean_Elab_Tactic_Do_isDuplicable___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_isDuplicable___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_isDuplicable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Elab_Tactic_Do_isDuplicable___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_isDuplicable___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_isDuplicable___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_isDuplicable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_isDuplicable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_isDuplicable___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_isDuplicable___closed__1_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Lean_Elab_Tactic_Do_isDuplicable___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_isDuplicable___closed__2_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_isDuplicable(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_isDuplicable___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__3___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_isJP___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "__do_jp"};
static const lean_object* l_Lean_Elab_Tactic_Do_isJP___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_isJP___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_isJP___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_isJP___closed__0_value),LEAN_SCALAR_PTR_LITERAL(186, 121, 241, 59, 37, 189, 140, 219)}};
static const lean_object* l_Lean_Elab_Tactic_Do_isJP___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_isJP___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_isJP(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_isJP___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_getNumJoinParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "getNumJoinParams: residual joinTy not a forall: "};
static const lean_object* l_Lean_Elab_Tactic_Do_getNumJoinParams___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_getNumJoinParams___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_getNumJoinParams___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_getNumJoinParams___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getNumJoinParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getNumJoinParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_reduceProjBeta_x3f_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Prod"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_reduceProjBeta_x3f_go___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_reduceProjBeta_x3f_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_reduceProjBeta_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_reduceProjBeta_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_reduceProjBeta_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_reduceProjBeta_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpErase"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__2_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(216, 24, 229, 171, 59, 186, 144, 157)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpLemma"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__3_value),LEAN_SCALAR_PTR_LITERAL(38, 215, 101, 250, 181, 108, 118, 102)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpStar"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(125, 38, 251, 225, 228, 173, 11, 37)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Could not resolve spec theorem `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__8;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__9_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 1, 0, 1, 1)}};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__0_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__4_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__6_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "configItem"};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__8_value),LEAN_SCALAR_PTR_LITERAL(205, 9, 236, 192, 59, 252, 178, 140)}};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "posConfigItem"};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__10_value),LEAN_SCALAR_PTR_LITERAL(232, 137, 50, 117, 152, 182, 155, 132)}};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unfoldPartialApp"};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_mkSpecContext___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__14;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__13_value),LEAN_SCALAR_PTR_LITERAL(49, 203, 120, 209, 69, 128, 204, 215)}};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__15_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "negConfigItem"};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__7_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__17_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__17_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__17_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__16_value),LEAN_SCALAR_PTR_LITERAL(196, 29, 29, 161, 247, 206, 181, 221)}};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__17_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__18_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zeta"};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__19_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_mkSpecContext___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__20;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__19_value),LEAN_SCALAR_PTR_LITERAL(56, 247, 87, 81, 188, 35, 250, 148)}};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_mkSpecContext___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__22;
static const lean_string_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__23_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__24_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__25_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_mkSpecContext___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SpecAttr_getSpecSimpTheorems___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__26_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__4;
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__1_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__6;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__7;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__8;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__9;
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__10_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__11_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__12_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__13_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__14;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__15;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__16;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__17;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__18;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__19;
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__20 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__20_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__1___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__21 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__21_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__22;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__23;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__24;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__25;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__26 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__26_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__26_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__27 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__27_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__28;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "adding "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__29 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__29_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__30;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "SpecProof.global "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__31 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__31_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__32;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "SpecProof.local "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__33 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__33_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__34;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "SpecProof.stx _ "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__35 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__35_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__36;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__37 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__37_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__38;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLocalSpecs___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLocalSpecs___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLocalSpecs___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLocalSpecs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_91_; uint8_t v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_91_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_));
v___x_92_ = 0;
v___x_93_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__36_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_));
v___x_94_ = l_Lean_registerTraceClass(v___x_91_, v___x_92_, v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2____boxed(lean_object* v_a_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_();
return v_res_96_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_104_ = lean_unsigned_to_nat(4153898153u);
v___x_105_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__30_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_));
v___x_106_ = l_Lean_Name_num___override(v___x_105_, v___x_104_);
return v___x_106_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__32_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_));
v___x_108_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_);
v___x_109_ = l_Lean_Name_str___override(v___x_108_, v___x_107_);
return v___x_109_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_110_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__34_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_));
v___x_111_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__3_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_);
v___x_112_ = l_Lean_Name_str___override(v___x_111_, v___x_110_);
return v___x_112_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_113_ = lean_unsigned_to_nat(2u);
v___x_114_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_);
v___x_115_ = l_Lean_Name_num___override(v___x_114_, v___x_113_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_117_; uint8_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_117_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__1_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_));
v___x_118_ = 0;
v___x_119_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__5_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_);
v___x_120_ = l_Lean_registerTraceClass(v___x_117_, v___x_118_, v___x_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2____boxed(lean_object* v_a_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_();
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__spec__0(lean_object* v_name_123_, lean_object* v_decl_124_, lean_object* v_ref_125_){
_start:
{
lean_object* v_defValue_127_; lean_object* v_descr_128_; lean_object* v_deprecation_x3f_129_; lean_object* v___x_130_; uint8_t v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v_defValue_127_ = lean_ctor_get(v_decl_124_, 0);
v_descr_128_ = lean_ctor_get(v_decl_124_, 1);
v_deprecation_x3f_129_ = lean_ctor_get(v_decl_124_, 2);
v___x_130_ = lean_alloc_ctor(1, 0, 1);
v___x_131_ = lean_unbox(v_defValue_127_);
lean_ctor_set_uint8(v___x_130_, 0, v___x_131_);
lean_inc(v_deprecation_x3f_129_);
lean_inc_ref(v_descr_128_);
lean_inc_n(v_name_123_, 2);
v___x_132_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_132_, 0, v_name_123_);
lean_ctor_set(v___x_132_, 1, v_ref_125_);
lean_ctor_set(v___x_132_, 2, v___x_130_);
lean_ctor_set(v___x_132_, 3, v_descr_128_);
lean_ctor_set(v___x_132_, 4, v_deprecation_x3f_129_);
v___x_133_ = lean_register_option(v_name_123_, v___x_132_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_141_; 
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_141_ == 0)
{
lean_object* v_unused_142_; 
v_unused_142_ = lean_ctor_get(v___x_133_, 0);
lean_dec(v_unused_142_);
v___x_135_ = v___x_133_;
v_isShared_136_ = v_isSharedCheck_141_;
goto v_resetjp_134_;
}
else
{
lean_dec(v___x_133_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_141_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; lean_object* v___x_139_; 
lean_inc(v_defValue_127_);
v___x_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_137_, 0, v_name_123_);
lean_ctor_set(v___x_137_, 1, v_defValue_127_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 0, v___x_137_);
v___x_139_ = v___x_135_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_137_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_150_; 
lean_dec(v_name_123_);
v_a_143_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_150_ == 0)
{
v___x_145_ = v___x_133_;
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_133_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_143_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_151_, lean_object* v_decl_152_, lean_object* v_ref_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__spec__0(v_name_151_, v_decl_152_, v_ref_153_);
lean_dec_ref(v_decl_152_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_185_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__2_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_));
v___x_186_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__9_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_));
v___x_187_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__10_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_));
v___x_188_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4__spec__0(v___x_185_, v___x_186_, v___x_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4____boxed(lean_object* v_a_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_();
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_ctorIdx___impl(lean_object* v_x_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lean_obj_tag_nat(v_x_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_ctorIdx___impl___boxed(lean_object* v_x_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lean_Elab_Tactic_Do_Fuel_ctorIdx___impl(v_x_193_);
lean_dec(v_x_193_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_ctorElim___redArg(lean_object* v_t_195_, lean_object* v_k_196_){
_start:
{
if (lean_obj_tag(v_t_195_) == 0)
{
lean_object* v_n_197_; lean_object* v___x_198_; 
v_n_197_ = lean_ctor_get(v_t_195_, 0);
lean_inc(v_n_197_);
lean_dec_ref_known(v_t_195_, 1);
v___x_198_ = lean_apply_1(v_k_196_, v_n_197_);
return v___x_198_;
}
else
{
return v_k_196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_ctorElim(lean_object* v_motive_199_, lean_object* v_ctorIdx_200_, lean_object* v_t_201_, lean_object* v_h_202_, lean_object* v_k_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Lean_Elab_Tactic_Do_Fuel_ctorElim___redArg(v_t_201_, v_k_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_ctorElim___boxed(lean_object* v_motive_205_, lean_object* v_ctorIdx_206_, lean_object* v_t_207_, lean_object* v_h_208_, lean_object* v_k_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_Elab_Tactic_Do_Fuel_ctorElim(v_motive_205_, v_ctorIdx_206_, v_t_207_, v_h_208_, v_k_209_);
lean_dec(v_ctorIdx_206_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_limited_elim___redArg(lean_object* v_t_211_, lean_object* v_limited_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_Elab_Tactic_Do_Fuel_ctorElim___redArg(v_t_211_, v_limited_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_limited_elim(lean_object* v_motive_214_, lean_object* v_t_215_, lean_object* v_h_216_, lean_object* v_limited_217_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = l_Lean_Elab_Tactic_Do_Fuel_ctorElim___redArg(v_t_215_, v_limited_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_unlimited_elim___redArg(lean_object* v_t_219_, lean_object* v_unlimited_220_){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = l_Lean_Elab_Tactic_Do_Fuel_ctorElim___redArg(v_t_219_, v_unlimited_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Fuel_unlimited_elim(lean_object* v_motive_222_, lean_object* v_t_223_, lean_object* v_h_224_, lean_object* v_unlimited_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Lean_Elab_Tactic_Do_Fuel_ctorElim___redArg(v_t_223_, v_unlimited_225_);
return v___x_226_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_instDecidableEqFuel_decEq(lean_object* v_x_227_, lean_object* v_x_228_){
_start:
{
if (lean_obj_tag(v_x_227_) == 0)
{
if (lean_obj_tag(v_x_228_) == 0)
{
lean_object* v_n_229_; lean_object* v_n_230_; uint8_t v___x_231_; 
v_n_229_ = lean_ctor_get(v_x_227_, 0);
v_n_230_ = lean_ctor_get(v_x_228_, 0);
v___x_231_ = lean_nat_dec_eq(v_n_229_, v_n_230_);
return v___x_231_;
}
else
{
uint8_t v___x_232_; 
v___x_232_ = 0;
return v___x_232_;
}
}
else
{
if (lean_obj_tag(v_x_228_) == 0)
{
uint8_t v___x_233_; 
v___x_233_ = 0;
return v___x_233_;
}
else
{
uint8_t v___x_234_; 
v___x_234_ = 1;
return v___x_234_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instDecidableEqFuel_decEq___boxed(lean_object* v_x_235_, lean_object* v_x_236_){
_start:
{
uint8_t v_res_237_; lean_object* v_r_238_; 
v_res_237_ = l_Lean_Elab_Tactic_Do_instDecidableEqFuel_decEq(v_x_235_, v_x_236_);
lean_dec(v_x_236_);
lean_dec(v_x_235_);
v_r_238_ = lean_box(v_res_237_);
return v_r_238_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_instDecidableEqFuel(lean_object* v_x_239_, lean_object* v_x_240_){
_start:
{
uint8_t v___x_241_; 
v___x_241_ = l_Lean_Elab_Tactic_Do_instDecidableEqFuel_decEq(v_x_239_, v_x_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instDecidableEqFuel___boxed(lean_object* v_x_242_, lean_object* v_x_243_){
_start:
{
uint8_t v_res_244_; lean_object* v_r_245_; 
v_res_244_ = l_Lean_Elab_Tactic_Do_instDecidableEqFuel(v_x_242_, v_x_243_);
lean_dec(v_x_243_);
lean_dec(v_x_242_);
v_r_245_ = lean_box(v_res_244_);
return v_r_245_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_246_ = lean_box(0);
v___x_247_ = l_Lean_Elab_ConfigEval_unsupportedExprExceptionId;
v___x_248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
lean_ctor_set(v___x_248_, 1, v___x_246_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___redArg(){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lean_obj_once(&l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___redArg___closed__0, &l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___redArg___closed__0);
v___x_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___redArg___boxed(lean_object* v___y_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___redArg();
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0(lean_object* v_00_u03b1_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___redArg();
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___boxed(lean_object* v_00_u03b1_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0(v_00_u03b1_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
lean_dec(v___y_263_);
lean_dec_ref(v___y_262_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1_spec__1(lean_object* v_msgData_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_){
_start:
{
lean_object* v___x_274_; lean_object* v_env_275_; uint8_t v___x_276_; lean_object* v_env_277_; lean_object* v___x_278_; lean_object* v_toCold_279_; lean_object* v_mctx_280_; lean_object* v_lctx_281_; lean_object* v_options_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_274_ = lean_st_ref_get(v___y_272_);
v_env_275_ = lean_ctor_get(v___x_274_, 0);
lean_inc_ref(v_env_275_);
lean_dec(v___x_274_);
v___x_276_ = 0;
v_env_277_ = l_Lean_Environment_setRecordingDeps(v_env_275_, v___x_276_);
v___x_278_ = lean_st_ref_get(v___y_270_);
v_toCold_279_ = lean_ctor_get(v___y_271_, 0);
v_mctx_280_ = lean_ctor_get(v___x_278_, 0);
lean_inc_ref(v_mctx_280_);
lean_dec(v___x_278_);
v_lctx_281_ = lean_ctor_get(v___y_269_, 2);
v_options_282_ = lean_ctor_get(v_toCold_279_, 2);
lean_inc_ref(v_options_282_);
lean_inc_ref(v_lctx_281_);
v___x_283_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_283_, 0, v_env_277_);
lean_ctor_set(v___x_283_, 1, v_mctx_280_);
lean_ctor_set(v___x_283_, 2, v_lctx_281_);
lean_ctor_set(v___x_283_, 3, v_options_282_);
v___x_284_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set(v___x_284_, 1, v_msgData_268_);
v___x_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1_spec__1___boxed(lean_object* v_msgData_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1_spec__1(v_msgData_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1___redArg(lean_object* v_msg_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v_ref_299_; lean_object* v___x_300_; lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_309_; 
v_ref_299_ = lean_ctor_get(v___y_296_, 2);
v___x_300_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1_spec__1(v_msg_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
v_a_301_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_309_ == 0)
{
v___x_303_ = v___x_300_;
v_isShared_304_ = v_isSharedCheck_309_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_300_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_309_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_305_; lean_object* v___x_307_; 
lean_inc(v_ref_299_);
v___x_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_305_, 0, v_ref_299_);
lean_ctor_set(v___x_305_, 1, v_a_301_);
if (v_isShared_304_ == 0)
{
lean_ctor_set_tag(v___x_303_, 1);
lean_ctor_set(v___x_303_, 0, v___x_305_);
v___x_307_ = v___x_303_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___x_305_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1___redArg___boxed(lean_object* v_msg_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1___redArg(v_msg_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
lean_dec(v___y_312_);
lean_dec_ref(v___y_311_);
return v_res_316_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_319_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___closed__1));
v___x_320_ = l_Lean_stringToMessageData(v___x_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0(lean_object* v___x_321_, lean_object* v___x_322_, lean_object* v_ctor_323_, lean_object* v_args_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_456_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___closed__0));
v___x_457_ = lean_string_dec_eq(v_ctor_323_, v___x_456_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; 
lean_dec_ref(v___x_322_);
v___x_458_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__0___redArg();
return v___x_458_;
}
else
{
lean_object* v___x_459_; lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_459_ = lean_array_get_size(v_args_324_);
v___x_460_ = lean_unsigned_to_nat(9u);
v___x_461_ = lean_nat_dec_eq(v___x_459_, v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
lean_dec_ref(v___x_322_);
v___x_462_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___closed__2, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___closed__2);
v___x_463_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1___redArg(v___x_462_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
v_a_464_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_463_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_463_);
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
else
{
goto v___jp_330_;
}
}
v___jp_330_:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_331_ = lean_unsigned_to_nat(0u);
v___x_332_ = lean_array_get_borrowed(v___x_321_, v_args_324_, v___x_331_);
lean_inc(v___x_332_);
v___x_333_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_332_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_a_334_);
lean_dec_ref_known(v___x_333_, 1);
v___x_335_ = lean_unsigned_to_nat(1u);
v___x_336_ = lean_array_get_borrowed(v___x_321_, v_args_324_, v___x_335_);
lean_inc(v___x_336_);
v___x_337_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_336_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
lean_inc(v_a_338_);
lean_dec_ref_known(v___x_337_, 1);
v___x_339_ = lean_unsigned_to_nat(2u);
v___x_340_ = lean_array_get_borrowed(v___x_321_, v_args_324_, v___x_339_);
lean_inc(v___x_340_);
v___x_341_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_340_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
if (lean_obj_tag(v___x_341_) == 0)
{
lean_object* v_a_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_a_342_ = lean_ctor_get(v___x_341_, 0);
lean_inc(v_a_342_);
lean_dec_ref_known(v___x_341_, 1);
v___x_343_ = lean_unsigned_to_nat(3u);
v___x_344_ = lean_array_get_borrowed(v___x_321_, v_args_324_, v___x_343_);
lean_inc(v___x_344_);
v___x_345_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_344_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; lean_object* v_evalExpr_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc(v_a_346_);
lean_dec_ref_known(v___x_345_, 1);
v_evalExpr_347_ = lean_ctor_get(v___x_322_, 0);
lean_inc_ref(v_evalExpr_347_);
lean_dec_ref(v___x_322_);
v___x_348_ = lean_unsigned_to_nat(4u);
v___x_349_ = lean_array_get_borrowed(v___x_321_, v_args_324_, v___x_348_);
lean_inc(v___y_328_);
lean_inc_ref(v___y_327_);
lean_inc(v___y_326_);
lean_inc_ref(v___y_325_);
lean_inc(v___x_349_);
v___x_350_ = lean_apply_6(v_evalExpr_347_, v___x_349_, v___y_325_, v___y_326_, v___y_327_, v___y_328_, lean_box(0));
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v_a_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v_a_351_ = lean_ctor_get(v___x_350_, 0);
lean_inc(v_a_351_);
lean_dec_ref_known(v___x_350_, 1);
v___x_352_ = lean_unsigned_to_nat(5u);
v___x_353_ = lean_array_get_borrowed(v___x_321_, v_args_324_, v___x_352_);
lean_inc(v___x_353_);
v___x_354_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_353_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_a_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v_a_355_ = lean_ctor_get(v___x_354_, 0);
lean_inc(v_a_355_);
lean_dec_ref_known(v___x_354_, 1);
v___x_356_ = lean_unsigned_to_nat(6u);
v___x_357_ = lean_array_get_borrowed(v___x_321_, v_args_324_, v___x_356_);
lean_inc(v___x_357_);
v___x_358_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_357_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
if (lean_obj_tag(v___x_358_) == 0)
{
lean_object* v_a_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v_a_359_ = lean_ctor_get(v___x_358_, 0);
lean_inc(v_a_359_);
lean_dec_ref_known(v___x_358_, 1);
v___x_360_ = lean_unsigned_to_nat(7u);
v___x_361_ = lean_array_get_borrowed(v___x_321_, v_args_324_, v___x_360_);
lean_inc(v___x_361_);
v___x_362_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_361_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v_a_363_ = lean_ctor_get(v___x_362_, 0);
lean_inc(v_a_363_);
lean_dec_ref_known(v___x_362_, 1);
v___x_364_ = lean_unsigned_to_nat(8u);
v___x_365_ = lean_array_get_borrowed(v___x_321_, v_args_324_, v___x_364_);
lean_inc(v___x_365_);
v___x_366_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_365_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_383_; 
v_a_367_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_383_ == 0)
{
v___x_369_ = v___x_366_;
v_isShared_370_ = v_isSharedCheck_383_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_366_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_383_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_371_; uint8_t v___x_372_; uint8_t v___x_373_; uint8_t v___x_374_; uint8_t v___x_375_; uint8_t v___x_376_; uint8_t v___x_377_; uint8_t v___x_378_; uint8_t v___x_379_; lean_object* v___x_381_; 
v___x_371_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_371_, 0, v_a_351_);
v___x_372_ = lean_unbox(v_a_334_);
lean_dec(v_a_334_);
lean_ctor_set_uint8(v___x_371_, sizeof(void*)*1, v___x_372_);
v___x_373_ = lean_unbox(v_a_338_);
lean_dec(v_a_338_);
lean_ctor_set_uint8(v___x_371_, sizeof(void*)*1 + 1, v___x_373_);
v___x_374_ = lean_unbox(v_a_342_);
lean_dec(v_a_342_);
lean_ctor_set_uint8(v___x_371_, sizeof(void*)*1 + 2, v___x_374_);
v___x_375_ = lean_unbox(v_a_346_);
lean_dec(v_a_346_);
lean_ctor_set_uint8(v___x_371_, sizeof(void*)*1 + 3, v___x_375_);
v___x_376_ = lean_unbox(v_a_355_);
lean_dec(v_a_355_);
lean_ctor_set_uint8(v___x_371_, sizeof(void*)*1 + 4, v___x_376_);
v___x_377_ = lean_unbox(v_a_359_);
lean_dec(v_a_359_);
lean_ctor_set_uint8(v___x_371_, sizeof(void*)*1 + 5, v___x_377_);
v___x_378_ = lean_unbox(v_a_363_);
lean_dec(v_a_363_);
lean_ctor_set_uint8(v___x_371_, sizeof(void*)*1 + 6, v___x_378_);
v___x_379_ = lean_unbox(v_a_367_);
lean_dec(v_a_367_);
lean_ctor_set_uint8(v___x_371_, sizeof(void*)*1 + 7, v___x_379_);
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 0, v___x_371_);
v___x_381_ = v___x_369_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_371_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
else
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
lean_dec(v_a_363_);
lean_dec(v_a_359_);
lean_dec(v_a_355_);
lean_dec(v_a_351_);
lean_dec(v_a_346_);
lean_dec(v_a_342_);
lean_dec(v_a_338_);
lean_dec(v_a_334_);
v_a_384_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_366_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_366_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
else
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
lean_dec(v_a_359_);
lean_dec(v_a_355_);
lean_dec(v_a_351_);
lean_dec(v_a_346_);
lean_dec(v_a_342_);
lean_dec(v_a_338_);
lean_dec(v_a_334_);
v_a_392_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___x_362_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_362_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_392_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
else
{
lean_object* v_a_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_407_; 
lean_dec(v_a_355_);
lean_dec(v_a_351_);
lean_dec(v_a_346_);
lean_dec(v_a_342_);
lean_dec(v_a_338_);
lean_dec(v_a_334_);
v_a_400_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_407_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_407_ == 0)
{
v___x_402_ = v___x_358_;
v_isShared_403_ = v_isSharedCheck_407_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_a_400_);
lean_dec(v___x_358_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_407_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___x_405_; 
if (v_isShared_403_ == 0)
{
v___x_405_ = v___x_402_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v_a_400_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
}
}
else
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_415_; 
lean_dec(v_a_351_);
lean_dec(v_a_346_);
lean_dec(v_a_342_);
lean_dec(v_a_338_);
lean_dec(v_a_334_);
v_a_408_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_415_ == 0)
{
v___x_410_ = v___x_354_;
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_354_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_413_; 
if (v_isShared_411_ == 0)
{
v___x_413_ = v___x_410_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_a_408_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
}
else
{
lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_423_; 
lean_dec(v_a_346_);
lean_dec(v_a_342_);
lean_dec(v_a_338_);
lean_dec(v_a_334_);
v_a_416_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_423_ == 0)
{
v___x_418_ = v___x_350_;
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_350_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_421_; 
if (v_isShared_419_ == 0)
{
v___x_421_ = v___x_418_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_a_416_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
}
else
{
lean_object* v_a_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_431_; 
lean_dec(v_a_342_);
lean_dec(v_a_338_);
lean_dec(v_a_334_);
lean_dec_ref(v___x_322_);
v_a_424_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_431_ == 0)
{
v___x_426_ = v___x_345_;
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_a_424_);
lean_dec(v___x_345_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_429_; 
if (v_isShared_427_ == 0)
{
v___x_429_ = v___x_426_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_a_424_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
lean_dec(v_a_338_);
lean_dec(v_a_334_);
lean_dec_ref(v___x_322_);
v_a_432_ = lean_ctor_get(v___x_341_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_341_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_341_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_432_);
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
lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
lean_dec(v_a_334_);
lean_dec_ref(v___x_322_);
v_a_440_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_447_ == 0)
{
v___x_442_ = v___x_337_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_dec(v___x_337_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_443_ == 0)
{
v___x_445_ = v___x_442_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_a_440_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
lean_dec_ref(v___x_322_);
v_a_448_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_333_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_333_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___boxed(lean_object* v___x_472_, lean_object* v___x_473_, lean_object* v_ctor_474_, lean_object* v_args_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0(v___x_472_, v___x_473_, v_ctor_474_, v_args_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
lean_dec_ref(v_args_475_);
lean_dec_ref(v_ctor_474_);
lean_dec_ref(v___x_472_);
return v_res_481_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__0(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = l_Lean_Elab_ConfigEval_EvalExpr_instNat;
v___x_483_ = l_Lean_Elab_ConfigEval_EvalExpr_instOption___redArg(v___x_482_);
return v___x_483_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__1(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___f_486_; 
v___x_484_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__0, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__0);
v___x_485_ = l_Lean_instInhabitedExpr;
v___f_486_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___lam__0___boxed), 9, 2);
lean_closure_set(v___f_486_, 0, v___x_485_);
lean_closure_set(v___f_486_, 1, v___x_484_);
return v___f_486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr(lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_){
_start:
{
lean_object* v___f_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___f_501_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__1, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__1);
v___x_502_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3));
v___x_503_ = l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(v___x_502_, v___f_501_, v_a_495_, v_a_496_, v_a_497_, v_a_498_, v_a_499_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___boxed(lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr(v_a_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_);
lean_dec(v_a_508_);
lean_dec_ref(v_a_507_);
lean_dec(v_a_506_);
lean_dec_ref(v_a_505_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1(lean_object* v_00_u03b1_511_, lean_object* v_msg_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1___redArg(v_msg_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1___boxed(lean_object* v_00_u03b1_519_, lean_object* v_msg_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1(v_00_u03b1_519_, v_msg_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
return v_res_526_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__1(void){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_528_ = lean_box(0);
v___x_529_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3));
v___x_530_ = l_Lean_Expr_const___override(v___x_529_, v___x_528_);
return v___x_530_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__2(void){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__1, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__1);
v___x_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
return v___x_532_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__3(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_533_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__2, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__2);
v___x_534_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__0));
v___x_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
lean_ctor_set(v___x_535_, 1, v___x_533_);
return v___x_535_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig(void){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__3, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__3);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__2___redArg(lean_object* v_e_537_, lean_object* v___y_538_){
_start:
{
uint8_t v___x_540_; 
v___x_540_ = l_Lean_Expr_hasMVar(v_e_537_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; 
v___x_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_541_, 0, v_e_537_);
return v___x_541_;
}
else
{
lean_object* v___x_542_; lean_object* v_mctx_543_; lean_object* v___x_544_; lean_object* v_fst_545_; lean_object* v_snd_546_; lean_object* v___x_547_; lean_object* v_cache_548_; lean_object* v_zetaDeltaFVarIds_549_; lean_object* v_postponed_550_; lean_object* v_diag_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_560_; 
v___x_542_ = lean_st_ref_get(v___y_538_);
v_mctx_543_ = lean_ctor_get(v___x_542_, 0);
lean_inc_ref(v_mctx_543_);
lean_dec(v___x_542_);
v___x_544_ = l_Lean_instantiateMVarsCore(v_mctx_543_, v_e_537_);
v_fst_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_fst_545_);
v_snd_546_ = lean_ctor_get(v___x_544_, 1);
lean_inc(v_snd_546_);
lean_dec_ref(v___x_544_);
v___x_547_ = lean_st_ref_take(v___y_538_);
v_cache_548_ = lean_ctor_get(v___x_547_, 1);
v_zetaDeltaFVarIds_549_ = lean_ctor_get(v___x_547_, 2);
v_postponed_550_ = lean_ctor_get(v___x_547_, 3);
v_diag_551_ = lean_ctor_get(v___x_547_, 4);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_547_);
if (v_isSharedCheck_560_ == 0)
{
lean_object* v_unused_561_; 
v_unused_561_ = lean_ctor_get(v___x_547_, 0);
lean_dec(v_unused_561_);
v___x_553_ = v___x_547_;
v_isShared_554_ = v_isSharedCheck_560_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_diag_551_);
lean_inc(v_postponed_550_);
lean_inc(v_zetaDeltaFVarIds_549_);
lean_inc(v_cache_548_);
lean_dec(v___x_547_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_560_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 0, v_snd_546_);
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_snd_546_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_cache_548_);
lean_ctor_set(v_reuseFailAlloc_559_, 2, v_zetaDeltaFVarIds_549_);
lean_ctor_set(v_reuseFailAlloc_559_, 3, v_postponed_550_);
lean_ctor_set(v_reuseFailAlloc_559_, 4, v_diag_551_);
v___x_556_ = v_reuseFailAlloc_559_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_557_ = lean_st_ref_put(v___y_538_, v___x_556_);
v___x_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_558_, 0, v_fst_545_);
return v___x_558_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__2___redArg___boxed(lean_object* v_e_562_, lean_object* v___y_563_, lean_object* v___y_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__2___redArg(v_e_562_, v___y_563_);
lean_dec(v___y_563_);
return v_res_565_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_566_ = lean_box(0);
v___x_567_ = l_Lean_Elab_abortTermExceptionId;
v___x_568_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
lean_ctor_set(v___x_568_, 1, v___x_566_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg(){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = lean_obj_once(&l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0, &l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0);
v___x_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg___boxed(lean_object* v___y_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg();
return v_res_573_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = lean_box(1);
v___x_575_ = l_Lean_MessageData_ofFormat(v___x_574_);
return v___x_575_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3(void){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__2));
v___x_580_ = l_Lean_MessageData_ofFormat(v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7(lean_object* v_x_581_, lean_object* v_x_582_){
_start:
{
if (lean_obj_tag(v_x_582_) == 0)
{
return v_x_581_;
}
else
{
lean_object* v_head_583_; lean_object* v_tail_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_606_; 
v_head_583_ = lean_ctor_get(v_x_582_, 0);
v_tail_584_ = lean_ctor_get(v_x_582_, 1);
v_isSharedCheck_606_ = !lean_is_exclusive(v_x_582_);
if (v_isSharedCheck_606_ == 0)
{
v___x_586_ = v_x_582_;
v_isShared_587_ = v_isSharedCheck_606_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_tail_584_);
lean_inc(v_head_583_);
lean_dec(v_x_582_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_606_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v_before_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_604_; 
v_before_588_ = lean_ctor_get(v_head_583_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v_head_583_);
if (v_isSharedCheck_604_ == 0)
{
lean_object* v_unused_605_; 
v_unused_605_ = lean_ctor_get(v_head_583_, 1);
lean_dec(v_unused_605_);
v___x_590_ = v_head_583_;
v_isShared_591_ = v_isSharedCheck_604_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_before_588_);
lean_dec(v_head_583_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_604_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_592_; lean_object* v___x_594_; 
v___x_592_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0);
if (v_isShared_591_ == 0)
{
lean_ctor_set_tag(v___x_590_, 7);
lean_ctor_set(v___x_590_, 1, v___x_592_);
lean_ctor_set(v___x_590_, 0, v_x_581_);
v___x_594_ = v___x_590_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_x_581_);
lean_ctor_set(v_reuseFailAlloc_603_, 1, v___x_592_);
v___x_594_ = v_reuseFailAlloc_603_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
lean_object* v___x_595_; lean_object* v___x_597_; 
v___x_595_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3);
if (v_isShared_587_ == 0)
{
lean_ctor_set_tag(v___x_586_, 7);
lean_ctor_set(v___x_586_, 1, v___x_595_);
lean_ctor_set(v___x_586_, 0, v___x_594_);
v___x_597_ = v___x_586_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v___x_594_);
lean_ctor_set(v_reuseFailAlloc_602_, 1, v___x_595_);
v___x_597_ = v_reuseFailAlloc_602_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_598_ = l_Lean_MessageData_ofSyntax(v_before_588_);
v___x_599_ = l_Lean_indentD(v___x_598_);
v___x_600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_600_, 0, v___x_597_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
v_x_581_ = v___x_600_;
v_x_582_ = v_tail_584_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(lean_object* v_opts_607_, lean_object* v_opt_608_){
_start:
{
lean_object* v_name_609_; lean_object* v_defValue_610_; lean_object* v_map_611_; lean_object* v___x_612_; 
v_name_609_ = lean_ctor_get(v_opt_608_, 0);
v_defValue_610_ = lean_ctor_get(v_opt_608_, 1);
v_map_611_ = lean_ctor_get(v_opts_607_, 0);
v___x_612_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_611_, v_name_609_);
if (lean_obj_tag(v___x_612_) == 0)
{
uint8_t v___x_613_; 
v___x_613_ = lean_unbox(v_defValue_610_);
return v___x_613_;
}
else
{
lean_object* v_val_614_; 
v_val_614_ = lean_ctor_get(v___x_612_, 0);
lean_inc(v_val_614_);
lean_dec_ref_known(v___x_612_, 1);
if (lean_obj_tag(v_val_614_) == 1)
{
uint8_t v_v_615_; 
v_v_615_ = lean_ctor_get_uint8(v_val_614_, 0);
lean_dec_ref_known(v_val_614_, 0);
return v_v_615_;
}
else
{
uint8_t v___x_616_; 
lean_dec(v_val_614_);
v___x_616_ = lean_unbox(v_defValue_610_);
return v___x_616_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6___boxed(lean_object* v_opts_617_, lean_object* v_opt_618_){
_start:
{
uint8_t v_res_619_; lean_object* v_r_620_; 
v_res_619_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(v_opts_617_, v_opt_618_);
lean_dec_ref(v_opt_618_);
lean_dec_ref(v_opts_617_);
v_r_620_ = lean_box(v_res_619_);
return v_r_620_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__1));
v___x_625_ = l_Lean_MessageData_ofFormat(v___x_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(lean_object* v_msgData_626_, lean_object* v_macroStack_627_, lean_object* v___y_628_){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; uint8_t v___x_632_; 
v___x_630_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_628_);
v___x_631_ = l_Lean_Elab_pp_macroStack;
v___x_632_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(v___x_630_, v___x_631_);
lean_dec_ref(v___x_630_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; 
lean_dec(v_macroStack_627_);
v___x_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_633_, 0, v_msgData_626_);
return v___x_633_;
}
else
{
if (lean_obj_tag(v_macroStack_627_) == 0)
{
lean_object* v___x_634_; 
v___x_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_634_, 0, v_msgData_626_);
return v___x_634_;
}
else
{
lean_object* v_head_635_; lean_object* v_after_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_651_; 
v_head_635_ = lean_ctor_get(v_macroStack_627_, 0);
lean_inc(v_head_635_);
v_after_636_ = lean_ctor_get(v_head_635_, 1);
v_isSharedCheck_651_ = !lean_is_exclusive(v_head_635_);
if (v_isSharedCheck_651_ == 0)
{
lean_object* v_unused_652_; 
v_unused_652_ = lean_ctor_get(v_head_635_, 0);
lean_dec(v_unused_652_);
v___x_638_ = v_head_635_;
v_isShared_639_ = v_isSharedCheck_651_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_after_636_);
lean_dec(v_head_635_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_651_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_640_; lean_object* v___x_642_; 
v___x_640_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0);
if (v_isShared_639_ == 0)
{
lean_ctor_set_tag(v___x_638_, 7);
lean_ctor_set(v___x_638_, 1, v___x_640_);
lean_ctor_set(v___x_638_, 0, v_msgData_626_);
v___x_642_ = v___x_638_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_msgData_626_);
lean_ctor_set(v_reuseFailAlloc_650_, 1, v___x_640_);
v___x_642_ = v_reuseFailAlloc_650_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v_msgData_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_643_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2);
v___x_644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_642_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v___x_645_ = l_Lean_MessageData_ofSyntax(v_after_636_);
v___x_646_ = l_Lean_indentD(v___x_645_);
v_msgData_647_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_647_, 0, v___x_644_);
lean_ctor_set(v_msgData_647_, 1, v___x_646_);
v___x_648_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7(v_msgData_647_, v_macroStack_627_);
v___x_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_649_, 0, v___x_648_);
return v___x_649_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_msgData_653_, lean_object* v_macroStack_654_, lean_object* v___y_655_, lean_object* v___y_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(v_msgData_653_, v_macroStack_654_, v___y_655_);
lean_dec_ref(v___y_655_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3___redArg(lean_object* v_msg_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_ref_666_; lean_object* v_macroStack_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v_a_670_; lean_object* v___x_671_; lean_object* v_a_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_680_; 
v_ref_666_ = lean_ctor_get(v___y_663_, 2);
v_macroStack_667_ = lean_ctor_get(v___y_659_, 1);
v___x_668_ = l_Lean_Elab_getBetterRef(v_ref_666_, v_macroStack_667_);
v___x_669_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1_spec__1(v_msg_658_, v___y_661_, v___y_662_, v___y_663_, v___y_664_);
v_a_670_ = lean_ctor_get(v___x_669_, 0);
lean_inc(v_a_670_);
lean_dec_ref(v___x_669_);
lean_inc(v_macroStack_667_);
v___x_671_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(v_a_670_, v_macroStack_667_, v___y_663_);
v_a_672_ = lean_ctor_get(v___x_671_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_680_ == 0)
{
v___x_674_ = v___x_671_;
v_isShared_675_ = v_isSharedCheck_680_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_a_672_);
lean_dec(v___x_671_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_680_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_676_; lean_object* v___x_678_; 
v___x_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_676_, 0, v___x_668_);
lean_ctor_set(v___x_676_, 1, v_a_672_);
if (v_isShared_675_ == 0)
{
lean_ctor_set_tag(v___x_674_, 1);
lean_ctor_set(v___x_674_, 0, v___x_676_);
v___x_678_ = v___x_674_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v___x_676_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3___redArg___boxed(lean_object* v_msg_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3___redArg(v_msg_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_);
lean_dec(v___y_687_);
lean_dec_ref(v___y_686_);
lean_dec(v___y_685_);
lean_dec_ref(v___y_684_);
lean_dec(v___y_683_);
lean_dec_ref(v___y_682_);
return v_res_689_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__0));
v___x_692_ = l_Lean_stringToMessageData(v___x_691_);
return v___x_692_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__2));
v___x_695_ = l_Lean_stringToMessageData(v___x_694_);
return v___x_695_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_697_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__4));
v___x_698_ = l_Lean_stringToMessageData(v___x_697_);
return v___x_698_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__7(void){
_start:
{
lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_700_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__6));
v___x_701_ = l_Lean_stringToMessageData(v___x_700_);
return v___x_701_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__8));
v___x_704_ = l_Lean_stringToMessageData(v___x_703_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0(lean_object* v_stx_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_){
_start:
{
lean_object* v___x_713_; lean_object* v_evalExpr_714_; lean_object* v_expectedType_x3f_715_; uint8_t v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v_toCold_721_; lean_object* v_currRecDepth_722_; lean_object* v_ref_723_; uint16_t v_optionFlags_724_; uint8_t v_suppressElabErrors_725_; uint8_t v_checkDeprecated_726_; uint8_t v_isRecordingDeps_727_; uint8_t v___x_728_; lean_object* v_ref_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_713_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__0, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__0);
v_evalExpr_714_ = lean_ctor_get(v___x_713_, 0);
v_expectedType_x3f_715_ = lean_ctor_get(v___x_713_, 1);
v___x_716_ = 1;
v___x_717_ = lean_box(0);
v___x_718_ = lean_box(v___x_716_);
v___x_719_ = lean_box(v___x_716_);
lean_inc(v_expectedType_x3f_715_);
lean_inc(v_stx_705_);
v___x_720_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermEnsuringType___boxed), 12, 5);
lean_closure_set(v___x_720_, 0, v_stx_705_);
lean_closure_set(v___x_720_, 1, v_expectedType_x3f_715_);
lean_closure_set(v___x_720_, 2, v___x_718_);
lean_closure_set(v___x_720_, 3, v___x_719_);
lean_closure_set(v___x_720_, 4, v___x_717_);
v_toCold_721_ = lean_ctor_get(v_a_710_, 0);
v_currRecDepth_722_ = lean_ctor_get(v_a_710_, 1);
v_ref_723_ = lean_ctor_get(v_a_710_, 2);
v_optionFlags_724_ = lean_ctor_get_uint16(v_a_710_, sizeof(void*)*3);
v_suppressElabErrors_725_ = lean_ctor_get_uint8(v_a_710_, sizeof(void*)*3 + 2);
v_checkDeprecated_726_ = lean_ctor_get_uint8(v_a_710_, sizeof(void*)*3 + 3);
v_isRecordingDeps_727_ = lean_ctor_get_uint8(v_a_710_, sizeof(void*)*3 + 4);
v___x_728_ = 1;
v_ref_729_ = l_Lean_replaceRef(v_stx_705_, v_ref_723_);
lean_dec(v_stx_705_);
lean_inc(v_currRecDepth_722_);
lean_inc_ref(v_toCold_721_);
v___x_730_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_730_, 0, v_toCold_721_);
lean_ctor_set(v___x_730_, 1, v_currRecDepth_722_);
lean_ctor_set(v___x_730_, 2, v_ref_729_);
lean_ctor_set_uint16(v___x_730_, sizeof(void*)*3, v_optionFlags_724_);
lean_ctor_set_uint8(v___x_730_, sizeof(void*)*3 + 2, v_suppressElabErrors_725_);
lean_ctor_set_uint8(v___x_730_, sizeof(void*)*3 + 3, v_checkDeprecated_726_);
lean_ctor_set_uint8(v___x_730_, sizeof(void*)*3 + 4, v_isRecordingDeps_727_);
v___x_731_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_720_, v___x_728_, v_a_706_, v_a_707_, v_a_708_, v_a_709_, v___x_730_, v_a_711_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___x_733_; lean_object* v_a_734_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_749_; lean_object* v___y_750_; lean_object* v___y_751_; lean_object* v___y_752_; lean_object* v___y_753_; lean_object* v___y_754_; lean_object* v___y_777_; lean_object* v___y_778_; lean_object* v___y_779_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; lean_object* v___y_814_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v___y_818_; lean_object* v___y_819_; uint8_t v___x_832_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc(v_a_732_);
lean_dec_ref_known(v___x_731_, 1);
v___x_733_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__2___redArg(v_a_732_, v_a_709_);
v_a_734_ = lean_ctor_get(v___x_733_, 0);
lean_inc(v_a_734_);
lean_dec_ref(v___x_733_);
v___x_832_ = l_Lean_Expr_hasSorry(v_a_734_);
if (v___x_832_ == 0)
{
v___y_777_ = v_a_706_;
v___y_778_ = v_a_707_;
v___y_779_ = v_a_708_;
v___y_780_ = v_a_709_;
v___y_781_ = v___x_730_;
v___y_782_ = v_a_711_;
goto v___jp_776_;
}
else
{
uint8_t v___x_833_; 
v___x_833_ = l_Lean_Expr_hasSyntheticSorry(v_a_734_);
if (v___x_833_ == 0)
{
v___y_814_ = v_a_706_;
v___y_815_ = v_a_707_;
v___y_816_ = v_a_708_;
v___y_817_ = v_a_709_;
v___y_818_ = v___x_730_;
v___y_819_ = v_a_711_;
goto v___jp_813_;
}
else
{
lean_object* v___x_834_; lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_842_; 
lean_dec(v_a_734_);
lean_dec_ref_known(v___x_730_, 3);
v___x_834_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg();
v_a_835_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_842_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_842_ == 0)
{
v___x_837_ = v___x_834_;
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v___x_834_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_840_; 
if (v_isShared_838_ == 0)
{
v___x_840_ = v___x_837_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_a_835_);
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
v___jp_735_:
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_743_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__1, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__1_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__1);
v___x_744_ = l_Lean_indentExpr(v_a_734_);
v___x_745_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_745_, 0, v___x_743_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
lean_ctor_set(v___x_746_, 1, v___y_742_);
v___x_747_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3___redArg(v___x_746_, v___y_739_, v___y_737_, v___y_741_, v___y_740_, v___y_736_, v___y_738_);
lean_dec_ref(v___y_736_);
return v___x_747_;
}
v___jp_748_:
{
lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_755_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_inc_ref(v_evalExpr_714_);
lean_inc(v___y_754_);
lean_inc_ref(v___y_753_);
lean_inc(v___y_752_);
lean_inc_ref(v___y_751_);
lean_inc(v_a_734_);
v___x_756_ = lean_apply_6(v_evalExpr_714_, v_a_734_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, lean_box(0));
if (lean_obj_tag(v___x_756_) == 0)
{
lean_dec_ref(v___y_753_);
lean_dec(v_a_734_);
return v___x_756_;
}
else
{
lean_object* v_a_757_; uint8_t v___x_758_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_a_757_);
v___x_758_ = l_Lean_Exception_isInterrupt(v_a_757_);
if (v___x_758_ == 0)
{
uint8_t v___x_759_; 
lean_inc(v_a_757_);
v___x_759_ = l_Lean_Exception_isRuntime(v_a_757_);
if (v___x_759_ == 0)
{
if (lean_obj_tag(v_a_757_) == 0)
{
lean_dec_ref_known(v_a_757_, 2);
lean_dec_ref(v___y_753_);
lean_dec(v_a_734_);
return v___x_756_;
}
else
{
lean_object* v_id_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_774_; 
v_id_760_ = lean_ctor_get(v_a_757_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v_a_757_);
if (v_isSharedCheck_774_ == 0)
{
lean_object* v_unused_775_; 
v_unused_775_ = lean_ctor_get(v_a_757_, 1);
lean_dec(v_unused_775_);
v___x_762_ = v_a_757_;
v_isShared_763_ = v_isSharedCheck_774_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_id_760_);
lean_dec(v_a_757_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_774_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
uint8_t v___x_764_; 
v___x_764_ = l_Lean_instBEqInternalExceptionId_beq(v___x_755_, v_id_760_);
lean_dec(v_id_760_);
if (v___x_764_ == 0)
{
lean_del_object(v___x_762_);
lean_dec_ref(v___y_753_);
lean_dec(v_a_734_);
return v___x_756_;
}
else
{
lean_dec_ref_known(v___x_756_, 1);
if (lean_obj_tag(v_expectedType_x3f_715_) == 1)
{
lean_object* v_val_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_769_; 
v_val_765_ = lean_ctor_get(v_expectedType_x3f_715_, 0);
v___x_766_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__3, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__3_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__3);
lean_inc(v_val_765_);
v___x_767_ = l_Lean_MessageData_ofExpr(v_val_765_);
if (v_isShared_763_ == 0)
{
lean_ctor_set_tag(v___x_762_, 7);
lean_ctor_set(v___x_762_, 1, v___x_767_);
lean_ctor_set(v___x_762_, 0, v___x_766_);
v___x_769_ = v___x_762_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_766_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v___x_767_);
v___x_769_ = v_reuseFailAlloc_772_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5);
v___x_771_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_771_, 0, v___x_769_);
lean_ctor_set(v___x_771_, 1, v___x_770_);
v___y_736_ = v___y_753_;
v___y_737_ = v___y_750_;
v___y_738_ = v___y_754_;
v___y_739_ = v___y_749_;
v___y_740_ = v___y_752_;
v___y_741_ = v___y_751_;
v___y_742_ = v___x_771_;
goto v___jp_735_;
}
}
else
{
lean_object* v___x_773_; 
lean_del_object(v___x_762_);
v___x_773_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__7, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__7_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__7);
v___y_736_ = v___y_753_;
v___y_737_ = v___y_750_;
v___y_738_ = v___y_754_;
v___y_739_ = v___y_749_;
v___y_740_ = v___y_752_;
v___y_741_ = v___y_751_;
v___y_742_ = v___x_773_;
goto v___jp_735_;
}
}
}
}
}
else
{
lean_dec(v_a_757_);
lean_dec_ref(v___y_753_);
lean_dec(v_a_734_);
return v___x_756_;
}
}
else
{
lean_dec(v_a_757_);
lean_dec_ref(v___y_753_);
lean_dec(v_a_734_);
return v___x_756_;
}
}
}
v___jp_776_:
{
lean_object* v___x_783_; 
lean_inc(v_a_734_);
v___x_783_ = l_Lean_Meta_getMVars(v_a_734_, v___y_779_, v___y_780_, v___y_781_, v___y_782_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_object* v_a_784_; lean_object* v___x_785_; 
v_a_784_ = lean_ctor_get(v___x_783_, 0);
lean_inc(v_a_784_);
lean_dec_ref_known(v___x_783_, 1);
v___x_785_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_a_784_, v___x_717_, v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_, v___y_782_);
lean_dec(v_a_784_);
if (lean_obj_tag(v___x_785_) == 0)
{
lean_object* v_a_786_; uint8_t v___x_787_; 
v_a_786_ = lean_ctor_get(v___x_785_, 0);
lean_inc(v_a_786_);
lean_dec_ref_known(v___x_785_, 1);
v___x_787_ = lean_unbox(v_a_786_);
lean_dec(v_a_786_);
if (v___x_787_ == 0)
{
v___y_749_ = v___y_777_;
v___y_750_ = v___y_778_;
v___y_751_ = v___y_779_;
v___y_752_ = v___y_780_;
v___y_753_ = v___y_781_;
v___y_754_ = v___y_782_;
goto v___jp_748_;
}
else
{
lean_object* v___x_788_; lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
lean_dec_ref(v___y_781_);
lean_dec(v_a_734_);
v___x_788_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg();
v_a_789_ = lean_ctor_get(v___x_788_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___x_788_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_788_);
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
lean_dec_ref(v___y_781_);
lean_dec(v_a_734_);
v_a_797_ = lean_ctor_get(v___x_785_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_804_ == 0)
{
v___x_799_ = v___x_785_;
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_785_);
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
else
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_812_; 
lean_dec_ref(v___y_781_);
lean_dec(v_a_734_);
v_a_805_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_812_ == 0)
{
v___x_807_ = v___x_783_;
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_783_);
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
v___jp_813_:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
v___x_820_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__9, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__9_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__9);
v___x_821_ = l_Lean_indentExpr(v_a_734_);
v___x_822_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_822_, 0, v___x_820_);
lean_ctor_set(v___x_822_, 1, v___x_821_);
v___x_823_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3___redArg(v___x_822_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_);
lean_dec_ref(v___y_818_);
v_a_824_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___x_823_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_823_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
}
else
{
lean_object* v_a_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_850_; 
lean_dec_ref_known(v___x_730_, 3);
v_a_843_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_850_ == 0)
{
v___x_845_ = v___x_731_;
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_a_843_);
lean_dec(v___x_731_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___boxed(lean_object* v_stx_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0(v_stx_851_, v_a_852_, v_a_853_, v_a_854_, v_a_855_, v_a_856_, v_a_857_);
lean_dec(v_a_857_);
lean_dec_ref(v_a_856_);
lean_dec(v_a_855_);
lean_dec_ref(v_a_854_);
lean_dec(v_a_853_);
lean_dec_ref(v_a_852_);
return v_res_859_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__2(void){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_863_ = lean_box(0);
v___x_864_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__1));
v___x_865_ = l_Lean_mkConst(v___x_864_, v___x_863_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0(lean_object* v_stx_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
lean_object* v_toCold_875_; lean_object* v_currRecDepth_876_; lean_object* v_ref_877_; uint16_t v_optionFlags_878_; uint8_t v_suppressElabErrors_879_; uint8_t v_checkDeprecated_880_; uint8_t v_isRecordingDeps_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v_ref_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v_toCold_875_ = lean_ctor_get(v_a_872_, 0);
v_currRecDepth_876_ = lean_ctor_get(v_a_872_, 1);
v_ref_877_ = lean_ctor_get(v_a_872_, 2);
v_optionFlags_878_ = lean_ctor_get_uint16(v_a_872_, sizeof(void*)*3);
v_suppressElabErrors_879_ = lean_ctor_get_uint8(v_a_872_, sizeof(void*)*3 + 2);
v_checkDeprecated_880_ = lean_ctor_get_uint8(v_a_872_, sizeof(void*)*3 + 3);
v_isRecordingDeps_881_ = lean_ctor_get_uint8(v_a_872_, sizeof(void*)*3 + 4);
v___x_882_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_883_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__2, &l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__2_once, _init_l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__2);
v___x_884_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___closed__3));
v_ref_885_ = l_Lean_replaceRef(v_stx_867_, v_ref_877_);
lean_inc(v_currRecDepth_876_);
lean_inc_ref(v_toCold_875_);
v___x_886_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_886_, 0, v_toCold_875_);
lean_ctor_set(v___x_886_, 1, v_currRecDepth_876_);
lean_ctor_set(v___x_886_, 2, v_ref_885_);
lean_ctor_set_uint16(v___x_886_, sizeof(void*)*3, v_optionFlags_878_);
lean_ctor_set_uint8(v___x_886_, sizeof(void*)*3 + 2, v_suppressElabErrors_879_);
lean_ctor_set_uint8(v___x_886_, sizeof(void*)*3 + 3, v_checkDeprecated_880_);
lean_ctor_set_uint8(v___x_886_, sizeof(void*)*3 + 4, v_isRecordingDeps_881_);
lean_inc(v_stx_867_);
v___x_887_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg(v___x_883_, v___x_884_, v_stx_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v___x_886_, v_a_873_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_896_; 
lean_dec_ref_known(v___x_886_, 3);
lean_dec(v_stx_867_);
v_a_888_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_896_ == 0)
{
v___x_890_ = v___x_887_;
v_isShared_891_ = v_isSharedCheck_896_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_887_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_896_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v_fst_892_; lean_object* v___x_894_; 
v_fst_892_ = lean_ctor_get(v_a_888_, 0);
lean_inc(v_fst_892_);
lean_dec(v_a_888_);
if (v_isShared_891_ == 0)
{
lean_ctor_set(v___x_890_, 0, v_fst_892_);
v___x_894_ = v___x_890_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_fst_892_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
else
{
lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_909_; 
v_a_897_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_909_ == 0)
{
v___x_899_ = v___x_887_;
v_isShared_900_ = v_isSharedCheck_909_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_dec(v___x_887_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_909_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_902_; 
lean_inc(v_a_897_);
if (v_isShared_900_ == 0)
{
v___x_902_ = v___x_899_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_897_);
v___x_902_ = v_reuseFailAlloc_908_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
uint8_t v___x_903_; 
v___x_903_ = l_Lean_Exception_isInterrupt(v_a_897_);
if (v___x_903_ == 0)
{
uint8_t v___x_904_; 
lean_inc(v_a_897_);
v___x_904_ = l_Lean_Exception_isRuntime(v_a_897_);
if (v___x_904_ == 0)
{
if (lean_obj_tag(v_a_897_) == 0)
{
lean_dec_ref_known(v_a_897_, 2);
lean_dec_ref_known(v___x_886_, 3);
lean_dec(v_stx_867_);
return v___x_902_;
}
else
{
lean_object* v_id_905_; uint8_t v___x_906_; 
v_id_905_ = lean_ctor_get(v_a_897_, 0);
lean_inc(v_id_905_);
lean_dec_ref_known(v_a_897_, 2);
v___x_906_ = l_Lean_instBEqInternalExceptionId_beq(v___x_882_, v_id_905_);
lean_dec(v_id_905_);
if (v___x_906_ == 0)
{
lean_dec_ref_known(v___x_886_, 3);
lean_dec(v_stx_867_);
return v___x_902_;
}
else
{
lean_object* v___x_907_; 
lean_dec_ref(v___x_902_);
v___x_907_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0(v_stx_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v___x_886_, v_a_873_);
lean_dec_ref_known(v___x_886_, 3);
return v___x_907_;
}
}
}
else
{
lean_dec(v_a_897_);
lean_dec_ref_known(v___x_886_, 3);
lean_dec(v_stx_867_);
return v___x_902_;
}
}
else
{
lean_dec(v_a_897_);
lean_dec_ref_known(v___x_886_, 3);
lean_dec(v_stx_867_);
return v___x_902_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0___boxed(lean_object* v_stx_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_){
_start:
{
lean_object* v_res_918_; 
v_res_918_ = l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0(v_stx_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, v_a_916_);
lean_dec(v_a_916_);
lean_dec_ref(v_a_915_);
lean_dec(v_a_914_);
lean_dec_ref(v_a_913_);
lean_dec(v_a_912_);
lean_dec_ref(v_a_911_);
return v_res_918_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__0(void){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_919_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__1, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__1);
v___x_920_ = l_Lean_MessageData_ofExpr(v___x_919_);
return v___x_920_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__1(void){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_921_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__0, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__0_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__0);
v___x_922_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__3, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__3_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__3);
v___x_923_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_922_);
lean_ctor_set(v___x_923_, 1, v___x_921_);
return v___x_923_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__2(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_924_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5);
v___x_925_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__1, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__1_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__1);
v___x_926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
lean_ctor_set(v___x_926_, 1, v___x_924_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1(lean_object* v_stx_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_){
_start:
{
lean_object* v_ty_x3f_935_; uint8_t v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v_toCold_941_; lean_object* v_currRecDepth_942_; lean_object* v_ref_943_; uint16_t v_optionFlags_944_; uint8_t v_suppressElabErrors_945_; uint8_t v_checkDeprecated_946_; uint8_t v_isRecordingDeps_947_; uint8_t v___x_948_; lean_object* v_ref_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v_ty_x3f_935_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__2, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig___closed__2);
v___x_936_ = 1;
v___x_937_ = lean_box(0);
v___x_938_ = lean_box(v___x_936_);
v___x_939_ = lean_box(v___x_936_);
lean_inc(v_stx_927_);
v___x_940_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermEnsuringType___boxed), 12, 5);
lean_closure_set(v___x_940_, 0, v_stx_927_);
lean_closure_set(v___x_940_, 1, v_ty_x3f_935_);
lean_closure_set(v___x_940_, 2, v___x_938_);
lean_closure_set(v___x_940_, 3, v___x_939_);
lean_closure_set(v___x_940_, 4, v___x_937_);
v_toCold_941_ = lean_ctor_get(v_a_932_, 0);
v_currRecDepth_942_ = lean_ctor_get(v_a_932_, 1);
v_ref_943_ = lean_ctor_get(v_a_932_, 2);
v_optionFlags_944_ = lean_ctor_get_uint16(v_a_932_, sizeof(void*)*3);
v_suppressElabErrors_945_ = lean_ctor_get_uint8(v_a_932_, sizeof(void*)*3 + 2);
v_checkDeprecated_946_ = lean_ctor_get_uint8(v_a_932_, sizeof(void*)*3 + 3);
v_isRecordingDeps_947_ = lean_ctor_get_uint8(v_a_932_, sizeof(void*)*3 + 4);
v___x_948_ = 1;
v_ref_949_ = l_Lean_replaceRef(v_stx_927_, v_ref_943_);
lean_dec(v_stx_927_);
lean_inc(v_currRecDepth_942_);
lean_inc_ref(v_toCold_941_);
v___x_950_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_950_, 0, v_toCold_941_);
lean_ctor_set(v___x_950_, 1, v_currRecDepth_942_);
lean_ctor_set(v___x_950_, 2, v_ref_949_);
lean_ctor_set_uint16(v___x_950_, sizeof(void*)*3, v_optionFlags_944_);
lean_ctor_set_uint8(v___x_950_, sizeof(void*)*3 + 2, v_suppressElabErrors_945_);
lean_ctor_set_uint8(v___x_950_, sizeof(void*)*3 + 3, v_checkDeprecated_946_);
lean_ctor_set_uint8(v___x_950_, sizeof(void*)*3 + 4, v_isRecordingDeps_947_);
v___x_951_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_940_, v___x_948_, v_a_928_, v_a_929_, v_a_930_, v_a_931_, v___x_950_, v_a_933_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_object* v_a_952_; lean_object* v___x_953_; lean_object* v_a_954_; lean_object* v___y_956_; lean_object* v___y_957_; lean_object* v___y_958_; lean_object* v___y_959_; lean_object* v___y_960_; lean_object* v___y_961_; lean_object* v___y_983_; lean_object* v___y_984_; lean_object* v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_988_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; uint8_t v___x_1038_; 
v_a_952_ = lean_ctor_get(v___x_951_, 0);
lean_inc(v_a_952_);
lean_dec_ref_known(v___x_951_, 1);
v___x_953_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__2___redArg(v_a_952_, v_a_931_);
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_954_);
lean_dec_ref(v___x_953_);
v___x_1038_ = l_Lean_Expr_hasSorry(v_a_954_);
if (v___x_1038_ == 0)
{
v___y_983_ = v_a_928_;
v___y_984_ = v_a_929_;
v___y_985_ = v_a_930_;
v___y_986_ = v_a_931_;
v___y_987_ = v___x_950_;
v___y_988_ = v_a_933_;
goto v___jp_982_;
}
else
{
uint8_t v___x_1039_; 
v___x_1039_ = l_Lean_Expr_hasSyntheticSorry(v_a_954_);
if (v___x_1039_ == 0)
{
v___y_1020_ = v_a_928_;
v___y_1021_ = v_a_929_;
v___y_1022_ = v_a_930_;
v___y_1023_ = v_a_931_;
v___y_1024_ = v___x_950_;
v___y_1025_ = v_a_933_;
goto v___jp_1019_;
}
else
{
lean_object* v___x_1040_; lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1048_; 
lean_dec(v_a_954_);
lean_dec_ref_known(v___x_950_, 3);
v___x_1040_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg();
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1043_ = v___x_1040_;
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_1040_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1044_ == 0)
{
v___x_1046_ = v___x_1043_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
v___jp_955_:
{
lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_962_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_inc(v_a_954_);
v___x_963_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr(v_a_954_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_dec_ref(v___y_960_);
lean_dec(v_a_954_);
return v___x_963_;
}
else
{
lean_object* v_a_964_; uint8_t v___x_965_; 
v_a_964_ = lean_ctor_get(v___x_963_, 0);
lean_inc(v_a_964_);
v___x_965_ = l_Lean_Exception_isInterrupt(v_a_964_);
if (v___x_965_ == 0)
{
uint8_t v___x_966_; 
lean_inc(v_a_964_);
v___x_966_ = l_Lean_Exception_isRuntime(v_a_964_);
if (v___x_966_ == 0)
{
if (lean_obj_tag(v_a_964_) == 0)
{
lean_dec_ref_known(v_a_964_, 2);
lean_dec_ref(v___y_960_);
lean_dec(v_a_954_);
return v___x_963_;
}
else
{
lean_object* v_id_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_980_; 
v_id_967_ = lean_ctor_get(v_a_964_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v_a_964_);
if (v_isSharedCheck_980_ == 0)
{
lean_object* v_unused_981_; 
v_unused_981_ = lean_ctor_get(v_a_964_, 1);
lean_dec(v_unused_981_);
v___x_969_ = v_a_964_;
v_isShared_970_ = v_isSharedCheck_980_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_id_967_);
lean_dec(v_a_964_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_980_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
uint8_t v___x_971_; 
v___x_971_ = l_Lean_instBEqInternalExceptionId_beq(v___x_962_, v_id_967_);
lean_dec(v_id_967_);
if (v___x_971_ == 0)
{
lean_del_object(v___x_969_);
lean_dec_ref(v___y_960_);
lean_dec(v_a_954_);
return v___x_963_;
}
else
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_976_; 
lean_dec_ref_known(v___x_963_, 1);
v___x_972_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__2, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__2_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___closed__2);
v___x_973_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__1, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__1_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__1);
v___x_974_ = l_Lean_indentExpr(v_a_954_);
if (v_isShared_970_ == 0)
{
lean_ctor_set_tag(v___x_969_, 7);
lean_ctor_set(v___x_969_, 1, v___x_974_);
lean_ctor_set(v___x_969_, 0, v___x_973_);
v___x_976_ = v___x_969_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_973_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v___x_974_);
v___x_976_ = v_reuseFailAlloc_979_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
lean_ctor_set(v___x_977_, 1, v___x_972_);
v___x_978_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3___redArg(v___x_977_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
lean_dec_ref(v___y_960_);
return v___x_978_;
}
}
}
}
}
else
{
lean_dec(v_a_964_);
lean_dec_ref(v___y_960_);
lean_dec(v_a_954_);
return v___x_963_;
}
}
else
{
lean_dec(v_a_964_);
lean_dec_ref(v___y_960_);
lean_dec(v_a_954_);
return v___x_963_;
}
}
}
v___jp_982_:
{
lean_object* v___x_989_; 
lean_inc(v_a_954_);
v___x_989_ = l_Lean_Meta_getMVars(v_a_954_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; lean_object* v___x_991_; 
v_a_990_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_990_);
lean_dec_ref_known(v___x_989_, 1);
v___x_991_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_a_990_, v___x_937_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
lean_dec(v_a_990_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; uint8_t v___x_993_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
lean_inc(v_a_992_);
lean_dec_ref_known(v___x_991_, 1);
v___x_993_ = lean_unbox(v_a_992_);
lean_dec(v_a_992_);
if (v___x_993_ == 0)
{
v___y_956_ = v___y_983_;
v___y_957_ = v___y_984_;
v___y_958_ = v___y_985_;
v___y_959_ = v___y_986_;
v___y_960_ = v___y_987_;
v___y_961_ = v___y_988_;
goto v___jp_955_;
}
else
{
lean_object* v___x_994_; lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
lean_dec_ref(v___y_987_);
lean_dec(v_a_954_);
v___x_994_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg();
v_a_995_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_994_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_994_);
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
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1010_; 
lean_dec_ref(v___y_987_);
lean_dec(v_a_954_);
v_a_1003_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_1005_ = v___x_991_;
v_isShared_1006_ = v_isSharedCheck_1010_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_991_);
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
else
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1018_; 
lean_dec_ref(v___y_987_);
lean_dec(v_a_954_);
v_a_1011_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1013_ = v___x_989_;
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v___x_989_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_a_1011_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
v___jp_1019_:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1037_; 
v___x_1026_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__9, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__9_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__9);
v___x_1027_ = l_Lean_indentExpr(v_a_954_);
v___x_1028_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1026_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
v___x_1029_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3___redArg(v___x_1028_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
lean_dec_ref(v___y_1024_);
v_a_1030_ = lean_ctor_get(v___x_1029_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1032_ = v___x_1029_;
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v___x_1029_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1033_ == 0)
{
v___x_1035_ = v___x_1032_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1030_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
else
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1056_; 
lean_dec_ref_known(v___x_950_, 3);
v_a_1049_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1051_ = v___x_951_;
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_951_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1___boxed(lean_object* v_stx_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1(v_stx_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_);
lean_dec(v_a_1063_);
lean_dec_ref(v_a_1062_);
lean_dec(v_a_1061_);
lean_dec_ref(v_a_1060_);
lean_dec(v_a_1059_);
lean_dec_ref(v_a_1058_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0(lean_object* v_config_1150_, lean_object* v_item_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v_item_1160_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3));
v___x_1164_ = l_Lean_Elab_ConfigEval_ConfigItem_addCompletionInfo(v_item_1151_, v___x_1163_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1164_) == 0)
{
uint8_t v___x_1165_; 
lean_dec_ref_known(v___x_1164_, 1);
v___x_1165_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v_item_1151_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; uint8_t v___x_1169_; 
v___x_1166_ = l_Lean_Elab_ConfigEval_ConfigItem_getRootStr(v_item_1151_);
lean_inc_ref(v_item_1151_);
v___x_1167_ = l_Lean_Elab_ConfigEval_ConfigItem_shift(v_item_1151_);
v___x_1168_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__1));
v___x_1169_ = lean_string_dec_lt(v___x_1166_, v___x_1168_);
if (v___x_1169_ == 0)
{
uint8_t v___x_1170_; 
v___x_1170_ = lean_string_dec_eq(v___x_1166_, v___x_1168_);
if (v___x_1170_ == 0)
{
lean_object* v___x_1171_; uint8_t v___x_1172_; 
v___x_1171_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__2));
v___x_1172_ = lean_string_dec_eq(v___x_1166_, v___x_1171_);
if (v___x_1172_ == 0)
{
lean_object* v___x_1173_; uint8_t v___x_1174_; 
v___x_1173_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__3));
v___x_1174_ = lean_string_dec_eq(v___x_1166_, v___x_1173_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; uint8_t v___x_1176_; 
v___x_1175_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__4));
v___x_1176_ = lean_string_dec_eq(v___x_1166_, v___x_1175_);
if (v___x_1176_ == 0)
{
lean_object* v___x_1177_; uint8_t v___x_1178_; 
v___x_1177_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__5));
v___x_1178_ = lean_string_dec_eq(v___x_1166_, v___x_1177_);
lean_dec_ref(v___x_1166_);
if (v___x_1178_ == 0)
{
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_item_1160_ = v___x_1167_;
goto v___jp_1159_;
}
else
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__6));
v___x_1180_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1151_, v___x_1179_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1180_) == 0)
{
uint8_t v___x_1181_; 
lean_dec_ref_known(v___x_1180_, 1);
v___x_1181_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1167_);
if (v___x_1181_ == 0)
{
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_item_1160_ = v___x_1167_;
goto v___jp_1159_;
}
else
{
lean_object* v___x_1182_; 
lean_dec_ref(v___x_1167_);
v___x_1182_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1206_; 
v_a_1183_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1185_ = v___x_1182_;
v_isShared_1186_ = v_isSharedCheck_1206_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___x_1182_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1206_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
uint8_t v_leave_1187_; uint8_t v_elimLets_1188_; uint8_t v_jp_1189_; lean_object* v_stepLimit_1190_; uint8_t v_errorOnMissingSpec_1191_; uint8_t v_debug_1192_; uint8_t v_internalize_1193_; uint8_t v_simp_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1205_; 
v_leave_1187_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 1);
v_elimLets_1188_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 2);
v_jp_1189_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 3);
v_stepLimit_1190_ = lean_ctor_get(v_config_1150_, 0);
v_errorOnMissingSpec_1191_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 4);
v_debug_1192_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 5);
v_internalize_1193_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 6);
v_simp_1194_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 7);
v_isSharedCheck_1205_ = !lean_is_exclusive(v_config_1150_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1196_ = v_config_1150_;
v_isShared_1197_ = v_isSharedCheck_1205_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_stepLimit_1190_);
lean_dec(v_config_1150_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1205_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1199_; 
if (v_isShared_1197_ == 0)
{
v___x_1199_ = v___x_1196_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_stepLimit_1190_);
v___x_1199_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
uint8_t v___x_1200_; lean_object* v___x_1202_; 
v___x_1200_ = lean_unbox(v_a_1183_);
lean_dec(v_a_1183_);
lean_ctor_set_uint8(v___x_1199_, sizeof(void*)*1, v___x_1200_);
lean_ctor_set_uint8(v___x_1199_, sizeof(void*)*1 + 1, v_leave_1187_);
lean_ctor_set_uint8(v___x_1199_, sizeof(void*)*1 + 2, v_elimLets_1188_);
lean_ctor_set_uint8(v___x_1199_, sizeof(void*)*1 + 3, v_jp_1189_);
lean_ctor_set_uint8(v___x_1199_, sizeof(void*)*1 + 4, v_errorOnMissingSpec_1191_);
lean_ctor_set_uint8(v___x_1199_, sizeof(void*)*1 + 5, v_debug_1192_);
lean_ctor_set_uint8(v___x_1199_, sizeof(void*)*1 + 6, v_internalize_1193_);
lean_ctor_set_uint8(v___x_1199_, sizeof(void*)*1 + 7, v_simp_1194_);
if (v_isShared_1186_ == 0)
{
lean_ctor_set(v___x_1185_, 0, v___x_1199_);
v___x_1202_ = v___x_1185_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v___x_1199_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
}
}
}
else
{
lean_object* v_a_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1214_; 
lean_dec_ref(v_config_1150_);
v_a_1207_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1214_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1209_ = v___x_1182_;
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_a_1207_);
lean_dec(v___x_1182_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v___x_1212_; 
if (v_isShared_1210_ == 0)
{
v___x_1212_ = v___x_1209_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_a_1207_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
return v___x_1212_;
}
}
}
}
}
else
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1222_; 
lean_dec_ref(v___x_1167_);
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_a_1215_ = lean_ctor_get(v___x_1180_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1180_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1217_ = v___x_1180_;
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1180_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1220_; 
if (v_isShared_1218_ == 0)
{
v___x_1220_ = v___x_1217_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_a_1215_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
}
else
{
lean_object* v___x_1223_; lean_object* v___x_1224_; 
lean_dec_ref(v___x_1166_);
v___x_1223_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__7));
v___x_1224_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1151_, v___x_1223_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1224_) == 0)
{
uint8_t v___x_1225_; 
lean_dec_ref_known(v___x_1224_, 1);
v___x_1225_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1167_);
if (v___x_1225_ == 0)
{
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_item_1160_ = v___x_1167_;
goto v___jp_1159_;
}
else
{
lean_object* v___x_1226_; 
lean_dec_ref(v___x_1167_);
lean_inc_ref(v_item_1151_);
v___x_1226_ = l_Lean_Elab_ConfigEval_ConfigItem_checkNotBool(v_item_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1226_) == 0)
{
lean_object* v_value_1227_; lean_object* v___x_1228_; 
lean_dec_ref_known(v___x_1226_, 1);
v_value_1227_ = lean_ctor_get(v_item_1151_, 2);
lean_inc(v_value_1227_);
lean_dec_ref(v_item_1151_);
v___x_1228_ = l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0(v_value_1227_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1252_; 
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1231_ = v___x_1228_;
v_isShared_1232_ = v_isSharedCheck_1252_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1228_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1252_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
uint8_t v_trivial_1233_; uint8_t v_leave_1234_; uint8_t v_elimLets_1235_; uint8_t v_jp_1236_; uint8_t v_errorOnMissingSpec_1237_; uint8_t v_debug_1238_; uint8_t v_internalize_1239_; uint8_t v_simp_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1250_; 
v_trivial_1233_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1);
v_leave_1234_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 1);
v_elimLets_1235_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 2);
v_jp_1236_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 3);
v_errorOnMissingSpec_1237_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 4);
v_debug_1238_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 5);
v_internalize_1239_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 6);
v_simp_1240_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 7);
v_isSharedCheck_1250_ = !lean_is_exclusive(v_config_1150_);
if (v_isSharedCheck_1250_ == 0)
{
lean_object* v_unused_1251_; 
v_unused_1251_ = lean_ctor_get(v_config_1150_, 0);
lean_dec(v_unused_1251_);
v___x_1242_ = v_config_1150_;
v_isShared_1243_ = v_isSharedCheck_1250_;
goto v_resetjp_1241_;
}
else
{
lean_dec(v_config_1150_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1250_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1245_; 
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 0, v_a_1229_);
v___x_1245_ = v___x_1242_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_a_1229_);
lean_ctor_set_uint8(v_reuseFailAlloc_1249_, sizeof(void*)*1, v_trivial_1233_);
lean_ctor_set_uint8(v_reuseFailAlloc_1249_, sizeof(void*)*1 + 1, v_leave_1234_);
lean_ctor_set_uint8(v_reuseFailAlloc_1249_, sizeof(void*)*1 + 2, v_elimLets_1235_);
lean_ctor_set_uint8(v_reuseFailAlloc_1249_, sizeof(void*)*1 + 3, v_jp_1236_);
lean_ctor_set_uint8(v_reuseFailAlloc_1249_, sizeof(void*)*1 + 4, v_errorOnMissingSpec_1237_);
lean_ctor_set_uint8(v_reuseFailAlloc_1249_, sizeof(void*)*1 + 5, v_debug_1238_);
lean_ctor_set_uint8(v_reuseFailAlloc_1249_, sizeof(void*)*1 + 6, v_internalize_1239_);
lean_ctor_set_uint8(v_reuseFailAlloc_1249_, sizeof(void*)*1 + 7, v_simp_1240_);
v___x_1245_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
lean_object* v___x_1247_; 
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 0, v___x_1245_);
v___x_1247_ = v___x_1231_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v___x_1245_);
v___x_1247_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
return v___x_1247_;
}
}
}
}
}
else
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1260_; 
lean_dec_ref(v_config_1150_);
v_a_1253_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1255_ = v___x_1228_;
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v___x_1228_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1256_ == 0)
{
v___x_1258_ = v___x_1255_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1268_; 
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_a_1261_ = lean_ctor_get(v___x_1226_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1263_ = v___x_1226_;
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1226_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1266_; 
if (v_isShared_1264_ == 0)
{
v___x_1266_ = v___x_1263_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_a_1261_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
}
else
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1276_; 
lean_dec_ref(v___x_1167_);
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_a_1269_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1276_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1271_ = v___x_1224_;
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v___x_1224_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1274_; 
if (v_isShared_1272_ == 0)
{
v___x_1274_ = v___x_1271_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v_a_1269_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
}
}
}
}
}
else
{
lean_object* v___x_1277_; lean_object* v___x_1278_; 
lean_dec_ref(v___x_1166_);
v___x_1277_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__8));
v___x_1278_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1151_, v___x_1277_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1278_) == 0)
{
uint8_t v___x_1279_; 
lean_dec_ref_known(v___x_1278_, 1);
v___x_1279_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1167_);
if (v___x_1279_ == 0)
{
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_item_1160_ = v___x_1167_;
goto v___jp_1159_;
}
else
{
lean_object* v___x_1280_; 
lean_dec_ref(v___x_1167_);
v___x_1280_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1304_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1283_ = v___x_1280_;
v_isShared_1284_ = v_isSharedCheck_1304_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v___x_1280_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1304_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
uint8_t v_trivial_1285_; uint8_t v_leave_1286_; uint8_t v_elimLets_1287_; uint8_t v_jp_1288_; lean_object* v_stepLimit_1289_; uint8_t v_errorOnMissingSpec_1290_; uint8_t v_debug_1291_; uint8_t v_internalize_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1303_; 
v_trivial_1285_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1);
v_leave_1286_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 1);
v_elimLets_1287_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 2);
v_jp_1288_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 3);
v_stepLimit_1289_ = lean_ctor_get(v_config_1150_, 0);
v_errorOnMissingSpec_1290_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 4);
v_debug_1291_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 5);
v_internalize_1292_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 6);
v_isSharedCheck_1303_ = !lean_is_exclusive(v_config_1150_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1294_ = v_config_1150_;
v_isShared_1295_ = v_isSharedCheck_1303_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_stepLimit_1289_);
lean_dec(v_config_1150_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1303_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1297_; 
if (v_isShared_1295_ == 0)
{
v___x_1297_ = v___x_1294_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_stepLimit_1289_);
lean_ctor_set_uint8(v_reuseFailAlloc_1302_, sizeof(void*)*1, v_trivial_1285_);
lean_ctor_set_uint8(v_reuseFailAlloc_1302_, sizeof(void*)*1 + 1, v_leave_1286_);
lean_ctor_set_uint8(v_reuseFailAlloc_1302_, sizeof(void*)*1 + 2, v_elimLets_1287_);
lean_ctor_set_uint8(v_reuseFailAlloc_1302_, sizeof(void*)*1 + 3, v_jp_1288_);
lean_ctor_set_uint8(v_reuseFailAlloc_1302_, sizeof(void*)*1 + 4, v_errorOnMissingSpec_1290_);
lean_ctor_set_uint8(v_reuseFailAlloc_1302_, sizeof(void*)*1 + 5, v_debug_1291_);
lean_ctor_set_uint8(v_reuseFailAlloc_1302_, sizeof(void*)*1 + 6, v_internalize_1292_);
v___x_1297_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
uint8_t v___x_1298_; lean_object* v___x_1300_; 
v___x_1298_ = lean_unbox(v_a_1281_);
lean_dec(v_a_1281_);
lean_ctor_set_uint8(v___x_1297_, sizeof(void*)*1 + 7, v___x_1298_);
if (v_isShared_1284_ == 0)
{
lean_ctor_set(v___x_1283_, 0, v___x_1297_);
v___x_1300_ = v___x_1283_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v___x_1297_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
}
else
{
lean_object* v_a_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1312_; 
lean_dec_ref(v_config_1150_);
v_a_1305_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1312_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1307_ = v___x_1280_;
v_isShared_1308_ = v_isSharedCheck_1312_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_a_1305_);
lean_dec(v___x_1280_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1312_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___x_1310_; 
if (v_isShared_1308_ == 0)
{
v___x_1310_ = v___x_1307_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v_a_1305_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
}
}
}
else
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1320_; 
lean_dec_ref(v___x_1167_);
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_a_1313_ = lean_ctor_get(v___x_1278_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1278_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1315_ = v___x_1278_;
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v___x_1278_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1318_; 
if (v_isShared_1316_ == 0)
{
v___x_1318_ = v___x_1315_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_a_1313_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
}
}
else
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
lean_dec_ref(v___x_1166_);
v___x_1321_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__9));
v___x_1322_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1151_, v___x_1321_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1322_) == 0)
{
uint8_t v___x_1323_; 
lean_dec_ref_known(v___x_1322_, 1);
v___x_1323_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1167_);
if (v___x_1323_ == 0)
{
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_item_1160_ = v___x_1167_;
goto v___jp_1159_;
}
else
{
lean_object* v___x_1324_; 
lean_dec_ref(v___x_1167_);
v___x_1324_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1324_) == 0)
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1348_; 
v_a_1325_ = lean_ctor_get(v___x_1324_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1324_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1327_ = v___x_1324_;
v_isShared_1328_ = v_isSharedCheck_1348_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1324_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1348_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
uint8_t v_trivial_1329_; uint8_t v_elimLets_1330_; uint8_t v_jp_1331_; lean_object* v_stepLimit_1332_; uint8_t v_errorOnMissingSpec_1333_; uint8_t v_debug_1334_; uint8_t v_internalize_1335_; uint8_t v_simp_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1347_; 
v_trivial_1329_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1);
v_elimLets_1330_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 2);
v_jp_1331_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 3);
v_stepLimit_1332_ = lean_ctor_get(v_config_1150_, 0);
v_errorOnMissingSpec_1333_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 4);
v_debug_1334_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 5);
v_internalize_1335_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 6);
v_simp_1336_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 7);
v_isSharedCheck_1347_ = !lean_is_exclusive(v_config_1150_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1338_ = v_config_1150_;
v_isShared_1339_ = v_isSharedCheck_1347_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_stepLimit_1332_);
lean_dec(v_config_1150_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1347_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1341_; 
if (v_isShared_1339_ == 0)
{
v___x_1341_ = v___x_1338_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_stepLimit_1332_);
lean_ctor_set_uint8(v_reuseFailAlloc_1346_, sizeof(void*)*1, v_trivial_1329_);
v___x_1341_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
uint8_t v___x_1342_; lean_object* v___x_1344_; 
v___x_1342_ = lean_unbox(v_a_1325_);
lean_dec(v_a_1325_);
lean_ctor_set_uint8(v___x_1341_, sizeof(void*)*1 + 1, v___x_1342_);
lean_ctor_set_uint8(v___x_1341_, sizeof(void*)*1 + 2, v_elimLets_1330_);
lean_ctor_set_uint8(v___x_1341_, sizeof(void*)*1 + 3, v_jp_1331_);
lean_ctor_set_uint8(v___x_1341_, sizeof(void*)*1 + 4, v_errorOnMissingSpec_1333_);
lean_ctor_set_uint8(v___x_1341_, sizeof(void*)*1 + 5, v_debug_1334_);
lean_ctor_set_uint8(v___x_1341_, sizeof(void*)*1 + 6, v_internalize_1335_);
lean_ctor_set_uint8(v___x_1341_, sizeof(void*)*1 + 7, v_simp_1336_);
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 0, v___x_1341_);
v___x_1344_ = v___x_1327_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v___x_1341_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
}
}
}
else
{
lean_object* v_a_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1356_; 
lean_dec_ref(v_config_1150_);
v_a_1349_ = lean_ctor_get(v___x_1324_, 0);
v_isSharedCheck_1356_ = !lean_is_exclusive(v___x_1324_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1351_ = v___x_1324_;
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_a_1349_);
lean_dec(v___x_1324_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v___x_1354_; 
if (v_isShared_1352_ == 0)
{
v___x_1354_ = v___x_1351_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_a_1349_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
return v___x_1354_;
}
}
}
}
}
else
{
lean_object* v_a_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1364_; 
lean_dec_ref(v___x_1167_);
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_a_1357_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1359_ = v___x_1322_;
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_a_1357_);
lean_dec(v___x_1322_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1362_; 
if (v_isShared_1360_ == 0)
{
v___x_1362_ = v___x_1359_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_a_1357_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
}
else
{
lean_object* v___x_1365_; lean_object* v___x_1366_; 
lean_dec_ref(v___x_1166_);
v___x_1365_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__10));
v___x_1366_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1151_, v___x_1365_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1366_) == 0)
{
uint8_t v___x_1367_; 
lean_dec_ref_known(v___x_1366_, 1);
v___x_1367_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1167_);
if (v___x_1367_ == 0)
{
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_item_1160_ = v___x_1167_;
goto v___jp_1159_;
}
else
{
lean_object* v___x_1368_; 
lean_dec_ref(v___x_1167_);
v___x_1368_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1368_) == 0)
{
lean_object* v_a_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1392_; 
v_a_1369_ = lean_ctor_get(v___x_1368_, 0);
v_isSharedCheck_1392_ = !lean_is_exclusive(v___x_1368_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1371_ = v___x_1368_;
v_isShared_1372_ = v_isSharedCheck_1392_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_a_1369_);
lean_dec(v___x_1368_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1392_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
uint8_t v_trivial_1373_; uint8_t v_leave_1374_; uint8_t v_elimLets_1375_; lean_object* v_stepLimit_1376_; uint8_t v_errorOnMissingSpec_1377_; uint8_t v_debug_1378_; uint8_t v_internalize_1379_; uint8_t v_simp_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1391_; 
v_trivial_1373_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1);
v_leave_1374_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 1);
v_elimLets_1375_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 2);
v_stepLimit_1376_ = lean_ctor_get(v_config_1150_, 0);
v_errorOnMissingSpec_1377_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 4);
v_debug_1378_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 5);
v_internalize_1379_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 6);
v_simp_1380_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 7);
v_isSharedCheck_1391_ = !lean_is_exclusive(v_config_1150_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1382_ = v_config_1150_;
v_isShared_1383_ = v_isSharedCheck_1391_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_stepLimit_1376_);
lean_dec(v_config_1150_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1391_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1385_; 
if (v_isShared_1383_ == 0)
{
v___x_1385_ = v___x_1382_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_stepLimit_1376_);
lean_ctor_set_uint8(v_reuseFailAlloc_1390_, sizeof(void*)*1, v_trivial_1373_);
lean_ctor_set_uint8(v_reuseFailAlloc_1390_, sizeof(void*)*1 + 1, v_leave_1374_);
lean_ctor_set_uint8(v_reuseFailAlloc_1390_, sizeof(void*)*1 + 2, v_elimLets_1375_);
v___x_1385_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
uint8_t v___x_1386_; lean_object* v___x_1388_; 
v___x_1386_ = lean_unbox(v_a_1369_);
lean_dec(v_a_1369_);
lean_ctor_set_uint8(v___x_1385_, sizeof(void*)*1 + 3, v___x_1386_);
lean_ctor_set_uint8(v___x_1385_, sizeof(void*)*1 + 4, v_errorOnMissingSpec_1377_);
lean_ctor_set_uint8(v___x_1385_, sizeof(void*)*1 + 5, v_debug_1378_);
lean_ctor_set_uint8(v___x_1385_, sizeof(void*)*1 + 6, v_internalize_1379_);
lean_ctor_set_uint8(v___x_1385_, sizeof(void*)*1 + 7, v_simp_1380_);
if (v_isShared_1372_ == 0)
{
lean_ctor_set(v___x_1371_, 0, v___x_1385_);
v___x_1388_ = v___x_1371_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v___x_1385_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
}
else
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1400_; 
lean_dec_ref(v_config_1150_);
v_a_1393_ = lean_ctor_get(v___x_1368_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1368_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1395_ = v___x_1368_;
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v___x_1368_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1396_ == 0)
{
v___x_1398_ = v___x_1395_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_a_1393_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
}
}
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
lean_dec_ref(v___x_1167_);
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_a_1401_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1366_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1366_);
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
else
{
lean_object* v___x_1409_; uint8_t v___x_1410_; 
v___x_1409_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__11));
v___x_1410_ = lean_string_dec_eq(v___x_1166_, v___x_1409_);
if (v___x_1410_ == 0)
{
lean_object* v___x_1411_; uint8_t v___x_1412_; 
v___x_1411_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__12));
v___x_1412_ = lean_string_dec_eq(v___x_1166_, v___x_1411_);
if (v___x_1412_ == 0)
{
lean_object* v___x_1413_; uint8_t v___x_1414_; 
v___x_1413_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__13));
v___x_1414_ = lean_string_dec_eq(v___x_1166_, v___x_1413_);
if (v___x_1414_ == 0)
{
lean_object* v___x_1415_; uint8_t v___x_1416_; 
v___x_1415_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__14));
v___x_1416_ = lean_string_dec_eq(v___x_1166_, v___x_1415_);
if (v___x_1416_ == 0)
{
lean_object* v___x_1417_; uint8_t v___x_1418_; 
v___x_1417_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__15));
v___x_1418_ = lean_string_dec_eq(v___x_1166_, v___x_1417_);
lean_dec_ref(v___x_1166_);
if (v___x_1418_ == 0)
{
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_item_1160_ = v___x_1167_;
goto v___jp_1159_;
}
else
{
lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1419_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__16));
v___x_1420_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1151_, v___x_1419_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1420_) == 0)
{
uint8_t v___x_1421_; 
lean_dec_ref_known(v___x_1420_, 1);
v___x_1421_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1167_);
if (v___x_1421_ == 0)
{
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_item_1160_ = v___x_1167_;
goto v___jp_1159_;
}
else
{
lean_object* v___x_1422_; 
lean_dec_ref(v___x_1167_);
v___x_1422_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1446_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1425_ = v___x_1422_;
v_isShared_1426_ = v_isSharedCheck_1446_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1422_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1446_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
uint8_t v_trivial_1427_; uint8_t v_leave_1428_; uint8_t v_elimLets_1429_; uint8_t v_jp_1430_; lean_object* v_stepLimit_1431_; uint8_t v_errorOnMissingSpec_1432_; uint8_t v_debug_1433_; uint8_t v_simp_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1445_; 
v_trivial_1427_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1);
v_leave_1428_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 1);
v_elimLets_1429_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 2);
v_jp_1430_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 3);
v_stepLimit_1431_ = lean_ctor_get(v_config_1150_, 0);
v_errorOnMissingSpec_1432_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 4);
v_debug_1433_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 5);
v_simp_1434_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 7);
v_isSharedCheck_1445_ = !lean_is_exclusive(v_config_1150_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1436_ = v_config_1150_;
v_isShared_1437_ = v_isSharedCheck_1445_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_stepLimit_1431_);
lean_dec(v_config_1150_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1445_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1439_; 
if (v_isShared_1437_ == 0)
{
v___x_1439_ = v___x_1436_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_stepLimit_1431_);
lean_ctor_set_uint8(v_reuseFailAlloc_1444_, sizeof(void*)*1, v_trivial_1427_);
lean_ctor_set_uint8(v_reuseFailAlloc_1444_, sizeof(void*)*1 + 1, v_leave_1428_);
lean_ctor_set_uint8(v_reuseFailAlloc_1444_, sizeof(void*)*1 + 2, v_elimLets_1429_);
lean_ctor_set_uint8(v_reuseFailAlloc_1444_, sizeof(void*)*1 + 3, v_jp_1430_);
lean_ctor_set_uint8(v_reuseFailAlloc_1444_, sizeof(void*)*1 + 4, v_errorOnMissingSpec_1432_);
lean_ctor_set_uint8(v_reuseFailAlloc_1444_, sizeof(void*)*1 + 5, v_debug_1433_);
v___x_1439_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
uint8_t v___x_1440_; lean_object* v___x_1442_; 
v___x_1440_ = lean_unbox(v_a_1423_);
lean_dec(v_a_1423_);
lean_ctor_set_uint8(v___x_1439_, sizeof(void*)*1 + 6, v___x_1440_);
lean_ctor_set_uint8(v___x_1439_, sizeof(void*)*1 + 7, v_simp_1434_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v___x_1439_);
v___x_1442_ = v___x_1425_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1439_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
}
}
}
else
{
lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1454_; 
lean_dec_ref(v_config_1150_);
v_a_1447_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1449_ = v___x_1422_;
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1422_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1452_; 
if (v_isShared_1450_ == 0)
{
v___x_1452_ = v___x_1449_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_a_1447_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
}
}
else
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1462_; 
lean_dec_ref(v___x_1167_);
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_a_1455_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1457_ = v___x_1420_;
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1420_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_a_1455_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
}
}
else
{
lean_object* v___x_1463_; lean_object* v___x_1464_; 
lean_dec_ref(v___x_1166_);
v___x_1463_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__17));
v___x_1464_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1151_, v___x_1463_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1464_) == 0)
{
uint8_t v___x_1465_; 
lean_dec_ref_known(v___x_1464_, 1);
v___x_1465_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1167_);
if (v___x_1465_ == 0)
{
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_item_1160_ = v___x_1167_;
goto v___jp_1159_;
}
else
{
lean_object* v___x_1466_; 
lean_dec_ref(v___x_1167_);
v___x_1466_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_object* v_a_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1490_; 
v_a_1467_ = lean_ctor_get(v___x_1466_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1469_ = v___x_1466_;
v_isShared_1470_ = v_isSharedCheck_1490_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_a_1467_);
lean_dec(v___x_1466_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1490_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
uint8_t v_trivial_1471_; uint8_t v_leave_1472_; uint8_t v_elimLets_1473_; uint8_t v_jp_1474_; lean_object* v_stepLimit_1475_; uint8_t v_debug_1476_; uint8_t v_internalize_1477_; uint8_t v_simp_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1489_; 
v_trivial_1471_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1);
v_leave_1472_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 1);
v_elimLets_1473_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 2);
v_jp_1474_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 3);
v_stepLimit_1475_ = lean_ctor_get(v_config_1150_, 0);
v_debug_1476_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 5);
v_internalize_1477_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 6);
v_simp_1478_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 7);
v_isSharedCheck_1489_ = !lean_is_exclusive(v_config_1150_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1480_ = v_config_1150_;
v_isShared_1481_ = v_isSharedCheck_1489_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_stepLimit_1475_);
lean_dec(v_config_1150_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1489_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_stepLimit_1475_);
lean_ctor_set_uint8(v_reuseFailAlloc_1488_, sizeof(void*)*1, v_trivial_1471_);
lean_ctor_set_uint8(v_reuseFailAlloc_1488_, sizeof(void*)*1 + 1, v_leave_1472_);
lean_ctor_set_uint8(v_reuseFailAlloc_1488_, sizeof(void*)*1 + 2, v_elimLets_1473_);
lean_ctor_set_uint8(v_reuseFailAlloc_1488_, sizeof(void*)*1 + 3, v_jp_1474_);
v___x_1483_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
uint8_t v___x_1484_; lean_object* v___x_1486_; 
v___x_1484_ = lean_unbox(v_a_1467_);
lean_dec(v_a_1467_);
lean_ctor_set_uint8(v___x_1483_, sizeof(void*)*1 + 4, v___x_1484_);
lean_ctor_set_uint8(v___x_1483_, sizeof(void*)*1 + 5, v_debug_1476_);
lean_ctor_set_uint8(v___x_1483_, sizeof(void*)*1 + 6, v_internalize_1477_);
lean_ctor_set_uint8(v___x_1483_, sizeof(void*)*1 + 7, v_simp_1478_);
if (v_isShared_1470_ == 0)
{
lean_ctor_set(v___x_1469_, 0, v___x_1483_);
v___x_1486_ = v___x_1469_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___x_1483_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
}
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1498_; 
lean_dec_ref(v_config_1150_);
v_a_1491_ = lean_ctor_get(v___x_1466_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1493_ = v___x_1466_;
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1466_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1496_; 
if (v_isShared_1494_ == 0)
{
v___x_1496_ = v___x_1493_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_a_1491_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
}
}
else
{
lean_object* v_a_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1506_; 
lean_dec_ref(v___x_1167_);
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_a_1499_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1501_ = v___x_1464_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_a_1499_);
lean_dec(v___x_1464_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1504_; 
if (v_isShared_1502_ == 0)
{
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_a_1499_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
}
}
else
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
lean_dec_ref(v___x_1166_);
v___x_1507_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__18));
v___x_1508_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1151_, v___x_1507_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1508_) == 0)
{
uint8_t v___x_1509_; 
lean_dec_ref_known(v___x_1508_, 1);
v___x_1509_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1167_);
if (v___x_1509_ == 0)
{
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_item_1160_ = v___x_1167_;
goto v___jp_1159_;
}
else
{
lean_object* v___x_1510_; 
lean_dec_ref(v___x_1167_);
v___x_1510_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1510_) == 0)
{
lean_object* v_a_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1534_; 
v_a_1511_ = lean_ctor_get(v___x_1510_, 0);
v_isSharedCheck_1534_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1534_ == 0)
{
v___x_1513_ = v___x_1510_;
v_isShared_1514_ = v_isSharedCheck_1534_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_a_1511_);
lean_dec(v___x_1510_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1534_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
uint8_t v_trivial_1515_; uint8_t v_leave_1516_; uint8_t v_jp_1517_; lean_object* v_stepLimit_1518_; uint8_t v_errorOnMissingSpec_1519_; uint8_t v_debug_1520_; uint8_t v_internalize_1521_; uint8_t v_simp_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1533_; 
v_trivial_1515_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1);
v_leave_1516_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 1);
v_jp_1517_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 3);
v_stepLimit_1518_ = lean_ctor_get(v_config_1150_, 0);
v_errorOnMissingSpec_1519_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 4);
v_debug_1520_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 5);
v_internalize_1521_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 6);
v_simp_1522_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 7);
v_isSharedCheck_1533_ = !lean_is_exclusive(v_config_1150_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1524_ = v_config_1150_;
v_isShared_1525_ = v_isSharedCheck_1533_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_stepLimit_1518_);
lean_dec(v_config_1150_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1533_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1527_; 
if (v_isShared_1525_ == 0)
{
v___x_1527_ = v___x_1524_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v_stepLimit_1518_);
lean_ctor_set_uint8(v_reuseFailAlloc_1532_, sizeof(void*)*1, v_trivial_1515_);
lean_ctor_set_uint8(v_reuseFailAlloc_1532_, sizeof(void*)*1 + 1, v_leave_1516_);
v___x_1527_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
uint8_t v___x_1528_; lean_object* v___x_1530_; 
v___x_1528_ = lean_unbox(v_a_1511_);
lean_dec(v_a_1511_);
lean_ctor_set_uint8(v___x_1527_, sizeof(void*)*1 + 2, v___x_1528_);
lean_ctor_set_uint8(v___x_1527_, sizeof(void*)*1 + 3, v_jp_1517_);
lean_ctor_set_uint8(v___x_1527_, sizeof(void*)*1 + 4, v_errorOnMissingSpec_1519_);
lean_ctor_set_uint8(v___x_1527_, sizeof(void*)*1 + 5, v_debug_1520_);
lean_ctor_set_uint8(v___x_1527_, sizeof(void*)*1 + 6, v_internalize_1521_);
lean_ctor_set_uint8(v___x_1527_, sizeof(void*)*1 + 7, v_simp_1522_);
if (v_isShared_1514_ == 0)
{
lean_ctor_set(v___x_1513_, 0, v___x_1527_);
v___x_1530_ = v___x_1513_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v___x_1527_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
}
}
else
{
lean_object* v_a_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1542_; 
lean_dec_ref(v_config_1150_);
v_a_1535_ = lean_ctor_get(v___x_1510_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1537_ = v___x_1510_;
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_a_1535_);
lean_dec(v___x_1510_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1540_; 
if (v_isShared_1538_ == 0)
{
v___x_1540_ = v___x_1537_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_a_1535_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
}
}
else
{
lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1550_; 
lean_dec_ref(v___x_1167_);
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_a_1543_ = lean_ctor_get(v___x_1508_, 0);
v_isSharedCheck_1550_ = !lean_is_exclusive(v___x_1508_);
if (v_isSharedCheck_1550_ == 0)
{
v___x_1545_ = v___x_1508_;
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_dec(v___x_1508_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1548_; 
if (v_isShared_1546_ == 0)
{
v___x_1548_ = v___x_1545_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_a_1543_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
}
}
}
else
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
lean_dec_ref(v___x_1166_);
v___x_1551_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__19));
v___x_1552_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1151_, v___x_1551_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1552_) == 0)
{
uint8_t v___x_1553_; 
lean_dec_ref_known(v___x_1552_, 1);
v___x_1553_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1167_);
if (v___x_1553_ == 0)
{
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_item_1160_ = v___x_1167_;
goto v___jp_1159_;
}
else
{
lean_object* v___x_1554_; 
lean_dec_ref(v___x_1167_);
v___x_1554_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
if (lean_obj_tag(v___x_1554_) == 0)
{
lean_object* v_a_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1578_; 
v_a_1555_ = lean_ctor_get(v___x_1554_, 0);
v_isSharedCheck_1578_ = !lean_is_exclusive(v___x_1554_);
if (v_isSharedCheck_1578_ == 0)
{
v___x_1557_ = v___x_1554_;
v_isShared_1558_ = v_isSharedCheck_1578_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_a_1555_);
lean_dec(v___x_1554_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1578_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
uint8_t v_trivial_1559_; uint8_t v_leave_1560_; uint8_t v_elimLets_1561_; uint8_t v_jp_1562_; lean_object* v_stepLimit_1563_; uint8_t v_errorOnMissingSpec_1564_; uint8_t v_internalize_1565_; uint8_t v_simp_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1577_; 
v_trivial_1559_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1);
v_leave_1560_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 1);
v_elimLets_1561_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 2);
v_jp_1562_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 3);
v_stepLimit_1563_ = lean_ctor_get(v_config_1150_, 0);
v_errorOnMissingSpec_1564_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 4);
v_internalize_1565_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 6);
v_simp_1566_ = lean_ctor_get_uint8(v_config_1150_, sizeof(void*)*1 + 7);
v_isSharedCheck_1577_ = !lean_is_exclusive(v_config_1150_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1568_ = v_config_1150_;
v_isShared_1569_ = v_isSharedCheck_1577_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_stepLimit_1563_);
lean_dec(v_config_1150_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1577_;
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
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_stepLimit_1563_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, sizeof(void*)*1, v_trivial_1559_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, sizeof(void*)*1 + 1, v_leave_1560_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, sizeof(void*)*1 + 2, v_elimLets_1561_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, sizeof(void*)*1 + 3, v_jp_1562_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, sizeof(void*)*1 + 4, v_errorOnMissingSpec_1564_);
v___x_1571_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
uint8_t v___x_1572_; lean_object* v___x_1574_; 
v___x_1572_ = lean_unbox(v_a_1555_);
lean_dec(v_a_1555_);
lean_ctor_set_uint8(v___x_1571_, sizeof(void*)*1 + 5, v___x_1572_);
lean_ctor_set_uint8(v___x_1571_, sizeof(void*)*1 + 6, v_internalize_1565_);
lean_ctor_set_uint8(v___x_1571_, sizeof(void*)*1 + 7, v_simp_1566_);
if (v_isShared_1558_ == 0)
{
lean_ctor_set(v___x_1557_, 0, v___x_1571_);
v___x_1574_ = v___x_1557_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v___x_1571_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
}
}
else
{
lean_object* v_a_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1586_; 
lean_dec_ref(v_config_1150_);
v_a_1579_ = lean_ctor_get(v___x_1554_, 0);
v_isSharedCheck_1586_ = !lean_is_exclusive(v___x_1554_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1581_ = v___x_1554_;
v_isShared_1582_ = v_isSharedCheck_1586_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_a_1579_);
lean_dec(v___x_1554_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1586_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1584_; 
if (v_isShared_1582_ == 0)
{
v___x_1584_ = v___x_1581_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v_a_1579_);
v___x_1584_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
return v___x_1584_;
}
}
}
}
}
else
{
lean_object* v_a_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1594_; 
lean_dec_ref(v___x_1167_);
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_a_1587_ = lean_ctor_get(v___x_1552_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1552_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1589_ = v___x_1552_;
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_a_1587_);
lean_dec(v___x_1552_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1592_; 
if (v_isShared_1590_ == 0)
{
v___x_1592_ = v___x_1589_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_a_1587_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
return v___x_1592_;
}
}
}
}
}
else
{
uint8_t v___x_1595_; 
lean_dec_ref(v___x_1166_);
lean_dec_ref(v_config_1150_);
v___x_1595_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1167_);
if (v___x_1595_ == 0)
{
lean_dec_ref(v_item_1151_);
v_item_1160_ = v___x_1167_;
goto v___jp_1159_;
}
else
{
lean_object* v_value_1596_; lean_object* v___x_1597_; 
lean_dec_ref(v___x_1167_);
v_value_1596_ = lean_ctor_get(v_item_1151_, 2);
lean_inc(v_value_1596_);
lean_dec_ref(v_item_1151_);
v___x_1597_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1(v_value_1596_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
return v___x_1597_;
}
}
}
}
else
{
lean_dec_ref(v_config_1150_);
v_item_1160_ = v_item_1151_;
goto v___jp_1159_;
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
lean_dec_ref(v_item_1151_);
lean_dec_ref(v_config_1150_);
v_a_1598_ = lean_ctor_get(v___x_1164_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1164_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1164_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
v___jp_1159_:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__0));
v___x_1162_ = l_Lean_Elab_ConfigEval_ConfigItem_throwInvalidOption___redArg(v_item_1160_, v___x_1161_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
return v___x_1162_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___boxed(lean_object* v_config_1606_, lean_object* v_item_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
lean_object* v_res_1615_; 
v_res_1615_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0(v_config_1606_, v_item_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
return v_res_1615_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__2(lean_object* v_e_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_){
_start:
{
lean_object* v___x_1626_; 
v___x_1626_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__2___redArg(v_e_1618_, v___y_1622_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__2___boxed(lean_object* v_e_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__2(v_e_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_);
lean_dec(v___y_1633_);
lean_dec_ref(v___y_1632_);
lean_dec(v___y_1631_);
lean_dec_ref(v___y_1630_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4(lean_object* v_00_u03b1_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_){
_start:
{
lean_object* v___x_1644_; 
v___x_1644_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___redArg();
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4___boxed(lean_object* v_00_u03b1_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
lean_object* v_res_1653_; 
v_res_1653_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__4(v_00_u03b1_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_);
lean_dec(v___y_1651_);
lean_dec_ref(v___y_1650_);
lean_dec(v___y_1649_);
lean_dec_ref(v___y_1648_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3(lean_object* v_00_u03b1_1654_, lean_object* v_msg_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3___redArg(v_msg_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3___boxed(lean_object* v_00_u03b1_1664_, lean_object* v_msg_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
lean_object* v_res_1673_; 
v_res_1673_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3(v_00_u03b1_1664_, v_msg_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
lean_dec(v___y_1669_);
lean_dec_ref(v___y_1668_);
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1666_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4(lean_object* v_msgData_1674_, lean_object* v_macroStack_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_){
_start:
{
lean_object* v___x_1683_; 
v___x_1683_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(v_msgData_1674_, v_macroStack_1675_, v___y_1680_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4___boxed(lean_object* v_msgData_1684_, lean_object* v_macroStack_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__1_spec__3_spec__4(v_msgData_1684_, v_macroStack_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec(v___y_1687_);
lean_dec_ref(v___y_1686_);
return v_res_1693_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1694_ = lean_box(0);
v___x_1695_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr___closed__3));
v___x_1696_ = l_Lean_mkConst(v___x_1695_, v___x_1694_);
return v___x_1696_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1697_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___closed__0);
v___x_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1697_);
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0(lean_object* v_cfg_1699_, lean_object* v_cfgItem_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_){
_start:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1708_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___closed__1);
v___x_1709_ = l_Lean_Elab_ConfigEval_EvalConfigItem_defaultOnErr___redArg(v_cfg_1699_, v_cfgItem_1700_, v___x_1708_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0___boxed(lean_object* v_cfg_1710_, lean_object* v_cfgItem_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lean_Elab_Tactic_Do_elabConfig___redArg___lam__0(v_cfg_1710_, v_cfgItem_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v_cfgItem_1711_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabConfig___redArg(lean_object* v_cfg_1721_, lean_object* v_init_1722_, uint8_t v_logExceptions_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_){
_start:
{
lean_object* v_onErr_1728_; lean_object* v_eval_1729_; 
v_onErr_1728_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elabConfig___redArg___closed__0));
v_eval_1729_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___closed__0));
if (v_logExceptions_1723_ == 0)
{
lean_object* v___x_1730_; 
v___x_1730_ = l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(v_eval_1729_, v_init_1722_, v_cfg_1721_, v_onErr_1728_, v_logExceptions_1723_, v_a_1725_, v_a_1726_);
return v___x_1730_;
}
else
{
uint8_t v_recover_1731_; lean_object* v___x_1732_; 
v_recover_1731_ = lean_ctor_get_uint8(v_a_1724_, sizeof(void*)*1);
v___x_1732_ = l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(v_eval_1729_, v_init_1722_, v_cfg_1721_, v_onErr_1728_, v_recover_1731_, v_a_1725_, v_a_1726_);
return v___x_1732_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabConfig___redArg___boxed(lean_object* v_cfg_1733_, lean_object* v_init_1734_, lean_object* v_logExceptions_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_){
_start:
{
uint8_t v_logExceptions_boxed_1740_; lean_object* v_res_1741_; 
v_logExceptions_boxed_1740_ = lean_unbox(v_logExceptions_1735_);
v_res_1741_ = l_Lean_Elab_Tactic_Do_elabConfig___redArg(v_cfg_1733_, v_init_1734_, v_logExceptions_boxed_1740_, v_a_1736_, v_a_1737_, v_a_1738_);
lean_dec(v_a_1738_);
lean_dec_ref(v_a_1737_);
lean_dec_ref(v_a_1736_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabConfig(lean_object* v_cfg_1742_, lean_object* v_init_1743_, uint8_t v_logExceptions_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_Lean_Elab_Tactic_Do_elabConfig___redArg(v_cfg_1742_, v_init_1743_, v_logExceptions_1744_, v_a_1745_, v_a_1751_, v_a_1752_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elabConfig___boxed(lean_object* v_cfg_1755_, lean_object* v_init_1756_, lean_object* v_logExceptions_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_){
_start:
{
uint8_t v_logExceptions_boxed_1767_; lean_object* v_res_1768_; 
v_logExceptions_boxed_1767_ = lean_unbox(v_logExceptions_1757_);
v_res_1768_ = l_Lean_Elab_Tactic_Do_elabConfig(v_cfg_1755_, v_init_1756_, v_logExceptions_boxed_1767_, v_a_1758_, v_a_1759_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_);
lean_dec(v_a_1765_);
lean_dec_ref(v_a_1764_);
lean_dec(v_a_1763_);
lean_dec_ref(v_a_1762_);
lean_dec(v_a_1761_);
lean_dec_ref(v_a_1760_);
lean_dec(v_a_1759_);
lean_dec_ref(v_a_1758_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_burnOne___redArg(lean_object* v_a_1769_){
_start:
{
lean_object* v___x_1774_; lean_object* v_fuel_1775_; 
v___x_1774_ = lean_st_ref_get(v_a_1769_);
v_fuel_1775_ = lean_ctor_get(v___x_1774_, 0);
lean_inc(v_fuel_1775_);
if (lean_obj_tag(v_fuel_1775_) == 0)
{
lean_object* v_simpState_1776_; lean_object* v_invariants_1777_; lean_object* v_vcs_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1800_; 
v_simpState_1776_ = lean_ctor_get(v___x_1774_, 1);
v_invariants_1777_ = lean_ctor_get(v___x_1774_, 2);
v_vcs_1778_ = lean_ctor_get(v___x_1774_, 3);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1800_ == 0)
{
lean_object* v_unused_1801_; 
v_unused_1801_ = lean_ctor_get(v___x_1774_, 0);
lean_dec(v_unused_1801_);
v___x_1780_ = v___x_1774_;
v_isShared_1781_ = v_isSharedCheck_1800_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_vcs_1778_);
lean_inc(v_invariants_1777_);
lean_inc(v_simpState_1776_);
lean_dec(v___x_1774_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1800_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v_n_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1799_; 
v_n_1782_ = lean_ctor_get(v_fuel_1775_, 0);
v_isSharedCheck_1799_ = !lean_is_exclusive(v_fuel_1775_);
if (v_isSharedCheck_1799_ == 0)
{
v___x_1784_ = v_fuel_1775_;
v_isShared_1785_ = v_isSharedCheck_1799_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_n_1782_);
lean_dec(v_fuel_1775_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1799_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v_zero_1786_; uint8_t v_isZero_1787_; 
v_zero_1786_ = lean_unsigned_to_nat(0u);
v_isZero_1787_ = lean_nat_dec_eq(v_n_1782_, v_zero_1786_);
if (v_isZero_1787_ == 1)
{
lean_del_object(v___x_1784_);
lean_dec(v_n_1782_);
lean_del_object(v___x_1780_);
lean_dec_ref(v_vcs_1778_);
lean_dec_ref(v_invariants_1777_);
lean_dec_ref(v_simpState_1776_);
goto v___jp_1771_;
}
else
{
lean_object* v_one_1788_; lean_object* v_n_1789_; lean_object* v___x_1791_; 
v_one_1788_ = lean_unsigned_to_nat(1u);
v_n_1789_ = lean_nat_sub(v_n_1782_, v_one_1788_);
lean_dec(v_n_1782_);
if (v_isShared_1785_ == 0)
{
lean_ctor_set(v___x_1784_, 0, v_n_1789_);
v___x_1791_ = v___x_1784_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v_n_1789_);
v___x_1791_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
lean_object* v___x_1793_; 
if (v_isShared_1781_ == 0)
{
lean_ctor_set(v___x_1780_, 0, v___x_1791_);
v___x_1793_ = v___x_1780_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v___x_1791_);
lean_ctor_set(v_reuseFailAlloc_1797_, 1, v_simpState_1776_);
lean_ctor_set(v_reuseFailAlloc_1797_, 2, v_invariants_1777_);
lean_ctor_set(v_reuseFailAlloc_1797_, 3, v_vcs_1778_);
v___x_1793_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1794_ = lean_box(0);
v___x_1795_ = lean_st_ref_swap(v_a_1769_, v___x_1793_);
lean_dec(v___x_1795_);
v___x_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1794_);
return v___x_1796_;
}
}
}
}
}
}
else
{
lean_dec(v___x_1774_);
goto v___jp_1771_;
}
v___jp_1771_:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1772_ = lean_box(0);
v___x_1773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1772_);
return v___x_1773_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_burnOne___redArg___boxed(lean_object* v_a_1802_, lean_object* v_a_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l_Lean_Elab_Tactic_Do_burnOne___redArg(v_a_1802_);
lean_dec(v_a_1802_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_burnOne(lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_){
_start:
{
lean_object* v___x_1812_; 
v___x_1812_ = l_Lean_Elab_Tactic_Do_burnOne___redArg(v_a_1806_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_burnOne___boxed(lean_object* v_a_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_, lean_object* v_a_1819_){
_start:
{
lean_object* v_res_1820_; 
v_res_1820_ = l_Lean_Elab_Tactic_Do_burnOne(v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_);
lean_dec(v_a_1818_);
lean_dec_ref(v_a_1817_);
lean_dec(v_a_1816_);
lean_dec_ref(v_a_1815_);
lean_dec(v_a_1814_);
lean_dec_ref(v_a_1813_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ifOutOfFuel___redArg(lean_object* v_x_1821_, lean_object* v_k_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_){
_start:
{
lean_object* v___x_1830_; lean_object* v_fuel_1831_; 
v___x_1830_ = lean_st_ref_get(v_a_1824_);
v_fuel_1831_ = lean_ctor_get(v___x_1830_, 0);
lean_inc(v_fuel_1831_);
lean_dec(v___x_1830_);
if (lean_obj_tag(v_fuel_1831_) == 0)
{
lean_object* v_n_1832_; lean_object* v___x_1833_; uint8_t v___x_1834_; 
v_n_1832_ = lean_ctor_get(v_fuel_1831_, 0);
lean_inc(v_n_1832_);
lean_dec_ref_known(v_fuel_1831_, 1);
v___x_1833_ = lean_unsigned_to_nat(0u);
v___x_1834_ = lean_nat_dec_eq(v_n_1832_, v___x_1833_);
lean_dec(v_n_1832_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; 
lean_dec_ref(v_x_1821_);
lean_inc(v_a_1828_);
lean_inc_ref(v_a_1827_);
lean_inc(v_a_1826_);
lean_inc_ref(v_a_1825_);
lean_inc(v_a_1824_);
lean_inc_ref(v_a_1823_);
v___x_1835_ = lean_apply_7(v_k_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, lean_box(0));
return v___x_1835_;
}
else
{
lean_object* v___x_1836_; 
lean_dec_ref(v_k_1822_);
lean_inc(v_a_1828_);
lean_inc_ref(v_a_1827_);
lean_inc(v_a_1826_);
lean_inc_ref(v_a_1825_);
lean_inc(v_a_1824_);
lean_inc_ref(v_a_1823_);
v___x_1836_ = lean_apply_7(v_x_1821_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, lean_box(0));
return v___x_1836_;
}
}
else
{
lean_object* v___x_1837_; 
lean_dec(v_fuel_1831_);
lean_dec_ref(v_x_1821_);
lean_inc(v_a_1828_);
lean_inc_ref(v_a_1827_);
lean_inc(v_a_1826_);
lean_inc_ref(v_a_1825_);
lean_inc(v_a_1824_);
lean_inc_ref(v_a_1823_);
v___x_1837_ = lean_apply_7(v_k_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, lean_box(0));
return v___x_1837_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ifOutOfFuel___redArg___boxed(lean_object* v_x_1838_, lean_object* v_k_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_){
_start:
{
lean_object* v_res_1847_; 
v_res_1847_ = l_Lean_Elab_Tactic_Do_ifOutOfFuel___redArg(v_x_1838_, v_k_1839_, v_a_1840_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_);
lean_dec(v_a_1845_);
lean_dec_ref(v_a_1844_);
lean_dec(v_a_1843_);
lean_dec_ref(v_a_1842_);
lean_dec(v_a_1841_);
lean_dec_ref(v_a_1840_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ifOutOfFuel(lean_object* v_00_u03b1_1848_, lean_object* v_x_1849_, lean_object* v_k_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_){
_start:
{
lean_object* v___x_1858_; 
v___x_1858_ = l_Lean_Elab_Tactic_Do_ifOutOfFuel___redArg(v_x_1849_, v_k_1850_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_, v_a_1856_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ifOutOfFuel___boxed(lean_object* v_00_u03b1_1859_, lean_object* v_x_1860_, lean_object* v_k_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_Lean_Elab_Tactic_Do_ifOutOfFuel(v_00_u03b1_1859_, v_x_1860_, v_k_1861_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_);
lean_dec(v_a_1867_);
lean_dec_ref(v_a_1866_);
lean_dec(v_a_1865_);
lean_dec_ref(v_a_1864_);
lean_dec(v_a_1863_);
lean_dec_ref(v_a_1862_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_1870_, lean_object* v_x_1871_, lean_object* v_x_1872_, lean_object* v_x_1873_){
_start:
{
lean_object* v_ks_1874_; lean_object* v_vs_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1899_; 
v_ks_1874_ = lean_ctor_get(v_x_1870_, 0);
v_vs_1875_ = lean_ctor_get(v_x_1870_, 1);
v_isSharedCheck_1899_ = !lean_is_exclusive(v_x_1870_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1877_ = v_x_1870_;
v_isShared_1878_ = v_isSharedCheck_1899_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_vs_1875_);
lean_inc(v_ks_1874_);
lean_dec(v_x_1870_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1899_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1879_; uint8_t v___x_1880_; 
v___x_1879_ = lean_array_get_size(v_ks_1874_);
v___x_1880_ = lean_nat_dec_lt(v_x_1871_, v___x_1879_);
if (v___x_1880_ == 0)
{
lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1884_; 
lean_dec(v_x_1871_);
v___x_1881_ = lean_array_push(v_ks_1874_, v_x_1872_);
v___x_1882_ = lean_array_push(v_vs_1875_, v_x_1873_);
if (v_isShared_1878_ == 0)
{
lean_ctor_set(v___x_1877_, 1, v___x_1882_);
lean_ctor_set(v___x_1877_, 0, v___x_1881_);
v___x_1884_ = v___x_1877_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v___x_1881_);
lean_ctor_set(v_reuseFailAlloc_1885_, 1, v___x_1882_);
v___x_1884_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
return v___x_1884_;
}
}
else
{
lean_object* v_k_x27_1886_; uint8_t v___x_1887_; 
v_k_x27_1886_ = lean_array_fget_borrowed(v_ks_1874_, v_x_1871_);
v___x_1887_ = l_Lean_instBEqMVarId_beq(v_x_1872_, v_k_x27_1886_);
if (v___x_1887_ == 0)
{
lean_object* v___x_1889_; 
if (v_isShared_1878_ == 0)
{
v___x_1889_ = v___x_1877_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_ks_1874_);
lean_ctor_set(v_reuseFailAlloc_1893_, 1, v_vs_1875_);
v___x_1889_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1890_ = lean_unsigned_to_nat(1u);
v___x_1891_ = lean_nat_add(v_x_1871_, v___x_1890_);
lean_dec(v_x_1871_);
v_x_1870_ = v___x_1889_;
v_x_1871_ = v___x_1891_;
goto _start;
}
}
else
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1897_; 
v___x_1894_ = lean_array_fset(v_ks_1874_, v_x_1871_, v_x_1872_);
v___x_1895_ = lean_array_fset(v_vs_1875_, v_x_1871_, v_x_1873_);
lean_dec(v_x_1871_);
if (v_isShared_1878_ == 0)
{
lean_ctor_set(v___x_1877_, 1, v___x_1895_);
lean_ctor_set(v___x_1877_, 0, v___x_1894_);
v___x_1897_ = v___x_1877_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v___x_1894_);
lean_ctor_set(v_reuseFailAlloc_1898_, 1, v___x_1895_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__4___redArg(lean_object* v_n_1900_, lean_object* v_k_1901_, lean_object* v_v_1902_){
_start:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; 
v___x_1903_ = lean_unsigned_to_nat(0u);
v___x_1904_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__4_spec__5___redArg(v_n_1900_, v___x_1903_, v_k_1901_, v_v_1902_);
return v___x_1904_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg(lean_object* v_x_1906_, size_t v_x_1907_, size_t v_x_1908_, lean_object* v_x_1909_, lean_object* v_x_1910_){
_start:
{
if (lean_obj_tag(v_x_1906_) == 0)
{
lean_object* v_es_1911_; size_t v___x_1912_; size_t v___x_1913_; lean_object* v_j_1914_; lean_object* v___x_1915_; uint8_t v___x_1916_; 
v_es_1911_ = lean_ctor_get(v_x_1906_, 0);
v___x_1912_ = ((size_t)31ULL);
v___x_1913_ = lean_usize_land(v_x_1907_, v___x_1912_);
v_j_1914_ = lean_usize_to_nat(v___x_1913_);
v___x_1915_ = lean_array_get_size(v_es_1911_);
v___x_1916_ = lean_nat_dec_lt(v_j_1914_, v___x_1915_);
if (v___x_1916_ == 0)
{
lean_dec(v_j_1914_);
lean_dec(v_x_1910_);
lean_dec(v_x_1909_);
return v_x_1906_;
}
else
{
lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1955_; 
lean_inc_ref(v_es_1911_);
v_isSharedCheck_1955_ = !lean_is_exclusive(v_x_1906_);
if (v_isSharedCheck_1955_ == 0)
{
lean_object* v_unused_1956_; 
v_unused_1956_ = lean_ctor_get(v_x_1906_, 0);
lean_dec(v_unused_1956_);
v___x_1918_ = v_x_1906_;
v_isShared_1919_ = v_isSharedCheck_1955_;
goto v_resetjp_1917_;
}
else
{
lean_dec(v_x_1906_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1955_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v_v_1920_; lean_object* v___x_1921_; lean_object* v_xs_x27_1922_; lean_object* v___y_1924_; 
v_v_1920_ = lean_array_fget(v_es_1911_, v_j_1914_);
v___x_1921_ = lean_box(0);
v_xs_x27_1922_ = lean_array_fset(v_es_1911_, v_j_1914_, v___x_1921_);
switch(lean_obj_tag(v_v_1920_))
{
case 0:
{
lean_object* v_key_1929_; lean_object* v_val_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1940_; 
v_key_1929_ = lean_ctor_get(v_v_1920_, 0);
v_val_1930_ = lean_ctor_get(v_v_1920_, 1);
v_isSharedCheck_1940_ = !lean_is_exclusive(v_v_1920_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1932_ = v_v_1920_;
v_isShared_1933_ = v_isSharedCheck_1940_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_val_1930_);
lean_inc(v_key_1929_);
lean_dec(v_v_1920_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1940_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
uint8_t v___x_1934_; 
v___x_1934_ = l_Lean_instBEqMVarId_beq(v_x_1909_, v_key_1929_);
if (v___x_1934_ == 0)
{
lean_object* v___x_1935_; lean_object* v___x_1936_; 
lean_del_object(v___x_1932_);
v___x_1935_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1929_, v_val_1930_, v_x_1909_, v_x_1910_);
v___x_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1935_);
v___y_1924_ = v___x_1936_;
goto v___jp_1923_;
}
else
{
lean_object* v___x_1938_; 
lean_dec(v_val_1930_);
lean_dec(v_key_1929_);
if (v_isShared_1933_ == 0)
{
lean_ctor_set(v___x_1932_, 1, v_x_1910_);
lean_ctor_set(v___x_1932_, 0, v_x_1909_);
v___x_1938_ = v___x_1932_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_x_1909_);
lean_ctor_set(v_reuseFailAlloc_1939_, 1, v_x_1910_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
v___y_1924_ = v___x_1938_;
goto v___jp_1923_;
}
}
}
}
case 1:
{
lean_object* v_node_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1953_; 
v_node_1941_ = lean_ctor_get(v_v_1920_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v_v_1920_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1943_ = v_v_1920_;
v_isShared_1944_ = v_isSharedCheck_1953_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_node_1941_);
lean_dec(v_v_1920_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1953_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
size_t v___x_1945_; size_t v___x_1946_; size_t v___x_1947_; size_t v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1951_; 
v___x_1945_ = ((size_t)5ULL);
v___x_1946_ = lean_usize_shift_right(v_x_1907_, v___x_1945_);
v___x_1947_ = ((size_t)1ULL);
v___x_1948_ = lean_usize_add(v_x_1908_, v___x_1947_);
v___x_1949_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg(v_node_1941_, v___x_1946_, v___x_1948_, v_x_1909_, v_x_1910_);
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 0, v___x_1949_);
v___x_1951_ = v___x_1943_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1949_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
v___y_1924_ = v___x_1951_;
goto v___jp_1923_;
}
}
}
default: 
{
lean_object* v___x_1954_; 
v___x_1954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1954_, 0, v_x_1909_);
lean_ctor_set(v___x_1954_, 1, v_x_1910_);
v___y_1924_ = v___x_1954_;
goto v___jp_1923_;
}
}
v___jp_1923_:
{
lean_object* v___x_1925_; lean_object* v___x_1927_; 
v___x_1925_ = lean_array_fset(v_xs_x27_1922_, v_j_1914_, v___y_1924_);
lean_dec(v_j_1914_);
if (v_isShared_1919_ == 0)
{
lean_ctor_set(v___x_1918_, 0, v___x_1925_);
v___x_1927_ = v___x_1918_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v___x_1925_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
}
}
}
else
{
lean_object* v_ks_1957_; lean_object* v_vs_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1976_; 
v_ks_1957_ = lean_ctor_get(v_x_1906_, 0);
v_vs_1958_ = lean_ctor_get(v_x_1906_, 1);
v_isSharedCheck_1976_ = !lean_is_exclusive(v_x_1906_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1960_ = v_x_1906_;
v_isShared_1961_ = v_isSharedCheck_1976_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_vs_1958_);
lean_inc(v_ks_1957_);
lean_dec(v_x_1906_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1976_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_ks_1957_);
lean_ctor_set(v_reuseFailAlloc_1975_, 1, v_vs_1958_);
v___x_1963_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
lean_object* v_newNode_1964_; size_t v___x_1965_; uint8_t v___x_1966_; 
v_newNode_1964_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__4___redArg(v___x_1963_, v_x_1909_, v_x_1910_);
v___x_1965_ = ((size_t)7ULL);
v___x_1966_ = lean_usize_dec_le(v___x_1965_, v_x_1908_);
if (v___x_1966_ == 0)
{
lean_object* v___x_1967_; lean_object* v___x_1968_; uint8_t v___x_1969_; 
v___x_1967_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1964_);
v___x_1968_ = lean_unsigned_to_nat(4u);
v___x_1969_ = lean_nat_dec_lt(v___x_1967_, v___x_1968_);
lean_dec(v___x_1967_);
if (v___x_1969_ == 0)
{
lean_object* v_ks_1970_; lean_object* v_vs_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; 
v_ks_1970_ = lean_ctor_get(v_newNode_1964_, 0);
lean_inc_ref(v_ks_1970_);
v_vs_1971_ = lean_ctor_get(v_newNode_1964_, 1);
lean_inc_ref(v_vs_1971_);
lean_dec_ref(v_newNode_1964_);
v___x_1972_ = lean_unsigned_to_nat(0u);
v___x_1973_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg___closed__0);
v___x_1974_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__5___redArg(v_x_1908_, v_ks_1970_, v_vs_1971_, v___x_1972_, v___x_1973_);
lean_dec_ref(v_vs_1971_);
lean_dec_ref(v_ks_1970_);
return v___x_1974_;
}
else
{
return v_newNode_1964_;
}
}
else
{
return v_newNode_1964_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__5___redArg(size_t v_depth_1977_, lean_object* v_keys_1978_, lean_object* v_vals_1979_, lean_object* v_i_1980_, lean_object* v_entries_1981_){
_start:
{
lean_object* v___x_1982_; uint8_t v___x_1983_; 
v___x_1982_ = lean_array_get_size(v_keys_1978_);
v___x_1983_ = lean_nat_dec_lt(v_i_1980_, v___x_1982_);
if (v___x_1983_ == 0)
{
lean_dec(v_i_1980_);
return v_entries_1981_;
}
else
{
lean_object* v_k_1984_; lean_object* v_v_1985_; uint64_t v___x_1986_; size_t v_h_1987_; size_t v___x_1988_; lean_object* v___x_1989_; size_t v___x_1990_; size_t v___x_1991_; size_t v___x_1992_; size_t v_h_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
v_k_1984_ = lean_array_fget_borrowed(v_keys_1978_, v_i_1980_);
v_v_1985_ = lean_array_fget_borrowed(v_vals_1979_, v_i_1980_);
v___x_1986_ = l_Lean_instHashableMVarId_hash(v_k_1984_);
v_h_1987_ = lean_uint64_to_usize(v___x_1986_);
v___x_1988_ = ((size_t)5ULL);
v___x_1989_ = lean_unsigned_to_nat(1u);
v___x_1990_ = ((size_t)1ULL);
v___x_1991_ = lean_usize_sub(v_depth_1977_, v___x_1990_);
v___x_1992_ = lean_usize_mul(v___x_1988_, v___x_1991_);
v_h_1993_ = lean_usize_shift_right(v_h_1987_, v___x_1992_);
v___x_1994_ = lean_nat_add(v_i_1980_, v___x_1989_);
lean_dec(v_i_1980_);
lean_inc(v_v_1985_);
lean_inc(v_k_1984_);
v___x_1995_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg(v_entries_1981_, v_h_1993_, v_depth_1977_, v_k_1984_, v_v_1985_);
v_i_1980_ = v___x_1994_;
v_entries_1981_ = v___x_1995_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_depth_1997_, lean_object* v_keys_1998_, lean_object* v_vals_1999_, lean_object* v_i_2000_, lean_object* v_entries_2001_){
_start:
{
size_t v_depth_boxed_2002_; lean_object* v_res_2003_; 
v_depth_boxed_2002_ = lean_unbox_usize(v_depth_1997_);
lean_dec(v_depth_1997_);
v_res_2003_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__5___redArg(v_depth_boxed_2002_, v_keys_1998_, v_vals_1999_, v_i_2000_, v_entries_2001_);
lean_dec_ref(v_vals_1999_);
lean_dec_ref(v_keys_1998_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_x_2004_, lean_object* v_x_2005_, lean_object* v_x_2006_, lean_object* v_x_2007_, lean_object* v_x_2008_){
_start:
{
size_t v_x_7409__boxed_2009_; size_t v_x_7410__boxed_2010_; lean_object* v_res_2011_; 
v_x_7409__boxed_2009_ = lean_unbox_usize(v_x_2005_);
lean_dec(v_x_2005_);
v_x_7410__boxed_2010_ = lean_unbox_usize(v_x_2006_);
lean_dec(v_x_2006_);
v_res_2011_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg(v_x_2004_, v_x_7409__boxed_2009_, v_x_7410__boxed_2010_, v_x_2007_, v_x_2008_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1___redArg(lean_object* v_x_2012_, lean_object* v_x_2013_, lean_object* v_x_2014_){
_start:
{
uint64_t v___x_2015_; size_t v___x_2016_; size_t v___x_2017_; lean_object* v___x_2018_; 
v___x_2015_ = l_Lean_instHashableMVarId_hash(v_x_2013_);
v___x_2016_ = lean_uint64_to_usize(v___x_2015_);
v___x_2017_ = ((size_t)1ULL);
v___x_2018_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg(v_x_2012_, v___x_2016_, v___x_2017_, v_x_2013_, v_x_2014_);
return v___x_2018_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0_spec__1___redArg(lean_object* v_range_2019_, lean_object* v_b_2020_, lean_object* v_i_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_){
_start:
{
lean_object* v_stop_2025_; lean_object* v_step_2026_; lean_object* v_a_2028_; lean_object* v___y_2032_; uint8_t v___x_2048_; 
v_stop_2025_ = lean_ctor_get(v_range_2019_, 1);
v_step_2026_ = lean_ctor_get(v_range_2019_, 2);
v___x_2048_ = lean_nat_dec_lt(v_i_2021_, v_stop_2025_);
if (v___x_2048_ == 0)
{
lean_object* v___x_2049_; 
lean_dec(v_i_2021_);
v___x_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2049_, 0, v_b_2020_);
return v___x_2049_;
}
else
{
lean_object* v_decls_2050_; lean_object* v_size_2051_; lean_object* v___x_2052_; uint8_t v___x_2053_; 
v_decls_2050_ = lean_ctor_get(v_b_2020_, 1);
v_size_2051_ = lean_ctor_get(v_decls_2050_, 2);
v___x_2052_ = lean_box(0);
v___x_2053_ = lean_nat_dec_lt(v_i_2021_, v_size_2051_);
if (v___x_2053_ == 0)
{
lean_object* v___x_2054_; 
v___x_2054_ = l_outOfBounds___redArg(v___x_2052_);
v___y_2032_ = v___x_2054_;
goto v___jp_2031_;
}
else
{
lean_object* v___x_2055_; 
v___x_2055_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2052_, v_decls_2050_, v_i_2021_);
v___y_2032_ = v___x_2055_;
goto v___jp_2031_;
}
}
v___jp_2027_:
{
lean_object* v___x_2029_; 
v___x_2029_ = lean_nat_add(v_i_2021_, v_step_2026_);
lean_dec(v_i_2021_);
v_b_2020_ = v_a_2028_;
v_i_2021_ = v___x_2029_;
goto _start;
}
v___jp_2031_:
{
if (lean_obj_tag(v___y_2032_) == 1)
{
lean_object* v_val_2033_; lean_object* v___x_2034_; uint8_t v___x_2035_; 
v_val_2033_ = lean_ctor_get(v___y_2032_, 0);
lean_inc(v_val_2033_);
lean_dec_ref_known(v___y_2032_, 1);
v___x_2034_ = l_Lean_LocalDecl_userName(v_val_2033_);
v___x_2035_ = l_Lean_Name_hasMacroScopes(v___x_2034_);
if (v___x_2035_ == 0)
{
lean_object* v___x_2036_; 
v___x_2036_ = l_Lean_Core_mkFreshUserName(v___x_2034_, v___y_2022_, v___y_2023_);
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v_a_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v_a_2037_ = lean_ctor_get(v___x_2036_, 0);
lean_inc(v_a_2037_);
lean_dec_ref_known(v___x_2036_, 1);
v___x_2038_ = l_Lean_LocalDecl_fvarId(v_val_2033_);
lean_dec(v_val_2033_);
v___x_2039_ = l_Lean_LocalContext_setUserName(v_b_2020_, v___x_2038_, v_a_2037_);
v_a_2028_ = v___x_2039_;
goto v___jp_2027_;
}
else
{
lean_object* v_a_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2047_; 
lean_dec(v_val_2033_);
lean_dec(v_i_2021_);
lean_dec_ref(v_b_2020_);
v_a_2040_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2042_ = v___x_2036_;
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_a_2040_);
lean_dec(v___x_2036_);
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
lean_dec(v___x_2034_);
lean_dec(v_val_2033_);
v_a_2028_ = v_b_2020_;
goto v___jp_2027_;
}
}
else
{
lean_dec(v___y_2032_);
v_a_2028_ = v_b_2020_;
goto v___jp_2027_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_range_2056_, lean_object* v_b_2057_, lean_object* v_i_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_){
_start:
{
lean_object* v_res_2062_; 
v_res_2062_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0_spec__1___redArg(v_range_2056_, v_b_2057_, v_i_2058_, v___y_2059_, v___y_2060_);
lean_dec(v___y_2060_);
lean_dec_ref(v___y_2059_);
lean_dec_ref(v_range_2056_);
return v_res_2062_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0(lean_object* v_lctx_2063_, lean_object* v_idx_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_){
_start:
{
lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
lean_inc_ref(v_lctx_2063_);
v___x_2072_ = lean_local_ctx_num_indices(v_lctx_2063_);
v___x_2073_ = lean_unsigned_to_nat(1u);
lean_inc(v_idx_2064_);
v___x_2074_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2074_, 0, v_idx_2064_);
lean_ctor_set(v___x_2074_, 1, v___x_2072_);
lean_ctor_set(v___x_2074_, 2, v___x_2073_);
v___x_2075_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0_spec__1___redArg(v___x_2074_, v_lctx_2063_, v_idx_2064_, v___y_2069_, v___y_2070_);
lean_dec_ref_known(v___x_2074_, 3);
return v___x_2075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0___boxed(lean_object* v_lctx_2076_, lean_object* v_idx_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_){
_start:
{
lean_object* v_res_2085_; 
v_res_2085_ = l___private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0(v_lctx_2076_, v_idx_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_);
lean_dec(v___y_2083_);
lean_dec_ref(v___y_2082_);
lean_dec(v___y_2081_);
lean_dec_ref(v___y_2080_);
lean_dec(v___y_2079_);
lean_dec_ref(v___y_2078_);
return v_res_2085_;
}
}
static lean_object* _init_l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2087_ = ((lean_object*)(l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0___closed__0));
v___x_2088_ = l_Lean_stringToMessageData(v___x_2087_);
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0(lean_object* v_mvarId_2089_, lean_object* v_idx_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_){
_start:
{
lean_object* v___x_2098_; lean_object* v_mctx_2099_; lean_object* v___x_2100_; 
v___x_2098_ = lean_st_ref_get(v___y_2094_);
v_mctx_2099_ = lean_ctor_get(v___x_2098_, 0);
lean_inc_ref(v_mctx_2099_);
lean_dec(v___x_2098_);
v___x_2100_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2099_, v_mvarId_2089_);
lean_dec_ref(v_mctx_2099_);
if (lean_obj_tag(v___x_2100_) == 1)
{
lean_object* v_val_2101_; lean_object* v_userName_2102_; lean_object* v_lctx_2103_; lean_object* v_type_2104_; lean_object* v_depth_2105_; lean_object* v_localInstances_2106_; uint8_t v_kind_2107_; lean_object* v_numScopeArgs_2108_; lean_object* v_index_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2167_; 
v_val_2101_ = lean_ctor_get(v___x_2100_, 0);
lean_inc(v_val_2101_);
lean_dec_ref_known(v___x_2100_, 1);
v_userName_2102_ = lean_ctor_get(v_val_2101_, 0);
v_lctx_2103_ = lean_ctor_get(v_val_2101_, 1);
v_type_2104_ = lean_ctor_get(v_val_2101_, 2);
v_depth_2105_ = lean_ctor_get(v_val_2101_, 3);
v_localInstances_2106_ = lean_ctor_get(v_val_2101_, 4);
v_kind_2107_ = lean_ctor_get_uint8(v_val_2101_, sizeof(void*)*7);
v_numScopeArgs_2108_ = lean_ctor_get(v_val_2101_, 5);
v_index_2109_ = lean_ctor_get(v_val_2101_, 6);
v_isSharedCheck_2167_ = !lean_is_exclusive(v_val_2101_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2111_ = v_val_2101_;
v_isShared_2112_ = v_isSharedCheck_2167_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_index_2109_);
lean_inc(v_numScopeArgs_2108_);
lean_inc(v_localInstances_2106_);
lean_inc(v_depth_2105_);
lean_inc(v_type_2104_);
lean_inc(v_lctx_2103_);
lean_inc(v_userName_2102_);
lean_dec(v_val_2101_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2167_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2113_; 
v___x_2113_ = l___private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0(v_lctx_2103_, v_idx_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_);
if (lean_obj_tag(v___x_2113_) == 0)
{
lean_object* v_a_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2158_; 
v_a_2114_ = lean_ctor_get(v___x_2113_, 0);
v_isSharedCheck_2158_ = !lean_is_exclusive(v___x_2113_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2116_ = v___x_2113_;
v_isShared_2117_ = v_isSharedCheck_2158_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_a_2114_);
lean_dec(v___x_2113_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2158_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2118_; lean_object* v_mctx_2119_; lean_object* v_cache_2120_; lean_object* v_zetaDeltaFVarIds_2121_; lean_object* v_postponed_2122_; lean_object* v_diag_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2157_; 
v___x_2118_ = lean_st_ref_take(v___y_2094_);
v_mctx_2119_ = lean_ctor_get(v___x_2118_, 0);
v_cache_2120_ = lean_ctor_get(v___x_2118_, 1);
v_zetaDeltaFVarIds_2121_ = lean_ctor_get(v___x_2118_, 2);
v_postponed_2122_ = lean_ctor_get(v___x_2118_, 3);
v_diag_2123_ = lean_ctor_get(v___x_2118_, 4);
v_isSharedCheck_2157_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2157_ == 0)
{
v___x_2125_ = v___x_2118_;
v_isShared_2126_ = v_isSharedCheck_2157_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_diag_2123_);
lean_inc(v_postponed_2122_);
lean_inc(v_zetaDeltaFVarIds_2121_);
lean_inc(v_cache_2120_);
lean_inc(v_mctx_2119_);
lean_dec(v___x_2118_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2157_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v_depth_2127_; lean_object* v_levelAssignDepth_2128_; lean_object* v_lmvarCounter_2129_; lean_object* v_mvarCounter_2130_; lean_object* v_lDecls_2131_; lean_object* v_decls_2132_; lean_object* v_userNames_2133_; lean_object* v_lAssignment_2134_; lean_object* v_eAssignment_2135_; lean_object* v_dAssignment_2136_; lean_object* v_instanceTypedMVars_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2156_; 
v_depth_2127_ = lean_ctor_get(v_mctx_2119_, 0);
v_levelAssignDepth_2128_ = lean_ctor_get(v_mctx_2119_, 1);
v_lmvarCounter_2129_ = lean_ctor_get(v_mctx_2119_, 2);
v_mvarCounter_2130_ = lean_ctor_get(v_mctx_2119_, 3);
v_lDecls_2131_ = lean_ctor_get(v_mctx_2119_, 4);
v_decls_2132_ = lean_ctor_get(v_mctx_2119_, 5);
v_userNames_2133_ = lean_ctor_get(v_mctx_2119_, 6);
v_lAssignment_2134_ = lean_ctor_get(v_mctx_2119_, 7);
v_eAssignment_2135_ = lean_ctor_get(v_mctx_2119_, 8);
v_dAssignment_2136_ = lean_ctor_get(v_mctx_2119_, 9);
v_instanceTypedMVars_2137_ = lean_ctor_get(v_mctx_2119_, 10);
v_isSharedCheck_2156_ = !lean_is_exclusive(v_mctx_2119_);
if (v_isSharedCheck_2156_ == 0)
{
v___x_2139_ = v_mctx_2119_;
v_isShared_2140_ = v_isSharedCheck_2156_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_instanceTypedMVars_2137_);
lean_inc(v_dAssignment_2136_);
lean_inc(v_eAssignment_2135_);
lean_inc(v_lAssignment_2134_);
lean_inc(v_userNames_2133_);
lean_inc(v_decls_2132_);
lean_inc(v_lDecls_2131_);
lean_inc(v_mvarCounter_2130_);
lean_inc(v_lmvarCounter_2129_);
lean_inc(v_levelAssignDepth_2128_);
lean_inc(v_depth_2127_);
lean_dec(v_mctx_2119_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2156_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2141_; lean_object* v___x_2143_; 
v___x_2141_ = lean_box(0);
if (v_isShared_2112_ == 0)
{
lean_ctor_set(v___x_2111_, 1, v_a_2114_);
v___x_2143_ = v___x_2111_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_userName_2102_);
lean_ctor_set(v_reuseFailAlloc_2155_, 1, v_a_2114_);
lean_ctor_set(v_reuseFailAlloc_2155_, 2, v_type_2104_);
lean_ctor_set(v_reuseFailAlloc_2155_, 3, v_depth_2105_);
lean_ctor_set(v_reuseFailAlloc_2155_, 4, v_localInstances_2106_);
lean_ctor_set(v_reuseFailAlloc_2155_, 5, v_numScopeArgs_2108_);
lean_ctor_set(v_reuseFailAlloc_2155_, 6, v_index_2109_);
lean_ctor_set_uint8(v_reuseFailAlloc_2155_, sizeof(void*)*7, v_kind_2107_);
v___x_2143_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_object* v___x_2144_; lean_object* v___x_2146_; 
v___x_2144_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1___redArg(v_decls_2132_, v_mvarId_2089_, v___x_2143_);
if (v_isShared_2140_ == 0)
{
lean_ctor_set(v___x_2139_, 5, v___x_2144_);
v___x_2146_ = v___x_2139_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v_depth_2127_);
lean_ctor_set(v_reuseFailAlloc_2154_, 1, v_levelAssignDepth_2128_);
lean_ctor_set(v_reuseFailAlloc_2154_, 2, v_lmvarCounter_2129_);
lean_ctor_set(v_reuseFailAlloc_2154_, 3, v_mvarCounter_2130_);
lean_ctor_set(v_reuseFailAlloc_2154_, 4, v_lDecls_2131_);
lean_ctor_set(v_reuseFailAlloc_2154_, 5, v___x_2144_);
lean_ctor_set(v_reuseFailAlloc_2154_, 6, v_userNames_2133_);
lean_ctor_set(v_reuseFailAlloc_2154_, 7, v_lAssignment_2134_);
lean_ctor_set(v_reuseFailAlloc_2154_, 8, v_eAssignment_2135_);
lean_ctor_set(v_reuseFailAlloc_2154_, 9, v_dAssignment_2136_);
lean_ctor_set(v_reuseFailAlloc_2154_, 10, v_instanceTypedMVars_2137_);
v___x_2146_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
lean_object* v___x_2148_; 
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 0, v___x_2146_);
v___x_2148_ = v___x_2125_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v___x_2146_);
lean_ctor_set(v_reuseFailAlloc_2153_, 1, v_cache_2120_);
lean_ctor_set(v_reuseFailAlloc_2153_, 2, v_zetaDeltaFVarIds_2121_);
lean_ctor_set(v_reuseFailAlloc_2153_, 3, v_postponed_2122_);
lean_ctor_set(v_reuseFailAlloc_2153_, 4, v_diag_2123_);
v___x_2148_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
lean_object* v___x_2149_; lean_object* v___x_2151_; 
v___x_2149_ = lean_st_ref_put(v___y_2094_, v___x_2148_);
if (v_isShared_2117_ == 0)
{
lean_ctor_set(v___x_2116_, 0, v___x_2141_);
v___x_2151_ = v___x_2116_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v___x_2141_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
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
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2166_; 
lean_del_object(v___x_2111_);
lean_dec(v_index_2109_);
lean_dec(v_numScopeArgs_2108_);
lean_dec_ref(v_localInstances_2106_);
lean_dec(v_depth_2105_);
lean_dec_ref(v_type_2104_);
lean_dec(v_userName_2102_);
lean_dec(v_mvarId_2089_);
v_a_2159_ = lean_ctor_get(v___x_2113_, 0);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2113_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2161_ = v___x_2113_;
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2113_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2164_; 
if (v_isShared_2162_ == 0)
{
v___x_2164_ = v___x_2161_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_a_2159_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
}
}
}
else
{
lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
lean_dec(v___x_2100_);
lean_dec(v_idx_2090_);
v___x_2168_ = lean_obj_once(&l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0___closed__1, &l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0___closed__1_once, _init_l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0___closed__1);
v___x_2169_ = l_Lean_MessageData_ofName(v_mvarId_2089_);
v___x_2170_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2170_, 0, v___x_2168_);
lean_ctor_set(v___x_2170_, 1, v___x_2169_);
v___x_2171_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1___redArg(v___x_2170_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_);
return v___x_2171_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0___boxed(lean_object* v_mvarId_2172_, lean_object* v_idx_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_){
_start:
{
lean_object* v_res_2181_; 
v_res_2181_ = l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0(v_mvarId_2172_, v_idx_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_);
lean_dec(v___y_2179_);
lean_dec_ref(v___y_2178_);
lean_dec(v___y_2177_);
lean_dec_ref(v___y_2176_);
lean_dec(v___y_2175_);
lean_dec_ref(v___y_2174_);
return v_res_2181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_addSubGoalAsVC(lean_object* v_goal_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_){
_start:
{
lean_object* v_initialCtxSize_2190_; lean_object* v___x_2191_; 
v_initialCtxSize_2190_ = lean_ctor_get(v_a_2183_, 5);
lean_inc(v_initialCtxSize_2190_);
lean_inc(v_goal_2182_);
v___x_2191_ = l_Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0(v_goal_2182_, v_initialCtxSize_2190_, v_a_2183_, v_a_2184_, v_a_2185_, v_a_2186_, v_a_2187_, v_a_2188_);
if (lean_obj_tag(v___x_2191_) == 0)
{
lean_object* v___x_2192_; 
lean_dec_ref_known(v___x_2191_, 1);
lean_inc(v_goal_2182_);
v___x_2192_ = l_Lean_MVarId_getType(v_goal_2182_, v_a_2185_, v_a_2186_, v_a_2187_, v_a_2188_);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_object* v_a_2193_; uint8_t v___x_2194_; lean_object* v___x_2195_; 
v_a_2193_ = lean_ctor_get(v___x_2192_, 0);
lean_inc(v_a_2193_);
lean_dec_ref_known(v___x_2192_, 1);
v___x_2194_ = 2;
lean_inc(v_goal_2182_);
v___x_2195_ = l_Lean_MVarId_setKind___redArg(v_goal_2182_, v___x_2194_, v_a_2186_);
if (lean_obj_tag(v___x_2195_) == 0)
{
lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2238_; 
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2238_ == 0)
{
lean_object* v_unused_2239_; 
v_unused_2239_ = lean_ctor_get(v___x_2195_, 0);
lean_dec(v_unused_2239_);
v___x_2197_ = v___x_2195_;
v_isShared_2198_ = v_isSharedCheck_2238_;
goto v_resetjp_2196_;
}
else
{
lean_dec(v___x_2195_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2238_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2199_; lean_object* v_env_2200_; uint8_t v___x_2201_; 
v___x_2199_ = lean_st_ref_get(v_a_2188_);
v_env_2200_ = lean_ctor_get(v___x_2199_, 0);
lean_inc_ref(v_env_2200_);
lean_dec(v___x_2199_);
v___x_2201_ = l_Lean_Elab_Tactic_Do_SpecAttr_isSpecInvariantType(v_env_2200_, v_a_2193_);
lean_dec(v_a_2193_);
if (v___x_2201_ == 0)
{
lean_object* v___x_2202_; lean_object* v_fuel_2203_; lean_object* v_simpState_2204_; lean_object* v_invariants_2205_; lean_object* v_vcs_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2219_; 
v___x_2202_ = lean_st_ref_take(v_a_2184_);
v_fuel_2203_ = lean_ctor_get(v___x_2202_, 0);
v_simpState_2204_ = lean_ctor_get(v___x_2202_, 1);
v_invariants_2205_ = lean_ctor_get(v___x_2202_, 2);
v_vcs_2206_ = lean_ctor_get(v___x_2202_, 3);
v_isSharedCheck_2219_ = !lean_is_exclusive(v___x_2202_);
if (v_isSharedCheck_2219_ == 0)
{
v___x_2208_ = v___x_2202_;
v_isShared_2209_ = v_isSharedCheck_2219_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_vcs_2206_);
lean_inc(v_invariants_2205_);
lean_inc(v_simpState_2204_);
lean_inc(v_fuel_2203_);
lean_dec(v___x_2202_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2219_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2213_; 
v___x_2210_ = lean_box(0);
v___x_2211_ = lean_array_push(v_vcs_2206_, v_goal_2182_);
if (v_isShared_2209_ == 0)
{
lean_ctor_set(v___x_2208_, 3, v___x_2211_);
v___x_2213_ = v___x_2208_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_fuel_2203_);
lean_ctor_set(v_reuseFailAlloc_2218_, 1, v_simpState_2204_);
lean_ctor_set(v_reuseFailAlloc_2218_, 2, v_invariants_2205_);
lean_ctor_set(v_reuseFailAlloc_2218_, 3, v___x_2211_);
v___x_2213_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
lean_object* v___x_2214_; lean_object* v___x_2216_; 
v___x_2214_ = lean_st_ref_put(v_a_2184_, v___x_2213_);
if (v_isShared_2198_ == 0)
{
lean_ctor_set(v___x_2197_, 0, v___x_2210_);
v___x_2216_ = v___x_2197_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v___x_2210_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
}
else
{
lean_object* v___x_2220_; lean_object* v_fuel_2221_; lean_object* v_simpState_2222_; lean_object* v_invariants_2223_; lean_object* v_vcs_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2237_; 
v___x_2220_ = lean_st_ref_take(v_a_2184_);
v_fuel_2221_ = lean_ctor_get(v___x_2220_, 0);
v_simpState_2222_ = lean_ctor_get(v___x_2220_, 1);
v_invariants_2223_ = lean_ctor_get(v___x_2220_, 2);
v_vcs_2224_ = lean_ctor_get(v___x_2220_, 3);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2220_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2226_ = v___x_2220_;
v_isShared_2227_ = v_isSharedCheck_2237_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_vcs_2224_);
lean_inc(v_invariants_2223_);
lean_inc(v_simpState_2222_);
lean_inc(v_fuel_2221_);
lean_dec(v___x_2220_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2237_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2231_; 
v___x_2228_ = lean_box(0);
v___x_2229_ = lean_array_push(v_invariants_2223_, v_goal_2182_);
if (v_isShared_2227_ == 0)
{
lean_ctor_set(v___x_2226_, 2, v___x_2229_);
v___x_2231_ = v___x_2226_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_fuel_2221_);
lean_ctor_set(v_reuseFailAlloc_2236_, 1, v_simpState_2222_);
lean_ctor_set(v_reuseFailAlloc_2236_, 2, v___x_2229_);
lean_ctor_set(v_reuseFailAlloc_2236_, 3, v_vcs_2224_);
v___x_2231_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
lean_object* v___x_2232_; lean_object* v___x_2234_; 
v___x_2232_ = lean_st_ref_put(v_a_2184_, v___x_2231_);
if (v_isShared_2198_ == 0)
{
lean_ctor_set(v___x_2197_, 0, v___x_2228_);
v___x_2234_ = v___x_2197_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v___x_2228_);
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
}
else
{
lean_dec(v_a_2193_);
lean_dec(v_goal_2182_);
return v___x_2195_;
}
}
else
{
lean_object* v_a_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2247_; 
lean_dec(v_goal_2182_);
v_a_2240_ = lean_ctor_get(v___x_2192_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2192_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2242_ = v___x_2192_;
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_a_2240_);
lean_dec(v___x_2192_);
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
lean_dec(v_goal_2182_);
return v___x_2191_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_addSubGoalAsVC___boxed(lean_object* v_goal_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_Lean_Elab_Tactic_Do_addSubGoalAsVC(v_goal_2248_, v_a_2249_, v_a_2250_, v_a_2251_, v_a_2252_, v_a_2253_, v_a_2254_);
lean_dec(v_a_2254_);
lean_dec_ref(v_a_2253_);
lean_dec(v_a_2252_);
lean_dec_ref(v_a_2251_);
lean_dec(v_a_2250_);
lean_dec_ref(v_a_2249_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1(lean_object* v_00_u03b2_2257_, lean_object* v_x_2258_, lean_object* v_x_2259_, lean_object* v_x_2260_){
_start:
{
lean_object* v___x_2261_; 
v___x_2261_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1___redArg(v_x_2258_, v_x_2259_, v_x_2260_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0_spec__1(lean_object* v_range_2262_, lean_object* v_b_2263_, lean_object* v_i_2264_, lean_object* v_hs_2265_, lean_object* v_hl_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_){
_start:
{
lean_object* v___x_2274_; 
v___x_2274_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0_spec__1___redArg(v_range_2262_, v_b_2263_, v_i_2264_, v___y_2271_, v___y_2272_);
return v___x_2274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0_spec__1___boxed(lean_object* v_range_2275_, lean_object* v_b_2276_, lean_object* v_i_2277_, lean_object* v_hs_2278_, lean_object* v_hl_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Basic_0__Lean_Meta_freshenUserNamesSinceIdx___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__0_spec__1(v_range_2275_, v_b_2276_, v_i_2277_, v_hs_2278_, v_hl_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_);
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec_ref(v_range_2275_);
return v_res_2287_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2288_, lean_object* v_x_2289_, size_t v_x_2290_, size_t v_x_2291_, lean_object* v_x_2292_, lean_object* v_x_2293_){
_start:
{
lean_object* v___x_2294_; 
v___x_2294_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___redArg(v_x_2289_, v_x_2290_, v_x_2291_, v_x_2292_, v_x_2293_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2295_, lean_object* v_x_2296_, lean_object* v_x_2297_, lean_object* v_x_2298_, lean_object* v_x_2299_, lean_object* v_x_2300_){
_start:
{
size_t v_x_7929__boxed_2301_; size_t v_x_7930__boxed_2302_; lean_object* v_res_2303_; 
v_x_7929__boxed_2301_ = lean_unbox_usize(v_x_2297_);
lean_dec(v_x_2297_);
v_x_7930__boxed_2302_ = lean_unbox_usize(v_x_2298_);
lean_dec(v_x_2298_);
v_res_2303_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3(v_00_u03b2_2295_, v_x_2296_, v_x_7929__boxed_2301_, v_x_7930__boxed_2302_, v_x_2299_, v_x_2300_);
return v_res_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_2304_, lean_object* v_n_2305_, lean_object* v_k_2306_, lean_object* v_v_2307_){
_start:
{
lean_object* v___x_2308_; 
v___x_2308_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__4___redArg(v_n_2305_, v_k_2306_, v_v_2307_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_2309_, size_t v_depth_2310_, lean_object* v_keys_2311_, lean_object* v_vals_2312_, lean_object* v_heq_2313_, lean_object* v_i_2314_, lean_object* v_entries_2315_){
_start:
{
lean_object* v___x_2316_; 
v___x_2316_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__5___redArg(v_depth_2310_, v_keys_2311_, v_vals_2312_, v_i_2314_, v_entries_2315_);
return v___x_2316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b2_2317_, lean_object* v_depth_2318_, lean_object* v_keys_2319_, lean_object* v_vals_2320_, lean_object* v_heq_2321_, lean_object* v_i_2322_, lean_object* v_entries_2323_){
_start:
{
size_t v_depth_boxed_2324_; lean_object* v_res_2325_; 
v_depth_boxed_2324_ = lean_unbox_usize(v_depth_2318_);
lean_dec(v_depth_2318_);
v_res_2325_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__5(v_00_u03b2_2317_, v_depth_boxed_2324_, v_keys_2319_, v_vals_2320_, v_heq_2321_, v_i_2322_, v_entries_2323_);
lean_dec_ref(v_vals_2320_);
lean_dec_ref(v_keys_2319_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_2326_, lean_object* v_x_2327_, lean_object* v_x_2328_, lean_object* v_x_2329_, lean_object* v_x_2330_){
_start:
{
lean_object* v___x_2331_; 
v___x_2331_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_freshenLCtxUserNamesSinceIdx___at___00Lean_Elab_Tactic_Do_addSubGoalAsVC_spec__0_spec__1_spec__3_spec__4_spec__5___redArg(v_x_2327_, v_x_2328_, v_x_2329_, v_x_2330_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_emitVC(lean_object* v_subGoal_2332_, lean_object* v_name_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_){
_start:
{
lean_object* v___x_2341_; 
v___x_2341_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_subGoal_2332_, v_name_2333_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2341_) == 0)
{
lean_object* v_a_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v_a_2342_ = lean_ctor_get(v___x_2341_, 0);
lean_inc(v_a_2342_);
lean_dec_ref_known(v___x_2341_, 1);
v___x_2343_ = l_Lean_Expr_mvarId_x21(v_a_2342_);
v___x_2344_ = l_Lean_Elab_Tactic_Do_addSubGoalAsVC(v___x_2343_, v_a_2334_, v_a_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_);
if (lean_obj_tag(v___x_2344_) == 0)
{
lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2351_; 
v_isSharedCheck_2351_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2351_ == 0)
{
lean_object* v_unused_2352_; 
v_unused_2352_ = lean_ctor_get(v___x_2344_, 0);
lean_dec(v_unused_2352_);
v___x_2346_ = v___x_2344_;
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
else
{
lean_dec(v___x_2344_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2349_; 
if (v_isShared_2347_ == 0)
{
lean_ctor_set(v___x_2346_, 0, v_a_2342_);
v___x_2349_ = v___x_2346_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_a_2342_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
else
{
lean_object* v_a_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2360_; 
lean_dec(v_a_2342_);
v_a_2353_ = lean_ctor_get(v___x_2344_, 0);
v_isSharedCheck_2360_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2355_ = v___x_2344_;
v_isShared_2356_ = v_isSharedCheck_2360_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_a_2353_);
lean_dec(v___x_2344_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2360_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
lean_object* v___x_2358_; 
if (v_isShared_2356_ == 0)
{
v___x_2358_ = v___x_2355_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v_a_2353_);
v___x_2358_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
return v___x_2358_;
}
}
}
}
else
{
return v___x_2341_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_emitVC___boxed(lean_object* v_subGoal_2361_, lean_object* v_name_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_){
_start:
{
lean_object* v_res_2370_; 
v_res_2370_ = l_Lean_Elab_Tactic_Do_emitVC(v_subGoal_2361_, v_name_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_);
lean_dec(v_a_2368_);
lean_dec_ref(v_a_2367_);
lean_dec(v_a_2366_);
lean_dec_ref(v_a_2365_);
lean_dec(v_a_2364_);
lean_dec_ref(v_a_2363_);
return v_res_2370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_liftSimpM___redArg(lean_object* v_x_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_){
_start:
{
lean_object* v___x_2379_; lean_object* v_simpCtx_2380_; lean_object* v_simprocs_2381_; lean_object* v_fuel_2382_; lean_object* v_simpState_2383_; lean_object* v_invariants_2384_; lean_object* v_vcs_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2406_; 
v___x_2379_ = lean_st_ref_get(v_a_2373_);
v_simpCtx_2380_ = lean_ctor_get(v_a_2372_, 2);
v_simprocs_2381_ = lean_ctor_get(v_a_2372_, 3);
v_fuel_2382_ = lean_ctor_get(v___x_2379_, 0);
v_simpState_2383_ = lean_ctor_get(v___x_2379_, 1);
v_invariants_2384_ = lean_ctor_get(v___x_2379_, 2);
v_vcs_2385_ = lean_ctor_get(v___x_2379_, 3);
v_isSharedCheck_2406_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2387_ = v___x_2379_;
v_isShared_2388_ = v_isSharedCheck_2406_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_vcs_2385_);
lean_inc(v_invariants_2384_);
lean_inc(v_simpState_2383_);
lean_inc(v_fuel_2382_);
lean_dec(v___x_2379_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2406_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; 
lean_inc_ref(v_simprocs_2381_);
v___x_2389_ = l_Lean_Meta_Simp_mkDefaultMethodsCore(v_simprocs_2381_);
v___x_2390_ = l_Lean_Meta_Simp_Methods_toMethodsRefImpl(v___x_2389_);
lean_dec_ref(v___x_2389_);
v___x_2391_ = lean_st_mk_ref(v_simpState_2383_);
lean_inc(v_a_2377_);
lean_inc_ref(v_a_2376_);
lean_inc(v_a_2375_);
lean_inc_ref(v_a_2374_);
lean_inc(v___x_2391_);
lean_inc_ref(v_simpCtx_2380_);
v___x_2392_ = lean_apply_8(v_x_2371_, v___x_2390_, v_simpCtx_2380_, v___x_2391_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2377_, lean_box(0));
if (lean_obj_tag(v___x_2392_) == 0)
{
lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2405_; 
v_a_2393_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2395_ = v___x_2392_;
v_isShared_2396_ = v_isSharedCheck_2405_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2392_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2405_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2397_; lean_object* v___x_2399_; 
v___x_2397_ = lean_st_ref_get(v___x_2391_);
lean_dec(v___x_2391_);
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 1, v___x_2397_);
v___x_2399_ = v___x_2387_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_fuel_2382_);
lean_ctor_set(v_reuseFailAlloc_2404_, 1, v___x_2397_);
lean_ctor_set(v_reuseFailAlloc_2404_, 2, v_invariants_2384_);
lean_ctor_set(v_reuseFailAlloc_2404_, 3, v_vcs_2385_);
v___x_2399_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
lean_object* v___x_2400_; lean_object* v___x_2402_; 
v___x_2400_ = lean_st_ref_swap(v_a_2373_, v___x_2399_);
lean_dec(v___x_2400_);
if (v_isShared_2396_ == 0)
{
v___x_2402_ = v___x_2395_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v_a_2393_);
v___x_2402_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
return v___x_2402_;
}
}
}
}
else
{
lean_dec(v___x_2391_);
lean_del_object(v___x_2387_);
lean_dec_ref(v_vcs_2385_);
lean_dec_ref(v_invariants_2384_);
lean_dec(v_fuel_2382_);
return v___x_2392_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_liftSimpM___redArg___boxed(lean_object* v_x_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_){
_start:
{
lean_object* v_res_2415_; 
v_res_2415_ = l_Lean_Elab_Tactic_Do_liftSimpM___redArg(v_x_2407_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_, v_a_2412_, v_a_2413_);
lean_dec(v_a_2413_);
lean_dec_ref(v_a_2412_);
lean_dec(v_a_2411_);
lean_dec_ref(v_a_2410_);
lean_dec(v_a_2409_);
lean_dec_ref(v_a_2408_);
return v_res_2415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_liftSimpM(lean_object* v_00_u03b1_2416_, lean_object* v_x_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_, lean_object* v_a_2423_){
_start:
{
lean_object* v___x_2425_; 
v___x_2425_ = l_Lean_Elab_Tactic_Do_liftSimpM___redArg(v_x_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_, v_a_2422_, v_a_2423_);
return v___x_2425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_liftSimpM___boxed(lean_object* v_00_u03b1_2426_, lean_object* v_x_2427_, lean_object* v_a_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_){
_start:
{
lean_object* v_res_2435_; 
v_res_2435_ = l_Lean_Elab_Tactic_Do_liftSimpM(v_00_u03b1_2426_, v_x_2427_, v_a_2428_, v_a_2429_, v_a_2430_, v_a_2431_, v_a_2432_, v_a_2433_);
lean_dec(v_a_2433_);
lean_dec_ref(v_a_2432_);
lean_dec(v_a_2431_);
lean_dec_ref(v_a_2430_);
lean_dec(v_a_2429_);
lean_dec_ref(v_a_2428_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instMonadLiftSimpMVCGenM___lam__0(lean_object* v_00_u03b1_2436_, lean_object* v_x_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_){
_start:
{
lean_object* v___x_2445_; 
v___x_2445_ = l_Lean_Elab_Tactic_Do_liftSimpM___redArg(v_x_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_);
return v___x_2445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instMonadLiftSimpMVCGenM___lam__0___boxed(lean_object* v_00_u03b1_2446_, lean_object* v_x_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_){
_start:
{
lean_object* v_res_2455_; 
v_res_2455_ = l_Lean_Elab_Tactic_Do_instMonadLiftSimpMVCGenM___lam__0(v_00_u03b1_2446_, v_x_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec(v___y_2451_);
lean_dec_ref(v___y_2450_);
lean_dec(v___y_2449_);
lean_dec_ref(v___y_2448_);
return v_res_2455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withJP___redArg(lean_object* v_jp_2458_, lean_object* v_info_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_){
_start:
{
lean_object* v_config_2468_; lean_object* v_specThms_2469_; lean_object* v_simpCtx_2470_; lean_object* v_simprocs_2471_; lean_object* v_jps_2472_; lean_object* v_initialCtxSize_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; 
v_config_2468_ = lean_ctor_get(v_a_2461_, 0);
v_specThms_2469_ = lean_ctor_get(v_a_2461_, 1);
v_simpCtx_2470_ = lean_ctor_get(v_a_2461_, 2);
v_simprocs_2471_ = lean_ctor_get(v_a_2461_, 3);
v_jps_2472_ = lean_ctor_get(v_a_2461_, 4);
v_initialCtxSize_2473_ = lean_ctor_get(v_a_2461_, 5);
lean_inc(v_jps_2472_);
v___x_2474_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_jp_2458_, v_info_2459_, v_jps_2472_);
lean_inc(v_initialCtxSize_2473_);
lean_inc_ref(v_simprocs_2471_);
lean_inc_ref(v_simpCtx_2470_);
lean_inc_ref(v_specThms_2469_);
lean_inc_ref(v_config_2468_);
v___x_2475_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2475_, 0, v_config_2468_);
lean_ctor_set(v___x_2475_, 1, v_specThms_2469_);
lean_ctor_set(v___x_2475_, 2, v_simpCtx_2470_);
lean_ctor_set(v___x_2475_, 3, v_simprocs_2471_);
lean_ctor_set(v___x_2475_, 4, v___x_2474_);
lean_ctor_set(v___x_2475_, 5, v_initialCtxSize_2473_);
lean_inc(v_a_2466_);
lean_inc_ref(v_a_2465_);
lean_inc(v_a_2464_);
lean_inc_ref(v_a_2463_);
lean_inc(v_a_2462_);
v___x_2476_ = lean_apply_7(v_a_2460_, v___x_2475_, v_a_2462_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, lean_box(0));
return v___x_2476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withJP___redArg___boxed(lean_object* v_jp_2477_, lean_object* v_info_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_){
_start:
{
lean_object* v_res_2487_; 
v_res_2487_ = l_Lean_Elab_Tactic_Do_withJP___redArg(v_jp_2477_, v_info_2478_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_, v_a_2483_, v_a_2484_, v_a_2485_);
lean_dec(v_a_2485_);
lean_dec_ref(v_a_2484_);
lean_dec(v_a_2483_);
lean_dec_ref(v_a_2482_);
lean_dec(v_a_2481_);
lean_dec_ref(v_a_2480_);
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withJP(lean_object* v_00_u03b1_2488_, lean_object* v_jp_2489_, lean_object* v_info_2490_, lean_object* v_a_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_){
_start:
{
lean_object* v___x_2499_; 
v___x_2499_ = l_Lean_Elab_Tactic_Do_withJP___redArg(v_jp_2489_, v_info_2490_, v_a_2491_, v_a_2492_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withJP___boxed(lean_object* v_00_u03b1_2500_, lean_object* v_jp_2501_, lean_object* v_info_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_, lean_object* v_a_2507_, lean_object* v_a_2508_, lean_object* v_a_2509_, lean_object* v_a_2510_){
_start:
{
lean_object* v_res_2511_; 
v_res_2511_ = l_Lean_Elab_Tactic_Do_withJP(v_00_u03b1_2500_, v_jp_2501_, v_info_2502_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_, v_a_2509_);
lean_dec(v_a_2509_);
lean_dec_ref(v_a_2508_);
lean_dec(v_a_2507_);
lean_dec_ref(v_a_2506_);
lean_dec(v_a_2505_);
lean_dec_ref(v_a_2504_);
return v_res_2511_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Elab_Tactic_Do_knownJP_x3f_spec__0___redArg(lean_object* v_t_2512_, lean_object* v_k_2513_){
_start:
{
if (lean_obj_tag(v_t_2512_) == 0)
{
lean_object* v_k_2514_; lean_object* v_v_2515_; lean_object* v_l_2516_; lean_object* v_r_2517_; uint8_t v___x_2518_; 
v_k_2514_ = lean_ctor_get(v_t_2512_, 1);
v_v_2515_ = lean_ctor_get(v_t_2512_, 2);
v_l_2516_ = lean_ctor_get(v_t_2512_, 3);
v_r_2517_ = lean_ctor_get(v_t_2512_, 4);
v___x_2518_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2513_, v_k_2514_);
switch(v___x_2518_)
{
case 0:
{
v_t_2512_ = v_l_2516_;
goto _start;
}
case 1:
{
lean_object* v___x_2520_; 
lean_inc(v_v_2515_);
v___x_2520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2520_, 0, v_v_2515_);
return v___x_2520_;
}
default: 
{
v_t_2512_ = v_r_2517_;
goto _start;
}
}
}
else
{
lean_object* v___x_2522_; 
v___x_2522_ = lean_box(0);
return v___x_2522_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Elab_Tactic_Do_knownJP_x3f_spec__0___redArg___boxed(lean_object* v_t_2523_, lean_object* v_k_2524_){
_start:
{
lean_object* v_res_2525_; 
v_res_2525_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Elab_Tactic_Do_knownJP_x3f_spec__0___redArg(v_t_2523_, v_k_2524_);
lean_dec(v_k_2524_);
lean_dec(v_t_2523_);
return v_res_2525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_knownJP_x3f___redArg(lean_object* v_jp_2526_, lean_object* v_a_2527_){
_start:
{
lean_object* v_jps_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v_jps_2529_ = lean_ctor_get(v_a_2527_, 4);
v___x_2530_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Elab_Tactic_Do_knownJP_x3f_spec__0___redArg(v_jps_2529_, v_jp_2526_);
v___x_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2530_);
return v___x_2531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_knownJP_x3f___redArg___boxed(lean_object* v_jp_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_Lean_Elab_Tactic_Do_knownJP_x3f___redArg(v_jp_2532_, v_a_2533_);
lean_dec_ref(v_a_2533_);
lean_dec(v_jp_2532_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_knownJP_x3f(lean_object* v_jp_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Lean_Elab_Tactic_Do_knownJP_x3f___redArg(v_jp_2536_, v_a_2537_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_knownJP_x3f___boxed(lean_object* v_jp_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_, lean_object* v_a_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l_Lean_Elab_Tactic_Do_knownJP_x3f(v_jp_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_, v_a_2551_);
lean_dec(v_a_2551_);
lean_dec_ref(v_a_2550_);
lean_dec(v_a_2549_);
lean_dec_ref(v_a_2548_);
lean_dec(v_a_2547_);
lean_dec_ref(v_a_2546_);
lean_dec(v_jp_2545_);
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Elab_Tactic_Do_knownJP_x3f_spec__0(lean_object* v_00_u03b4_2554_, lean_object* v_t_2555_, lean_object* v_k_2556_){
_start:
{
lean_object* v___x_2557_; 
v___x_2557_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Elab_Tactic_Do_knownJP_x3f_spec__0___redArg(v_t_2555_, v_k_2556_);
return v___x_2557_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Elab_Tactic_Do_knownJP_x3f_spec__0___boxed(lean_object* v_00_u03b4_2558_, lean_object* v_t_2559_, lean_object* v_k_2560_){
_start:
{
lean_object* v_res_2561_; 
v_res_2561_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Elab_Tactic_Do_knownJP_x3f_spec__0(v_00_u03b4_2558_, v_t_2559_, v_k_2560_);
lean_dec(v_k_2560_);
lean_dec(v_t_2559_);
return v_res_2561_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_isDuplicable(lean_object* v_e_2567_){
_start:
{
switch(lean_obj_tag(v_e_2567_))
{
case 5:
{
lean_object* v___x_2568_; uint8_t v___x_2569_; 
v___x_2568_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_isDuplicable___closed__2));
v___x_2569_ = l_Lean_Expr_isAppOf(v_e_2567_, v___x_2568_);
return v___x_2569_;
}
case 6:
{
uint8_t v___x_2570_; 
v___x_2570_ = 0;
return v___x_2570_;
}
case 7:
{
uint8_t v___x_2571_; 
v___x_2571_ = 0;
return v___x_2571_;
}
case 8:
{
uint8_t v___x_2572_; 
v___x_2572_ = 0;
return v___x_2572_;
}
case 10:
{
lean_object* v_expr_2573_; 
v_expr_2573_ = lean_ctor_get(v_e_2567_, 1);
v_e_2567_ = v_expr_2573_;
goto _start;
}
case 11:
{
lean_object* v_struct_2575_; 
v_struct_2575_ = lean_ctor_get(v_e_2567_, 2);
v_e_2567_ = v_struct_2575_;
goto _start;
}
default: 
{
uint8_t v___x_2577_; 
v___x_2577_ = 1;
return v___x_2577_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_isDuplicable___boxed(lean_object* v_e_2578_){
_start:
{
uint8_t v_res_2579_; lean_object* v_r_2580_; 
v_res_2579_ = l_Lean_Elab_Tactic_Do_isDuplicable(v_e_2578_);
lean_dec_ref(v_e_2578_);
v_r_2580_ = lean_box(v_res_2579_);
return v_r_2580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___redArg___lam__0(lean_object* v_k_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v_b_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_){
_start:
{
lean_object* v___x_2590_; 
lean_inc(v___y_2588_);
lean_inc_ref(v___y_2587_);
lean_inc(v___y_2586_);
lean_inc_ref(v___y_2585_);
lean_inc(v___y_2583_);
lean_inc_ref(v___y_2582_);
v___x_2590_ = lean_apply_8(v_k_2581_, v_b_2584_, v___y_2582_, v___y_2583_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, lean_box(0));
return v___x_2590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___redArg___lam__0___boxed(lean_object* v_k_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v_b_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_){
_start:
{
lean_object* v_res_2600_; 
v_res_2600_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___redArg___lam__0(v_k_2591_, v___y_2592_, v___y_2593_, v_b_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_);
lean_dec(v___y_2598_);
lean_dec_ref(v___y_2597_);
lean_dec(v___y_2596_);
lean_dec_ref(v___y_2595_);
lean_dec(v___y_2593_);
lean_dec_ref(v___y_2592_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___redArg(lean_object* v_name_2601_, lean_object* v_type_2602_, lean_object* v_val_2603_, lean_object* v_k_2604_, uint8_t v_nondep_2605_, uint8_t v_kind_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_){
_start:
{
lean_object* v___f_2614_; lean_object* v___x_2615_; 
lean_inc(v___y_2608_);
lean_inc_ref(v___y_2607_);
v___f_2614_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2614_, 0, v_k_2604_);
lean_closure_set(v___f_2614_, 1, v___y_2607_);
lean_closure_set(v___f_2614_, 2, v___y_2608_);
v___x_2615_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2601_, v_type_2602_, v_val_2603_, v___f_2614_, v_nondep_2605_, v_kind_2606_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_);
if (lean_obj_tag(v___x_2615_) == 0)
{
return v___x_2615_;
}
else
{
lean_object* v_a_2616_; lean_object* v___x_2618_; uint8_t v_isShared_2619_; uint8_t v_isSharedCheck_2623_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2623_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2623_ == 0)
{
v___x_2618_ = v___x_2615_;
v_isShared_2619_ = v_isSharedCheck_2623_;
goto v_resetjp_2617_;
}
else
{
lean_inc(v_a_2616_);
lean_dec(v___x_2615_);
v___x_2618_ = lean_box(0);
v_isShared_2619_ = v_isSharedCheck_2623_;
goto v_resetjp_2617_;
}
v_resetjp_2617_:
{
lean_object* v___x_2621_; 
if (v_isShared_2619_ == 0)
{
v___x_2621_ = v___x_2618_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v_a_2616_);
v___x_2621_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
return v___x_2621_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___redArg___boxed(lean_object* v_name_2624_, lean_object* v_type_2625_, lean_object* v_val_2626_, lean_object* v_k_2627_, lean_object* v_nondep_2628_, lean_object* v_kind_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_){
_start:
{
uint8_t v_nondep_boxed_2637_; uint8_t v_kind_boxed_2638_; lean_object* v_res_2639_; 
v_nondep_boxed_2637_ = lean_unbox(v_nondep_2628_);
v_kind_boxed_2638_ = lean_unbox(v_kind_2629_);
v_res_2639_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___redArg(v_name_2624_, v_type_2625_, v_val_2626_, v_k_2627_, v_nondep_boxed_2637_, v_kind_boxed_2638_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_);
lean_dec(v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec(v___y_2633_);
lean_dec_ref(v___y_2632_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
return v_res_2639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0(lean_object* v_00_u03b1_2640_, lean_object* v_name_2641_, lean_object* v_type_2642_, lean_object* v_val_2643_, lean_object* v_k_2644_, uint8_t v_nondep_2645_, uint8_t v_kind_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_){
_start:
{
lean_object* v___x_2654_; 
v___x_2654_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___redArg(v_name_2641_, v_type_2642_, v_val_2643_, v_k_2644_, v_nondep_2645_, v_kind_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_);
return v___x_2654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___boxed(lean_object* v_00_u03b1_2655_, lean_object* v_name_2656_, lean_object* v_type_2657_, lean_object* v_val_2658_, lean_object* v_k_2659_, lean_object* v_nondep_2660_, lean_object* v_kind_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_){
_start:
{
uint8_t v_nondep_boxed_2669_; uint8_t v_kind_boxed_2670_; lean_object* v_res_2671_; 
v_nondep_boxed_2669_ = lean_unbox(v_nondep_2660_);
v_kind_boxed_2670_ = lean_unbox(v_kind_2661_);
v_res_2671_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0(v_00_u03b1_2655_, v_name_2656_, v_type_2657_, v_val_2658_, v_k_2659_, v_nondep_boxed_2669_, v_kind_boxed_2670_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_);
lean_dec(v___y_2667_);
lean_dec_ref(v___y_2666_);
lean_dec(v___y_2665_);
lean_dec_ref(v___y_2664_);
lean_dec(v___y_2663_);
lean_dec_ref(v___y_2662_);
return v_res_2671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__0(lean_object* v___x_2672_, lean_object* v_x_2673_, uint8_t v___x_2674_, uint8_t v___x_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_){
_start:
{
lean_object* v___x_2684_; 
v___x_2684_ = l_Lean_Meta_mkLetFVars(v___x_2672_, v_x_2673_, v___x_2674_, v___x_2674_, v___x_2675_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_);
return v___x_2684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__0___boxed(lean_object* v___x_2685_, lean_object* v_x_2686_, lean_object* v___x_2687_, lean_object* v___x_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_){
_start:
{
uint8_t v___x_1510__boxed_2697_; uint8_t v___x_1511__boxed_2698_; lean_object* v_res_2699_; 
v___x_1510__boxed_2697_ = lean_unbox(v___x_2687_);
v___x_1511__boxed_2698_ = lean_unbox(v___x_2688_);
v_res_2699_ = l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__0(v___x_2685_, v_x_2686_, v___x_1510__boxed_2697_, v___x_1511__boxed_2698_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_);
lean_dec(v___y_2695_);
lean_dec_ref(v___y_2694_);
lean_dec(v___y_2693_);
lean_dec_ref(v___y_2692_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v___y_2689_);
lean_dec_ref(v___x_2685_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__1(lean_object* v_fv_2700_, uint8_t v___x_2701_, lean_object* v_x_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_){
_start:
{
lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; uint8_t v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___f_2716_; lean_object* v___x_2717_; 
v___x_2710_ = lean_unsigned_to_nat(1u);
v___x_2711_ = lean_mk_empty_array_with_capacity(v___x_2710_);
v___x_2712_ = lean_array_push(v___x_2711_, v_fv_2700_);
v___x_2713_ = 1;
v___x_2714_ = lean_box(v___x_2701_);
v___x_2715_ = lean_box(v___x_2713_);
v___f_2716_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__0___boxed), 12, 4);
lean_closure_set(v___f_2716_, 0, v___x_2712_);
lean_closure_set(v___f_2716_, 1, v_x_2702_);
lean_closure_set(v___f_2716_, 2, v___x_2714_);
lean_closure_set(v___f_2716_, 3, v___x_2715_);
v___x_2717_ = l_Lean_Elab_Tactic_Do_liftSimpM___redArg(v___f_2716_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_);
return v___x_2717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__1___boxed(lean_object* v_fv_2718_, lean_object* v___x_2719_, lean_object* v_x_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_){
_start:
{
uint8_t v___x_1546__boxed_2728_; lean_object* v_res_2729_; 
v___x_1546__boxed_2728_ = lean_unbox(v___x_2719_);
v_res_2729_ = l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__1(v_fv_2718_, v___x_1546__boxed_2728_, v_x_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
lean_dec(v___y_2726_);
lean_dec_ref(v___y_2725_);
lean_dec(v___y_2724_);
lean_dec_ref(v___y_2723_);
lean_dec(v___y_2722_);
lean_dec_ref(v___y_2721_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__2(lean_object* v_k_2730_, lean_object* v_fv_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_){
_start:
{
uint8_t v___x_2739_; lean_object* v___x_2740_; lean_object* v___f_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; 
v___x_2739_ = 1;
v___x_2740_ = lean_box(v___x_2739_);
lean_inc_ref(v_fv_2731_);
v___f_2741_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__1___boxed), 10, 2);
lean_closure_set(v___f_2741_, 0, v_fv_2731_);
lean_closure_set(v___f_2741_, 1, v___x_2740_);
v___x_2742_ = lean_box(v___x_2739_);
lean_inc(v___y_2737_);
lean_inc_ref(v___y_2736_);
lean_inc(v___y_2735_);
lean_inc_ref(v___y_2734_);
lean_inc(v___y_2733_);
lean_inc_ref(v___y_2732_);
v___x_2743_ = lean_apply_10(v_k_2730_, v___x_2742_, v_fv_2731_, v___f_2741_, v___y_2732_, v___y_2733_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, lean_box(0));
return v___x_2743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__2___boxed(lean_object* v_k_2744_, lean_object* v_fv_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_){
_start:
{
lean_object* v_res_2753_; 
v_res_2753_ = l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__2(v_k_2744_, v_fv_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_);
lean_dec(v___y_2751_);
lean_dec_ref(v___y_2750_);
lean_dec(v___y_2749_);
lean_dec_ref(v___y_2748_);
lean_dec(v___y_2747_);
lean_dec_ref(v___y_2746_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__3(lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_){
_start:
{
lean_object* v___x_2762_; 
v___x_2762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2762_, 0, v___y_2754_);
return v___x_2762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__3___boxed(lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_){
_start:
{
lean_object* v_res_2771_; 
v_res_2771_ = l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__3(v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_);
lean_dec(v___y_2769_);
lean_dec_ref(v___y_2768_);
lean_dec(v___y_2767_);
lean_dec_ref(v___y_2766_);
lean_dec(v___y_2765_);
lean_dec_ref(v___y_2764_);
return v_res_2771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg(lean_object* v_name_2773_, lean_object* v_type_2774_, lean_object* v_val_2775_, lean_object* v_k_2776_, uint8_t v_kind_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_, lean_object* v_a_2780_, lean_object* v_a_2781_, lean_object* v_a_2782_, lean_object* v_a_2783_){
_start:
{
uint8_t v___x_2785_; 
v___x_2785_ = l_Lean_Elab_Tactic_Do_isDuplicable(v_val_2775_);
if (v___x_2785_ == 0)
{
lean_object* v___f_2786_; lean_object* v___x_2787_; 
v___f_2786_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___lam__2___boxed), 9, 1);
lean_closure_set(v___f_2786_, 0, v_k_2776_);
v___x_2787_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Tactic_Do_withLetDeclShared_spec__0___redArg(v_name_2773_, v_type_2774_, v_val_2775_, v___f_2786_, v___x_2785_, v_kind_2777_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_, v_a_2782_, v_a_2783_);
return v___x_2787_;
}
else
{
lean_object* v___f_2788_; uint8_t v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
lean_dec_ref(v_type_2774_);
lean_dec(v_name_2773_);
v___f_2788_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___closed__0));
v___x_2789_ = 0;
v___x_2790_ = lean_box(v___x_2789_);
lean_inc(v_a_2783_);
lean_inc_ref(v_a_2782_);
lean_inc(v_a_2781_);
lean_inc_ref(v_a_2780_);
lean_inc(v_a_2779_);
lean_inc_ref(v_a_2778_);
v___x_2791_ = lean_apply_10(v_k_2776_, v___x_2790_, v_val_2775_, v___f_2788_, v_a_2778_, v_a_2779_, v_a_2780_, v_a_2781_, v_a_2782_, v_a_2783_, lean_box(0));
return v___x_2791_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg___boxed(lean_object* v_name_2792_, lean_object* v_type_2793_, lean_object* v_val_2794_, lean_object* v_k_2795_, lean_object* v_kind_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_, lean_object* v_a_2799_, lean_object* v_a_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_){
_start:
{
uint8_t v_kind_boxed_2804_; lean_object* v_res_2805_; 
v_kind_boxed_2804_ = lean_unbox(v_kind_2796_);
v_res_2805_ = l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg(v_name_2792_, v_type_2793_, v_val_2794_, v_k_2795_, v_kind_boxed_2804_, v_a_2797_, v_a_2798_, v_a_2799_, v_a_2800_, v_a_2801_, v_a_2802_);
lean_dec(v_a_2802_);
lean_dec_ref(v_a_2801_);
lean_dec(v_a_2800_);
lean_dec_ref(v_a_2799_);
lean_dec(v_a_2798_);
lean_dec_ref(v_a_2797_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared(lean_object* v_00_u03b1_2806_, lean_object* v_name_2807_, lean_object* v_type_2808_, lean_object* v_val_2809_, lean_object* v_k_2810_, uint8_t v_kind_2811_, lean_object* v_a_2812_, lean_object* v_a_2813_, lean_object* v_a_2814_, lean_object* v_a_2815_, lean_object* v_a_2816_, lean_object* v_a_2817_){
_start:
{
lean_object* v___x_2819_; 
v___x_2819_ = l_Lean_Elab_Tactic_Do_withLetDeclShared___redArg(v_name_2807_, v_type_2808_, v_val_2809_, v_k_2810_, v_kind_2811_, v_a_2812_, v_a_2813_, v_a_2814_, v_a_2815_, v_a_2816_, v_a_2817_);
return v___x_2819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLetDeclShared___boxed(lean_object* v_00_u03b1_2820_, lean_object* v_name_2821_, lean_object* v_type_2822_, lean_object* v_val_2823_, lean_object* v_k_2824_, lean_object* v_kind_2825_, lean_object* v_a_2826_, lean_object* v_a_2827_, lean_object* v_a_2828_, lean_object* v_a_2829_, lean_object* v_a_2830_, lean_object* v_a_2831_, lean_object* v_a_2832_){
_start:
{
uint8_t v_kind_boxed_2833_; lean_object* v_res_2834_; 
v_kind_boxed_2833_ = lean_unbox(v_kind_2825_);
v_res_2834_ = l_Lean_Elab_Tactic_Do_withLetDeclShared(v_00_u03b1_2820_, v_name_2821_, v_type_2822_, v_val_2823_, v_k_2824_, v_kind_boxed_2833_, v_a_2826_, v_a_2827_, v_a_2828_, v_a_2829_, v_a_2830_, v_a_2831_);
lean_dec(v_a_2831_);
lean_dec_ref(v_a_2830_);
lean_dec(v_a_2829_);
lean_dec_ref(v_a_2828_);
lean_dec(v_a_2827_);
lean_dec_ref(v_a_2826_);
return v_res_2834_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_isJP(lean_object* v_n_2838_){
_start:
{
lean_object* v___x_2839_; lean_object* v___x_2840_; uint8_t v___x_2841_; 
v___x_2839_ = l_Lean_Name_eraseMacroScopes(v_n_2838_);
v___x_2840_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_isJP___closed__1));
v___x_2841_ = lean_name_eq(v___x_2839_, v___x_2840_);
lean_dec(v___x_2839_);
return v___x_2841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_isJP___boxed(lean_object* v_n_2842_){
_start:
{
uint8_t v_res_2843_; lean_object* v_r_2844_; 
v_res_2843_ = l_Lean_Elab_Tactic_Do_isJP(v_n_2842_);
lean_dec(v_n_2842_);
v_r_2844_ = lean_box(v_res_2843_);
return v_r_2844_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_getNumJoinParams___closed__1(void){
_start:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; 
v___x_2846_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_getNumJoinParams___closed__0));
v___x_2847_ = l_Lean_stringToMessageData(v___x_2846_);
return v___x_2847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getNumJoinParams(lean_object* v_joinTy_2848_, lean_object* v_resTy_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_){
_start:
{
uint8_t v___x_2855_; 
v___x_2855_ = l_Lean_Expr_isMData(v_joinTy_2848_);
if (v___x_2855_ == 0)
{
uint8_t v___x_2856_; 
v___x_2856_ = lean_expr_eqv(v_joinTy_2848_, v_resTy_2849_);
if (v___x_2856_ == 0)
{
uint8_t v___x_2857_; 
v___x_2857_ = l_Lean_Expr_isForall(v_joinTy_2848_);
if (v___x_2857_ == 0)
{
lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; 
v___x_2858_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_getNumJoinParams___closed__1, &l_Lean_Elab_Tactic_Do_getNumJoinParams___closed__1_once, _init_l_Lean_Elab_Tactic_Do_getNumJoinParams___closed__1);
v___x_2859_ = l_Lean_MessageData_ofExpr(v_joinTy_2848_);
v___x_2860_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2860_, 0, v___x_2858_);
lean_ctor_set(v___x_2860_, 1, v___x_2859_);
v___x_2861_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1___redArg(v___x_2860_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_);
return v___x_2861_;
}
else
{
lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; 
v___x_2862_ = l_Lean_Expr_consumeMData(v_joinTy_2848_);
lean_dec_ref(v_joinTy_2848_);
v___x_2863_ = l_Lean_Expr_bindingBody_x21(v___x_2862_);
lean_dec_ref(v___x_2862_);
v___x_2864_ = l_Lean_Elab_Tactic_Do_getNumJoinParams(v___x_2863_, v_resTy_2849_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_);
if (lean_obj_tag(v___x_2864_) == 0)
{
lean_object* v_a_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2874_; 
v_a_2865_ = lean_ctor_get(v___x_2864_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v___x_2864_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2867_ = v___x_2864_;
v_isShared_2868_ = v_isSharedCheck_2874_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_a_2865_);
lean_dec(v___x_2864_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2874_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2872_; 
v___x_2869_ = lean_unsigned_to_nat(1u);
v___x_2870_ = lean_nat_add(v___x_2869_, v_a_2865_);
lean_dec(v_a_2865_);
if (v_isShared_2868_ == 0)
{
lean_ctor_set(v___x_2867_, 0, v___x_2870_);
v___x_2872_ = v___x_2867_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v___x_2870_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
return v___x_2872_;
}
}
}
else
{
return v___x_2864_;
}
}
}
else
{
lean_object* v___x_2875_; lean_object* v___x_2876_; 
lean_dec_ref(v_joinTy_2848_);
v___x_2875_ = lean_unsigned_to_nat(0u);
v___x_2876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2875_);
return v___x_2876_;
}
}
else
{
lean_object* v___x_2877_; 
v___x_2877_ = l_Lean_Expr_consumeMData(v_joinTy_2848_);
lean_dec_ref(v_joinTy_2848_);
v_joinTy_2848_ = v___x_2877_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getNumJoinParams___boxed(lean_object* v_joinTy_2879_, lean_object* v_resTy_2880_, lean_object* v_a_2881_, lean_object* v_a_2882_, lean_object* v_a_2883_, lean_object* v_a_2884_, lean_object* v_a_2885_){
_start:
{
lean_object* v_res_2886_; 
v_res_2886_ = l_Lean_Elab_Tactic_Do_getNumJoinParams(v_joinTy_2879_, v_resTy_2880_, v_a_2881_, v_a_2882_, v_a_2883_, v_a_2884_);
lean_dec(v_a_2884_);
lean_dec_ref(v_a_2883_);
lean_dec(v_a_2882_);
lean_dec_ref(v_a_2881_);
lean_dec_ref(v_resTy_2880_);
return v_res_2886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_reduceProjBeta_x3f_go(lean_object* v_lastReduction_2888_, lean_object* v_f_2889_, lean_object* v_rargs_2890_, lean_object* v_a_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_){
_start:
{
switch(lean_obj_tag(v_f_2889_))
{
case 10:
{
lean_object* v_expr_2896_; 
v_expr_2896_ = lean_ctor_get(v_f_2889_, 1);
lean_inc_ref(v_expr_2896_);
lean_dec_ref_known(v_f_2889_, 2);
v_f_2889_ = v_expr_2896_;
goto _start;
}
case 5:
{
lean_object* v_fn_2898_; lean_object* v_arg_2899_; lean_object* v___x_2900_; 
v_fn_2898_ = lean_ctor_get(v_f_2889_, 0);
lean_inc_ref(v_fn_2898_);
v_arg_2899_ = lean_ctor_get(v_f_2889_, 1);
lean_inc_ref(v_arg_2899_);
lean_dec_ref_known(v_f_2889_, 2);
v___x_2900_ = lean_array_push(v_rargs_2890_, v_arg_2899_);
v_f_2889_ = v_fn_2898_;
v_rargs_2890_ = v___x_2900_;
goto _start;
}
case 6:
{
lean_object* v___x_2902_; lean_object* v___x_2903_; uint8_t v___x_2904_; 
v___x_2902_ = lean_array_get_size(v_rargs_2890_);
v___x_2903_ = lean_unsigned_to_nat(0u);
v___x_2904_ = lean_nat_dec_eq(v___x_2902_, v___x_2903_);
if (v___x_2904_ == 0)
{
lean_object* v_e_x27_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; 
lean_dec(v_lastReduction_2888_);
v_e_x27_2905_ = l_Lean_Expr_betaRev(v_f_2889_, v_rargs_2890_, v___x_2904_, v___x_2904_);
lean_dec_ref(v_rargs_2890_);
lean_inc_ref(v_e_x27_2905_);
v___x_2906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2906_, 0, v_e_x27_2905_);
v___x_2907_ = l_Lean_Expr_getAppFn(v_e_x27_2905_);
v___x_2908_ = l_Lean_Expr_getAppNumArgs(v_e_x27_2905_);
v___x_2909_ = lean_mk_empty_array_with_capacity(v___x_2908_);
lean_dec(v___x_2908_);
v___x_2910_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_e_x27_2905_, v___x_2909_);
v_lastReduction_2888_ = v___x_2906_;
v_f_2889_ = v___x_2907_;
v_rargs_2890_ = v___x_2910_;
goto _start;
}
else
{
lean_object* v___x_2912_; 
lean_dec_ref_known(v_f_2889_, 3);
lean_dec_ref(v_rargs_2890_);
v___x_2912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2912_, 0, v_lastReduction_2888_);
return v___x_2912_;
}
}
case 4:
{
lean_object* v_declName_2913_; lean_object* v___x_2914_; lean_object* v_env_2915_; lean_object* v___x_2916_; 
v_declName_2913_ = lean_ctor_get(v_f_2889_, 0);
v___x_2914_ = lean_st_ref_get(v_a_2894_);
v_env_2915_ = lean_ctor_get(v___x_2914_, 0);
lean_inc_ref(v_env_2915_);
lean_dec(v___x_2914_);
lean_inc(v_declName_2913_);
v___x_2916_ = l_Lean_Environment_getProjectionStructureName_x3f(v_env_2915_, v_declName_2913_);
if (lean_obj_tag(v___x_2916_) == 1)
{
lean_object* v_val_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2951_; 
v_val_2917_ = lean_ctor_get(v___x_2916_, 0);
v_isSharedCheck_2951_ = !lean_is_exclusive(v___x_2916_);
if (v_isSharedCheck_2951_ == 0)
{
v___x_2919_ = v___x_2916_;
v_isShared_2920_ = v_isSharedCheck_2951_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_val_2917_);
lean_dec(v___x_2916_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2951_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
if (lean_obj_tag(v_val_2917_) == 1)
{
lean_object* v_pre_2921_; 
v_pre_2921_ = lean_ctor_get(v_val_2917_, 0);
if (lean_obj_tag(v_pre_2921_) == 0)
{
lean_object* v_str_2922_; lean_object* v___x_2923_; uint8_t v___x_2924_; 
v_str_2922_ = lean_ctor_get(v_val_2917_, 1);
lean_inc_ref(v_str_2922_);
lean_dec_ref_known(v_val_2917_, 2);
v___x_2923_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_reduceProjBeta_x3f_go___closed__0));
v___x_2924_ = lean_string_dec_eq(v_str_2922_, v___x_2923_);
lean_dec_ref(v_str_2922_);
if (v___x_2924_ == 0)
{
lean_object* v___x_2926_; 
lean_dec_ref_known(v_f_2889_, 2);
lean_dec_ref(v_rargs_2890_);
if (v_isShared_2920_ == 0)
{
lean_ctor_set_tag(v___x_2919_, 0);
lean_ctor_set(v___x_2919_, 0, v_lastReduction_2888_);
v___x_2926_ = v___x_2919_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v_lastReduction_2888_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
return v___x_2926_;
}
}
else
{
lean_object* v___x_2928_; uint8_t v___x_2929_; lean_object* v___x_2930_; 
lean_del_object(v___x_2919_);
v___x_2928_ = l_Lean_mkAppRev(v_f_2889_, v_rargs_2890_);
lean_dec_ref(v_rargs_2890_);
v___x_2929_ = 0;
v___x_2930_ = l_Lean_Meta_unfoldDefinition_x3f(v___x_2928_, v___x_2929_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_);
if (lean_obj_tag(v___x_2930_) == 0)
{
lean_object* v_a_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2944_; 
v_a_2931_ = lean_ctor_get(v___x_2930_, 0);
v_isSharedCheck_2944_ = !lean_is_exclusive(v___x_2930_);
if (v_isSharedCheck_2944_ == 0)
{
v___x_2933_ = v___x_2930_;
v_isShared_2934_ = v_isSharedCheck_2944_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_a_2931_);
lean_dec(v___x_2930_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2944_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
if (lean_obj_tag(v_a_2931_) == 0)
{
lean_object* v___x_2936_; 
if (v_isShared_2934_ == 0)
{
lean_ctor_set(v___x_2933_, 0, v_lastReduction_2888_);
v___x_2936_ = v___x_2933_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v_lastReduction_2888_);
v___x_2936_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
return v___x_2936_;
}
}
else
{
lean_object* v_val_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
lean_del_object(v___x_2933_);
v_val_2938_ = lean_ctor_get(v_a_2931_, 0);
lean_inc(v_val_2938_);
lean_dec_ref_known(v_a_2931_, 1);
v___x_2939_ = l_Lean_Expr_getAppFn(v_val_2938_);
v___x_2940_ = l_Lean_Expr_getAppNumArgs(v_val_2938_);
v___x_2941_ = lean_mk_empty_array_with_capacity(v___x_2940_);
lean_dec(v___x_2940_);
v___x_2942_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_val_2938_, v___x_2941_);
v_f_2889_ = v___x_2939_;
v_rargs_2890_ = v___x_2942_;
goto _start;
}
}
}
else
{
lean_dec(v_lastReduction_2888_);
return v___x_2930_;
}
}
}
else
{
lean_object* v___x_2946_; 
lean_dec_ref_known(v_val_2917_, 2);
lean_dec_ref_known(v_f_2889_, 2);
lean_dec_ref(v_rargs_2890_);
if (v_isShared_2920_ == 0)
{
lean_ctor_set_tag(v___x_2919_, 0);
lean_ctor_set(v___x_2919_, 0, v_lastReduction_2888_);
v___x_2946_ = v___x_2919_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_lastReduction_2888_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
else
{
lean_object* v___x_2949_; 
lean_dec(v_val_2917_);
lean_dec_ref_known(v_f_2889_, 2);
lean_dec_ref(v_rargs_2890_);
if (v_isShared_2920_ == 0)
{
lean_ctor_set_tag(v___x_2919_, 0);
lean_ctor_set(v___x_2919_, 0, v_lastReduction_2888_);
v___x_2949_ = v___x_2919_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_lastReduction_2888_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
return v___x_2949_;
}
}
}
}
else
{
lean_object* v___x_2952_; 
lean_dec(v___x_2916_);
lean_dec_ref_known(v_f_2889_, 2);
lean_dec_ref(v_rargs_2890_);
v___x_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2952_, 0, v_lastReduction_2888_);
return v___x_2952_;
}
}
case 11:
{
lean_object* v___x_2953_; 
v___x_2953_ = l_Lean_Meta_reduceProj_x3f(v_f_2889_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_);
if (lean_obj_tag(v___x_2953_) == 0)
{
lean_object* v_a_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2975_; 
v_a_2954_ = lean_ctor_get(v___x_2953_, 0);
v_isSharedCheck_2975_ = !lean_is_exclusive(v___x_2953_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2956_ = v___x_2953_;
v_isShared_2957_ = v_isSharedCheck_2975_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_a_2954_);
lean_dec(v___x_2953_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2975_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
if (lean_obj_tag(v_a_2954_) == 0)
{
lean_object* v___x_2959_; 
lean_dec_ref(v_rargs_2890_);
if (v_isShared_2957_ == 0)
{
lean_ctor_set(v___x_2956_, 0, v_lastReduction_2888_);
v___x_2959_ = v___x_2956_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_lastReduction_2888_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
return v___x_2959_;
}
}
else
{
lean_object* v_val_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_2974_; 
lean_del_object(v___x_2956_);
lean_dec(v_lastReduction_2888_);
v_val_2961_ = lean_ctor_get(v_a_2954_, 0);
v_isSharedCheck_2974_ = !lean_is_exclusive(v_a_2954_);
if (v_isSharedCheck_2974_ == 0)
{
v___x_2963_ = v_a_2954_;
v_isShared_2964_ = v_isSharedCheck_2974_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_val_2961_);
lean_dec(v_a_2954_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_2974_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v___x_2965_; lean_object* v___x_2967_; 
v___x_2965_ = l_Lean_mkAppRev(v_val_2961_, v_rargs_2890_);
lean_dec_ref(v_rargs_2890_);
lean_inc_ref(v___x_2965_);
if (v_isShared_2964_ == 0)
{
lean_ctor_set(v___x_2963_, 0, v___x_2965_);
v___x_2967_ = v___x_2963_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2973_; 
v_reuseFailAlloc_2973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2973_, 0, v___x_2965_);
v___x_2967_ = v_reuseFailAlloc_2973_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2968_ = l_Lean_Expr_getAppFn(v___x_2965_);
v___x_2969_ = l_Lean_Expr_getAppNumArgs(v___x_2965_);
v___x_2970_ = lean_mk_empty_array_with_capacity(v___x_2969_);
lean_dec(v___x_2969_);
v___x_2971_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v___x_2965_, v___x_2970_);
v_lastReduction_2888_ = v___x_2967_;
v_f_2889_ = v___x_2968_;
v_rargs_2890_ = v___x_2971_;
goto _start;
}
}
}
}
}
else
{
lean_dec_ref(v_rargs_2890_);
lean_dec(v_lastReduction_2888_);
return v___x_2953_;
}
}
case 8:
{
lean_object* v_declName_2976_; lean_object* v_type_2977_; lean_object* v_value_2978_; lean_object* v_body_2979_; uint8_t v_nondep_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
v_declName_2976_ = lean_ctor_get(v_f_2889_, 0);
lean_inc(v_declName_2976_);
v_type_2977_ = lean_ctor_get(v_f_2889_, 1);
lean_inc_ref(v_type_2977_);
v_value_2978_ = lean_ctor_get(v_f_2889_, 2);
lean_inc_ref(v_value_2978_);
v_body_2979_ = lean_ctor_get(v_f_2889_, 3);
lean_inc_ref(v_body_2979_);
v_nondep_2980_ = lean_ctor_get_uint8(v_f_2889_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_f_2889_, 4);
v___x_2981_ = lean_box(0);
v___x_2982_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_reduceProjBeta_x3f_go(v___x_2981_, v_body_2979_, v_rargs_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v_a_2983_; lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_3002_; 
v_a_2983_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_3002_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_3002_ == 0)
{
v___x_2985_ = v___x_2982_;
v_isShared_2986_ = v_isSharedCheck_3002_;
goto v_resetjp_2984_;
}
else
{
lean_inc(v_a_2983_);
lean_dec(v___x_2982_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_3002_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
if (lean_obj_tag(v_a_2983_) == 0)
{
lean_object* v___x_2988_; 
lean_dec_ref(v_value_2978_);
lean_dec_ref(v_type_2977_);
lean_dec(v_declName_2976_);
if (v_isShared_2986_ == 0)
{
lean_ctor_set(v___x_2985_, 0, v_lastReduction_2888_);
v___x_2988_ = v___x_2985_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_lastReduction_2888_);
v___x_2988_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
return v___x_2988_;
}
}
else
{
lean_object* v_val_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_3001_; 
lean_dec(v_lastReduction_2888_);
v_val_2990_ = lean_ctor_get(v_a_2983_, 0);
v_isSharedCheck_3001_ = !lean_is_exclusive(v_a_2983_);
if (v_isSharedCheck_3001_ == 0)
{
v___x_2992_ = v_a_2983_;
v_isShared_2993_ = v_isSharedCheck_3001_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_val_2990_);
lean_dec(v_a_2983_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_3001_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v___x_2994_; lean_object* v___x_2996_; 
v___x_2994_ = l_Lean_Expr_letE___override(v_declName_2976_, v_type_2977_, v_value_2978_, v_val_2990_, v_nondep_2980_);
if (v_isShared_2993_ == 0)
{
lean_ctor_set(v___x_2992_, 0, v___x_2994_);
v___x_2996_ = v___x_2992_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_3000_; 
v_reuseFailAlloc_3000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3000_, 0, v___x_2994_);
v___x_2996_ = v_reuseFailAlloc_3000_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
lean_object* v___x_2998_; 
if (v_isShared_2986_ == 0)
{
lean_ctor_set(v___x_2985_, 0, v___x_2996_);
v___x_2998_ = v___x_2985_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v___x_2996_);
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
}
else
{
lean_dec_ref(v_value_2978_);
lean_dec_ref(v_type_2977_);
lean_dec(v_declName_2976_);
lean_dec(v_lastReduction_2888_);
return v___x_2982_;
}
}
default: 
{
lean_object* v___x_3003_; 
lean_dec_ref(v_rargs_2890_);
lean_dec_ref(v_f_2889_);
v___x_3003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3003_, 0, v_lastReduction_2888_);
return v___x_3003_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_reduceProjBeta_x3f_go___boxed(lean_object* v_lastReduction_3004_, lean_object* v_f_3005_, lean_object* v_rargs_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_){
_start:
{
lean_object* v_res_3012_; 
v_res_3012_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_reduceProjBeta_x3f_go(v_lastReduction_3004_, v_f_3005_, v_rargs_3006_, v_a_3007_, v_a_3008_, v_a_3009_, v_a_3010_);
lean_dec(v_a_3010_);
lean_dec_ref(v_a_3009_);
lean_dec(v_a_3008_);
lean_dec_ref(v_a_3007_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_reduceProjBeta_x3f(lean_object* v_e_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_, lean_object* v_a_3017_){
_start:
{
lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; 
v___x_3019_ = lean_box(0);
v___x_3020_ = l_Lean_Expr_getAppFn(v_e_3013_);
v___x_3021_ = l_Lean_Expr_getAppNumArgs(v_e_3013_);
v___x_3022_ = lean_mk_empty_array_with_capacity(v___x_3021_);
lean_dec(v___x_3021_);
v___x_3023_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_e_3013_, v___x_3022_);
v___x_3024_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_reduceProjBeta_x3f_go(v___x_3019_, v___x_3020_, v___x_3023_, v_a_3014_, v_a_3015_, v_a_3016_, v_a_3017_);
return v___x_3024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_reduceProjBeta_x3f___boxed(lean_object* v_e_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_, lean_object* v_a_3029_, lean_object* v_a_3030_){
_start:
{
lean_object* v_res_3031_; 
v_res_3031_ = l_Lean_Elab_Tactic_Do_reduceProjBeta_x3f(v_e_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_);
lean_dec(v_a_3029_);
lean_dec_ref(v_a_3028_);
lean_dec(v_a_3027_);
lean_dec_ref(v_a_3026_);
return v_res_3031_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3032_ = lean_box(0);
v___x_3033_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3034_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3034_, 0, v___x_3033_);
lean_ctor_set(v___x_3034_, 1, v___x_3032_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___redArg(){
_start:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; 
v___x_3036_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___redArg___closed__0);
v___x_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3037_, 0, v___x_3036_);
return v___x_3037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___redArg___boxed(lean_object* v___y_3038_){
_start:
{
lean_object* v_res_3039_; 
v_res_3039_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___redArg();
return v_res_3039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0(lean_object* v_00_u03b1_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_){
_start:
{
lean_object* v___x_3050_; 
v___x_3050_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___redArg();
return v___x_3050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___boxed(lean_object* v_00_u03b1_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_){
_start:
{
lean_object* v_res_3061_; 
v_res_3061_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0(v_00_u03b1_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
lean_dec(v___y_3055_);
lean_dec_ref(v___y_3054_);
lean_dec(v___y_3053_);
lean_dec_ref(v___y_3052_);
return v_res_3061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__5___redArg(lean_object* v_as_3062_, size_t v_sz_3063_, size_t v_i_3064_, lean_object* v_b_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_){
_start:
{
lean_object* v_a_3075_; uint8_t v___x_3079_; 
v___x_3079_ = lean_usize_dec_lt(v_i_3064_, v_sz_3063_);
if (v___x_3079_ == 0)
{
lean_object* v___x_3080_; 
v___x_3080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3080_, 0, v_b_3065_);
return v___x_3080_;
}
else
{
lean_object* v_a_3081_; lean_object* v___x_3082_; uint8_t v___x_3083_; 
v_a_3081_ = lean_array_uget_borrowed(v_as_3062_, v_i_3064_);
lean_inc(v_a_3081_);
v___x_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3082_, 0, v_a_3081_);
v___x_3083_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_isErased(v_b_3065_, v___x_3082_);
lean_dec_ref_known(v___x_3082_, 1);
if (v___x_3083_ == 0)
{
lean_object* v___x_3084_; lean_object* v___x_3085_; 
v___x_3084_ = lean_unsigned_to_nat(1000u);
v___x_3085_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_3066_, v___y_3068_, v___y_3070_, v___y_3072_);
if (lean_obj_tag(v___x_3085_) == 0)
{
lean_object* v_a_3086_; lean_object* v___x_3087_; 
v_a_3086_ = lean_ctor_get(v___x_3085_, 0);
lean_inc(v_a_3086_);
lean_dec_ref_known(v___x_3085_, 1);
lean_inc(v_a_3081_);
v___x_3087_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromLocal(v_a_3081_, v___x_3084_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_);
if (lean_obj_tag(v___x_3087_) == 0)
{
lean_object* v_a_3088_; lean_object* v___x_3089_; 
lean_dec(v_a_3086_);
v_a_3088_ = lean_ctor_get(v___x_3087_, 0);
lean_inc(v_a_3088_);
lean_dec_ref_known(v___x_3087_, 1);
v___x_3089_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_insert(v_b_3065_, v_a_3088_);
v_a_3075_ = v___x_3089_;
goto v___jp_3074_;
}
else
{
lean_object* v_a_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3111_; 
v_a_3090_ = lean_ctor_get(v___x_3087_, 0);
v_isSharedCheck_3111_ = !lean_is_exclusive(v___x_3087_);
if (v_isSharedCheck_3111_ == 0)
{
v___x_3092_ = v___x_3087_;
v_isShared_3093_ = v_isSharedCheck_3111_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_a_3090_);
lean_dec(v___x_3087_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3111_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
uint8_t v___x_3094_; 
v___x_3094_ = l_Lean_Exception_isInterrupt(v_a_3090_);
if (v___x_3094_ == 0)
{
uint8_t v___x_3095_; 
lean_inc(v_a_3090_);
v___x_3095_ = l_Lean_Exception_isRuntime(v_a_3090_);
if (v___x_3095_ == 0)
{
lean_object* v___x_3096_; 
lean_del_object(v___x_3092_);
lean_dec(v_a_3090_);
v___x_3096_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_3086_, v___x_3095_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_);
if (lean_obj_tag(v___x_3096_) == 0)
{
lean_dec_ref_known(v___x_3096_, 1);
v_a_3075_ = v_b_3065_;
goto v___jp_3074_;
}
else
{
lean_object* v_a_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3104_; 
lean_dec_ref(v_b_3065_);
v_a_3097_ = lean_ctor_get(v___x_3096_, 0);
v_isSharedCheck_3104_ = !lean_is_exclusive(v___x_3096_);
if (v_isSharedCheck_3104_ == 0)
{
v___x_3099_ = v___x_3096_;
v_isShared_3100_ = v_isSharedCheck_3104_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_a_3097_);
lean_dec(v___x_3096_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3104_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3102_; 
if (v_isShared_3100_ == 0)
{
v___x_3102_ = v___x_3099_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v_a_3097_);
v___x_3102_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
return v___x_3102_;
}
}
}
}
else
{
lean_object* v___x_3106_; 
lean_dec(v_a_3086_);
lean_dec_ref(v_b_3065_);
if (v_isShared_3093_ == 0)
{
v___x_3106_ = v___x_3092_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v_a_3090_);
v___x_3106_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
return v___x_3106_;
}
}
}
else
{
lean_object* v___x_3109_; 
lean_dec(v_a_3086_);
lean_dec_ref(v_b_3065_);
if (v_isShared_3093_ == 0)
{
v___x_3109_ = v___x_3092_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v_a_3090_);
v___x_3109_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
return v___x_3109_;
}
}
}
}
}
else
{
lean_object* v_a_3112_; lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3119_; 
lean_dec_ref(v_b_3065_);
v_a_3112_ = lean_ctor_get(v___x_3085_, 0);
v_isSharedCheck_3119_ = !lean_is_exclusive(v___x_3085_);
if (v_isSharedCheck_3119_ == 0)
{
v___x_3114_ = v___x_3085_;
v_isShared_3115_ = v_isSharedCheck_3119_;
goto v_resetjp_3113_;
}
else
{
lean_inc(v_a_3112_);
lean_dec(v___x_3085_);
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
else
{
v_a_3075_ = v_b_3065_;
goto v___jp_3074_;
}
}
v___jp_3074_:
{
size_t v___x_3076_; size_t v___x_3077_; 
v___x_3076_ = ((size_t)1ULL);
v___x_3077_ = lean_usize_add(v_i_3064_, v___x_3076_);
v_i_3064_ = v___x_3077_;
v_b_3065_ = v_a_3075_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__5___redArg___boxed(lean_object* v_as_3120_, lean_object* v_sz_3121_, lean_object* v_i_3122_, lean_object* v_b_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_){
_start:
{
size_t v_sz_boxed_3132_; size_t v_i_boxed_3133_; lean_object* v_res_3134_; 
v_sz_boxed_3132_ = lean_unbox_usize(v_sz_3121_);
lean_dec(v_sz_3121_);
v_i_boxed_3133_ = lean_unbox_usize(v_i_3122_);
lean_dec(v_i_3122_);
v_res_3134_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__5___redArg(v_as_3120_, v_sz_boxed_3132_, v_i_boxed_3133_, v_b_3123_, v___y_3124_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_, v___y_3129_, v___y_3130_);
lean_dec(v___y_3130_);
lean_dec_ref(v___y_3129_);
lean_dec(v___y_3128_);
lean_dec_ref(v___y_3127_);
lean_dec(v___y_3126_);
lean_dec_ref(v___y_3125_);
lean_dec(v___y_3124_);
lean_dec_ref(v_as_3120_);
return v_res_3134_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__1___redArg(lean_object* v_msg_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_){
_start:
{
lean_object* v_ref_3141_; lean_object* v___x_3142_; lean_object* v_a_3143_; lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3151_; 
v_ref_3141_ = lean_ctor_get(v___y_3138_, 2);
v___x_3142_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig_evalExpr_spec__1_spec__1(v_msg_3135_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_);
v_a_3143_ = lean_ctor_get(v___x_3142_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3142_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3145_ = v___x_3142_;
v_isShared_3146_ = v_isSharedCheck_3151_;
goto v_resetjp_3144_;
}
else
{
lean_inc(v_a_3143_);
lean_dec(v___x_3142_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3151_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3147_; lean_object* v___x_3149_; 
lean_inc(v_ref_3141_);
v___x_3147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3147_, 0, v_ref_3141_);
lean_ctor_set(v___x_3147_, 1, v_a_3143_);
if (v_isShared_3146_ == 0)
{
lean_ctor_set_tag(v___x_3145_, 1);
lean_ctor_set(v___x_3145_, 0, v___x_3147_);
v___x_3149_ = v___x_3145_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v___x_3147_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__1___redArg___boxed(lean_object* v_msg_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_){
_start:
{
lean_object* v_res_3158_; 
v_res_3158_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__1___redArg(v_msg_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_);
lean_dec(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec(v___y_3154_);
lean_dec_ref(v___y_3153_);
return v_res_3158_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__8___redArg(lean_object* v_ref_3159_, lean_object* v_msg_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_){
_start:
{
lean_object* v_toCold_3170_; lean_object* v_currRecDepth_3171_; lean_object* v_ref_3172_; uint16_t v_optionFlags_3173_; uint8_t v_suppressElabErrors_3174_; uint8_t v_checkDeprecated_3175_; uint8_t v_isRecordingDeps_3176_; lean_object* v_ref_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; 
v_toCold_3170_ = lean_ctor_get(v___y_3167_, 0);
v_currRecDepth_3171_ = lean_ctor_get(v___y_3167_, 1);
v_ref_3172_ = lean_ctor_get(v___y_3167_, 2);
v_optionFlags_3173_ = lean_ctor_get_uint16(v___y_3167_, sizeof(void*)*3);
v_suppressElabErrors_3174_ = lean_ctor_get_uint8(v___y_3167_, sizeof(void*)*3 + 2);
v_checkDeprecated_3175_ = lean_ctor_get_uint8(v___y_3167_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3176_ = lean_ctor_get_uint8(v___y_3167_, sizeof(void*)*3 + 4);
v_ref_3177_ = l_Lean_replaceRef(v_ref_3159_, v_ref_3172_);
lean_inc(v_currRecDepth_3171_);
lean_inc_ref(v_toCold_3170_);
v___x_3178_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3178_, 0, v_toCold_3170_);
lean_ctor_set(v___x_3178_, 1, v_currRecDepth_3171_);
lean_ctor_set(v___x_3178_, 2, v_ref_3177_);
lean_ctor_set_uint16(v___x_3178_, sizeof(void*)*3, v_optionFlags_3173_);
lean_ctor_set_uint8(v___x_3178_, sizeof(void*)*3 + 2, v_suppressElabErrors_3174_);
lean_ctor_set_uint8(v___x_3178_, sizeof(void*)*3 + 3, v_checkDeprecated_3175_);
lean_ctor_set_uint8(v___x_3178_, sizeof(void*)*3 + 4, v_isRecordingDeps_3176_);
v___x_3179_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__1___redArg(v_msg_3160_, v___y_3165_, v___y_3166_, v___x_3178_, v___y_3168_);
lean_dec_ref_known(v___x_3178_, 3);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__8___redArg___boxed(lean_object* v_ref_3180_, lean_object* v_msg_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_){
_start:
{
lean_object* v_res_3191_; 
v_res_3191_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__8___redArg(v_ref_3180_, v_msg_3181_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_);
lean_dec(v___y_3189_);
lean_dec_ref(v___y_3188_);
lean_dec(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec(v___y_3185_);
lean_dec_ref(v___y_3184_);
lean_dec(v___y_3183_);
lean_dec_ref(v___y_3182_);
lean_dec(v_ref_3180_);
return v_res_3191_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_3192_; 
v___x_3192_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_3192_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3193_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__0);
v___x_3194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3193_);
return v___x_3194_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; 
v___x_3195_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__1);
v___x_3196_ = lean_unsigned_to_nat(0u);
v___x_3197_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3197_, 0, v___x_3196_);
lean_ctor_set(v___x_3197_, 1, v___x_3196_);
lean_ctor_set(v___x_3197_, 2, v___x_3196_);
lean_ctor_set(v___x_3197_, 3, v___x_3196_);
lean_ctor_set(v___x_3197_, 4, v___x_3195_);
lean_ctor_set(v___x_3197_, 5, v___x_3195_);
lean_ctor_set(v___x_3197_, 6, v___x_3195_);
lean_ctor_set(v___x_3197_, 7, v___x_3195_);
lean_ctor_set(v___x_3197_, 8, v___x_3195_);
lean_ctor_set(v___x_3197_, 9, v___x_3195_);
lean_ctor_set(v___x_3197_, 10, v___x_3195_);
return v___x_3197_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3198_ = lean_unsigned_to_nat(32u);
v___x_3199_ = lean_mk_empty_array_with_capacity(v___x_3198_);
v___x_3200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3200_, 0, v___x_3199_);
return v___x_3200_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__4(void){
_start:
{
size_t v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3201_ = ((size_t)5ULL);
v___x_3202_ = lean_unsigned_to_nat(0u);
v___x_3203_ = lean_unsigned_to_nat(32u);
v___x_3204_ = lean_mk_empty_array_with_capacity(v___x_3203_);
v___x_3205_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__3);
v___x_3206_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3206_, 0, v___x_3205_);
lean_ctor_set(v___x_3206_, 1, v___x_3204_);
lean_ctor_set(v___x_3206_, 2, v___x_3202_);
lean_ctor_set(v___x_3206_, 3, v___x_3202_);
lean_ctor_set_usize(v___x_3206_, 4, v___x_3201_);
return v___x_3206_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; 
v___x_3207_ = lean_box(1);
v___x_3208_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__4);
v___x_3209_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__1);
v___x_3210_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3210_, 0, v___x_3209_);
lean_ctor_set(v___x_3210_, 1, v___x_3208_);
lean_ctor_set(v___x_3210_, 2, v___x_3207_);
return v___x_3210_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__7(void){
_start:
{
lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3212_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__6));
v___x_3213_ = l_Lean_stringToMessageData(v___x_3212_);
return v___x_3213_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__9(void){
_start:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; 
v___x_3215_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__8));
v___x_3216_ = l_Lean_stringToMessageData(v___x_3215_);
return v___x_3216_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__11(void){
_start:
{
lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3218_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__10));
v___x_3219_ = l_Lean_stringToMessageData(v___x_3218_);
return v___x_3219_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__13(void){
_start:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3221_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__12));
v___x_3222_ = l_Lean_stringToMessageData(v___x_3221_);
return v___x_3222_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__15(void){
_start:
{
lean_object* v___x_3224_; lean_object* v___x_3225_; 
v___x_3224_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__14));
v___x_3225_ = l_Lean_stringToMessageData(v___x_3224_);
return v___x_3225_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__17(void){
_start:
{
lean_object* v___x_3227_; lean_object* v___x_3228_; 
v___x_3227_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__16));
v___x_3228_ = l_Lean_stringToMessageData(v___x_3227_);
return v___x_3228_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__19(void){
_start:
{
lean_object* v___x_3230_; lean_object* v___x_3231_; 
v___x_3230_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__18));
v___x_3231_ = l_Lean_stringToMessageData(v___x_3230_);
return v___x_3231_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg(lean_object* v_msg_3232_, lean_object* v_declHint_3233_, lean_object* v___y_3234_){
_start:
{
lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v_env_3238_; uint8_t v___x_3239_; 
v___x_3236_ = lean_box(0);
v___x_3237_ = lean_st_ref_get(v___y_3234_);
v_env_3238_ = lean_ctor_get(v___x_3237_, 0);
lean_inc_ref(v_env_3238_);
lean_dec(v___x_3237_);
v___x_3239_ = l_Lean_Name_isAnonymous(v_declHint_3233_);
if (v___x_3239_ == 0)
{
uint8_t v_isExporting_3240_; 
v_isExporting_3240_ = lean_ctor_get_uint8(v_env_3238_, sizeof(void*)*13);
if (v_isExporting_3240_ == 0)
{
lean_object* v___x_3241_; 
lean_dec_ref(v_env_3238_);
lean_dec(v_declHint_3233_);
v___x_3241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3241_, 0, v_msg_3232_);
return v___x_3241_;
}
else
{
lean_object* v___x_3242_; uint8_t v___x_3243_; 
lean_inc_ref(v_env_3238_);
v___x_3242_ = l_Lean_Environment_setExporting(v_env_3238_, v___x_3239_);
lean_inc(v_declHint_3233_);
lean_inc_ref(v___x_3242_);
v___x_3243_ = l_Lean_Environment_contains(v___x_3242_, v_declHint_3233_, v_isExporting_3240_);
if (v___x_3243_ == 0)
{
lean_object* v___x_3244_; 
lean_dec_ref(v___x_3242_);
lean_dec_ref(v_env_3238_);
lean_dec(v_declHint_3233_);
v___x_3244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3244_, 0, v_msg_3232_);
return v___x_3244_;
}
else
{
lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v_c_3250_; lean_object* v___x_3251_; 
v___x_3245_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__2);
v___x_3246_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__5);
v___x_3247_ = l_Lean_Options_empty;
lean_inc_ref(v___x_3242_);
v___x_3248_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3248_, 0, v___x_3242_);
lean_ctor_set(v___x_3248_, 1, v___x_3245_);
lean_ctor_set(v___x_3248_, 2, v___x_3246_);
lean_ctor_set(v___x_3248_, 3, v___x_3247_);
lean_inc(v_declHint_3233_);
v___x_3249_ = l_Lean_MessageData_ofConstName(v_declHint_3233_, v___x_3239_);
v_c_3250_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_3250_, 0, v___x_3248_);
lean_ctor_set(v_c_3250_, 1, v___x_3249_);
v___x_3251_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_3242_, v_declHint_3233_);
lean_dec_ref(v___x_3242_);
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
lean_dec_ref(v_env_3238_);
lean_dec(v_declHint_3233_);
v___x_3252_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__7);
v___x_3253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3252_);
lean_ctor_set(v___x_3253_, 1, v_c_3250_);
v___x_3254_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__9);
v___x_3255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3253_);
lean_ctor_set(v___x_3255_, 1, v___x_3254_);
v___x_3256_ = l_Lean_MessageData_note(v___x_3255_);
v___x_3257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3257_, 0, v_msg_3232_);
lean_ctor_set(v___x_3257_, 1, v___x_3256_);
v___x_3258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3258_, 0, v___x_3257_);
return v___x_3258_;
}
else
{
lean_object* v_val_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3293_; 
v_val_3259_ = lean_ctor_get(v___x_3251_, 0);
v_isSharedCheck_3293_ = !lean_is_exclusive(v___x_3251_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3261_ = v___x_3251_;
v_isShared_3262_ = v_isSharedCheck_3293_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_val_3259_);
lean_dec(v___x_3251_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3293_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3263_; lean_object* v_moduleNames_3264_; lean_object* v_mod_3265_; uint8_t v___x_3266_; 
v___x_3263_ = l_Lean_Environment_header(v_env_3238_);
lean_dec_ref(v_env_3238_);
v_moduleNames_3264_ = lean_ctor_get(v___x_3263_, 4);
lean_inc_ref(v_moduleNames_3264_);
lean_dec_ref(v___x_3263_);
v_mod_3265_ = lean_array_get(v___x_3236_, v_moduleNames_3264_, v_val_3259_);
lean_dec(v_val_3259_);
lean_dec_ref(v_moduleNames_3264_);
v___x_3266_ = l_Lean_isPrivateName(v_declHint_3233_);
lean_dec(v_declHint_3233_);
if (v___x_3266_ == 0)
{
lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3278_; 
v___x_3267_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__11);
v___x_3268_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3267_);
lean_ctor_set(v___x_3268_, 1, v_c_3250_);
v___x_3269_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__13);
v___x_3270_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3270_, 0, v___x_3268_);
lean_ctor_set(v___x_3270_, 1, v___x_3269_);
v___x_3271_ = l_Lean_MessageData_ofName(v_mod_3265_);
v___x_3272_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3270_);
lean_ctor_set(v___x_3272_, 1, v___x_3271_);
v___x_3273_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__15);
v___x_3274_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3274_, 0, v___x_3272_);
lean_ctor_set(v___x_3274_, 1, v___x_3273_);
v___x_3275_ = l_Lean_MessageData_note(v___x_3274_);
v___x_3276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3276_, 0, v_msg_3232_);
lean_ctor_set(v___x_3276_, 1, v___x_3275_);
if (v_isShared_3262_ == 0)
{
lean_ctor_set_tag(v___x_3261_, 0);
lean_ctor_set(v___x_3261_, 0, v___x_3276_);
v___x_3278_ = v___x_3261_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v___x_3276_);
v___x_3278_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
return v___x_3278_;
}
}
else
{
lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3291_; 
v___x_3280_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__7);
v___x_3281_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3281_, 0, v___x_3280_);
lean_ctor_set(v___x_3281_, 1, v_c_3250_);
v___x_3282_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__17);
v___x_3283_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3281_);
lean_ctor_set(v___x_3283_, 1, v___x_3282_);
v___x_3284_ = l_Lean_MessageData_ofName(v_mod_3265_);
v___x_3285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3285_, 0, v___x_3283_);
lean_ctor_set(v___x_3285_, 1, v___x_3284_);
v___x_3286_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___closed__19);
v___x_3287_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3287_, 0, v___x_3285_);
lean_ctor_set(v___x_3287_, 1, v___x_3286_);
v___x_3288_ = l_Lean_MessageData_note(v___x_3287_);
v___x_3289_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3289_, 0, v_msg_3232_);
lean_ctor_set(v___x_3289_, 1, v___x_3288_);
if (v_isShared_3262_ == 0)
{
lean_ctor_set_tag(v___x_3261_, 0);
lean_ctor_set(v___x_3261_, 0, v___x_3289_);
v___x_3291_ = v___x_3261_;
goto v_reusejp_3290_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v___x_3289_);
v___x_3291_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3290_;
}
v_reusejp_3290_:
{
return v___x_3291_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3294_; 
lean_dec_ref(v_env_3238_);
lean_dec(v_declHint_3233_);
v___x_3294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3294_, 0, v_msg_3232_);
return v___x_3294_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg___boxed(lean_object* v_msg_3295_, lean_object* v_declHint_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_){
_start:
{
lean_object* v_res_3299_; 
v_res_3299_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg(v_msg_3295_, v_declHint_3296_, v___y_3297_);
lean_dec(v___y_3297_);
return v_res_3299_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7(lean_object* v_msg_3300_, lean_object* v_declHint_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_){
_start:
{
lean_object* v___x_3311_; lean_object* v_a_3312_; lean_object* v___x_3314_; uint8_t v_isShared_3315_; uint8_t v_isSharedCheck_3321_; 
v___x_3311_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg(v_msg_3300_, v_declHint_3301_, v___y_3309_);
v_a_3312_ = lean_ctor_get(v___x_3311_, 0);
v_isSharedCheck_3321_ = !lean_is_exclusive(v___x_3311_);
if (v_isSharedCheck_3321_ == 0)
{
v___x_3314_ = v___x_3311_;
v_isShared_3315_ = v_isSharedCheck_3321_;
goto v_resetjp_3313_;
}
else
{
lean_inc(v_a_3312_);
lean_dec(v___x_3311_);
v___x_3314_ = lean_box(0);
v_isShared_3315_ = v_isSharedCheck_3321_;
goto v_resetjp_3313_;
}
v_resetjp_3313_:
{
lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3319_; 
v___x_3316_ = l_Lean_unknownIdentifierMessageTag;
v___x_3317_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3316_);
lean_ctor_set(v___x_3317_, 1, v_a_3312_);
if (v_isShared_3315_ == 0)
{
lean_ctor_set(v___x_3314_, 0, v___x_3317_);
v___x_3319_ = v___x_3314_;
goto v_reusejp_3318_;
}
else
{
lean_object* v_reuseFailAlloc_3320_; 
v_reuseFailAlloc_3320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3320_, 0, v___x_3317_);
v___x_3319_ = v_reuseFailAlloc_3320_;
goto v_reusejp_3318_;
}
v_reusejp_3318_:
{
return v___x_3319_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7___boxed(lean_object* v_msg_3322_, lean_object* v_declHint_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7(v_msg_3322_, v_declHint_3323_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_);
lean_dec(v___y_3331_);
lean_dec_ref(v___y_3330_);
lean_dec(v___y_3329_);
lean_dec_ref(v___y_3328_);
lean_dec(v___y_3327_);
lean_dec_ref(v___y_3326_);
lean_dec(v___y_3325_);
lean_dec_ref(v___y_3324_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4___redArg(lean_object* v_ref_3334_, lean_object* v_msg_3335_, lean_object* v_declHint_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_){
_start:
{
lean_object* v___x_3346_; lean_object* v_a_3347_; lean_object* v___x_3348_; 
v___x_3346_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7(v_msg_3335_, v_declHint_3336_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_);
v_a_3347_ = lean_ctor_get(v___x_3346_, 0);
lean_inc(v_a_3347_);
lean_dec_ref(v___x_3346_);
v___x_3348_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__8___redArg(v_ref_3334_, v_a_3347_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_);
return v___x_3348_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4___redArg___boxed(lean_object* v_ref_3349_, lean_object* v_msg_3350_, lean_object* v_declHint_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_){
_start:
{
lean_object* v_res_3361_; 
v_res_3361_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4___redArg(v_ref_3349_, v_msg_3350_, v_declHint_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_, v___y_3359_);
lean_dec(v___y_3359_);
lean_dec_ref(v___y_3358_);
lean_dec(v___y_3357_);
lean_dec_ref(v___y_3356_);
lean_dec(v___y_3355_);
lean_dec_ref(v___y_3354_);
lean_dec(v___y_3353_);
lean_dec_ref(v___y_3352_);
lean_dec(v_ref_3349_);
return v_res_3361_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_3363_; lean_object* v___x_3364_; 
v___x_3363_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg___closed__0));
v___x_3364_ = l_Lean_stringToMessageData(v___x_3363_);
return v___x_3364_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg(lean_object* v_ref_3365_, lean_object* v_constName_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_){
_start:
{
lean_object* v___x_3376_; uint8_t v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3376_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg___closed__1);
v___x_3377_ = 0;
lean_inc(v_constName_3366_);
v___x_3378_ = l_Lean_MessageData_ofConstName(v_constName_3366_, v___x_3377_);
v___x_3379_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3376_);
lean_ctor_set(v___x_3379_, 1, v___x_3378_);
v___x_3380_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5);
v___x_3381_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3381_, 0, v___x_3379_);
lean_ctor_set(v___x_3381_, 1, v___x_3380_);
v___x_3382_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4___redArg(v_ref_3365_, v___x_3381_, v_constName_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg___boxed(lean_object* v_ref_3383_, lean_object* v_constName_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_){
_start:
{
lean_object* v_res_3394_; 
v_res_3394_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg(v_ref_3383_, v_constName_3384_, v___y_3385_, v___y_3386_, v___y_3387_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
lean_dec(v___y_3390_);
lean_dec_ref(v___y_3389_);
lean_dec(v___y_3388_);
lean_dec_ref(v___y_3387_);
lean_dec(v___y_3386_);
lean_dec_ref(v___y_3385_);
lean_dec(v_ref_3383_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3___redArg(lean_object* v_constName_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_){
_start:
{
lean_object* v_ref_3405_; lean_object* v___x_3406_; 
v_ref_3405_ = lean_ctor_get(v___y_3402_, 2);
v___x_3406_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg(v_ref_3405_, v_constName_3395_, v___y_3396_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_);
return v___x_3406_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3___redArg___boxed(lean_object* v_constName_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_){
_start:
{
lean_object* v_res_3417_; 
v_res_3417_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3___redArg(v_constName_3407_, v___y_3408_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_);
lean_dec(v___y_3415_);
lean_dec_ref(v___y_3414_);
lean_dec(v___y_3413_);
lean_dec_ref(v___y_3412_);
lean_dec(v___y_3411_);
lean_dec_ref(v___y_3410_);
lean_dec(v___y_3409_);
lean_dec_ref(v___y_3408_);
return v_res_3417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___lam__0(lean_object* v_fst_3418_, lean_object* v_fst_3419_, lean_object* v_specThm_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_){
_start:
{
lean_object* v_proof_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; 
v_proof_3430_ = lean_ctor_get(v_specThm_3420_, 2);
lean_inc_ref(v_proof_3430_);
lean_dec_ref(v_specThm_3420_);
v___x_3431_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_erase(v_fst_3418_, v_proof_3430_);
v___x_3432_ = lean_box(0);
v___x_3433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3433_, 0, v___x_3431_);
lean_ctor_set(v___x_3433_, 1, v_fst_3419_);
v___x_3434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3434_, 0, v___x_3432_);
lean_ctor_set(v___x_3434_, 1, v___x_3433_);
v___x_3435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3435_, 0, v___x_3434_);
return v___x_3435_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___lam__0___boxed(lean_object* v_fst_3436_, lean_object* v_fst_3437_, lean_object* v_specThm_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_){
_start:
{
lean_object* v_res_3448_; 
v_res_3448_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___lam__0(v_fst_3436_, v_fst_3437_, v_specThm_3438_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_);
lean_dec(v___y_3446_);
lean_dec_ref(v___y_3445_);
lean_dec(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3442_);
lean_dec_ref(v___y_3441_);
lean_dec(v___y_3440_);
lean_dec_ref(v___y_3439_);
return v_res_3448_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__2(lean_object* v_constName_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_){
_start:
{
lean_object* v___x_3459_; lean_object* v_env_3460_; uint8_t v___x_3461_; lean_object* v___x_3462_; 
v___x_3459_ = lean_st_ref_get(v___y_3457_);
v_env_3460_ = lean_ctor_get(v___x_3459_, 0);
lean_inc_ref(v_env_3460_);
lean_dec(v___x_3459_);
v___x_3461_ = 0;
lean_inc(v_constName_3449_);
v___x_3462_ = l_Lean_Environment_find_x3f(v_env_3460_, v_constName_3449_, v___x_3461_);
if (lean_obj_tag(v___x_3462_) == 0)
{
lean_object* v___x_3463_; 
v___x_3463_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3___redArg(v_constName_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_, v___y_3457_);
return v___x_3463_;
}
else
{
lean_object* v_val_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3471_; 
lean_dec(v_constName_3449_);
v_val_3464_ = lean_ctor_get(v___x_3462_, 0);
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3462_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3466_ = v___x_3462_;
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_val_3464_);
lean_dec(v___x_3462_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3471_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3469_; 
if (v_isShared_3467_ == 0)
{
lean_ctor_set_tag(v___x_3466_, 0);
v___x_3469_ = v___x_3466_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v_val_3464_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
return v___x_3469_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__2___boxed(lean_object* v_constName_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_){
_start:
{
lean_object* v_res_3482_; 
v_res_3482_ = l_Lean_getConstInfo___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__2(v_constName_3472_, v___y_3473_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_);
lean_dec(v___y_3480_);
lean_dec_ref(v___y_3479_);
lean_dec(v___y_3478_);
lean_dec_ref(v___y_3477_);
lean_dec(v___y_3476_);
lean_dec_ref(v___y_3475_);
lean_dec(v___y_3474_);
lean_dec_ref(v___y_3473_);
return v_res_3482_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__8(void){
_start:
{
lean_object* v___x_3503_; lean_object* v___x_3504_; 
v___x_3503_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__7));
v___x_3504_ = l_Lean_stringToMessageData(v___x_3503_);
return v___x_3504_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4(lean_object* v_as_3506_, size_t v_sz_3507_, size_t v_i_3508_, lean_object* v_b_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_){
_start:
{
lean_object* v_a_3520_; uint8_t v_starArg_3524_; 
v_starArg_3524_ = lean_usize_dec_lt(v_i_3508_, v_sz_3507_);
if (v_starArg_3524_ == 0)
{
lean_object* v___x_3525_; 
v___x_3525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3525_, 0, v_b_3509_);
return v___x_3525_;
}
else
{
lean_object* v_snd_3526_; lean_object* v_fst_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3846_; 
v_snd_3526_ = lean_ctor_get(v_b_3509_, 1);
v_fst_3527_ = lean_ctor_get(v_b_3509_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v_b_3509_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3529_ = v_b_3509_;
v_isShared_3530_ = v_isSharedCheck_3846_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_snd_3526_);
lean_inc(v_fst_3527_);
lean_dec(v_b_3509_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3846_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v_fst_3531_; lean_object* v_snd_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3845_; 
v_fst_3531_ = lean_ctor_get(v_snd_3526_, 0);
v_snd_3532_ = lean_ctor_get(v_snd_3526_, 1);
v_isSharedCheck_3845_ = !lean_is_exclusive(v_snd_3526_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3534_ = v_snd_3526_;
v_isShared_3535_ = v_isSharedCheck_3845_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_snd_3532_);
lean_inc(v_fst_3531_);
lean_dec(v_snd_3526_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3845_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
lean_object* v_fst_3537_; lean_object* v_snd_3538_; lean_object* v_fst_3546_; lean_object* v_snd_3547_; lean_object* v_fst_3551_; lean_object* v_snd_3552_; lean_object* v___x_3555_; lean_object* v_a_3556_; lean_object* v___x_3561_; lean_object* v___x_3562_; uint8_t v___x_3563_; 
v___x_3555_ = lean_unsigned_to_nat(1u);
v_a_3556_ = lean_array_uget_borrowed(v_as_3506_, v_i_3508_);
lean_inc(v_a_3556_);
v___x_3561_ = l_Lean_Syntax_getKind(v_a_3556_);
v___x_3562_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__2));
v___x_3563_ = lean_name_eq(v___x_3561_, v___x_3562_);
if (v___x_3563_ == 0)
{
lean_object* v___x_3564_; uint8_t v___x_3565_; 
v___x_3564_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__4));
v___x_3565_ = lean_name_eq(v___x_3561_, v___x_3564_);
if (v___x_3565_ == 0)
{
lean_object* v___x_3566_; uint8_t v___x_3567_; 
lean_del_object(v___x_3534_);
lean_del_object(v___x_3529_);
v___x_3566_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__6));
v___x_3567_ = lean_name_eq(v___x_3561_, v___x_3566_);
lean_dec(v___x_3561_);
if (v___x_3567_ == 0)
{
lean_object* v___x_3568_; 
v___x_3568_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__0___redArg();
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v___x_3569_; lean_object* v___x_3570_; 
lean_dec_ref_known(v___x_3568_, 1);
v___x_3569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3569_, 0, v_fst_3531_);
lean_ctor_set(v___x_3569_, 1, v_snd_3532_);
v___x_3570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3570_, 0, v_fst_3527_);
lean_ctor_set(v___x_3570_, 1, v___x_3569_);
v_a_3520_ = v___x_3570_;
goto v___jp_3519_;
}
else
{
lean_object* v_a_3571_; lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3578_; 
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_dec(v_fst_3527_);
v_a_3571_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3578_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3578_ == 0)
{
v___x_3573_ = v___x_3568_;
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
else
{
lean_inc(v_a_3571_);
lean_dec(v___x_3568_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v___x_3576_; 
if (v_isShared_3574_ == 0)
{
v___x_3576_ = v___x_3573_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v_a_3571_);
v___x_3576_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
return v___x_3576_;
}
}
}
}
else
{
lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; 
lean_dec(v_snd_3532_);
lean_inc(v_a_3556_);
v___x_3579_ = lean_array_push(v_fst_3531_, v_a_3556_);
v___x_3580_ = lean_box(v_starArg_3524_);
v___x_3581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3581_, 0, v___x_3579_);
lean_ctor_set(v___x_3581_, 1, v___x_3580_);
v___x_3582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3582_, 0, v_fst_3527_);
lean_ctor_set(v___x_3582_, 1, v___x_3581_);
v_a_3520_ = v___x_3582_;
goto v___jp_3519_;
}
}
else
{
lean_object* v___x_3583_; lean_object* v___x_3584_; uint8_t v___x_3585_; 
lean_dec(v___x_3561_);
v___x_3583_ = lean_unsigned_to_nat(0u);
v___x_3584_ = l_Lean_Syntax_getArg(v_a_3556_, v___x_3583_);
v___x_3585_ = l_Lean_Syntax_isNone(v___x_3584_);
lean_dec(v___x_3584_);
if (v___x_3585_ == 0)
{
lean_del_object(v___x_3534_);
lean_del_object(v___x_3529_);
goto v___jp_3557_;
}
else
{
lean_object* v___x_3586_; uint8_t v___x_3587_; 
v___x_3586_ = l_Lean_Syntax_getArg(v_a_3556_, v___x_3555_);
v___x_3587_ = l_Lean_Syntax_isNone(v___x_3586_);
lean_dec(v___x_3586_);
if (v___x_3587_ == 0)
{
lean_del_object(v___x_3534_);
lean_del_object(v___x_3529_);
goto v___jp_3557_;
}
else
{
lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___y_3591_; lean_object* v___y_3592_; lean_object* v___y_3593_; lean_object* v___y_3594_; lean_object* v_a_3621_; lean_object* v___x_3717_; lean_object* v___x_3718_; 
v___x_3588_ = lean_unsigned_to_nat(2u);
v___x_3589_ = l_Lean_Syntax_getArg(v_a_3556_, v___x_3588_);
v___x_3717_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__9));
v___x_3718_ = l_Lean_Meta_saveState___redArg(v___y_3515_, v___y_3517_);
if (lean_obj_tag(v___x_3718_) == 0)
{
lean_object* v_a_3719_; lean_object* v___x_3720_; 
v_a_3719_ = lean_ctor_get(v___x_3718_, 0);
lean_inc(v_a_3719_);
lean_dec_ref_known(v___x_3718_, 1);
lean_inc(v___x_3589_);
v___x_3720_ = l_Lean_Elab_Term_resolveId_x3f(v___x_3589_, v___x_3717_, v_starArg_3524_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3720_) == 0)
{
lean_object* v_a_3721_; 
lean_dec(v_a_3719_);
v_a_3721_ = lean_ctor_get(v___x_3720_, 0);
lean_inc(v_a_3721_);
lean_dec_ref_known(v___x_3720_, 1);
v_a_3621_ = v_a_3721_;
goto v___jp_3620_;
}
else
{
lean_object* v_a_3722_; lean_object* v___x_3724_; uint8_t v_isShared_3725_; uint8_t v_isSharedCheck_3753_; 
v_a_3722_ = lean_ctor_get(v___x_3720_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v___x_3720_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3724_ = v___x_3720_;
v_isShared_3725_ = v_isSharedCheck_3753_;
goto v_resetjp_3723_;
}
else
{
lean_inc(v_a_3722_);
lean_dec(v___x_3720_);
v___x_3724_ = lean_box(0);
v_isShared_3725_ = v_isSharedCheck_3753_;
goto v_resetjp_3723_;
}
v_resetjp_3723_:
{
uint8_t v___x_3726_; 
v___x_3726_ = l_Lean_Exception_isInterrupt(v_a_3722_);
if (v___x_3726_ == 0)
{
uint8_t v___x_3727_; 
lean_inc(v_a_3722_);
v___x_3727_ = l_Lean_Exception_isRuntime(v_a_3722_);
if (v___x_3727_ == 0)
{
lean_object* v___x_3728_; 
lean_del_object(v___x_3724_);
lean_dec(v_a_3722_);
v___x_3728_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3719_, v___y_3515_, v___y_3517_);
if (lean_obj_tag(v___x_3728_) == 0)
{
lean_object* v___x_3729_; 
lean_dec_ref_known(v___x_3728_, 1);
lean_inc(v___x_3589_);
v___x_3729_ = l_Lean_Elab_Term_elabCDotFunctionAlias_x3f(v___x_3589_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3729_) == 0)
{
lean_object* v_a_3730_; 
v_a_3730_ = lean_ctor_get(v___x_3729_, 0);
lean_inc(v_a_3730_);
lean_dec_ref_known(v___x_3729_, 1);
v_a_3621_ = v_a_3730_;
goto v___jp_3620_;
}
else
{
lean_object* v_a_3731_; lean_object* v___x_3733_; uint8_t v_isShared_3734_; uint8_t v_isSharedCheck_3738_; 
lean_dec(v___x_3589_);
lean_del_object(v___x_3534_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_del_object(v___x_3529_);
lean_dec(v_fst_3527_);
v_a_3731_ = lean_ctor_get(v___x_3729_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3729_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3733_ = v___x_3729_;
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
else
{
lean_inc(v_a_3731_);
lean_dec(v___x_3729_);
v___x_3733_ = lean_box(0);
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
v_resetjp_3732_:
{
lean_object* v___x_3736_; 
if (v_isShared_3734_ == 0)
{
v___x_3736_ = v___x_3733_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v_a_3731_);
v___x_3736_ = v_reuseFailAlloc_3737_;
goto v_reusejp_3735_;
}
v_reusejp_3735_:
{
return v___x_3736_;
}
}
}
}
else
{
lean_object* v_a_3739_; lean_object* v___x_3741_; uint8_t v_isShared_3742_; uint8_t v_isSharedCheck_3746_; 
lean_dec(v___x_3589_);
lean_del_object(v___x_3534_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_del_object(v___x_3529_);
lean_dec(v_fst_3527_);
v_a_3739_ = lean_ctor_get(v___x_3728_, 0);
v_isSharedCheck_3746_ = !lean_is_exclusive(v___x_3728_);
if (v_isSharedCheck_3746_ == 0)
{
v___x_3741_ = v___x_3728_;
v_isShared_3742_ = v_isSharedCheck_3746_;
goto v_resetjp_3740_;
}
else
{
lean_inc(v_a_3739_);
lean_dec(v___x_3728_);
v___x_3741_ = lean_box(0);
v_isShared_3742_ = v_isSharedCheck_3746_;
goto v_resetjp_3740_;
}
v_resetjp_3740_:
{
lean_object* v___x_3744_; 
if (v_isShared_3742_ == 0)
{
v___x_3744_ = v___x_3741_;
goto v_reusejp_3743_;
}
else
{
lean_object* v_reuseFailAlloc_3745_; 
v_reuseFailAlloc_3745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3745_, 0, v_a_3739_);
v___x_3744_ = v_reuseFailAlloc_3745_;
goto v_reusejp_3743_;
}
v_reusejp_3743_:
{
return v___x_3744_;
}
}
}
}
else
{
lean_object* v___x_3748_; 
lean_dec(v_a_3719_);
lean_dec(v___x_3589_);
lean_del_object(v___x_3534_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_del_object(v___x_3529_);
lean_dec(v_fst_3527_);
if (v_isShared_3725_ == 0)
{
v___x_3748_ = v___x_3724_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3722_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
}
}
}
else
{
lean_object* v___x_3751_; 
lean_dec(v_a_3719_);
lean_dec(v___x_3589_);
lean_del_object(v___x_3534_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_del_object(v___x_3529_);
lean_dec(v_fst_3527_);
if (v_isShared_3725_ == 0)
{
v___x_3751_ = v___x_3724_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v_a_3722_);
v___x_3751_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
return v___x_3751_;
}
}
}
}
}
else
{
lean_object* v_a_3754_; lean_object* v___x_3756_; uint8_t v_isShared_3757_; uint8_t v_isSharedCheck_3761_; 
lean_dec(v___x_3589_);
lean_del_object(v___x_3534_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_del_object(v___x_3529_);
lean_dec(v_fst_3527_);
v_a_3754_ = lean_ctor_get(v___x_3718_, 0);
v_isSharedCheck_3761_ = !lean_is_exclusive(v___x_3718_);
if (v_isSharedCheck_3761_ == 0)
{
v___x_3756_ = v___x_3718_;
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
else
{
lean_inc(v_a_3754_);
lean_dec(v___x_3718_);
v___x_3756_ = lean_box(0);
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
v_resetjp_3755_:
{
lean_object* v___x_3759_; 
if (v_isShared_3757_ == 0)
{
v___x_3759_ = v___x_3756_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v_a_3754_);
v___x_3759_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
return v___x_3759_;
}
}
}
v___jp_3590_:
{
lean_object* v_toCold_3595_; lean_object* v_currRecDepth_3596_; lean_object* v_ref_3597_; uint16_t v_optionFlags_3598_; uint8_t v_suppressElabErrors_3599_; uint8_t v_checkDeprecated_3600_; uint8_t v_isRecordingDeps_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v_ref_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; 
v_toCold_3595_ = lean_ctor_get(v___y_3593_, 0);
v_currRecDepth_3596_ = lean_ctor_get(v___y_3593_, 1);
v_ref_3597_ = lean_ctor_get(v___y_3593_, 2);
v_optionFlags_3598_ = lean_ctor_get_uint16(v___y_3593_, sizeof(void*)*3);
v_suppressElabErrors_3599_ = lean_ctor_get_uint8(v___y_3593_, sizeof(void*)*3 + 2);
v_checkDeprecated_3600_ = lean_ctor_get_uint8(v___y_3593_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3601_ = lean_ctor_get_uint8(v___y_3593_, sizeof(void*)*3 + 4);
v___x_3602_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___closed__8);
lean_inc(v___x_3589_);
v___x_3603_ = l_Lean_MessageData_ofSyntax(v___x_3589_);
v___x_3604_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3602_);
lean_ctor_set(v___x_3604_, 1, v___x_3603_);
v___x_3605_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem_spec__0_spec__0___closed__5);
v___x_3606_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3606_, 0, v___x_3604_);
lean_ctor_set(v___x_3606_, 1, v___x_3605_);
v_ref_3607_ = l_Lean_replaceRef(v___x_3589_, v_ref_3597_);
lean_dec(v___x_3589_);
lean_inc(v_currRecDepth_3596_);
lean_inc_ref(v_toCold_3595_);
v___x_3608_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3608_, 0, v_toCold_3595_);
lean_ctor_set(v___x_3608_, 1, v_currRecDepth_3596_);
lean_ctor_set(v___x_3608_, 2, v_ref_3607_);
lean_ctor_set_uint16(v___x_3608_, sizeof(void*)*3, v_optionFlags_3598_);
lean_ctor_set_uint8(v___x_3608_, sizeof(void*)*3 + 2, v_suppressElabErrors_3599_);
lean_ctor_set_uint8(v___x_3608_, sizeof(void*)*3 + 3, v_checkDeprecated_3600_);
lean_ctor_set_uint8(v___x_3608_, sizeof(void*)*3 + 4, v_isRecordingDeps_3601_);
v___x_3609_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__1___redArg(v___x_3606_, v___y_3591_, v___y_3592_, v___x_3608_, v___y_3594_);
lean_dec_ref_known(v___x_3608_, 3);
if (lean_obj_tag(v___x_3609_) == 0)
{
lean_object* v___x_3610_; lean_object* v___x_3611_; 
lean_dec_ref_known(v___x_3609_, 1);
v___x_3610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3610_, 0, v_fst_3531_);
lean_ctor_set(v___x_3610_, 1, v_snd_3532_);
v___x_3611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3611_, 0, v_fst_3527_);
lean_ctor_set(v___x_3611_, 1, v___x_3610_);
v_a_3520_ = v___x_3611_;
goto v___jp_3519_;
}
else
{
lean_object* v_a_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3619_; 
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_dec(v_fst_3527_);
v_a_3612_ = lean_ctor_get(v___x_3609_, 0);
v_isSharedCheck_3619_ = !lean_is_exclusive(v___x_3609_);
if (v_isSharedCheck_3619_ == 0)
{
v___x_3614_ = v___x_3609_;
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_a_3612_);
lean_dec(v___x_3609_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3617_; 
if (v_isShared_3615_ == 0)
{
v___x_3617_ = v___x_3614_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v_a_3612_);
v___x_3617_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
return v___x_3617_;
}
}
}
}
v___jp_3620_:
{
if (lean_obj_tag(v_a_3621_) == 1)
{
lean_object* v_val_3622_; 
v_val_3622_ = lean_ctor_get(v_a_3621_, 0);
lean_inc(v_val_3622_);
lean_dec_ref_known(v_a_3621_, 1);
switch(lean_obj_tag(v_val_3622_))
{
case 4:
{
lean_object* v_declName_3623_; lean_object* v___x_3624_; 
lean_dec(v___x_3589_);
lean_del_object(v___x_3534_);
lean_del_object(v___x_3529_);
v_declName_3623_ = lean_ctor_get(v_val_3622_, 0);
lean_inc_n(v_declName_3623_, 2);
lean_dec_ref_known(v_val_3622_, 2);
v___x_3624_ = l_Lean_getConstInfo___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__2(v_declName_3623_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3624_) == 0)
{
lean_object* v___x_3625_; lean_object* v___x_3626_; 
lean_dec_ref_known(v___x_3624_, 1);
v___x_3625_ = lean_unsigned_to_nat(1000u);
v___x_3626_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_3511_, v___y_3513_, v___y_3515_, v___y_3517_);
if (lean_obj_tag(v___x_3626_) == 0)
{
lean_object* v_a_3627_; lean_object* v___x_3628_; 
v_a_3627_ = lean_ctor_get(v___x_3626_, 0);
lean_inc(v_a_3627_);
lean_dec_ref_known(v___x_3626_, 1);
v___x_3628_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromConst(v_declName_3623_, v___x_3625_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3628_) == 0)
{
lean_object* v_a_3629_; lean_object* v___x_3630_; 
lean_dec(v_a_3627_);
v_a_3629_ = lean_ctor_get(v___x_3628_, 0);
lean_inc(v_a_3629_);
lean_dec_ref_known(v___x_3628_, 1);
v___x_3630_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_insert(v_fst_3527_, v_a_3629_);
v_fst_3546_ = v___x_3630_;
v_snd_3547_ = v_fst_3531_;
goto v___jp_3545_;
}
else
{
lean_object* v_a_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3653_; 
v_a_3631_ = lean_ctor_get(v___x_3628_, 0);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3628_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3633_ = v___x_3628_;
v_isShared_3634_ = v_isSharedCheck_3653_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_a_3631_);
lean_dec(v___x_3628_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3653_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
uint8_t v___x_3635_; 
v___x_3635_ = l_Lean_Exception_isInterrupt(v_a_3631_);
if (v___x_3635_ == 0)
{
uint8_t v___x_3636_; 
lean_inc(v_a_3631_);
v___x_3636_ = l_Lean_Exception_isRuntime(v_a_3631_);
if (v___x_3636_ == 0)
{
lean_object* v___x_3637_; 
lean_del_object(v___x_3633_);
lean_dec(v_a_3631_);
v___x_3637_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_3627_, v___x_3636_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3637_) == 0)
{
lean_object* v___x_3638_; 
lean_dec_ref_known(v___x_3637_, 1);
lean_inc(v_a_3556_);
v___x_3638_ = lean_array_push(v_fst_3531_, v_a_3556_);
v_fst_3546_ = v_fst_3527_;
v_snd_3547_ = v___x_3638_;
goto v___jp_3545_;
}
else
{
lean_object* v_a_3639_; lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3646_; 
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_dec(v_fst_3527_);
v_a_3639_ = lean_ctor_get(v___x_3637_, 0);
v_isSharedCheck_3646_ = !lean_is_exclusive(v___x_3637_);
if (v_isSharedCheck_3646_ == 0)
{
v___x_3641_ = v___x_3637_;
v_isShared_3642_ = v_isSharedCheck_3646_;
goto v_resetjp_3640_;
}
else
{
lean_inc(v_a_3639_);
lean_dec(v___x_3637_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3646_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
lean_object* v___x_3644_; 
if (v_isShared_3642_ == 0)
{
v___x_3644_ = v___x_3641_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3645_; 
v_reuseFailAlloc_3645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3645_, 0, v_a_3639_);
v___x_3644_ = v_reuseFailAlloc_3645_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
return v___x_3644_;
}
}
}
}
else
{
lean_object* v___x_3648_; 
lean_dec(v_a_3627_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_dec(v_fst_3527_);
if (v_isShared_3634_ == 0)
{
v___x_3648_ = v___x_3633_;
goto v_reusejp_3647_;
}
else
{
lean_object* v_reuseFailAlloc_3649_; 
v_reuseFailAlloc_3649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3649_, 0, v_a_3631_);
v___x_3648_ = v_reuseFailAlloc_3649_;
goto v_reusejp_3647_;
}
v_reusejp_3647_:
{
return v___x_3648_;
}
}
}
else
{
lean_object* v___x_3651_; 
lean_dec(v_a_3627_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_dec(v_fst_3527_);
if (v_isShared_3634_ == 0)
{
v___x_3651_ = v___x_3633_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_a_3631_);
v___x_3651_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
return v___x_3651_;
}
}
}
}
}
else
{
lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3661_; 
lean_dec(v_declName_3623_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_dec(v_fst_3527_);
v_a_3654_ = lean_ctor_get(v___x_3626_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v___x_3626_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3656_ = v___x_3626_;
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_dec(v___x_3626_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3659_; 
if (v_isShared_3657_ == 0)
{
v___x_3659_ = v___x_3656_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v_a_3654_);
v___x_3659_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
return v___x_3659_;
}
}
}
}
else
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3669_; 
lean_dec(v_declName_3623_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_dec(v_fst_3527_);
v_a_3662_ = lean_ctor_get(v___x_3624_, 0);
v_isSharedCheck_3669_ = !lean_is_exclusive(v___x_3624_);
if (v_isSharedCheck_3669_ == 0)
{
v___x_3664_ = v___x_3624_;
v_isShared_3665_ = v_isSharedCheck_3669_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_a_3662_);
lean_dec(v___x_3624_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3669_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
lean_object* v___x_3667_; 
if (v_isShared_3665_ == 0)
{
v___x_3667_ = v___x_3664_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v_a_3662_);
v___x_3667_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
return v___x_3667_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_3670_; lean_object* v___x_3671_; 
lean_dec(v___x_3589_);
v_fvarId_3670_ = lean_ctor_get(v_val_3622_, 0);
lean_inc(v_fvarId_3670_);
v___x_3671_ = l_Lean_Meta_getFVarLocalDecl___redArg(v_val_3622_, v___y_3514_, v___y_3516_, v___y_3517_);
lean_dec_ref_known(v_val_3622_, 1);
if (lean_obj_tag(v___x_3671_) == 0)
{
lean_object* v___x_3672_; lean_object* v___x_3673_; 
lean_dec_ref_known(v___x_3671_, 1);
v___x_3672_ = lean_unsigned_to_nat(1000u);
v___x_3673_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_3511_, v___y_3513_, v___y_3515_, v___y_3517_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_a_3674_; lean_object* v___x_3675_; 
v_a_3674_ = lean_ctor_get(v___x_3673_, 0);
lean_inc(v_a_3674_);
lean_dec_ref_known(v___x_3673_, 1);
v___x_3675_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromLocal(v_fvarId_3670_, v___x_3672_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3675_) == 0)
{
lean_object* v_a_3676_; lean_object* v___x_3677_; 
lean_dec(v_a_3674_);
v_a_3676_ = lean_ctor_get(v___x_3675_, 0);
lean_inc(v_a_3676_);
lean_dec_ref_known(v___x_3675_, 1);
v___x_3677_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_insert(v_fst_3527_, v_a_3676_);
v_fst_3537_ = v___x_3677_;
v_snd_3538_ = v_fst_3531_;
goto v___jp_3536_;
}
else
{
lean_object* v_a_3678_; lean_object* v___x_3680_; uint8_t v_isShared_3681_; uint8_t v_isSharedCheck_3700_; 
v_a_3678_ = lean_ctor_get(v___x_3675_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3675_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3680_ = v___x_3675_;
v_isShared_3681_ = v_isSharedCheck_3700_;
goto v_resetjp_3679_;
}
else
{
lean_inc(v_a_3678_);
lean_dec(v___x_3675_);
v___x_3680_ = lean_box(0);
v_isShared_3681_ = v_isSharedCheck_3700_;
goto v_resetjp_3679_;
}
v_resetjp_3679_:
{
uint8_t v___x_3682_; 
v___x_3682_ = l_Lean_Exception_isInterrupt(v_a_3678_);
if (v___x_3682_ == 0)
{
uint8_t v___x_3683_; 
lean_inc(v_a_3678_);
v___x_3683_ = l_Lean_Exception_isRuntime(v_a_3678_);
if (v___x_3683_ == 0)
{
lean_object* v___x_3684_; 
lean_del_object(v___x_3680_);
lean_dec(v_a_3678_);
v___x_3684_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_3674_, v___x_3683_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3684_) == 0)
{
lean_object* v___x_3685_; 
lean_dec_ref_known(v___x_3684_, 1);
lean_inc(v_a_3556_);
v___x_3685_ = lean_array_push(v_fst_3531_, v_a_3556_);
v_fst_3537_ = v_fst_3527_;
v_snd_3538_ = v___x_3685_;
goto v___jp_3536_;
}
else
{
lean_object* v_a_3686_; lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3693_; 
lean_del_object(v___x_3534_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_del_object(v___x_3529_);
lean_dec(v_fst_3527_);
v_a_3686_ = lean_ctor_get(v___x_3684_, 0);
v_isSharedCheck_3693_ = !lean_is_exclusive(v___x_3684_);
if (v_isSharedCheck_3693_ == 0)
{
v___x_3688_ = v___x_3684_;
v_isShared_3689_ = v_isSharedCheck_3693_;
goto v_resetjp_3687_;
}
else
{
lean_inc(v_a_3686_);
lean_dec(v___x_3684_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3693_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
lean_object* v___x_3691_; 
if (v_isShared_3689_ == 0)
{
v___x_3691_ = v___x_3688_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v_a_3686_);
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
lean_object* v___x_3695_; 
lean_dec(v_a_3674_);
lean_del_object(v___x_3534_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_del_object(v___x_3529_);
lean_dec(v_fst_3527_);
if (v_isShared_3681_ == 0)
{
v___x_3695_ = v___x_3680_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v_a_3678_);
v___x_3695_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
return v___x_3695_;
}
}
}
else
{
lean_object* v___x_3698_; 
lean_dec(v_a_3674_);
lean_del_object(v___x_3534_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_del_object(v___x_3529_);
lean_dec(v_fst_3527_);
if (v_isShared_3681_ == 0)
{
v___x_3698_ = v___x_3680_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v_a_3678_);
v___x_3698_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
return v___x_3698_;
}
}
}
}
}
else
{
lean_object* v_a_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3708_; 
lean_dec(v_fvarId_3670_);
lean_del_object(v___x_3534_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_del_object(v___x_3529_);
lean_dec(v_fst_3527_);
v_a_3701_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3708_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3708_ == 0)
{
v___x_3703_ = v___x_3673_;
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_a_3701_);
lean_dec(v___x_3673_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3706_; 
if (v_isShared_3704_ == 0)
{
v___x_3706_ = v___x_3703_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v_a_3701_);
v___x_3706_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
return v___x_3706_;
}
}
}
}
else
{
lean_object* v_a_3709_; lean_object* v___x_3711_; uint8_t v_isShared_3712_; uint8_t v_isSharedCheck_3716_; 
lean_dec(v_fvarId_3670_);
lean_del_object(v___x_3534_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_del_object(v___x_3529_);
lean_dec(v_fst_3527_);
v_a_3709_ = lean_ctor_get(v___x_3671_, 0);
v_isSharedCheck_3716_ = !lean_is_exclusive(v___x_3671_);
if (v_isSharedCheck_3716_ == 0)
{
v___x_3711_ = v___x_3671_;
v_isShared_3712_ = v_isSharedCheck_3716_;
goto v_resetjp_3710_;
}
else
{
lean_inc(v_a_3709_);
lean_dec(v___x_3671_);
v___x_3711_ = lean_box(0);
v_isShared_3712_ = v_isSharedCheck_3716_;
goto v_resetjp_3710_;
}
v_resetjp_3710_:
{
lean_object* v___x_3714_; 
if (v_isShared_3712_ == 0)
{
v___x_3714_ = v___x_3711_;
goto v_reusejp_3713_;
}
else
{
lean_object* v_reuseFailAlloc_3715_; 
v_reuseFailAlloc_3715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3715_, 0, v_a_3709_);
v___x_3714_ = v_reuseFailAlloc_3715_;
goto v_reusejp_3713_;
}
v_reusejp_3713_:
{
return v___x_3714_;
}
}
}
}
default: 
{
lean_dec(v_val_3622_);
lean_del_object(v___x_3534_);
lean_del_object(v___x_3529_);
v___y_3591_ = v___y_3514_;
v___y_3592_ = v___y_3515_;
v___y_3593_ = v___y_3516_;
v___y_3594_ = v___y_3517_;
goto v___jp_3590_;
}
}
}
else
{
lean_dec(v_a_3621_);
lean_del_object(v___x_3534_);
lean_del_object(v___x_3529_);
v___y_3591_ = v___y_3514_;
v___y_3592_ = v___y_3515_;
v___y_3593_ = v___y_3516_;
v___y_3594_ = v___y_3517_;
goto v___jp_3590_;
}
}
}
}
}
}
else
{
lean_object* v___x_3762_; lean_object* v___x_3763_; 
lean_dec(v___x_3561_);
lean_del_object(v___x_3534_);
lean_del_object(v___x_3529_);
v___x_3762_ = l_Lean_Syntax_getArg(v_a_3556_, v___x_3555_);
v___x_3763_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_3511_, v___y_3513_, v___y_3515_, v___y_3517_);
if (lean_obj_tag(v___x_3763_) == 0)
{
lean_object* v_a_3764_; lean_object* v___x_3766_; uint8_t v_isShared_3767_; uint8_t v_isSharedCheck_3836_; 
v_a_3764_ = lean_ctor_get(v___x_3763_, 0);
v_isSharedCheck_3836_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3836_ == 0)
{
v___x_3766_ = v___x_3763_;
v_isShared_3767_ = v_isSharedCheck_3836_;
goto v_resetjp_3765_;
}
else
{
lean_inc(v_a_3764_);
lean_dec(v___x_3763_);
v___x_3766_ = lean_box(0);
v_isShared_3767_ = v_isSharedCheck_3836_;
goto v_resetjp_3765_;
}
v_resetjp_3765_:
{
lean_object* v_a_3769_; lean_object* v___y_3789_; lean_object* v___x_3795_; 
lean_inc(v___x_3762_);
v___x_3795_ = l_Lean_Elab_Term_isLocalIdent_x3f(v___x_3762_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3795_) == 0)
{
lean_object* v_a_3796_; 
v_a_3796_ = lean_ctor_get(v___x_3795_, 0);
lean_inc(v_a_3796_);
lean_dec_ref_known(v___x_3795_, 1);
if (lean_obj_tag(v_a_3796_) == 1)
{
lean_object* v_val_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; 
lean_dec(v___x_3762_);
v_val_3797_ = lean_ctor_get(v_a_3796_, 0);
lean_inc(v_val_3797_);
lean_dec_ref_known(v_a_3796_, 1);
v___x_3798_ = l_Lean_Expr_fvarId_x21(v_val_3797_);
lean_dec(v_val_3797_);
v___x_3799_ = lean_unsigned_to_nat(1000u);
v___x_3800_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromLocal(v___x_3798_, v___x_3799_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3800_) == 0)
{
lean_object* v_a_3801_; lean_object* v___x_3802_; 
v_a_3801_ = lean_ctor_get(v___x_3800_, 0);
lean_inc(v_a_3801_);
lean_dec_ref_known(v___x_3800_, 1);
lean_inc(v_fst_3531_);
lean_inc(v_fst_3527_);
v___x_3802_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___lam__0(v_fst_3527_, v_fst_3531_, v_a_3801_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
v___y_3789_ = v___x_3802_;
goto v___jp_3788_;
}
else
{
lean_object* v_a_3803_; 
v_a_3803_ = lean_ctor_get(v___x_3800_, 0);
lean_inc(v_a_3803_);
lean_dec_ref_known(v___x_3800_, 1);
v_a_3769_ = v_a_3803_;
goto v___jp_3768_;
}
}
else
{
lean_object* v___x_3804_; lean_object* v___x_3805_; 
lean_dec(v_a_3796_);
v___x_3804_ = lean_box(0);
v___x_3805_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_3511_, v___y_3513_, v___y_3515_, v___y_3517_);
if (lean_obj_tag(v___x_3805_) == 0)
{
lean_object* v_a_3806_; lean_object* v___x_3807_; 
v_a_3806_ = lean_ctor_get(v___x_3805_, 0);
lean_inc(v_a_3806_);
lean_dec_ref_known(v___x_3805_, 1);
lean_inc(v___x_3762_);
v___x_3807_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_3762_, v___x_3804_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3807_) == 0)
{
lean_object* v_a_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; 
lean_dec(v_a_3806_);
lean_dec(v___x_3762_);
v_a_3808_ = lean_ctor_get(v___x_3807_, 0);
lean_inc(v_a_3808_);
lean_dec_ref_known(v___x_3807_, 1);
v___x_3809_ = lean_unsigned_to_nat(1000u);
v___x_3810_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromConst(v_a_3808_, v___x_3809_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3810_) == 0)
{
lean_object* v_a_3811_; lean_object* v___x_3812_; 
v_a_3811_ = lean_ctor_get(v___x_3810_, 0);
lean_inc(v_a_3811_);
lean_dec_ref_known(v___x_3810_, 1);
lean_inc(v_fst_3531_);
lean_inc(v_fst_3527_);
v___x_3812_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___lam__0(v_fst_3527_, v_fst_3531_, v_a_3811_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
v___y_3789_ = v___x_3812_;
goto v___jp_3788_;
}
else
{
lean_object* v_a_3813_; 
v_a_3813_ = lean_ctor_get(v___x_3810_, 0);
lean_inc(v_a_3813_);
lean_dec_ref_known(v___x_3810_, 1);
v_a_3769_ = v_a_3813_;
goto v___jp_3768_;
}
}
else
{
lean_object* v_a_3814_; uint8_t v___x_3815_; 
v_a_3814_ = lean_ctor_get(v___x_3807_, 0);
lean_inc(v_a_3814_);
lean_dec_ref_known(v___x_3807_, 1);
v___x_3815_ = l_Lean_Exception_isInterrupt(v_a_3814_);
if (v___x_3815_ == 0)
{
uint8_t v___x_3816_; 
lean_inc(v_a_3814_);
v___x_3816_ = l_Lean_Exception_isRuntime(v_a_3814_);
if (v___x_3816_ == 0)
{
lean_object* v___x_3817_; 
lean_dec(v_a_3814_);
v___x_3817_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_3806_, v___x_3816_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3817_) == 0)
{
lean_object* v_toCold_3818_; lean_object* v_currRecDepth_3819_; lean_object* v_ref_3820_; uint16_t v_optionFlags_3821_; uint8_t v_suppressElabErrors_3822_; uint8_t v_checkDeprecated_3823_; uint8_t v_isRecordingDeps_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v_ref_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; 
lean_dec_ref_known(v___x_3817_, 1);
v_toCold_3818_ = lean_ctor_get(v___y_3516_, 0);
v_currRecDepth_3819_ = lean_ctor_get(v___y_3516_, 1);
v_ref_3820_ = lean_ctor_get(v___y_3516_, 2);
v_optionFlags_3821_ = lean_ctor_get_uint16(v___y_3516_, sizeof(void*)*3);
v_suppressElabErrors_3822_ = lean_ctor_get_uint8(v___y_3516_, sizeof(void*)*3 + 2);
v_checkDeprecated_3823_ = lean_ctor_get_uint8(v___y_3516_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3824_ = lean_ctor_get_uint8(v___y_3516_, sizeof(void*)*3 + 4);
v___x_3825_ = l_Lean_Syntax_getId(v___x_3762_);
v___x_3826_ = l_Lean_Name_eraseMacroScopes(v___x_3825_);
lean_dec(v___x_3825_);
v_ref_3827_ = l_Lean_replaceRef(v___x_3762_, v_ref_3820_);
lean_dec(v___x_3762_);
lean_inc(v_currRecDepth_3819_);
lean_inc_ref(v_toCold_3818_);
v___x_3828_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3828_, 0, v_toCold_3818_);
lean_ctor_set(v___x_3828_, 1, v_currRecDepth_3819_);
lean_ctor_set(v___x_3828_, 2, v_ref_3827_);
lean_ctor_set_uint16(v___x_3828_, sizeof(void*)*3, v_optionFlags_3821_);
lean_ctor_set_uint8(v___x_3828_, sizeof(void*)*3 + 2, v_suppressElabErrors_3822_);
lean_ctor_set_uint8(v___x_3828_, sizeof(void*)*3 + 3, v_checkDeprecated_3823_);
lean_ctor_set_uint8(v___x_3828_, sizeof(void*)*3 + 4, v_isRecordingDeps_3824_);
v___x_3829_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3___redArg(v___x_3826_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___x_3828_, v___y_3517_);
lean_dec_ref_known(v___x_3828_, 3);
if (lean_obj_tag(v___x_3829_) == 0)
{
lean_object* v_a_3830_; lean_object* v___x_3831_; 
v_a_3830_ = lean_ctor_get(v___x_3829_, 0);
lean_inc(v_a_3830_);
lean_dec_ref_known(v___x_3829_, 1);
lean_inc(v_fst_3531_);
lean_inc(v_fst_3527_);
v___x_3831_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___lam__0(v_fst_3527_, v_fst_3531_, v_a_3830_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
v___y_3789_ = v___x_3831_;
goto v___jp_3788_;
}
else
{
lean_object* v_a_3832_; 
v_a_3832_ = lean_ctor_get(v___x_3829_, 0);
lean_inc(v_a_3832_);
lean_dec_ref_known(v___x_3829_, 1);
v_a_3769_ = v_a_3832_;
goto v___jp_3768_;
}
}
else
{
lean_object* v_a_3833_; 
lean_dec(v___x_3762_);
v_a_3833_ = lean_ctor_get(v___x_3817_, 0);
lean_inc(v_a_3833_);
lean_dec_ref_known(v___x_3817_, 1);
v_a_3769_ = v_a_3833_;
goto v___jp_3768_;
}
}
else
{
lean_dec(v_a_3806_);
lean_dec(v___x_3762_);
v_a_3769_ = v_a_3814_;
goto v___jp_3768_;
}
}
else
{
lean_dec(v_a_3806_);
lean_dec(v___x_3762_);
v_a_3769_ = v_a_3814_;
goto v___jp_3768_;
}
}
}
else
{
lean_object* v_a_3834_; 
lean_dec(v___x_3762_);
v_a_3834_ = lean_ctor_get(v___x_3805_, 0);
lean_inc(v_a_3834_);
lean_dec_ref_known(v___x_3805_, 1);
v_a_3769_ = v_a_3834_;
goto v___jp_3768_;
}
}
}
else
{
lean_object* v_a_3835_; 
lean_dec(v___x_3762_);
v_a_3835_ = lean_ctor_get(v___x_3795_, 0);
lean_inc(v_a_3835_);
lean_dec_ref_known(v___x_3795_, 1);
v_a_3769_ = v_a_3835_;
goto v___jp_3768_;
}
v___jp_3768_:
{
uint8_t v___x_3770_; 
v___x_3770_ = l_Lean_Exception_isInterrupt(v_a_3769_);
if (v___x_3770_ == 0)
{
uint8_t v___x_3771_; 
lean_inc_ref(v_a_3769_);
v___x_3771_ = l_Lean_Exception_isRuntime(v_a_3769_);
if (v___x_3771_ == 0)
{
lean_object* v___x_3772_; 
lean_dec_ref(v_a_3769_);
lean_del_object(v___x_3766_);
v___x_3772_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_3764_, v___x_3771_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3772_) == 0)
{
lean_object* v___x_3773_; 
lean_dec_ref_known(v___x_3772_, 1);
lean_inc(v_a_3556_);
v___x_3773_ = lean_array_push(v_fst_3531_, v_a_3556_);
v_fst_3551_ = v_fst_3527_;
v_snd_3552_ = v___x_3773_;
goto v___jp_3550_;
}
else
{
lean_object* v_a_3774_; lean_object* v___x_3776_; uint8_t v_isShared_3777_; uint8_t v_isSharedCheck_3781_; 
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_dec(v_fst_3527_);
v_a_3774_ = lean_ctor_get(v___x_3772_, 0);
v_isSharedCheck_3781_ = !lean_is_exclusive(v___x_3772_);
if (v_isSharedCheck_3781_ == 0)
{
v___x_3776_ = v___x_3772_;
v_isShared_3777_ = v_isSharedCheck_3781_;
goto v_resetjp_3775_;
}
else
{
lean_inc(v_a_3774_);
lean_dec(v___x_3772_);
v___x_3776_ = lean_box(0);
v_isShared_3777_ = v_isSharedCheck_3781_;
goto v_resetjp_3775_;
}
v_resetjp_3775_:
{
lean_object* v___x_3779_; 
if (v_isShared_3777_ == 0)
{
v___x_3779_ = v___x_3776_;
goto v_reusejp_3778_;
}
else
{
lean_object* v_reuseFailAlloc_3780_; 
v_reuseFailAlloc_3780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3780_, 0, v_a_3774_);
v___x_3779_ = v_reuseFailAlloc_3780_;
goto v_reusejp_3778_;
}
v_reusejp_3778_:
{
return v___x_3779_;
}
}
}
}
else
{
lean_object* v___x_3783_; 
lean_dec(v_a_3764_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_dec(v_fst_3527_);
if (v_isShared_3767_ == 0)
{
lean_ctor_set_tag(v___x_3766_, 1);
lean_ctor_set(v___x_3766_, 0, v_a_3769_);
v___x_3783_ = v___x_3766_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v_a_3769_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
else
{
lean_object* v___x_3786_; 
lean_dec(v_a_3764_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_dec(v_fst_3527_);
if (v_isShared_3767_ == 0)
{
lean_ctor_set_tag(v___x_3766_, 1);
lean_ctor_set(v___x_3766_, 0, v_a_3769_);
v___x_3786_ = v___x_3766_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v_a_3769_);
v___x_3786_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
return v___x_3786_;
}
}
}
v___jp_3788_:
{
if (lean_obj_tag(v___y_3789_) == 0)
{
lean_object* v_a_3790_; lean_object* v_snd_3791_; lean_object* v_fst_3792_; lean_object* v_snd_3793_; 
lean_del_object(v___x_3766_);
lean_dec(v_a_3764_);
lean_dec(v_fst_3531_);
lean_dec(v_fst_3527_);
v_a_3790_ = lean_ctor_get(v___y_3789_, 0);
lean_inc(v_a_3790_);
lean_dec_ref_known(v___y_3789_, 1);
v_snd_3791_ = lean_ctor_get(v_a_3790_, 1);
lean_inc(v_snd_3791_);
lean_dec(v_a_3790_);
v_fst_3792_ = lean_ctor_get(v_snd_3791_, 0);
lean_inc(v_fst_3792_);
v_snd_3793_ = lean_ctor_get(v_snd_3791_, 1);
lean_inc(v_snd_3793_);
lean_dec(v_snd_3791_);
v_fst_3551_ = v_fst_3792_;
v_snd_3552_ = v_snd_3793_;
goto v___jp_3550_;
}
else
{
lean_object* v_a_3794_; 
v_a_3794_ = lean_ctor_get(v___y_3789_, 0);
lean_inc(v_a_3794_);
lean_dec_ref_known(v___y_3789_, 1);
v_a_3769_ = v_a_3794_;
goto v___jp_3768_;
}
}
}
}
else
{
lean_object* v_a_3837_; lean_object* v___x_3839_; uint8_t v_isShared_3840_; uint8_t v_isSharedCheck_3844_; 
lean_dec(v___x_3762_);
lean_dec(v_snd_3532_);
lean_dec(v_fst_3531_);
lean_dec(v_fst_3527_);
v_a_3837_ = lean_ctor_get(v___x_3763_, 0);
v_isSharedCheck_3844_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3844_ == 0)
{
v___x_3839_ = v___x_3763_;
v_isShared_3840_ = v_isSharedCheck_3844_;
goto v_resetjp_3838_;
}
else
{
lean_inc(v_a_3837_);
lean_dec(v___x_3763_);
v___x_3839_ = lean_box(0);
v_isShared_3840_ = v_isSharedCheck_3844_;
goto v_resetjp_3838_;
}
v_resetjp_3838_:
{
lean_object* v___x_3842_; 
if (v_isShared_3840_ == 0)
{
v___x_3842_ = v___x_3839_;
goto v_reusejp_3841_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v_a_3837_);
v___x_3842_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3841_;
}
v_reusejp_3841_:
{
return v___x_3842_;
}
}
}
}
v___jp_3536_:
{
lean_object* v___x_3540_; 
if (v_isShared_3535_ == 0)
{
lean_ctor_set(v___x_3534_, 0, v_snd_3538_);
v___x_3540_ = v___x_3534_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v_snd_3538_);
lean_ctor_set(v_reuseFailAlloc_3544_, 1, v_snd_3532_);
v___x_3540_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
lean_object* v___x_3542_; 
if (v_isShared_3530_ == 0)
{
lean_ctor_set(v___x_3529_, 1, v___x_3540_);
lean_ctor_set(v___x_3529_, 0, v_fst_3537_);
v___x_3542_ = v___x_3529_;
goto v_reusejp_3541_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v_fst_3537_);
lean_ctor_set(v_reuseFailAlloc_3543_, 1, v___x_3540_);
v___x_3542_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3541_;
}
v_reusejp_3541_:
{
v_a_3520_ = v___x_3542_;
goto v___jp_3519_;
}
}
}
v___jp_3545_:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3548_, 0, v_snd_3547_);
lean_ctor_set(v___x_3548_, 1, v_snd_3532_);
v___x_3549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3549_, 0, v_fst_3546_);
lean_ctor_set(v___x_3549_, 1, v___x_3548_);
v_a_3520_ = v___x_3549_;
goto v___jp_3519_;
}
v___jp_3550_:
{
lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3553_, 0, v_snd_3552_);
lean_ctor_set(v___x_3553_, 1, v_snd_3532_);
v___x_3554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3554_, 0, v_fst_3551_);
lean_ctor_set(v___x_3554_, 1, v___x_3553_);
v_a_3520_ = v___x_3554_;
goto v___jp_3519_;
}
v___jp_3557_:
{
lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; 
lean_inc(v_a_3556_);
v___x_3558_ = lean_array_push(v_fst_3531_, v_a_3556_);
v___x_3559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3559_, 0, v___x_3558_);
lean_ctor_set(v___x_3559_, 1, v_snd_3532_);
v___x_3560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3560_, 0, v_fst_3527_);
lean_ctor_set(v___x_3560_, 1, v___x_3559_);
v_a_3520_ = v___x_3560_;
goto v___jp_3519_;
}
}
}
}
v___jp_3519_:
{
size_t v___x_3521_; size_t v___x_3522_; 
v___x_3521_ = ((size_t)1ULL);
v___x_3522_ = lean_usize_add(v_i_3508_, v___x_3521_);
v_i_3508_ = v___x_3522_;
v_b_3509_ = v_a_3520_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4___boxed(lean_object* v_as_3847_, lean_object* v_sz_3848_, lean_object* v_i_3849_, lean_object* v_b_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_){
_start:
{
size_t v_sz_boxed_3860_; size_t v_i_boxed_3861_; lean_object* v_res_3862_; 
v_sz_boxed_3860_ = lean_unbox_usize(v_sz_3848_);
lean_dec(v_sz_3848_);
v_i_boxed_3861_ = lean_unbox_usize(v_i_3849_);
lean_dec(v_i_3849_);
v_res_3862_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4(v_as_3847_, v_sz_boxed_3860_, v_i_boxed_3861_, v_b_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_, v___y_3857_, v___y_3858_);
lean_dec(v___y_3858_);
lean_dec_ref(v___y_3857_);
lean_dec(v___y_3856_);
lean_dec_ref(v___y_3855_);
lean_dec(v___y_3854_);
lean_dec_ref(v___y_3853_);
lean_dec(v___y_3852_);
lean_dec_ref(v___y_3851_);
lean_dec_ref(v_as_3847_);
return v_res_3862_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_mkSpecContext___closed__14(void){
_start:
{
lean_object* v___x_3901_; lean_object* v___x_3902_; 
v___x_3901_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__13));
v___x_3902_ = l_String_toRawSubstring_x27(v___x_3901_);
return v___x_3902_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_mkSpecContext___closed__20(void){
_start:
{
lean_object* v___x_3913_; lean_object* v___x_3914_; 
v___x_3913_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__19));
v___x_3914_ = l_String_toRawSubstring_x27(v___x_3913_);
return v___x_3914_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_mkSpecContext___closed__22(void){
_start:
{
lean_object* v___x_3917_; 
v___x_3917_ = l_Array_mkArray0___redArg();
return v___x_3917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext(lean_object* v_optConfig_3922_, lean_object* v_lemmas_3923_, uint8_t v_ignoreStarArg_3924_, lean_object* v_a_3925_, lean_object* v_a_3926_, lean_object* v_a_3927_, lean_object* v_a_3928_, lean_object* v_a_3929_, lean_object* v_a_3930_, lean_object* v_a_3931_, lean_object* v_a_3932_){
_start:
{
uint8_t v_starArg_3934_; uint8_t v_starArg_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; 
v_starArg_3934_ = 1;
v_starArg_3935_ = 0;
v___x_3936_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__0));
v___x_3937_ = l_Lean_Elab_Tactic_Do_elabConfig___redArg(v_optConfig_3922_, v___x_3936_, v_starArg_3934_, v_a_3925_, v_a_3931_, v_a_3932_);
if (lean_obj_tag(v___x_3937_) == 0)
{
lean_object* v_a_3938_; lean_object* v___x_3939_; 
v_a_3938_ = lean_ctor_get(v___x_3937_, 0);
lean_inc(v_a_3938_);
lean_dec_ref_known(v___x_3937_, 1);
v___x_3939_ = l_Lean_Elab_Tactic_Do_SpecAttr_getSpecTheorems___redArg(v_a_3932_);
if (lean_obj_tag(v___x_3939_) == 0)
{
lean_object* v_a_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; size_t v_sz_3946_; size_t v___x_3947_; lean_object* v___x_3948_; 
v_a_3940_ = lean_ctor_get(v___x_3939_, 0);
lean_inc(v_a_3940_);
lean_dec_ref_known(v___x_3939_, 1);
v___x_3941_ = lean_unsigned_to_nat(1u);
v___x_3942_ = l_Lean_Syntax_getArg(v_lemmas_3923_, v___x_3941_);
v___x_3943_ = l_Lean_Syntax_getSepArgs(v___x_3942_);
lean_dec(v___x_3942_);
v___x_3944_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__2));
v___x_3945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3945_, 0, v_a_3940_);
lean_ctor_set(v___x_3945_, 1, v___x_3944_);
v_sz_3946_ = lean_array_size(v___x_3943_);
v___x_3947_ = ((size_t)0ULL);
v___x_3948_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__4(v___x_3943_, v_sz_3946_, v___x_3947_, v___x_3945_, v_a_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_, v_a_3930_, v_a_3931_, v_a_3932_);
lean_dec_ref(v___x_3943_);
if (lean_obj_tag(v___x_3948_) == 0)
{
lean_object* v_a_3949_; lean_object* v_snd_3950_; lean_object* v_toCold_3951_; lean_object* v_fst_3952_; lean_object* v___x_3954_; uint8_t v_isShared_3955_; uint8_t v_isSharedCheck_4059_; 
v_a_3949_ = lean_ctor_get(v___x_3948_, 0);
lean_inc(v_a_3949_);
lean_dec_ref_known(v___x_3948_, 1);
v_snd_3950_ = lean_ctor_get(v_a_3949_, 1);
lean_inc(v_snd_3950_);
v_toCold_3951_ = lean_ctor_get(v_a_3931_, 0);
v_fst_3952_ = lean_ctor_get(v_a_3949_, 0);
v_isSharedCheck_4059_ = !lean_is_exclusive(v_a_3949_);
if (v_isSharedCheck_4059_ == 0)
{
lean_object* v_unused_4060_; 
v_unused_4060_ = lean_ctor_get(v_a_3949_, 1);
lean_dec(v_unused_4060_);
v___x_3954_ = v_a_3949_;
v_isShared_3955_ = v_isSharedCheck_4059_;
goto v_resetjp_3953_;
}
else
{
lean_inc(v_fst_3952_);
lean_dec(v_a_3949_);
v___x_3954_ = lean_box(0);
v_isShared_3955_ = v_isSharedCheck_4059_;
goto v_resetjp_3953_;
}
v_resetjp_3953_:
{
lean_object* v_fst_3956_; lean_object* v_snd_3957_; lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_4058_; 
v_fst_3956_ = lean_ctor_get(v_snd_3950_, 0);
v_snd_3957_ = lean_ctor_get(v_snd_3950_, 1);
v_isSharedCheck_4058_ = !lean_is_exclusive(v_snd_3950_);
if (v_isSharedCheck_4058_ == 0)
{
v___x_3959_ = v_snd_3950_;
v_isShared_3960_ = v_isSharedCheck_4058_;
goto v_resetjp_3958_;
}
else
{
lean_inc(v_snd_3957_);
lean_inc(v_fst_3956_);
lean_dec(v_snd_3950_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_4058_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
lean_object* v_ref_3961_; lean_object* v_quotContext_3962_; lean_object* v_currMacroScope_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3968_; 
v_ref_3961_ = lean_ctor_get(v_a_3931_, 2);
v_quotContext_3962_ = lean_ctor_get(v_toCold_3951_, 8);
v_currMacroScope_3963_ = lean_ctor_get(v_toCold_3951_, 9);
v___x_3964_ = l_Lean_SourceInfo_fromRef(v_ref_3961_, v_starArg_3935_);
v___x_3965_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_elabConfig_evalConfigItem___lam__0___closed__3));
v___x_3966_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__3));
lean_inc(v___x_3964_);
if (v_isShared_3960_ == 0)
{
lean_ctor_set_tag(v___x_3959_, 2);
lean_ctor_set(v___x_3959_, 1, v___x_3965_);
lean_ctor_set(v___x_3959_, 0, v___x_3964_);
v___x_3968_ = v___x_3959_;
goto v_reusejp_3967_;
}
else
{
lean_object* v_reuseFailAlloc_4057_; 
v_reuseFailAlloc_4057_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4057_, 0, v___x_3964_);
lean_ctor_set(v_reuseFailAlloc_4057_, 1, v___x_3965_);
v___x_3968_ = v_reuseFailAlloc_4057_;
goto v_reusejp_3967_;
}
v_reusejp_3967_:
{
lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3975_; 
v___x_3969_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__5));
v___x_3970_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__7));
v___x_3971_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__9));
v___x_3972_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__11));
v___x_3973_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__12));
lean_inc(v___x_3964_);
if (v_isShared_3955_ == 0)
{
lean_ctor_set_tag(v___x_3954_, 2);
lean_ctor_set(v___x_3954_, 1, v___x_3973_);
lean_ctor_set(v___x_3954_, 0, v___x_3964_);
v___x_3975_ = v___x_3954_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_4056_; 
v_reuseFailAlloc_4056_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4056_, 0, v___x_3964_);
lean_ctor_set(v_reuseFailAlloc_4056_, 1, v___x_3973_);
v___x_3975_ = v_reuseFailAlloc_4056_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; uint8_t v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; 
v___x_3976_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__14, &l_Lean_Elab_Tactic_Do_mkSpecContext___closed__14_once, _init_l_Lean_Elab_Tactic_Do_mkSpecContext___closed__14);
v___x_3977_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__15));
lean_inc_n(v_currMacroScope_3963_, 2);
lean_inc_n(v_quotContext_3962_, 2);
v___x_3978_ = l_Lean_addMacroScope(v_quotContext_3962_, v___x_3977_, v_currMacroScope_3963_);
v___x_3979_ = lean_box(0);
lean_inc_n(v___x_3964_, 14);
v___x_3980_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3980_, 0, v___x_3964_);
lean_ctor_set(v___x_3980_, 1, v___x_3976_);
lean_ctor_set(v___x_3980_, 2, v___x_3978_);
lean_ctor_set(v___x_3980_, 3, v___x_3979_);
v___x_3981_ = l_Lean_Syntax_node2(v___x_3964_, v___x_3972_, v___x_3975_, v___x_3980_);
v___x_3982_ = l_Lean_Syntax_node1(v___x_3964_, v___x_3971_, v___x_3981_);
v___x_3983_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__17));
v___x_3984_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__18));
v___x_3985_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3985_, 0, v___x_3964_);
lean_ctor_set(v___x_3985_, 1, v___x_3984_);
v___x_3986_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__20, &l_Lean_Elab_Tactic_Do_mkSpecContext___closed__20_once, _init_l_Lean_Elab_Tactic_Do_mkSpecContext___closed__20);
v___x_3987_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__21));
v___x_3988_ = l_Lean_addMacroScope(v_quotContext_3962_, v___x_3987_, v_currMacroScope_3963_);
v___x_3989_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3989_, 0, v___x_3964_);
lean_ctor_set(v___x_3989_, 1, v___x_3986_);
lean_ctor_set(v___x_3989_, 2, v___x_3988_);
lean_ctor_set(v___x_3989_, 3, v___x_3979_);
v___x_3990_ = l_Lean_Syntax_node2(v___x_3964_, v___x_3983_, v___x_3985_, v___x_3989_);
v___x_3991_ = l_Lean_Syntax_node1(v___x_3964_, v___x_3971_, v___x_3990_);
v___x_3992_ = l_Lean_Syntax_node2(v___x_3964_, v___x_3970_, v___x_3982_, v___x_3991_);
v___x_3993_ = l_Lean_Syntax_node1(v___x_3964_, v___x_3969_, v___x_3992_);
v___x_3994_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_mkSpecContext___closed__22, &l_Lean_Elab_Tactic_Do_mkSpecContext___closed__22_once, _init_l_Lean_Elab_Tactic_Do_mkSpecContext___closed__22);
v___x_3995_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3995_, 0, v___x_3964_);
lean_ctor_set(v___x_3995_, 1, v___x_3970_);
lean_ctor_set(v___x_3995_, 2, v___x_3994_);
v___x_3996_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__23));
v___x_3997_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3997_, 0, v___x_3964_);
lean_ctor_set(v___x_3997_, 1, v___x_3996_);
v___x_3998_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__24));
v___x_3999_ = l_Lean_Syntax_SepArray_ofElems(v___x_3998_, v_fst_3956_);
lean_dec(v_fst_3956_);
v___x_4000_ = l_Array_append___redArg(v___x_3994_, v___x_3999_);
lean_dec_ref(v___x_3999_);
v___x_4001_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4001_, 0, v___x_3964_);
lean_ctor_set(v___x_4001_, 1, v___x_3970_);
lean_ctor_set(v___x_4001_, 2, v___x_4000_);
v___x_4002_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__25));
v___x_4003_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4003_, 0, v___x_3964_);
lean_ctor_set(v___x_4003_, 1, v___x_4002_);
v___x_4004_ = l_Lean_Syntax_node3(v___x_3964_, v___x_3970_, v___x_3997_, v___x_4001_, v___x_4003_);
lean_inc_ref_n(v___x_3995_, 2);
v___x_4005_ = l_Lean_Syntax_node6(v___x_3964_, v___x_3966_, v___x_3968_, v___x_3993_, v___x_3995_, v___x_3995_, v___x_4004_, v___x_3995_);
v___x_4006_ = 0;
v___x_4007_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_mkSpecContext___closed__26));
v___x_4008_ = l_Lean_Elab_Tactic_mkSimpContext(v___x_4005_, v_starArg_3935_, v___x_4006_, v_ignoreStarArg_3924_, v___x_4007_, v_a_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_, v_a_3930_, v_a_3931_, v_a_3932_);
lean_dec(v___x_4005_);
if (lean_obj_tag(v___x_4008_) == 0)
{
lean_object* v_a_4009_; lean_object* v___x_4011_; uint8_t v_isShared_4012_; uint8_t v_isSharedCheck_4047_; 
v_a_4009_ = lean_ctor_get(v___x_4008_, 0);
v_isSharedCheck_4047_ = !lean_is_exclusive(v___x_4008_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4011_ = v___x_4008_;
v_isShared_4012_ = v_isSharedCheck_4047_;
goto v_resetjp_4010_;
}
else
{
lean_inc(v_a_4009_);
lean_dec(v___x_4008_);
v___x_4011_ = lean_box(0);
v_isShared_4012_ = v_isSharedCheck_4047_;
goto v_resetjp_4010_;
}
v_resetjp_4010_:
{
lean_object* v_specThms_4014_; lean_object* v___y_4015_; uint8_t v___x_4025_; 
v___x_4025_ = lean_unbox(v_snd_3957_);
lean_dec(v_snd_3957_);
if (v___x_4025_ == 0)
{
v_specThms_4014_ = v_fst_3952_;
v___y_4015_ = v_a_3929_;
goto v___jp_4013_;
}
else
{
if (v_ignoreStarArg_3924_ == 0)
{
lean_object* v___x_4026_; 
v___x_4026_ = l_Lean_Meta_getPropHyps(v_a_3929_, v_a_3930_, v_a_3931_, v_a_3932_);
if (lean_obj_tag(v___x_4026_) == 0)
{
lean_object* v_a_4027_; size_t v_sz_4028_; lean_object* v___x_4029_; 
v_a_4027_ = lean_ctor_get(v___x_4026_, 0);
lean_inc(v_a_4027_);
lean_dec_ref_known(v___x_4026_, 1);
v_sz_4028_ = lean_array_size(v_a_4027_);
v___x_4029_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__5___redArg(v_a_4027_, v_sz_4028_, v___x_3947_, v_fst_3952_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_, v_a_3930_, v_a_3931_, v_a_3932_);
lean_dec(v_a_4027_);
if (lean_obj_tag(v___x_4029_) == 0)
{
lean_object* v_a_4030_; 
v_a_4030_ = lean_ctor_get(v___x_4029_, 0);
lean_inc(v_a_4030_);
lean_dec_ref_known(v___x_4029_, 1);
v_specThms_4014_ = v_a_4030_;
v___y_4015_ = v_a_3929_;
goto v___jp_4013_;
}
else
{
lean_object* v_a_4031_; lean_object* v___x_4033_; uint8_t v_isShared_4034_; uint8_t v_isSharedCheck_4038_; 
lean_del_object(v___x_4011_);
lean_dec(v_a_4009_);
lean_dec(v_a_3938_);
v_a_4031_ = lean_ctor_get(v___x_4029_, 0);
v_isSharedCheck_4038_ = !lean_is_exclusive(v___x_4029_);
if (v_isSharedCheck_4038_ == 0)
{
v___x_4033_ = v___x_4029_;
v_isShared_4034_ = v_isSharedCheck_4038_;
goto v_resetjp_4032_;
}
else
{
lean_inc(v_a_4031_);
lean_dec(v___x_4029_);
v___x_4033_ = lean_box(0);
v_isShared_4034_ = v_isSharedCheck_4038_;
goto v_resetjp_4032_;
}
v_resetjp_4032_:
{
lean_object* v___x_4036_; 
if (v_isShared_4034_ == 0)
{
v___x_4036_ = v___x_4033_;
goto v_reusejp_4035_;
}
else
{
lean_object* v_reuseFailAlloc_4037_; 
v_reuseFailAlloc_4037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4037_, 0, v_a_4031_);
v___x_4036_ = v_reuseFailAlloc_4037_;
goto v_reusejp_4035_;
}
v_reusejp_4035_:
{
return v___x_4036_;
}
}
}
}
else
{
lean_object* v_a_4039_; lean_object* v___x_4041_; uint8_t v_isShared_4042_; uint8_t v_isSharedCheck_4046_; 
lean_del_object(v___x_4011_);
lean_dec(v_a_4009_);
lean_dec(v_fst_3952_);
lean_dec(v_a_3938_);
v_a_4039_ = lean_ctor_get(v___x_4026_, 0);
v_isSharedCheck_4046_ = !lean_is_exclusive(v___x_4026_);
if (v_isSharedCheck_4046_ == 0)
{
v___x_4041_ = v___x_4026_;
v_isShared_4042_ = v_isSharedCheck_4046_;
goto v_resetjp_4040_;
}
else
{
lean_inc(v_a_4039_);
lean_dec(v___x_4026_);
v___x_4041_ = lean_box(0);
v_isShared_4042_ = v_isSharedCheck_4046_;
goto v_resetjp_4040_;
}
v_resetjp_4040_:
{
lean_object* v___x_4044_; 
if (v_isShared_4042_ == 0)
{
v___x_4044_ = v___x_4041_;
goto v_reusejp_4043_;
}
else
{
lean_object* v_reuseFailAlloc_4045_; 
v_reuseFailAlloc_4045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4045_, 0, v_a_4039_);
v___x_4044_ = v_reuseFailAlloc_4045_;
goto v_reusejp_4043_;
}
v_reusejp_4043_:
{
return v___x_4044_;
}
}
}
}
else
{
v_specThms_4014_ = v_fst_3952_;
v___y_4015_ = v_a_3929_;
goto v___jp_4013_;
}
}
v___jp_4013_:
{
lean_object* v_lctx_4016_; lean_object* v_ctx_4017_; lean_object* v_simprocs_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4023_; 
v_lctx_4016_ = lean_ctor_get(v___y_4015_, 2);
v_ctx_4017_ = lean_ctor_get(v_a_4009_, 0);
lean_inc_ref(v_ctx_4017_);
v_simprocs_4018_ = lean_ctor_get(v_a_4009_, 1);
lean_inc_ref(v_simprocs_4018_);
lean_dec(v_a_4009_);
v___x_4019_ = lean_box(1);
lean_inc_ref(v_lctx_4016_);
v___x_4020_ = lean_local_ctx_num_indices(v_lctx_4016_);
v___x_4021_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4021_, 0, v_a_3938_);
lean_ctor_set(v___x_4021_, 1, v_specThms_4014_);
lean_ctor_set(v___x_4021_, 2, v_ctx_4017_);
lean_ctor_set(v___x_4021_, 3, v_simprocs_4018_);
lean_ctor_set(v___x_4021_, 4, v___x_4019_);
lean_ctor_set(v___x_4021_, 5, v___x_4020_);
if (v_isShared_4012_ == 0)
{
lean_ctor_set(v___x_4011_, 0, v___x_4021_);
v___x_4023_ = v___x_4011_;
goto v_reusejp_4022_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v___x_4021_);
v___x_4023_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4022_;
}
v_reusejp_4022_:
{
return v___x_4023_;
}
}
}
}
else
{
lean_object* v_a_4048_; lean_object* v___x_4050_; uint8_t v_isShared_4051_; uint8_t v_isSharedCheck_4055_; 
lean_dec(v_snd_3957_);
lean_dec(v_fst_3952_);
lean_dec(v_a_3938_);
v_a_4048_ = lean_ctor_get(v___x_4008_, 0);
v_isSharedCheck_4055_ = !lean_is_exclusive(v___x_4008_);
if (v_isSharedCheck_4055_ == 0)
{
v___x_4050_ = v___x_4008_;
v_isShared_4051_ = v_isSharedCheck_4055_;
goto v_resetjp_4049_;
}
else
{
lean_inc(v_a_4048_);
lean_dec(v___x_4008_);
v___x_4050_ = lean_box(0);
v_isShared_4051_ = v_isSharedCheck_4055_;
goto v_resetjp_4049_;
}
v_resetjp_4049_:
{
lean_object* v___x_4053_; 
if (v_isShared_4051_ == 0)
{
v___x_4053_ = v___x_4050_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4054_; 
v_reuseFailAlloc_4054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4054_, 0, v_a_4048_);
v___x_4053_ = v_reuseFailAlloc_4054_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
return v___x_4053_;
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
lean_object* v_a_4061_; lean_object* v___x_4063_; uint8_t v_isShared_4064_; uint8_t v_isSharedCheck_4068_; 
lean_dec(v_a_3938_);
v_a_4061_ = lean_ctor_get(v___x_3948_, 0);
v_isSharedCheck_4068_ = !lean_is_exclusive(v___x_3948_);
if (v_isSharedCheck_4068_ == 0)
{
v___x_4063_ = v___x_3948_;
v_isShared_4064_ = v_isSharedCheck_4068_;
goto v_resetjp_4062_;
}
else
{
lean_inc(v_a_4061_);
lean_dec(v___x_3948_);
v___x_4063_ = lean_box(0);
v_isShared_4064_ = v_isSharedCheck_4068_;
goto v_resetjp_4062_;
}
v_resetjp_4062_:
{
lean_object* v___x_4066_; 
if (v_isShared_4064_ == 0)
{
v___x_4066_ = v___x_4063_;
goto v_reusejp_4065_;
}
else
{
lean_object* v_reuseFailAlloc_4067_; 
v_reuseFailAlloc_4067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4067_, 0, v_a_4061_);
v___x_4066_ = v_reuseFailAlloc_4067_;
goto v_reusejp_4065_;
}
v_reusejp_4065_:
{
return v___x_4066_;
}
}
}
}
else
{
lean_object* v_a_4069_; lean_object* v___x_4071_; uint8_t v_isShared_4072_; uint8_t v_isSharedCheck_4076_; 
lean_dec(v_a_3938_);
v_a_4069_ = lean_ctor_get(v___x_3939_, 0);
v_isSharedCheck_4076_ = !lean_is_exclusive(v___x_3939_);
if (v_isSharedCheck_4076_ == 0)
{
v___x_4071_ = v___x_3939_;
v_isShared_4072_ = v_isSharedCheck_4076_;
goto v_resetjp_4070_;
}
else
{
lean_inc(v_a_4069_);
lean_dec(v___x_3939_);
v___x_4071_ = lean_box(0);
v_isShared_4072_ = v_isSharedCheck_4076_;
goto v_resetjp_4070_;
}
v_resetjp_4070_:
{
lean_object* v___x_4074_; 
if (v_isShared_4072_ == 0)
{
v___x_4074_ = v___x_4071_;
goto v_reusejp_4073_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v_a_4069_);
v___x_4074_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4073_;
}
v_reusejp_4073_:
{
return v___x_4074_;
}
}
}
}
else
{
lean_object* v_a_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4084_; 
v_a_4077_ = lean_ctor_get(v___x_3937_, 0);
v_isSharedCheck_4084_ = !lean_is_exclusive(v___x_3937_);
if (v_isSharedCheck_4084_ == 0)
{
v___x_4079_ = v___x_3937_;
v_isShared_4080_ = v_isSharedCheck_4084_;
goto v_resetjp_4078_;
}
else
{
lean_inc(v_a_4077_);
lean_dec(v___x_3937_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4084_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
lean_object* v___x_4082_; 
if (v_isShared_4080_ == 0)
{
v___x_4082_ = v___x_4079_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4083_; 
v_reuseFailAlloc_4083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4083_, 0, v_a_4077_);
v___x_4082_ = v_reuseFailAlloc_4083_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
return v___x_4082_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_mkSpecContext___boxed(lean_object* v_optConfig_4085_, lean_object* v_lemmas_4086_, lean_object* v_ignoreStarArg_4087_, lean_object* v_a_4088_, lean_object* v_a_4089_, lean_object* v_a_4090_, lean_object* v_a_4091_, lean_object* v_a_4092_, lean_object* v_a_4093_, lean_object* v_a_4094_, lean_object* v_a_4095_, lean_object* v_a_4096_){
_start:
{
uint8_t v_ignoreStarArg_boxed_4097_; lean_object* v_res_4098_; 
v_ignoreStarArg_boxed_4097_ = lean_unbox(v_ignoreStarArg_4087_);
v_res_4098_ = l_Lean_Elab_Tactic_Do_mkSpecContext(v_optConfig_4085_, v_lemmas_4086_, v_ignoreStarArg_boxed_4097_, v_a_4088_, v_a_4089_, v_a_4090_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_, v_a_4095_);
lean_dec(v_a_4095_);
lean_dec_ref(v_a_4094_);
lean_dec(v_a_4093_);
lean_dec_ref(v_a_4092_);
lean_dec(v_a_4091_);
lean_dec_ref(v_a_4090_);
lean_dec(v_a_4089_);
lean_dec_ref(v_a_4088_);
lean_dec(v_lemmas_4086_);
return v_res_4098_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__1(lean_object* v_00_u03b1_4099_, lean_object* v_msg_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_){
_start:
{
lean_object* v___x_4110_; 
v___x_4110_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__1___redArg(v_msg_4100_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_);
return v___x_4110_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__1___boxed(lean_object* v_00_u03b1_4111_, lean_object* v_msg_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_){
_start:
{
lean_object* v_res_4122_; 
v_res_4122_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__1(v_00_u03b1_4111_, v_msg_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
lean_dec(v___y_4120_);
lean_dec_ref(v___y_4119_);
lean_dec(v___y_4118_);
lean_dec_ref(v___y_4117_);
lean_dec(v___y_4116_);
lean_dec_ref(v___y_4115_);
lean_dec(v___y_4114_);
lean_dec_ref(v___y_4113_);
return v_res_4122_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3(lean_object* v_00_u03b1_4123_, lean_object* v_constName_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_){
_start:
{
lean_object* v___x_4134_; 
v___x_4134_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3___redArg(v_constName_4124_, v___y_4125_, v___y_4126_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_, v___y_4131_, v___y_4132_);
return v___x_4134_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3___boxed(lean_object* v_00_u03b1_4135_, lean_object* v_constName_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_){
_start:
{
lean_object* v_res_4146_; 
v_res_4146_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3(v_00_u03b1_4135_, v_constName_4136_, v___y_4137_, v___y_4138_, v___y_4139_, v___y_4140_, v___y_4141_, v___y_4142_, v___y_4143_, v___y_4144_);
lean_dec(v___y_4144_);
lean_dec_ref(v___y_4143_);
lean_dec(v___y_4142_);
lean_dec_ref(v___y_4141_);
lean_dec(v___y_4140_);
lean_dec_ref(v___y_4139_);
lean_dec(v___y_4138_);
lean_dec_ref(v___y_4137_);
return v_res_4146_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__5(lean_object* v_as_4147_, size_t v_sz_4148_, size_t v_i_4149_, lean_object* v_b_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_){
_start:
{
lean_object* v___x_4160_; 
v___x_4160_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__5___redArg(v_as_4147_, v_sz_4148_, v_i_4149_, v_b_4150_, v___y_4152_, v___y_4153_, v___y_4154_, v___y_4155_, v___y_4156_, v___y_4157_, v___y_4158_);
return v___x_4160_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__5___boxed(lean_object* v_as_4161_, lean_object* v_sz_4162_, lean_object* v_i_4163_, lean_object* v_b_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_){
_start:
{
size_t v_sz_boxed_4174_; size_t v_i_boxed_4175_; lean_object* v_res_4176_; 
v_sz_boxed_4174_ = lean_unbox_usize(v_sz_4162_);
lean_dec(v_sz_4162_);
v_i_boxed_4175_ = lean_unbox_usize(v_i_4163_);
lean_dec(v_i_4163_);
v_res_4176_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__5(v_as_4161_, v_sz_boxed_4174_, v_i_boxed_4175_, v_b_4164_, v___y_4165_, v___y_4166_, v___y_4167_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_);
lean_dec(v___y_4172_);
lean_dec_ref(v___y_4171_);
lean_dec(v___y_4170_);
lean_dec_ref(v___y_4169_);
lean_dec(v___y_4168_);
lean_dec_ref(v___y_4167_);
lean_dec(v___y_4166_);
lean_dec_ref(v___y_4165_);
lean_dec_ref(v_as_4161_);
return v_res_4176_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3(lean_object* v_00_u03b1_4177_, lean_object* v_ref_4178_, lean_object* v_constName_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_){
_start:
{
lean_object* v___x_4189_; 
v___x_4189_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___redArg(v_ref_4178_, v_constName_4179_, v___y_4180_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_, v___y_4187_);
return v___x_4189_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3___boxed(lean_object* v_00_u03b1_4190_, lean_object* v_ref_4191_, lean_object* v_constName_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_, lean_object* v___y_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_){
_start:
{
lean_object* v_res_4202_; 
v_res_4202_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3(v_00_u03b1_4190_, v_ref_4191_, v_constName_4192_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_, v___y_4197_, v___y_4198_, v___y_4199_, v___y_4200_);
lean_dec(v___y_4200_);
lean_dec_ref(v___y_4199_);
lean_dec(v___y_4198_);
lean_dec_ref(v___y_4197_);
lean_dec(v___y_4196_);
lean_dec_ref(v___y_4195_);
lean_dec(v___y_4194_);
lean_dec_ref(v___y_4193_);
lean_dec(v_ref_4191_);
return v_res_4202_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4(lean_object* v_00_u03b1_4203_, lean_object* v_ref_4204_, lean_object* v_msg_4205_, lean_object* v_declHint_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_){
_start:
{
lean_object* v___x_4216_; 
v___x_4216_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4___redArg(v_ref_4204_, v_msg_4205_, v_declHint_4206_, v___y_4207_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_);
return v___x_4216_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4___boxed(lean_object* v_00_u03b1_4217_, lean_object* v_ref_4218_, lean_object* v_msg_4219_, lean_object* v_declHint_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_){
_start:
{
lean_object* v_res_4230_; 
v_res_4230_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4(v_00_u03b1_4217_, v_ref_4218_, v_msg_4219_, v_declHint_4220_, v___y_4221_, v___y_4222_, v___y_4223_, v___y_4224_, v___y_4225_, v___y_4226_, v___y_4227_, v___y_4228_);
lean_dec(v___y_4228_);
lean_dec_ref(v___y_4227_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
lean_dec(v___y_4224_);
lean_dec_ref(v___y_4223_);
lean_dec(v___y_4222_);
lean_dec_ref(v___y_4221_);
lean_dec(v_ref_4218_);
return v_res_4230_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8(lean_object* v_msg_4231_, lean_object* v_declHint_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_){
_start:
{
lean_object* v___x_4242_; 
v___x_4242_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___redArg(v_msg_4231_, v_declHint_4232_, v___y_4240_);
return v___x_4242_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8___boxed(lean_object* v_msg_4243_, lean_object* v_declHint_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_){
_start:
{
lean_object* v_res_4254_; 
v_res_4254_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__7_spec__8(v_msg_4243_, v_declHint_4244_, v___y_4245_, v___y_4246_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_);
lean_dec(v___y_4252_);
lean_dec_ref(v___y_4251_);
lean_dec(v___y_4250_);
lean_dec_ref(v___y_4249_);
lean_dec(v___y_4248_);
lean_dec_ref(v___y_4247_);
lean_dec(v___y_4246_);
lean_dec_ref(v___y_4245_);
return v_res_4254_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__8(lean_object* v_00_u03b1_4255_, lean_object* v_ref_4256_, lean_object* v_msg_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_){
_start:
{
lean_object* v___x_4267_; 
v___x_4267_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__8___redArg(v_ref_4256_, v_msg_4257_, v___y_4258_, v___y_4259_, v___y_4260_, v___y_4261_, v___y_4262_, v___y_4263_, v___y_4264_, v___y_4265_);
return v___x_4267_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__8___boxed(lean_object* v_00_u03b1_4268_, lean_object* v_ref_4269_, lean_object* v_msg_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_){
_start:
{
lean_object* v_res_4280_; 
v_res_4280_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_mkSpecContext_spec__3_spec__3_spec__4_spec__8(v_00_u03b1_4268_, v_ref_4269_, v_msg_4270_, v___y_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_);
lean_dec(v___y_4278_);
lean_dec_ref(v___y_4277_);
lean_dec(v___y_4276_);
lean_dec_ref(v___y_4275_);
lean_dec(v___y_4274_);
lean_dec_ref(v___y_4273_);
lean_dec(v___y_4272_);
lean_dec_ref(v___y_4271_);
lean_dec(v_ref_4269_);
return v_res_4280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__0(lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_){
_start:
{
lean_object* v_toCold_4289_; lean_object* v_options_4290_; lean_object* v___x_4291_; 
v_toCold_4289_ = lean_ctor_get(v___y_4286_, 0);
v_options_4290_ = lean_ctor_get(v_toCold_4289_, 2);
lean_inc_ref(v_options_4290_);
v___x_4291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4291_, 0, v_options_4290_);
return v___x_4291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__0___boxed(lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_){
_start:
{
lean_object* v_res_4300_; 
v_res_4300_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__0(v___y_4292_, v___y_4293_, v___y_4294_, v___y_4295_, v___y_4296_, v___y_4297_, v___y_4298_);
lean_dec(v___y_4298_);
lean_dec_ref(v___y_4297_);
lean_dec(v___y_4296_);
lean_dec_ref(v___y_4295_);
lean_dec(v___y_4294_);
lean_dec_ref(v___y_4293_);
lean_dec(v___y_4292_);
return v_res_4300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__1(lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_){
_start:
{
lean_object* v_toCold_4309_; lean_object* v_inheritedTraceOptions_4310_; lean_object* v___x_4311_; 
v_toCold_4309_ = lean_ctor_get(v___y_4306_, 0);
v_inheritedTraceOptions_4310_ = lean_ctor_get(v_toCold_4309_, 11);
lean_inc_ref(v_inheritedTraceOptions_4310_);
v___x_4311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4311_, 0, v_inheritedTraceOptions_4310_);
return v___x_4311_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__1___boxed(lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_){
_start:
{
lean_object* v_res_4320_; 
v_res_4320_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__1(v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_, v___y_4316_, v___y_4317_, v___y_4318_);
lean_dec(v___y_4318_);
lean_dec_ref(v___y_4317_);
lean_dec(v___y_4316_);
lean_dec_ref(v___y_4315_);
lean_dec(v___y_4314_);
lean_dec_ref(v___y_4313_);
lean_dec(v___y_4312_);
return v_res_4320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__2(lean_object* v___x_4321_, lean_object* v___x_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_){
_start:
{
lean_object* v___x_4331_; 
v___x_4331_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromLocal(v___x_4321_, v___x_4322_, v___y_4326_, v___y_4327_, v___y_4328_, v___y_4329_);
return v___x_4331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__2___boxed(lean_object* v___x_4332_, lean_object* v___x_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_){
_start:
{
lean_object* v_res_4342_; 
v_res_4342_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__2(v___x_4332_, v___x_4333_, v___y_4334_, v___y_4335_, v___y_4336_, v___y_4337_, v___y_4338_, v___y_4339_, v___y_4340_);
lean_dec(v___y_4340_);
lean_dec_ref(v___y_4339_);
lean_dec(v___y_4338_);
lean_dec_ref(v___y_4337_);
lean_dec(v___y_4336_);
lean_dec_ref(v___y_4335_);
lean_dec(v___y_4334_);
return v_res_4342_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__4(void){
_start:
{
lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; 
v___x_4345_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_4346_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__3));
v___x_4347_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__2));
v___x_4348_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_4347_, v___x_4346_, v___x_4345_);
return v___x_4348_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__5(void){
_start:
{
lean_object* v___x_4351_; lean_object* v___f_4352_; lean_object* v___f_4353_; lean_object* v___x_4354_; 
v___x_4351_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__4, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__4_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__4);
v___f_4352_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__1));
v___f_4353_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__0));
v___x_4354_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_4353_, v___f_4352_, v___x_4351_);
return v___x_4354_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__6(void){
_start:
{
lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; 
v___x_4355_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__5, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__5);
v___x_4356_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__3));
v___x_4357_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__2));
v___x_4358_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_4357_, v___x_4356_, v___x_4355_);
return v___x_4358_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__7(void){
_start:
{
lean_object* v___x_4359_; lean_object* v___f_4360_; lean_object* v___f_4361_; lean_object* v___x_4362_; 
v___x_4359_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__6);
v___f_4360_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__1));
v___f_4361_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__0));
v___x_4362_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_4361_, v___f_4360_, v___x_4359_);
return v___x_4362_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__8(void){
_start:
{
lean_object* v___x_4363_; 
v___x_4363_ = l_instMonadEIO___redArg();
return v___x_4363_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__9(void){
_start:
{
lean_object* v___x_4364_; lean_object* v___x_4365_; 
v___x_4364_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__8, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__8_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__8);
v___x_4365_ = l_StateRefT_x27_instMonad___redArg(v___x_4364_);
return v___x_4365_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__14(void){
_start:
{
lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
v___x_4370_ = l_Lean_Core_instMonadTraceCoreM;
v___x_4371_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__3));
v___x_4372_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_4371_, v___x_4370_);
return v___x_4372_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__15(void){
_start:
{
lean_object* v___x_4373_; lean_object* v___f_4374_; lean_object* v___x_4375_; 
v___x_4373_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__14, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__14_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__14);
v___f_4374_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__1));
v___x_4375_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_4374_, v___x_4373_);
return v___x_4375_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__16(void){
_start:
{
lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; 
v___x_4376_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__15, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__15_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__15);
v___x_4377_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__3));
v___x_4378_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_4377_, v___x_4376_);
return v___x_4378_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__17(void){
_start:
{
lean_object* v___x_4379_; lean_object* v___f_4380_; lean_object* v___x_4381_; 
v___x_4379_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__16, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__16_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__16);
v___f_4380_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__1));
v___x_4381_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_4380_, v___x_4379_);
return v___x_4381_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__18(void){
_start:
{
lean_object* v___x_4382_; lean_object* v___f_4383_; lean_object* v___x_4384_; 
v___x_4382_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__17, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__17_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__17);
v___f_4383_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__1));
v___x_4384_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_4383_, v___x_4382_);
return v___x_4384_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__19(void){
_start:
{
lean_object* v___x_4385_; lean_object* v___f_4386_; lean_object* v___x_4387_; 
v___x_4385_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__18, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__18_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__18);
v___f_4386_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_instMonadLiftSimpMVCGenM___closed__0));
v___x_4387_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_4386_, v___x_4385_);
return v___x_4387_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__22(void){
_start:
{
lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___f_4392_; 
v___x_4390_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__3));
v___x_4391_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_4392_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4392_, 0, v___x_4391_);
lean_closure_set(v___f_4392_, 1, v___x_4390_);
return v___f_4392_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__23(void){
_start:
{
lean_object* v___f_4393_; lean_object* v___f_4394_; lean_object* v___f_4395_; 
v___f_4393_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__1));
v___f_4394_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__22, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__22_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__22);
v___f_4395_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4395_, 0, v___f_4394_);
lean_closure_set(v___f_4395_, 1, v___f_4393_);
return v___f_4395_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__24(void){
_start:
{
lean_object* v___f_4396_; lean_object* v___f_4397_; lean_object* v___f_4398_; 
v___f_4396_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__1));
v___f_4397_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__23, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__23_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__23);
v___f_4398_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4398_, 0, v___f_4397_);
lean_closure_set(v___f_4398_, 1, v___f_4396_);
return v___f_4398_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__25(void){
_start:
{
lean_object* v___f_4399_; lean_object* v___f_4400_; lean_object* v___f_4401_; 
v___f_4399_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_instMonadLiftSimpMVCGenM___closed__0));
v___f_4400_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__24, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__24_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__24);
v___f_4401_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4401_, 0, v___f_4400_);
lean_closure_set(v___f_4401_, 1, v___f_4399_);
return v___f_4401_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__28(void){
_start:
{
lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; 
v___x_4405_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_));
v___x_4406_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__27));
v___x_4407_ = l_Lean_Name_append(v___x_4406_, v___x_4405_);
return v___x_4407_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__30(void){
_start:
{
lean_object* v___x_4409_; lean_object* v___x_4410_; 
v___x_4409_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__29));
v___x_4410_ = l_Lean_stringToMessageData(v___x_4409_);
return v___x_4410_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__32(void){
_start:
{
lean_object* v___x_4412_; lean_object* v___x_4413_; 
v___x_4412_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__31));
v___x_4413_ = l_Lean_stringToMessageData(v___x_4412_);
return v___x_4413_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__34(void){
_start:
{
lean_object* v___x_4415_; lean_object* v___x_4416_; 
v___x_4415_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__33));
v___x_4416_ = l_Lean_stringToMessageData(v___x_4415_);
return v___x_4416_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__36(void){
_start:
{
lean_object* v___x_4418_; lean_object* v___x_4419_; 
v___x_4418_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__35));
v___x_4419_ = l_Lean_stringToMessageData(v___x_4418_);
return v___x_4419_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__38(void){
_start:
{
lean_object* v___x_4421_; lean_object* v___x_4422_; 
v___x_4421_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__37));
v___x_4422_ = l_Lean_stringToMessageData(v___x_4421_);
return v___x_4422_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg(lean_object* v_xs_4423_, lean_object* v_k_4424_, lean_object* v_runInBase_4425_, lean_object* v_i_4426_, lean_object* v_a_4427_, lean_object* v_a_4428_, lean_object* v_a_4429_, lean_object* v_a_4430_, lean_object* v_a_4431_, lean_object* v_a_4432_){
_start:
{
lean_object* v___y_4435_; lean_object* v_a_4436_; lean_object* v_a_4443_; lean_object* v___y_4446_; lean_object* v___x_4448_; lean_object* v_toMonadRef_4449_; lean_object* v___x_4450_; lean_object* v_toApplicative_4451_; lean_object* v_toFunctor_4452_; lean_object* v_toSeq_4453_; lean_object* v_toSeqLeft_4454_; lean_object* v_toSeqRight_4455_; lean_object* v___f_4456_; lean_object* v___f_4457_; lean_object* v___f_4458_; lean_object* v___f_4459_; lean_object* v___x_4460_; lean_object* v___f_4461_; lean_object* v___f_4462_; lean_object* v___f_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v_toApplicative_4467_; lean_object* v___x_4469_; uint8_t v_isShared_4470_; uint8_t v_isSharedCheck_4565_; 
v___x_4448_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__7, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__7_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__7);
v_toMonadRef_4449_ = lean_ctor_get(v___x_4448_, 0);
v___x_4450_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__9, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__9_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__9);
v_toApplicative_4451_ = lean_ctor_get(v___x_4450_, 0);
v_toFunctor_4452_ = lean_ctor_get(v_toApplicative_4451_, 0);
v_toSeq_4453_ = lean_ctor_get(v_toApplicative_4451_, 2);
v_toSeqLeft_4454_ = lean_ctor_get(v_toApplicative_4451_, 3);
v_toSeqRight_4455_ = lean_ctor_get(v_toApplicative_4451_, 4);
v___f_4456_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__10));
v___f_4457_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__11));
lean_inc_ref_n(v_toFunctor_4452_, 2);
v___f_4458_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4458_, 0, v_toFunctor_4452_);
v___f_4459_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4459_, 0, v_toFunctor_4452_);
v___x_4460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4460_, 0, v___f_4458_);
lean_ctor_set(v___x_4460_, 1, v___f_4459_);
lean_inc(v_toSeqRight_4455_);
v___f_4461_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4461_, 0, v_toSeqRight_4455_);
lean_inc(v_toSeqLeft_4454_);
v___f_4462_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4462_, 0, v_toSeqLeft_4454_);
lean_inc(v_toSeq_4453_);
v___f_4463_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4463_, 0, v_toSeq_4453_);
v___x_4464_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4464_, 0, v___x_4460_);
lean_ctor_set(v___x_4464_, 1, v___f_4456_);
lean_ctor_set(v___x_4464_, 2, v___f_4463_);
lean_ctor_set(v___x_4464_, 3, v___f_4462_);
lean_ctor_set(v___x_4464_, 4, v___f_4461_);
v___x_4465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4465_, 0, v___x_4464_);
lean_ctor_set(v___x_4465_, 1, v___f_4457_);
v___x_4466_ = l_StateRefT_x27_instMonad___redArg(v___x_4465_);
v_toApplicative_4467_ = lean_ctor_get(v___x_4466_, 0);
v_isSharedCheck_4565_ = !lean_is_exclusive(v___x_4466_);
if (v_isSharedCheck_4565_ == 0)
{
lean_object* v_unused_4566_; 
v_unused_4566_ = lean_ctor_get(v___x_4466_, 1);
lean_dec(v_unused_4566_);
v___x_4469_ = v___x_4466_;
v_isShared_4470_ = v_isSharedCheck_4565_;
goto v_resetjp_4468_;
}
else
{
lean_inc(v_toApplicative_4467_);
lean_dec(v___x_4466_);
v___x_4469_ = lean_box(0);
v_isShared_4470_ = v_isSharedCheck_4565_;
goto v_resetjp_4468_;
}
v___jp_4434_:
{
uint8_t v___x_4437_; 
v___x_4437_ = l_Lean_Exception_isInterrupt(v_a_4436_);
if (v___x_4437_ == 0)
{
uint8_t v___x_4438_; 
lean_inc_ref(v_a_4436_);
v___x_4438_ = l_Lean_Exception_isRuntime(v_a_4436_);
if (v___x_4438_ == 0)
{
if (lean_obj_tag(v_a_4436_) == 0)
{
lean_object* v___x_4439_; lean_object* v___x_4440_; 
lean_dec_ref_known(v_a_4436_, 2);
lean_dec_ref(v___y_4435_);
v___x_4439_ = lean_unsigned_to_nat(1u);
v___x_4440_ = lean_nat_add(v_i_4426_, v___x_4439_);
lean_dec(v_i_4426_);
v_i_4426_ = v___x_4440_;
goto _start;
}
else
{
lean_dec_ref_known(v_a_4436_, 2);
lean_dec(v_i_4426_);
lean_dec_ref(v_runInBase_4425_);
lean_dec(v_k_4424_);
return v___y_4435_;
}
}
else
{
lean_dec_ref(v_a_4436_);
lean_dec(v_i_4426_);
lean_dec_ref(v_runInBase_4425_);
lean_dec(v_k_4424_);
return v___y_4435_;
}
}
else
{
lean_dec_ref(v_a_4436_);
lean_dec(v_i_4426_);
lean_dec_ref(v_runInBase_4425_);
lean_dec(v_k_4424_);
return v___y_4435_;
}
}
v___jp_4442_:
{
lean_object* v___x_4444_; 
lean_inc_ref(v_a_4443_);
v___x_4444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4444_, 0, v_a_4443_);
v___y_4435_ = v___x_4444_;
v_a_4436_ = v_a_4443_;
goto v___jp_4434_;
}
v___jp_4445_:
{
if (lean_obj_tag(v___y_4446_) == 0)
{
lean_dec(v_i_4426_);
lean_dec_ref(v_runInBase_4425_);
lean_dec(v_k_4424_);
return v___y_4446_;
}
else
{
lean_object* v_a_4447_; 
v_a_4447_ = lean_ctor_get(v___y_4446_, 0);
lean_inc(v_a_4447_);
v___y_4435_ = v___y_4446_;
v_a_4436_ = v_a_4447_;
goto v___jp_4434_;
}
}
v_resetjp_4468_:
{
lean_object* v_toFunctor_4471_; lean_object* v_toSeq_4472_; lean_object* v_toSeqLeft_4473_; lean_object* v_toSeqRight_4474_; lean_object* v___x_4476_; uint8_t v_isShared_4477_; uint8_t v_isSharedCheck_4563_; 
v_toFunctor_4471_ = lean_ctor_get(v_toApplicative_4467_, 0);
v_toSeq_4472_ = lean_ctor_get(v_toApplicative_4467_, 2);
v_toSeqLeft_4473_ = lean_ctor_get(v_toApplicative_4467_, 3);
v_toSeqRight_4474_ = lean_ctor_get(v_toApplicative_4467_, 4);
v_isSharedCheck_4563_ = !lean_is_exclusive(v_toApplicative_4467_);
if (v_isSharedCheck_4563_ == 0)
{
lean_object* v_unused_4564_; 
v_unused_4564_ = lean_ctor_get(v_toApplicative_4467_, 1);
lean_dec(v_unused_4564_);
v___x_4476_ = v_toApplicative_4467_;
v_isShared_4477_ = v_isSharedCheck_4563_;
goto v_resetjp_4475_;
}
else
{
lean_inc(v_toSeqRight_4474_);
lean_inc(v_toSeqLeft_4473_);
lean_inc(v_toSeq_4472_);
lean_inc(v_toFunctor_4471_);
lean_dec(v_toApplicative_4467_);
v___x_4476_ = lean_box(0);
v_isShared_4477_ = v_isSharedCheck_4563_;
goto v_resetjp_4475_;
}
v_resetjp_4475_:
{
lean_object* v___f_4478_; lean_object* v___f_4479_; lean_object* v___f_4480_; lean_object* v___f_4481_; lean_object* v___x_4482_; lean_object* v___f_4483_; lean_object* v___f_4484_; lean_object* v___f_4485_; lean_object* v___x_4487_; 
v___f_4478_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__12));
v___f_4479_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__13));
lean_inc_ref(v_toFunctor_4471_);
v___f_4480_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4480_, 0, v_toFunctor_4471_);
v___f_4481_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4481_, 0, v_toFunctor_4471_);
v___x_4482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4482_, 0, v___f_4480_);
lean_ctor_set(v___x_4482_, 1, v___f_4481_);
v___f_4483_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4483_, 0, v_toSeqRight_4474_);
v___f_4484_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4484_, 0, v_toSeqLeft_4473_);
v___f_4485_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4485_, 0, v_toSeq_4472_);
if (v_isShared_4477_ == 0)
{
lean_ctor_set(v___x_4476_, 4, v___f_4483_);
lean_ctor_set(v___x_4476_, 3, v___f_4484_);
lean_ctor_set(v___x_4476_, 2, v___f_4485_);
lean_ctor_set(v___x_4476_, 1, v___f_4478_);
lean_ctor_set(v___x_4476_, 0, v___x_4482_);
v___x_4487_ = v___x_4476_;
goto v_reusejp_4486_;
}
else
{
lean_object* v_reuseFailAlloc_4562_; 
v_reuseFailAlloc_4562_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4562_, 0, v___x_4482_);
lean_ctor_set(v_reuseFailAlloc_4562_, 1, v___f_4478_);
lean_ctor_set(v_reuseFailAlloc_4562_, 2, v___f_4485_);
lean_ctor_set(v_reuseFailAlloc_4562_, 3, v___f_4484_);
lean_ctor_set(v_reuseFailAlloc_4562_, 4, v___f_4483_);
v___x_4487_ = v_reuseFailAlloc_4562_;
goto v_reusejp_4486_;
}
v_reusejp_4486_:
{
lean_object* v___x_4489_; 
if (v_isShared_4470_ == 0)
{
lean_ctor_set(v___x_4469_, 1, v___f_4479_);
lean_ctor_set(v___x_4469_, 0, v___x_4487_);
v___x_4489_ = v___x_4469_;
goto v_reusejp_4488_;
}
else
{
lean_object* v_reuseFailAlloc_4561_; 
v_reuseFailAlloc_4561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4561_, 0, v___x_4487_);
lean_ctor_set(v_reuseFailAlloc_4561_, 1, v___f_4479_);
v___x_4489_ = v_reuseFailAlloc_4561_;
goto v_reusejp_4488_;
}
v_reusejp_4488_:
{
lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; uint8_t v___x_4494_; 
v___x_4490_ = l_StateRefT_x27_instMonad___redArg(v___x_4489_);
v___x_4491_ = l_ReaderT_instMonad___redArg(v___x_4490_);
v___x_4492_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__19, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__19_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__19);
v___x_4493_ = lean_array_get_size(v_xs_4423_);
v___x_4494_ = lean_nat_dec_lt(v_i_4426_, v___x_4493_);
if (v___x_4494_ == 0)
{
lean_object* v___x_4495_; 
lean_dec_ref(v___x_4491_);
lean_dec(v_i_4426_);
lean_inc(v_a_4432_);
lean_inc_ref(v_a_4431_);
lean_inc(v_a_4430_);
lean_inc_ref(v_a_4429_);
lean_inc(v_a_4428_);
lean_inc_ref(v_a_4427_);
v___x_4495_ = lean_apply_9(v_runInBase_4425_, lean_box(0), v_k_4424_, v_a_4427_, v_a_4428_, v_a_4429_, v_a_4430_, v_a_4431_, v_a_4432_, lean_box(0));
return v___x_4495_;
}
else
{
lean_object* v___f_4496_; lean_object* v___f_4497_; lean_object* v___f_4498_; lean_object* v_x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___f_4502_; lean_object* v___x_4503_; 
v___f_4496_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__20));
v___f_4497_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__21));
v___f_4498_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__25, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__25_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__25);
v_x_4499_ = lean_array_fget_borrowed(v_xs_4423_, v_i_4426_);
v___x_4500_ = l_Lean_Expr_fvarId_x21(v_x_4499_);
v___x_4501_ = lean_unsigned_to_nat(100u);
v___f_4502_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__2___boxed), 10, 2);
lean_closure_set(v___f_4502_, 0, v___x_4500_);
lean_closure_set(v___f_4502_, 1, v___x_4501_);
v___x_4503_ = l_Lean_Elab_Tactic_Do_liftSimpM___redArg(v___f_4502_, v_a_4427_, v_a_4428_, v_a_4429_, v_a_4430_, v_a_4431_, v_a_4432_);
if (lean_obj_tag(v___x_4503_) == 0)
{
lean_object* v_a_4504_; lean_object* v___x_4508_; lean_object* v___x_4509_; 
v_a_4504_ = lean_ctor_get(v___x_4503_, 0);
lean_inc(v_a_4504_);
lean_dec_ref_known(v___x_4503_, 1);
v___x_4508_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn___closed__4_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_));
v___x_4509_ = l_Lean_Elab_Tactic_Do_liftSimpM___redArg(v___f_4497_, v_a_4427_, v_a_4428_, v_a_4429_, v_a_4430_, v_a_4431_, v_a_4432_);
if (lean_obj_tag(v___x_4509_) == 0)
{
lean_object* v_a_4510_; lean_object* v___x_4511_; 
v_a_4510_ = lean_ctor_get(v___x_4509_, 0);
lean_inc(v_a_4510_);
lean_dec_ref_known(v___x_4509_, 1);
v___x_4511_ = l_Lean_Elab_Tactic_Do_liftSimpM___redArg(v___f_4496_, v_a_4427_, v_a_4428_, v_a_4429_, v_a_4430_, v_a_4431_, v_a_4432_);
if (lean_obj_tag(v___x_4511_) == 0)
{
lean_object* v_a_4512_; uint8_t v_hasTrace_4513_; 
v_a_4512_ = lean_ctor_get(v___x_4511_, 0);
lean_inc(v_a_4512_);
lean_dec_ref_known(v___x_4511_, 1);
v_hasTrace_4513_ = lean_ctor_get_uint8(v_a_4512_, sizeof(void*)*1);
if (v_hasTrace_4513_ == 0)
{
lean_dec(v_a_4512_);
lean_dec(v_a_4510_);
lean_dec_ref(v___x_4491_);
goto v___jp_4505_;
}
else
{
lean_object* v___x_4514_; uint8_t v___x_4515_; 
v___x_4514_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__28, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__28_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__28);
v___x_4515_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_a_4510_, v_a_4512_, v___x_4514_);
lean_dec(v_a_4512_);
lean_dec(v_a_4510_);
if (v___x_4515_ == 0)
{
lean_dec_ref(v___x_4491_);
goto v___jp_4505_;
}
else
{
lean_object* v_proof_4516_; lean_object* v___x_4517_; lean_object* v___y_4519_; 
v_proof_4516_ = lean_ctor_get(v_a_4504_, 2);
v___x_4517_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__30, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__30_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__30);
switch(lean_obj_tag(v_proof_4516_))
{
case 0:
{
lean_object* v_declName_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; 
v_declName_4533_ = lean_ctor_get(v_proof_4516_, 0);
v___x_4534_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__32, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__32_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__32);
lean_inc(v_declName_4533_);
v___x_4535_ = l_Lean_MessageData_ofName(v_declName_4533_);
v___x_4536_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4536_, 0, v___x_4534_);
lean_ctor_set(v___x_4536_, 1, v___x_4535_);
v___y_4519_ = v___x_4536_;
goto v___jp_4518_;
}
case 1:
{
lean_object* v_fvarId_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; 
v_fvarId_4537_ = lean_ctor_get(v_proof_4516_, 0);
v___x_4538_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__34, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__34_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__34);
lean_inc(v_fvarId_4537_);
v___x_4539_ = l_Lean_mkFVar(v_fvarId_4537_);
v___x_4540_ = l_Lean_MessageData_ofExpr(v___x_4539_);
v___x_4541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4541_, 0, v___x_4538_);
lean_ctor_set(v___x_4541_, 1, v___x_4540_);
v___y_4519_ = v___x_4541_;
goto v___jp_4518_;
}
default: 
{
lean_object* v_ref_4542_; lean_object* v_proof_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; 
v_ref_4542_ = lean_ctor_get(v_proof_4516_, 1);
v_proof_4543_ = lean_ctor_get(v_proof_4516_, 2);
v___x_4544_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__36, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__36_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__36);
lean_inc(v_ref_4542_);
v___x_4545_ = l_Lean_MessageData_ofSyntax(v_ref_4542_);
v___x_4546_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4546_, 0, v___x_4544_);
lean_ctor_set(v___x_4546_, 1, v___x_4545_);
v___x_4547_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__38, &l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__38_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___closed__38);
v___x_4548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4548_, 0, v___x_4546_);
lean_ctor_set(v___x_4548_, 1, v___x_4547_);
lean_inc_ref(v_proof_4543_);
v___x_4549_ = l_Lean_MessageData_ofExpr(v_proof_4543_);
v___x_4550_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4550_, 0, v___x_4548_);
lean_ctor_set(v___x_4550_, 1, v___x_4549_);
v___y_4519_ = v___x_4550_;
goto v___jp_4518_;
}
}
v___jp_4518_:
{
lean_object* v___x_4520_; lean_object* v___x_5661__overap_4521_; lean_object* v___x_4522_; 
v___x_4520_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4520_, 0, v___x_4517_);
lean_ctor_set(v___x_4520_, 1, v___y_4519_);
lean_inc_ref(v_toMonadRef_4449_);
v___x_5661__overap_4521_ = l_Lean_addTrace___redArg(v___x_4491_, v___x_4492_, v_toMonadRef_4449_, v___f_4498_, v___x_4508_, v___x_4520_);
lean_inc(v_a_4432_);
lean_inc_ref(v_a_4431_);
lean_inc(v_a_4430_);
lean_inc_ref(v_a_4429_);
lean_inc(v_a_4428_);
lean_inc_ref(v_a_4427_);
v___x_4522_ = lean_apply_7(v___x_5661__overap_4521_, v_a_4427_, v_a_4428_, v_a_4429_, v_a_4430_, v_a_4431_, v_a_4432_, lean_box(0));
if (lean_obj_tag(v___x_4522_) == 0)
{
lean_object* v_a_4523_; lean_object* v___x_4524_; 
v_a_4523_ = lean_ctor_get(v___x_4522_, 0);
lean_inc(v_a_4523_);
lean_dec_ref_known(v___x_4522_, 1);
lean_inc_ref(v_runInBase_4425_);
lean_inc(v_k_4424_);
v___x_4524_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__3(v_i_4426_, v_a_4504_, v_xs_4423_, v_k_4424_, v_runInBase_4425_, v_a_4523_, v_a_4427_, v_a_4428_, v_a_4429_, v_a_4430_, v_a_4431_, v_a_4432_);
v___y_4446_ = v___x_4524_;
goto v___jp_4445_;
}
else
{
lean_object* v_a_4525_; lean_object* v___x_4527_; uint8_t v_isShared_4528_; uint8_t v_isSharedCheck_4532_; 
lean_dec(v_a_4504_);
v_a_4525_ = lean_ctor_get(v___x_4522_, 0);
v_isSharedCheck_4532_ = !lean_is_exclusive(v___x_4522_);
if (v_isSharedCheck_4532_ == 0)
{
v___x_4527_ = v___x_4522_;
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
else
{
lean_inc(v_a_4525_);
lean_dec(v___x_4522_);
v___x_4527_ = lean_box(0);
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
v_resetjp_4526_:
{
lean_object* v___x_4530_; 
lean_inc(v_a_4525_);
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
v___y_4435_ = v___x_4530_;
v_a_4436_ = v_a_4525_;
goto v___jp_4434_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4551_; 
lean_dec(v_a_4510_);
lean_dec(v_a_4504_);
lean_dec_ref(v___x_4491_);
v_a_4551_ = lean_ctor_get(v___x_4511_, 0);
lean_inc(v_a_4551_);
lean_dec_ref_known(v___x_4511_, 1);
v_a_4443_ = v_a_4551_;
goto v___jp_4442_;
}
}
else
{
lean_object* v_a_4552_; 
lean_dec(v_a_4504_);
lean_dec_ref(v___x_4491_);
v_a_4552_ = lean_ctor_get(v___x_4509_, 0);
lean_inc(v_a_4552_);
lean_dec_ref_known(v___x_4509_, 1);
v_a_4443_ = v_a_4552_;
goto v___jp_4442_;
}
v___jp_4505_:
{
lean_object* v___x_4506_; lean_object* v___x_4507_; 
v___x_4506_ = lean_box(0);
lean_inc_ref(v_runInBase_4425_);
lean_inc(v_k_4424_);
v___x_4507_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__3(v_i_4426_, v_a_4504_, v_xs_4423_, v_k_4424_, v_runInBase_4425_, v___x_4506_, v_a_4427_, v_a_4428_, v_a_4429_, v_a_4430_, v_a_4431_, v_a_4432_);
v___y_4446_ = v___x_4507_;
goto v___jp_4445_;
}
}
else
{
lean_object* v_a_4553_; lean_object* v___x_4555_; uint8_t v_isShared_4556_; uint8_t v_isSharedCheck_4560_; 
lean_dec_ref(v___x_4491_);
v_a_4553_ = lean_ctor_get(v___x_4503_, 0);
v_isSharedCheck_4560_ = !lean_is_exclusive(v___x_4503_);
if (v_isSharedCheck_4560_ == 0)
{
v___x_4555_ = v___x_4503_;
v_isShared_4556_ = v_isSharedCheck_4560_;
goto v_resetjp_4554_;
}
else
{
lean_inc(v_a_4553_);
lean_dec(v___x_4503_);
v___x_4555_ = lean_box(0);
v_isShared_4556_ = v_isSharedCheck_4560_;
goto v_resetjp_4554_;
}
v_resetjp_4554_:
{
lean_object* v___x_4558_; 
lean_inc(v_a_4553_);
if (v_isShared_4556_ == 0)
{
v___x_4558_ = v___x_4555_;
goto v_reusejp_4557_;
}
else
{
lean_object* v_reuseFailAlloc_4559_; 
v_reuseFailAlloc_4559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4559_, 0, v_a_4553_);
v___x_4558_ = v_reuseFailAlloc_4559_;
goto v_reusejp_4557_;
}
v_reusejp_4557_:
{
v___y_4435_ = v___x_4558_;
v_a_4436_ = v_a_4553_;
goto v___jp_4434_;
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__3(lean_object* v_i_4567_, lean_object* v_a_4568_, lean_object* v_xs_4569_, lean_object* v_k_4570_, lean_object* v_runInBase_4571_, lean_object* v_____r_4572_, lean_object* v___y_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_){
_start:
{
lean_object* v_config_4580_; lean_object* v_specThms_4581_; lean_object* v_simpCtx_4582_; lean_object* v_simprocs_4583_; lean_object* v_jps_4584_; lean_object* v_initialCtxSize_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; 
v_config_4580_ = lean_ctor_get(v___y_4573_, 0);
v_specThms_4581_ = lean_ctor_get(v___y_4573_, 1);
v_simpCtx_4582_ = lean_ctor_get(v___y_4573_, 2);
v_simprocs_4583_ = lean_ctor_get(v___y_4573_, 3);
v_jps_4584_ = lean_ctor_get(v___y_4573_, 4);
v_initialCtxSize_4585_ = lean_ctor_get(v___y_4573_, 5);
v___x_4586_ = lean_unsigned_to_nat(1u);
v___x_4587_ = lean_nat_add(v_i_4567_, v___x_4586_);
lean_inc_ref(v_specThms_4581_);
v___x_4588_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_insert(v_specThms_4581_, v_a_4568_);
lean_inc(v_initialCtxSize_4585_);
lean_inc(v_jps_4584_);
lean_inc_ref(v_simprocs_4583_);
lean_inc_ref(v_simpCtx_4582_);
lean_inc_ref(v_config_4580_);
v___x_4589_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4589_, 0, v_config_4580_);
lean_ctor_set(v___x_4589_, 1, v___x_4588_);
lean_ctor_set(v___x_4589_, 2, v_simpCtx_4582_);
lean_ctor_set(v___x_4589_, 3, v_simprocs_4583_);
lean_ctor_set(v___x_4589_, 4, v_jps_4584_);
lean_ctor_set(v___x_4589_, 5, v_initialCtxSize_4585_);
v___x_4590_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg(v_xs_4569_, v_k_4570_, v_runInBase_4571_, v___x_4587_, v___x_4589_, v___y_4574_, v___y_4575_, v___y_4576_, v___y_4577_, v___y_4578_);
lean_dec_ref_known(v___x_4589_, 6);
return v___x_4590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__3___boxed(lean_object* v_i_4591_, lean_object* v_a_4592_, lean_object* v_xs_4593_, lean_object* v_k_4594_, lean_object* v_runInBase_4595_, lean_object* v_____r_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_){
_start:
{
lean_object* v_res_4604_; 
v_res_4604_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___lam__3(v_i_4591_, v_a_4592_, v_xs_4593_, v_k_4594_, v_runInBase_4595_, v_____r_4596_, v___y_4597_, v___y_4598_, v___y_4599_, v___y_4600_, v___y_4601_, v___y_4602_);
lean_dec(v___y_4602_);
lean_dec_ref(v___y_4601_);
lean_dec(v___y_4600_);
lean_dec_ref(v___y_4599_);
lean_dec(v___y_4598_);
lean_dec_ref(v___y_4597_);
lean_dec_ref(v_xs_4593_);
lean_dec(v_i_4591_);
return v_res_4604_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg___boxed(lean_object* v_xs_4605_, lean_object* v_k_4606_, lean_object* v_runInBase_4607_, lean_object* v_i_4608_, lean_object* v_a_4609_, lean_object* v_a_4610_, lean_object* v_a_4611_, lean_object* v_a_4612_, lean_object* v_a_4613_, lean_object* v_a_4614_, lean_object* v_a_4615_){
_start:
{
lean_object* v_res_4616_; 
v_res_4616_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg(v_xs_4605_, v_k_4606_, v_runInBase_4607_, v_i_4608_, v_a_4609_, v_a_4610_, v_a_4611_, v_a_4612_, v_a_4613_, v_a_4614_);
lean_dec(v_a_4614_);
lean_dec_ref(v_a_4613_);
lean_dec(v_a_4612_);
lean_dec_ref(v_a_4611_);
lean_dec(v_a_4610_);
lean_dec_ref(v_a_4609_);
lean_dec_ref(v_xs_4605_);
return v_res_4616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop(lean_object* v_m_4617_, lean_object* v_00_u03b1_4618_, lean_object* v_inst_4619_, lean_object* v_xs_4620_, lean_object* v_k_4621_, lean_object* v_runInBase_4622_, lean_object* v_i_4623_, lean_object* v_a_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_, lean_object* v_a_4627_, lean_object* v_a_4628_, lean_object* v_a_4629_){
_start:
{
lean_object* v___x_4631_; 
v___x_4631_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg(v_xs_4620_, v_k_4621_, v_runInBase_4622_, v_i_4623_, v_a_4624_, v_a_4625_, v_a_4626_, v_a_4627_, v_a_4628_, v_a_4629_);
return v___x_4631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___boxed(lean_object* v_m_4632_, lean_object* v_00_u03b1_4633_, lean_object* v_inst_4634_, lean_object* v_xs_4635_, lean_object* v_k_4636_, lean_object* v_runInBase_4637_, lean_object* v_i_4638_, lean_object* v_a_4639_, lean_object* v_a_4640_, lean_object* v_a_4641_, lean_object* v_a_4642_, lean_object* v_a_4643_, lean_object* v_a_4644_, lean_object* v_a_4645_){
_start:
{
lean_object* v_res_4646_; 
v_res_4646_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop(v_m_4632_, v_00_u03b1_4633_, v_inst_4634_, v_xs_4635_, v_k_4636_, v_runInBase_4637_, v_i_4638_, v_a_4639_, v_a_4640_, v_a_4641_, v_a_4642_, v_a_4643_, v_a_4644_);
lean_dec(v_a_4644_);
lean_dec_ref(v_a_4643_);
lean_dec(v_a_4642_);
lean_dec_ref(v_a_4641_);
lean_dec(v_a_4640_);
lean_dec_ref(v_a_4639_);
lean_dec_ref(v_xs_4635_);
lean_dec_ref(v_inst_4634_);
return v_res_4646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop_match__1_splitter___redArg(lean_object* v_ex_4647_, lean_object* v_h__1_4648_, lean_object* v_h__2_4649_){
_start:
{
if (lean_obj_tag(v_ex_4647_) == 0)
{
lean_object* v_ref_4650_; lean_object* v_msg_4651_; lean_object* v___x_4652_; 
lean_dec(v_h__1_4648_);
v_ref_4650_ = lean_ctor_get(v_ex_4647_, 0);
lean_inc(v_ref_4650_);
v_msg_4651_ = lean_ctor_get(v_ex_4647_, 1);
lean_inc_ref(v_msg_4651_);
lean_dec_ref_known(v_ex_4647_, 2);
v___x_4652_ = lean_apply_2(v_h__2_4649_, v_ref_4650_, v_msg_4651_);
return v___x_4652_;
}
else
{
lean_object* v_id_4653_; lean_object* v_extra_4654_; lean_object* v___x_4655_; 
lean_dec(v_h__2_4649_);
v_id_4653_ = lean_ctor_get(v_ex_4647_, 0);
lean_inc(v_id_4653_);
v_extra_4654_ = lean_ctor_get(v_ex_4647_, 1);
lean_inc(v_extra_4654_);
lean_dec_ref_known(v_ex_4647_, 2);
v___x_4655_ = lean_apply_2(v_h__1_4648_, v_id_4653_, v_extra_4654_);
return v___x_4655_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop_match__1_splitter(lean_object* v_motive_4656_, lean_object* v_ex_4657_, lean_object* v_h__1_4658_, lean_object* v_h__2_4659_){
_start:
{
if (lean_obj_tag(v_ex_4657_) == 0)
{
lean_object* v_ref_4660_; lean_object* v_msg_4661_; lean_object* v___x_4662_; 
lean_dec(v_h__1_4658_);
v_ref_4660_ = lean_ctor_get(v_ex_4657_, 0);
lean_inc(v_ref_4660_);
v_msg_4661_ = lean_ctor_get(v_ex_4657_, 1);
lean_inc_ref(v_msg_4661_);
lean_dec_ref_known(v_ex_4657_, 2);
v___x_4662_ = lean_apply_2(v_h__2_4659_, v_ref_4660_, v_msg_4661_);
return v___x_4662_;
}
else
{
lean_object* v_id_4663_; lean_object* v_extra_4664_; lean_object* v___x_4665_; 
lean_dec(v_h__2_4659_);
v_id_4663_ = lean_ctor_get(v_ex_4657_, 0);
lean_inc(v_id_4663_);
v_extra_4664_ = lean_ctor_get(v_ex_4657_, 1);
lean_inc(v_extra_4664_);
lean_dec_ref_known(v_ex_4657_, 2);
v___x_4665_ = lean_apply_2(v_h__1_4658_, v_id_4663_, v_extra_4664_);
return v___x_4665_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLocalSpecs___redArg___lam__0(lean_object* v_xs_4666_, lean_object* v_k_4667_, lean_object* v_runInBase_4668_, lean_object* v___y_4669_, lean_object* v___y_4670_, lean_object* v___y_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_){
_start:
{
lean_object* v___x_4676_; lean_object* v___x_4677_; 
v___x_4676_ = lean_unsigned_to_nat(0u);
v___x_4677_ = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_withLocalSpecs_loop___redArg(v_xs_4666_, v_k_4667_, v_runInBase_4668_, v___x_4676_, v___y_4669_, v___y_4670_, v___y_4671_, v___y_4672_, v___y_4673_, v___y_4674_);
return v___x_4677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLocalSpecs___redArg___lam__0___boxed(lean_object* v_xs_4678_, lean_object* v_k_4679_, lean_object* v_runInBase_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_, lean_object* v___y_4684_, lean_object* v___y_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_){
_start:
{
lean_object* v_res_4688_; 
v_res_4688_ = l_Lean_Elab_Tactic_Do_withLocalSpecs___redArg___lam__0(v_xs_4678_, v_k_4679_, v_runInBase_4680_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_, v___y_4685_, v___y_4686_);
lean_dec(v___y_4686_);
lean_dec_ref(v___y_4685_);
lean_dec(v___y_4684_);
lean_dec_ref(v___y_4683_);
lean_dec(v___y_4682_);
lean_dec_ref(v___y_4681_);
lean_dec_ref(v_xs_4678_);
return v_res_4688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLocalSpecs___redArg(lean_object* v_inst_4689_, lean_object* v_inst_4690_, lean_object* v_xs_4691_, lean_object* v_k_4692_){
_start:
{
lean_object* v_toBind_4693_; lean_object* v_liftWith_4694_; lean_object* v_restoreM_4695_; lean_object* v___f_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; 
v_toBind_4693_ = lean_ctor_get(v_inst_4689_, 1);
lean_inc(v_toBind_4693_);
lean_dec_ref(v_inst_4689_);
v_liftWith_4694_ = lean_ctor_get(v_inst_4690_, 0);
lean_inc(v_liftWith_4694_);
v_restoreM_4695_ = lean_ctor_get(v_inst_4690_, 1);
lean_inc(v_restoreM_4695_);
lean_dec_ref(v_inst_4690_);
v___f_4696_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_withLocalSpecs___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_4696_, 0, v_xs_4691_);
lean_closure_set(v___f_4696_, 1, v_k_4692_);
v___x_4697_ = lean_apply_2(v_liftWith_4694_, lean_box(0), v___f_4696_);
v___x_4698_ = lean_apply_1(v_restoreM_4695_, lean_box(0));
v___x_4699_ = lean_apply_4(v_toBind_4693_, lean_box(0), lean_box(0), v___x_4697_, v___x_4698_);
return v___x_4699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_withLocalSpecs(lean_object* v_m_4700_, lean_object* v_00_u03b1_4701_, lean_object* v_inst_4702_, lean_object* v_inst_4703_, lean_object* v_xs_4704_, lean_object* v_k_4705_){
_start:
{
lean_object* v___x_4706_; 
v___x_4706_ = l_Lean_Elab_Tactic_Do_withLocalSpecs___redArg(v_inst_4702_, v_inst_4703_, v_xs_4704_, v_k_4705_);
return v___x_4706_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Attr(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ConfigEval(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ConfigEval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_540456248____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_4153898153____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_initFn_00___x40_Lean_Elab_Tactic_Do_VCGen_Basic_1636623291____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Tactic_Do_mvcgen_warning = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Tactic_Do_mvcgen_warning);
lean_dec_ref(res);
l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig = _init_l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig();
lean_mark_persistent(l___private_Lean_Elab_Tactic_Do_VCGen_Basic_0__Lean_Elab_Tactic_Do_instEvalExprConfig);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_VCGen_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Attr(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Lean_Elab_ConfigEval(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_VCGen_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ConfigEval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_VCGen_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_VCGen_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
