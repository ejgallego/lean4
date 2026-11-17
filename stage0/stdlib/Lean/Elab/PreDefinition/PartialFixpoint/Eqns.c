// Lean compiler output
// Module: Lean.Elab.PreDefinition.PartialFixpoint.Eqns
// Imports: public import Lean.Elab.PreDefinition.FixedParams import Init.Internal.Order.Basic import Lean.Meta.Tactic.Delta import Lean.Meta.Tactic.Refl
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_Meta_smartUnfolding;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_deltaExpand(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
uint8_t l_Lean_Expr_isProj(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Expr_projExpr_x21(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasExposedBody(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default;
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
lean_object* l_Lean_Meta_mkEqLikeNameFor(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_addNoncomputable(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_unfoldThmSuffix;
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_tactic_hygienic;
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_registerGetUnfoldEqnFn(lean_object*);
static const lean_string_object l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__0 = (const lean_object*)&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__1 = (const lean_object*)&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__1_value;
static lean_once_cell_t l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2;
static const lean_array_object l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__3 = (const lean_object*)&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__3_value;
static lean_once_cell_t l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo;
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "PartialFixpoint"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "eqnInfoExt"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(125, 126, 228, 214, 96, 108, 195, 201)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(200, 154, 190, 235, 71, 53, 215, 0)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_eqnInfoExt;
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fix"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(18, 104, 23, 57, 110, 104, 99, 16)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lfp_monotone"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(226, 115, 213, 20, 156, 86, 56, 31)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__4_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "mkFixEq: unexpected body of `"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__6;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "lfp_monotone_fix"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(178, 113, 187, 250, 69, 106, 19, 81)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "fix_eq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(83, 197, 58, 21, 58, 52, 66, 18)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__2(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__0 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__1;
static const lean_string_object l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` is not a definition"};
static const lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__2 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__3;
static const lean_string_object l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__4 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__4_value;
static const lean_string_object l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isDefn\?"};
static const lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__5 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__5_value;
static const lean_string_object l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__6 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_fix_eq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_functional"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__5;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__6;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "deltaLHSUntilFix"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(179, 223, 150, 107, 82, 172, 43, 154)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "equality expected"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__4_value)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "rwFixUnder: unexpected expression "};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value),LEAN_SCALAR_PTR_LITERAL(34, 153, 146, 175, 179, 220, 230, 134)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrArg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value),LEAN_SCALAR_PTR_LITERAL(188, 17, 22, 243, 206, 91, 171, 36)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Expr"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__7_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateProj!Impl"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__8 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__8_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "proj expected"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__9 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__9_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__10;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrFun"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11_value),LEAN_SCALAR_PTR_LITERAL(63, 110, 174, 29, 249, 91, 125, 152)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lean.Elab.PreDefinition.PartialFixpoint.Eqns"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "_private.Lean.Elab.PreDefinition.PartialFixpoint.Eqns.0.Lean.Elab.PartialFixpoint.rwFixEq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "_private.Lean.Elab.PreDefinition.PartialFixpoint.Eqns.0.Lean.Elab.PartialFixpoint.rwFixEqWith"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__2;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "rwFixEqWith"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(21, 245, 144, 142, 29, 56, 3, 70)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "no application of `"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__6;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "` found"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3_spec__3(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "mkUnfoldEq rfl succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "mkUnfoldEq after rwFixEq:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "mkUnfoldEq after deltaLHS:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "failed to generate unfold theorem for `"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "`:\n"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__4_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "partialFixpoint"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(21, 214, 78, 192, 157, 92, 193, 45)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6_value)} };
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__7_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "mkUnfoldEq start:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__8 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_9_ = lean_box(0);
v___x_10_ = l_Lean_Elab_instInhabitedFixedParamPerms_default;
v___x_11_ = ((lean_object*)(l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__3));
v___x_12_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2, &l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2_once, _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2);
v___x_13_ = lean_box(0);
v___x_14_ = lean_box(0);
v___x_15_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set(v___x_15_, 2, v___x_12_);
lean_ctor_set(v___x_15_, 3, v___x_12_);
lean_ctor_set(v___x_15_, 4, v___x_11_);
lean_ctor_set(v___x_15_, 5, v___x_14_);
lean_ctor_set(v___x_15_, 6, v___x_10_);
lean_ctor_set(v___x_15_, 7, v___x_11_);
lean_ctor_set(v___x_15_, 8, v___x_9_);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4, &l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4_once, _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default;
return v___x_17_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_(lean_object* v_env_18_, lean_object* v_n_19_, lean_object* v_x_20_){
_start:
{
uint8_t v___x_21_; 
v___x_21_ = l_Lean_Environment_hasExposedBody(v_env_18_, v_n_19_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2____boxed(lean_object* v_env_22_, lean_object* v_n_23_, lean_object* v_x_24_){
_start:
{
uint8_t v_res_25_; lean_object* v_r_26_; 
v_res_25_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_(v_env_22_, v_n_23_, v_x_24_);
lean_dec_ref(v_x_24_);
v_r_26_ = lean_box(v_res_25_);
return v_r_26_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_27_, lean_object* v_x_28_){
_start:
{
if (lean_obj_tag(v_x_28_) == 0)
{
lean_object* v_k_29_; lean_object* v_v_30_; lean_object* v_l_31_; lean_object* v_r_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v_k_29_ = lean_ctor_get(v_x_28_, 1);
v_v_30_ = lean_ctor_get(v_x_28_, 2);
v_l_31_ = lean_ctor_get(v_x_28_, 3);
v_r_32_ = lean_ctor_get(v_x_28_, 4);
v___x_33_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__spec__0_spec__0(v_init_27_, v_l_31_);
lean_inc(v_v_30_);
lean_inc(v_k_29_);
v___x_34_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_34_, 0, v_k_29_);
lean_ctor_set(v___x_34_, 1, v_v_30_);
v___x_35_ = lean_array_push(v___x_33_, v___x_34_);
v_init_27_ = v___x_35_;
v_x_28_ = v_r_32_;
goto _start;
}
else
{
return v_init_27_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_37_, lean_object* v_x_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__spec__0_spec__0(v_init_37_, v_x_38_);
lean_dec(v_x_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_(lean_object* v_env_42_, lean_object* v_s_43_){
_start:
{
lean_object* v___f_44_; lean_object* v___x_45_; lean_object* v_all_46_; lean_object* v___x_47_; lean_object* v_exported_48_; lean_object* v___x_49_; 
v___f_44_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2____boxed), 3, 1);
lean_closure_set(v___f_44_, 0, v_env_42_);
v___x_45_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_));
v_all_46_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__spec__0_spec__0(v___x_45_, v_s_43_);
v___x_47_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(v___f_44_, v_s_43_);
v_exported_48_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__spec__0_spec__0(v___x_45_, v___x_47_);
lean_dec(v___x_47_);
lean_inc_ref(v_exported_48_);
v___x_49_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_49_, 0, v_exported_48_);
lean_ctor_set(v___x_49_, 1, v_exported_48_);
lean_ctor_set(v___x_49_, 2, v_all_46_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_63_; lean_object* v___x_64_; lean_object* v___x_65_; uint8_t v___x_66_; lean_object* v___x_67_; 
v___f_63_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_));
v___x_64_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_));
v___x_65_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_));
v___x_66_ = 1;
v___x_67_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_64_, v___x_65_, v___x_66_, v___f_63_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2____boxed(lean_object* v_a_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_();
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__spec__0(lean_object* v_init_70_, lean_object* v_t_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__spec__0_spec__0(v_init_70_, v_t_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_73_, lean_object* v_t_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2__spec__0(v_init_73_, v_t_74_);
lean_dec(v_t_74_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg___lam__0(lean_object* v_k_76_, lean_object* v_b_77_, lean_object* v_c_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; 
lean_inc(v___y_82_);
lean_inc_ref(v___y_81_);
lean_inc(v___y_80_);
lean_inc_ref(v___y_79_);
v___x_84_ = lean_apply_7(v_k_76_, v_b_77_, v_c_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, lean_box(0));
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg___lam__0___boxed(lean_object* v_k_85_, lean_object* v_b_86_, lean_object* v_c_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg___lam__0(v_k_85_, v_b_86_, v_c_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg(lean_object* v_e_94_, lean_object* v_k_95_, uint8_t v_cleanupAnnotations_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v___f_102_; uint8_t v___x_103_; uint8_t v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___f_102_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_102_, 0, v_k_95_);
v___x_103_ = 1;
v___x_104_ = 0;
v___x_105_ = lean_box(0);
v___x_106_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_94_, v___x_103_, v___x_104_, v___x_103_, v___x_104_, v___x_105_, v___f_102_, v_cleanupAnnotations_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
if (lean_obj_tag(v___x_106_) == 0)
{
lean_object* v_a_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_114_; 
v_a_107_ = lean_ctor_get(v___x_106_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_106_);
if (v_isSharedCheck_114_ == 0)
{
v___x_109_ = v___x_106_;
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_a_107_);
lean_dec(v___x_106_);
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
v_reuseFailAlloc_113_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_122_; 
v_a_115_ = lean_ctor_get(v___x_106_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_106_);
if (v_isSharedCheck_122_ == 0)
{
v___x_117_ = v___x_106_;
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_a_115_);
lean_dec(v___x_106_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_120_; 
if (v_isShared_118_ == 0)
{
v___x_120_ = v___x_117_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_a_115_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg___boxed(lean_object* v_e_123_, lean_object* v_k_124_, lean_object* v_cleanupAnnotations_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_131_; lean_object* v_res_132_; 
v_cleanupAnnotations_boxed_131_ = lean_unbox(v_cleanupAnnotations_125_);
v_res_132_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg(v_e_123_, v_k_124_, v_cleanupAnnotations_boxed_131_, v___y_126_, v___y_127_, v___y_128_, v___y_129_);
lean_dec(v___y_129_);
lean_dec_ref(v___y_128_);
lean_dec(v___y_127_);
lean_dec_ref(v___y_126_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3(lean_object* v_00_u03b1_133_, lean_object* v_e_134_, lean_object* v_k_135_, uint8_t v_cleanupAnnotations_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg(v_e_134_, v_k_135_, v_cleanupAnnotations_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___boxed(lean_object* v_00_u03b1_143_, lean_object* v_e_144_, lean_object* v_k_145_, lean_object* v_cleanupAnnotations_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_152_; lean_object* v_res_153_; 
v_cleanupAnnotations_boxed_152_ = lean_unbox(v_cleanupAnnotations_146_);
v_res_153_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3(v_00_u03b1_143_, v_e_144_, v_k_145_, v_cleanupAnnotations_boxed_152_, v___y_147_, v___y_148_, v___y_149_, v___y_150_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__5___redArg(lean_object* v_thm_154_, lean_object* v___y_155_){
_start:
{
lean_object* v___x_157_; lean_object* v_env_158_; lean_object* v_toConstantVal_159_; lean_object* v_value_160_; lean_object* v_all_161_; lean_object* v_type_168_; uint8_t v___x_169_; 
v___x_157_ = lean_st_ref_get(v___y_155_);
v_env_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc_ref_n(v_env_158_, 2);
lean_dec(v___x_157_);
v_toConstantVal_159_ = lean_ctor_get(v_thm_154_, 0);
v_value_160_ = lean_ctor_get(v_thm_154_, 1);
v_all_161_ = lean_ctor_get(v_thm_154_, 2);
v_type_168_ = lean_ctor_get(v_toConstantVal_159_, 2);
v___x_169_ = l_Lean_Environment_hasUnsafe(v_env_158_, v_type_168_);
if (v___x_169_ == 0)
{
uint8_t v___x_170_; 
v___x_170_ = l_Lean_Environment_hasUnsafe(v_env_158_, v_value_160_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_171_, 0, v_thm_154_);
v___x_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
return v___x_172_;
}
else
{
lean_inc(v_all_161_);
lean_inc_ref(v_value_160_);
lean_inc_ref(v_toConstantVal_159_);
lean_dec_ref(v_thm_154_);
goto v___jp_162_;
}
}
else
{
lean_inc(v_all_161_);
lean_inc_ref(v_value_160_);
lean_inc_ref(v_toConstantVal_159_);
lean_dec_ref(v_env_158_);
lean_dec_ref(v_thm_154_);
goto v___jp_162_;
}
v___jp_162_:
{
lean_object* v___x_163_; uint8_t v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_163_ = lean_box(0);
v___x_164_ = 0;
v___x_165_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_165_, 0, v_toConstantVal_159_);
lean_ctor_set(v___x_165_, 1, v_value_160_);
lean_ctor_set(v___x_165_, 2, v___x_163_);
lean_ctor_set(v___x_165_, 3, v_all_161_);
lean_ctor_set_uint8(v___x_165_, sizeof(void*)*4, v___x_164_);
v___x_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
v___x_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
return v___x_167_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__5___redArg___boxed(lean_object* v_thm_173_, lean_object* v___y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__5___redArg(v_thm_173_, v___y_174_);
lean_dec(v___y_174_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__5(lean_object* v_thm_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__5___redArg(v_thm_177_, v___y_181_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__5___boxed(lean_object* v_thm_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__5(v_thm_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_);
lean_dec(v___y_188_);
lean_dec_ref(v___y_187_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0_spec__0(lean_object* v_msgData_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_){
_start:
{
lean_object* v___x_197_; lean_object* v_env_198_; uint8_t v___x_199_; lean_object* v_env_200_; lean_object* v___x_201_; lean_object* v_toCold_202_; lean_object* v_mctx_203_; lean_object* v_lctx_204_; lean_object* v_options_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_197_ = lean_st_ref_get(v___y_195_);
v_env_198_ = lean_ctor_get(v___x_197_, 0);
lean_inc_ref(v_env_198_);
lean_dec(v___x_197_);
v___x_199_ = 0;
v_env_200_ = l_Lean_Environment_setRecordingDeps(v_env_198_, v___x_199_);
v___x_201_ = lean_st_ref_get(v___y_193_);
v_toCold_202_ = lean_ctor_get(v___y_194_, 0);
v_mctx_203_ = lean_ctor_get(v___x_201_, 0);
lean_inc_ref(v_mctx_203_);
lean_dec(v___x_201_);
v_lctx_204_ = lean_ctor_get(v___y_192_, 2);
v_options_205_ = lean_ctor_get(v_toCold_202_, 2);
lean_inc_ref(v_options_205_);
lean_inc_ref(v_lctx_204_);
v___x_206_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_206_, 0, v_env_200_);
lean_ctor_set(v___x_206_, 1, v_mctx_203_);
lean_ctor_set(v___x_206_, 2, v_lctx_204_);
lean_ctor_set(v___x_206_, 3, v_options_205_);
v___x_207_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v_msgData_191_);
v___x_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0_spec__0___boxed(lean_object* v_msgData_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0_spec__0(v_msgData_209_, v___y_210_, v___y_211_, v___y_212_, v___y_213_);
lean_dec(v___y_213_);
lean_dec_ref(v___y_212_);
lean_dec(v___y_211_);
lean_dec_ref(v___y_210_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0___redArg(lean_object* v_msg_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_){
_start:
{
lean_object* v_ref_222_; lean_object* v___x_223_; lean_object* v_a_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_232_; 
v_ref_222_ = lean_ctor_get(v___y_219_, 2);
v___x_223_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0_spec__0(v_msg_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
v_a_224_ = lean_ctor_get(v___x_223_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_223_);
if (v_isSharedCheck_232_ == 0)
{
v___x_226_ = v___x_223_;
v_isShared_227_ = v_isSharedCheck_232_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_a_224_);
lean_dec(v___x_223_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_232_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_228_; lean_object* v___x_230_; 
lean_inc(v_ref_222_);
v___x_228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_228_, 0, v_ref_222_);
lean_ctor_set(v___x_228_, 1, v_a_224_);
if (v_isShared_227_ == 0)
{
lean_ctor_set_tag(v___x_226_, 1);
lean_ctor_set(v___x_226_, 0, v___x_228_);
v___x_230_ = v___x_226_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___x_228_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0___redArg___boxed(lean_object* v_msg_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0___redArg(v_msg_233_, v___y_234_, v___y_235_, v___y_236_, v___y_237_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
return v_res_239_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__6(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__5));
v___x_253_ = l_Lean_stringToMessageData(v___x_252_);
return v___x_253_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__8(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__7));
v___x_256_ = l_Lean_stringToMessageData(v___x_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0(lean_object* v_declNameNonRec_257_, lean_object* v_xs_258_, lean_object* v_body_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_309_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__2));
v___x_310_ = lean_unsigned_to_nat(4u);
v___x_311_ = l_Lean_Expr_isAppOfArity(v_body_259_, v___x_309_, v___x_310_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_312_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__4));
v___x_313_ = l_Lean_Expr_isAppOfArity(v_body_259_, v___x_312_, v___x_310_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v_a_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_329_; 
v___x_314_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__6, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__6);
v___x_315_ = l_Lean_MessageData_ofConstName(v_declNameNonRec_257_, v___x_313_);
v___x_316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_314_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
v___x_317_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__8, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__8);
v___x_318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_316_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
v___x_319_ = l_Lean_indentExpr(v_body_259_);
v___x_320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_318_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
v___x_321_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0___redArg(v___x_320_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
v_a_322_ = lean_ctor_get(v___x_321_, 0);
v_isSharedCheck_329_ = !lean_is_exclusive(v___x_321_);
if (v_isSharedCheck_329_ == 0)
{
v___x_324_ = v___x_321_;
v_isShared_325_ = v_isSharedCheck_329_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_a_322_);
lean_dec(v___x_321_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_329_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_327_; 
if (v_isShared_325_ == 0)
{
v___x_327_ = v___x_324_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_a_322_);
v___x_327_ = v_reuseFailAlloc_328_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
return v___x_327_;
}
}
}
else
{
lean_dec(v_declNameNonRec_257_);
goto v___jp_265_;
}
}
else
{
lean_dec(v_declNameNonRec_257_);
goto v___jp_265_;
}
v___jp_265_:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_266_ = l_Lean_Expr_appFn_x21(v_body_259_);
lean_dec_ref(v_body_259_);
v___x_267_ = l_Lean_Expr_appArg_x21(v___x_266_);
lean_dec_ref(v___x_266_);
lean_inc(v___y_263_);
lean_inc_ref(v___y_262_);
lean_inc(v___y_261_);
lean_inc_ref(v___y_260_);
lean_inc_ref(v___x_267_);
v___x_268_ = lean_infer_type(v___x_267_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; uint8_t v___x_270_; uint8_t v___x_271_; uint8_t v___x_272_; lean_object* v___x_273_; 
v_a_269_ = lean_ctor_get(v___x_268_, 0);
lean_inc(v_a_269_);
lean_dec_ref_known(v___x_268_, 1);
v___x_270_ = 0;
v___x_271_ = 1;
v___x_272_ = 1;
v___x_273_ = l_Lean_Meta_mkForallFVars(v_xs_258_, v_a_269_, v___x_270_, v___x_271_, v___x_271_, v___x_272_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
if (lean_obj_tag(v___x_273_) == 0)
{
lean_object* v_a_274_; lean_object* v___x_275_; 
v_a_274_ = lean_ctor_get(v___x_273_, 0);
lean_inc(v_a_274_);
lean_dec_ref_known(v___x_273_, 1);
v___x_275_ = l_Lean_Meta_mkLambdaFVars(v_xs_258_, v___x_267_, v___x_270_, v___x_271_, v___x_270_, v___x_271_, v___x_272_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_284_; 
v_a_276_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_284_ == 0)
{
v___x_278_ = v___x_275_;
v_isShared_279_ = v_isSharedCheck_284_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_275_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_284_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_280_; lean_object* v___x_282_; 
v___x_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_280_, 0, v_a_274_);
lean_ctor_set(v___x_280_, 1, v_a_276_);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 0, v___x_280_);
v___x_282_ = v___x_278_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_280_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
else
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_292_; 
lean_dec(v_a_274_);
v_a_285_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_292_ == 0)
{
v___x_287_ = v___x_275_;
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_275_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_290_; 
if (v_isShared_288_ == 0)
{
v___x_290_ = v___x_287_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v_a_285_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
}
}
else
{
lean_object* v_a_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_300_; 
lean_dec_ref(v___x_267_);
v_a_293_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_300_ == 0)
{
v___x_295_ = v___x_273_;
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_a_293_);
lean_dec(v___x_273_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v___x_298_; 
if (v_isShared_296_ == 0)
{
v___x_298_ = v___x_295_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_a_293_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
else
{
lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_308_; 
lean_dec_ref(v___x_267_);
v_a_301_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_308_ == 0)
{
v___x_303_ = v___x_268_;
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_268_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_304_ == 0)
{
v___x_306_ = v___x_303_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_301_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___boxed(lean_object* v_declNameNonRec_330_, lean_object* v_xs_331_, lean_object* v_body_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0(v_declNameNonRec_330_, v_xs_331_, v_body_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec(v___y_334_);
lean_dec_ref(v___y_333_);
lean_dec_ref(v_xs_331_);
return v_res_338_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0(void){
_start:
{
lean_object* v___x_339_; lean_object* v_dummy_340_; 
v___x_339_ = lean_box(0);
v_dummy_340_ = l_Lean_Expr_sort___override(v___x_339_);
return v_dummy_340_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1(lean_object* v_declNameNonRec_351_, lean_object* v___x_352_, lean_object* v___x_353_, uint8_t v___x_354_, lean_object* v_xs_355_, lean_object* v_body_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___y_368_; lean_object* v___x_419_; uint8_t v___x_420_; 
lean_inc(v___x_352_);
v___x_362_ = l_Lean_mkConst(v_declNameNonRec_351_, v___x_352_);
v___x_363_ = l_Lean_mkAppN(v___x_362_, v_xs_355_);
v___x_364_ = l_Lean_mkConst(v___x_353_, v___x_352_);
v___x_365_ = l_Lean_mkAppN(v___x_364_, v_xs_355_);
lean_inc_ref(v___x_363_);
v___x_366_ = l_Lean_Expr_app___override(v___x_365_, v___x_363_);
v___x_419_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__2));
v___x_420_ = l_Lean_Expr_isAppOf(v_body_356_, v___x_419_);
if (v___x_420_ == 0)
{
lean_object* v___x_421_; 
v___x_421_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__2));
v___y_368_ = v___x_421_;
goto v___jp_367_;
}
else
{
lean_object* v___x_422_; 
v___x_422_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__4));
v___y_368_ = v___x_422_;
goto v___jp_367_;
}
v___jp_367_:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v_dummy_372_; lean_object* v_nargs_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_369_ = l_Lean_Expr_getAppFn(v_body_356_);
v___x_370_ = l_Lean_Expr_constLevels_x21(v___x_369_);
lean_dec_ref(v___x_369_);
lean_inc(v___y_368_);
v___x_371_ = l_Lean_mkConst(v___y_368_, v___x_370_);
v_dummy_372_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0);
v_nargs_373_ = l_Lean_Expr_getAppNumArgs(v_body_356_);
lean_inc(v_nargs_373_);
v___x_374_ = lean_mk_array(v_nargs_373_, v_dummy_372_);
v___x_375_ = lean_unsigned_to_nat(1u);
v___x_376_ = lean_nat_sub(v_nargs_373_, v___x_375_);
lean_dec(v_nargs_373_);
v___x_377_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_body_356_, v___x_374_, v___x_376_);
v___x_378_ = l_Lean_mkAppN(v___x_371_, v___x_377_);
lean_dec_ref(v___x_377_);
v___x_379_ = l_Lean_Meta_mkEq(v___x_363_, v___x_366_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v_a_380_; uint8_t v___x_381_; uint8_t v___x_382_; lean_object* v___x_383_; 
v_a_380_ = lean_ctor_get(v___x_379_, 0);
lean_inc(v_a_380_);
lean_dec_ref_known(v___x_379_, 1);
v___x_381_ = 1;
v___x_382_ = 1;
v___x_383_ = l_Lean_Meta_mkForallFVars(v_xs_355_, v_a_380_, v___x_354_, v___x_381_, v___x_381_, v___x_382_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
if (lean_obj_tag(v___x_383_) == 0)
{
lean_object* v_a_384_; lean_object* v___x_385_; 
v_a_384_ = lean_ctor_get(v___x_383_, 0);
lean_inc(v_a_384_);
lean_dec_ref_known(v___x_383_, 1);
v___x_385_ = l_Lean_Meta_mkLambdaFVars(v_xs_355_, v___x_378_, v___x_354_, v___x_381_, v___x_354_, v___x_381_, v___x_382_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_394_; 
v_a_386_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_394_ == 0)
{
v___x_388_ = v___x_385_;
v_isShared_389_ = v_isSharedCheck_394_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v___x_385_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_394_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_390_; lean_object* v___x_392_; 
v___x_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_390_, 0, v_a_384_);
lean_ctor_set(v___x_390_, 1, v_a_386_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 0, v___x_390_);
v___x_392_ = v___x_388_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v___x_390_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
lean_dec(v_a_384_);
v_a_395_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v___x_385_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_385_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
else
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_410_; 
lean_dec_ref(v___x_378_);
v_a_403_ = lean_ctor_get(v___x_383_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_410_ == 0)
{
v___x_405_ = v___x_383_;
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_383_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_a_403_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
}
else
{
lean_object* v_a_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_418_; 
lean_dec_ref(v___x_378_);
v_a_411_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_418_ == 0)
{
v___x_413_ = v___x_379_;
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_a_411_);
lean_dec(v___x_379_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v___x_416_; 
if (v_isShared_414_ == 0)
{
v___x_416_ = v___x_413_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_a_411_);
v___x_416_ = v_reuseFailAlloc_417_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
return v___x_416_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___boxed(lean_object* v_declNameNonRec_423_, lean_object* v___x_424_, lean_object* v___x_425_, lean_object* v___x_426_, lean_object* v_xs_427_, lean_object* v_body_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
uint8_t v___x_10751__boxed_434_; lean_object* v_res_435_; 
v___x_10751__boxed_434_ = lean_unbox(v___x_426_);
v_res_435_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1(v_declNameNonRec_423_, v___x_424_, v___x_425_, v___x_10751__boxed_434_, v_xs_427_, v_body_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_);
lean_dec(v___y_432_);
lean_dec_ref(v___y_431_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
lean_dec_ref(v_xs_427_);
return v_res_435_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_436_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__0);
v___x_438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_438_, 0, v___x_437_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg(){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__1);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___boxed(lean_object* v___dummy_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg();
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__2(lean_object* v_a_443_, lean_object* v_a_444_){
_start:
{
if (lean_obj_tag(v_a_443_) == 0)
{
lean_object* v___x_445_; 
v___x_445_ = l_List_reverse___redArg(v_a_444_);
return v___x_445_;
}
else
{
lean_object* v_head_446_; lean_object* v_tail_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_456_; 
v_head_446_ = lean_ctor_get(v_a_443_, 0);
v_tail_447_ = lean_ctor_get(v_a_443_, 1);
v_isSharedCheck_456_ = !lean_is_exclusive(v_a_443_);
if (v_isSharedCheck_456_ == 0)
{
v___x_449_ = v_a_443_;
v_isShared_450_ = v_isSharedCheck_456_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_tail_447_);
lean_inc(v_head_446_);
lean_dec(v_a_443_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_456_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_451_; lean_object* v___x_453_; 
v___x_451_ = l_Lean_mkLevelParam(v_head_446_);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 1, v_a_444_);
lean_ctor_set(v___x_449_, 0, v___x_451_);
v___x_453_ = v___x_449_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_451_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v_a_444_);
v___x_453_ = v_reuseFailAlloc_455_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
v_a_443_ = v_tail_447_;
v_a_444_ = v___x_453_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_457_; 
v___x_457_ = l_instMonadEIO___redArg();
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2(lean_object* v_msg_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v_toApplicative_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_531_; 
v___x_468_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__0, &l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__0_once, _init_l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__0);
v___x_469_ = l_StateRefT_x27_instMonad___redArg(v___x_468_);
v_toApplicative_470_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_531_ == 0)
{
lean_object* v_unused_532_; 
v_unused_532_ = lean_ctor_get(v___x_469_, 1);
lean_dec(v_unused_532_);
v___x_472_ = v___x_469_;
v_isShared_473_ = v_isSharedCheck_531_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_toApplicative_470_);
lean_dec(v___x_469_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_531_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v_toFunctor_474_; lean_object* v_toSeq_475_; lean_object* v_toSeqLeft_476_; lean_object* v_toSeqRight_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_529_; 
v_toFunctor_474_ = lean_ctor_get(v_toApplicative_470_, 0);
v_toSeq_475_ = lean_ctor_get(v_toApplicative_470_, 2);
v_toSeqLeft_476_ = lean_ctor_get(v_toApplicative_470_, 3);
v_toSeqRight_477_ = lean_ctor_get(v_toApplicative_470_, 4);
v_isSharedCheck_529_ = !lean_is_exclusive(v_toApplicative_470_);
if (v_isSharedCheck_529_ == 0)
{
lean_object* v_unused_530_; 
v_unused_530_ = lean_ctor_get(v_toApplicative_470_, 1);
lean_dec(v_unused_530_);
v___x_479_ = v_toApplicative_470_;
v_isShared_480_ = v_isSharedCheck_529_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_toSeqRight_477_);
lean_inc(v_toSeqLeft_476_);
lean_inc(v_toSeq_475_);
lean_inc(v_toFunctor_474_);
lean_dec(v_toApplicative_470_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_529_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___f_481_; lean_object* v___f_482_; lean_object* v___f_483_; lean_object* v___f_484_; lean_object* v___x_485_; lean_object* v___f_486_; lean_object* v___f_487_; lean_object* v___f_488_; lean_object* v___x_490_; 
v___f_481_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__1));
v___f_482_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__2));
lean_inc_ref(v_toFunctor_474_);
v___f_483_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_483_, 0, v_toFunctor_474_);
v___f_484_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_484_, 0, v_toFunctor_474_);
v___x_485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_485_, 0, v___f_483_);
lean_ctor_set(v___x_485_, 1, v___f_484_);
v___f_486_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_486_, 0, v_toSeqRight_477_);
v___f_487_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_487_, 0, v_toSeqLeft_476_);
v___f_488_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_488_, 0, v_toSeq_475_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 4, v___f_486_);
lean_ctor_set(v___x_479_, 3, v___f_487_);
lean_ctor_set(v___x_479_, 2, v___f_488_);
lean_ctor_set(v___x_479_, 1, v___f_481_);
lean_ctor_set(v___x_479_, 0, v___x_485_);
v___x_490_ = v___x_479_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___x_485_);
lean_ctor_set(v_reuseFailAlloc_528_, 1, v___f_481_);
lean_ctor_set(v_reuseFailAlloc_528_, 2, v___f_488_);
lean_ctor_set(v_reuseFailAlloc_528_, 3, v___f_487_);
lean_ctor_set(v_reuseFailAlloc_528_, 4, v___f_486_);
v___x_490_ = v_reuseFailAlloc_528_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
lean_object* v___x_492_; 
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 1, v___f_482_);
lean_ctor_set(v___x_472_, 0, v___x_490_);
v___x_492_ = v___x_472_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v___x_490_);
lean_ctor_set(v_reuseFailAlloc_527_, 1, v___f_482_);
v___x_492_ = v_reuseFailAlloc_527_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
lean_object* v___x_493_; lean_object* v_toApplicative_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_525_; 
v___x_493_ = l_StateRefT_x27_instMonad___redArg(v___x_492_);
v_toApplicative_494_ = lean_ctor_get(v___x_493_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_493_);
if (v_isSharedCheck_525_ == 0)
{
lean_object* v_unused_526_; 
v_unused_526_ = lean_ctor_get(v___x_493_, 1);
lean_dec(v_unused_526_);
v___x_496_ = v___x_493_;
v_isShared_497_ = v_isSharedCheck_525_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_toApplicative_494_);
lean_dec(v___x_493_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_525_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v_toFunctor_498_; lean_object* v_toSeq_499_; lean_object* v_toSeqLeft_500_; lean_object* v_toSeqRight_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_523_; 
v_toFunctor_498_ = lean_ctor_get(v_toApplicative_494_, 0);
v_toSeq_499_ = lean_ctor_get(v_toApplicative_494_, 2);
v_toSeqLeft_500_ = lean_ctor_get(v_toApplicative_494_, 3);
v_toSeqRight_501_ = lean_ctor_get(v_toApplicative_494_, 4);
v_isSharedCheck_523_ = !lean_is_exclusive(v_toApplicative_494_);
if (v_isSharedCheck_523_ == 0)
{
lean_object* v_unused_524_; 
v_unused_524_ = lean_ctor_get(v_toApplicative_494_, 1);
lean_dec(v_unused_524_);
v___x_503_ = v_toApplicative_494_;
v_isShared_504_ = v_isSharedCheck_523_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_toSeqRight_501_);
lean_inc(v_toSeqLeft_500_);
lean_inc(v_toSeq_499_);
lean_inc(v_toFunctor_498_);
lean_dec(v_toApplicative_494_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_523_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___f_505_; lean_object* v___f_506_; lean_object* v___f_507_; lean_object* v___f_508_; lean_object* v___x_509_; lean_object* v___f_510_; lean_object* v___f_511_; lean_object* v___f_512_; lean_object* v___x_514_; 
v___f_505_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__3));
v___f_506_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___closed__4));
lean_inc_ref(v_toFunctor_498_);
v___f_507_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_507_, 0, v_toFunctor_498_);
v___f_508_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_508_, 0, v_toFunctor_498_);
v___x_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_509_, 0, v___f_507_);
lean_ctor_set(v___x_509_, 1, v___f_508_);
v___f_510_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_510_, 0, v_toSeqRight_501_);
v___f_511_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_511_, 0, v_toSeqLeft_500_);
v___f_512_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_512_, 0, v_toSeq_499_);
if (v_isShared_504_ == 0)
{
lean_ctor_set(v___x_503_, 4, v___f_510_);
lean_ctor_set(v___x_503_, 3, v___f_511_);
lean_ctor_set(v___x_503_, 2, v___f_512_);
lean_ctor_set(v___x_503_, 1, v___f_505_);
lean_ctor_set(v___x_503_, 0, v___x_509_);
v___x_514_ = v___x_503_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v___x_509_);
lean_ctor_set(v_reuseFailAlloc_522_, 1, v___f_505_);
lean_ctor_set(v_reuseFailAlloc_522_, 2, v___f_512_);
lean_ctor_set(v_reuseFailAlloc_522_, 3, v___f_511_);
lean_ctor_set(v_reuseFailAlloc_522_, 4, v___f_510_);
v___x_514_ = v_reuseFailAlloc_522_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
lean_object* v___x_516_; 
if (v_isShared_497_ == 0)
{
lean_ctor_set(v___x_496_, 1, v___f_506_);
lean_ctor_set(v___x_496_, 0, v___x_514_);
v___x_516_ = v___x_496_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_521_, 1, v___f_506_);
v___x_516_ = v_reuseFailAlloc_521_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_9939__overap_519_; lean_object* v___x_520_; 
v___x_517_ = lean_box(0);
v___x_518_ = l_instInhabitedOfMonad___redArg(v___x_516_, v___x_517_);
v___x_9939__overap_519_ = lean_panic_fn_borrowed(v___x_518_, v_msg_462_);
lean_dec(v___x_518_);
lean_inc(v___y_466_);
lean_inc_ref(v___y_465_);
lean_inc(v___y_464_);
lean_inc_ref(v___y_463_);
v___x_520_ = lean_apply_5(v___x_9939__overap_519_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, lean_box(0));
return v___x_520_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2___boxed(lean_object* v_msg_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2(v_msg_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_);
lean_dec(v___y_537_);
lean_dec_ref(v___y_536_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
return v_res_539_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__1(void){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__0));
v___x_542_ = l_Lean_stringToMessageData(v___x_541_);
return v___x_542_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__3(void){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__2));
v___x_545_ = l_Lean_stringToMessageData(v___x_544_);
return v___x_545_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__7(void){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_549_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__6));
v___x_550_ = lean_unsigned_to_nat(11u);
v___x_551_ = lean_unsigned_to_nat(115u);
v___x_552_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__5));
v___x_553_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__4));
v___x_554_ = l_mkPanicMessageWithDecl(v___x_553_, v___x_552_, v___x_551_, v___x_550_, v___x_549_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1(lean_object* v_constName_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_){
_start:
{
lean_object* v___x_569_; lean_object* v_env_570_; uint8_t v___x_571_; lean_object* v___x_572_; 
v___x_569_ = lean_st_ref_get(v___y_559_);
v_env_570_ = lean_ctor_get(v___x_569_, 0);
lean_inc_ref(v_env_570_);
lean_dec(v___x_569_);
v___x_571_ = 0;
lean_inc(v_constName_555_);
v___x_572_ = l_Lean_Environment_findAsync_x3f(v_env_570_, v_constName_555_, v___x_571_);
if (lean_obj_tag(v___x_572_) == 1)
{
lean_object* v_val_573_; uint8_t v_kind_574_; 
v_val_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_val_573_);
lean_dec_ref_known(v___x_572_, 1);
v_kind_574_ = lean_ctor_get_uint8(v_val_573_, sizeof(void*)*3);
if (v_kind_574_ == 0)
{
lean_object* v___x_575_; 
v___x_575_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_573_);
if (lean_obj_tag(v___x_575_) == 1)
{
lean_object* v_val_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_583_; 
lean_dec(v_constName_555_);
v_val_576_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_583_ == 0)
{
v___x_578_ = v___x_575_;
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_val_576_);
lean_dec(v___x_575_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
lean_ctor_set_tag(v___x_578_, 0);
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_val_576_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
else
{
lean_object* v___x_584_; lean_object* v___x_585_; 
lean_dec_ref(v___x_575_);
v___x_584_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__7, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__7_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__7);
v___x_585_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1_spec__2(v___x_584_, v___y_556_, v___y_557_, v___y_558_, v___y_559_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_594_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_594_ == 0)
{
v___x_588_ = v___x_585_;
v_isShared_589_ = v_isSharedCheck_594_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_585_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_594_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
if (lean_obj_tag(v_a_586_) == 0)
{
lean_del_object(v___x_588_);
goto v___jp_561_;
}
else
{
lean_object* v_val_590_; lean_object* v___x_592_; 
lean_dec(v_constName_555_);
v_val_590_ = lean_ctor_get(v_a_586_, 0);
lean_inc(v_val_590_);
lean_dec_ref_known(v_a_586_, 1);
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 0, v_val_590_);
v___x_592_ = v___x_588_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_val_590_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
}
else
{
lean_object* v_a_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_602_; 
lean_dec(v_constName_555_);
v_a_595_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_602_ == 0)
{
v___x_597_ = v___x_585_;
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_a_595_);
lean_dec(v___x_585_);
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
}
else
{
lean_dec(v_val_573_);
goto v___jp_561_;
}
}
else
{
lean_dec(v___x_572_);
goto v___jp_561_;
}
v___jp_561_:
{
lean_object* v___x_562_; uint8_t v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_562_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__1);
v___x_563_ = 0;
v___x_564_ = l_Lean_MessageData_ofConstName(v_constName_555_, v___x_563_);
v___x_565_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_565_, 0, v___x_562_);
lean_ctor_set(v___x_565_, 1, v___x_564_);
v___x_566_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__3, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__3_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__3);
v___x_567_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_565_);
lean_ctor_set(v___x_567_, 1, v___x_566_);
v___x_568_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0___redArg(v___x_567_, v___y_556_, v___y_557_, v___y_558_, v___y_559_);
return v___x_568_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___boxed(lean_object* v_constName_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1(v_constName_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_);
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
return v_res_609_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg___closed__0);
v___x_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
return v___x_613_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2);
v___x_615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
lean_ctor_set(v___x_615_, 1, v___x_614_);
return v___x_615_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4(void){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6___redArg();
return v___x_616_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__5(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2);
v___x_618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
lean_ctor_set(v___x_618_, 1, v___x_617_);
return v___x_618_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__6(void){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_619_ = lean_unsigned_to_nat(0u);
v___x_620_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2);
v___x_621_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
lean_ctor_set(v___x_621_, 2, v___x_619_);
return v___x_621_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__7(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_622_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__6, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__6);
v___x_623_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__5, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__5);
v___x_624_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__2);
v___x_625_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4);
v___x_626_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v___x_624_);
lean_ctor_set(v___x_626_, 2, v___x_623_);
lean_ctor_set(v___x_626_, 3, v___x_624_);
lean_ctor_set(v___x_626_, 4, v___x_624_);
lean_ctor_set(v___x_626_, 5, v___x_624_);
lean_ctor_set(v___x_626_, 6, v___x_624_);
lean_ctor_set(v___x_626_, 7, v___x_622_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2(lean_object* v_declNameNonRec_627_, lean_object* v___f_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
lean_object* v___x_634_; lean_object* v_env_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v_env_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_634_ = lean_st_ref_get(v___y_632_);
v_env_635_ = lean_ctor_get(v___x_634_, 0);
lean_inc_ref(v_env_635_);
lean_dec(v___x_634_);
v___x_636_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__0));
lean_inc_n(v_declNameNonRec_627_, 3);
v___x_637_ = l_Lean_Meta_mkEqLikeNameFor(v_env_635_, v_declNameNonRec_627_, v___x_636_);
v___x_638_ = lean_st_ref_get(v___y_632_);
v_env_639_ = lean_ctor_get(v___x_638_, 0);
lean_inc_ref(v_env_639_);
lean_dec(v___x_638_);
v___x_640_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__1));
v___x_641_ = l_Lean_Meta_mkEqLikeNameFor(v_env_639_, v_declNameNonRec_627_, v___x_640_);
v___x_642_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1(v_declNameNonRec_627_, v___y_629_, v___y_630_, v___y_631_, v___y_632_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v_toConstantVal_644_; lean_object* v_value_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_774_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
lean_inc(v_a_643_);
lean_dec_ref_known(v___x_642_, 1);
v_toConstantVal_644_ = lean_ctor_get(v_a_643_, 0);
v_value_645_ = lean_ctor_get(v_a_643_, 1);
v_isSharedCheck_774_ = !lean_is_exclusive(v_a_643_);
if (v_isSharedCheck_774_ == 0)
{
lean_object* v_unused_775_; lean_object* v_unused_776_; 
v_unused_775_ = lean_ctor_get(v_a_643_, 3);
lean_dec(v_unused_775_);
v_unused_776_ = lean_ctor_get(v_a_643_, 2);
lean_dec(v_unused_776_);
v___x_647_ = v_a_643_;
v_isShared_648_ = v_isSharedCheck_774_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_value_645_);
lean_inc(v_toConstantVal_644_);
lean_dec(v_a_643_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_774_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v_levelParams_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_771_; 
v_levelParams_649_ = lean_ctor_get(v_toConstantVal_644_, 1);
v_isSharedCheck_771_ = !lean_is_exclusive(v_toConstantVal_644_);
if (v_isSharedCheck_771_ == 0)
{
lean_object* v_unused_772_; lean_object* v_unused_773_; 
v_unused_772_ = lean_ctor_get(v_toConstantVal_644_, 2);
lean_dec(v_unused_772_);
v_unused_773_ = lean_ctor_get(v_toConstantVal_644_, 0);
lean_dec(v_unused_773_);
v___x_651_ = v_toConstantVal_644_;
v_isShared_652_ = v_isSharedCheck_771_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_levelParams_649_);
lean_dec(v_toConstantVal_644_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_771_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_653_; lean_object* v___x_654_; uint8_t v___x_655_; lean_object* v___x_656_; lean_object* v___f_657_; lean_object* v___x_658_; 
v___x_653_ = lean_box(0);
lean_inc(v_levelParams_649_);
v___x_654_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__2(v_levelParams_649_, v___x_653_);
v___x_655_ = 0;
v___x_656_ = lean_box(v___x_655_);
lean_inc(v___x_641_);
v___f_657_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___boxed), 11, 4);
lean_closure_set(v___f_657_, 0, v_declNameNonRec_627_);
lean_closure_set(v___f_657_, 1, v___x_654_);
lean_closure_set(v___f_657_, 2, v___x_641_);
lean_closure_set(v___f_657_, 3, v___x_656_);
lean_inc_ref(v_value_645_);
v___x_658_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg(v_value_645_, v___f_628_, v___x_655_, v___y_629_, v___y_630_, v___y_631_, v___y_632_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; lean_object* v_fst_660_; lean_object* v_snd_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_762_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc(v_a_659_);
lean_dec_ref_known(v___x_658_, 1);
v_fst_660_ = lean_ctor_get(v_a_659_, 0);
v_snd_661_ = lean_ctor_get(v_a_659_, 1);
v_isSharedCheck_762_ = !lean_is_exclusive(v_a_659_);
if (v_isSharedCheck_762_ == 0)
{
v___x_663_ = v_a_659_;
v_isShared_664_ = v_isSharedCheck_762_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_snd_661_);
lean_inc(v_fst_660_);
lean_dec(v_a_659_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_762_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_666_; 
lean_inc(v_levelParams_649_);
lean_inc(v___x_641_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 2, v_fst_660_);
lean_ctor_set(v___x_651_, 0, v___x_641_);
v___x_666_ = v___x_651_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v___x_641_);
lean_ctor_set(v_reuseFailAlloc_761_, 1, v_levelParams_649_);
lean_ctor_set(v_reuseFailAlloc_761_, 2, v_fst_660_);
v___x_666_ = v_reuseFailAlloc_761_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
lean_object* v___x_667_; uint8_t v___x_668_; lean_object* v___x_670_; 
v___x_667_ = lean_box(1);
v___x_668_ = 1;
lean_inc(v___x_641_);
if (v_isShared_664_ == 0)
{
lean_ctor_set_tag(v___x_663_, 1);
lean_ctor_set(v___x_663_, 1, v___x_653_);
lean_ctor_set(v___x_663_, 0, v___x_641_);
v___x_670_ = v___x_663_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_641_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v___x_653_);
v___x_670_ = v_reuseFailAlloc_760_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
lean_object* v___x_672_; 
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 3, v___x_670_);
lean_ctor_set(v___x_647_, 2, v___x_667_);
lean_ctor_set(v___x_647_, 1, v_snd_661_);
lean_ctor_set(v___x_647_, 0, v___x_666_);
v___x_672_ = v___x_647_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_759_, 1, v_snd_661_);
lean_ctor_set(v_reuseFailAlloc_759_, 2, v___x_667_);
lean_ctor_set(v_reuseFailAlloc_759_, 3, v___x_670_);
v___x_672_ = v_reuseFailAlloc_759_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
lean_ctor_set_uint8(v___x_672_, sizeof(void*)*4, v___x_668_);
v___x_673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
v___x_674_ = l_Lean_addDecl(v___x_673_, v___x_655_, v___y_631_, v___y_632_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v___x_675_; lean_object* v_env_676_; lean_object* v_nextMacroScope_677_; lean_object* v_ngen_678_; lean_object* v_auxDeclNGen_679_; lean_object* v_traceState_680_; lean_object* v_recordedDeps_681_; lean_object* v_messages_682_; lean_object* v_infoState_683_; lean_object* v_snapshotTasks_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_749_; 
lean_dec_ref_known(v___x_674_, 1);
v___x_675_ = lean_st_ref_take(v___y_632_);
v_env_676_ = lean_ctor_get(v___x_675_, 0);
v_nextMacroScope_677_ = lean_ctor_get(v___x_675_, 1);
v_ngen_678_ = lean_ctor_get(v___x_675_, 2);
v_auxDeclNGen_679_ = lean_ctor_get(v___x_675_, 3);
v_traceState_680_ = lean_ctor_get(v___x_675_, 4);
v_recordedDeps_681_ = lean_ctor_get(v___x_675_, 6);
v_messages_682_ = lean_ctor_get(v___x_675_, 7);
v_infoState_683_ = lean_ctor_get(v___x_675_, 8);
v_snapshotTasks_684_ = lean_ctor_get(v___x_675_, 9);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_675_);
if (v_isSharedCheck_749_ == 0)
{
lean_object* v_unused_750_; 
v_unused_750_ = lean_ctor_get(v___x_675_, 5);
lean_dec(v_unused_750_);
v___x_686_ = v___x_675_;
v_isShared_687_ = v_isSharedCheck_749_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_snapshotTasks_684_);
lean_inc(v_infoState_683_);
lean_inc(v_messages_682_);
lean_inc(v_recordedDeps_681_);
lean_inc(v_traceState_680_);
lean_inc(v_auxDeclNGen_679_);
lean_inc(v_ngen_678_);
lean_inc(v_nextMacroScope_677_);
lean_inc(v_env_676_);
lean_dec(v___x_675_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_749_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_688_ = l_Lean_addNoncomputable(v_env_676_, v___x_641_);
v___x_689_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 5, v___x_689_);
lean_ctor_set(v___x_686_, 0, v___x_688_);
v___x_691_ = v___x_686_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v___x_688_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_nextMacroScope_677_);
lean_ctor_set(v_reuseFailAlloc_748_, 2, v_ngen_678_);
lean_ctor_set(v_reuseFailAlloc_748_, 3, v_auxDeclNGen_679_);
lean_ctor_set(v_reuseFailAlloc_748_, 4, v_traceState_680_);
lean_ctor_set(v_reuseFailAlloc_748_, 5, v___x_689_);
lean_ctor_set(v_reuseFailAlloc_748_, 6, v_recordedDeps_681_);
lean_ctor_set(v_reuseFailAlloc_748_, 7, v_messages_682_);
lean_ctor_set(v_reuseFailAlloc_748_, 8, v_infoState_683_);
lean_ctor_set(v_reuseFailAlloc_748_, 9, v_snapshotTasks_684_);
v___x_691_ = v_reuseFailAlloc_748_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v_mctx_694_; lean_object* v_zetaDeltaFVarIds_695_; lean_object* v_postponed_696_; lean_object* v_diag_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_746_; 
v___x_692_ = lean_st_ref_put(v___y_632_, v___x_691_);
v___x_693_ = lean_st_ref_take(v___y_630_);
v_mctx_694_ = lean_ctor_get(v___x_693_, 0);
v_zetaDeltaFVarIds_695_ = lean_ctor_get(v___x_693_, 2);
v_postponed_696_ = lean_ctor_get(v___x_693_, 3);
v_diag_697_ = lean_ctor_get(v___x_693_, 4);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_746_ == 0)
{
lean_object* v_unused_747_; 
v_unused_747_ = lean_ctor_get(v___x_693_, 1);
lean_dec(v_unused_747_);
v___x_699_ = v___x_693_;
v_isShared_700_ = v_isSharedCheck_746_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_diag_697_);
lean_inc(v_postponed_696_);
lean_inc(v_zetaDeltaFVarIds_695_);
lean_inc(v_mctx_694_);
lean_dec(v___x_693_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_746_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_701_; lean_object* v___x_703_; 
v___x_701_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__7, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__7);
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 1, v___x_701_);
v___x_703_ = v___x_699_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_mctx_694_);
lean_ctor_set(v_reuseFailAlloc_745_, 1, v___x_701_);
lean_ctor_set(v_reuseFailAlloc_745_, 2, v_zetaDeltaFVarIds_695_);
lean_ctor_set(v_reuseFailAlloc_745_, 3, v_postponed_696_);
lean_ctor_set(v_reuseFailAlloc_745_, 4, v_diag_697_);
v___x_703_ = v_reuseFailAlloc_745_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = lean_st_ref_put(v___y_630_, v___x_703_);
v___x_705_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg(v_value_645_, v___f_657_, v___x_655_, v___y_629_, v___y_630_, v___y_631_, v___y_632_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; lean_object* v_fst_707_; lean_object* v_snd_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_736_; 
v_a_706_ = lean_ctor_get(v___x_705_, 0);
lean_inc(v_a_706_);
lean_dec_ref_known(v___x_705_, 1);
v_fst_707_ = lean_ctor_get(v_a_706_, 0);
v_snd_708_ = lean_ctor_get(v_a_706_, 1);
v_isSharedCheck_736_ = !lean_is_exclusive(v_a_706_);
if (v_isSharedCheck_736_ == 0)
{
v___x_710_ = v_a_706_;
v_isShared_711_ = v_isSharedCheck_736_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_snd_708_);
lean_inc(v_fst_707_);
lean_dec(v_a_706_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_736_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_712_; lean_object* v___x_714_; 
lean_inc_n(v___x_637_, 2);
v___x_712_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_712_, 0, v___x_637_);
lean_ctor_set(v___x_712_, 1, v_levelParams_649_);
lean_ctor_set(v___x_712_, 2, v_fst_707_);
if (v_isShared_711_ == 0)
{
lean_ctor_set_tag(v___x_710_, 1);
lean_ctor_set(v___x_710_, 1, v___x_653_);
lean_ctor_set(v___x_710_, 0, v___x_637_);
v___x_714_ = v___x_710_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v___x_637_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v___x_653_);
v___x_714_ = v_reuseFailAlloc_735_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v_a_717_; lean_object* v___x_718_; 
v___x_715_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_715_, 0, v___x_712_);
lean_ctor_set(v___x_715_, 1, v_snd_708_);
lean_ctor_set(v___x_715_, 2, v___x_714_);
v___x_716_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__5___redArg(v___x_715_, v___y_632_);
v_a_717_ = lean_ctor_get(v___x_716_, 0);
lean_inc(v_a_717_);
lean_dec_ref(v___x_716_);
v___x_718_ = l_Lean_addDecl(v_a_717_, v___x_655_, v___y_631_, v___y_632_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_725_ == 0)
{
lean_object* v_unused_726_; 
v_unused_726_ = lean_ctor_get(v___x_718_, 0);
lean_dec(v_unused_726_);
v___x_720_ = v___x_718_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_dec(v___x_718_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
lean_ctor_set(v___x_720_, 0, v___x_637_);
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_637_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
else
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
lean_dec(v___x_637_);
v_a_727_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v___x_718_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_718_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_727_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
}
}
else
{
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_744_; 
lean_dec(v_levelParams_649_);
lean_dec(v___x_637_);
v_a_737_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_744_ == 0)
{
v___x_739_ = v___x_705_;
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v___x_705_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_742_; 
if (v_isShared_740_ == 0)
{
v___x_742_ = v___x_739_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_a_737_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
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
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_dec_ref(v___f_657_);
lean_dec(v_levelParams_649_);
lean_dec_ref(v_value_645_);
lean_dec(v___x_641_);
lean_dec(v___x_637_);
v_a_751_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_674_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_674_);
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
}
}
}
else
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_770_; 
lean_dec_ref(v___f_657_);
lean_del_object(v___x_651_);
lean_dec(v_levelParams_649_);
lean_del_object(v___x_647_);
lean_dec_ref(v_value_645_);
lean_dec(v___x_641_);
lean_dec(v___x_637_);
v_a_763_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_770_ == 0)
{
v___x_765_ = v___x_658_;
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_658_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_a_763_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
lean_dec(v___x_641_);
lean_dec(v___x_637_);
lean_dec_ref(v___f_628_);
lean_dec(v_declNameNonRec_627_);
v_a_777_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_642_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_642_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_777_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___boxed(lean_object* v_declNameNonRec_785_, lean_object* v___f_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2(v_declNameNonRec_785_, v___f_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
lean_dec(v___y_790_);
lean_dec_ref(v___y_789_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___redArg___lam__0(lean_object* v___y_793_, uint8_t v_isExporting_794_, lean_object* v___x_795_, lean_object* v___y_796_, lean_object* v___x_797_, lean_object* v_a_x3f_798_){
_start:
{
lean_object* v___x_800_; lean_object* v_env_801_; lean_object* v_nextMacroScope_802_; lean_object* v_ngen_803_; lean_object* v_auxDeclNGen_804_; lean_object* v_traceState_805_; lean_object* v_recordedDeps_806_; lean_object* v_messages_807_; lean_object* v_infoState_808_; lean_object* v_snapshotTasks_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_834_; 
v___x_800_ = lean_st_ref_take(v___y_793_);
v_env_801_ = lean_ctor_get(v___x_800_, 0);
v_nextMacroScope_802_ = lean_ctor_get(v___x_800_, 1);
v_ngen_803_ = lean_ctor_get(v___x_800_, 2);
v_auxDeclNGen_804_ = lean_ctor_get(v___x_800_, 3);
v_traceState_805_ = lean_ctor_get(v___x_800_, 4);
v_recordedDeps_806_ = lean_ctor_get(v___x_800_, 6);
v_messages_807_ = lean_ctor_get(v___x_800_, 7);
v_infoState_808_ = lean_ctor_get(v___x_800_, 8);
v_snapshotTasks_809_ = lean_ctor_get(v___x_800_, 9);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_834_ == 0)
{
lean_object* v_unused_835_; 
v_unused_835_ = lean_ctor_get(v___x_800_, 5);
lean_dec(v_unused_835_);
v___x_811_ = v___x_800_;
v_isShared_812_ = v_isSharedCheck_834_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_snapshotTasks_809_);
lean_inc(v_infoState_808_);
lean_inc(v_messages_807_);
lean_inc(v_recordedDeps_806_);
lean_inc(v_traceState_805_);
lean_inc(v_auxDeclNGen_804_);
lean_inc(v_ngen_803_);
lean_inc(v_nextMacroScope_802_);
lean_inc(v_env_801_);
lean_dec(v___x_800_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_834_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_813_; lean_object* v___x_815_; 
v___x_813_ = l_Lean_Environment_setExporting(v_env_801_, v_isExporting_794_);
if (v_isShared_812_ == 0)
{
lean_ctor_set(v___x_811_, 5, v___x_795_);
lean_ctor_set(v___x_811_, 0, v___x_813_);
v___x_815_ = v___x_811_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_813_);
lean_ctor_set(v_reuseFailAlloc_833_, 1, v_nextMacroScope_802_);
lean_ctor_set(v_reuseFailAlloc_833_, 2, v_ngen_803_);
lean_ctor_set(v_reuseFailAlloc_833_, 3, v_auxDeclNGen_804_);
lean_ctor_set(v_reuseFailAlloc_833_, 4, v_traceState_805_);
lean_ctor_set(v_reuseFailAlloc_833_, 5, v___x_795_);
lean_ctor_set(v_reuseFailAlloc_833_, 6, v_recordedDeps_806_);
lean_ctor_set(v_reuseFailAlloc_833_, 7, v_messages_807_);
lean_ctor_set(v_reuseFailAlloc_833_, 8, v_infoState_808_);
lean_ctor_set(v_reuseFailAlloc_833_, 9, v_snapshotTasks_809_);
v___x_815_ = v_reuseFailAlloc_833_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v_mctx_818_; lean_object* v_zetaDeltaFVarIds_819_; lean_object* v_postponed_820_; lean_object* v_diag_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_831_; 
v___x_816_ = lean_st_ref_put(v___y_793_, v___x_815_);
v___x_817_ = lean_st_ref_take(v___y_796_);
v_mctx_818_ = lean_ctor_get(v___x_817_, 0);
v_zetaDeltaFVarIds_819_ = lean_ctor_get(v___x_817_, 2);
v_postponed_820_ = lean_ctor_get(v___x_817_, 3);
v_diag_821_ = lean_ctor_get(v___x_817_, 4);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_831_ == 0)
{
lean_object* v_unused_832_; 
v_unused_832_ = lean_ctor_get(v___x_817_, 1);
lean_dec(v_unused_832_);
v___x_823_ = v___x_817_;
v_isShared_824_ = v_isSharedCheck_831_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_diag_821_);
lean_inc(v_postponed_820_);
lean_inc(v_zetaDeltaFVarIds_819_);
lean_inc(v_mctx_818_);
lean_dec(v___x_817_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_831_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_825_; lean_object* v___x_827_; 
v___x_825_ = lean_box(0);
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 1, v___x_797_);
v___x_827_ = v___x_823_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_mctx_818_);
lean_ctor_set(v_reuseFailAlloc_830_, 1, v___x_797_);
lean_ctor_set(v_reuseFailAlloc_830_, 2, v_zetaDeltaFVarIds_819_);
lean_ctor_set(v_reuseFailAlloc_830_, 3, v_postponed_820_);
lean_ctor_set(v_reuseFailAlloc_830_, 4, v_diag_821_);
v___x_827_ = v_reuseFailAlloc_830_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_828_ = lean_st_ref_put(v___y_796_, v___x_827_);
v___x_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_829_, 0, v___x_825_);
return v___x_829_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___redArg___lam__0___boxed(lean_object* v___y_836_, lean_object* v_isExporting_837_, lean_object* v___x_838_, lean_object* v___y_839_, lean_object* v___x_840_, lean_object* v_a_x3f_841_, lean_object* v___y_842_){
_start:
{
uint8_t v_isExporting_boxed_843_; lean_object* v_res_844_; 
v_isExporting_boxed_843_ = lean_unbox(v_isExporting_837_);
v_res_844_ = l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___redArg___lam__0(v___y_836_, v_isExporting_boxed_843_, v___x_838_, v___y_839_, v___x_840_, v_a_x3f_841_);
lean_dec(v_a_x3f_841_);
lean_dec(v___y_839_);
lean_dec(v___y_836_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___redArg(lean_object* v_x_845_, uint8_t v_isExporting_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
lean_object* v___x_852_; lean_object* v_env_853_; lean_object* v___x_854_; uint8_t v_isModule_855_; 
v___x_852_ = lean_st_ref_get(v___y_850_);
v_env_853_ = lean_ctor_get(v___x_852_, 0);
lean_inc_ref(v_env_853_);
lean_dec(v___x_852_);
v___x_854_ = l_Lean_Environment_header(v_env_853_);
v_isModule_855_ = lean_ctor_get_uint8(v___x_854_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_854_);
if (v_isModule_855_ == 0)
{
lean_object* v___x_856_; 
lean_dec_ref(v_env_853_);
lean_inc(v___y_850_);
lean_inc_ref(v___y_849_);
lean_inc(v___y_848_);
lean_inc_ref(v___y_847_);
v___x_856_ = lean_apply_5(v_x_845_, v___y_847_, v___y_848_, v___y_849_, v___y_850_, lean_box(0));
return v___x_856_;
}
else
{
uint8_t v_isExporting_857_; 
v_isExporting_857_ = lean_ctor_get_uint8(v_env_853_, sizeof(void*)*13);
lean_dec_ref(v_env_853_);
if (v_isExporting_846_ == 0)
{
if (v_isExporting_857_ == 0)
{
lean_object* v___x_924_; 
lean_inc(v___y_850_);
lean_inc_ref(v___y_849_);
lean_inc(v___y_848_);
lean_inc_ref(v___y_847_);
v___x_924_ = lean_apply_5(v_x_845_, v___y_847_, v___y_848_, v___y_849_, v___y_850_, lean_box(0));
return v___x_924_;
}
else
{
goto v___jp_858_;
}
}
else
{
if (v_isExporting_857_ == 0)
{
goto v___jp_858_;
}
else
{
lean_object* v___x_925_; 
lean_inc(v___y_850_);
lean_inc_ref(v___y_849_);
lean_inc(v___y_848_);
lean_inc_ref(v___y_847_);
v___x_925_ = lean_apply_5(v_x_845_, v___y_847_, v___y_848_, v___y_849_, v___y_850_, lean_box(0));
return v___x_925_;
}
}
v___jp_858_:
{
lean_object* v___x_859_; lean_object* v_env_860_; lean_object* v_nextMacroScope_861_; lean_object* v_ngen_862_; lean_object* v_auxDeclNGen_863_; lean_object* v_traceState_864_; lean_object* v_recordedDeps_865_; lean_object* v_messages_866_; lean_object* v_infoState_867_; lean_object* v_snapshotTasks_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_922_; 
v___x_859_ = lean_st_ref_take(v___y_850_);
v_env_860_ = lean_ctor_get(v___x_859_, 0);
v_nextMacroScope_861_ = lean_ctor_get(v___x_859_, 1);
v_ngen_862_ = lean_ctor_get(v___x_859_, 2);
v_auxDeclNGen_863_ = lean_ctor_get(v___x_859_, 3);
v_traceState_864_ = lean_ctor_get(v___x_859_, 4);
v_recordedDeps_865_ = lean_ctor_get(v___x_859_, 6);
v_messages_866_ = lean_ctor_get(v___x_859_, 7);
v_infoState_867_ = lean_ctor_get(v___x_859_, 8);
v_snapshotTasks_868_ = lean_ctor_get(v___x_859_, 9);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_922_ == 0)
{
lean_object* v_unused_923_; 
v_unused_923_ = lean_ctor_get(v___x_859_, 5);
lean_dec(v_unused_923_);
v___x_870_ = v___x_859_;
v_isShared_871_ = v_isSharedCheck_922_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_snapshotTasks_868_);
lean_inc(v_infoState_867_);
lean_inc(v_messages_866_);
lean_inc(v_recordedDeps_865_);
lean_inc(v_traceState_864_);
lean_inc(v_auxDeclNGen_863_);
lean_inc(v_ngen_862_);
lean_inc(v_nextMacroScope_861_);
lean_inc(v_env_860_);
lean_dec(v___x_859_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_922_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_875_; 
v___x_872_ = l_Lean_Environment_setExporting(v_env_860_, v_isExporting_846_);
v___x_873_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 5, v___x_873_);
lean_ctor_set(v___x_870_, 0, v___x_872_);
v___x_875_ = v___x_870_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v___x_872_);
lean_ctor_set(v_reuseFailAlloc_921_, 1, v_nextMacroScope_861_);
lean_ctor_set(v_reuseFailAlloc_921_, 2, v_ngen_862_);
lean_ctor_set(v_reuseFailAlloc_921_, 3, v_auxDeclNGen_863_);
lean_ctor_set(v_reuseFailAlloc_921_, 4, v_traceState_864_);
lean_ctor_set(v_reuseFailAlloc_921_, 5, v___x_873_);
lean_ctor_set(v_reuseFailAlloc_921_, 6, v_recordedDeps_865_);
lean_ctor_set(v_reuseFailAlloc_921_, 7, v_messages_866_);
lean_ctor_set(v_reuseFailAlloc_921_, 8, v_infoState_867_);
lean_ctor_set(v_reuseFailAlloc_921_, 9, v_snapshotTasks_868_);
v___x_875_ = v_reuseFailAlloc_921_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v_mctx_878_; lean_object* v_zetaDeltaFVarIds_879_; lean_object* v_postponed_880_; lean_object* v_diag_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_919_; 
v___x_876_ = lean_st_ref_put(v___y_850_, v___x_875_);
v___x_877_ = lean_st_ref_take(v___y_848_);
v_mctx_878_ = lean_ctor_get(v___x_877_, 0);
v_zetaDeltaFVarIds_879_ = lean_ctor_get(v___x_877_, 2);
v_postponed_880_ = lean_ctor_get(v___x_877_, 3);
v_diag_881_ = lean_ctor_get(v___x_877_, 4);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_919_ == 0)
{
lean_object* v_unused_920_; 
v_unused_920_ = lean_ctor_get(v___x_877_, 1);
lean_dec(v_unused_920_);
v___x_883_ = v___x_877_;
v_isShared_884_ = v_isSharedCheck_919_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_diag_881_);
lean_inc(v_postponed_880_);
lean_inc(v_zetaDeltaFVarIds_879_);
lean_inc(v_mctx_878_);
lean_dec(v___x_877_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_919_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_885_; lean_object* v___x_887_; 
v___x_885_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__7, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__7);
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 1, v___x_885_);
v___x_887_ = v___x_883_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_mctx_878_);
lean_ctor_set(v_reuseFailAlloc_918_, 1, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_918_, 2, v_zetaDeltaFVarIds_879_);
lean_ctor_set(v_reuseFailAlloc_918_, 3, v_postponed_880_);
lean_ctor_set(v_reuseFailAlloc_918_, 4, v_diag_881_);
v___x_887_ = v_reuseFailAlloc_918_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
lean_object* v___x_888_; lean_object* v_r_889_; 
v___x_888_ = lean_st_ref_put(v___y_848_, v___x_887_);
lean_inc(v___y_850_);
lean_inc_ref(v___y_849_);
lean_inc(v___y_848_);
lean_inc_ref(v___y_847_);
v_r_889_ = lean_apply_5(v_x_845_, v___y_847_, v___y_848_, v___y_849_, v___y_850_, lean_box(0));
if (lean_obj_tag(v_r_889_) == 0)
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_906_; 
v_a_890_ = lean_ctor_get(v_r_889_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v_r_889_);
if (v_isSharedCheck_906_ == 0)
{
v___x_892_ = v_r_889_;
v_isShared_893_ = v_isSharedCheck_906_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v_r_889_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_906_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
lean_inc(v_a_890_);
if (v_isShared_893_ == 0)
{
lean_ctor_set_tag(v___x_892_, 1);
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_890_);
v___x_895_ = v_reuseFailAlloc_905_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
lean_object* v___x_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_903_; 
v___x_896_ = l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___redArg___lam__0(v___y_850_, v_isExporting_857_, v___x_873_, v___y_848_, v___x_885_, v___x_895_);
lean_dec_ref(v___x_895_);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_903_ == 0)
{
lean_object* v_unused_904_; 
v_unused_904_ = lean_ctor_get(v___x_896_, 0);
lean_dec(v_unused_904_);
v___x_898_ = v___x_896_;
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
else
{
lean_dec(v___x_896_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
lean_ctor_set(v___x_898_, 0, v_a_890_);
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_a_890_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
v_a_907_ = lean_ctor_get(v_r_889_, 0);
lean_inc(v_a_907_);
lean_dec_ref_known(v_r_889_, 1);
v___x_908_ = lean_box(0);
v___x_909_ = l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___redArg___lam__0(v___y_850_, v_isExporting_857_, v___x_873_, v___y_848_, v___x_885_, v___x_908_);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_916_ == 0)
{
lean_object* v_unused_917_; 
v_unused_917_ = lean_ctor_get(v___x_909_, 0);
lean_dec(v_unused_917_);
v___x_911_ = v___x_909_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_dec(v___x_909_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
lean_ctor_set_tag(v___x_911_, 1);
lean_ctor_set(v___x_911_, 0, v_a_907_);
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_907_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___redArg___boxed(lean_object* v_x_926_, lean_object* v_isExporting_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_){
_start:
{
uint8_t v_isExporting_boxed_933_; lean_object* v_res_934_; 
v_isExporting_boxed_933_ = lean_unbox(v_isExporting_927_);
v_res_934_ = l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___redArg(v_x_926_, v_isExporting_boxed_933_, v___y_928_, v___y_929_, v___y_930_, v___y_931_);
lean_dec(v___y_931_);
lean_dec_ref(v___y_930_);
lean_dec(v___y_929_);
lean_dec_ref(v___y_928_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq(lean_object* v_declNameNonRec_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_){
_start:
{
lean_object* v___f_941_; lean_object* v___f_942_; lean_object* v___x_943_; lean_object* v_env_944_; uint8_t v___x_945_; lean_object* v___x_946_; 
lean_inc_n(v_declNameNonRec_935_, 2);
v___f_941_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___boxed), 8, 1);
lean_closure_set(v___f_941_, 0, v_declNameNonRec_935_);
v___f_942_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___boxed), 7, 2);
lean_closure_set(v___f_942_, 0, v_declNameNonRec_935_);
lean_closure_set(v___f_942_, 1, v___f_941_);
v___x_943_ = lean_st_ref_get(v_a_939_);
v_env_944_ = lean_ctor_get(v___x_943_, 0);
lean_inc_ref(v_env_944_);
lean_dec(v___x_943_);
v___x_945_ = l_Lean_Environment_hasExposedBody(v_env_944_, v_declNameNonRec_935_);
v___x_946_ = l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___redArg(v___f_942_, v___x_945_, v_a_936_, v_a_937_, v_a_938_, v_a_939_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___boxed(lean_object* v_declNameNonRec_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq(v_declNameNonRec_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_);
lean_dec(v_a_951_);
lean_dec_ref(v_a_950_);
lean_dec(v_a_949_);
lean_dec_ref(v_a_948_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0(lean_object* v_00_u03b1_954_, lean_object* v_msg_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
lean_object* v___x_961_; 
v___x_961_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0___redArg(v_msg_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0___boxed(lean_object* v_00_u03b1_962_, lean_object* v_msg_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0(v_00_u03b1_962_, v_msg_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_);
lean_dec(v___y_967_);
lean_dec_ref(v___y_966_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4_spec__6(lean_object* v_00_u03b2_970_){
_start:
{
lean_object* v___x_971_; 
v___x_971_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4___redArg(){
_start:
{
lean_object* v___x_973_; 
v___x_973_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4___redArg___boxed(lean_object* v___dummy_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4___redArg();
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__4(lean_object* v_00_u03b2_976_){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__4);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6(lean_object* v_00_u03b1_978_, lean_object* v_x_979_, uint8_t v_isExporting_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___redArg(v_x_979_, v_isExporting_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6___boxed(lean_object* v_00_u03b1_987_, lean_object* v_x_988_, lean_object* v_isExporting_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_){
_start:
{
uint8_t v_isExporting_boxed_995_; lean_object* v_res_996_; 
v_isExporting_boxed_995_ = lean_unbox(v_isExporting_989_);
v_res_996_ = l_Lean_withExporting___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__6(v_00_u03b1_987_, v_x_988_, v_isExporting_boxed_995_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
lean_dec(v___y_993_);
lean_dec_ref(v___y_992_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(uint8_t v___x_997_, uint8_t v___x_998_, uint8_t v_____do__lift_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
if (v_____do__lift_999_ == 0)
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = lean_box(v___x_997_);
v___x_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
return v___x_1006_;
}
else
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = lean_box(v___x_998_);
v___x_1008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
return v___x_1008_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0___boxed(lean_object* v___x_1009_, lean_object* v___x_1010_, lean_object* v_____do__lift_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
uint8_t v___x_4761__boxed_1017_; uint8_t v___x_4762__boxed_1018_; uint8_t v_____do__lift_4763__boxed_1019_; lean_object* v_res_1020_; 
v___x_4761__boxed_1017_ = lean_unbox(v___x_1009_);
v___x_4762__boxed_1018_ = lean_unbox(v___x_1010_);
v_____do__lift_4763__boxed_1019_ = lean_unbox(v_____do__lift_1011_);
v_res_1020_ = l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(v___x_4761__boxed_1017_, v___x_4762__boxed_1018_, v_____do__lift_4763__boxed_1019_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
return v_res_1020_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2(lean_object* v_as_1021_, size_t v_i_1022_, size_t v_stop_1023_){
_start:
{
uint8_t v___x_1024_; 
v___x_1024_ = lean_usize_dec_eq(v_i_1022_, v_stop_1023_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1025_; uint8_t v_kind_1026_; uint8_t v___x_1027_; 
v___x_1025_ = lean_array_uget_borrowed(v_as_1021_, v_i_1022_);
v_kind_1026_ = lean_ctor_get_uint8(v___x_1025_, sizeof(void*)*9);
v___x_1027_ = l_Lean_Elab_DefKind_isTheorem(v_kind_1026_);
if (v___x_1027_ == 0)
{
uint8_t v___x_1028_; 
v___x_1028_ = 1;
return v___x_1028_;
}
else
{
size_t v___x_1029_; size_t v___x_1030_; 
v___x_1029_ = ((size_t)1ULL);
v___x_1030_ = lean_usize_add(v_i_1022_, v___x_1029_);
v_i_1022_ = v___x_1030_;
goto _start;
}
}
else
{
uint8_t v___x_1032_; 
v___x_1032_ = 0;
return v___x_1032_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2___boxed(lean_object* v_as_1033_, lean_object* v_i_1034_, lean_object* v_stop_1035_){
_start:
{
size_t v_i_boxed_1036_; size_t v_stop_boxed_1037_; uint8_t v_res_1038_; lean_object* v_r_1039_; 
v_i_boxed_1036_ = lean_unbox_usize(v_i_1034_);
lean_dec(v_i_1034_);
v_stop_boxed_1037_ = lean_unbox_usize(v_stop_1035_);
lean_dec(v_stop_1035_);
v_res_1038_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2(v_as_1033_, v_i_boxed_1036_, v_stop_boxed_1037_);
lean_dec_ref(v_as_1033_);
v_r_1039_ = lean_box(v_res_1038_);
return v_r_1039_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0(size_t v_sz_1040_, size_t v_i_1041_, lean_object* v_bs_1042_){
_start:
{
uint8_t v___x_1043_; 
v___x_1043_ = lean_usize_dec_lt(v_i_1041_, v_sz_1040_);
if (v___x_1043_ == 0)
{
return v_bs_1042_;
}
else
{
lean_object* v_v_1044_; lean_object* v_declName_1045_; lean_object* v___x_1046_; lean_object* v_bs_x27_1047_; size_t v___x_1048_; size_t v___x_1049_; lean_object* v___x_1050_; 
v_v_1044_ = lean_array_uget_borrowed(v_bs_1042_, v_i_1041_);
v_declName_1045_ = lean_ctor_get(v_v_1044_, 3);
lean_inc(v_declName_1045_);
v___x_1046_ = lean_unsigned_to_nat(0u);
v_bs_x27_1047_ = lean_array_uset(v_bs_1042_, v_i_1041_, v___x_1046_);
v___x_1048_ = ((size_t)1ULL);
v___x_1049_ = lean_usize_add(v_i_1041_, v___x_1048_);
v___x_1050_ = lean_array_uset(v_bs_x27_1047_, v_i_1041_, v_declName_1045_);
v_i_1041_ = v___x_1049_;
v_bs_1042_ = v___x_1050_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0___boxed(lean_object* v_sz_1052_, lean_object* v_i_1053_, lean_object* v_bs_1054_){
_start:
{
size_t v_sz_boxed_1055_; size_t v_i_boxed_1056_; lean_object* v_res_1057_; 
v_sz_boxed_1055_ = lean_unbox_usize(v_sz_1052_);
lean_dec(v_sz_1052_);
v_i_boxed_1056_ = lean_unbox_usize(v_i_1053_);
lean_dec(v_i_1053_);
v_res_1057_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0(v_sz_boxed_1055_, v_i_boxed_1056_, v_bs_1054_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1(lean_object* v___x_1058_, lean_object* v_declNameNonRec_1059_, lean_object* v_fixedParamPerms_1060_, lean_object* v_fixpointType_1061_, lean_object* v_fixEq_x3f_1062_, uint8_t v_a_1063_, lean_object* v_as_1064_, size_t v_i_1065_, size_t v_stop_1066_, lean_object* v_b_1067_){
_start:
{
uint8_t v___x_1068_; 
v___x_1068_ = lean_usize_dec_eq(v_i_1065_, v_stop_1066_);
if (v___x_1068_ == 0)
{
lean_object* v___x_1069_; lean_object* v_levelParams_1070_; lean_object* v_declName_1071_; lean_object* v_type_1072_; lean_object* v_value_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; size_t v___x_1077_; size_t v___x_1078_; 
v___x_1069_ = lean_array_uget_borrowed(v_as_1064_, v_i_1065_);
v_levelParams_1070_ = lean_ctor_get(v___x_1069_, 1);
v_declName_1071_ = lean_ctor_get(v___x_1069_, 3);
v_type_1072_ = lean_ctor_get(v___x_1069_, 6);
v_value_1073_ = lean_ctor_get(v___x_1069_, 7);
v___x_1074_ = l_Lean_Elab_PartialFixpoint_eqnInfoExt;
lean_inc(v_fixEq_x3f_1062_);
lean_inc_ref(v_fixpointType_1061_);
lean_inc_ref(v_fixedParamPerms_1060_);
lean_inc(v_declNameNonRec_1059_);
lean_inc_ref(v___x_1058_);
lean_inc_ref(v_value_1073_);
lean_inc_ref(v_type_1072_);
lean_inc(v_levelParams_1070_);
lean_inc_n(v_declName_1071_, 2);
v___x_1075_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_1075_, 0, v_declName_1071_);
lean_ctor_set(v___x_1075_, 1, v_levelParams_1070_);
lean_ctor_set(v___x_1075_, 2, v_type_1072_);
lean_ctor_set(v___x_1075_, 3, v_value_1073_);
lean_ctor_set(v___x_1075_, 4, v___x_1058_);
lean_ctor_set(v___x_1075_, 5, v_declNameNonRec_1059_);
lean_ctor_set(v___x_1075_, 6, v_fixedParamPerms_1060_);
lean_ctor_set(v___x_1075_, 7, v_fixpointType_1061_);
lean_ctor_set(v___x_1075_, 8, v_fixEq_x3f_1062_);
v___x_1076_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1074_, v_b_1067_, v_declName_1071_, v___x_1075_, v_a_1063_);
v___x_1077_ = ((size_t)1ULL);
v___x_1078_ = lean_usize_add(v_i_1065_, v___x_1077_);
v_i_1065_ = v___x_1078_;
v_b_1067_ = v___x_1076_;
goto _start;
}
else
{
lean_dec(v_fixEq_x3f_1062_);
lean_dec_ref(v_fixpointType_1061_);
lean_dec_ref(v_fixedParamPerms_1060_);
lean_dec(v_declNameNonRec_1059_);
lean_dec_ref(v___x_1058_);
return v_b_1067_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1___boxed(lean_object* v___x_1080_, lean_object* v_declNameNonRec_1081_, lean_object* v_fixedParamPerms_1082_, lean_object* v_fixpointType_1083_, lean_object* v_fixEq_x3f_1084_, lean_object* v_a_1085_, lean_object* v_as_1086_, lean_object* v_i_1087_, lean_object* v_stop_1088_, lean_object* v_b_1089_){
_start:
{
uint8_t v_a_4822__boxed_1090_; size_t v_i_boxed_1091_; size_t v_stop_boxed_1092_; lean_object* v_res_1093_; 
v_a_4822__boxed_1090_ = lean_unbox(v_a_1085_);
v_i_boxed_1091_ = lean_unbox_usize(v_i_1087_);
lean_dec(v_i_1087_);
v_stop_boxed_1092_ = lean_unbox_usize(v_stop_1088_);
lean_dec(v_stop_1088_);
v_res_1093_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1(v___x_1080_, v_declNameNonRec_1081_, v_fixedParamPerms_1082_, v_fixpointType_1083_, v_fixEq_x3f_1084_, v_a_4822__boxed_1090_, v_as_1086_, v_i_boxed_1091_, v_stop_boxed_1092_, v_b_1089_);
lean_dec_ref(v_as_1086_);
return v_res_1093_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(lean_object* v_as_1094_, size_t v_i_1095_, size_t v_stop_1096_, lean_object* v_b_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
uint8_t v___x_1101_; 
v___x_1101_ = lean_usize_dec_eq(v_i_1095_, v_stop_1096_);
if (v___x_1101_ == 0)
{
lean_object* v___x_1102_; lean_object* v_declName_1103_; lean_object* v___x_1104_; 
v___x_1102_ = lean_array_uget_borrowed(v_as_1094_, v_i_1095_);
v_declName_1103_ = lean_ctor_get(v___x_1102_, 3);
lean_inc(v_declName_1103_);
v___x_1104_ = l_Lean_Meta_ensureEqnReservedNamesAvailable(v_declName_1103_, v___y_1098_, v___y_1099_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v_a_1105_; size_t v___x_1106_; size_t v___x_1107_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_a_1105_);
lean_dec_ref_known(v___x_1104_, 1);
v___x_1106_ = ((size_t)1ULL);
v___x_1107_ = lean_usize_add(v_i_1095_, v___x_1106_);
v_i_1095_ = v___x_1107_;
v_b_1097_ = v_a_1105_;
goto _start;
}
else
{
return v___x_1104_;
}
}
else
{
lean_object* v___x_1109_; 
v___x_1109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1109_, 0, v_b_1097_);
return v___x_1109_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg___boxed(lean_object* v_as_1110_, lean_object* v_i_1111_, lean_object* v_stop_1112_, lean_object* v_b_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
size_t v_i_boxed_1117_; size_t v_stop_boxed_1118_; lean_object* v_res_1119_; 
v_i_boxed_1117_ = lean_unbox_usize(v_i_1111_);
lean_dec(v_i_1111_);
v_stop_boxed_1118_ = lean_unbox_usize(v_stop_1112_);
lean_dec(v_stop_1112_);
v_res_1119_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(v_as_1110_, v_i_boxed_1117_, v_stop_boxed_1118_, v_b_1113_, v___y_1114_, v___y_1115_);
lean_dec(v___y_1115_);
lean_dec_ref(v___y_1114_);
lean_dec_ref(v_as_1110_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3(uint8_t v___x_1120_, lean_object* v_as_1121_, size_t v_i_1122_, size_t v_stop_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_){
_start:
{
uint8_t v___x_1133_; 
v___x_1133_ = lean_usize_dec_eq(v_i_1122_, v_stop_1123_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; lean_object* v_type_1135_; lean_object* v___x_1136_; 
v___x_1134_ = lean_array_uget_borrowed(v_as_1121_, v_i_1122_);
v_type_1135_ = lean_ctor_get(v___x_1134_, 6);
lean_inc_ref(v_type_1135_);
v___x_1136_ = l_Lean_Meta_isProp(v_type_1135_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_);
if (lean_obj_tag(v___x_1136_) == 0)
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1146_; 
v_a_1137_ = lean_ctor_get(v___x_1136_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1139_ = v___x_1136_;
v_isShared_1140_ = v_isSharedCheck_1146_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___x_1136_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1146_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
uint8_t v___x_1141_; 
v___x_1141_ = lean_unbox(v_a_1137_);
lean_dec(v_a_1137_);
if (v___x_1141_ == 0)
{
if (v___x_1120_ == 0)
{
lean_del_object(v___x_1139_);
goto v___jp_1129_;
}
else
{
lean_object* v___x_1142_; lean_object* v___x_1144_; 
v___x_1142_ = lean_box(v___x_1120_);
if (v_isShared_1140_ == 0)
{
lean_ctor_set(v___x_1139_, 0, v___x_1142_);
v___x_1144_ = v___x_1139_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v___x_1142_);
v___x_1144_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
return v___x_1144_;
}
}
}
else
{
lean_del_object(v___x_1139_);
goto v___jp_1129_;
}
}
}
else
{
return v___x_1136_;
}
}
else
{
uint8_t v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1147_ = 0;
v___x_1148_ = lean_box(v___x_1147_);
v___x_1149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
return v___x_1149_;
}
v___jp_1129_:
{
size_t v___x_1130_; size_t v___x_1131_; 
v___x_1130_ = ((size_t)1ULL);
v___x_1131_ = lean_usize_add(v_i_1122_, v___x_1130_);
v_i_1122_ = v___x_1131_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3___boxed(lean_object* v___x_1150_, lean_object* v_as_1151_, lean_object* v_i_1152_, lean_object* v_stop_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
uint8_t v___x_4869__boxed_1159_; size_t v_i_boxed_1160_; size_t v_stop_boxed_1161_; lean_object* v_res_1162_; 
v___x_4869__boxed_1159_ = lean_unbox(v___x_1150_);
v_i_boxed_1160_ = lean_unbox_usize(v_i_1152_);
lean_dec(v_i_1152_);
v_stop_boxed_1161_ = lean_unbox_usize(v_stop_1153_);
lean_dec(v_stop_1153_);
v_res_1162_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3(v___x_4869__boxed_1159_, v_as_1151_, v_i_boxed_1160_, v_stop_boxed_1161_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
lean_dec(v___y_1157_);
lean_dec_ref(v___y_1156_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec_ref(v_as_1151_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo(lean_object* v_preDefs_1163_, lean_object* v_declNameNonRec_1164_, lean_object* v_fixedParamPerms_1165_, lean_object* v_fixpointType_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_){
_start:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v_nextMacroScope_1180_; lean_object* v_ngen_1181_; lean_object* v_auxDeclNGen_1182_; lean_object* v_traceState_1183_; lean_object* v_recordedDeps_1184_; lean_object* v_messages_1185_; lean_object* v_infoState_1186_; lean_object* v_snapshotTasks_1187_; lean_object* v___y_1188_; lean_object* v___x_1209_; uint8_t v___y_1211_; lean_object* v___y_1212_; size_t v___y_1213_; lean_object* v_fixEq_x3f_1214_; lean_object* v___y_1215_; lean_object* v___y_1216_; lean_object* v___y_1231_; uint8_t v___x_1279_; 
v___x_1175_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_1176_ = lean_unsigned_to_nat(0u);
v___x_1209_ = lean_array_get_size(v_preDefs_1163_);
v___x_1279_ = lean_nat_dec_lt(v___x_1176_, v___x_1209_);
if (v___x_1279_ == 0)
{
goto v___jp_1260_;
}
else
{
lean_object* v___x_1280_; size_t v___x_1281_; size_t v___x_1282_; lean_object* v___x_1283_; 
v___x_1280_ = lean_box(0);
v___x_1281_ = ((size_t)0ULL);
v___x_1282_ = lean_usize_of_nat(v___x_1209_);
v___x_1283_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(v_preDefs_1163_, v___x_1281_, v___x_1282_, v___x_1280_, v_a_1169_, v_a_1170_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_dec_ref_known(v___x_1283_, 1);
goto v___jp_1260_;
}
else
{
lean_dec_ref(v_fixpointType_1166_);
lean_dec_ref(v_fixedParamPerms_1165_);
lean_dec(v_declNameNonRec_1164_);
lean_dec_ref(v_preDefs_1163_);
return v___x_1283_;
}
}
v___jp_1172_:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1173_ = lean_box(0);
v___x_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1173_);
return v___x_1174_;
}
v___jp_1177_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v_mctx_1193_; lean_object* v_zetaDeltaFVarIds_1194_; lean_object* v_postponed_1195_; lean_object* v_diag_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1207_; 
v___x_1189_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3);
v___x_1190_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1190_, 0, v___y_1188_);
lean_ctor_set(v___x_1190_, 1, v_nextMacroScope_1180_);
lean_ctor_set(v___x_1190_, 2, v_ngen_1181_);
lean_ctor_set(v___x_1190_, 3, v_auxDeclNGen_1182_);
lean_ctor_set(v___x_1190_, 4, v_traceState_1183_);
lean_ctor_set(v___x_1190_, 5, v___x_1189_);
lean_ctor_set(v___x_1190_, 6, v_recordedDeps_1184_);
lean_ctor_set(v___x_1190_, 7, v_messages_1185_);
lean_ctor_set(v___x_1190_, 8, v_infoState_1186_);
lean_ctor_set(v___x_1190_, 9, v_snapshotTasks_1187_);
v___x_1191_ = lean_st_ref_put(v___y_1178_, v___x_1190_);
v___x_1192_ = lean_st_ref_take(v___y_1179_);
v_mctx_1193_ = lean_ctor_get(v___x_1192_, 0);
v_zetaDeltaFVarIds_1194_ = lean_ctor_get(v___x_1192_, 2);
v_postponed_1195_ = lean_ctor_get(v___x_1192_, 3);
v_diag_1196_ = lean_ctor_get(v___x_1192_, 4);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1192_);
if (v_isSharedCheck_1207_ == 0)
{
lean_object* v_unused_1208_; 
v_unused_1208_ = lean_ctor_get(v___x_1192_, 1);
lean_dec(v_unused_1208_);
v___x_1198_ = v___x_1192_;
v_isShared_1199_ = v_isSharedCheck_1207_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_diag_1196_);
lean_inc(v_postponed_1195_);
lean_inc(v_zetaDeltaFVarIds_1194_);
lean_inc(v_mctx_1193_);
lean_dec(v___x_1192_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1207_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1203_; 
v___x_1200_ = lean_box(0);
v___x_1201_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__7, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__7);
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 1, v___x_1201_);
v___x_1203_ = v___x_1198_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_mctx_1193_);
lean_ctor_set(v_reuseFailAlloc_1206_, 1, v___x_1201_);
lean_ctor_set(v_reuseFailAlloc_1206_, 2, v_zetaDeltaFVarIds_1194_);
lean_ctor_set(v_reuseFailAlloc_1206_, 3, v_postponed_1195_);
lean_ctor_set(v_reuseFailAlloc_1206_, 4, v_diag_1196_);
v___x_1203_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1204_ = lean_st_ref_put(v___y_1179_, v___x_1203_);
v___x_1205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1200_);
return v___x_1205_;
}
}
}
v___jp_1210_:
{
lean_object* v___x_1217_; lean_object* v_env_1218_; lean_object* v_nextMacroScope_1219_; lean_object* v_ngen_1220_; lean_object* v_auxDeclNGen_1221_; lean_object* v_traceState_1222_; lean_object* v_recordedDeps_1223_; lean_object* v_messages_1224_; lean_object* v_infoState_1225_; lean_object* v_snapshotTasks_1226_; uint8_t v___x_1227_; 
v___x_1217_ = lean_st_ref_take(v___y_1216_);
v_env_1218_ = lean_ctor_get(v___x_1217_, 0);
lean_inc_ref(v_env_1218_);
v_nextMacroScope_1219_ = lean_ctor_get(v___x_1217_, 1);
lean_inc(v_nextMacroScope_1219_);
v_ngen_1220_ = lean_ctor_get(v___x_1217_, 2);
lean_inc_ref(v_ngen_1220_);
v_auxDeclNGen_1221_ = lean_ctor_get(v___x_1217_, 3);
lean_inc_ref(v_auxDeclNGen_1221_);
v_traceState_1222_ = lean_ctor_get(v___x_1217_, 4);
lean_inc_ref(v_traceState_1222_);
v_recordedDeps_1223_ = lean_ctor_get(v___x_1217_, 6);
lean_inc_ref(v_recordedDeps_1223_);
v_messages_1224_ = lean_ctor_get(v___x_1217_, 7);
lean_inc_ref(v_messages_1224_);
v_infoState_1225_ = lean_ctor_get(v___x_1217_, 8);
lean_inc_ref(v_infoState_1225_);
v_snapshotTasks_1226_ = lean_ctor_get(v___x_1217_, 9);
lean_inc_ref(v_snapshotTasks_1226_);
lean_dec(v___x_1217_);
v___x_1227_ = lean_nat_dec_lt(v___x_1176_, v___x_1209_);
if (v___x_1227_ == 0)
{
lean_dec(v_fixEq_x3f_1214_);
lean_dec_ref(v___y_1212_);
lean_dec_ref(v_fixpointType_1166_);
lean_dec_ref(v_fixedParamPerms_1165_);
lean_dec(v_declNameNonRec_1164_);
lean_dec_ref(v_preDefs_1163_);
v___y_1178_ = v___y_1216_;
v___y_1179_ = v___y_1215_;
v_nextMacroScope_1180_ = v_nextMacroScope_1219_;
v_ngen_1181_ = v_ngen_1220_;
v_auxDeclNGen_1182_ = v_auxDeclNGen_1221_;
v_traceState_1183_ = v_traceState_1222_;
v_recordedDeps_1184_ = v_recordedDeps_1223_;
v_messages_1185_ = v_messages_1224_;
v_infoState_1186_ = v_infoState_1225_;
v_snapshotTasks_1187_ = v_snapshotTasks_1226_;
v___y_1188_ = v_env_1218_;
goto v___jp_1177_;
}
else
{
size_t v___x_1228_; lean_object* v___x_1229_; 
v___x_1228_ = lean_usize_of_nat(v___x_1209_);
v___x_1229_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1(v___y_1212_, v_declNameNonRec_1164_, v_fixedParamPerms_1165_, v_fixpointType_1166_, v_fixEq_x3f_1214_, v___y_1211_, v_preDefs_1163_, v___y_1213_, v___x_1228_, v_env_1218_);
lean_dec_ref(v_preDefs_1163_);
v___y_1178_ = v___y_1216_;
v___y_1179_ = v___y_1215_;
v_nextMacroScope_1180_ = v_nextMacroScope_1219_;
v_ngen_1181_ = v_ngen_1220_;
v_auxDeclNGen_1182_ = v_auxDeclNGen_1221_;
v_traceState_1183_ = v_traceState_1222_;
v_recordedDeps_1184_ = v_recordedDeps_1223_;
v_messages_1185_ = v_messages_1224_;
v_infoState_1186_ = v_infoState_1225_;
v_snapshotTasks_1187_ = v_snapshotTasks_1226_;
v___y_1188_ = v___x_1229_;
goto v___jp_1177_;
}
}
v___jp_1230_:
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1259_; 
v_a_1232_ = lean_ctor_get(v___y_1231_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___y_1231_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1234_ = v___y_1231_;
v_isShared_1235_ = v_isSharedCheck_1259_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___y_1231_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1259_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
uint8_t v___x_1236_; 
v___x_1236_ = lean_unbox(v_a_1232_);
if (v___x_1236_ == 0)
{
lean_object* v___x_1237_; lean_object* v_declName_1238_; size_t v_sz_1239_; size_t v___x_1240_; lean_object* v___x_1241_; uint8_t v___x_1242_; 
v___x_1237_ = lean_array_get_borrowed(v___x_1175_, v_preDefs_1163_, v___x_1176_);
v_declName_1238_ = lean_ctor_get(v___x_1237_, 3);
v_sz_1239_ = lean_array_size(v_preDefs_1163_);
v___x_1240_ = ((size_t)0ULL);
lean_inc_ref(v_preDefs_1163_);
v___x_1241_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0(v_sz_1239_, v___x_1240_, v_preDefs_1163_);
v___x_1242_ = lean_name_eq(v_declNameNonRec_1164_, v_declName_1238_);
if (v___x_1242_ == 0)
{
lean_object* v___x_1243_; 
lean_inc(v_declNameNonRec_1164_);
v___x_1243_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq(v_declNameNonRec_1164_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_object* v_a_1244_; lean_object* v___x_1246_; 
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
lean_inc(v_a_1244_);
lean_dec_ref_known(v___x_1243_, 1);
if (v_isShared_1235_ == 0)
{
lean_ctor_set_tag(v___x_1234_, 1);
lean_ctor_set(v___x_1234_, 0, v_a_1244_);
v___x_1246_ = v___x_1234_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_a_1244_);
v___x_1246_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
uint8_t v___x_1247_; 
v___x_1247_ = lean_unbox(v_a_1232_);
lean_dec(v_a_1232_);
v___y_1211_ = v___x_1247_;
v___y_1212_ = v___x_1241_;
v___y_1213_ = v___x_1240_;
v_fixEq_x3f_1214_ = v___x_1246_;
v___y_1215_ = v_a_1168_;
v___y_1216_ = v_a_1170_;
goto v___jp_1210_;
}
}
else
{
lean_object* v_a_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1256_; 
lean_dec_ref(v___x_1241_);
lean_del_object(v___x_1234_);
lean_dec(v_a_1232_);
lean_dec_ref(v_fixpointType_1166_);
lean_dec_ref(v_fixedParamPerms_1165_);
lean_dec(v_declNameNonRec_1164_);
lean_dec_ref(v_preDefs_1163_);
v_a_1249_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1251_ = v___x_1243_;
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_a_1249_);
lean_dec(v___x_1243_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1254_; 
if (v_isShared_1252_ == 0)
{
v___x_1254_ = v___x_1251_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_a_1249_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
}
else
{
lean_object* v___x_1257_; uint8_t v___x_1258_; 
lean_del_object(v___x_1234_);
v___x_1257_ = lean_box(0);
v___x_1258_ = lean_unbox(v_a_1232_);
lean_dec(v_a_1232_);
v___y_1211_ = v___x_1258_;
v___y_1212_ = v___x_1241_;
v___y_1213_ = v___x_1240_;
v_fixEq_x3f_1214_ = v___x_1257_;
v___y_1215_ = v_a_1168_;
v___y_1216_ = v_a_1170_;
goto v___jp_1210_;
}
}
else
{
lean_del_object(v___x_1234_);
lean_dec(v_a_1232_);
lean_dec_ref(v_fixpointType_1166_);
lean_dec_ref(v_fixedParamPerms_1165_);
lean_dec(v_declNameNonRec_1164_);
lean_dec_ref(v_preDefs_1163_);
goto v___jp_1172_;
}
}
}
v___jp_1260_:
{
uint8_t v___x_1261_; 
v___x_1261_ = lean_nat_dec_lt(v___x_1176_, v___x_1209_);
if (v___x_1261_ == 0)
{
lean_dec_ref(v_fixpointType_1166_);
lean_dec_ref(v_fixedParamPerms_1165_);
lean_dec(v_declNameNonRec_1164_);
lean_dec_ref(v_preDefs_1163_);
goto v___jp_1172_;
}
else
{
if (v___x_1261_ == 0)
{
lean_dec_ref(v_fixpointType_1166_);
lean_dec_ref(v_fixedParamPerms_1165_);
lean_dec(v_declNameNonRec_1164_);
lean_dec_ref(v_preDefs_1163_);
goto v___jp_1172_;
}
else
{
size_t v___x_1262_; size_t v___x_1263_; uint8_t v___x_1264_; 
v___x_1262_ = ((size_t)0ULL);
v___x_1263_ = lean_usize_of_nat(v___x_1209_);
v___x_1264_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2(v_preDefs_1163_, v___x_1262_, v___x_1263_);
if (v___x_1264_ == 0)
{
lean_dec_ref(v_fixpointType_1166_);
lean_dec_ref(v_fixedParamPerms_1165_);
lean_dec(v_declNameNonRec_1164_);
lean_dec_ref(v_preDefs_1163_);
goto v___jp_1172_;
}
else
{
uint8_t v___x_1265_; 
v___x_1265_ = 0;
if (v___x_1261_ == 0)
{
lean_object* v___x_1266_; 
v___x_1266_ = l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(v___x_1264_, v___x_1265_, v___x_1261_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
v___y_1231_ = v___x_1266_;
goto v___jp_1230_;
}
else
{
if (v___x_1261_ == 0)
{
lean_dec_ref(v_fixpointType_1166_);
lean_dec_ref(v_fixedParamPerms_1165_);
lean_dec(v_declNameNonRec_1164_);
lean_dec_ref(v_preDefs_1163_);
goto v___jp_1172_;
}
else
{
lean_object* v___x_1267_; 
v___x_1267_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3(v___x_1264_, v_preDefs_1163_, v___x_1262_, v___x_1263_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_object* v_a_1268_; uint8_t v___x_1269_; lean_object* v___x_1270_; 
v_a_1268_ = lean_ctor_get(v___x_1267_, 0);
lean_inc(v_a_1268_);
lean_dec_ref_known(v___x_1267_, 1);
v___x_1269_ = lean_unbox(v_a_1268_);
lean_dec(v_a_1268_);
v___x_1270_ = l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(v___x_1264_, v___x_1265_, v___x_1269_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
v___y_1231_ = v___x_1270_;
goto v___jp_1230_;
}
else
{
lean_object* v_a_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1278_; 
lean_dec_ref(v_fixpointType_1166_);
lean_dec_ref(v_fixedParamPerms_1165_);
lean_dec(v_declNameNonRec_1164_);
lean_dec_ref(v_preDefs_1163_);
v_a_1271_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1273_ = v___x_1267_;
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_a_1271_);
lean_dec(v___x_1267_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_a_1271_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
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
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___boxed(lean_object* v_preDefs_1284_, lean_object* v_declNameNonRec_1285_, lean_object* v_fixedParamPerms_1286_, lean_object* v_fixpointType_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l_Lean_Elab_PartialFixpoint_registerEqnsInfo(v_preDefs_1284_, v_declNameNonRec_1285_, v_fixedParamPerms_1286_, v_fixpointType_1287_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_);
lean_dec(v_a_1291_);
lean_dec_ref(v_a_1290_);
lean_dec(v_a_1289_);
lean_dec_ref(v_a_1288_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4(lean_object* v_as_1294_, size_t v_i_1295_, size_t v_stop_1296_, lean_object* v_b_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_){
_start:
{
lean_object* v___x_1303_; 
v___x_1303_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(v_as_1294_, v_i_1295_, v_stop_1296_, v_b_1297_, v___y_1300_, v___y_1301_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___boxed(lean_object* v_as_1304_, lean_object* v_i_1305_, lean_object* v_stop_1306_, lean_object* v_b_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
size_t v_i_boxed_1313_; size_t v_stop_boxed_1314_; lean_object* v_res_1315_; 
v_i_boxed_1313_ = lean_unbox_usize(v_i_1305_);
lean_dec(v_i_1305_);
v_stop_boxed_1314_ = lean_unbox_usize(v_stop_1306_);
lean_dec(v_stop_1306_);
v_res_1315_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4(v_as_1304_, v_i_boxed_1313_, v_stop_boxed_1314_, v_b_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec_ref(v_as_1304_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(lean_object* v_mvarId_1316_, lean_object* v_x_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v___x_1323_; 
v___x_1323_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1316_, v_x_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1331_; 
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1326_ = v___x_1323_;
v_isShared_1327_ = v_isSharedCheck_1331_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v___x_1323_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1331_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1329_; 
if (v_isShared_1327_ == 0)
{
v___x_1329_ = v___x_1326_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v_a_1324_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
}
else
{
lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1339_; 
v_a_1332_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1334_ = v___x_1323_;
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v___x_1323_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___x_1337_; 
if (v_isShared_1335_ == 0)
{
v___x_1337_ = v___x_1334_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_a_1332_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg___boxed(lean_object* v_mvarId_1340_, lean_object* v_x_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_){
_start:
{
lean_object* v_res_1347_; 
v_res_1347_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(v_mvarId_1340_, v_x_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
lean_dec(v___y_1345_);
lean_dec_ref(v___y_1344_);
lean_dec(v___y_1343_);
lean_dec_ref(v___y_1342_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0(lean_object* v_00_u03b1_1348_, lean_object* v_mvarId_1349_, lean_object* v_x_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_){
_start:
{
lean_object* v___x_1356_; 
v___x_1356_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(v_mvarId_1349_, v_x_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
return v___x_1356_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___boxed(lean_object* v_00_u03b1_1357_, lean_object* v_mvarId_1358_, lean_object* v_x_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v_res_1365_; 
v_res_1365_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0(v_00_u03b1_1357_, v_mvarId_1358_, v_x_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_);
lean_dec(v___y_1363_);
lean_dec_ref(v___y_1362_);
lean_dec(v___y_1361_);
lean_dec_ref(v___y_1360_);
return v_res_1365_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0(lean_object* v_declName_1366_, lean_object* v_declNameNonRec_1367_, lean_object* v_n_1368_){
_start:
{
uint8_t v___x_1369_; 
v___x_1369_ = lean_name_eq(v_n_1368_, v_declName_1366_);
if (v___x_1369_ == 0)
{
uint8_t v___x_1370_; 
v___x_1370_ = lean_name_eq(v_n_1368_, v_declNameNonRec_1367_);
return v___x_1370_;
}
else
{
return v___x_1369_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0___boxed(lean_object* v_declName_1371_, lean_object* v_declNameNonRec_1372_, lean_object* v_n_1373_){
_start:
{
uint8_t v_res_1374_; lean_object* v_r_1375_; 
v_res_1374_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0(v_declName_1371_, v_declNameNonRec_1372_, v_n_1373_);
lean_dec(v_n_1373_);
lean_dec(v_declNameNonRec_1372_);
lean_dec(v_declName_1371_);
v_r_1375_ = lean_box(v_res_1374_);
return v_r_1375_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6(void){
_start:
{
lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1385_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__5));
v___x_1386_ = l_Lean_MessageData_ofFormat(v___x_1385_);
return v___x_1386_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7(void){
_start:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1387_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6);
v___x_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1(lean_object* v_mvarId_1389_, lean_object* v___f_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_){
_start:
{
lean_object* v___x_1396_; 
lean_inc(v_mvarId_1389_);
v___x_1396_ = l_Lean_MVarId_getType_x27(v_mvarId_1389_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v_a_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; uint8_t v___x_1400_; 
v_a_1397_ = lean_ctor_get(v___x_1396_, 0);
lean_inc(v_a_1397_);
lean_dec_ref_known(v___x_1396_, 1);
v___x_1398_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1));
v___x_1399_ = lean_unsigned_to_nat(3u);
v___x_1400_ = l_Lean_Expr_isAppOfArity(v_a_1397_, v___x_1398_, v___x_1399_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
lean_dec(v_a_1397_);
lean_dec_ref(v___f_1390_);
v___x_1401_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__3));
v___x_1402_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7);
v___x_1403_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1401_, v_mvarId_1389_, v___x_1402_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_);
return v___x_1403_;
}
else
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; uint8_t v___x_1407_; lean_object* v___x_1408_; 
v___x_1404_ = l_Lean_Expr_appFn_x21(v_a_1397_);
v___x_1405_ = l_Lean_Expr_appArg_x21(v___x_1404_);
lean_dec_ref(v___x_1404_);
v___x_1406_ = l_Lean_Expr_appArg_x21(v_a_1397_);
lean_dec(v_a_1397_);
v___x_1407_ = 0;
v___x_1408_ = l_Lean_Meta_deltaExpand(v___x_1405_, v___f_1390_, v___x_1407_, v___y_1393_, v___y_1394_);
if (lean_obj_tag(v___x_1408_) == 0)
{
lean_object* v_a_1409_; lean_object* v___x_1410_; 
v_a_1409_ = lean_ctor_get(v___x_1408_, 0);
lean_inc(v_a_1409_);
lean_dec_ref_known(v___x_1408_, 1);
v___x_1410_ = l_Lean_Meta_mkEq(v_a_1409_, v___x_1406_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v_a_1411_; lean_object* v___x_1412_; 
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
lean_inc(v_a_1411_);
lean_dec_ref_known(v___x_1410_, 1);
v___x_1412_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_1389_, v_a_1411_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_);
return v___x_1412_;
}
else
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
lean_dec(v_mvarId_1389_);
v_a_1413_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v___x_1410_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v___x_1410_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_a_1413_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
}
else
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
lean_dec_ref(v___x_1406_);
lean_dec(v_mvarId_1389_);
v_a_1421_ = lean_ctor_get(v___x_1408_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1408_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1408_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1408_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
}
else
{
lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1436_; 
lean_dec_ref(v___f_1390_);
lean_dec(v_mvarId_1389_);
v_a_1429_ = lean_ctor_get(v___x_1396_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1431_ = v___x_1396_;
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1396_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1434_; 
if (v_isShared_1432_ == 0)
{
v___x_1434_ = v___x_1431_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_a_1429_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___boxed(lean_object* v_mvarId_1437_, lean_object* v___f_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1(v_mvarId_1437_, v___f_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
lean_dec(v___y_1440_);
lean_dec_ref(v___y_1439_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix(lean_object* v_declName_1445_, lean_object* v_declNameNonRec_1446_, lean_object* v_mvarId_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_){
_start:
{
lean_object* v___f_1453_; lean_object* v___f_1454_; lean_object* v___x_1455_; 
v___f_1453_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1453_, 0, v_declName_1445_);
lean_closure_set(v___f_1453_, 1, v_declNameNonRec_1446_);
lean_inc(v_mvarId_1447_);
v___f_1454_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___boxed), 7, 2);
lean_closure_set(v___f_1454_, 0, v_mvarId_1447_);
lean_closure_set(v___f_1454_, 1, v___f_1453_);
v___x_1455_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(v_mvarId_1447_, v___f_1454_, v_a_1448_, v_a_1449_, v_a_1450_, v_a_1451_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___boxed(lean_object* v_declName_1456_, lean_object* v_declNameNonRec_1457_, lean_object* v_mvarId_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix(v_declName_1456_, v_declNameNonRec_1457_, v_mvarId_1458_, v_a_1459_, v_a_1460_, v_a_1461_, v_a_1462_);
lean_dec(v_a_1462_);
lean_dec_ref(v_a_1461_);
lean_dec(v_a_1460_);
lean_dec_ref(v_a_1459_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0(lean_object* v_msg_1465_){
_start:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1466_ = l_Lean_instInhabitedExpr;
v___x_1467_ = lean_panic_fn_borrowed(v___x_1466_, v_msg_1465_);
return v___x_1467_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__1(void){
_start:
{
lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1469_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0));
v___x_1470_ = l_Lean_stringToMessageData(v___x_1469_);
return v___x_1470_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6(void){
_start:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1477_ = lean_unsigned_to_nat(0u);
v___x_1478_ = l_Lean_Expr_bvar___override(v___x_1477_);
return v___x_1478_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__10(void){
_start:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1482_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__9));
v___x_1483_ = lean_unsigned_to_nat(18u);
v___x_1484_ = lean_unsigned_to_nat(1955u);
v___x_1485_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__8));
v___x_1486_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__7));
v___x_1487_ = l_mkPanicMessageWithDecl(v___x_1486_, v___x_1485_, v___x_1484_, v___x_1483_, v___x_1482_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(lean_object* v_lhs_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_){
_start:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; uint8_t v___x_1499_; 
v___x_1497_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__2));
v___x_1498_ = lean_unsigned_to_nat(4u);
v___x_1499_ = l_Lean_Expr_isAppOfArity(v_lhs_1491_, v___x_1497_, v___x_1498_);
if (v___x_1499_ == 0)
{
lean_object* v___x_1500_; uint8_t v___x_1501_; 
v___x_1500_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__0___closed__4));
v___x_1501_ = l_Lean_Expr_isAppOfArity(v_lhs_1491_, v___x_1500_, v___x_1498_);
if (v___x_1501_ == 0)
{
uint8_t v___x_1502_; 
v___x_1502_ = l_Lean_Expr_isApp(v_lhs_1491_);
if (v___x_1502_ == 0)
{
uint8_t v___x_1503_; 
v___x_1503_ = l_Lean_Expr_isProj(v_lhs_1491_);
if (v___x_1503_ == 0)
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
v___x_1504_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__1);
v___x_1505_ = l_Lean_MessageData_ofExpr(v_lhs_1491_);
v___x_1506_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1504_);
lean_ctor_set(v___x_1506_, 1, v___x_1505_);
v___x_1507_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0___redArg(v___x_1506_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
return v___x_1507_;
}
else
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1508_ = l_Lean_Expr_projExpr_x21(v_lhs_1491_);
lean_inc(v_a_1495_);
lean_inc_ref(v_a_1494_);
lean_inc(v_a_1493_);
lean_inc_ref(v_a_1492_);
lean_inc_ref(v___x_1508_);
v___x_1509_ = lean_infer_type(v___x_1508_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1510_; lean_object* v___x_1511_; uint8_t v___x_1512_; lean_object* v___y_1514_; 
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
lean_inc(v_a_1510_);
lean_dec_ref_known(v___x_1509_, 1);
v___x_1511_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__3));
v___x_1512_ = 0;
if (lean_obj_tag(v_lhs_1491_) == 11)
{
lean_object* v_typeName_1524_; lean_object* v_idx_1525_; lean_object* v_struct_1526_; lean_object* v___x_1527_; size_t v___x_1528_; size_t v___x_1529_; uint8_t v___x_1530_; 
v_typeName_1524_ = lean_ctor_get(v_lhs_1491_, 0);
v_idx_1525_ = lean_ctor_get(v_lhs_1491_, 1);
v_struct_1526_ = lean_ctor_get(v_lhs_1491_, 2);
v___x_1527_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6);
v___x_1528_ = lean_ptr_addr(v_struct_1526_);
v___x_1529_ = lean_ptr_addr(v___x_1527_);
v___x_1530_ = lean_usize_dec_eq(v___x_1528_, v___x_1529_);
if (v___x_1530_ == 0)
{
lean_object* v___x_1531_; 
lean_inc(v_idx_1525_);
lean_inc(v_typeName_1524_);
lean_dec_ref_known(v_lhs_1491_, 3);
v___x_1531_ = l_Lean_Expr_proj___override(v_typeName_1524_, v_idx_1525_, v___x_1527_);
v___y_1514_ = v___x_1531_;
goto v___jp_1513_;
}
else
{
v___y_1514_ = v_lhs_1491_;
goto v___jp_1513_;
}
}
else
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
lean_dec_ref(v_lhs_1491_);
v___x_1532_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__10, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__10);
v___x_1533_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0(v___x_1532_);
v___y_1514_ = v___x_1533_;
goto v___jp_1513_;
}
v___jp_1513_:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; 
v___x_1515_ = l_Lean_mkLambda(v___x_1511_, v___x_1512_, v_a_1510_, v___y_1514_);
v___x_1516_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(v___x_1508_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
if (lean_obj_tag(v___x_1516_) == 0)
{
lean_object* v_a_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v_a_1517_ = lean_ctor_get(v___x_1516_, 0);
lean_inc(v_a_1517_);
lean_dec_ref_known(v___x_1516_, 1);
v___x_1518_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__5));
v___x_1519_ = lean_unsigned_to_nat(2u);
v___x_1520_ = lean_mk_empty_array_with_capacity(v___x_1519_);
v___x_1521_ = lean_array_push(v___x_1520_, v___x_1515_);
v___x_1522_ = lean_array_push(v___x_1521_, v_a_1517_);
v___x_1523_ = l_Lean_Meta_mkAppM(v___x_1518_, v___x_1522_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
return v___x_1523_;
}
else
{
lean_dec_ref(v___x_1515_);
return v___x_1516_;
}
}
}
else
{
lean_dec_ref(v___x_1508_);
lean_dec_ref(v_lhs_1491_);
return v___x_1509_;
}
}
}
else
{
lean_object* v___x_1534_; lean_object* v___x_1535_; 
v___x_1534_ = l_Lean_Expr_appFn_x21(v_lhs_1491_);
v___x_1535_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(v___x_1534_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v_a_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
v_a_1536_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_a_1536_);
lean_dec_ref_known(v___x_1535_, 1);
v___x_1537_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12));
v___x_1538_ = l_Lean_Expr_appArg_x21(v_lhs_1491_);
lean_dec_ref(v_lhs_1491_);
v___x_1539_ = lean_unsigned_to_nat(2u);
v___x_1540_ = lean_mk_empty_array_with_capacity(v___x_1539_);
v___x_1541_ = lean_array_push(v___x_1540_, v_a_1536_);
v___x_1542_ = lean_array_push(v___x_1541_, v___x_1538_);
v___x_1543_ = l_Lean_Meta_mkAppM(v___x_1537_, v___x_1542_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
return v___x_1543_;
}
else
{
lean_dec_ref(v_lhs_1491_);
return v___x_1535_;
}
}
}
else
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v_dummy_1548_; lean_object* v_nargs_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1544_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__2));
v___x_1545_ = l_Lean_Expr_getAppFn(v_lhs_1491_);
v___x_1546_ = l_Lean_Expr_constLevels_x21(v___x_1545_);
lean_dec_ref(v___x_1545_);
v___x_1547_ = l_Lean_mkConst(v___x_1544_, v___x_1546_);
v_dummy_1548_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0);
v_nargs_1549_ = l_Lean_Expr_getAppNumArgs(v_lhs_1491_);
lean_inc(v_nargs_1549_);
v___x_1550_ = lean_mk_array(v_nargs_1549_, v_dummy_1548_);
v___x_1551_ = lean_unsigned_to_nat(1u);
v___x_1552_ = lean_nat_sub(v_nargs_1549_, v___x_1551_);
lean_dec(v_nargs_1549_);
v___x_1553_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_lhs_1491_, v___x_1550_, v___x_1552_);
v___x_1554_ = l_Lean_mkAppN(v___x_1547_, v___x_1553_);
lean_dec_ref(v___x_1553_);
v___x_1555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1554_);
return v___x_1555_;
}
}
else
{
lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v_dummy_1560_; lean_object* v_nargs_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1556_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__4));
v___x_1557_ = l_Lean_Expr_getAppFn(v_lhs_1491_);
v___x_1558_ = l_Lean_Expr_constLevels_x21(v___x_1557_);
lean_dec_ref(v___x_1557_);
v___x_1559_ = l_Lean_mkConst(v___x_1556_, v___x_1558_);
v_dummy_1560_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0);
v_nargs_1561_ = l_Lean_Expr_getAppNumArgs(v_lhs_1491_);
lean_inc(v_nargs_1561_);
v___x_1562_ = lean_mk_array(v_nargs_1561_, v_dummy_1560_);
v___x_1563_ = lean_unsigned_to_nat(1u);
v___x_1564_ = lean_nat_sub(v_nargs_1561_, v___x_1563_);
lean_dec(v_nargs_1561_);
v___x_1565_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_lhs_1491_, v___x_1562_, v___x_1564_);
v___x_1566_ = l_Lean_mkAppN(v___x_1559_, v___x_1565_);
lean_dec_ref(v___x_1565_);
v___x_1567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1566_);
return v___x_1567_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___boxed(lean_object* v_lhs_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(v_lhs_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_);
lean_dec(v_a_1572_);
lean_dec_ref(v_a_1571_);
lean_dec(v_a_1570_);
lean_dec_ref(v_a_1569_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(lean_object* v_msg_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_){
_start:
{
lean_object* v___f_1582_; lean_object* v___x_1515__overap_1583_; lean_object* v___x_1584_; 
v___f_1582_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___closed__0));
v___x_1515__overap_1583_ = lean_panic_fn_borrowed(v___f_1582_, v_msg_1576_);
lean_inc(v___y_1580_);
lean_inc_ref(v___y_1579_);
lean_inc(v___y_1578_);
lean_inc_ref(v___y_1577_);
v___x_1584_ = lean_apply_5(v___x_1515__overap_1583_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, lean_box(0));
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___boxed(lean_object* v_msg_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(v_msg_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_1592_, lean_object* v_x_1593_, lean_object* v_x_1594_, lean_object* v_x_1595_){
_start:
{
lean_object* v_ks_1596_; lean_object* v_vs_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1621_; 
v_ks_1596_ = lean_ctor_get(v_x_1592_, 0);
v_vs_1597_ = lean_ctor_get(v_x_1592_, 1);
v_isSharedCheck_1621_ = !lean_is_exclusive(v_x_1592_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1599_ = v_x_1592_;
v_isShared_1600_ = v_isSharedCheck_1621_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_vs_1597_);
lean_inc(v_ks_1596_);
lean_dec(v_x_1592_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1621_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v___x_1601_; uint8_t v___x_1602_; 
v___x_1601_ = lean_array_get_size(v_ks_1596_);
v___x_1602_ = lean_nat_dec_lt(v_x_1593_, v___x_1601_);
if (v___x_1602_ == 0)
{
lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1606_; 
lean_dec(v_x_1593_);
v___x_1603_ = lean_array_push(v_ks_1596_, v_x_1594_);
v___x_1604_ = lean_array_push(v_vs_1597_, v_x_1595_);
if (v_isShared_1600_ == 0)
{
lean_ctor_set(v___x_1599_, 1, v___x_1604_);
lean_ctor_set(v___x_1599_, 0, v___x_1603_);
v___x_1606_ = v___x_1599_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v___x_1603_);
lean_ctor_set(v_reuseFailAlloc_1607_, 1, v___x_1604_);
v___x_1606_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
return v___x_1606_;
}
}
else
{
lean_object* v_k_x27_1608_; uint8_t v___x_1609_; 
v_k_x27_1608_ = lean_array_fget_borrowed(v_ks_1596_, v_x_1593_);
v___x_1609_ = l_Lean_instBEqMVarId_beq(v_x_1594_, v_k_x27_1608_);
if (v___x_1609_ == 0)
{
lean_object* v___x_1611_; 
if (v_isShared_1600_ == 0)
{
v___x_1611_ = v___x_1599_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_ks_1596_);
lean_ctor_set(v_reuseFailAlloc_1615_, 1, v_vs_1597_);
v___x_1611_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1612_ = lean_unsigned_to_nat(1u);
v___x_1613_ = lean_nat_add(v_x_1593_, v___x_1612_);
lean_dec(v_x_1593_);
v_x_1592_ = v___x_1611_;
v_x_1593_ = v___x_1613_;
goto _start;
}
}
else
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1619_; 
v___x_1616_ = lean_array_fset(v_ks_1596_, v_x_1593_, v_x_1594_);
v___x_1617_ = lean_array_fset(v_vs_1597_, v_x_1593_, v_x_1595_);
lean_dec(v_x_1593_);
if (v_isShared_1600_ == 0)
{
lean_ctor_set(v___x_1599_, 1, v___x_1617_);
lean_ctor_set(v___x_1599_, 0, v___x_1616_);
v___x_1619_ = v___x_1599_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v___x_1616_);
lean_ctor_set(v_reuseFailAlloc_1620_, 1, v___x_1617_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3___redArg(lean_object* v_n_1622_, lean_object* v_k_1623_, lean_object* v_v_1624_){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1625_ = lean_unsigned_to_nat(0u);
v___x_1626_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(v_n_1622_, v___x_1625_, v_k_1623_, v_v_1624_);
return v___x_1626_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(lean_object* v_x_1628_, size_t v_x_1629_, size_t v_x_1630_, lean_object* v_x_1631_, lean_object* v_x_1632_){
_start:
{
if (lean_obj_tag(v_x_1628_) == 0)
{
lean_object* v_es_1633_; size_t v___x_1634_; size_t v___x_1635_; lean_object* v_j_1636_; lean_object* v___x_1637_; uint8_t v___x_1638_; 
v_es_1633_ = lean_ctor_get(v_x_1628_, 0);
v___x_1634_ = ((size_t)31ULL);
v___x_1635_ = lean_usize_land(v_x_1629_, v___x_1634_);
v_j_1636_ = lean_usize_to_nat(v___x_1635_);
v___x_1637_ = lean_array_get_size(v_es_1633_);
v___x_1638_ = lean_nat_dec_lt(v_j_1636_, v___x_1637_);
if (v___x_1638_ == 0)
{
lean_dec(v_j_1636_);
lean_dec(v_x_1632_);
lean_dec(v_x_1631_);
return v_x_1628_;
}
else
{
lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1677_; 
lean_inc_ref(v_es_1633_);
v_isSharedCheck_1677_ = !lean_is_exclusive(v_x_1628_);
if (v_isSharedCheck_1677_ == 0)
{
lean_object* v_unused_1678_; 
v_unused_1678_ = lean_ctor_get(v_x_1628_, 0);
lean_dec(v_unused_1678_);
v___x_1640_ = v_x_1628_;
v_isShared_1641_ = v_isSharedCheck_1677_;
goto v_resetjp_1639_;
}
else
{
lean_dec(v_x_1628_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1677_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v_v_1642_; lean_object* v___x_1643_; lean_object* v_xs_x27_1644_; lean_object* v___y_1646_; 
v_v_1642_ = lean_array_fget(v_es_1633_, v_j_1636_);
v___x_1643_ = lean_box(0);
v_xs_x27_1644_ = lean_array_fset(v_es_1633_, v_j_1636_, v___x_1643_);
switch(lean_obj_tag(v_v_1642_))
{
case 0:
{
lean_object* v_key_1651_; lean_object* v_val_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1662_; 
v_key_1651_ = lean_ctor_get(v_v_1642_, 0);
v_val_1652_ = lean_ctor_get(v_v_1642_, 1);
v_isSharedCheck_1662_ = !lean_is_exclusive(v_v_1642_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1654_ = v_v_1642_;
v_isShared_1655_ = v_isSharedCheck_1662_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_val_1652_);
lean_inc(v_key_1651_);
lean_dec(v_v_1642_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1662_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
uint8_t v___x_1656_; 
v___x_1656_ = l_Lean_instBEqMVarId_beq(v_x_1631_, v_key_1651_);
if (v___x_1656_ == 0)
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
lean_del_object(v___x_1654_);
v___x_1657_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1651_, v_val_1652_, v_x_1631_, v_x_1632_);
v___x_1658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1657_);
v___y_1646_ = v___x_1658_;
goto v___jp_1645_;
}
else
{
lean_object* v___x_1660_; 
lean_dec(v_val_1652_);
lean_dec(v_key_1651_);
if (v_isShared_1655_ == 0)
{
lean_ctor_set(v___x_1654_, 1, v_x_1632_);
lean_ctor_set(v___x_1654_, 0, v_x_1631_);
v___x_1660_ = v___x_1654_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v_x_1631_);
lean_ctor_set(v_reuseFailAlloc_1661_, 1, v_x_1632_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
v___y_1646_ = v___x_1660_;
goto v___jp_1645_;
}
}
}
}
case 1:
{
lean_object* v_node_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1675_; 
v_node_1663_ = lean_ctor_get(v_v_1642_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v_v_1642_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1665_ = v_v_1642_;
v_isShared_1666_ = v_isSharedCheck_1675_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_node_1663_);
lean_dec(v_v_1642_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1675_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
size_t v___x_1667_; size_t v___x_1668_; size_t v___x_1669_; size_t v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1673_; 
v___x_1667_ = ((size_t)5ULL);
v___x_1668_ = lean_usize_shift_right(v_x_1629_, v___x_1667_);
v___x_1669_ = ((size_t)1ULL);
v___x_1670_ = lean_usize_add(v_x_1630_, v___x_1669_);
v___x_1671_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_node_1663_, v___x_1668_, v___x_1670_, v_x_1631_, v_x_1632_);
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 0, v___x_1671_);
v___x_1673_ = v___x_1665_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v___x_1671_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
v___y_1646_ = v___x_1673_;
goto v___jp_1645_;
}
}
}
default: 
{
lean_object* v___x_1676_; 
v___x_1676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1676_, 0, v_x_1631_);
lean_ctor_set(v___x_1676_, 1, v_x_1632_);
v___y_1646_ = v___x_1676_;
goto v___jp_1645_;
}
}
v___jp_1645_:
{
lean_object* v___x_1647_; lean_object* v___x_1649_; 
v___x_1647_ = lean_array_fset(v_xs_x27_1644_, v_j_1636_, v___y_1646_);
lean_dec(v_j_1636_);
if (v_isShared_1641_ == 0)
{
lean_ctor_set(v___x_1640_, 0, v___x_1647_);
v___x_1649_ = v___x_1640_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v___x_1647_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
return v___x_1649_;
}
}
}
}
}
else
{
lean_object* v_ks_1679_; lean_object* v_vs_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1698_; 
v_ks_1679_ = lean_ctor_get(v_x_1628_, 0);
v_vs_1680_ = lean_ctor_get(v_x_1628_, 1);
v_isSharedCheck_1698_ = !lean_is_exclusive(v_x_1628_);
if (v_isSharedCheck_1698_ == 0)
{
v___x_1682_ = v_x_1628_;
v_isShared_1683_ = v_isSharedCheck_1698_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_vs_1680_);
lean_inc(v_ks_1679_);
lean_dec(v_x_1628_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1698_;
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
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v_ks_1679_);
lean_ctor_set(v_reuseFailAlloc_1697_, 1, v_vs_1680_);
v___x_1685_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
lean_object* v_newNode_1686_; size_t v___x_1687_; uint8_t v___x_1688_; 
v_newNode_1686_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3___redArg(v___x_1685_, v_x_1631_, v_x_1632_);
v___x_1687_ = ((size_t)7ULL);
v___x_1688_ = lean_usize_dec_le(v___x_1687_, v_x_1630_);
if (v___x_1688_ == 0)
{
lean_object* v___x_1689_; lean_object* v___x_1690_; uint8_t v___x_1691_; 
v___x_1689_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1686_);
v___x_1690_ = lean_unsigned_to_nat(4u);
v___x_1691_ = lean_nat_dec_lt(v___x_1689_, v___x_1690_);
lean_dec(v___x_1689_);
if (v___x_1691_ == 0)
{
lean_object* v_ks_1692_; lean_object* v_vs_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v_ks_1692_ = lean_ctor_get(v_newNode_1686_, 0);
lean_inc_ref(v_ks_1692_);
v_vs_1693_ = lean_ctor_get(v_newNode_1686_, 1);
lean_inc_ref(v_vs_1693_);
lean_dec_ref(v_newNode_1686_);
v___x_1694_ = lean_unsigned_to_nat(0u);
v___x_1695_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0);
v___x_1696_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(v_x_1630_, v_ks_1692_, v_vs_1693_, v___x_1694_, v___x_1695_);
lean_dec_ref(v_vs_1693_);
lean_dec_ref(v_ks_1692_);
return v___x_1696_;
}
else
{
return v_newNode_1686_;
}
}
else
{
return v_newNode_1686_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(size_t v_depth_1699_, lean_object* v_keys_1700_, lean_object* v_vals_1701_, lean_object* v_i_1702_, lean_object* v_entries_1703_){
_start:
{
lean_object* v___x_1704_; uint8_t v___x_1705_; 
v___x_1704_ = lean_array_get_size(v_keys_1700_);
v___x_1705_ = lean_nat_dec_lt(v_i_1702_, v___x_1704_);
if (v___x_1705_ == 0)
{
lean_dec(v_i_1702_);
return v_entries_1703_;
}
else
{
lean_object* v_k_1706_; lean_object* v_v_1707_; uint64_t v___x_1708_; size_t v_h_1709_; size_t v___x_1710_; lean_object* v___x_1711_; size_t v___x_1712_; size_t v___x_1713_; size_t v___x_1714_; size_t v_h_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
v_k_1706_ = lean_array_fget_borrowed(v_keys_1700_, v_i_1702_);
v_v_1707_ = lean_array_fget_borrowed(v_vals_1701_, v_i_1702_);
v___x_1708_ = l_Lean_instHashableMVarId_hash(v_k_1706_);
v_h_1709_ = lean_uint64_to_usize(v___x_1708_);
v___x_1710_ = ((size_t)5ULL);
v___x_1711_ = lean_unsigned_to_nat(1u);
v___x_1712_ = ((size_t)1ULL);
v___x_1713_ = lean_usize_sub(v_depth_1699_, v___x_1712_);
v___x_1714_ = lean_usize_mul(v___x_1710_, v___x_1713_);
v_h_1715_ = lean_usize_shift_right(v_h_1709_, v___x_1714_);
v___x_1716_ = lean_nat_add(v_i_1702_, v___x_1711_);
lean_dec(v_i_1702_);
lean_inc(v_v_1707_);
lean_inc(v_k_1706_);
v___x_1717_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_entries_1703_, v_h_1715_, v_depth_1699_, v_k_1706_, v_v_1707_);
v_i_1702_ = v___x_1716_;
v_entries_1703_ = v___x_1717_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_depth_1719_, lean_object* v_keys_1720_, lean_object* v_vals_1721_, lean_object* v_i_1722_, lean_object* v_entries_1723_){
_start:
{
size_t v_depth_boxed_1724_; lean_object* v_res_1725_; 
v_depth_boxed_1724_ = lean_unbox_usize(v_depth_1719_);
lean_dec(v_depth_1719_);
v_res_1725_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(v_depth_boxed_1724_, v_keys_1720_, v_vals_1721_, v_i_1722_, v_entries_1723_);
lean_dec_ref(v_vals_1721_);
lean_dec_ref(v_keys_1720_);
return v_res_1725_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_x_1726_, lean_object* v_x_1727_, lean_object* v_x_1728_, lean_object* v_x_1729_, lean_object* v_x_1730_){
_start:
{
size_t v_x_2102__boxed_1731_; size_t v_x_2103__boxed_1732_; lean_object* v_res_1733_; 
v_x_2102__boxed_1731_ = lean_unbox_usize(v_x_1727_);
lean_dec(v_x_1727_);
v_x_2103__boxed_1732_ = lean_unbox_usize(v_x_1728_);
lean_dec(v_x_1728_);
v_res_1733_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_x_1726_, v_x_2102__boxed_1731_, v_x_2103__boxed_1732_, v_x_1729_, v_x_1730_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1___redArg(lean_object* v_x_1734_, lean_object* v_x_1735_, lean_object* v_x_1736_){
_start:
{
uint64_t v___x_1737_; size_t v___x_1738_; size_t v___x_1739_; lean_object* v___x_1740_; 
v___x_1737_ = l_Lean_instHashableMVarId_hash(v_x_1735_);
v___x_1738_ = lean_uint64_to_usize(v___x_1737_);
v___x_1739_ = ((size_t)1ULL);
v___x_1740_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_x_1734_, v___x_1738_, v___x_1739_, v_x_1735_, v_x_1736_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(lean_object* v_mvarId_1741_, lean_object* v_val_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v___x_1745_; lean_object* v_mctx_1746_; lean_object* v_cache_1747_; lean_object* v_zetaDeltaFVarIds_1748_; lean_object* v_postponed_1749_; lean_object* v_diag_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1779_; 
v___x_1745_ = lean_st_ref_take(v___y_1743_);
v_mctx_1746_ = lean_ctor_get(v___x_1745_, 0);
v_cache_1747_ = lean_ctor_get(v___x_1745_, 1);
v_zetaDeltaFVarIds_1748_ = lean_ctor_get(v___x_1745_, 2);
v_postponed_1749_ = lean_ctor_get(v___x_1745_, 3);
v_diag_1750_ = lean_ctor_get(v___x_1745_, 4);
v_isSharedCheck_1779_ = !lean_is_exclusive(v___x_1745_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1752_ = v___x_1745_;
v_isShared_1753_ = v_isSharedCheck_1779_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_diag_1750_);
lean_inc(v_postponed_1749_);
lean_inc(v_zetaDeltaFVarIds_1748_);
lean_inc(v_cache_1747_);
lean_inc(v_mctx_1746_);
lean_dec(v___x_1745_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1779_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v_depth_1754_; lean_object* v_levelAssignDepth_1755_; lean_object* v_lmvarCounter_1756_; lean_object* v_mvarCounter_1757_; lean_object* v_lDecls_1758_; lean_object* v_decls_1759_; lean_object* v_userNames_1760_; lean_object* v_lAssignment_1761_; lean_object* v_eAssignment_1762_; lean_object* v_dAssignment_1763_; lean_object* v_instanceTypedMVars_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1778_; 
v_depth_1754_ = lean_ctor_get(v_mctx_1746_, 0);
v_levelAssignDepth_1755_ = lean_ctor_get(v_mctx_1746_, 1);
v_lmvarCounter_1756_ = lean_ctor_get(v_mctx_1746_, 2);
v_mvarCounter_1757_ = lean_ctor_get(v_mctx_1746_, 3);
v_lDecls_1758_ = lean_ctor_get(v_mctx_1746_, 4);
v_decls_1759_ = lean_ctor_get(v_mctx_1746_, 5);
v_userNames_1760_ = lean_ctor_get(v_mctx_1746_, 6);
v_lAssignment_1761_ = lean_ctor_get(v_mctx_1746_, 7);
v_eAssignment_1762_ = lean_ctor_get(v_mctx_1746_, 8);
v_dAssignment_1763_ = lean_ctor_get(v_mctx_1746_, 9);
v_instanceTypedMVars_1764_ = lean_ctor_get(v_mctx_1746_, 10);
v_isSharedCheck_1778_ = !lean_is_exclusive(v_mctx_1746_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1766_ = v_mctx_1746_;
v_isShared_1767_ = v_isSharedCheck_1778_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_instanceTypedMVars_1764_);
lean_inc(v_dAssignment_1763_);
lean_inc(v_eAssignment_1762_);
lean_inc(v_lAssignment_1761_);
lean_inc(v_userNames_1760_);
lean_inc(v_decls_1759_);
lean_inc(v_lDecls_1758_);
lean_inc(v_mvarCounter_1757_);
lean_inc(v_lmvarCounter_1756_);
lean_inc(v_levelAssignDepth_1755_);
lean_inc(v_depth_1754_);
lean_dec(v_mctx_1746_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1778_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1771_; 
v___x_1768_ = lean_box(0);
v___x_1769_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1___redArg(v_eAssignment_1762_, v_mvarId_1741_, v_val_1742_);
if (v_isShared_1767_ == 0)
{
lean_ctor_set(v___x_1766_, 8, v___x_1769_);
v___x_1771_ = v___x_1766_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_depth_1754_);
lean_ctor_set(v_reuseFailAlloc_1777_, 1, v_levelAssignDepth_1755_);
lean_ctor_set(v_reuseFailAlloc_1777_, 2, v_lmvarCounter_1756_);
lean_ctor_set(v_reuseFailAlloc_1777_, 3, v_mvarCounter_1757_);
lean_ctor_set(v_reuseFailAlloc_1777_, 4, v_lDecls_1758_);
lean_ctor_set(v_reuseFailAlloc_1777_, 5, v_decls_1759_);
lean_ctor_set(v_reuseFailAlloc_1777_, 6, v_userNames_1760_);
lean_ctor_set(v_reuseFailAlloc_1777_, 7, v_lAssignment_1761_);
lean_ctor_set(v_reuseFailAlloc_1777_, 8, v___x_1769_);
lean_ctor_set(v_reuseFailAlloc_1777_, 9, v_dAssignment_1763_);
lean_ctor_set(v_reuseFailAlloc_1777_, 10, v_instanceTypedMVars_1764_);
v___x_1771_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
lean_object* v___x_1773_; 
if (v_isShared_1753_ == 0)
{
lean_ctor_set(v___x_1752_, 0, v___x_1771_);
v___x_1773_ = v___x_1752_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v___x_1771_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v_cache_1747_);
lean_ctor_set(v_reuseFailAlloc_1776_, 2, v_zetaDeltaFVarIds_1748_);
lean_ctor_set(v_reuseFailAlloc_1776_, 3, v_postponed_1749_);
lean_ctor_set(v_reuseFailAlloc_1776_, 4, v_diag_1750_);
v___x_1773_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; 
v___x_1774_ = lean_st_ref_put(v___y_1743_, v___x_1773_);
v___x_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1768_);
return v___x_1775_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg___boxed(lean_object* v_mvarId_1780_, lean_object* v_val_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(v_mvarId_1780_, v_val_1781_, v___y_1782_);
lean_dec(v___y_1782_);
return v_res_1784_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1787_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__6));
v___x_1788_ = lean_unsigned_to_nat(41u);
v___x_1789_ = lean_unsigned_to_nat(113u);
v___x_1790_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1));
v___x_1791_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0));
v___x_1792_ = l_mkPanicMessageWithDecl(v___x_1791_, v___x_1790_, v___x_1789_, v___x_1788_, v___x_1787_);
return v___x_1792_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1793_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__6));
v___x_1794_ = lean_unsigned_to_nat(51u);
v___x_1795_ = lean_unsigned_to_nat(115u);
v___x_1796_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1));
v___x_1797_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0));
v___x_1798_ = l_mkPanicMessageWithDecl(v___x_1797_, v___x_1796_, v___x_1795_, v___x_1794_, v___x_1793_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0(lean_object* v_mvarId_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_){
_start:
{
lean_object* v___x_1805_; 
lean_inc(v_mvarId_1799_);
v___x_1805_ = l_Lean_MVarId_getType_x27(v_mvarId_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v_a_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; uint8_t v___x_1809_; 
v_a_1806_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_a_1806_);
lean_dec_ref_known(v___x_1805_, 1);
v___x_1807_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1));
v___x_1808_ = lean_unsigned_to_nat(3u);
v___x_1809_ = l_Lean_Expr_isAppOfArity(v_a_1806_, v___x_1807_, v___x_1808_);
if (v___x_1809_ == 0)
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
lean_dec(v_a_1806_);
lean_dec(v_mvarId_1799_);
v___x_1810_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2);
v___x_1811_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(v___x_1810_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
return v___x_1811_;
}
else
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1812_ = l_Lean_Expr_appFn_x21(v_a_1806_);
v___x_1813_ = l_Lean_Expr_appArg_x21(v___x_1812_);
lean_dec_ref(v___x_1812_);
v___x_1814_ = l_Lean_Expr_appArg_x21(v_a_1806_);
lean_dec(v_a_1806_);
v___x_1815_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(v___x_1813_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
if (lean_obj_tag(v___x_1815_) == 0)
{
lean_object* v_a_1816_; lean_object* v___x_1817_; 
v_a_1816_ = lean_ctor_get(v___x_1815_, 0);
lean_inc_n(v_a_1816_, 2);
lean_dec_ref_known(v___x_1815_, 1);
lean_inc(v___y_1803_);
lean_inc_ref(v___y_1802_);
lean_inc(v___y_1801_);
lean_inc_ref(v___y_1800_);
v___x_1817_ = lean_infer_type(v_a_1816_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
if (lean_obj_tag(v___x_1817_) == 0)
{
lean_object* v_a_1818_; uint8_t v___x_1819_; 
v_a_1818_ = lean_ctor_get(v___x_1817_, 0);
lean_inc(v_a_1818_);
lean_dec_ref_known(v___x_1817_, 1);
v___x_1819_ = l_Lean_Expr_isAppOfArity(v_a_1818_, v___x_1807_, v___x_1808_);
if (v___x_1819_ == 0)
{
lean_object* v___x_1820_; lean_object* v___x_1821_; 
lean_dec(v_a_1818_);
lean_dec(v_a_1816_);
lean_dec_ref(v___x_1814_);
lean_dec(v_mvarId_1799_);
v___x_1820_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3);
v___x_1821_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(v___x_1820_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
return v___x_1821_;
}
else
{
lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1822_ = l_Lean_Expr_appArg_x21(v_a_1818_);
lean_dec(v_a_1818_);
v___x_1823_ = l_Lean_Meta_mkEq(v___x_1822_, v___x_1814_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1823_, 1);
v___x_1825_ = lean_box(0);
v___x_1826_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1824_, v___x_1825_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v_a_1827_; lean_object* v___x_1828_; 
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc_n(v_a_1827_, 2);
lean_dec_ref_known(v___x_1826_, 1);
v___x_1828_ = l_Lean_Meta_mkEqTrans(v_a_1816_, v_a_1827_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec_ref(v___y_1800_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; lean_object* v___x_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1838_; 
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
lean_inc(v_a_1829_);
lean_dec_ref_known(v___x_1828_, 1);
v___x_1830_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(v_mvarId_1799_, v_a_1829_, v___y_1801_);
lean_dec(v___y_1801_);
v_isSharedCheck_1838_ = !lean_is_exclusive(v___x_1830_);
if (v_isSharedCheck_1838_ == 0)
{
lean_object* v_unused_1839_; 
v_unused_1839_ = lean_ctor_get(v___x_1830_, 0);
lean_dec(v_unused_1839_);
v___x_1832_ = v___x_1830_;
v_isShared_1833_ = v_isSharedCheck_1838_;
goto v_resetjp_1831_;
}
else
{
lean_dec(v___x_1830_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1838_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v___x_1834_; lean_object* v___x_1836_; 
v___x_1834_ = l_Lean_Expr_mvarId_x21(v_a_1827_);
lean_dec(v_a_1827_);
if (v_isShared_1833_ == 0)
{
lean_ctor_set(v___x_1832_, 0, v___x_1834_);
v___x_1836_ = v___x_1832_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v___x_1834_);
v___x_1836_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
return v___x_1836_;
}
}
}
else
{
lean_object* v_a_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1847_; 
lean_dec(v_a_1827_);
lean_dec(v___y_1801_);
lean_dec(v_mvarId_1799_);
v_a_1840_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1842_ = v___x_1828_;
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_a_1840_);
lean_dec(v___x_1828_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1845_; 
if (v_isShared_1843_ == 0)
{
v___x_1845_ = v___x_1842_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_a_1840_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
return v___x_1845_;
}
}
}
}
else
{
lean_object* v_a_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1855_; 
lean_dec(v_a_1816_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
lean_dec(v_mvarId_1799_);
v_a_1848_ = lean_ctor_get(v___x_1826_, 0);
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1850_ = v___x_1826_;
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_a_1848_);
lean_dec(v___x_1826_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1853_; 
if (v_isShared_1851_ == 0)
{
v___x_1853_ = v___x_1850_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_a_1848_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
}
else
{
lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1863_; 
lean_dec(v_a_1816_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
lean_dec(v_mvarId_1799_);
v_a_1856_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1858_ = v___x_1823_;
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_dec(v___x_1823_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1861_; 
if (v_isShared_1859_ == 0)
{
v___x_1861_ = v___x_1858_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_a_1856_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
}
}
}
else
{
lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1871_; 
lean_dec(v_a_1816_);
lean_dec_ref(v___x_1814_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
lean_dec(v_mvarId_1799_);
v_a_1864_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1866_ = v___x_1817_;
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1817_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1869_; 
if (v_isShared_1867_ == 0)
{
v___x_1869_ = v___x_1866_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_a_1864_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
else
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1879_; 
lean_dec_ref(v___x_1814_);
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
lean_dec(v_mvarId_1799_);
v_a_1872_ = lean_ctor_get(v___x_1815_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1815_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1874_ = v___x_1815_;
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1815_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1877_; 
if (v_isShared_1875_ == 0)
{
v___x_1877_ = v___x_1874_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_a_1872_);
v___x_1877_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
return v___x_1877_;
}
}
}
}
}
else
{
lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1887_; 
lean_dec(v___y_1803_);
lean_dec_ref(v___y_1802_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
lean_dec(v_mvarId_1799_);
v_a_1880_ = lean_ctor_get(v___x_1805_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1882_ = v___x_1805_;
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_dec(v___x_1805_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1885_; 
if (v_isShared_1883_ == 0)
{
v___x_1885_ = v___x_1882_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_a_1880_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___boxed(lean_object* v_mvarId_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0(v_mvarId_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq(lean_object* v_mvarId_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_){
_start:
{
lean_object* v___f_1901_; lean_object* v___x_1902_; 
lean_inc(v_mvarId_1895_);
v___f_1901_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1901_, 0, v_mvarId_1895_);
v___x_1902_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(v_mvarId_1895_, v___f_1901_, v_a_1896_, v_a_1897_, v_a_1898_, v_a_1899_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___boxed(lean_object* v_mvarId_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_){
_start:
{
lean_object* v_res_1909_; 
v_res_1909_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq(v_mvarId_1903_, v_a_1904_, v_a_1905_, v_a_1906_, v_a_1907_);
lean_dec(v_a_1907_);
lean_dec_ref(v_a_1906_);
lean_dec(v_a_1905_);
lean_dec_ref(v_a_1904_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1(lean_object* v_mvarId_1910_, lean_object* v_val_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_){
_start:
{
lean_object* v___x_1917_; 
v___x_1917_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(v_mvarId_1910_, v_val_1911_, v___y_1913_);
return v___x_1917_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___boxed(lean_object* v_mvarId_1918_, lean_object* v_val_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1(v_mvarId_1918_, v_val_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1(lean_object* v_00_u03b2_1926_, lean_object* v_x_1927_, lean_object* v_x_1928_, lean_object* v_x_1929_){
_start:
{
lean_object* v___x_1930_; 
v___x_1930_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1___redArg(v_x_1927_, v_x_1928_, v_x_1929_);
return v___x_1930_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_1931_, lean_object* v_x_1932_, size_t v_x_1933_, size_t v_x_1934_, lean_object* v_x_1935_, lean_object* v_x_1936_){
_start:
{
lean_object* v___x_1937_; 
v___x_1937_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_x_1932_, v_x_1933_, v_x_1934_, v_x_1935_, v_x_1936_);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1938_, lean_object* v_x_1939_, lean_object* v_x_1940_, lean_object* v_x_1941_, lean_object* v_x_1942_, lean_object* v_x_1943_){
_start:
{
size_t v_x_2576__boxed_1944_; size_t v_x_2577__boxed_1945_; lean_object* v_res_1946_; 
v_x_2576__boxed_1944_ = lean_unbox_usize(v_x_1940_);
lean_dec(v_x_1940_);
v_x_2577__boxed_1945_ = lean_unbox_usize(v_x_1941_);
lean_dec(v_x_1941_);
v_res_1946_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2(v_00_u03b2_1938_, v_x_1939_, v_x_2576__boxed_1944_, v_x_2577__boxed_1945_, v_x_1942_, v_x_1943_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1947_, lean_object* v_n_1948_, lean_object* v_k_1949_, lean_object* v_v_1950_){
_start:
{
lean_object* v___x_1951_; 
v___x_1951_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3___redArg(v_n_1948_, v_k_1949_, v_v_1950_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1952_, size_t v_depth_1953_, lean_object* v_keys_1954_, lean_object* v_vals_1955_, lean_object* v_heq_1956_, lean_object* v_i_1957_, lean_object* v_entries_1958_){
_start:
{
lean_object* v___x_1959_; 
v___x_1959_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(v_depth_1953_, v_keys_1954_, v_vals_1955_, v_i_1957_, v_entries_1958_);
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1960_, lean_object* v_depth_1961_, lean_object* v_keys_1962_, lean_object* v_vals_1963_, lean_object* v_heq_1964_, lean_object* v_i_1965_, lean_object* v_entries_1966_){
_start:
{
size_t v_depth_boxed_1967_; lean_object* v_res_1968_; 
v_depth_boxed_1967_ = lean_unbox_usize(v_depth_1961_);
lean_dec(v_depth_1961_);
v_res_1968_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4(v_00_u03b2_1960_, v_depth_boxed_1967_, v_keys_1962_, v_vals_1963_, v_heq_1964_, v_i_1965_, v_entries_1966_);
lean_dec_ref(v_vals_1963_);
lean_dec_ref(v_keys_1962_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_1969_, lean_object* v_x_1970_, lean_object* v_x_1971_, lean_object* v_x_1972_, lean_object* v_x_1973_){
_start:
{
lean_object* v___x_1974_; 
v___x_1974_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(v_x_1970_, v_x_1971_, v_x_1972_, v_x_1973_);
return v___x_1974_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__0(lean_object* v_declNameNonRec_1975_, lean_object* v_numFixed_1976_, lean_object* v_x_1977_){
_start:
{
uint8_t v___x_1978_; 
v___x_1978_ = l_Lean_Expr_isAppOfArity(v_x_1977_, v_declNameNonRec_1975_, v_numFixed_1976_);
return v___x_1978_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__0___boxed(lean_object* v_declNameNonRec_1979_, lean_object* v_numFixed_1980_, lean_object* v_x_1981_){
_start:
{
uint8_t v_res_1982_; lean_object* v_r_1983_; 
v_res_1982_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__0(v_declNameNonRec_1979_, v_numFixed_1980_, v_x_1981_);
lean_dec_ref(v_x_1981_);
lean_dec(v_declNameNonRec_1979_);
v_r_1983_ = lean_box(v_res_1982_);
return v_r_1983_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; 
v___x_1985_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__6));
v___x_1986_ = lean_unsigned_to_nat(41u);
v___x_1987_ = lean_unsigned_to_nat(128u);
v___x_1988_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__0));
v___x_1989_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0));
v___x_1990_ = l_mkPanicMessageWithDecl(v___x_1989_, v___x_1988_, v___x_1987_, v___x_1986_, v___x_1985_);
return v___x_1990_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1991_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__1___closed__6));
v___x_1992_ = lean_unsigned_to_nat(51u);
v___x_1993_ = lean_unsigned_to_nat(134u);
v___x_1994_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__0));
v___x_1995_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0));
v___x_1996_ = l_mkPanicMessageWithDecl(v___x_1995_, v___x_1994_, v___x_1993_, v___x_1992_, v___x_1991_);
return v___x_1996_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__6(void){
_start:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_2001_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__5));
v___x_2002_ = l_Lean_stringToMessageData(v___x_2001_);
return v___x_2002_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__8(void){
_start:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___x_2004_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__7));
v___x_2005_ = l_Lean_stringToMessageData(v___x_2004_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1(lean_object* v_mvarId_2006_, lean_object* v___f_2007_, lean_object* v_fixEq_2008_, lean_object* v_declNameNonRec_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_){
_start:
{
lean_object* v___x_2015_; 
lean_inc(v_mvarId_2006_);
v___x_2015_ = l_Lean_MVarId_getType_x27(v_mvarId_2006_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; uint8_t v___x_2019_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2016_);
lean_dec_ref_known(v___x_2015_, 1);
v___x_2017_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1));
v___x_2018_ = lean_unsigned_to_nat(3u);
v___x_2019_ = l_Lean_Expr_isAppOfArity(v_a_2016_, v___x_2017_, v___x_2018_);
if (v___x_2019_ == 0)
{
lean_object* v___x_2020_; lean_object* v___x_2021_; 
lean_dec(v_a_2016_);
lean_dec(v_declNameNonRec_2009_);
lean_dec(v_fixEq_2008_);
lean_dec(v_mvarId_2006_);
v___x_2020_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__1);
v___x_2021_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(v___x_2020_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
return v___x_2021_;
}
else
{
lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; 
v___x_2022_ = l_Lean_Expr_appFn_x21(v_a_2016_);
v___x_2023_ = l_Lean_Expr_appArg_x21(v___x_2022_);
lean_dec_ref(v___x_2022_);
v___x_2024_ = lean_find_expr(v___f_2007_, v___x_2023_);
if (lean_obj_tag(v___x_2024_) == 1)
{
lean_object* v_val_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; 
lean_dec(v_declNameNonRec_2009_);
v_val_2025_ = lean_ctor_get(v___x_2024_, 0);
lean_inc_n(v_val_2025_, 2);
lean_dec_ref_known(v___x_2024_, 1);
v___x_2026_ = l_Lean_Expr_appArg_x21(v_a_2016_);
lean_dec(v_a_2016_);
lean_inc(v___y_2013_);
lean_inc_ref(v___y_2012_);
lean_inc(v___y_2011_);
lean_inc_ref(v___y_2010_);
v___x_2027_ = lean_infer_type(v_val_2025_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v_a_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v_a_2028_ = lean_ctor_get(v___x_2027_, 0);
lean_inc(v_a_2028_);
lean_dec_ref_known(v___x_2027_, 1);
v___x_2029_ = lean_box(0);
lean_inc(v_val_2025_);
v___x_2030_ = l_Lean_Meta_kabstract(v___x_2023_, v_val_2025_, v___x_2029_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
if (lean_obj_tag(v___x_2030_) == 0)
{
lean_object* v_a_2031_; lean_object* v___x_2032_; uint8_t v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v_dummy_2038_; lean_object* v_nargs_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v_a_2031_ = lean_ctor_get(v___x_2030_, 0);
lean_inc(v_a_2031_);
lean_dec_ref_known(v___x_2030_, 1);
v___x_2032_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__3));
v___x_2033_ = 0;
v___x_2034_ = l_Lean_mkLambda(v___x_2032_, v___x_2033_, v_a_2028_, v_a_2031_);
v___x_2035_ = l_Lean_Expr_getAppFn(v_val_2025_);
v___x_2036_ = l_Lean_Expr_constLevels_x21(v___x_2035_);
lean_dec_ref(v___x_2035_);
v___x_2037_ = l_Lean_mkConst(v_fixEq_2008_, v___x_2036_);
v_dummy_2038_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__1___closed__0);
v_nargs_2039_ = l_Lean_Expr_getAppNumArgs(v_val_2025_);
lean_inc(v_nargs_2039_);
v___x_2040_ = lean_mk_array(v_nargs_2039_, v_dummy_2038_);
v___x_2041_ = lean_unsigned_to_nat(1u);
v___x_2042_ = lean_nat_sub(v_nargs_2039_, v___x_2041_);
lean_dec(v_nargs_2039_);
v___x_2043_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_2025_, v___x_2040_, v___x_2042_);
v___x_2044_ = l_Lean_mkAppN(v___x_2037_, v___x_2043_);
lean_dec_ref(v___x_2043_);
v___x_2045_ = l_Lean_Meta_mkCongrArg(v___x_2034_, v___x_2044_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
if (lean_obj_tag(v___x_2045_) == 0)
{
lean_object* v_a_2046_; lean_object* v___x_2047_; 
v_a_2046_ = lean_ctor_get(v___x_2045_, 0);
lean_inc_n(v_a_2046_, 2);
lean_dec_ref_known(v___x_2045_, 1);
lean_inc(v___y_2013_);
lean_inc_ref(v___y_2012_);
lean_inc(v___y_2011_);
lean_inc_ref(v___y_2010_);
v___x_2047_ = lean_infer_type(v_a_2046_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
if (lean_obj_tag(v___x_2047_) == 0)
{
lean_object* v_a_2048_; uint8_t v___x_2049_; 
v_a_2048_ = lean_ctor_get(v___x_2047_, 0);
lean_inc(v_a_2048_);
lean_dec_ref_known(v___x_2047_, 1);
v___x_2049_ = l_Lean_Expr_isAppOfArity(v_a_2048_, v___x_2017_, v___x_2018_);
if (v___x_2049_ == 0)
{
lean_object* v___x_2050_; lean_object* v___x_2051_; 
lean_dec(v_a_2048_);
lean_dec(v_a_2046_);
lean_dec_ref(v___x_2026_);
lean_dec(v_mvarId_2006_);
v___x_2050_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__2);
v___x_2051_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(v___x_2050_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
return v___x_2051_;
}
else
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2052_ = l_Lean_Expr_appArg_x21(v_a_2048_);
lean_dec(v_a_2048_);
v___x_2053_ = l_Lean_Expr_headBeta(v___x_2052_);
v___x_2054_ = l_Lean_Meta_mkEq(v___x_2053_, v___x_2026_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
if (lean_obj_tag(v___x_2054_) == 0)
{
lean_object* v_a_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v_a_2055_ = lean_ctor_get(v___x_2054_, 0);
lean_inc(v_a_2055_);
lean_dec_ref_known(v___x_2054_, 1);
v___x_2056_ = lean_box(0);
v___x_2057_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_2055_, v___x_2056_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
if (lean_obj_tag(v___x_2057_) == 0)
{
lean_object* v_a_2058_; lean_object* v___x_2059_; 
v_a_2058_ = lean_ctor_get(v___x_2057_, 0);
lean_inc_n(v_a_2058_, 2);
lean_dec_ref_known(v___x_2057_, 1);
v___x_2059_ = l_Lean_Meta_mkEqTrans(v_a_2046_, v_a_2058_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec_ref(v___y_2010_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_object* v_a_2060_; lean_object* v___x_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2069_; 
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
lean_inc(v_a_2060_);
lean_dec_ref_known(v___x_2059_, 1);
v___x_2061_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(v_mvarId_2006_, v_a_2060_, v___y_2011_);
lean_dec(v___y_2011_);
v_isSharedCheck_2069_ = !lean_is_exclusive(v___x_2061_);
if (v_isSharedCheck_2069_ == 0)
{
lean_object* v_unused_2070_; 
v_unused_2070_ = lean_ctor_get(v___x_2061_, 0);
lean_dec(v_unused_2070_);
v___x_2063_ = v___x_2061_;
v_isShared_2064_ = v_isSharedCheck_2069_;
goto v_resetjp_2062_;
}
else
{
lean_dec(v___x_2061_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2069_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2065_; lean_object* v___x_2067_; 
v___x_2065_ = l_Lean_Expr_mvarId_x21(v_a_2058_);
lean_dec(v_a_2058_);
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 0, v___x_2065_);
v___x_2067_ = v___x_2063_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v___x_2065_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
else
{
lean_object* v_a_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2078_; 
lean_dec(v_a_2058_);
lean_dec(v___y_2011_);
lean_dec(v_mvarId_2006_);
v_a_2071_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2073_ = v___x_2059_;
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_a_2071_);
lean_dec(v___x_2059_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2076_; 
if (v_isShared_2074_ == 0)
{
v___x_2076_ = v___x_2073_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v_a_2071_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
}
}
else
{
lean_object* v_a_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2086_; 
lean_dec(v_a_2046_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec(v_mvarId_2006_);
v_a_2079_ = lean_ctor_get(v___x_2057_, 0);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2086_ == 0)
{
v___x_2081_ = v___x_2057_;
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_a_2079_);
lean_dec(v___x_2057_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2084_; 
if (v_isShared_2082_ == 0)
{
v___x_2084_ = v___x_2081_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v_a_2079_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
return v___x_2084_;
}
}
}
}
else
{
lean_object* v_a_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2094_; 
lean_dec(v_a_2046_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec(v_mvarId_2006_);
v_a_2087_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2089_ = v___x_2054_;
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_a_2087_);
lean_dec(v___x_2054_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2092_; 
if (v_isShared_2090_ == 0)
{
v___x_2092_ = v___x_2089_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_a_2087_);
v___x_2092_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
return v___x_2092_;
}
}
}
}
}
else
{
lean_object* v_a_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2102_; 
lean_dec(v_a_2046_);
lean_dec_ref(v___x_2026_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec(v_mvarId_2006_);
v_a_2095_ = lean_ctor_get(v___x_2047_, 0);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2097_ = v___x_2047_;
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_a_2095_);
lean_dec(v___x_2047_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v___x_2100_; 
if (v_isShared_2098_ == 0)
{
v___x_2100_ = v___x_2097_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_a_2095_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
}
else
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2110_; 
lean_dec_ref(v___x_2026_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec(v_mvarId_2006_);
v_a_2103_ = lean_ctor_get(v___x_2045_, 0);
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2105_ = v___x_2045_;
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2045_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_a_2103_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
}
else
{
lean_object* v_a_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2118_; 
lean_dec(v_a_2028_);
lean_dec_ref(v___x_2026_);
lean_dec(v_val_2025_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec(v_fixEq_2008_);
lean_dec(v_mvarId_2006_);
v_a_2111_ = lean_ctor_get(v___x_2030_, 0);
v_isSharedCheck_2118_ = !lean_is_exclusive(v___x_2030_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2113_ = v___x_2030_;
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_a_2111_);
lean_dec(v___x_2030_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v___x_2116_; 
if (v_isShared_2114_ == 0)
{
v___x_2116_ = v___x_2113_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_a_2111_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
}
}
else
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2126_; 
lean_dec_ref(v___x_2026_);
lean_dec(v_val_2025_);
lean_dec_ref(v___x_2023_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec(v_fixEq_2008_);
lean_dec(v_mvarId_2006_);
v_a_2119_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2121_ = v___x_2027_;
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2027_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2124_; 
if (v_isShared_2122_ == 0)
{
v___x_2124_ = v___x_2121_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v_a_2119_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
return v___x_2124_;
}
}
}
}
else
{
lean_object* v___x_2127_; lean_object* v___x_2128_; uint8_t v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
lean_dec(v___x_2024_);
lean_dec_ref(v___x_2023_);
lean_dec(v_a_2016_);
lean_dec(v_fixEq_2008_);
v___x_2127_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__4));
v___x_2128_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__6, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__6);
v___x_2129_ = 0;
v___x_2130_ = l_Lean_MessageData_ofConstName(v_declNameNonRec_2009_, v___x_2129_);
v___x_2131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2128_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
v___x_2132_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__8, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___closed__8);
v___x_2133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2131_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
v___x_2134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2133_);
v___x_2135_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2127_, v_mvarId_2006_, v___x_2134_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
return v___x_2135_;
}
}
}
else
{
lean_object* v_a_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2143_; 
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec(v_declNameNonRec_2009_);
lean_dec(v_fixEq_2008_);
lean_dec(v_mvarId_2006_);
v_a_2136_ = lean_ctor_get(v___x_2015_, 0);
v_isSharedCheck_2143_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2138_ = v___x_2015_;
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_a_2136_);
lean_dec(v___x_2015_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2141_; 
if (v_isShared_2139_ == 0)
{
v___x_2141_ = v___x_2138_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v_a_2136_);
v___x_2141_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
return v___x_2141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___boxed(lean_object* v_mvarId_2144_, lean_object* v___f_2145_, lean_object* v_fixEq_2146_, lean_object* v_declNameNonRec_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_){
_start:
{
lean_object* v_res_2153_; 
v_res_2153_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1(v_mvarId_2144_, v___f_2145_, v_fixEq_2146_, v_declNameNonRec_2147_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_);
lean_dec_ref(v___f_2145_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith(lean_object* v_declNameNonRec_2154_, lean_object* v_fixEq_2155_, lean_object* v_numFixed_2156_, lean_object* v_mvarId_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_){
_start:
{
lean_object* v___f_2163_; lean_object* v___f_2164_; lean_object* v___x_2165_; 
lean_inc(v_declNameNonRec_2154_);
v___f_2163_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2163_, 0, v_declNameNonRec_2154_);
lean_closure_set(v___f_2163_, 1, v_numFixed_2156_);
lean_inc(v_mvarId_2157_);
v___f_2164_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___lam__1___boxed), 9, 4);
lean_closure_set(v___f_2164_, 0, v_mvarId_2157_);
lean_closure_set(v___f_2164_, 1, v___f_2163_);
lean_closure_set(v___f_2164_, 2, v_fixEq_2155_);
lean_closure_set(v___f_2164_, 3, v_declNameNonRec_2154_);
v___x_2165_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(v_mvarId_2157_, v___f_2164_, v_a_2158_, v_a_2159_, v_a_2160_, v_a_2161_);
return v___x_2165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith___boxed(lean_object* v_declNameNonRec_2166_, lean_object* v_fixEq_2167_, lean_object* v_numFixed_2168_, lean_object* v_mvarId_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_){
_start:
{
lean_object* v_res_2175_; 
v_res_2175_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith(v_declNameNonRec_2166_, v_fixEq_2167_, v_numFixed_2168_, v_mvarId_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_);
lean_dec(v_a_2173_);
lean_dec_ref(v_a_2172_);
lean_dec(v_a_2171_);
lean_dec_ref(v_a_2170_);
return v_res_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0___redArg(lean_object* v_e_2176_, lean_object* v___y_2177_){
_start:
{
uint8_t v___x_2179_; 
v___x_2179_ = l_Lean_Expr_hasMVar(v_e_2176_);
if (v___x_2179_ == 0)
{
lean_object* v___x_2180_; 
v___x_2180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2180_, 0, v_e_2176_);
return v___x_2180_;
}
else
{
lean_object* v___x_2181_; lean_object* v_mctx_2182_; lean_object* v___x_2183_; lean_object* v_fst_2184_; lean_object* v_snd_2185_; lean_object* v___x_2186_; lean_object* v_cache_2187_; lean_object* v_zetaDeltaFVarIds_2188_; lean_object* v_postponed_2189_; lean_object* v_diag_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2199_; 
v___x_2181_ = lean_st_ref_get(v___y_2177_);
v_mctx_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc_ref(v_mctx_2182_);
lean_dec(v___x_2181_);
v___x_2183_ = l_Lean_instantiateMVarsCore(v_mctx_2182_, v_e_2176_);
v_fst_2184_ = lean_ctor_get(v___x_2183_, 0);
lean_inc(v_fst_2184_);
v_snd_2185_ = lean_ctor_get(v___x_2183_, 1);
lean_inc(v_snd_2185_);
lean_dec_ref(v___x_2183_);
v___x_2186_ = lean_st_ref_take(v___y_2177_);
v_cache_2187_ = lean_ctor_get(v___x_2186_, 1);
v_zetaDeltaFVarIds_2188_ = lean_ctor_get(v___x_2186_, 2);
v_postponed_2189_ = lean_ctor_get(v___x_2186_, 3);
v_diag_2190_ = lean_ctor_get(v___x_2186_, 4);
v_isSharedCheck_2199_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2199_ == 0)
{
lean_object* v_unused_2200_; 
v_unused_2200_ = lean_ctor_get(v___x_2186_, 0);
lean_dec(v_unused_2200_);
v___x_2192_ = v___x_2186_;
v_isShared_2193_ = v_isSharedCheck_2199_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_diag_2190_);
lean_inc(v_postponed_2189_);
lean_inc(v_zetaDeltaFVarIds_2188_);
lean_inc(v_cache_2187_);
lean_dec(v___x_2186_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2199_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2195_; 
if (v_isShared_2193_ == 0)
{
lean_ctor_set(v___x_2192_, 0, v_snd_2185_);
v___x_2195_ = v___x_2192_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v_snd_2185_);
lean_ctor_set(v_reuseFailAlloc_2198_, 1, v_cache_2187_);
lean_ctor_set(v_reuseFailAlloc_2198_, 2, v_zetaDeltaFVarIds_2188_);
lean_ctor_set(v_reuseFailAlloc_2198_, 3, v_postponed_2189_);
lean_ctor_set(v_reuseFailAlloc_2198_, 4, v_diag_2190_);
v___x_2195_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2196_ = lean_st_ref_put(v___y_2177_, v___x_2195_);
v___x_2197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2197_, 0, v_fst_2184_);
return v___x_2197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0___redArg___boxed(lean_object* v_e_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v_res_2204_; 
v_res_2204_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0___redArg(v_e_2201_, v___y_2202_);
lean_dec(v___y_2202_);
return v_res_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0(lean_object* v_e_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_){
_start:
{
lean_object* v___x_2211_; 
v___x_2211_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0___redArg(v_e_2205_, v___y_2207_);
return v___x_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0___boxed(lean_object* v_e_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0(v_e_2212_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_);
lean_dec(v___y_2216_);
lean_dec_ref(v___y_2215_);
lean_dec(v___y_2214_);
lean_dec_ref(v___y_2213_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(lean_object* v_opts_2219_, lean_object* v_opt_2220_){
_start:
{
lean_object* v_name_2221_; lean_object* v_defValue_2222_; lean_object* v_map_2223_; lean_object* v___x_2224_; 
v_name_2221_ = lean_ctor_get(v_opt_2220_, 0);
v_defValue_2222_ = lean_ctor_get(v_opt_2220_, 1);
v_map_2223_ = lean_ctor_get(v_opts_2219_, 0);
v___x_2224_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2223_, v_name_2221_);
if (lean_obj_tag(v___x_2224_) == 0)
{
lean_inc(v_defValue_2222_);
return v_defValue_2222_;
}
else
{
lean_object* v_val_2225_; 
v_val_2225_ = lean_ctor_get(v___x_2224_, 0);
lean_inc(v_val_2225_);
lean_dec_ref_known(v___x_2224_, 1);
if (lean_obj_tag(v_val_2225_) == 3)
{
lean_object* v_v_2226_; 
v_v_2226_ = lean_ctor_get(v_val_2225_, 0);
lean_inc(v_v_2226_);
lean_dec_ref_known(v_val_2225_, 1);
return v_v_2226_;
}
else
{
lean_dec(v_val_2225_);
lean_inc(v_defValue_2222_);
return v_defValue_2222_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___boxed(lean_object* v_opts_2227_, lean_object* v_opt_2228_){
_start:
{
lean_object* v_res_2229_; 
v_res_2229_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(v_opts_2227_, v_opt_2228_);
lean_dec_ref(v_opt_2228_);
lean_dec_ref(v_opts_2227_);
return v_res_2229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4___redArg(lean_object* v_k_2230_, uint8_t v_allowLevelAssignments_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_){
_start:
{
lean_object* v___x_2237_; 
v___x_2237_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_2231_, v_k_2230_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_);
if (lean_obj_tag(v___x_2237_) == 0)
{
lean_object* v_a_2238_; lean_object* v___x_2240_; uint8_t v_isShared_2241_; uint8_t v_isSharedCheck_2245_; 
v_a_2238_ = lean_ctor_get(v___x_2237_, 0);
v_isSharedCheck_2245_ = !lean_is_exclusive(v___x_2237_);
if (v_isSharedCheck_2245_ == 0)
{
v___x_2240_ = v___x_2237_;
v_isShared_2241_ = v_isSharedCheck_2245_;
goto v_resetjp_2239_;
}
else
{
lean_inc(v_a_2238_);
lean_dec(v___x_2237_);
v___x_2240_ = lean_box(0);
v_isShared_2241_ = v_isSharedCheck_2245_;
goto v_resetjp_2239_;
}
v_resetjp_2239_:
{
lean_object* v___x_2243_; 
if (v_isShared_2241_ == 0)
{
v___x_2243_ = v___x_2240_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v_a_2238_);
v___x_2243_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
return v___x_2243_;
}
}
}
else
{
lean_object* v_a_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2253_; 
v_a_2246_ = lean_ctor_get(v___x_2237_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v___x_2237_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2248_ = v___x_2237_;
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_a_2246_);
lean_dec(v___x_2237_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2251_; 
if (v_isShared_2249_ == 0)
{
v___x_2251_ = v___x_2248_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_a_2246_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
return v___x_2251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4___redArg___boxed(lean_object* v_k_2254_, lean_object* v_allowLevelAssignments_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2261_; lean_object* v_res_2262_; 
v_allowLevelAssignments_boxed_2261_ = lean_unbox(v_allowLevelAssignments_2255_);
v_res_2262_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4___redArg(v_k_2254_, v_allowLevelAssignments_boxed_2261_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
lean_dec(v___y_2259_);
lean_dec_ref(v___y_2258_);
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2256_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4(lean_object* v_00_u03b1_2263_, lean_object* v_k_2264_, uint8_t v_allowLevelAssignments_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_){
_start:
{
lean_object* v___x_2271_; 
v___x_2271_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4___redArg(v_k_2264_, v_allowLevelAssignments_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4___boxed(lean_object* v_00_u03b1_2272_, lean_object* v_k_2273_, lean_object* v_allowLevelAssignments_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2280_; lean_object* v_res_2281_; 
v_allowLevelAssignments_boxed_2280_ = lean_unbox(v_allowLevelAssignments_2274_);
v_res_2281_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4(v_00_u03b1_2272_, v_k_2273_, v_allowLevelAssignments_boxed_2280_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
lean_dec(v___y_2276_);
lean_dec_ref(v___y_2275_);
return v_res_2281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0(lean_object* v___x_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_){
_start:
{
lean_object* v_toCold_2291_; lean_object* v_options_2292_; uint8_t v_hasTrace_2293_; 
v_toCold_2291_ = lean_ctor_get(v___y_2288_, 0);
v_options_2292_ = lean_ctor_get(v_toCold_2291_, 2);
v_hasTrace_2293_ = lean_ctor_get_uint8(v_options_2292_, sizeof(void*)*1);
if (v_hasTrace_2293_ == 0)
{
lean_object* v___x_2294_; lean_object* v___x_2295_; 
lean_dec(v___x_2285_);
v___x_2294_ = lean_box(v_hasTrace_2293_);
v___x_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2294_);
return v___x_2295_;
}
else
{
lean_object* v_inheritedTraceOptions_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; uint8_t v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v_inheritedTraceOptions_2296_ = lean_ctor_get(v_toCold_2291_, 11);
v___x_2297_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1));
v___x_2298_ = l_Lean_Name_append(v___x_2297_, v___x_2285_);
v___x_2299_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2296_, v_options_2292_, v___x_2298_);
lean_dec(v___x_2298_);
v___x_2300_ = lean_box(v___x_2299_);
v___x_2301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2300_);
return v___x_2301_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___boxed(lean_object* v___x_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0(v___x_2302_, v___y_2303_, v___y_2304_, v___y_2305_, v___y_2306_);
lean_dec(v___y_2306_);
lean_dec_ref(v___y_2305_);
lean_dec(v___y_2304_);
lean_dec_ref(v___y_2303_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3_spec__3(lean_object* v_o_2309_, lean_object* v_k_2310_, uint8_t v_v_2311_){
_start:
{
lean_object* v_map_2312_; uint8_t v_hasTrace_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2327_; 
v_map_2312_ = lean_ctor_get(v_o_2309_, 0);
v_hasTrace_2313_ = lean_ctor_get_uint8(v_o_2309_, sizeof(void*)*1);
v_isSharedCheck_2327_ = !lean_is_exclusive(v_o_2309_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2315_ = v_o_2309_;
v_isShared_2316_ = v_isSharedCheck_2327_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_map_2312_);
lean_dec(v_o_2309_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2327_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2317_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2317_, 0, v_v_2311_);
lean_inc(v_k_2310_);
v___x_2318_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_2310_, v___x_2317_, v_map_2312_);
if (v_hasTrace_2313_ == 0)
{
lean_object* v___x_2319_; uint8_t v___x_2320_; lean_object* v___x_2322_; 
v___x_2319_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1));
v___x_2320_ = l_Lean_Name_isPrefixOf(v___x_2319_, v_k_2310_);
lean_dec(v_k_2310_);
if (v_isShared_2316_ == 0)
{
lean_ctor_set(v___x_2315_, 0, v___x_2318_);
v___x_2322_ = v___x_2315_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v___x_2318_);
v___x_2322_ = v_reuseFailAlloc_2323_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
lean_ctor_set_uint8(v___x_2322_, sizeof(void*)*1, v___x_2320_);
return v___x_2322_;
}
}
else
{
lean_object* v___x_2325_; 
lean_dec(v_k_2310_);
if (v_isShared_2316_ == 0)
{
lean_ctor_set(v___x_2315_, 0, v___x_2318_);
v___x_2325_ = v___x_2315_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v___x_2318_);
lean_ctor_set_uint8(v_reuseFailAlloc_2326_, sizeof(void*)*1, v_hasTrace_2313_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3_spec__3___boxed(lean_object* v_o_2328_, lean_object* v_k_2329_, lean_object* v_v_2330_){
_start:
{
uint8_t v_v_boxed_2331_; lean_object* v_res_2332_; 
v_v_boxed_2331_ = lean_unbox(v_v_2330_);
v_res_2332_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3_spec__3(v_o_2328_, v_k_2329_, v_v_boxed_2331_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(lean_object* v_opts_2333_, lean_object* v_opt_2334_, uint8_t v_val_2335_){
_start:
{
lean_object* v_name_2336_; lean_object* v___x_2337_; 
v_name_2336_ = lean_ctor_get(v_opt_2334_, 0);
lean_inc(v_name_2336_);
lean_dec_ref(v_opt_2334_);
v___x_2337_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3_spec__3(v_opts_2333_, v_name_2336_, v_val_2335_);
return v___x_2337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3___boxed(lean_object* v_opts_2338_, lean_object* v_opt_2339_, lean_object* v_val_2340_){
_start:
{
uint8_t v_val_boxed_2341_; lean_object* v_res_2342_; 
v_val_boxed_2341_ = lean_unbox(v_val_2340_);
v_res_2342_ = l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(v_opts_2338_, v_opt_2339_, v_val_boxed_2341_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1(lean_object* v_mvarId_2343_, uint8_t v___x_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_){
_start:
{
uint16_t v___y_2351_; lean_object* v___y_2352_; lean_object* v_fileName_2353_; lean_object* v_fileMap_2354_; lean_object* v_currNamespace_2355_; lean_object* v_openDecls_2356_; lean_object* v_initHeartbeats_2357_; lean_object* v_maxHeartbeats_2358_; lean_object* v_quotContext_2359_; lean_object* v_currMacroScope_2360_; lean_object* v_cancelTk_x3f_2361_; lean_object* v_inheritedTraceOptions_2362_; lean_object* v_currRecDepth_2363_; lean_object* v_ref_2364_; uint8_t v_suppressElabErrors_2365_; uint8_t v_checkDeprecated_2366_; uint8_t v_isRecordingDeps_2367_; lean_object* v___y_2368_; lean_object* v_toCold_2374_; lean_object* v_currRecDepth_2375_; lean_object* v_ref_2376_; uint8_t v_suppressElabErrors_2377_; uint8_t v_checkDeprecated_2378_; uint8_t v_isRecordingDeps_2379_; lean_object* v_fileName_2380_; lean_object* v_fileMap_2381_; lean_object* v_options_2382_; lean_object* v_currNamespace_2383_; lean_object* v_openDecls_2384_; lean_object* v_initHeartbeats_2385_; lean_object* v_maxHeartbeats_2386_; lean_object* v_quotContext_2387_; lean_object* v_currMacroScope_2388_; lean_object* v_cancelTk_x3f_2389_; lean_object* v_inheritedTraceOptions_2390_; uint16_t v___y_2392_; lean_object* v___y_2393_; lean_object* v_nextMacroScope_2394_; lean_object* v_ngen_2395_; lean_object* v_auxDeclNGen_2396_; lean_object* v_traceState_2397_; lean_object* v_recordedDeps_2398_; lean_object* v_messages_2399_; lean_object* v_infoState_2400_; lean_object* v_snapshotTasks_2401_; lean_object* v___y_2402_; uint16_t v___y_2407_; lean_object* v___y_2408_; uint8_t v___y_2409_; lean_object* v___y_2427_; 
v_toCold_2374_ = lean_ctor_get(v___y_2347_, 0);
v_currRecDepth_2375_ = lean_ctor_get(v___y_2347_, 1);
v_ref_2376_ = lean_ctor_get(v___y_2347_, 2);
v_suppressElabErrors_2377_ = lean_ctor_get_uint8(v___y_2347_, sizeof(void*)*3 + 2);
v_checkDeprecated_2378_ = lean_ctor_get_uint8(v___y_2347_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2379_ = lean_ctor_get_uint8(v___y_2347_, sizeof(void*)*3 + 4);
v_fileName_2380_ = lean_ctor_get(v_toCold_2374_, 0);
v_fileMap_2381_ = lean_ctor_get(v_toCold_2374_, 1);
v_options_2382_ = lean_ctor_get(v_toCold_2374_, 2);
v_currNamespace_2383_ = lean_ctor_get(v_toCold_2374_, 4);
v_openDecls_2384_ = lean_ctor_get(v_toCold_2374_, 5);
v_initHeartbeats_2385_ = lean_ctor_get(v_toCold_2374_, 6);
v_maxHeartbeats_2386_ = lean_ctor_get(v_toCold_2374_, 7);
v_quotContext_2387_ = lean_ctor_get(v_toCold_2374_, 8);
v_currMacroScope_2388_ = lean_ctor_get(v_toCold_2374_, 9);
v_cancelTk_x3f_2389_ = lean_ctor_get(v_toCold_2374_, 10);
v_inheritedTraceOptions_2390_ = lean_ctor_get(v_toCold_2374_, 11);
if (v_isRecordingDeps_2379_ == 0)
{
lean_object* v___x_2437_; lean_object* v___x_2438_; 
v___x_2437_ = l_Lean_Meta_smartUnfolding;
lean_inc_ref(v_options_2382_);
v___x_2438_ = l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(v_options_2382_, v___x_2437_, v_isRecordingDeps_2379_);
v___y_2427_ = v___x_2438_;
goto v___jp_2426_;
}
else
{
lean_object* v___x_2439_; 
lean_inc_ref(v_options_2382_);
v___x_2439_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_2382_);
v___y_2427_ = v___x_2439_;
goto v___jp_2426_;
}
v___jp_2350_:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2369_ = l_Lean_maxRecDepth;
v___x_2370_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(v___y_2352_, v___x_2369_);
v___x_2371_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2371_, 0, v_fileName_2353_);
lean_ctor_set(v___x_2371_, 1, v_fileMap_2354_);
lean_ctor_set(v___x_2371_, 2, v___y_2352_);
lean_ctor_set(v___x_2371_, 3, v___x_2370_);
lean_ctor_set(v___x_2371_, 4, v_currNamespace_2355_);
lean_ctor_set(v___x_2371_, 5, v_openDecls_2356_);
lean_ctor_set(v___x_2371_, 6, v_initHeartbeats_2357_);
lean_ctor_set(v___x_2371_, 7, v_maxHeartbeats_2358_);
lean_ctor_set(v___x_2371_, 8, v_quotContext_2359_);
lean_ctor_set(v___x_2371_, 9, v_currMacroScope_2360_);
lean_ctor_set(v___x_2371_, 10, v_cancelTk_x3f_2361_);
lean_ctor_set(v___x_2371_, 11, v_inheritedTraceOptions_2362_);
lean_inc(v_ref_2364_);
lean_inc(v_currRecDepth_2363_);
v___x_2372_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2372_, 0, v___x_2371_);
lean_ctor_set(v___x_2372_, 1, v_currRecDepth_2363_);
lean_ctor_set(v___x_2372_, 2, v_ref_2364_);
lean_ctor_set_uint16(v___x_2372_, sizeof(void*)*3, v___y_2351_);
lean_ctor_set_uint8(v___x_2372_, sizeof(void*)*3 + 2, v_suppressElabErrors_2365_);
lean_ctor_set_uint8(v___x_2372_, sizeof(void*)*3 + 3, v_checkDeprecated_2366_);
lean_ctor_set_uint8(v___x_2372_, sizeof(void*)*3 + 4, v_isRecordingDeps_2367_);
v___x_2373_ = l_Lean_MVarId_refl(v_mvarId_2343_, v___x_2344_, v___y_2345_, v___y_2346_, v___x_2372_, v___y_2368_);
lean_dec_ref_known(v___x_2372_, 3);
return v___x_2373_;
}
v___jp_2391_:
{
lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2403_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3);
v___x_2404_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2404_, 0, v___y_2402_);
lean_ctor_set(v___x_2404_, 1, v_nextMacroScope_2394_);
lean_ctor_set(v___x_2404_, 2, v_ngen_2395_);
lean_ctor_set(v___x_2404_, 3, v_auxDeclNGen_2396_);
lean_ctor_set(v___x_2404_, 4, v_traceState_2397_);
lean_ctor_set(v___x_2404_, 5, v___x_2403_);
lean_ctor_set(v___x_2404_, 6, v_recordedDeps_2398_);
lean_ctor_set(v___x_2404_, 7, v_messages_2399_);
lean_ctor_set(v___x_2404_, 8, v_infoState_2400_);
lean_ctor_set(v___x_2404_, 9, v_snapshotTasks_2401_);
v___x_2405_ = lean_st_ref_put(v___y_2348_, v___x_2404_);
lean_inc_ref(v_inheritedTraceOptions_2390_);
lean_inc(v_cancelTk_x3f_2389_);
lean_inc(v_currMacroScope_2388_);
lean_inc(v_quotContext_2387_);
lean_inc(v_maxHeartbeats_2386_);
lean_inc(v_initHeartbeats_2385_);
lean_inc(v_openDecls_2384_);
lean_inc(v_currNamespace_2383_);
lean_inc_ref(v_fileMap_2381_);
lean_inc_ref(v_fileName_2380_);
v___y_2351_ = v___y_2392_;
v___y_2352_ = v___y_2393_;
v_fileName_2353_ = v_fileName_2380_;
v_fileMap_2354_ = v_fileMap_2381_;
v_currNamespace_2355_ = v_currNamespace_2383_;
v_openDecls_2356_ = v_openDecls_2384_;
v_initHeartbeats_2357_ = v_initHeartbeats_2385_;
v_maxHeartbeats_2358_ = v_maxHeartbeats_2386_;
v_quotContext_2359_ = v_quotContext_2387_;
v_currMacroScope_2360_ = v_currMacroScope_2388_;
v_cancelTk_x3f_2361_ = v_cancelTk_x3f_2389_;
v_inheritedTraceOptions_2362_ = v_inheritedTraceOptions_2390_;
v_currRecDepth_2363_ = v_currRecDepth_2375_;
v_ref_2364_ = v_ref_2376_;
v_suppressElabErrors_2365_ = v_suppressElabErrors_2377_;
v_checkDeprecated_2366_ = v_checkDeprecated_2378_;
v_isRecordingDeps_2367_ = v_isRecordingDeps_2379_;
v___y_2368_ = v___y_2348_;
goto v___jp_2350_;
}
v___jp_2406_:
{
lean_object* v___x_2410_; lean_object* v_env_2411_; lean_object* v_nextMacroScope_2412_; lean_object* v_ngen_2413_; lean_object* v_auxDeclNGen_2414_; lean_object* v_traceState_2415_; lean_object* v_recordedDeps_2416_; lean_object* v_messages_2417_; lean_object* v_infoState_2418_; lean_object* v_snapshotTasks_2419_; uint16_t v___x_2420_; uint16_t v___x_2421_; uint16_t v___x_2422_; uint8_t v___x_2423_; 
v___x_2410_ = lean_st_ref_take(v___y_2348_);
v_env_2411_ = lean_ctor_get(v___x_2410_, 0);
lean_inc_ref(v_env_2411_);
v_nextMacroScope_2412_ = lean_ctor_get(v___x_2410_, 1);
lean_inc(v_nextMacroScope_2412_);
v_ngen_2413_ = lean_ctor_get(v___x_2410_, 2);
lean_inc_ref(v_ngen_2413_);
v_auxDeclNGen_2414_ = lean_ctor_get(v___x_2410_, 3);
lean_inc_ref(v_auxDeclNGen_2414_);
v_traceState_2415_ = lean_ctor_get(v___x_2410_, 4);
lean_inc_ref(v_traceState_2415_);
v_recordedDeps_2416_ = lean_ctor_get(v___x_2410_, 6);
lean_inc_ref(v_recordedDeps_2416_);
v_messages_2417_ = lean_ctor_get(v___x_2410_, 7);
lean_inc_ref(v_messages_2417_);
v_infoState_2418_ = lean_ctor_get(v___x_2410_, 8);
lean_inc_ref(v_infoState_2418_);
v_snapshotTasks_2419_ = lean_ctor_get(v___x_2410_, 9);
lean_inc_ref(v_snapshotTasks_2419_);
lean_dec(v___x_2410_);
v___x_2420_ = 512;
v___x_2421_ = lean_uint16_land(v___y_2407_, v___x_2420_);
v___x_2422_ = 0;
v___x_2423_ = lean_uint16_dec_eq(v___x_2421_, v___x_2422_);
if (v___x_2423_ == 0)
{
lean_object* v___x_2424_; 
v___x_2424_ = l_Lean_Kernel_enableDiag(v_env_2411_, v___x_2344_);
v___y_2392_ = v___y_2407_;
v___y_2393_ = v___y_2408_;
v_nextMacroScope_2394_ = v_nextMacroScope_2412_;
v_ngen_2395_ = v_ngen_2413_;
v_auxDeclNGen_2396_ = v_auxDeclNGen_2414_;
v_traceState_2397_ = v_traceState_2415_;
v_recordedDeps_2398_ = v_recordedDeps_2416_;
v_messages_2399_ = v_messages_2417_;
v_infoState_2400_ = v_infoState_2418_;
v_snapshotTasks_2401_ = v_snapshotTasks_2419_;
v___y_2402_ = v___x_2424_;
goto v___jp_2391_;
}
else
{
lean_object* v___x_2425_; 
v___x_2425_ = l_Lean_Kernel_enableDiag(v_env_2411_, v___y_2409_);
v___y_2392_ = v___y_2407_;
v___y_2393_ = v___y_2408_;
v_nextMacroScope_2394_ = v_nextMacroScope_2412_;
v_ngen_2395_ = v_ngen_2413_;
v_auxDeclNGen_2396_ = v_auxDeclNGen_2414_;
v_traceState_2397_ = v_traceState_2415_;
v_recordedDeps_2398_ = v_recordedDeps_2416_;
v_messages_2399_ = v_messages_2417_;
v_infoState_2400_ = v_infoState_2418_;
v_snapshotTasks_2401_ = v_snapshotTasks_2419_;
v___y_2402_ = v___x_2425_;
goto v___jp_2391_;
}
}
v___jp_2426_:
{
uint16_t v___x_2428_; lean_object* v___x_2429_; lean_object* v_env_2430_; uint8_t v___x_2431_; uint16_t v___x_2432_; uint16_t v___x_2433_; uint16_t v___x_2434_; uint8_t v___x_2435_; 
v___x_2428_ = l_Lean_OptionFlags_ofOptions(v___y_2427_);
v___x_2429_ = lean_st_ref_get(v___y_2348_);
v_env_2430_ = lean_ctor_get(v___x_2429_, 0);
lean_inc_ref(v_env_2430_);
lean_dec(v___x_2429_);
v___x_2431_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_2430_);
lean_dec_ref(v_env_2430_);
v___x_2432_ = 512;
v___x_2433_ = lean_uint16_land(v___x_2428_, v___x_2432_);
v___x_2434_ = 0;
v___x_2435_ = lean_uint16_dec_eq(v___x_2433_, v___x_2434_);
if (v___x_2435_ == 0)
{
if (v___x_2431_ == 0)
{
v___y_2407_ = v___x_2428_;
v___y_2408_ = v___y_2427_;
v___y_2409_ = v___x_2431_;
goto v___jp_2406_;
}
else
{
lean_inc_ref(v_inheritedTraceOptions_2390_);
lean_inc(v_cancelTk_x3f_2389_);
lean_inc(v_currMacroScope_2388_);
lean_inc(v_quotContext_2387_);
lean_inc(v_maxHeartbeats_2386_);
lean_inc(v_initHeartbeats_2385_);
lean_inc(v_openDecls_2384_);
lean_inc(v_currNamespace_2383_);
lean_inc_ref(v_fileMap_2381_);
lean_inc_ref(v_fileName_2380_);
v___y_2351_ = v___x_2428_;
v___y_2352_ = v___y_2427_;
v_fileName_2353_ = v_fileName_2380_;
v_fileMap_2354_ = v_fileMap_2381_;
v_currNamespace_2355_ = v_currNamespace_2383_;
v_openDecls_2356_ = v_openDecls_2384_;
v_initHeartbeats_2357_ = v_initHeartbeats_2385_;
v_maxHeartbeats_2358_ = v_maxHeartbeats_2386_;
v_quotContext_2359_ = v_quotContext_2387_;
v_currMacroScope_2360_ = v_currMacroScope_2388_;
v_cancelTk_x3f_2361_ = v_cancelTk_x3f_2389_;
v_inheritedTraceOptions_2362_ = v_inheritedTraceOptions_2390_;
v_currRecDepth_2363_ = v_currRecDepth_2375_;
v_ref_2364_ = v_ref_2376_;
v_suppressElabErrors_2365_ = v_suppressElabErrors_2377_;
v_checkDeprecated_2366_ = v_checkDeprecated_2378_;
v_isRecordingDeps_2367_ = v_isRecordingDeps_2379_;
v___y_2368_ = v___y_2348_;
goto v___jp_2350_;
}
}
else
{
if (v___x_2431_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_2390_);
lean_inc(v_cancelTk_x3f_2389_);
lean_inc(v_currMacroScope_2388_);
lean_inc(v_quotContext_2387_);
lean_inc(v_maxHeartbeats_2386_);
lean_inc(v_initHeartbeats_2385_);
lean_inc(v_openDecls_2384_);
lean_inc(v_currNamespace_2383_);
lean_inc_ref(v_fileMap_2381_);
lean_inc_ref(v_fileName_2380_);
v___y_2351_ = v___x_2428_;
v___y_2352_ = v___y_2427_;
v_fileName_2353_ = v_fileName_2380_;
v_fileMap_2354_ = v_fileMap_2381_;
v_currNamespace_2355_ = v_currNamespace_2383_;
v_openDecls_2356_ = v_openDecls_2384_;
v_initHeartbeats_2357_ = v_initHeartbeats_2385_;
v_maxHeartbeats_2358_ = v_maxHeartbeats_2386_;
v_quotContext_2359_ = v_quotContext_2387_;
v_currMacroScope_2360_ = v_currMacroScope_2388_;
v_cancelTk_x3f_2361_ = v_cancelTk_x3f_2389_;
v_inheritedTraceOptions_2362_ = v_inheritedTraceOptions_2390_;
v_currRecDepth_2363_ = v_currRecDepth_2375_;
v_ref_2364_ = v_ref_2376_;
v_suppressElabErrors_2365_ = v_suppressElabErrors_2377_;
v_checkDeprecated_2366_ = v_checkDeprecated_2378_;
v_isRecordingDeps_2367_ = v_isRecordingDeps_2379_;
v___y_2368_ = v___y_2348_;
goto v___jp_2350_;
}
else
{
uint8_t v___x_2436_; 
v___x_2436_ = 0;
v___y_2407_ = v___x_2428_;
v___y_2408_ = v___y_2427_;
v___y_2409_ = v___x_2436_;
goto v___jp_2406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___boxed(lean_object* v_mvarId_2440_, lean_object* v___x_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_){
_start:
{
uint8_t v___x_10687__boxed_2447_; lean_object* v_res_2448_; 
v___x_10687__boxed_2447_ = lean_unbox(v___x_2441_);
v_res_2448_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1(v_mvarId_2440_, v___x_10687__boxed_2447_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_);
lean_dec(v___y_2445_);
lean_dec_ref(v___y_2444_);
lean_dec(v___y_2443_);
lean_dec_ref(v___y_2442_);
return v_res_2448_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2449_; double v___x_2450_; 
v___x_2449_ = lean_unsigned_to_nat(0u);
v___x_2450_ = lean_float_of_nat(v___x_2449_);
return v___x_2450_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1(lean_object* v_cls_2454_, lean_object* v_msg_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_){
_start:
{
lean_object* v_ref_2461_; lean_object* v___x_2462_; lean_object* v_a_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2508_; 
v_ref_2461_ = lean_ctor_get(v___y_2458_, 2);
v___x_2462_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0_spec__0(v_msg_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
v_a_2463_ = lean_ctor_get(v___x_2462_, 0);
v_isSharedCheck_2508_ = !lean_is_exclusive(v___x_2462_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2465_ = v___x_2462_;
v_isShared_2466_ = v_isSharedCheck_2508_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_a_2463_);
lean_dec(v___x_2462_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2508_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
lean_object* v___x_2467_; lean_object* v_traceState_2468_; lean_object* v_env_2469_; lean_object* v_nextMacroScope_2470_; lean_object* v_ngen_2471_; lean_object* v_auxDeclNGen_2472_; lean_object* v_cache_2473_; lean_object* v_recordedDeps_2474_; lean_object* v_messages_2475_; lean_object* v_infoState_2476_; lean_object* v_snapshotTasks_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2507_; 
v___x_2467_ = lean_st_ref_take(v___y_2459_);
v_traceState_2468_ = lean_ctor_get(v___x_2467_, 4);
v_env_2469_ = lean_ctor_get(v___x_2467_, 0);
v_nextMacroScope_2470_ = lean_ctor_get(v___x_2467_, 1);
v_ngen_2471_ = lean_ctor_get(v___x_2467_, 2);
v_auxDeclNGen_2472_ = lean_ctor_get(v___x_2467_, 3);
v_cache_2473_ = lean_ctor_get(v___x_2467_, 5);
v_recordedDeps_2474_ = lean_ctor_get(v___x_2467_, 6);
v_messages_2475_ = lean_ctor_get(v___x_2467_, 7);
v_infoState_2476_ = lean_ctor_get(v___x_2467_, 8);
v_snapshotTasks_2477_ = lean_ctor_get(v___x_2467_, 9);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2467_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2479_ = v___x_2467_;
v_isShared_2480_ = v_isSharedCheck_2507_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_snapshotTasks_2477_);
lean_inc(v_infoState_2476_);
lean_inc(v_messages_2475_);
lean_inc(v_recordedDeps_2474_);
lean_inc(v_cache_2473_);
lean_inc(v_traceState_2468_);
lean_inc(v_auxDeclNGen_2472_);
lean_inc(v_ngen_2471_);
lean_inc(v_nextMacroScope_2470_);
lean_inc(v_env_2469_);
lean_dec(v___x_2467_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2507_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
uint64_t v_tid_2481_; lean_object* v_traces_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2506_; 
v_tid_2481_ = lean_ctor_get_uint64(v_traceState_2468_, sizeof(void*)*1);
v_traces_2482_ = lean_ctor_get(v_traceState_2468_, 0);
v_isSharedCheck_2506_ = !lean_is_exclusive(v_traceState_2468_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2484_ = v_traceState_2468_;
v_isShared_2485_ = v_isSharedCheck_2506_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_traces_2482_);
lean_dec(v_traceState_2468_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2506_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; double v___x_2488_; uint8_t v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2497_; 
v___x_2486_ = lean_box(0);
v___x_2487_ = lean_box(0);
v___x_2488_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___closed__0);
v___x_2489_ = 0;
v___x_2490_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___closed__1));
v___x_2491_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2491_, 0, v_cls_2454_);
lean_ctor_set(v___x_2491_, 1, v___x_2487_);
lean_ctor_set(v___x_2491_, 2, v___x_2490_);
lean_ctor_set_float(v___x_2491_, sizeof(void*)*3, v___x_2488_);
lean_ctor_set_float(v___x_2491_, sizeof(void*)*3 + 8, v___x_2488_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*3 + 16, v___x_2489_);
v___x_2492_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___closed__2));
v___x_2493_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2493_, 0, v___x_2491_);
lean_ctor_set(v___x_2493_, 1, v_a_2463_);
lean_ctor_set(v___x_2493_, 2, v___x_2492_);
lean_inc(v_ref_2461_);
v___x_2494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2494_, 0, v_ref_2461_);
lean_ctor_set(v___x_2494_, 1, v___x_2493_);
v___x_2495_ = l_Lean_PersistentArray_push___redArg(v_traces_2482_, v___x_2494_);
if (v_isShared_2485_ == 0)
{
lean_ctor_set(v___x_2484_, 0, v___x_2495_);
v___x_2497_ = v___x_2484_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v___x_2495_);
lean_ctor_set_uint64(v_reuseFailAlloc_2505_, sizeof(void*)*1, v_tid_2481_);
v___x_2497_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
lean_object* v___x_2499_; 
if (v_isShared_2480_ == 0)
{
lean_ctor_set(v___x_2479_, 4, v___x_2497_);
v___x_2499_ = v___x_2479_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_env_2469_);
lean_ctor_set(v_reuseFailAlloc_2504_, 1, v_nextMacroScope_2470_);
lean_ctor_set(v_reuseFailAlloc_2504_, 2, v_ngen_2471_);
lean_ctor_set(v_reuseFailAlloc_2504_, 3, v_auxDeclNGen_2472_);
lean_ctor_set(v_reuseFailAlloc_2504_, 4, v___x_2497_);
lean_ctor_set(v_reuseFailAlloc_2504_, 5, v_cache_2473_);
lean_ctor_set(v_reuseFailAlloc_2504_, 6, v_recordedDeps_2474_);
lean_ctor_set(v_reuseFailAlloc_2504_, 7, v_messages_2475_);
lean_ctor_set(v_reuseFailAlloc_2504_, 8, v_infoState_2476_);
lean_ctor_set(v_reuseFailAlloc_2504_, 9, v_snapshotTasks_2477_);
v___x_2499_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
lean_object* v___x_2500_; lean_object* v___x_2502_; 
v___x_2500_ = lean_st_ref_put(v___y_2459_, v___x_2499_);
if (v_isShared_2466_ == 0)
{
lean_ctor_set(v___x_2465_, 0, v___x_2486_);
v___x_2502_ = v___x_2465_;
goto v_reusejp_2501_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v___x_2486_);
v___x_2502_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2501_;
}
v_reusejp_2501_:
{
return v___x_2502_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___boxed(lean_object* v_cls_2509_, lean_object* v_msg_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v_res_2516_; 
v_res_2516_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1(v_cls_2509_, v_msg_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
lean_dec(v___y_2512_);
lean_dec_ref(v___y_2511_);
return v_res_2516_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2518_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__0));
v___x_2519_ = l_Lean_stringToMessageData(v___x_2518_);
return v___x_2519_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2521_; lean_object* v___x_2522_; 
v___x_2521_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__2));
v___x_2522_ = l_Lean_stringToMessageData(v___x_2521_);
return v___x_2522_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5(void){
_start:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2524_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__4));
v___x_2525_ = l_Lean_stringToMessageData(v___x_2524_);
return v___x_2525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2(lean_object* v_a_2526_, lean_object* v___x_2527_, lean_object* v___f_2528_, lean_object* v_fixEq_x3f_2529_, lean_object* v_declName_2530_, lean_object* v___x_2531_, lean_object* v___x_2532_, lean_object* v_fixedParamPerms_2533_, lean_object* v_declNameNonRec_2534_, lean_object* v_____r_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_){
_start:
{
lean_object* v___y_2542_; lean_object* v___y_2543_; lean_object* v___y_2544_; lean_object* v___y_2545_; lean_object* v___y_2546_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2578_; lean_object* v___y_2579_; lean_object* v___y_2580_; lean_object* v_mvarId_2602_; lean_object* v___y_2603_; lean_object* v___y_2604_; lean_object* v___y_2605_; lean_object* v___y_2606_; 
if (lean_obj_tag(v_fixEq_x3f_2529_) == 1)
{
lean_object* v_val_2630_; lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2685_; 
v_val_2630_ = lean_ctor_get(v_fixEq_x3f_2529_, 0);
v_isSharedCheck_2685_ = !lean_is_exclusive(v_fixEq_x3f_2529_);
if (v_isSharedCheck_2685_ == 0)
{
v___x_2632_ = v_fixEq_x3f_2529_;
v_isShared_2633_ = v_isSharedCheck_2685_;
goto v_resetjp_2631_;
}
else
{
lean_inc(v_val_2630_);
lean_dec(v_fixEq_x3f_2529_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2685_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
lean_object* v___x_2634_; 
v___x_2634_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix(v_declName_2530_, v___x_2531_, v___x_2532_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_);
if (lean_obj_tag(v___x_2634_) == 0)
{
lean_object* v_a_2635_; lean_object* v___y_2637_; lean_object* v___y_2638_; lean_object* v___y_2639_; lean_object* v___y_2640_; lean_object* v___x_2652_; 
v_a_2635_ = lean_ctor_get(v___x_2634_, 0);
lean_inc(v_a_2635_);
lean_dec_ref_known(v___x_2634_, 1);
lean_inc_ref(v___f_2528_);
lean_inc(v___y_2539_);
lean_inc_ref(v___y_2538_);
lean_inc(v___y_2537_);
lean_inc_ref(v___y_2536_);
v___x_2652_ = lean_apply_5(v___f_2528_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, lean_box(0));
if (lean_obj_tag(v___x_2652_) == 0)
{
lean_object* v_a_2653_; uint8_t v___x_2654_; 
v_a_2653_ = lean_ctor_get(v___x_2652_, 0);
lean_inc(v_a_2653_);
lean_dec_ref_known(v___x_2652_, 1);
v___x_2654_ = lean_unbox(v_a_2653_);
lean_dec(v_a_2653_);
if (v___x_2654_ == 0)
{
lean_del_object(v___x_2632_);
v___y_2637_ = v___y_2536_;
v___y_2638_ = v___y_2537_;
v___y_2639_ = v___y_2538_;
v___y_2640_ = v___y_2539_;
goto v___jp_2636_;
}
else
{
lean_object* v___x_2655_; lean_object* v___x_2657_; 
v___x_2655_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5);
lean_inc(v_a_2635_);
if (v_isShared_2633_ == 0)
{
lean_ctor_set(v___x_2632_, 0, v_a_2635_);
v___x_2657_ = v___x_2632_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v_a_2635_);
v___x_2657_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; 
v___x_2658_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2655_);
lean_ctor_set(v___x_2658_, 1, v___x_2657_);
lean_inc(v___x_2527_);
v___x_2659_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1(v___x_2527_, v___x_2658_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_dec_ref_known(v___x_2659_, 1);
v___y_2637_ = v___y_2536_;
v___y_2638_ = v___y_2537_;
v___y_2639_ = v___y_2538_;
v___y_2640_ = v___y_2539_;
goto v___jp_2636_;
}
else
{
lean_object* v_a_2660_; lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2667_; 
lean_dec(v_a_2635_);
lean_dec(v_val_2630_);
lean_dec(v_declNameNonRec_2534_);
lean_dec_ref(v_fixedParamPerms_2533_);
lean_dec_ref(v___f_2528_);
lean_dec(v___x_2527_);
lean_dec_ref(v_a_2526_);
v_a_2660_ = lean_ctor_get(v___x_2659_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2662_ = v___x_2659_;
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_a_2660_);
lean_dec(v___x_2659_);
v___x_2662_ = lean_box(0);
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
v_resetjp_2661_:
{
lean_object* v___x_2665_; 
if (v_isShared_2663_ == 0)
{
v___x_2665_ = v___x_2662_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_a_2660_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
}
}
}
}
else
{
lean_object* v_a_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2676_; 
lean_dec(v_a_2635_);
lean_del_object(v___x_2632_);
lean_dec(v_val_2630_);
lean_dec(v_declNameNonRec_2534_);
lean_dec_ref(v_fixedParamPerms_2533_);
lean_dec_ref(v___f_2528_);
lean_dec(v___x_2527_);
lean_dec_ref(v_a_2526_);
v_a_2669_ = lean_ctor_get(v___x_2652_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2652_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2671_ = v___x_2652_;
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_a_2669_);
lean_dec(v___x_2652_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2674_; 
if (v_isShared_2672_ == 0)
{
v___x_2674_ = v___x_2671_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_a_2669_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
}
v___jp_2636_:
{
lean_object* v_numFixed_2641_; lean_object* v___x_2642_; 
v_numFixed_2641_ = lean_ctor_get(v_fixedParamPerms_2533_, 0);
lean_inc(v_numFixed_2641_);
lean_dec_ref(v_fixedParamPerms_2533_);
v___x_2642_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEqWith(v_declNameNonRec_2534_, v_val_2630_, v_numFixed_2641_, v_a_2635_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_);
if (lean_obj_tag(v___x_2642_) == 0)
{
lean_object* v_a_2643_; 
v_a_2643_ = lean_ctor_get(v___x_2642_, 0);
lean_inc(v_a_2643_);
lean_dec_ref_known(v___x_2642_, 1);
v_mvarId_2602_ = v_a_2643_;
v___y_2603_ = v___y_2637_;
v___y_2604_ = v___y_2638_;
v___y_2605_ = v___y_2639_;
v___y_2606_ = v___y_2640_;
goto v___jp_2601_;
}
else
{
lean_object* v_a_2644_; lean_object* v___x_2646_; uint8_t v_isShared_2647_; uint8_t v_isSharedCheck_2651_; 
lean_dec_ref(v___f_2528_);
lean_dec(v___x_2527_);
lean_dec_ref(v_a_2526_);
v_a_2644_ = lean_ctor_get(v___x_2642_, 0);
v_isSharedCheck_2651_ = !lean_is_exclusive(v___x_2642_);
if (v_isSharedCheck_2651_ == 0)
{
v___x_2646_ = v___x_2642_;
v_isShared_2647_ = v_isSharedCheck_2651_;
goto v_resetjp_2645_;
}
else
{
lean_inc(v_a_2644_);
lean_dec(v___x_2642_);
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
else
{
lean_object* v_a_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2684_; 
lean_del_object(v___x_2632_);
lean_dec(v_val_2630_);
lean_dec(v_declNameNonRec_2534_);
lean_dec_ref(v_fixedParamPerms_2533_);
lean_dec_ref(v___f_2528_);
lean_dec(v___x_2527_);
lean_dec_ref(v_a_2526_);
v_a_2677_ = lean_ctor_get(v___x_2634_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v___x_2634_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2679_ = v___x_2634_;
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_a_2677_);
lean_dec(v___x_2634_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2682_; 
if (v_isShared_2680_ == 0)
{
v___x_2682_ = v___x_2679_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v_a_2677_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
}
}
else
{
lean_object* v___x_2686_; 
lean_dec_ref(v_fixedParamPerms_2533_);
lean_dec(v___x_2531_);
lean_dec(v_fixEq_x3f_2529_);
v___x_2686_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix(v_declName_2530_, v_declNameNonRec_2534_, v___x_2532_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_);
if (lean_obj_tag(v___x_2686_) == 0)
{
lean_object* v_a_2687_; lean_object* v___y_2689_; lean_object* v___y_2690_; lean_object* v___y_2691_; lean_object* v___y_2692_; lean_object* v___x_2703_; 
v_a_2687_ = lean_ctor_get(v___x_2686_, 0);
lean_inc(v_a_2687_);
lean_dec_ref_known(v___x_2686_, 1);
lean_inc_ref(v___f_2528_);
lean_inc(v___y_2539_);
lean_inc_ref(v___y_2538_);
lean_inc(v___y_2537_);
lean_inc_ref(v___y_2536_);
v___x_2703_ = lean_apply_5(v___f_2528_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, lean_box(0));
if (lean_obj_tag(v___x_2703_) == 0)
{
lean_object* v_a_2704_; uint8_t v___x_2705_; 
v_a_2704_ = lean_ctor_get(v___x_2703_, 0);
lean_inc(v_a_2704_);
lean_dec_ref_known(v___x_2703_, 1);
v___x_2705_ = lean_unbox(v_a_2704_);
lean_dec(v_a_2704_);
if (v___x_2705_ == 0)
{
v___y_2689_ = v___y_2536_;
v___y_2690_ = v___y_2537_;
v___y_2691_ = v___y_2538_;
v___y_2692_ = v___y_2539_;
goto v___jp_2688_;
}
else
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
v___x_2706_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__5);
lean_inc(v_a_2687_);
v___x_2707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2707_, 0, v_a_2687_);
v___x_2708_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2708_, 0, v___x_2706_);
lean_ctor_set(v___x_2708_, 1, v___x_2707_);
lean_inc(v___x_2527_);
v___x_2709_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1(v___x_2527_, v___x_2708_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_);
if (lean_obj_tag(v___x_2709_) == 0)
{
lean_dec_ref_known(v___x_2709_, 1);
v___y_2689_ = v___y_2536_;
v___y_2690_ = v___y_2537_;
v___y_2691_ = v___y_2538_;
v___y_2692_ = v___y_2539_;
goto v___jp_2688_;
}
else
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2717_; 
lean_dec(v_a_2687_);
lean_dec_ref(v___f_2528_);
lean_dec(v___x_2527_);
lean_dec_ref(v_a_2526_);
v_a_2710_ = lean_ctor_get(v___x_2709_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2712_ = v___x_2709_;
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___x_2709_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2715_; 
if (v_isShared_2713_ == 0)
{
v___x_2715_ = v___x_2712_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_a_2710_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
}
}
}
}
}
else
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2725_; 
lean_dec(v_a_2687_);
lean_dec_ref(v___f_2528_);
lean_dec(v___x_2527_);
lean_dec_ref(v_a_2526_);
v_a_2718_ = lean_ctor_get(v___x_2703_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___x_2703_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2720_ = v___x_2703_;
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v___x_2703_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2723_; 
if (v_isShared_2721_ == 0)
{
v___x_2723_ = v___x_2720_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_a_2718_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
}
}
}
v___jp_2688_:
{
lean_object* v___x_2693_; 
v___x_2693_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq(v_a_2687_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_);
if (lean_obj_tag(v___x_2693_) == 0)
{
lean_object* v_a_2694_; 
v_a_2694_ = lean_ctor_get(v___x_2693_, 0);
lean_inc(v_a_2694_);
lean_dec_ref_known(v___x_2693_, 1);
v_mvarId_2602_ = v_a_2694_;
v___y_2603_ = v___y_2689_;
v___y_2604_ = v___y_2690_;
v___y_2605_ = v___y_2691_;
v___y_2606_ = v___y_2692_;
goto v___jp_2601_;
}
else
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
lean_dec_ref(v___f_2528_);
lean_dec(v___x_2527_);
lean_dec_ref(v_a_2526_);
v_a_2695_ = lean_ctor_get(v___x_2693_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2693_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2693_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
}
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
lean_dec_ref(v___f_2528_);
lean_dec(v___x_2527_);
lean_dec_ref(v_a_2526_);
v_a_2726_ = lean_ctor_get(v___x_2686_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2686_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2686_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2686_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
v___jp_2541_:
{
if (lean_obj_tag(v___y_2546_) == 0)
{
lean_object* v_toCold_2547_; lean_object* v_options_2548_; uint8_t v_hasTrace_2549_; 
lean_dec_ref_known(v___y_2546_, 1);
v_toCold_2547_ = lean_ctor_get(v___y_2545_, 0);
v_options_2548_ = lean_ctor_get(v_toCold_2547_, 2);
v_hasTrace_2549_ = lean_ctor_get_uint8(v_options_2548_, sizeof(void*)*1);
if (v_hasTrace_2549_ == 0)
{
lean_object* v___x_2550_; 
lean_dec(v___x_2527_);
v___x_2550_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0___redArg(v_a_2526_, v___y_2543_);
return v___x_2550_;
}
else
{
lean_object* v_inheritedTraceOptions_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; uint8_t v___x_2554_; 
v_inheritedTraceOptions_2551_ = lean_ctor_get(v_toCold_2547_, 11);
v___x_2552_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1));
lean_inc(v___x_2527_);
v___x_2553_ = l_Lean_Name_append(v___x_2552_, v___x_2527_);
v___x_2554_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2551_, v_options_2548_, v___x_2553_);
lean_dec(v___x_2553_);
if (v___x_2554_ == 0)
{
lean_object* v___x_2555_; 
lean_dec(v___x_2527_);
v___x_2555_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0___redArg(v_a_2526_, v___y_2543_);
return v___x_2555_;
}
else
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__1);
v___x_2557_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1(v___x_2527_, v___x_2556_, v___y_2542_, v___y_2543_, v___y_2545_, v___y_2544_);
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v___x_2558_; 
lean_dec_ref_known(v___x_2557_, 1);
v___x_2558_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0___redArg(v_a_2526_, v___y_2543_);
return v___x_2558_;
}
else
{
lean_object* v_a_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2566_; 
lean_dec_ref(v_a_2526_);
v_a_2559_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2561_ = v___x_2557_;
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_a_2559_);
lean_dec(v___x_2557_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2564_; 
if (v_isShared_2562_ == 0)
{
v___x_2564_ = v___x_2561_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2559_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
}
}
}
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
lean_dec(v___x_2527_);
lean_dec_ref(v_a_2526_);
v_a_2567_ = lean_ctor_get(v___y_2546_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___y_2546_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___y_2546_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v___y_2546_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
v___jp_2575_:
{
lean_object* v___x_2581_; uint8_t v_transparency_2582_; uint8_t v___x_2583_; uint8_t v___x_2584_; uint8_t v___x_2585_; 
v___x_2581_ = l_Lean_Meta_Context_config(v___y_2576_);
v_transparency_2582_ = lean_ctor_get_uint8(v___x_2581_, 9);
lean_dec_ref(v___x_2581_);
v___x_2583_ = 0;
v___x_2584_ = 1;
v___x_2585_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_2582_, v___x_2583_);
if (v___x_2585_ == 0)
{
lean_object* v___x_2586_; 
v___x_2586_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1(v___y_2580_, v___x_2584_, v___y_2576_, v___y_2579_, v___y_2578_, v___y_2577_);
v___y_2542_ = v___y_2576_;
v___y_2543_ = v___y_2579_;
v___y_2544_ = v___y_2577_;
v___y_2545_ = v___y_2578_;
v___y_2546_ = v___x_2586_;
goto v___jp_2541_;
}
else
{
lean_object* v_keyedConfig_2587_; uint8_t v_trackZetaDelta_2588_; lean_object* v_zetaDeltaSet_2589_; lean_object* v_lctx_2590_; lean_object* v_localInstances_2591_; lean_object* v_defEqCtx_x3f_2592_; lean_object* v_synthPendingDepth_2593_; lean_object* v_customCanUnfoldPredicate_x3f_2594_; uint8_t v_univApprox_2595_; uint8_t v_inTypeClassResolution_2596_; uint8_t v_cacheInferType_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v_keyedConfig_2587_ = lean_ctor_get(v___y_2576_, 0);
v_trackZetaDelta_2588_ = lean_ctor_get_uint8(v___y_2576_, sizeof(void*)*7);
v_zetaDeltaSet_2589_ = lean_ctor_get(v___y_2576_, 1);
v_lctx_2590_ = lean_ctor_get(v___y_2576_, 2);
v_localInstances_2591_ = lean_ctor_get(v___y_2576_, 3);
v_defEqCtx_x3f_2592_ = lean_ctor_get(v___y_2576_, 4);
v_synthPendingDepth_2593_ = lean_ctor_get(v___y_2576_, 5);
v_customCanUnfoldPredicate_x3f_2594_ = lean_ctor_get(v___y_2576_, 6);
v_univApprox_2595_ = lean_ctor_get_uint8(v___y_2576_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2596_ = lean_ctor_get_uint8(v___y_2576_, sizeof(void*)*7 + 2);
v_cacheInferType_2597_ = lean_ctor_get_uint8(v___y_2576_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2587_);
v___x_2598_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2583_, v_keyedConfig_2587_);
lean_inc(v_customCanUnfoldPredicate_x3f_2594_);
lean_inc(v_synthPendingDepth_2593_);
lean_inc(v_defEqCtx_x3f_2592_);
lean_inc_ref(v_localInstances_2591_);
lean_inc_ref(v_lctx_2590_);
lean_inc(v_zetaDeltaSet_2589_);
v___x_2599_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2599_, 0, v___x_2598_);
lean_ctor_set(v___x_2599_, 1, v_zetaDeltaSet_2589_);
lean_ctor_set(v___x_2599_, 2, v_lctx_2590_);
lean_ctor_set(v___x_2599_, 3, v_localInstances_2591_);
lean_ctor_set(v___x_2599_, 4, v_defEqCtx_x3f_2592_);
lean_ctor_set(v___x_2599_, 5, v_synthPendingDepth_2593_);
lean_ctor_set(v___x_2599_, 6, v_customCanUnfoldPredicate_x3f_2594_);
lean_ctor_set_uint8(v___x_2599_, sizeof(void*)*7, v_trackZetaDelta_2588_);
lean_ctor_set_uint8(v___x_2599_, sizeof(void*)*7 + 1, v_univApprox_2595_);
lean_ctor_set_uint8(v___x_2599_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2596_);
lean_ctor_set_uint8(v___x_2599_, sizeof(void*)*7 + 3, v_cacheInferType_2597_);
v___x_2600_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1(v___y_2580_, v___x_2584_, v___x_2599_, v___y_2579_, v___y_2578_, v___y_2577_);
lean_dec_ref_known(v___x_2599_, 7);
v___y_2542_ = v___y_2576_;
v___y_2543_ = v___y_2579_;
v___y_2544_ = v___y_2577_;
v___y_2545_ = v___y_2578_;
v___y_2546_ = v___x_2600_;
goto v___jp_2541_;
}
}
v___jp_2601_:
{
lean_object* v___x_2607_; 
lean_inc(v___y_2606_);
lean_inc_ref(v___y_2605_);
lean_inc(v___y_2604_);
lean_inc_ref(v___y_2603_);
v___x_2607_ = lean_apply_5(v___f_2528_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_, lean_box(0));
if (lean_obj_tag(v___x_2607_) == 0)
{
lean_object* v_a_2608_; uint8_t v___x_2609_; 
v_a_2608_ = lean_ctor_get(v___x_2607_, 0);
lean_inc(v_a_2608_);
lean_dec_ref_known(v___x_2607_, 1);
v___x_2609_ = lean_unbox(v_a_2608_);
lean_dec(v_a_2608_);
if (v___x_2609_ == 0)
{
v___y_2576_ = v___y_2603_;
v___y_2577_ = v___y_2606_;
v___y_2578_ = v___y_2605_;
v___y_2579_ = v___y_2604_;
v___y_2580_ = v_mvarId_2602_;
goto v___jp_2575_;
}
else
{
lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; 
v___x_2610_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___closed__3);
lean_inc(v_mvarId_2602_);
v___x_2611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2611_, 0, v_mvarId_2602_);
v___x_2612_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2610_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
lean_inc(v___x_2527_);
v___x_2613_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1(v___x_2527_, v___x_2612_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_);
if (lean_obj_tag(v___x_2613_) == 0)
{
lean_dec_ref_known(v___x_2613_, 1);
v___y_2576_ = v___y_2603_;
v___y_2577_ = v___y_2606_;
v___y_2578_ = v___y_2605_;
v___y_2579_ = v___y_2604_;
v___y_2580_ = v_mvarId_2602_;
goto v___jp_2575_;
}
else
{
lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2621_; 
lean_dec(v_mvarId_2602_);
lean_dec(v___x_2527_);
lean_dec_ref(v_a_2526_);
v_a_2614_ = lean_ctor_get(v___x_2613_, 0);
v_isSharedCheck_2621_ = !lean_is_exclusive(v___x_2613_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2616_ = v___x_2613_;
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v___x_2613_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2619_; 
if (v_isShared_2617_ == 0)
{
v___x_2619_ = v___x_2616_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v_a_2614_);
v___x_2619_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
return v___x_2619_;
}
}
}
}
}
else
{
lean_object* v_a_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_2629_; 
lean_dec(v_mvarId_2602_);
lean_dec(v___x_2527_);
lean_dec_ref(v_a_2526_);
v_a_2622_ = lean_ctor_get(v___x_2607_, 0);
v_isSharedCheck_2629_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2629_ == 0)
{
v___x_2624_ = v___x_2607_;
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_a_2622_);
lean_dec(v___x_2607_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___boxed(lean_object* v_a_2734_, lean_object* v___x_2735_, lean_object* v___f_2736_, lean_object* v_fixEq_x3f_2737_, lean_object* v_declName_2738_, lean_object* v___x_2739_, lean_object* v___x_2740_, lean_object* v_fixedParamPerms_2741_, lean_object* v_declNameNonRec_2742_, lean_object* v_____r_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_){
_start:
{
lean_object* v_res_2749_; 
v_res_2749_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2(v_a_2734_, v___x_2735_, v___f_2736_, v_fixEq_x3f_2737_, v_declName_2738_, v___x_2739_, v___x_2740_, v_fixedParamPerms_2741_, v_declNameNonRec_2742_, v_____r_2743_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_);
lean_dec(v___y_2747_);
lean_dec_ref(v___y_2746_);
lean_dec(v___y_2745_);
lean_dec_ref(v___y_2744_);
return v_res_2749_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__1(void){
_start:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2751_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__0));
v___x_2752_ = l_Lean_stringToMessageData(v___x_2751_);
return v___x_2752_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__3(void){
_start:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; 
v___x_2754_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__2));
v___x_2755_ = l_Lean_stringToMessageData(v___x_2754_);
return v___x_2755_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__9(void){
_start:
{
lean_object* v___x_2765_; lean_object* v___x_2766_; 
v___x_2765_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__8));
v___x_2766_ = l_Lean_stringToMessageData(v___x_2765_);
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3(lean_object* v_declName_2767_, lean_object* v_a_2768_, lean_object* v___x_2769_, lean_object* v_fixEq_x3f_2770_, lean_object* v_fixedParamPerms_2771_, lean_object* v_declNameNonRec_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_){
_start:
{
lean_object* v___y_2779_; lean_object* v_a_2780_; lean_object* v___y_2792_; lean_object* v___x_2794_; 
lean_inc(v___x_2769_);
v___x_2794_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_2768_, v___x_2769_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_);
if (lean_obj_tag(v___x_2794_) == 0)
{
lean_object* v_a_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___f_2798_; lean_object* v___x_2799_; lean_object* v_a_2800_; lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2823_; 
v_a_2795_ = lean_ctor_get(v___x_2794_, 0);
lean_inc(v_a_2795_);
lean_dec_ref_known(v___x_2794_, 1);
v___x_2796_ = l_Lean_Expr_mvarId_x21(v_a_2795_);
v___x_2797_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__6));
v___f_2798_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__7));
v___x_2799_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0(v___x_2797_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_);
v_a_2800_ = lean_ctor_get(v___x_2799_, 0);
v_isSharedCheck_2823_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2802_ = v___x_2799_;
v_isShared_2803_ = v_isSharedCheck_2823_;
goto v_resetjp_2801_;
}
else
{
lean_inc(v_a_2800_);
lean_dec(v___x_2799_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2823_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
uint8_t v___x_2804_; 
v___x_2804_ = lean_unbox(v_a_2800_);
lean_dec(v_a_2800_);
if (v___x_2804_ == 0)
{
lean_object* v___x_2805_; lean_object* v___x_2806_; 
lean_del_object(v___x_2802_);
v___x_2805_ = lean_box(0);
lean_inc(v_declName_2767_);
v___x_2806_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2(v_a_2795_, v___x_2797_, v___f_2798_, v_fixEq_x3f_2770_, v_declName_2767_, v___x_2769_, v___x_2796_, v_fixedParamPerms_2771_, v_declNameNonRec_2772_, v___x_2805_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_);
v___y_2792_ = v___x_2806_;
goto v___jp_2791_;
}
else
{
lean_object* v___x_2807_; lean_object* v___x_2809_; 
v___x_2807_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__9, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__9);
lean_inc(v___x_2796_);
if (v_isShared_2803_ == 0)
{
lean_ctor_set_tag(v___x_2802_, 1);
lean_ctor_set(v___x_2802_, 0, v___x_2796_);
v___x_2809_ = v___x_2802_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v___x_2796_);
v___x_2809_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; 
v___x_2810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2810_, 0, v___x_2807_);
lean_ctor_set(v___x_2810_, 1, v___x_2809_);
v___x_2811_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1(v___x_2797_, v___x_2810_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_);
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v_a_2812_; lean_object* v___x_2813_; 
v_a_2812_ = lean_ctor_get(v___x_2811_, 0);
lean_inc(v_a_2812_);
lean_dec_ref_known(v___x_2811_, 1);
lean_inc(v_declName_2767_);
v___x_2813_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2(v_a_2795_, v___x_2797_, v___f_2798_, v_fixEq_x3f_2770_, v_declName_2767_, v___x_2769_, v___x_2796_, v_fixedParamPerms_2771_, v_declNameNonRec_2772_, v_a_2812_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_);
v___y_2792_ = v___x_2813_;
goto v___jp_2791_;
}
else
{
lean_object* v_a_2814_; lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_2821_; 
lean_dec(v___x_2796_);
lean_dec(v_a_2795_);
lean_dec(v_declNameNonRec_2772_);
lean_dec_ref(v_fixedParamPerms_2771_);
lean_dec(v_fixEq_x3f_2770_);
lean_dec(v___x_2769_);
v_a_2814_ = lean_ctor_get(v___x_2811_, 0);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2811_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2816_ = v___x_2811_;
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
else
{
lean_inc(v_a_2814_);
lean_dec(v___x_2811_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
lean_object* v___x_2819_; 
lean_inc(v_a_2814_);
if (v_isShared_2817_ == 0)
{
v___x_2819_ = v___x_2816_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v_a_2814_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
v___y_2779_ = v___x_2819_;
v_a_2780_ = v_a_2814_;
goto v___jp_2778_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2824_; 
lean_dec(v_declNameNonRec_2772_);
lean_dec_ref(v_fixedParamPerms_2771_);
lean_dec(v_fixEq_x3f_2770_);
lean_dec(v___x_2769_);
v_a_2824_ = lean_ctor_get(v___x_2794_, 0);
lean_inc(v_a_2824_);
v___y_2779_ = v___x_2794_;
v_a_2780_ = v_a_2824_;
goto v___jp_2778_;
}
v___jp_2778_:
{
uint8_t v___x_2781_; 
v___x_2781_ = l_Lean_Exception_isInterrupt(v_a_2780_);
if (v___x_2781_ == 0)
{
uint8_t v___x_2782_; 
lean_inc_ref(v_a_2780_);
v___x_2782_ = l_Lean_Exception_isRuntime(v_a_2780_);
if (v___x_2782_ == 0)
{
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; 
lean_dec_ref(v___y_2779_);
v___x_2783_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__1);
v___x_2784_ = l_Lean_MessageData_ofConstName(v_declName_2767_, v___x_2782_);
v___x_2785_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2783_);
lean_ctor_set(v___x_2785_, 1, v___x_2784_);
v___x_2786_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___closed__3);
v___x_2787_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2785_);
lean_ctor_set(v___x_2787_, 1, v___x_2786_);
v___x_2788_ = l_Lean_Exception_toMessageData(v_a_2780_);
v___x_2789_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2789_, 0, v___x_2787_);
lean_ctor_set(v___x_2789_, 1, v___x_2788_);
v___x_2790_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__0___redArg(v___x_2789_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_);
return v___x_2790_;
}
else
{
lean_dec_ref(v_a_2780_);
lean_dec(v_declName_2767_);
return v___y_2779_;
}
}
else
{
lean_dec_ref(v_a_2780_);
lean_dec(v_declName_2767_);
return v___y_2779_;
}
}
v___jp_2791_:
{
if (lean_obj_tag(v___y_2792_) == 0)
{
lean_dec(v_declName_2767_);
return v___y_2792_;
}
else
{
lean_object* v_a_2793_; 
v_a_2793_ = lean_ctor_get(v___y_2792_, 0);
lean_inc(v_a_2793_);
v___y_2779_ = v___y_2792_;
v_a_2780_ = v_a_2793_;
goto v___jp_2778_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___boxed(lean_object* v_declName_2825_, lean_object* v_a_2826_, lean_object* v___x_2827_, lean_object* v_fixEq_x3f_2828_, lean_object* v_fixedParamPerms_2829_, lean_object* v_declNameNonRec_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_){
_start:
{
lean_object* v_res_2836_; 
v_res_2836_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3(v_declName_2825_, v_a_2826_, v___x_2827_, v_fixEq_x3f_2828_, v_fixedParamPerms_2829_, v_declNameNonRec_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_);
lean_dec(v___y_2834_);
lean_dec_ref(v___y_2833_);
lean_dec(v___y_2832_);
lean_dec_ref(v___y_2831_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__4(lean_object* v_levelParams_2837_, lean_object* v_declName_2838_, lean_object* v_fixEq_x3f_2839_, lean_object* v_fixedParamPerms_2840_, lean_object* v_declNameNonRec_2841_, lean_object* v_name_2842_, lean_object* v_xs_2843_, lean_object* v_body_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_){
_start:
{
lean_object* v___x_2850_; lean_object* v_us_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; 
v___x_2850_ = lean_box(0);
lean_inc(v_levelParams_2837_);
v_us_2851_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__2(v_levelParams_2837_, v___x_2850_);
lean_inc(v_declName_2838_);
v___x_2852_ = l_Lean_mkConst(v_declName_2838_, v_us_2851_);
v___x_2853_ = l_Lean_mkAppN(v___x_2852_, v_xs_2843_);
v___x_2854_ = l_Lean_Meta_mkEq(v___x_2853_, v_body_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
if (lean_obj_tag(v___x_2854_) == 0)
{
lean_object* v_a_2855_; lean_object* v___x_2856_; lean_object* v___f_2857_; uint8_t v___x_2858_; lean_object* v___x_2859_; 
v_a_2855_ = lean_ctor_get(v___x_2854_, 0);
lean_inc_n(v_a_2855_, 2);
lean_dec_ref_known(v___x_2854_, 1);
v___x_2856_ = lean_box(0);
v___f_2857_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__3___boxed), 11, 6);
lean_closure_set(v___f_2857_, 0, v_declName_2838_);
lean_closure_set(v___f_2857_, 1, v_a_2855_);
lean_closure_set(v___f_2857_, 2, v___x_2856_);
lean_closure_set(v___f_2857_, 3, v_fixEq_x3f_2839_);
lean_closure_set(v___f_2857_, 4, v_fixedParamPerms_2840_);
lean_closure_set(v___f_2857_, 5, v_declNameNonRec_2841_);
v___x_2858_ = 0;
v___x_2859_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4___redArg(v___f_2857_, v___x_2858_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v_a_2860_; uint8_t v___x_2861_; uint8_t v___x_2862_; lean_object* v___x_2863_; 
v_a_2860_ = lean_ctor_get(v___x_2859_, 0);
lean_inc(v_a_2860_);
lean_dec_ref_known(v___x_2859_, 1);
v___x_2861_ = 1;
v___x_2862_ = 1;
v___x_2863_ = l_Lean_Meta_mkForallFVars(v_xs_2843_, v_a_2855_, v___x_2858_, v___x_2861_, v___x_2861_, v___x_2862_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v_a_2864_; lean_object* v___x_2865_; 
v_a_2864_ = lean_ctor_get(v___x_2863_, 0);
lean_inc(v_a_2864_);
lean_dec_ref_known(v___x_2863_, 1);
v___x_2865_ = l_Lean_Meta_letToHave(v_a_2864_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
if (lean_obj_tag(v___x_2865_) == 0)
{
lean_object* v_a_2866_; lean_object* v___x_2867_; 
v_a_2866_ = lean_ctor_get(v___x_2865_, 0);
lean_inc(v_a_2866_);
lean_dec_ref_known(v___x_2865_, 1);
v___x_2867_ = l_Lean_Meta_mkLambdaFVars(v_xs_2843_, v_a_2860_, v___x_2858_, v___x_2861_, v___x_2858_, v___x_2861_, v___x_2862_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
if (lean_obj_tag(v___x_2867_) == 0)
{
lean_object* v_a_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v_a_2873_; lean_object* v___x_2874_; 
v_a_2868_ = lean_ctor_get(v___x_2867_, 0);
lean_inc(v_a_2868_);
lean_dec_ref_known(v___x_2867_, 1);
lean_inc(v_name_2842_);
v___x_2869_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2869_, 0, v_name_2842_);
lean_ctor_set(v___x_2869_, 1, v_levelParams_2837_);
lean_ctor_set(v___x_2869_, 2, v_a_2866_);
v___x_2870_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2870_, 0, v_name_2842_);
lean_ctor_set(v___x_2870_, 1, v___x_2850_);
v___x_2871_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2869_);
lean_ctor_set(v___x_2871_, 1, v_a_2868_);
lean_ctor_set(v___x_2871_, 2, v___x_2870_);
v___x_2872_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__5___redArg(v___x_2871_, v___y_2848_);
v_a_2873_ = lean_ctor_get(v___x_2872_, 0);
lean_inc(v_a_2873_);
lean_dec_ref(v___x_2872_);
v___x_2874_ = l_Lean_addDecl(v_a_2873_, v___x_2858_, v___y_2847_, v___y_2848_);
return v___x_2874_;
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2882_; 
lean_dec(v_a_2866_);
lean_dec(v_name_2842_);
lean_dec(v_levelParams_2837_);
v_a_2875_ = lean_ctor_get(v___x_2867_, 0);
v_isSharedCheck_2882_ = !lean_is_exclusive(v___x_2867_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2877_ = v___x_2867_;
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v___x_2867_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
if (v_isShared_2878_ == 0)
{
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_a_2875_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
}
}
}
else
{
lean_object* v_a_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2890_; 
lean_dec(v_a_2860_);
lean_dec(v_name_2842_);
lean_dec(v_levelParams_2837_);
v_a_2883_ = lean_ctor_get(v___x_2865_, 0);
v_isSharedCheck_2890_ = !lean_is_exclusive(v___x_2865_);
if (v_isSharedCheck_2890_ == 0)
{
v___x_2885_ = v___x_2865_;
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_a_2883_);
lean_dec(v___x_2865_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___x_2888_; 
if (v_isShared_2886_ == 0)
{
v___x_2888_ = v___x_2885_;
goto v_reusejp_2887_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v_a_2883_);
v___x_2888_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2887_;
}
v_reusejp_2887_:
{
return v___x_2888_;
}
}
}
}
else
{
lean_object* v_a_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2898_; 
lean_dec(v_a_2860_);
lean_dec(v_name_2842_);
lean_dec(v_levelParams_2837_);
v_a_2891_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2893_ = v___x_2863_;
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_a_2891_);
lean_dec(v___x_2863_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2896_; 
if (v_isShared_2894_ == 0)
{
v___x_2896_ = v___x_2893_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_a_2891_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
return v___x_2896_;
}
}
}
}
else
{
lean_object* v_a_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2906_; 
lean_dec(v_a_2855_);
lean_dec(v_name_2842_);
lean_dec(v_levelParams_2837_);
v_a_2899_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2901_ = v___x_2859_;
v_isShared_2902_ = v_isSharedCheck_2906_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_a_2899_);
lean_dec(v___x_2859_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2906_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
lean_object* v___x_2904_; 
if (v_isShared_2902_ == 0)
{
v___x_2904_ = v___x_2901_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v_a_2899_);
v___x_2904_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
return v___x_2904_;
}
}
}
}
else
{
lean_object* v_a_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2914_; 
lean_dec(v_name_2842_);
lean_dec(v_declNameNonRec_2841_);
lean_dec_ref(v_fixedParamPerms_2840_);
lean_dec(v_fixEq_x3f_2839_);
lean_dec(v_declName_2838_);
lean_dec(v_levelParams_2837_);
v_a_2907_ = lean_ctor_get(v___x_2854_, 0);
v_isSharedCheck_2914_ = !lean_is_exclusive(v___x_2854_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2909_ = v___x_2854_;
v_isShared_2910_ = v_isSharedCheck_2914_;
goto v_resetjp_2908_;
}
else
{
lean_inc(v_a_2907_);
lean_dec(v___x_2854_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2914_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2912_; 
if (v_isShared_2910_ == 0)
{
v___x_2912_ = v___x_2909_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v_a_2907_);
v___x_2912_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
return v___x_2912_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__4___boxed(lean_object* v_levelParams_2915_, lean_object* v_declName_2916_, lean_object* v_fixEq_x3f_2917_, lean_object* v_fixedParamPerms_2918_, lean_object* v_declNameNonRec_2919_, lean_object* v_name_2920_, lean_object* v_xs_2921_, lean_object* v_body_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v_res_2928_; 
v_res_2928_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__4(v_levelParams_2915_, v_declName_2916_, v_fixEq_x3f_2917_, v_fixedParamPerms_2918_, v_declNameNonRec_2919_, v_name_2920_, v_xs_2921_, v_body_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_);
lean_dec(v___y_2926_);
lean_dec_ref(v___y_2925_);
lean_dec(v___y_2924_);
lean_dec_ref(v___y_2923_);
lean_dec_ref(v_xs_2921_);
return v_res_2928_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize(lean_object* v_declName_2929_, lean_object* v_info_2930_, lean_object* v_name_2931_, lean_object* v_a_2932_, lean_object* v_a_2933_, lean_object* v_a_2934_, lean_object* v_a_2935_){
_start:
{
lean_object* v_toCold_2937_; lean_object* v_levelParams_2938_; lean_object* v_value_2939_; lean_object* v_declNameNonRec_2940_; lean_object* v_fixedParamPerms_2941_; lean_object* v_fixEq_x3f_2942_; lean_object* v_currRecDepth_2943_; lean_object* v_ref_2944_; uint8_t v_suppressElabErrors_2945_; uint8_t v_checkDeprecated_2946_; uint8_t v_isRecordingDeps_2947_; lean_object* v_fileName_2948_; lean_object* v_fileMap_2949_; lean_object* v_options_2950_; lean_object* v_currNamespace_2951_; lean_object* v_openDecls_2952_; lean_object* v_initHeartbeats_2953_; lean_object* v_maxHeartbeats_2954_; lean_object* v_quotContext_2955_; lean_object* v_currMacroScope_2956_; lean_object* v_cancelTk_x3f_2957_; lean_object* v_inheritedTraceOptions_2958_; lean_object* v___f_2959_; uint8_t v___x_2960_; uint16_t v___y_2962_; lean_object* v___y_2963_; lean_object* v_fileName_2964_; lean_object* v_fileMap_2965_; lean_object* v_currNamespace_2966_; lean_object* v_openDecls_2967_; lean_object* v_initHeartbeats_2968_; lean_object* v_maxHeartbeats_2969_; lean_object* v_quotContext_2970_; lean_object* v_currMacroScope_2971_; lean_object* v_cancelTk_x3f_2972_; lean_object* v_inheritedTraceOptions_2973_; lean_object* v_currRecDepth_2974_; lean_object* v_ref_2975_; uint8_t v_suppressElabErrors_2976_; uint8_t v_checkDeprecated_2977_; uint8_t v_isRecordingDeps_2978_; lean_object* v___y_2979_; lean_object* v_nextMacroScope_2986_; lean_object* v_ngen_2987_; lean_object* v_auxDeclNGen_2988_; lean_object* v_traceState_2989_; lean_object* v_recordedDeps_2990_; lean_object* v_messages_2991_; lean_object* v_infoState_2992_; lean_object* v_snapshotTasks_2993_; uint16_t v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_2996_; uint16_t v___y_3001_; lean_object* v___y_3002_; uint8_t v___y_3003_; lean_object* v___y_3022_; 
v_toCold_2937_ = lean_ctor_get(v_a_2934_, 0);
v_levelParams_2938_ = lean_ctor_get(v_info_2930_, 1);
lean_inc(v_levelParams_2938_);
v_value_2939_ = lean_ctor_get(v_info_2930_, 3);
lean_inc_ref(v_value_2939_);
v_declNameNonRec_2940_ = lean_ctor_get(v_info_2930_, 5);
lean_inc(v_declNameNonRec_2940_);
v_fixedParamPerms_2941_ = lean_ctor_get(v_info_2930_, 6);
lean_inc_ref(v_fixedParamPerms_2941_);
v_fixEq_x3f_2942_ = lean_ctor_get(v_info_2930_, 8);
lean_inc(v_fixEq_x3f_2942_);
lean_dec_ref(v_info_2930_);
v_currRecDepth_2943_ = lean_ctor_get(v_a_2934_, 1);
v_ref_2944_ = lean_ctor_get(v_a_2934_, 2);
v_suppressElabErrors_2945_ = lean_ctor_get_uint8(v_a_2934_, sizeof(void*)*3 + 2);
v_checkDeprecated_2946_ = lean_ctor_get_uint8(v_a_2934_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2947_ = lean_ctor_get_uint8(v_a_2934_, sizeof(void*)*3 + 4);
v_fileName_2948_ = lean_ctor_get(v_toCold_2937_, 0);
v_fileMap_2949_ = lean_ctor_get(v_toCold_2937_, 1);
v_options_2950_ = lean_ctor_get(v_toCold_2937_, 2);
v_currNamespace_2951_ = lean_ctor_get(v_toCold_2937_, 4);
v_openDecls_2952_ = lean_ctor_get(v_toCold_2937_, 5);
v_initHeartbeats_2953_ = lean_ctor_get(v_toCold_2937_, 6);
v_maxHeartbeats_2954_ = lean_ctor_get(v_toCold_2937_, 7);
v_quotContext_2955_ = lean_ctor_get(v_toCold_2937_, 8);
v_currMacroScope_2956_ = lean_ctor_get(v_toCold_2937_, 9);
v_cancelTk_x3f_2957_ = lean_ctor_get(v_toCold_2937_, 10);
v_inheritedTraceOptions_2958_ = lean_ctor_get(v_toCold_2937_, 11);
v___f_2959_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__4___boxed), 13, 6);
lean_closure_set(v___f_2959_, 0, v_levelParams_2938_);
lean_closure_set(v___f_2959_, 1, v_declName_2929_);
lean_closure_set(v___f_2959_, 2, v_fixEq_x3f_2942_);
lean_closure_set(v___f_2959_, 3, v_fixedParamPerms_2941_);
lean_closure_set(v___f_2959_, 4, v_declNameNonRec_2940_);
lean_closure_set(v___f_2959_, 5, v_name_2931_);
v___x_2960_ = 0;
if (v_isRecordingDeps_2947_ == 0)
{
lean_object* v___x_3031_; lean_object* v___x_3032_; 
v___x_3031_ = l_Lean_Meta_tactic_hygienic;
lean_inc_ref(v_options_2950_);
v___x_3032_ = l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(v_options_2950_, v___x_3031_, v_isRecordingDeps_2947_);
v___y_3022_ = v___x_3032_;
goto v___jp_3021_;
}
else
{
lean_object* v___x_3033_; 
lean_inc_ref(v_options_2950_);
v___x_3033_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_2950_);
v___y_3022_ = v___x_3033_;
goto v___jp_3021_;
}
v___jp_2961_:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2980_ = l_Lean_maxRecDepth;
v___x_2981_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(v___y_2963_, v___x_2980_);
v___x_2982_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2982_, 0, v_fileName_2964_);
lean_ctor_set(v___x_2982_, 1, v_fileMap_2965_);
lean_ctor_set(v___x_2982_, 2, v___y_2963_);
lean_ctor_set(v___x_2982_, 3, v___x_2981_);
lean_ctor_set(v___x_2982_, 4, v_currNamespace_2966_);
lean_ctor_set(v___x_2982_, 5, v_openDecls_2967_);
lean_ctor_set(v___x_2982_, 6, v_initHeartbeats_2968_);
lean_ctor_set(v___x_2982_, 7, v_maxHeartbeats_2969_);
lean_ctor_set(v___x_2982_, 8, v_quotContext_2970_);
lean_ctor_set(v___x_2982_, 9, v_currMacroScope_2971_);
lean_ctor_set(v___x_2982_, 10, v_cancelTk_x3f_2972_);
lean_ctor_set(v___x_2982_, 11, v_inheritedTraceOptions_2973_);
lean_inc(v_ref_2975_);
lean_inc(v_currRecDepth_2974_);
v___x_2983_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2983_, 0, v___x_2982_);
lean_ctor_set(v___x_2983_, 1, v_currRecDepth_2974_);
lean_ctor_set(v___x_2983_, 2, v_ref_2975_);
lean_ctor_set_uint16(v___x_2983_, sizeof(void*)*3, v___y_2962_);
lean_ctor_set_uint8(v___x_2983_, sizeof(void*)*3 + 2, v_suppressElabErrors_2976_);
lean_ctor_set_uint8(v___x_2983_, sizeof(void*)*3 + 3, v_checkDeprecated_2977_);
lean_ctor_set_uint8(v___x_2983_, sizeof(void*)*3 + 4, v_isRecordingDeps_2978_);
v___x_2984_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq_spec__3___redArg(v_value_2939_, v___f_2959_, v___x_2960_, v_a_2932_, v_a_2933_, v___x_2983_, v___y_2979_);
lean_dec_ref_known(v___x_2983_, 3);
return v___x_2984_;
}
v___jp_2985_:
{
lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2997_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkFixEq___lam__2___closed__3);
v___x_2998_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2998_, 0, v___y_2996_);
lean_ctor_set(v___x_2998_, 1, v_nextMacroScope_2986_);
lean_ctor_set(v___x_2998_, 2, v_ngen_2987_);
lean_ctor_set(v___x_2998_, 3, v_auxDeclNGen_2988_);
lean_ctor_set(v___x_2998_, 4, v_traceState_2989_);
lean_ctor_set(v___x_2998_, 5, v___x_2997_);
lean_ctor_set(v___x_2998_, 6, v_recordedDeps_2990_);
lean_ctor_set(v___x_2998_, 7, v_messages_2991_);
lean_ctor_set(v___x_2998_, 8, v_infoState_2992_);
lean_ctor_set(v___x_2998_, 9, v_snapshotTasks_2993_);
v___x_2999_ = lean_st_ref_put(v_a_2935_, v___x_2998_);
lean_inc_ref(v_inheritedTraceOptions_2958_);
lean_inc(v_cancelTk_x3f_2957_);
lean_inc(v_currMacroScope_2956_);
lean_inc(v_quotContext_2955_);
lean_inc(v_maxHeartbeats_2954_);
lean_inc(v_initHeartbeats_2953_);
lean_inc(v_openDecls_2952_);
lean_inc(v_currNamespace_2951_);
lean_inc_ref(v_fileMap_2949_);
lean_inc_ref(v_fileName_2948_);
v___y_2962_ = v___y_2994_;
v___y_2963_ = v___y_2995_;
v_fileName_2964_ = v_fileName_2948_;
v_fileMap_2965_ = v_fileMap_2949_;
v_currNamespace_2966_ = v_currNamespace_2951_;
v_openDecls_2967_ = v_openDecls_2952_;
v_initHeartbeats_2968_ = v_initHeartbeats_2953_;
v_maxHeartbeats_2969_ = v_maxHeartbeats_2954_;
v_quotContext_2970_ = v_quotContext_2955_;
v_currMacroScope_2971_ = v_currMacroScope_2956_;
v_cancelTk_x3f_2972_ = v_cancelTk_x3f_2957_;
v_inheritedTraceOptions_2973_ = v_inheritedTraceOptions_2958_;
v_currRecDepth_2974_ = v_currRecDepth_2943_;
v_ref_2975_ = v_ref_2944_;
v_suppressElabErrors_2976_ = v_suppressElabErrors_2945_;
v_checkDeprecated_2977_ = v_checkDeprecated_2946_;
v_isRecordingDeps_2978_ = v_isRecordingDeps_2947_;
v___y_2979_ = v_a_2935_;
goto v___jp_2961_;
}
v___jp_3000_:
{
uint8_t v___x_3004_; lean_object* v___x_3005_; lean_object* v_env_3006_; lean_object* v_nextMacroScope_3007_; lean_object* v_ngen_3008_; lean_object* v_auxDeclNGen_3009_; lean_object* v_traceState_3010_; lean_object* v_recordedDeps_3011_; lean_object* v_messages_3012_; lean_object* v_infoState_3013_; lean_object* v_snapshotTasks_3014_; uint16_t v___x_3015_; uint16_t v___x_3016_; uint16_t v___x_3017_; uint8_t v___x_3018_; 
v___x_3004_ = 1;
v___x_3005_ = lean_st_ref_take(v_a_2935_);
v_env_3006_ = lean_ctor_get(v___x_3005_, 0);
lean_inc_ref(v_env_3006_);
v_nextMacroScope_3007_ = lean_ctor_get(v___x_3005_, 1);
lean_inc(v_nextMacroScope_3007_);
v_ngen_3008_ = lean_ctor_get(v___x_3005_, 2);
lean_inc_ref(v_ngen_3008_);
v_auxDeclNGen_3009_ = lean_ctor_get(v___x_3005_, 3);
lean_inc_ref(v_auxDeclNGen_3009_);
v_traceState_3010_ = lean_ctor_get(v___x_3005_, 4);
lean_inc_ref(v_traceState_3010_);
v_recordedDeps_3011_ = lean_ctor_get(v___x_3005_, 6);
lean_inc_ref(v_recordedDeps_3011_);
v_messages_3012_ = lean_ctor_get(v___x_3005_, 7);
lean_inc_ref(v_messages_3012_);
v_infoState_3013_ = lean_ctor_get(v___x_3005_, 8);
lean_inc_ref(v_infoState_3013_);
v_snapshotTasks_3014_ = lean_ctor_get(v___x_3005_, 9);
lean_inc_ref(v_snapshotTasks_3014_);
lean_dec(v___x_3005_);
v___x_3015_ = 512;
v___x_3016_ = lean_uint16_land(v___y_3001_, v___x_3015_);
v___x_3017_ = 0;
v___x_3018_ = lean_uint16_dec_eq(v___x_3016_, v___x_3017_);
if (v___x_3018_ == 0)
{
lean_object* v___x_3019_; 
v___x_3019_ = l_Lean_Kernel_enableDiag(v_env_3006_, v___x_3004_);
v_nextMacroScope_2986_ = v_nextMacroScope_3007_;
v_ngen_2987_ = v_ngen_3008_;
v_auxDeclNGen_2988_ = v_auxDeclNGen_3009_;
v_traceState_2989_ = v_traceState_3010_;
v_recordedDeps_2990_ = v_recordedDeps_3011_;
v_messages_2991_ = v_messages_3012_;
v_infoState_2992_ = v_infoState_3013_;
v_snapshotTasks_2993_ = v_snapshotTasks_3014_;
v___y_2994_ = v___y_3001_;
v___y_2995_ = v___y_3002_;
v___y_2996_ = v___x_3019_;
goto v___jp_2985_;
}
else
{
lean_object* v___x_3020_; 
v___x_3020_ = l_Lean_Kernel_enableDiag(v_env_3006_, v___y_3003_);
v_nextMacroScope_2986_ = v_nextMacroScope_3007_;
v_ngen_2987_ = v_ngen_3008_;
v_auxDeclNGen_2988_ = v_auxDeclNGen_3009_;
v_traceState_2989_ = v_traceState_3010_;
v_recordedDeps_2990_ = v_recordedDeps_3011_;
v_messages_2991_ = v_messages_3012_;
v_infoState_2992_ = v_infoState_3013_;
v_snapshotTasks_2993_ = v_snapshotTasks_3014_;
v___y_2994_ = v___y_3001_;
v___y_2995_ = v___y_3002_;
v___y_2996_ = v___x_3020_;
goto v___jp_2985_;
}
}
v___jp_3021_:
{
uint16_t v___x_3023_; lean_object* v___x_3024_; lean_object* v_env_3025_; uint8_t v___x_3026_; uint16_t v___x_3027_; uint16_t v___x_3028_; uint16_t v___x_3029_; uint8_t v___x_3030_; 
v___x_3023_ = l_Lean_OptionFlags_ofOptions(v___y_3022_);
v___x_3024_ = lean_st_ref_get(v_a_2935_);
v_env_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc_ref(v_env_3025_);
lean_dec(v___x_3024_);
v___x_3026_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3025_);
lean_dec_ref(v_env_3025_);
v___x_3027_ = 512;
v___x_3028_ = lean_uint16_land(v___x_3023_, v___x_3027_);
v___x_3029_ = 0;
v___x_3030_ = lean_uint16_dec_eq(v___x_3028_, v___x_3029_);
if (v___x_3030_ == 0)
{
if (v___x_3026_ == 0)
{
v___y_3001_ = v___x_3023_;
v___y_3002_ = v___y_3022_;
v___y_3003_ = v___x_3026_;
goto v___jp_3000_;
}
else
{
lean_inc_ref(v_inheritedTraceOptions_2958_);
lean_inc(v_cancelTk_x3f_2957_);
lean_inc(v_currMacroScope_2956_);
lean_inc(v_quotContext_2955_);
lean_inc(v_maxHeartbeats_2954_);
lean_inc(v_initHeartbeats_2953_);
lean_inc(v_openDecls_2952_);
lean_inc(v_currNamespace_2951_);
lean_inc_ref(v_fileMap_2949_);
lean_inc_ref(v_fileName_2948_);
v___y_2962_ = v___x_3023_;
v___y_2963_ = v___y_3022_;
v_fileName_2964_ = v_fileName_2948_;
v_fileMap_2965_ = v_fileMap_2949_;
v_currNamespace_2966_ = v_currNamespace_2951_;
v_openDecls_2967_ = v_openDecls_2952_;
v_initHeartbeats_2968_ = v_initHeartbeats_2953_;
v_maxHeartbeats_2969_ = v_maxHeartbeats_2954_;
v_quotContext_2970_ = v_quotContext_2955_;
v_currMacroScope_2971_ = v_currMacroScope_2956_;
v_cancelTk_x3f_2972_ = v_cancelTk_x3f_2957_;
v_inheritedTraceOptions_2973_ = v_inheritedTraceOptions_2958_;
v_currRecDepth_2974_ = v_currRecDepth_2943_;
v_ref_2975_ = v_ref_2944_;
v_suppressElabErrors_2976_ = v_suppressElabErrors_2945_;
v_checkDeprecated_2977_ = v_checkDeprecated_2946_;
v_isRecordingDeps_2978_ = v_isRecordingDeps_2947_;
v___y_2979_ = v_a_2935_;
goto v___jp_2961_;
}
}
else
{
if (v___x_3026_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_2958_);
lean_inc(v_cancelTk_x3f_2957_);
lean_inc(v_currMacroScope_2956_);
lean_inc(v_quotContext_2955_);
lean_inc(v_maxHeartbeats_2954_);
lean_inc(v_initHeartbeats_2953_);
lean_inc(v_openDecls_2952_);
lean_inc(v_currNamespace_2951_);
lean_inc_ref(v_fileMap_2949_);
lean_inc_ref(v_fileName_2948_);
v___y_2962_ = v___x_3023_;
v___y_2963_ = v___y_3022_;
v_fileName_2964_ = v_fileName_2948_;
v_fileMap_2965_ = v_fileMap_2949_;
v_currNamespace_2966_ = v_currNamespace_2951_;
v_openDecls_2967_ = v_openDecls_2952_;
v_initHeartbeats_2968_ = v_initHeartbeats_2953_;
v_maxHeartbeats_2969_ = v_maxHeartbeats_2954_;
v_quotContext_2970_ = v_quotContext_2955_;
v_currMacroScope_2971_ = v_currMacroScope_2956_;
v_cancelTk_x3f_2972_ = v_cancelTk_x3f_2957_;
v_inheritedTraceOptions_2973_ = v_inheritedTraceOptions_2958_;
v_currRecDepth_2974_ = v_currRecDepth_2943_;
v_ref_2975_ = v_ref_2944_;
v_suppressElabErrors_2976_ = v_suppressElabErrors_2945_;
v_checkDeprecated_2977_ = v_checkDeprecated_2946_;
v_isRecordingDeps_2978_ = v_isRecordingDeps_2947_;
v___y_2979_ = v_a_2935_;
goto v___jp_2961_;
}
else
{
v___y_3001_ = v___x_3023_;
v___y_3002_ = v___y_3022_;
v___y_3003_ = v___x_2960_;
goto v___jp_3000_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___boxed(lean_object* v_declName_3034_, lean_object* v_info_3035_, lean_object* v_name_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_){
_start:
{
lean_object* v_res_3042_; 
v_res_3042_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize(v_declName_3034_, v_info_3035_, v_name_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_);
lean_dec(v_a_3040_);
lean_dec_ref(v_a_3039_);
lean_dec(v_a_3038_);
lean_dec_ref(v_a_3037_);
return v_res_3042_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq(lean_object* v_declName_3043_, lean_object* v_info_3044_, lean_object* v_a_3045_, lean_object* v_a_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_){
_start:
{
lean_object* v___x_3050_; lean_object* v_env_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3050_ = lean_st_ref_get(v_a_3048_);
v_env_3051_ = lean_ctor_get(v___x_3050_, 0);
lean_inc_ref(v_env_3051_);
lean_dec(v___x_3050_);
v___x_3052_ = l_Lean_Meta_unfoldThmSuffix;
lean_inc_n(v_declName_3043_, 2);
v___x_3053_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3051_, v_declName_3043_, v___x_3052_);
lean_inc_n(v___x_3053_, 2);
v___x_3054_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___boxed), 8, 3);
lean_closure_set(v___x_3054_, 0, v_declName_3043_);
lean_closure_set(v___x_3054_, 1, v_info_3044_);
lean_closure_set(v___x_3054_, 2, v___x_3053_);
v___x_3055_ = l_Lean_Meta_realizeConst(v_declName_3043_, v___x_3053_, v___x_3054_, v_a_3045_, v_a_3046_, v_a_3047_, v_a_3048_);
if (lean_obj_tag(v___x_3055_) == 0)
{
lean_object* v___x_3057_; uint8_t v_isShared_3058_; uint8_t v_isSharedCheck_3062_; 
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_3055_);
if (v_isSharedCheck_3062_ == 0)
{
lean_object* v_unused_3063_; 
v_unused_3063_ = lean_ctor_get(v___x_3055_, 0);
lean_dec(v_unused_3063_);
v___x_3057_ = v___x_3055_;
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
else
{
lean_dec(v___x_3055_);
v___x_3057_ = lean_box(0);
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
v_resetjp_3056_:
{
lean_object* v___x_3060_; 
if (v_isShared_3058_ == 0)
{
lean_ctor_set(v___x_3057_, 0, v___x_3053_);
v___x_3060_ = v___x_3057_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v___x_3053_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
return v___x_3060_;
}
}
}
else
{
lean_object* v_a_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3071_; 
lean_dec(v___x_3053_);
v_a_3064_ = lean_ctor_get(v___x_3055_, 0);
v_isSharedCheck_3071_ = !lean_is_exclusive(v___x_3055_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_3066_ = v___x_3055_;
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_a_3064_);
lean_dec(v___x_3055_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v___x_3069_; 
if (v_isShared_3067_ == 0)
{
v___x_3069_ = v___x_3066_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_a_3064_);
v___x_3069_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
return v___x_3069_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq___boxed(lean_object* v_declName_3072_, lean_object* v_info_3073_, lean_object* v_a_3074_, lean_object* v_a_3075_, lean_object* v_a_3076_, lean_object* v_a_3077_, lean_object* v_a_3078_){
_start:
{
lean_object* v_res_3079_; 
v_res_3079_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq(v_declName_3072_, v_info_3073_, v_a_3074_, v_a_3075_, v_a_3076_, v_a_3077_);
lean_dec(v_a_3077_);
lean_dec_ref(v_a_3076_);
lean_dec(v_a_3075_);
lean_dec_ref(v_a_3074_);
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f(lean_object* v_declName_3080_, lean_object* v_a_3081_, lean_object* v_a_3082_, lean_object* v_a_3083_, lean_object* v_a_3084_){
_start:
{
lean_object* v___x_3086_; lean_object* v_env_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v_env_3091_; uint8_t v___x_3092_; uint8_t v___x_3093_; 
v___x_3086_ = lean_st_ref_get(v_a_3084_);
v_env_3087_ = lean_ctor_get(v___x_3086_, 0);
lean_inc_ref(v_env_3087_);
lean_dec(v___x_3086_);
v___x_3088_ = l_Lean_Meta_unfoldThmSuffix;
lean_inc(v_declName_3080_);
v___x_3089_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3087_, v_declName_3080_, v___x_3088_);
v___x_3090_ = lean_st_ref_get(v_a_3084_);
v_env_3091_ = lean_ctor_get(v___x_3090_, 0);
lean_inc_ref_n(v_env_3091_, 2);
lean_dec(v___x_3090_);
v___x_3092_ = 1;
lean_inc(v___x_3089_);
v___x_3093_ = l_Lean_Environment_contains(v_env_3091_, v___x_3089_, v___x_3092_);
if (v___x_3093_ == 0)
{
lean_object* v___x_3094_; lean_object* v_toEnvExtension_3095_; lean_object* v_asyncMode_3096_; uint8_t v___x_3097_; lean_object* v___x_3098_; 
lean_dec(v___x_3089_);
v___x_3094_ = l_Lean_Elab_PartialFixpoint_eqnInfoExt;
v_toEnvExtension_3095_ = lean_ctor_get(v___x_3094_, 0);
v_asyncMode_3096_ = lean_ctor_get(v_toEnvExtension_3095_, 2);
v___x_3097_ = 0;
lean_inc(v_declName_3080_);
v___x_3098_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_3094_, v_env_3091_, v_declName_3080_, v_asyncMode_3096_, v___x_3097_);
if (lean_obj_tag(v___x_3098_) == 1)
{
lean_object* v_val_3099_; lean_object* v___x_3101_; uint8_t v_isShared_3102_; uint8_t v_isSharedCheck_3123_; 
v_val_3099_ = lean_ctor_get(v___x_3098_, 0);
v_isSharedCheck_3123_ = !lean_is_exclusive(v___x_3098_);
if (v_isSharedCheck_3123_ == 0)
{
v___x_3101_ = v___x_3098_;
v_isShared_3102_ = v_isSharedCheck_3123_;
goto v_resetjp_3100_;
}
else
{
lean_inc(v_val_3099_);
lean_dec(v___x_3098_);
v___x_3101_ = lean_box(0);
v_isShared_3102_ = v_isSharedCheck_3123_;
goto v_resetjp_3100_;
}
v_resetjp_3100_:
{
lean_object* v___x_3103_; 
v___x_3103_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq(v_declName_3080_, v_val_3099_, v_a_3081_, v_a_3082_, v_a_3083_, v_a_3084_);
if (lean_obj_tag(v___x_3103_) == 0)
{
lean_object* v_a_3104_; lean_object* v___x_3106_; uint8_t v_isShared_3107_; uint8_t v_isSharedCheck_3114_; 
v_a_3104_ = lean_ctor_get(v___x_3103_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_3103_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3106_ = v___x_3103_;
v_isShared_3107_ = v_isSharedCheck_3114_;
goto v_resetjp_3105_;
}
else
{
lean_inc(v_a_3104_);
lean_dec(v___x_3103_);
v___x_3106_ = lean_box(0);
v_isShared_3107_ = v_isSharedCheck_3114_;
goto v_resetjp_3105_;
}
v_resetjp_3105_:
{
lean_object* v___x_3109_; 
if (v_isShared_3102_ == 0)
{
lean_ctor_set(v___x_3101_, 0, v_a_3104_);
v___x_3109_ = v___x_3101_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_a_3104_);
v___x_3109_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
lean_object* v___x_3111_; 
if (v_isShared_3107_ == 0)
{
lean_ctor_set(v___x_3106_, 0, v___x_3109_);
v___x_3111_ = v___x_3106_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v___x_3109_);
v___x_3111_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
return v___x_3111_;
}
}
}
}
else
{
lean_object* v_a_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3122_; 
lean_del_object(v___x_3101_);
v_a_3115_ = lean_ctor_get(v___x_3103_, 0);
v_isSharedCheck_3122_ = !lean_is_exclusive(v___x_3103_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3117_ = v___x_3103_;
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_a_3115_);
lean_dec(v___x_3103_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3120_; 
if (v_isShared_3118_ == 0)
{
v___x_3120_ = v___x_3117_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_a_3115_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
}
}
}
else
{
lean_object* v___x_3124_; lean_object* v___x_3125_; 
lean_dec(v___x_3098_);
lean_dec(v_declName_3080_);
v___x_3124_ = lean_box(0);
v___x_3125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3124_);
return v___x_3125_;
}
}
else
{
lean_object* v___x_3126_; lean_object* v___x_3127_; 
lean_dec_ref(v_env_3091_);
lean_dec(v_declName_3080_);
v___x_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3089_);
v___x_3127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3126_);
return v___x_3127_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f___boxed(lean_object* v_declName_3128_, lean_object* v_a_3129_, lean_object* v_a_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_){
_start:
{
lean_object* v_res_3134_; 
v_res_3134_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f(v_declName_3128_, v_a_3129_, v_a_3130_, v_a_3131_, v_a_3132_);
lean_dec(v_a_3132_);
lean_dec_ref(v_a_3131_);
lean_dec(v_a_3130_);
lean_dec_ref(v_a_3129_);
return v_res_3134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3137_; lean_object* v___x_3138_; 
v___x_3137_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_));
v___x_3138_ = l_Lean_Meta_registerGetUnfoldEqnFn(v___x_3137_);
return v___x_3138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2____boxed(lean_object* v_a_3139_){
_start:
{
lean_object* v_res_3140_; 
v_res_3140_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_();
return v_res_3140_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin);
lean_object* runtime_initialize_Init_Internal_Order_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default = _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default();
lean_mark_persistent(l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default);
l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo = _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo();
lean_mark_persistent(l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo);
res = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_2576816323____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_PartialFixpoint_eqnInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_PartialFixpoint_eqnInfoExt);
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin);
lean_object* initialize_Init_Internal_Order_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(builtin);
}
#ifdef __cplusplus
}
#endif
