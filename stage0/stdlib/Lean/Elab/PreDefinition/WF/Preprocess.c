// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.Preprocess
// Imports: public import Lean.Elab.Tactic.Simp
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Expr_updateAppN(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_resolveBinderNameHint(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_isProjectionFn(lean_object*, lean_object*);
lean_object* l_Lean_Meta_registerSimpAttr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpExtension_getTheorems___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Simp_neutralConfig;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getMotivePos(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinDSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty___redArg();
lean_object* l_Lean_Meta_Simp_Simprocs_add(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLet(lean_object*);
lean_object* l_Lean_Meta_mkLetFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_setNondep(lean_object*, uint8_t);
lean_object* l_Lean_LocalContext_addDecl(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isNondep(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_Simp_Result_addLambdas(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wf"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "preprocess"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(215, 131, 155, 94, 122, 149, 97, 118)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(33, 185, 233, 182, 178, 136, 28, 192)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "pre-process definitions defined by well-founded recursion with the `wf_preprocess` simp set"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(190, 109, 44, 197, 133, 51, 78, 82)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(68, 26, 247, 251, 85, 18, 167, 105)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_wf_preprocess;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "wf_preprocess"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(39, 210, 123, 148, 208, 214, 165, 77)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 164, .m_capacity = 164, .m_length = 163, .m_data = "simp lemma used in the preprocessing of well-founded recursive function definitions, in particular to add additional hypotheses to the context. Also see `wfParam`."};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WF"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "wfPreprocessSimpExtension"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 25, 43, 203, 194, 237, 195, 214)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(239, 145, 22, 80, 3, 32, 9, 26)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_wfPreprocessSimpExtension;
static const lean_string_object l_Lean_Elab_WF_condToDite___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Elab_WF_condToDite___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_WF_condToDite___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_WF_condToDite___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_condToDite___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Elab_WF_condToDite___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_WF_condToDite___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_WF_condToDite___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_WF_condToDite___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_WF_condToDite___redArg___closed__2_value;
static const lean_string_object l_Lean_Elab_WF_condToDite___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "cond_eq_dite"};
static const lean_object* l_Lean_Elab_WF_condToDite___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_WF_condToDite___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Elab_WF_condToDite___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_condToDite___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 112, 180, 239, 39, 24, 142, 217)}};
static const lean_object* l_Lean_Elab_WF_condToDite___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_WF_condToDite___redArg___closed__4_value;
static const lean_string_object l_Lean_Elab_WF_condToDite___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "cond_decide_eq_dite"};
static const lean_object* l_Lean_Elab_WF_condToDite___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_WF_condToDite___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_WF_condToDite___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_condToDite___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(44, 154, 95, 30, 140, 123, 69, 47)}};
static const lean_object* l_Lean_Elab_WF_condToDite___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_WF_condToDite___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_WF_condToDite___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_condToDite___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_condToDite___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_condToDite___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_condToDite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_condToDite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "condToDite"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 25, 43, 203, 194, 237, 195, 214)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value),LEAN_SCALAR_PTR_LITERAL(65, 62, 225, 140, 97, 179, 66, 17)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_condToDite___redArg___closed__1_value),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value;
static const lean_array_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_isWfParam_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "wfParam"};
static const lean_object* l_Lean_Elab_WF_isWfParam_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_WF_isWfParam_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Elab_WF_isWfParam_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_isWfParam_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(164, 61, 210, 169, 58, 176, 246, 156)}};
static const lean_object* l_Lean_Elab_WF_isWfParam_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_WF_isWfParam_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isWfParam_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isWfParam_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkWfParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkWfParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00Lean_Elab_WF_paramProj_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00Lean_Elab_WF_paramProj_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00Lean_Elab_WF_paramProj_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00Lean_Elab_WF_paramProj_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_WF_paramProj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_WF_paramProj___closed__0 = (const lean_object*)&l_Lean_Elab_WF_paramProj___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "paramProj"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 25, 43, 203, 194, 237, 195, 214)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10__value),LEAN_SCALAR_PTR_LITERAL(185, 166, 16, 253, 90, 4, 64, 220)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10__value;
static const lean_array_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__0;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.Match.MatcherApp.Basic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Meta.matchMatcherApp\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected constructor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__0;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__1;
static const lean_ctor_object l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__2 = (const lean_object*)&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__5___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_WF_paramMatcher_spec__3(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_WF_paramMatcher_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "paramMatcher"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 25, 43, 203, 194, 237, 195, 214)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10__value),LEAN_SCALAR_PTR_LITERAL(136, 249, 169, 242, 162, 242, 251, 234)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10____boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_anyLetValueIsWfParam(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_anyLetValueIsWfParam___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_numLetsWithValueNotIsWfParam(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_numLetsWithValueNotIsWfParam___boxed(lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__0;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "assertion violation: num > 0\n      "};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "_private.Lean.Elab.PreDefinition.WF.Preprocess.0.Lean.Elab.WF.processParamLet"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Elab.PreDefinition.WF.Preprocess"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramLet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramLet___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "paramLet"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 25, 43, 203, 194, 237, 195, 214)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10__value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10__value),LEAN_SCALAR_PTR_LITERAL(158, 69, 53, 139, 5, 90, 17, 138)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__18___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__20___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19_spec__20_spec__21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19_spec__20___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__9___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__11(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__2___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19_spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19_spec__20_spec__21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_WF_preprocess_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_WF_preprocess_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_preprocess_spec__6___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_preprocess_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_preprocess_spec__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_preprocess_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_WF_preprocess_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_WF_preprocess_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preprocess___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preprocess___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__11___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__11___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_preprocess_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_preprocess_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_WF_preprocess___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__0;
static lean_once_cell_t l_Lean_Elab_WF_preprocess___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__1;
static lean_once_cell_t l_Lean_Elab_WF_preprocess___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__2;
static lean_once_cell_t l_Lean_Elab_WF_preprocess___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__3;
static lean_once_cell_t l_Lean_Elab_WF_preprocess___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__4;
static lean_once_cell_t l_Lean_Elab_WF_preprocess___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__5;
static lean_once_cell_t l_Lean_Elab_WF_preprocess___lam__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__6;
static lean_once_cell_t l_Lean_Elab_WF_preprocess___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__7;
static const lean_string_object l_Lean_Elab_WF_preprocess___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__8 = (const lean_object*)&l_Lean_Elab_WF_preprocess___lam__2___closed__8_value;
static const lean_ctor_object l_Lean_Elab_WF_preprocess___lam__2___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_WF_preprocess___lam__2___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_preprocess___lam__2___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_WF_preprocess___lam__2___closed__8_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_Lean_Elab_WF_preprocess___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_WF_preprocess___lam__2___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(235, 76, 232, 241, 91, 21, 77, 227)}};
static const lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__9 = (const lean_object*)&l_Lean_Elab_WF_preprocess___lam__2___closed__9_value;
static const lean_string_object l_Lean_Elab_WF_preprocess___lam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__10 = (const lean_object*)&l_Lean_Elab_WF_preprocess___lam__2___closed__10_value;
static const lean_ctor_object l_Lean_Elab_WF_preprocess___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_preprocess___lam__2___closed__10_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__11 = (const lean_object*)&l_Lean_Elab_WF_preprocess___lam__2___closed__11_value;
static lean_once_cell_t l_Lean_Elab_WF_preprocess___lam__2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__12;
static const lean_string_object l_Lean_Elab_WF_preprocess___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Attach-introduction:"};
static const lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__13 = (const lean_object*)&l_Lean_Elab_WF_preprocess___lam__2___closed__13_value;
static lean_once_cell_t l_Lean_Elab_WF_preprocess___lam__2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__14;
static const lean_string_object l_Lean_Elab_WF_preprocess___lam__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\nto"};
static const lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__15 = (const lean_object*)&l_Lean_Elab_WF_preprocess___lam__2___closed__15_value;
static lean_once_cell_t l_Lean_Elab_WF_preprocess___lam__2___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__16;
static const lean_string_object l_Lean_Elab_WF_preprocess___lam__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "\ncleand up to "};
static const lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__17 = (const lean_object*)&l_Lean_Elab_WF_preprocess___lam__2___closed__17_value;
static lean_once_cell_t l_Lean_Elab_WF_preprocess___lam__2___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_preprocess___lam__2___closed__18;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preprocess___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preprocess___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_WF_preprocess___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_WF_preprocess___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_WF_preprocess___closed__0 = (const lean_object*)&l_Lean_Elab_WF_preprocess___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preprocess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_WF_preprocess_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_WF_preprocess_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_51_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4_));
v___x_52_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4_));
v___x_53_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4_));
v___x_54_ = l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4__spec__0(v___x_51_, v___x_52_, v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4____boxed(lean_object* v_a_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4_();
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_70_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2_));
v___x_71_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2_));
v___x_72_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2_));
v___x_73_ = l_Lean_Meta_registerSimpAttr(v___x_70_, v___x_71_, v___x_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2____boxed(lean_object* v_a_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2_();
return v_res_75_;
}
}
static lean_object* _init_l_Lean_Elab_WF_condToDite___redArg___closed__7(void){
_start:
{
lean_object* v___x_87_; lean_object* v_dummy_88_; 
v___x_87_ = lean_box(0);
v_dummy_88_ = l_Lean_Expr_sort___override(v___x_87_);
return v_dummy_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_condToDite___redArg(lean_object* v_e_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; 
v___x_95_ = ((lean_object*)(l_Lean_Elab_WF_condToDite___redArg___closed__1));
v___x_96_ = lean_unsigned_to_nat(4u);
v___x_97_ = l_Lean_Expr_isAppOfArity(v_e_89_, v___x_95_, v___x_96_);
if (v___x_97_ == 0)
{
lean_object* v___x_98_; lean_object* v___x_99_; 
lean_dec_ref(v_e_89_);
v___x_98_ = ((lean_object*)(l_Lean_Elab_WF_condToDite___redArg___closed__2));
v___x_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
return v___x_99_;
}
else
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v_env_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_100_ = l_Lean_instInhabitedExpr;
v___x_101_ = lean_st_ref_get(v_a_93_);
v_env_105_ = lean_ctor_get(v___x_101_, 0);
lean_inc_ref_n(v_env_105_, 2);
lean_dec(v___x_101_);
v___x_106_ = ((lean_object*)(l_Lean_Elab_WF_condToDite___redArg___closed__4));
v___x_107_ = l_Lean_Environment_contains(v_env_105_, v___x_106_, v___x_97_);
if (v___x_107_ == 0)
{
lean_dec_ref(v_env_105_);
lean_dec_ref(v_e_89_);
goto v___jp_102_;
}
else
{
lean_object* v___x_108_; uint8_t v___x_109_; lean_object* v___y_111_; 
v___x_108_ = ((lean_object*)(l_Lean_Elab_WF_condToDite___redArg___closed__6));
v___x_109_ = l_Lean_Environment_contains(v_env_105_, v___x_108_, v___x_107_);
if (v___x_109_ == 0)
{
lean_dec_ref(v_e_89_);
goto v___jp_102_;
}
else
{
lean_object* v___x_152_; uint8_t v_transparency_153_; lean_object* v_nargs_154_; lean_object* v_dummy_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; uint8_t v___x_163_; 
v___x_152_ = l_Lean_Meta_Context_config(v_a_90_);
v_transparency_153_ = lean_ctor_get_uint8(v___x_152_, 9);
lean_dec_ref(v___x_152_);
v_nargs_154_ = l_Lean_Expr_getAppNumArgs(v_e_89_);
v_dummy_155_ = lean_obj_once(&l_Lean_Elab_WF_condToDite___redArg___closed__7, &l_Lean_Elab_WF_condToDite___redArg___closed__7_once, _init_l_Lean_Elab_WF_condToDite___redArg___closed__7);
lean_inc(v_nargs_154_);
v___x_156_ = lean_mk_array(v_nargs_154_, v_dummy_155_);
v___x_157_ = lean_unsigned_to_nat(1u);
v___x_158_ = lean_nat_sub(v_nargs_154_, v___x_157_);
lean_dec(v_nargs_154_);
v___x_159_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_89_, v___x_156_, v___x_158_);
v___x_160_ = lean_array_get_borrowed(v___x_100_, v___x_159_, v___x_157_);
v___x_161_ = l_Lean_Expr_consumeMData(v___x_160_);
v___x_162_ = 1;
v___x_163_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_153_, v___x_162_);
if (v___x_163_ == 0)
{
lean_object* v_keyedConfig_164_; uint8_t v_trackZetaDelta_165_; lean_object* v_zetaDeltaSet_166_; lean_object* v_lctx_167_; lean_object* v_localInstances_168_; lean_object* v_defEqCtx_x3f_169_; lean_object* v_synthPendingDepth_170_; lean_object* v_customCanUnfoldPredicate_x3f_171_; uint8_t v_univApprox_172_; uint8_t v_inTypeClassResolution_173_; uint8_t v_cacheInferType_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v_keyedConfig_164_ = lean_ctor_get(v_a_90_, 0);
v_trackZetaDelta_165_ = lean_ctor_get_uint8(v_a_90_, sizeof(void*)*7);
v_zetaDeltaSet_166_ = lean_ctor_get(v_a_90_, 1);
v_lctx_167_ = lean_ctor_get(v_a_90_, 2);
v_localInstances_168_ = lean_ctor_get(v_a_90_, 3);
v_defEqCtx_x3f_169_ = lean_ctor_get(v_a_90_, 4);
v_synthPendingDepth_170_ = lean_ctor_get(v_a_90_, 5);
v_customCanUnfoldPredicate_x3f_171_ = lean_ctor_get(v_a_90_, 6);
v_univApprox_172_ = lean_ctor_get_uint8(v_a_90_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_173_ = lean_ctor_get_uint8(v_a_90_, sizeof(void*)*7 + 2);
v_cacheInferType_174_ = lean_ctor_get_uint8(v_a_90_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_164_);
v___x_175_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_162_, v_keyedConfig_164_);
lean_inc(v_customCanUnfoldPredicate_x3f_171_);
lean_inc(v_synthPendingDepth_170_);
lean_inc(v_defEqCtx_x3f_169_);
lean_inc_ref(v_localInstances_168_);
lean_inc_ref(v_lctx_167_);
lean_inc(v_zetaDeltaSet_166_);
v___x_176_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_176_, 0, v___x_175_);
lean_ctor_set(v___x_176_, 1, v_zetaDeltaSet_166_);
lean_ctor_set(v___x_176_, 2, v_lctx_167_);
lean_ctor_set(v___x_176_, 3, v_localInstances_168_);
lean_ctor_set(v___x_176_, 4, v_defEqCtx_x3f_169_);
lean_ctor_set(v___x_176_, 5, v_synthPendingDepth_170_);
lean_ctor_set(v___x_176_, 6, v_customCanUnfoldPredicate_x3f_171_);
lean_ctor_set_uint8(v___x_176_, sizeof(void*)*7, v_trackZetaDelta_165_);
lean_ctor_set_uint8(v___x_176_, sizeof(void*)*7 + 1, v_univApprox_172_);
lean_ctor_set_uint8(v___x_176_, sizeof(void*)*7 + 2, v_inTypeClassResolution_173_);
lean_ctor_set_uint8(v___x_176_, sizeof(void*)*7 + 3, v_cacheInferType_174_);
v___x_177_ = l_Lean_Meta_getBoolDecision_x3f(v___x_161_, v___x_176_, v_a_91_, v_a_92_, v_a_93_);
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v_a_178_; 
v_a_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_a_178_);
lean_dec_ref_known(v___x_177_, 1);
if (lean_obj_tag(v_a_178_) == 0)
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
lean_inc(v___x_160_);
v___x_179_ = lean_unsigned_to_nat(2u);
v___x_180_ = lean_array_get(v___x_100_, v___x_159_, v___x_179_);
v___x_181_ = lean_unsigned_to_nat(3u);
v___x_182_ = lean_array_get(v___x_100_, v___x_159_, v___x_181_);
lean_dec_ref(v___x_159_);
v___x_183_ = lean_mk_empty_array_with_capacity(v___x_181_);
v___x_184_ = lean_array_push(v___x_183_, v___x_160_);
v___x_185_ = lean_array_push(v___x_184_, v___x_180_);
v___x_186_ = lean_array_push(v___x_185_, v___x_182_);
v___x_187_ = l_Lean_Meta_mkAppM(v___x_106_, v___x_186_, v___x_176_, v_a_91_, v_a_92_, v_a_93_);
lean_dec_ref_known(v___x_176_, 7);
v___y_111_ = v___x_187_;
goto v___jp_110_;
}
else
{
lean_object* v_val_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_215_; 
v_val_188_ = lean_ctor_get(v_a_178_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v_a_178_);
if (v_isSharedCheck_215_ == 0)
{
v___x_190_ = v_a_178_;
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_val_188_);
lean_dec(v_a_178_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v_fst_192_; lean_object* v_snd_193_; lean_object* v___x_195_; 
v_fst_192_ = lean_ctor_get(v_val_188_, 0);
lean_inc(v_fst_192_);
v_snd_193_ = lean_ctor_get(v_val_188_, 1);
lean_inc(v_snd_193_);
lean_dec(v_val_188_);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v_fst_192_);
v___x_195_ = v___x_190_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_fst_192_);
v___x_195_ = v_reuseFailAlloc_214_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_196_, 0, v_snd_193_);
v___x_197_ = lean_unsigned_to_nat(0u);
v___x_198_ = lean_array_get_borrowed(v___x_100_, v___x_159_, v___x_197_);
lean_inc(v___x_198_);
v___x_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
v___x_200_ = lean_unsigned_to_nat(2u);
v___x_201_ = lean_array_get_borrowed(v___x_100_, v___x_159_, v___x_200_);
lean_inc(v___x_201_);
v___x_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
v___x_203_ = lean_unsigned_to_nat(3u);
v___x_204_ = lean_array_get(v___x_100_, v___x_159_, v___x_203_);
lean_dec_ref(v___x_159_);
v___x_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
v___x_206_ = lean_unsigned_to_nat(5u);
v___x_207_ = lean_mk_empty_array_with_capacity(v___x_206_);
v___x_208_ = lean_array_push(v___x_207_, v___x_195_);
v___x_209_ = lean_array_push(v___x_208_, v___x_196_);
v___x_210_ = lean_array_push(v___x_209_, v___x_199_);
v___x_211_ = lean_array_push(v___x_210_, v___x_202_);
v___x_212_ = lean_array_push(v___x_211_, v___x_205_);
v___x_213_ = l_Lean_Meta_mkAppOptM(v___x_108_, v___x_212_, v___x_176_, v_a_91_, v_a_92_, v_a_93_);
lean_dec_ref_known(v___x_176_, 7);
v___y_111_ = v___x_213_;
goto v___jp_110_;
}
}
}
}
else
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_223_; 
lean_dec_ref_known(v___x_176_, 7);
lean_dec_ref(v___x_159_);
v_a_216_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_223_ == 0)
{
v___x_218_ = v___x_177_;
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_177_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_221_; 
if (v_isShared_219_ == 0)
{
v___x_221_ = v___x_218_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_a_216_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
else
{
lean_object* v___x_224_; 
v___x_224_ = l_Lean_Meta_getBoolDecision_x3f(v___x_161_, v_a_90_, v_a_91_, v_a_92_, v_a_93_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v___x_224_, 1);
if (lean_obj_tag(v_a_225_) == 0)
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
lean_inc(v___x_160_);
v___x_226_ = lean_unsigned_to_nat(2u);
v___x_227_ = lean_array_get(v___x_100_, v___x_159_, v___x_226_);
v___x_228_ = lean_unsigned_to_nat(3u);
v___x_229_ = lean_array_get(v___x_100_, v___x_159_, v___x_228_);
lean_dec_ref(v___x_159_);
v___x_230_ = lean_mk_empty_array_with_capacity(v___x_228_);
v___x_231_ = lean_array_push(v___x_230_, v___x_160_);
v___x_232_ = lean_array_push(v___x_231_, v___x_227_);
v___x_233_ = lean_array_push(v___x_232_, v___x_229_);
v___x_234_ = l_Lean_Meta_mkAppM(v___x_106_, v___x_233_, v_a_90_, v_a_91_, v_a_92_, v_a_93_);
v___y_111_ = v___x_234_;
goto v___jp_110_;
}
else
{
lean_object* v_val_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_262_; 
v_val_235_ = lean_ctor_get(v_a_225_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v_a_225_);
if (v_isSharedCheck_262_ == 0)
{
v___x_237_ = v_a_225_;
v_isShared_238_ = v_isSharedCheck_262_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_val_235_);
lean_dec(v_a_225_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_262_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v_fst_239_; lean_object* v_snd_240_; lean_object* v___x_242_; 
v_fst_239_ = lean_ctor_get(v_val_235_, 0);
lean_inc(v_fst_239_);
v_snd_240_ = lean_ctor_get(v_val_235_, 1);
lean_inc(v_snd_240_);
lean_dec(v_val_235_);
if (v_isShared_238_ == 0)
{
lean_ctor_set(v___x_237_, 0, v_fst_239_);
v___x_242_ = v___x_237_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_fst_239_);
v___x_242_ = v_reuseFailAlloc_261_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_243_, 0, v_snd_240_);
v___x_244_ = lean_unsigned_to_nat(0u);
v___x_245_ = lean_array_get_borrowed(v___x_100_, v___x_159_, v___x_244_);
lean_inc(v___x_245_);
v___x_246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
v___x_247_ = lean_unsigned_to_nat(2u);
v___x_248_ = lean_array_get_borrowed(v___x_100_, v___x_159_, v___x_247_);
lean_inc(v___x_248_);
v___x_249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
v___x_250_ = lean_unsigned_to_nat(3u);
v___x_251_ = lean_array_get(v___x_100_, v___x_159_, v___x_250_);
lean_dec_ref(v___x_159_);
v___x_252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
v___x_253_ = lean_unsigned_to_nat(5u);
v___x_254_ = lean_mk_empty_array_with_capacity(v___x_253_);
v___x_255_ = lean_array_push(v___x_254_, v___x_242_);
v___x_256_ = lean_array_push(v___x_255_, v___x_243_);
v___x_257_ = lean_array_push(v___x_256_, v___x_246_);
v___x_258_ = lean_array_push(v___x_257_, v___x_249_);
v___x_259_ = lean_array_push(v___x_258_, v___x_252_);
v___x_260_ = l_Lean_Meta_mkAppOptM(v___x_108_, v___x_259_, v_a_90_, v_a_91_, v_a_92_, v_a_93_);
v___y_111_ = v___x_260_;
goto v___jp_110_;
}
}
}
}
else
{
lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_270_; 
lean_dec_ref(v___x_159_);
v_a_263_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_270_ == 0)
{
v___x_265_ = v___x_224_;
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_dec(v___x_224_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_a_263_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
}
}
v___jp_110_:
{
if (lean_obj_tag(v___y_111_) == 0)
{
lean_object* v_a_112_; lean_object* v___x_113_; 
v_a_112_ = lean_ctor_get(v___y_111_, 0);
lean_inc_n(v_a_112_, 2);
lean_dec_ref_known(v___y_111_, 1);
lean_inc(v_a_93_);
lean_inc_ref(v_a_92_);
lean_inc(v_a_91_);
lean_inc_ref(v_a_90_);
v___x_113_ = lean_infer_type(v_a_112_, v_a_90_, v_a_91_, v_a_92_, v_a_93_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_a_114_);
lean_dec_ref_known(v___x_113_, 1);
v___x_115_ = l_Lean_Expr_appArg_x21(v_a_114_);
lean_dec(v_a_114_);
v___x_116_ = l_Lean_Expr_resolveBinderNameHint(v___x_115_, v_a_92_, v_a_93_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_127_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_127_ == 0)
{
v___x_119_ = v___x_116_;
v_isShared_120_ = v_isSharedCheck_127_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_116_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_127_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_121_, 0, v_a_112_);
v___x_122_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_122_, 0, v_a_117_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
lean_ctor_set_uint8(v___x_122_, sizeof(void*)*2, v___x_109_);
v___x_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 0, v___x_123_);
v___x_125_ = v___x_119_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_123_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
else
{
lean_object* v_a_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_135_; 
lean_dec(v_a_112_);
v_a_128_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_135_ == 0)
{
v___x_130_ = v___x_116_;
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_a_128_);
lean_dec(v___x_116_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_133_; 
if (v_isShared_131_ == 0)
{
v___x_133_ = v___x_130_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_128_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
}
else
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
lean_dec(v_a_112_);
v_a_136_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v___x_113_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_113_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
else
{
lean_object* v_a_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_151_; 
v_a_144_ = lean_ctor_get(v___y_111_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___y_111_);
if (v_isSharedCheck_151_ == 0)
{
v___x_146_ = v___y_111_;
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_a_144_);
lean_dec(v___y_111_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_149_; 
if (v_isShared_147_ == 0)
{
v___x_149_ = v___x_146_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_a_144_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
}
}
v___jp_102_:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = ((lean_object*)(l_Lean_Elab_WF_condToDite___redArg___closed__2));
v___x_104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
return v___x_104_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_condToDite___redArg___boxed(lean_object* v_e_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lean_Elab_WF_condToDite___redArg(v_e_271_, v_a_272_, v_a_273_, v_a_274_, v_a_275_);
lean_dec(v_a_275_);
lean_dec_ref(v_a_274_);
lean_dec(v_a_273_);
lean_dec_ref(v_a_272_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_condToDite(lean_object* v_e_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l_Lean_Elab_WF_condToDite___redArg(v_e_278_, v_a_282_, v_a_283_, v_a_284_, v_a_285_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_condToDite___boxed(lean_object* v_e_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_Elab_WF_condToDite(v_e_288_, v_a_289_, v_a_290_, v_a_291_, v_a_292_, v_a_293_, v_a_294_, v_a_295_);
lean_dec(v_a_295_);
lean_dec_ref(v_a_294_);
lean_dec(v_a_293_);
lean_dec_ref(v_a_292_);
lean_dec(v_a_291_);
lean_dec_ref(v_a_290_);
lean_dec(v_a_289_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13_(){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_317_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13_));
v___x_318_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13_));
v___x_319_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_condToDite___boxed), 9, 0);
v___x_320_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v___x_317_, v___x_318_, v___x_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13____boxed(lean_object* v_a_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13_();
return v_res_322_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__0(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_323_ = lean_box(0);
v___x_324_ = lean_unsigned_to_nat(16u);
v___x_325_ = lean_mk_array(v___x_324_, v___x_323_);
return v___x_325_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__1(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_326_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__0);
v___x_327_ = lean_unsigned_to_nat(0u);
v___x_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
lean_ctor_set(v___x_328_, 1, v___x_326_);
return v___x_328_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2(void){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_329_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__3(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2);
v___x_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__4(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; uint8_t v___x_334_; lean_object* v___x_335_; 
v___x_332_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__3);
v___x_333_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__1);
v___x_334_ = 1;
v___x_335_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_335_, 0, v___x_333_);
lean_ctor_set(v___x_335_, 1, v___x_332_);
lean_ctor_set_uint8(v___x_335_, sizeof(void*)*2, v___x_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg(lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_340_ = l_Lean_Elab_WF_wfPreprocessSimpExtension;
v___x_341_ = l_Lean_Meta_SimpExtension_getTheorems___redArg(v___x_340_, v_a_338_);
if (lean_obj_tag(v___x_341_) == 0)
{
lean_object* v_a_342_; lean_object* v___x_343_; lean_object* v_maxSteps_344_; lean_object* v_maxDischargeDepth_345_; uint8_t v_contextual_346_; uint8_t v_memoize_347_; uint8_t v_singlePass_348_; uint8_t v_zeta_349_; uint8_t v_beta_350_; uint8_t v_eta_351_; uint8_t v_etaStruct_352_; uint8_t v_iota_353_; uint8_t v_proj_354_; uint8_t v_decide_355_; uint8_t v_arith_356_; uint8_t v_autoUnfold_357_; uint8_t v_failIfUnchanged_358_; uint8_t v_ground_359_; uint8_t v_unfoldPartialApp_360_; uint8_t v_zetaDelta_361_; uint8_t v_index_362_; uint8_t v_implicitDefEqProofs_363_; uint8_t v_zetaUnused_364_; uint8_t v_catchRuntime_365_; uint8_t v_zetaHave_366_; uint8_t v_letToHave_367_; uint8_t v_bitVecOfNat_368_; uint8_t v_warnExponents_369_; uint8_t v_suggestions_370_; lean_object* v_maxSuggestions_371_; uint8_t v_locals_372_; uint8_t v_instances_373_; uint8_t v___x_374_; uint8_t v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_a_342_ = lean_ctor_get(v___x_341_, 0);
lean_inc(v_a_342_);
lean_dec_ref_known(v___x_341_, 1);
v___x_343_ = l_Lean_Meta_Simp_neutralConfig;
v_maxSteps_344_ = lean_ctor_get(v___x_343_, 0);
v_maxDischargeDepth_345_ = lean_ctor_get(v___x_343_, 1);
v_contextual_346_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3);
v_memoize_347_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 1);
v_singlePass_348_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 2);
v_zeta_349_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 3);
v_beta_350_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 4);
v_eta_351_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 5);
v_etaStruct_352_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 6);
v_iota_353_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 7);
v_proj_354_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 8);
v_decide_355_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 9);
v_arith_356_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 10);
v_autoUnfold_357_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 11);
v_failIfUnchanged_358_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 13);
v_ground_359_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 14);
v_unfoldPartialApp_360_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 15);
v_zetaDelta_361_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 16);
v_index_362_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 17);
v_implicitDefEqProofs_363_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 18);
v_zetaUnused_364_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 19);
v_catchRuntime_365_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 20);
v_zetaHave_366_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 21);
v_letToHave_367_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 22);
v_bitVecOfNat_368_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 24);
v_warnExponents_369_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 25);
v_suggestions_370_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 26);
v_maxSuggestions_371_ = lean_ctor_get(v___x_343_, 2);
v_locals_372_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 27);
v_instances_373_ = lean_ctor_get_uint8(v___x_343_, sizeof(void*)*3 + 28);
v___x_374_ = 1;
v___x_375_ = 0;
lean_inc(v_maxSuggestions_371_);
lean_inc(v_maxDischargeDepth_345_);
lean_inc(v_maxSteps_344_);
v___x_376_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_376_, 0, v_maxSteps_344_);
lean_ctor_set(v___x_376_, 1, v_maxDischargeDepth_345_);
lean_ctor_set(v___x_376_, 2, v_maxSuggestions_371_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3, v_contextual_346_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 1, v_memoize_347_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 2, v_singlePass_348_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 3, v_zeta_349_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 4, v_beta_350_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 5, v_eta_351_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 6, v_etaStruct_352_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 7, v_iota_353_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 8, v_proj_354_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 9, v_decide_355_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 10, v_arith_356_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 11, v_autoUnfold_357_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 12, v___x_374_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 13, v_failIfUnchanged_358_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 14, v_ground_359_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 15, v_unfoldPartialApp_360_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 16, v_zetaDelta_361_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 17, v_index_362_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 18, v_implicitDefEqProofs_363_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 19, v_zetaUnused_364_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 20, v_catchRuntime_365_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 21, v_zetaHave_366_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 22, v_letToHave_367_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 23, v___x_375_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 24, v_bitVecOfNat_368_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 25, v_warnExponents_369_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 26, v_suggestions_370_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 27, v_locals_372_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*3 + 28, v_instances_373_);
v___x_377_ = lean_unsigned_to_nat(1u);
v___x_378_ = lean_mk_empty_array_with_capacity(v___x_377_);
v___x_379_ = lean_array_push(v___x_378_, v_a_342_);
v___x_380_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__4);
v___x_381_ = l_Lean_Options_empty;
v___x_382_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_376_, v___x_379_, v___x_380_, v___x_381_, v_a_336_, v_a_337_, v_a_338_);
return v___x_382_;
}
else
{
lean_object* v_a_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_390_; 
v_a_383_ = lean_ctor_get(v___x_341_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_390_ == 0)
{
v___x_385_ = v___x_341_;
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_a_383_);
lean_dec(v___x_341_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_388_; 
if (v_isShared_386_ == 0)
{
v___x_388_ = v___x_385_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_a_383_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___boxed(lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg(v_a_391_, v_a_392_, v_a_393_);
lean_dec(v_a_393_);
lean_dec_ref(v_a_392_);
lean_dec_ref(v_a_391_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext(lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg(v_a_396_, v_a_398_, v_a_399_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___boxed(lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext(v_a_402_, v_a_403_, v_a_404_, v_a_405_);
lean_dec(v_a_405_);
lean_dec_ref(v_a_404_);
lean_dec(v_a_403_);
lean_dec_ref(v_a_402_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isWfParam_x3f(lean_object* v_e_411_){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; uint8_t v___x_414_; 
v___x_412_ = ((lean_object*)(l_Lean_Elab_WF_isWfParam_x3f___closed__1));
v___x_413_ = lean_unsigned_to_nat(2u);
v___x_414_ = l_Lean_Expr_isAppOfArity(v_e_411_, v___x_412_, v___x_413_);
if (v___x_414_ == 0)
{
lean_object* v___x_415_; 
v___x_415_ = lean_box(0);
return v___x_415_;
}
else
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = l_Lean_Expr_appArg_x21(v_e_411_);
v___x_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
return v___x_417_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isWfParam_x3f___boxed(lean_object* v_e_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Lean_Elab_WF_isWfParam_x3f(v_e_418_);
lean_dec_ref(v_e_418_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkWfParam(lean_object* v_e_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_426_ = ((lean_object*)(l_Lean_Elab_WF_isWfParam_x3f___closed__1));
v___x_427_ = lean_unsigned_to_nat(1u);
v___x_428_ = lean_mk_empty_array_with_capacity(v___x_427_);
v___x_429_ = lean_array_push(v___x_428_, v_e_420_);
v___x_430_ = l_Lean_Meta_mkAppM(v___x_426_, v___x_429_, v_a_421_, v_a_422_, v_a_423_, v_a_424_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkWfParam___boxed(lean_object* v_e_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lean_Elab_WF_mkWfParam(v_e_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_);
lean_dec(v_a_435_);
lean_dec_ref(v_a_434_);
lean_dec(v_a_433_);
lean_dec_ref(v_a_432_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00Lean_Elab_WF_paramProj_spec__0___redArg(lean_object* v_declName_438_, lean_object* v___y_439_){
_start:
{
lean_object* v___x_441_; lean_object* v_env_442_; uint8_t v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_441_ = lean_st_ref_get(v___y_439_);
v_env_442_ = lean_ctor_get(v___x_441_, 0);
lean_inc_ref(v_env_442_);
lean_dec(v___x_441_);
v___x_443_ = l_Lean_Environment_isProjectionFn(v_env_442_, v_declName_438_);
v___x_444_ = lean_box(v___x_443_);
v___x_445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_445_, 0, v___x_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00Lean_Elab_WF_paramProj_spec__0___redArg___boxed(lean_object* v_declName_446_, lean_object* v___y_447_, lean_object* v___y_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Lean_isProjectionFn___at___00Lean_Elab_WF_paramProj_spec__0___redArg(v_declName_446_, v___y_447_);
lean_dec(v___y_447_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00Lean_Elab_WF_paramProj_spec__0(lean_object* v_declName_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l_Lean_isProjectionFn___at___00Lean_Elab_WF_paramProj_spec__0___redArg(v_declName_450_, v___y_457_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_isProjectionFn___at___00Lean_Elab_WF_paramProj_spec__0___boxed(lean_object* v_declName_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Lean_isProjectionFn___at___00Lean_Elab_WF_paramProj_spec__0(v_declName_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramProj(lean_object* v_e_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_){
_start:
{
uint8_t v___x_481_; 
v___x_481_ = l_Lean_Expr_isApp(v_e_472_);
if (v___x_481_ == 0)
{
lean_object* v___x_482_; lean_object* v___x_483_; 
lean_dec_ref(v_e_472_);
v___x_482_ = ((lean_object*)(l_Lean_Elab_WF_paramProj___closed__0));
v___x_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
return v___x_483_;
}
else
{
lean_object* v_fn_484_; lean_object* v_arg_485_; lean_object* v___x_486_; 
v_fn_484_ = lean_ctor_get(v_e_472_, 0);
lean_inc_ref(v_fn_484_);
v_arg_485_ = lean_ctor_get(v_e_472_, 1);
v___x_486_ = l_Lean_Elab_WF_isWfParam_x3f(v_arg_485_);
if (lean_obj_tag(v___x_486_) == 1)
{
lean_object* v_val_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_530_; 
v_val_487_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_530_ == 0)
{
v___x_489_ = v___x_486_;
v_isShared_490_ = v_isSharedCheck_530_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_val_487_);
lean_dec(v___x_486_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_530_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v_f_491_; uint8_t v___x_492_; 
v_f_491_ = l_Lean_Expr_getAppFn(v_e_472_);
lean_dec_ref(v_e_472_);
v___x_492_ = l_Lean_Expr_isConst(v_f_491_);
if (v___x_492_ == 0)
{
lean_object* v___x_493_; lean_object* v___x_495_; 
lean_dec_ref(v_f_491_);
lean_dec(v_val_487_);
lean_dec_ref(v_fn_484_);
v___x_493_ = ((lean_object*)(l_Lean_Elab_WF_paramProj___closed__0));
if (v_isShared_490_ == 0)
{
lean_ctor_set_tag(v___x_489_, 0);
lean_ctor_set(v___x_489_, 0, v___x_493_);
v___x_495_ = v___x_489_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_493_);
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
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_529_; 
v___x_497_ = l_Lean_Expr_constName_x21(v_f_491_);
lean_dec_ref(v_f_491_);
v___x_498_ = l_Lean_isProjectionFn___at___00Lean_Elab_WF_paramProj_spec__0___redArg(v___x_497_, v_a_479_);
v_a_499_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_529_ == 0)
{
v___x_501_ = v___x_498_;
v_isShared_502_ = v_isSharedCheck_529_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v___x_498_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_529_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
uint8_t v___x_503_; 
v___x_503_ = lean_unbox(v_a_499_);
lean_dec(v_a_499_);
if (v___x_503_ == 0)
{
lean_object* v___x_504_; lean_object* v___x_506_; 
lean_del_object(v___x_489_);
lean_dec(v_val_487_);
lean_dec_ref(v_fn_484_);
v___x_504_ = ((lean_object*)(l_Lean_Elab_WF_paramProj___closed__0));
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 0, v___x_504_);
v___x_506_ = v___x_501_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_504_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
else
{
lean_object* v___x_508_; lean_object* v___x_509_; 
lean_del_object(v___x_501_);
v___x_508_ = l_Lean_Expr_app___override(v_fn_484_, v_val_487_);
v___x_509_ = l_Lean_Elab_WF_mkWfParam(v___x_508_, v_a_476_, v_a_477_, v_a_478_, v_a_479_);
if (lean_obj_tag(v___x_509_) == 0)
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_520_; 
v_a_510_ = lean_ctor_get(v___x_509_, 0);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_520_ == 0)
{
v___x_512_ = v___x_509_;
v_isShared_513_ = v_isSharedCheck_520_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___x_509_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_520_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_515_; 
if (v_isShared_490_ == 0)
{
lean_ctor_set_tag(v___x_489_, 0);
lean_ctor_set(v___x_489_, 0, v_a_510_);
v___x_515_ = v___x_489_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_a_510_);
v___x_515_ = v_reuseFailAlloc_519_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
lean_object* v___x_517_; 
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 0, v___x_515_);
v___x_517_ = v___x_512_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v___x_515_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
lean_del_object(v___x_489_);
v_a_521_ = lean_ctor_get(v___x_509_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_509_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_509_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
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
lean_object* v___x_531_; lean_object* v___x_532_; 
lean_dec(v___x_486_);
lean_dec_ref(v_fn_484_);
lean_dec_ref(v_e_472_);
v___x_531_ = ((lean_object*)(l_Lean_Elab_WF_paramProj___closed__0));
v___x_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
return v___x_532_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramProj___boxed(lean_object* v_e_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Lean_Elab_WF_paramProj(v_e_533_, v_a_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_);
lean_dec(v_a_540_);
lean_dec_ref(v_a_539_);
lean_dec(v_a_538_);
lean_dec_ref(v_a_537_);
lean_dec(v_a_536_);
lean_dec_ref(v_a_535_);
lean_dec(v_a_534_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10_(){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_554_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10_));
v___x_555_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10_));
v___x_556_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_paramProj___boxed), 9, 0);
v___x_557_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_554_, v___x_555_, v___x_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10____boxed(lean_object* v_a_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10_();
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___redArg___lam__0(lean_object* v_k_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v_b_564_, lean_object* v_c_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
lean_object* v___x_571_; 
lean_inc(v___y_569_);
lean_inc_ref(v___y_568_);
lean_inc(v___y_567_);
lean_inc_ref(v___y_566_);
lean_inc(v___y_563_);
lean_inc_ref(v___y_562_);
lean_inc(v___y_561_);
v___x_571_ = lean_apply_10(v_k_560_, v_b_564_, v_c_565_, v___y_561_, v___y_562_, v___y_563_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, lean_box(0));
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___redArg___lam__0___boxed(lean_object* v_k_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v_b_576_, lean_object* v_c_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___redArg___lam__0(v_k_572_, v___y_573_, v___y_574_, v___y_575_, v_b_576_, v_c_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
lean_dec(v___y_573_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___redArg(lean_object* v_e_584_, lean_object* v_k_585_, uint8_t v_cleanupAnnotations_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v___f_595_; uint8_t v___x_596_; uint8_t v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
lean_inc(v___y_589_);
lean_inc_ref(v___y_588_);
lean_inc(v___y_587_);
v___f_595_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___redArg___lam__0___boxed), 11, 4);
lean_closure_set(v___f_595_, 0, v_k_585_);
lean_closure_set(v___f_595_, 1, v___y_587_);
lean_closure_set(v___f_595_, 2, v___y_588_);
lean_closure_set(v___f_595_, 3, v___y_589_);
v___x_596_ = 1;
v___x_597_ = 0;
v___x_598_ = lean_box(0);
v___x_599_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_584_, v___x_596_, v___x_597_, v___x_596_, v___x_597_, v___x_598_, v___f_595_, v_cleanupAnnotations_586_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
if (lean_obj_tag(v___x_599_) == 0)
{
return v___x_599_;
}
else
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_607_; 
v_a_600_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_607_ == 0)
{
v___x_602_ = v___x_599_;
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_599_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
if (v_isShared_603_ == 0)
{
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_600_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___redArg___boxed(lean_object* v_e_608_, lean_object* v_k_609_, lean_object* v_cleanupAnnotations_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_619_; lean_object* v_res_620_; 
v_cleanupAnnotations_boxed_619_ = lean_unbox(v_cleanupAnnotations_610_);
v_res_620_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___redArg(v_e_608_, v_k_609_, v_cleanupAnnotations_boxed_619_, v___y_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_, v___y_616_, v___y_617_);
lean_dec(v___y_617_);
lean_dec_ref(v___y_616_);
lean_dec(v___y_615_);
lean_dec_ref(v___y_614_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v___y_611_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1(lean_object* v_00_u03b1_621_, lean_object* v_e_622_, lean_object* v_k_623_, uint8_t v_cleanupAnnotations_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___redArg(v_e_622_, v_k_623_, v_cleanupAnnotations_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___boxed(lean_object* v_00_u03b1_634_, lean_object* v_e_635_, lean_object* v_k_636_, lean_object* v_cleanupAnnotations_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_646_; lean_object* v_res_647_; 
v_cleanupAnnotations_boxed_646_ = lean_unbox(v_cleanupAnnotations_637_);
v_res_647_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1(v_00_u03b1_634_, v_e_635_, v_k_636_, v_cleanupAnnotations_boxed_646_, v___y_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_);
lean_dec(v___y_644_);
lean_dec_ref(v___y_643_);
lean_dec(v___y_642_);
lean_dec_ref(v___y_641_);
lean_dec(v___y_640_);
lean_dec_ref(v___y_639_);
lean_dec(v___y_638_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__4(size_t v_sz_648_, size_t v_i_649_, lean_object* v_bs_650_){
_start:
{
uint8_t v___x_651_; 
v___x_651_ = lean_usize_dec_lt(v_i_649_, v_sz_648_);
if (v___x_651_ == 0)
{
return v_bs_650_;
}
else
{
lean_object* v_v_652_; lean_object* v___x_653_; lean_object* v_bs_x27_654_; lean_object* v___y_656_; lean_object* v___x_661_; 
v_v_652_ = lean_array_uget(v_bs_650_, v_i_649_);
v___x_653_ = lean_unsigned_to_nat(0u);
v_bs_x27_654_ = lean_array_uset(v_bs_650_, v_i_649_, v___x_653_);
v___x_661_ = l_Lean_Elab_WF_isWfParam_x3f(v_v_652_);
if (lean_obj_tag(v___x_661_) == 0)
{
v___y_656_ = v_v_652_;
goto v___jp_655_;
}
else
{
lean_object* v_val_662_; 
lean_dec(v_v_652_);
v_val_662_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_val_662_);
lean_dec_ref_known(v___x_661_, 1);
v___y_656_ = v_val_662_;
goto v___jp_655_;
}
v___jp_655_:
{
size_t v___x_657_; size_t v___x_658_; lean_object* v___x_659_; 
v___x_657_ = ((size_t)1ULL);
v___x_658_ = lean_usize_add(v_i_649_, v___x_657_);
v___x_659_ = lean_array_uset(v_bs_x27_654_, v_i_649_, v___y_656_);
v_i_649_ = v___x_658_;
v_bs_650_ = v___x_659_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__4___boxed(lean_object* v_sz_663_, lean_object* v_i_664_, lean_object* v_bs_665_){
_start:
{
size_t v_sz_boxed_666_; size_t v_i_boxed_667_; lean_object* v_res_668_; 
v_sz_boxed_666_ = lean_unbox_usize(v_sz_663_);
lean_dec(v_sz_663_);
v_i_boxed_667_ = lean_unbox_usize(v_i_664_);
lean_dec(v_i_664_);
v_res_668_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__4(v_sz_boxed_666_, v_i_boxed_667_, v_bs_665_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15_spec__16(lean_object* v_msgData_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_){
_start:
{
lean_object* v___x_675_; lean_object* v_env_676_; uint8_t v___x_677_; lean_object* v_env_678_; lean_object* v___x_679_; lean_object* v_toCold_680_; lean_object* v_mctx_681_; lean_object* v_lctx_682_; lean_object* v_options_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_675_ = lean_st_ref_get(v___y_673_);
v_env_676_ = lean_ctor_get(v___x_675_, 0);
lean_inc_ref(v_env_676_);
lean_dec(v___x_675_);
v___x_677_ = 0;
v_env_678_ = l_Lean_Environment_setRecordingDeps(v_env_676_, v___x_677_);
v___x_679_ = lean_st_ref_get(v___y_671_);
v_toCold_680_ = lean_ctor_get(v___y_672_, 0);
v_mctx_681_ = lean_ctor_get(v___x_679_, 0);
lean_inc_ref(v_mctx_681_);
lean_dec(v___x_679_);
v_lctx_682_ = lean_ctor_get(v___y_670_, 2);
v_options_683_ = lean_ctor_get(v_toCold_680_, 2);
lean_inc_ref(v_options_683_);
lean_inc_ref(v_lctx_682_);
v___x_684_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_684_, 0, v_env_678_);
lean_ctor_set(v___x_684_, 1, v_mctx_681_);
lean_ctor_set(v___x_684_, 2, v_lctx_682_);
lean_ctor_set(v___x_684_, 3, v_options_683_);
v___x_685_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
lean_ctor_set(v___x_685_, 1, v_msgData_669_);
v___x_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15_spec__16___boxed(lean_object* v_msgData_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15_spec__16(v_msgData_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
lean_dec(v___y_691_);
lean_dec_ref(v___y_690_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15___redArg(lean_object* v_msg_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
lean_object* v_ref_700_; lean_object* v___x_701_; lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_710_; 
v_ref_700_ = lean_ctor_get(v___y_697_, 2);
v___x_701_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15_spec__16(v_msg_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
v_a_702_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_710_ == 0)
{
v___x_704_ = v___x_701_;
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_701_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_706_; lean_object* v___x_708_; 
lean_inc(v_ref_700_);
v___x_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_706_, 0, v_ref_700_);
lean_ctor_set(v___x_706_, 1, v_a_702_);
if (v_isShared_705_ == 0)
{
lean_ctor_set_tag(v___x_704_, 1);
lean_ctor_set(v___x_704_, 0, v___x_706_);
v___x_708_ = v___x_704_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v___x_706_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15___redArg___boxed(lean_object* v_msg_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15___redArg(v_msg_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_);
lean_dec(v___y_715_);
lean_dec_ref(v___y_714_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13___redArg(lean_object* v_ref_718_, lean_object* v_msg_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v_toCold_728_; lean_object* v_currRecDepth_729_; lean_object* v_ref_730_; uint16_t v_optionFlags_731_; uint8_t v_suppressElabErrors_732_; uint8_t v_checkDeprecated_733_; uint8_t v_isRecordingDeps_734_; lean_object* v_ref_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v_toCold_728_ = lean_ctor_get(v___y_725_, 0);
v_currRecDepth_729_ = lean_ctor_get(v___y_725_, 1);
v_ref_730_ = lean_ctor_get(v___y_725_, 2);
v_optionFlags_731_ = lean_ctor_get_uint16(v___y_725_, sizeof(void*)*3);
v_suppressElabErrors_732_ = lean_ctor_get_uint8(v___y_725_, sizeof(void*)*3 + 2);
v_checkDeprecated_733_ = lean_ctor_get_uint8(v___y_725_, sizeof(void*)*3 + 3);
v_isRecordingDeps_734_ = lean_ctor_get_uint8(v___y_725_, sizeof(void*)*3 + 4);
v_ref_735_ = l_Lean_replaceRef(v_ref_718_, v_ref_730_);
lean_inc(v_currRecDepth_729_);
lean_inc_ref(v_toCold_728_);
v___x_736_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_736_, 0, v_toCold_728_);
lean_ctor_set(v___x_736_, 1, v_currRecDepth_729_);
lean_ctor_set(v___x_736_, 2, v_ref_735_);
lean_ctor_set_uint16(v___x_736_, sizeof(void*)*3, v_optionFlags_731_);
lean_ctor_set_uint8(v___x_736_, sizeof(void*)*3 + 2, v_suppressElabErrors_732_);
lean_ctor_set_uint8(v___x_736_, sizeof(void*)*3 + 3, v_checkDeprecated_733_);
lean_ctor_set_uint8(v___x_736_, sizeof(void*)*3 + 4, v_isRecordingDeps_734_);
v___x_737_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15___redArg(v_msg_719_, v___y_723_, v___y_724_, v___x_736_, v___y_726_);
lean_dec_ref_known(v___x_736_, 3);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13___redArg___boxed(lean_object* v_ref_738_, lean_object* v_msg_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13___redArg(v_ref_738_, v_msg_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
lean_dec(v___y_746_);
lean_dec_ref(v___y_745_);
lean_dec(v___y_744_);
lean_dec_ref(v___y_743_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec(v_ref_738_);
return v_res_748_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__0(void){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2);
v___x_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
return v___x_750_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__1(void){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_751_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__0);
v___x_752_ = lean_unsigned_to_nat(0u);
v___x_753_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_753_, 0, v___x_752_);
lean_ctor_set(v___x_753_, 1, v___x_752_);
lean_ctor_set(v___x_753_, 2, v___x_752_);
lean_ctor_set(v___x_753_, 3, v___x_752_);
lean_ctor_set(v___x_753_, 4, v___x_751_);
lean_ctor_set(v___x_753_, 5, v___x_751_);
lean_ctor_set(v___x_753_, 6, v___x_751_);
lean_ctor_set(v___x_753_, 7, v___x_751_);
lean_ctor_set(v___x_753_, 8, v___x_751_);
lean_ctor_set(v___x_753_, 9, v___x_751_);
lean_ctor_set(v___x_753_, 10, v___x_751_);
return v___x_753_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__2(void){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_754_ = lean_unsigned_to_nat(32u);
v___x_755_ = lean_mk_empty_array_with_capacity(v___x_754_);
v___x_756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_756_, 0, v___x_755_);
return v___x_756_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__3(void){
_start:
{
size_t v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_757_ = ((size_t)5ULL);
v___x_758_ = lean_unsigned_to_nat(0u);
v___x_759_ = lean_unsigned_to_nat(32u);
v___x_760_ = lean_mk_empty_array_with_capacity(v___x_759_);
v___x_761_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__2);
v___x_762_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_762_, 0, v___x_761_);
lean_ctor_set(v___x_762_, 1, v___x_760_);
lean_ctor_set(v___x_762_, 2, v___x_758_);
lean_ctor_set(v___x_762_, 3, v___x_758_);
lean_ctor_set_usize(v___x_762_, 4, v___x_757_);
return v___x_762_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__4(void){
_start:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_763_ = lean_box(1);
v___x_764_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__3);
v___x_765_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__0);
v___x_766_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_766_, 0, v___x_765_);
lean_ctor_set(v___x_766_, 1, v___x_764_);
lean_ctor_set(v___x_766_, 2, v___x_763_);
return v___x_766_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__6(void){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_768_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__5));
v___x_769_ = l_Lean_stringToMessageData(v___x_768_);
return v___x_769_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__8(void){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_771_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__7));
v___x_772_ = l_Lean_stringToMessageData(v___x_771_);
return v___x_772_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__10(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__9));
v___x_775_ = l_Lean_stringToMessageData(v___x_774_);
return v___x_775_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__12(void){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_777_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__11));
v___x_778_ = l_Lean_stringToMessageData(v___x_777_);
return v___x_778_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__14(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__13));
v___x_781_ = l_Lean_stringToMessageData(v___x_780_);
return v___x_781_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__16(void){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_783_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__15));
v___x_784_ = l_Lean_stringToMessageData(v___x_783_);
return v___x_784_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__18(void){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__17));
v___x_787_ = l_Lean_stringToMessageData(v___x_786_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg(lean_object* v_msg_788_, lean_object* v_declHint_789_, lean_object* v___y_790_){
_start:
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v_env_794_; uint8_t v___x_795_; 
v___x_792_ = lean_box(0);
v___x_793_ = lean_st_ref_get(v___y_790_);
v_env_794_ = lean_ctor_get(v___x_793_, 0);
lean_inc_ref(v_env_794_);
lean_dec(v___x_793_);
v___x_795_ = l_Lean_Name_isAnonymous(v_declHint_789_);
if (v___x_795_ == 0)
{
uint8_t v_isExporting_796_; 
v_isExporting_796_ = lean_ctor_get_uint8(v_env_794_, sizeof(void*)*13);
if (v_isExporting_796_ == 0)
{
lean_object* v___x_797_; 
lean_dec_ref(v_env_794_);
lean_dec(v_declHint_789_);
v___x_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_797_, 0, v_msg_788_);
return v___x_797_;
}
else
{
lean_object* v___x_798_; uint8_t v___x_799_; 
lean_inc_ref(v_env_794_);
v___x_798_ = l_Lean_Environment_setExporting(v_env_794_, v___x_795_);
lean_inc(v_declHint_789_);
lean_inc_ref(v___x_798_);
v___x_799_ = l_Lean_Environment_contains(v___x_798_, v_declHint_789_, v_isExporting_796_);
if (v___x_799_ == 0)
{
lean_object* v___x_800_; 
lean_dec_ref(v___x_798_);
lean_dec_ref(v_env_794_);
lean_dec(v_declHint_789_);
v___x_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_800_, 0, v_msg_788_);
return v___x_800_;
}
else
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v_c_806_; lean_object* v___x_807_; 
v___x_801_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__1);
v___x_802_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__4);
v___x_803_ = l_Lean_Options_empty;
lean_inc_ref(v___x_798_);
v___x_804_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_804_, 0, v___x_798_);
lean_ctor_set(v___x_804_, 1, v___x_801_);
lean_ctor_set(v___x_804_, 2, v___x_802_);
lean_ctor_set(v___x_804_, 3, v___x_803_);
lean_inc(v_declHint_789_);
v___x_805_ = l_Lean_MessageData_ofConstName(v_declHint_789_, v___x_795_);
v_c_806_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_806_, 0, v___x_804_);
lean_ctor_set(v_c_806_, 1, v___x_805_);
v___x_807_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_798_, v_declHint_789_);
lean_dec_ref(v___x_798_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
lean_dec_ref(v_env_794_);
lean_dec(v_declHint_789_);
v___x_808_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__6);
v___x_809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
lean_ctor_set(v___x_809_, 1, v_c_806_);
v___x_810_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__8);
v___x_811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_809_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
v___x_812_ = l_Lean_MessageData_note(v___x_811_);
v___x_813_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_813_, 0, v_msg_788_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
v___x_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
return v___x_814_;
}
else
{
lean_object* v_val_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_849_; 
v_val_815_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_849_ == 0)
{
v___x_817_ = v___x_807_;
v_isShared_818_ = v_isSharedCheck_849_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_val_815_);
lean_dec(v___x_807_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_849_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_819_; lean_object* v_moduleNames_820_; lean_object* v_mod_821_; uint8_t v___x_822_; 
v___x_819_ = l_Lean_Environment_header(v_env_794_);
lean_dec_ref(v_env_794_);
v_moduleNames_820_ = lean_ctor_get(v___x_819_, 4);
lean_inc_ref(v_moduleNames_820_);
lean_dec_ref(v___x_819_);
v_mod_821_ = lean_array_get(v___x_792_, v_moduleNames_820_, v_val_815_);
lean_dec(v_val_815_);
lean_dec_ref(v_moduleNames_820_);
v___x_822_ = l_Lean_isPrivateName(v_declHint_789_);
lean_dec(v_declHint_789_);
if (v___x_822_ == 0)
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_834_; 
v___x_823_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__10);
v___x_824_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_824_, 0, v___x_823_);
lean_ctor_set(v___x_824_, 1, v_c_806_);
v___x_825_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__12);
v___x_826_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_826_, 0, v___x_824_);
lean_ctor_set(v___x_826_, 1, v___x_825_);
v___x_827_ = l_Lean_MessageData_ofName(v_mod_821_);
v___x_828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_828_, 0, v___x_826_);
lean_ctor_set(v___x_828_, 1, v___x_827_);
v___x_829_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__14);
v___x_830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_830_, 0, v___x_828_);
lean_ctor_set(v___x_830_, 1, v___x_829_);
v___x_831_ = l_Lean_MessageData_note(v___x_830_);
v___x_832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_832_, 0, v_msg_788_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
if (v_isShared_818_ == 0)
{
lean_ctor_set_tag(v___x_817_, 0);
lean_ctor_set(v___x_817_, 0, v___x_832_);
v___x_834_ = v___x_817_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_832_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
else
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_847_; 
v___x_836_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__6);
v___x_837_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
lean_ctor_set(v___x_837_, 1, v_c_806_);
v___x_838_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__16);
v___x_839_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_839_, 0, v___x_837_);
lean_ctor_set(v___x_839_, 1, v___x_838_);
v___x_840_ = l_Lean_MessageData_ofName(v_mod_821_);
v___x_841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_841_, 0, v___x_839_);
lean_ctor_set(v___x_841_, 1, v___x_840_);
v___x_842_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___closed__18);
v___x_843_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_843_, 0, v___x_841_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
v___x_844_ = l_Lean_MessageData_note(v___x_843_);
v___x_845_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_845_, 0, v_msg_788_);
lean_ctor_set(v___x_845_, 1, v___x_844_);
if (v_isShared_818_ == 0)
{
lean_ctor_set_tag(v___x_817_, 0);
lean_ctor_set(v___x_817_, 0, v___x_845_);
v___x_847_ = v___x_817_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_845_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_850_; 
lean_dec_ref(v_env_794_);
lean_dec(v_declHint_789_);
v___x_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_850_, 0, v_msg_788_);
return v___x_850_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg___boxed(lean_object* v_msg_851_, lean_object* v_declHint_852_, lean_object* v___y_853_, lean_object* v___y_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg(v_msg_851_, v_declHint_852_, v___y_853_);
lean_dec(v___y_853_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12(lean_object* v_msg_856_, lean_object* v_declHint_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
lean_object* v___x_866_; lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_876_; 
v___x_866_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg(v_msg_856_, v_declHint_857_, v___y_864_);
v_a_867_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_876_ == 0)
{
v___x_869_ = v___x_866_;
v_isShared_870_ = v_isSharedCheck_876_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_866_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_876_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_874_; 
v___x_871_ = l_Lean_unknownIdentifierMessageTag;
v___x_872_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_872_, 0, v___x_871_);
lean_ctor_set(v___x_872_, 1, v_a_867_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 0, v___x_872_);
v___x_874_ = v___x_869_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_872_);
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12___boxed(lean_object* v_msg_877_, lean_object* v_declHint_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12(v_msg_877_, v_declHint_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec(v___y_879_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11___redArg(lean_object* v_ref_888_, lean_object* v_msg_889_, lean_object* v_declHint_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
lean_object* v___x_899_; lean_object* v_a_900_; lean_object* v___x_901_; 
v___x_899_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12(v_msg_889_, v_declHint_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_900_);
lean_dec_ref(v___x_899_);
v___x_901_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13___redArg(v_ref_888_, v_a_900_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11___redArg___boxed(lean_object* v_ref_902_, lean_object* v_msg_903_, lean_object* v_declHint_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11___redArg(v_ref_902_, v_msg_903_, v_declHint_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
lean_dec(v___y_909_);
lean_dec_ref(v___y_908_);
lean_dec(v___y_907_);
lean_dec_ref(v___y_906_);
lean_dec(v___y_905_);
lean_dec(v_ref_902_);
return v_res_913_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_915_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__0));
v___x_916_ = l_Lean_stringToMessageData(v___x_915_);
return v___x_916_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_918_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__2));
v___x_919_ = l_Lean_stringToMessageData(v___x_918_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg(lean_object* v_ref_920_, lean_object* v_constName_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
lean_object* v___x_930_; uint8_t v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_930_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__1);
v___x_931_ = 0;
lean_inc(v_constName_921_);
v___x_932_ = l_Lean_MessageData_ofConstName(v_constName_921_, v___x_931_);
v___x_933_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_930_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
v___x_934_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___closed__3);
v___x_935_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_933_);
lean_ctor_set(v___x_935_, 1, v___x_934_);
v___x_936_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11___redArg(v_ref_920_, v___x_935_, v_constName_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg___boxed(lean_object* v_ref_937_, lean_object* v_constName_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg(v_ref_937_, v_constName_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec(v___y_943_);
lean_dec_ref(v___y_942_);
lean_dec(v___y_941_);
lean_dec_ref(v___y_940_);
lean_dec(v___y_939_);
lean_dec(v_ref_937_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3___redArg(lean_object* v_constName_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_){
_start:
{
lean_object* v_ref_957_; lean_object* v___x_958_; 
v_ref_957_ = lean_ctor_get(v___y_954_, 2);
v___x_958_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg(v_ref_957_, v_constName_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3___redArg___boxed(lean_object* v_constName_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3___redArg(v_constName_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec(v___y_960_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2(lean_object* v_constName_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___x_978_; lean_object* v_env_979_; uint8_t v___x_980_; lean_object* v___x_981_; 
v___x_978_ = lean_st_ref_get(v___y_976_);
v_env_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc_ref(v_env_979_);
lean_dec(v___x_978_);
v___x_980_ = 0;
lean_inc(v_constName_969_);
v___x_981_ = l_Lean_Environment_find_x3f(v_env_979_, v_constName_969_, v___x_980_);
if (lean_obj_tag(v___x_981_) == 0)
{
lean_object* v___x_982_; 
v___x_982_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3___redArg(v_constName_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
return v___x_982_;
}
else
{
lean_object* v_val_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec(v_constName_969_);
v_val_983_ = lean_ctor_get(v___x_981_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_981_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_val_983_);
lean_dec(v___x_981_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
lean_ctor_set_tag(v___x_985_, 0);
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_val_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2___boxed(lean_object* v_constName_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2(v_constName_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
lean_dec(v___y_994_);
lean_dec_ref(v___y_993_);
lean_dec(v___y_992_);
return v_res_1000_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = l_instMonadEIO___redArg();
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3(lean_object* v_msg_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v_toApplicative_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1081_; 
v___x_1015_ = lean_obj_once(&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__0, &l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__0_once, _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__0);
v___x_1016_ = l_StateRefT_x27_instMonad___redArg(v___x_1015_);
v_toApplicative_1017_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1081_ == 0)
{
lean_object* v_unused_1082_; 
v_unused_1082_ = lean_ctor_get(v___x_1016_, 1);
lean_dec(v_unused_1082_);
v___x_1019_ = v___x_1016_;
v_isShared_1020_ = v_isSharedCheck_1081_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_toApplicative_1017_);
lean_dec(v___x_1016_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1081_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v_toFunctor_1021_; lean_object* v_toSeq_1022_; lean_object* v_toSeqLeft_1023_; lean_object* v_toSeqRight_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1079_; 
v_toFunctor_1021_ = lean_ctor_get(v_toApplicative_1017_, 0);
v_toSeq_1022_ = lean_ctor_get(v_toApplicative_1017_, 2);
v_toSeqLeft_1023_ = lean_ctor_get(v_toApplicative_1017_, 3);
v_toSeqRight_1024_ = lean_ctor_get(v_toApplicative_1017_, 4);
v_isSharedCheck_1079_ = !lean_is_exclusive(v_toApplicative_1017_);
if (v_isSharedCheck_1079_ == 0)
{
lean_object* v_unused_1080_; 
v_unused_1080_ = lean_ctor_get(v_toApplicative_1017_, 1);
lean_dec(v_unused_1080_);
v___x_1026_ = v_toApplicative_1017_;
v_isShared_1027_ = v_isSharedCheck_1079_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_toSeqRight_1024_);
lean_inc(v_toSeqLeft_1023_);
lean_inc(v_toSeq_1022_);
lean_inc(v_toFunctor_1021_);
lean_dec(v_toApplicative_1017_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1079_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___f_1028_; lean_object* v___f_1029_; lean_object* v___f_1030_; lean_object* v___f_1031_; lean_object* v___x_1032_; lean_object* v___f_1033_; lean_object* v___f_1034_; lean_object* v___f_1035_; lean_object* v___x_1037_; 
v___f_1028_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__1));
v___f_1029_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__2));
lean_inc_ref(v_toFunctor_1021_);
v___f_1030_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1030_, 0, v_toFunctor_1021_);
v___f_1031_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1031_, 0, v_toFunctor_1021_);
v___x_1032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___f_1030_);
lean_ctor_set(v___x_1032_, 1, v___f_1031_);
v___f_1033_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1033_, 0, v_toSeqRight_1024_);
v___f_1034_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1034_, 0, v_toSeqLeft_1023_);
v___f_1035_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1035_, 0, v_toSeq_1022_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 4, v___f_1033_);
lean_ctor_set(v___x_1026_, 3, v___f_1034_);
lean_ctor_set(v___x_1026_, 2, v___f_1035_);
lean_ctor_set(v___x_1026_, 1, v___f_1028_);
lean_ctor_set(v___x_1026_, 0, v___x_1032_);
v___x_1037_ = v___x_1026_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v___f_1028_);
lean_ctor_set(v_reuseFailAlloc_1078_, 2, v___f_1035_);
lean_ctor_set(v_reuseFailAlloc_1078_, 3, v___f_1034_);
lean_ctor_set(v_reuseFailAlloc_1078_, 4, v___f_1033_);
v___x_1037_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
lean_object* v___x_1039_; 
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 1, v___f_1029_);
lean_ctor_set(v___x_1019_, 0, v___x_1037_);
v___x_1039_ = v___x_1019_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1037_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v___f_1029_);
v___x_1039_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
lean_object* v___x_1040_; lean_object* v_toApplicative_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1075_; 
v___x_1040_ = l_StateRefT_x27_instMonad___redArg(v___x_1039_);
v_toApplicative_1041_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1075_ == 0)
{
lean_object* v_unused_1076_; 
v_unused_1076_ = lean_ctor_get(v___x_1040_, 1);
lean_dec(v_unused_1076_);
v___x_1043_ = v___x_1040_;
v_isShared_1044_ = v_isSharedCheck_1075_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_toApplicative_1041_);
lean_dec(v___x_1040_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1075_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v_toFunctor_1045_; lean_object* v_toSeq_1046_; lean_object* v_toSeqLeft_1047_; lean_object* v_toSeqRight_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1073_; 
v_toFunctor_1045_ = lean_ctor_get(v_toApplicative_1041_, 0);
v_toSeq_1046_ = lean_ctor_get(v_toApplicative_1041_, 2);
v_toSeqLeft_1047_ = lean_ctor_get(v_toApplicative_1041_, 3);
v_toSeqRight_1048_ = lean_ctor_get(v_toApplicative_1041_, 4);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_toApplicative_1041_);
if (v_isSharedCheck_1073_ == 0)
{
lean_object* v_unused_1074_; 
v_unused_1074_ = lean_ctor_get(v_toApplicative_1041_, 1);
lean_dec(v_unused_1074_);
v___x_1050_ = v_toApplicative_1041_;
v_isShared_1051_ = v_isSharedCheck_1073_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_toSeqRight_1048_);
lean_inc(v_toSeqLeft_1047_);
lean_inc(v_toSeq_1046_);
lean_inc(v_toFunctor_1045_);
lean_dec(v_toApplicative_1041_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1073_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___f_1052_; lean_object* v___f_1053_; lean_object* v___f_1054_; lean_object* v___f_1055_; lean_object* v___x_1056_; lean_object* v___f_1057_; lean_object* v___f_1058_; lean_object* v___f_1059_; lean_object* v___x_1061_; 
v___f_1052_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__3));
v___f_1053_ = ((lean_object*)(l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___closed__4));
lean_inc_ref(v_toFunctor_1045_);
v___f_1054_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1054_, 0, v_toFunctor_1045_);
v___f_1055_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1055_, 0, v_toFunctor_1045_);
v___x_1056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___f_1054_);
lean_ctor_set(v___x_1056_, 1, v___f_1055_);
v___f_1057_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1057_, 0, v_toSeqRight_1048_);
v___f_1058_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1058_, 0, v_toSeqLeft_1047_);
v___f_1059_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1059_, 0, v_toSeq_1046_);
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 4, v___f_1057_);
lean_ctor_set(v___x_1050_, 3, v___f_1058_);
lean_ctor_set(v___x_1050_, 2, v___f_1059_);
lean_ctor_set(v___x_1050_, 1, v___f_1052_);
lean_ctor_set(v___x_1050_, 0, v___x_1056_);
v___x_1061_ = v___x_1050_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v___x_1056_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v___f_1052_);
lean_ctor_set(v_reuseFailAlloc_1072_, 2, v___f_1059_);
lean_ctor_set(v_reuseFailAlloc_1072_, 3, v___f_1058_);
lean_ctor_set(v_reuseFailAlloc_1072_, 4, v___f_1057_);
v___x_1061_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
lean_object* v___x_1063_; 
if (v_isShared_1044_ == 0)
{
lean_ctor_set(v___x_1043_, 1, v___f_1053_);
lean_ctor_set(v___x_1043_, 0, v___x_1061_);
v___x_1063_ = v___x_1043_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1061_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v___f_1053_);
v___x_1063_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_13035__overap_1069_; lean_object* v___x_1070_; 
v___x_1064_ = l_StateRefT_x27_instMonad___redArg(v___x_1063_);
v___x_1065_ = l_ReaderT_instMonad___redArg(v___x_1064_);
v___x_1066_ = l_ReaderT_instMonad___redArg(v___x_1065_);
v___x_1067_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_1068_ = l_instInhabitedOfMonad___redArg(v___x_1066_, v___x_1067_);
v___x_13035__overap_1069_ = lean_panic_fn_borrowed(v___x_1068_, v_msg_1006_);
lean_dec(v___x_1068_);
lean_inc(v___y_1013_);
lean_inc_ref(v___y_1012_);
lean_inc(v___y_1011_);
lean_inc_ref(v___y_1010_);
lean_inc(v___y_1009_);
lean_inc_ref(v___y_1008_);
lean_inc(v___y_1007_);
v___x_1070_ = lean_apply_8(v___x_13035__overap_1069_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, lean_box(0));
return v___x_1070_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3___boxed(lean_object* v_msg_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3(v_msg_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_);
lean_dec(v___y_1090_);
lean_dec_ref(v___y_1089_);
lean_dec(v___y_1088_);
lean_dec_ref(v___y_1087_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1085_);
lean_dec(v___y_1084_);
return v_res_1092_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__3(void){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1096_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__2));
v___x_1097_ = lean_unsigned_to_nat(53u);
v___x_1098_ = lean_unsigned_to_nat(62u);
v___x_1099_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__1));
v___x_1100_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__0));
v___x_1101_ = l_mkPanicMessageWithDecl(v___x_1100_, v___x_1099_, v___x_1098_, v___x_1097_, v___x_1096_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5(size_t v_sz_1102_, size_t v_i_1103_, lean_object* v_bs_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
uint8_t v___x_1113_; 
v___x_1113_ = lean_usize_dec_lt(v_i_1103_, v_sz_1102_);
if (v___x_1113_ == 0)
{
lean_object* v___x_1114_; 
v___x_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1114_, 0, v_bs_1104_);
return v___x_1114_;
}
else
{
lean_object* v_v_1115_; lean_object* v___x_1116_; lean_object* v_bs_x27_1117_; lean_object* v_a_1119_; lean_object* v___x_1124_; 
v_v_1115_ = lean_array_uget(v_bs_1104_, v_i_1103_);
v___x_1116_ = lean_unsigned_to_nat(0u);
v_bs_x27_1117_ = lean_array_uset(v_bs_1104_, v_i_1103_, v___x_1116_);
v___x_1124_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2(v_v_1115_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1125_; 
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
lean_inc(v_a_1125_);
lean_dec_ref_known(v___x_1124_, 1);
if (lean_obj_tag(v_a_1125_) == 6)
{
lean_object* v_val_1126_; lean_object* v_numFields_1127_; uint8_t v___x_1128_; lean_object* v___x_1129_; 
v_val_1126_ = lean_ctor_get(v_a_1125_, 0);
lean_inc_ref(v_val_1126_);
lean_dec_ref_known(v_a_1125_, 1);
v_numFields_1127_ = lean_ctor_get(v_val_1126_, 4);
lean_inc(v_numFields_1127_);
lean_dec_ref(v_val_1126_);
v___x_1128_ = 0;
v___x_1129_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1129_, 0, v_numFields_1127_);
lean_ctor_set(v___x_1129_, 1, v___x_1116_);
lean_ctor_set_uint8(v___x_1129_, sizeof(void*)*2, v___x_1128_);
v_a_1119_ = v___x_1129_;
goto v___jp_1118_;
}
else
{
lean_object* v___x_1130_; lean_object* v___x_1131_; 
lean_dec(v_a_1125_);
v___x_1130_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___closed__3);
v___x_1131_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__3(v___x_1130_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v_a_1132_; 
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_a_1132_);
lean_dec_ref_known(v___x_1131_, 1);
v_a_1119_ = v_a_1132_;
goto v___jp_1118_;
}
else
{
lean_object* v_a_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1140_; 
lean_dec_ref(v_bs_x27_1117_);
v_a_1133_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1135_ = v___x_1131_;
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_a_1133_);
lean_dec(v___x_1131_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1138_; 
if (v_isShared_1136_ == 0)
{
v___x_1138_ = v___x_1135_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_a_1133_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
}
else
{
lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1148_; 
lean_dec_ref(v_bs_x27_1117_);
v_a_1141_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1143_ = v___x_1124_;
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1124_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1146_; 
if (v_isShared_1144_ == 0)
{
v___x_1146_ = v___x_1143_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_a_1141_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
v___jp_1118_:
{
size_t v___x_1120_; size_t v___x_1121_; lean_object* v___x_1122_; 
v___x_1120_ = ((size_t)1ULL);
v___x_1121_ = lean_usize_add(v_i_1103_, v___x_1120_);
v___x_1122_ = lean_array_uset(v_bs_x27_1117_, v_i_1103_, v_a_1119_);
v_i_1103_ = v___x_1121_;
v_bs_1104_ = v___x_1122_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5___boxed(lean_object* v_sz_1149_, lean_object* v_i_1150_, lean_object* v_bs_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_){
_start:
{
size_t v_sz_boxed_1160_; size_t v_i_boxed_1161_; lean_object* v_res_1162_; 
v_sz_boxed_1160_ = lean_unbox_usize(v_sz_1149_);
lean_dec(v_sz_1149_);
v_i_boxed_1161_ = lean_unbox_usize(v_i_1150_);
lean_dec(v_i_1150_);
v_res_1162_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5(v_sz_boxed_1160_, v_i_boxed_1161_, v_bs_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1157_);
lean_dec(v___y_1156_);
lean_dec_ref(v___y_1155_);
lean_dec(v___y_1154_);
lean_dec_ref(v___y_1153_);
lean_dec(v___y_1152_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__4___redArg(lean_object* v_declName_1163_, lean_object* v___y_1164_){
_start:
{
lean_object* v___x_1166_; lean_object* v_env_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1166_ = lean_st_ref_get(v___y_1164_);
v_env_1167_ = lean_ctor_get(v___x_1166_, 0);
lean_inc_ref(v_env_1167_);
lean_dec(v___x_1166_);
v___x_1168_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_1167_, v_declName_1163_);
v___x_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1168_);
return v___x_1169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__4___redArg___boxed(lean_object* v_declName_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__4___redArg(v_declName_1170_, v___y_1171_);
lean_dec(v___y_1171_);
return v_res_1173_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1174_ = lean_box(0);
v___x_1175_ = lean_unsigned_to_nat(16u);
v___x_1176_ = lean_mk_array(v___x_1175_, v___x_1174_);
return v___x_1176_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1177_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__0);
v___x_1178_ = lean_unsigned_to_nat(0u);
v___x_1179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
lean_ctor_set(v___x_1179_, 1, v___x_1177_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2(lean_object* v_e_1182_, uint8_t v_alsoCasesOn_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
uint8_t v___x_1195_; 
v___x_1195_ = l_Lean_Expr_isApp(v_e_1182_);
if (v___x_1195_ == 0)
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
lean_dec_ref(v_e_1182_);
v___x_1196_ = lean_box(0);
v___x_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1196_);
return v___x_1197_;
}
else
{
lean_object* v___x_1198_; 
v___x_1198_ = l_Lean_Expr_getAppFn(v_e_1182_);
if (lean_obj_tag(v___x_1198_) == 4)
{
lean_object* v_declName_1199_; lean_object* v_us_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v_a_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1347_; 
v_declName_1199_ = lean_ctor_get(v___x_1198_, 0);
lean_inc_n(v_declName_1199_, 2);
v_us_1200_ = lean_ctor_get(v___x_1198_, 1);
lean_inc(v_us_1200_);
lean_dec_ref_known(v___x_1198_, 2);
v___x_1201_ = l_Lean_instInhabitedExpr;
v___x_1202_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__4___redArg(v_declName_1199_, v___y_1190_);
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1205_ = v___x_1202_;
v_isShared_1206_ = v_isSharedCheck_1347_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_a_1203_);
lean_dec(v___x_1202_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1347_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
if (lean_obj_tag(v_a_1203_) == 1)
{
lean_object* v_val_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1244_; 
v_val_1207_ = lean_ctor_get(v_a_1203_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v_a_1203_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1209_ = v_a_1203_;
v_isShared_1210_ = v_isSharedCheck_1244_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_val_1207_);
lean_dec(v_a_1203_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1244_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v_dummy_1211_; lean_object* v_nargs_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v_args_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; uint8_t v___x_1219_; 
v_dummy_1211_ = lean_obj_once(&l_Lean_Elab_WF_condToDite___redArg___closed__7, &l_Lean_Elab_WF_condToDite___redArg___closed__7_once, _init_l_Lean_Elab_WF_condToDite___redArg___closed__7);
v_nargs_1212_ = l_Lean_Expr_getAppNumArgs(v_e_1182_);
lean_inc(v_nargs_1212_);
v___x_1213_ = lean_mk_array(v_nargs_1212_, v_dummy_1211_);
v___x_1214_ = lean_unsigned_to_nat(1u);
v___x_1215_ = lean_nat_sub(v_nargs_1212_, v___x_1214_);
lean_dec(v_nargs_1212_);
v_args_1216_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1182_, v___x_1213_, v___x_1215_);
v___x_1217_ = lean_array_get_size(v_args_1216_);
v___x_1218_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_1207_);
v___x_1219_ = lean_nat_dec_lt(v___x_1217_, v___x_1218_);
lean_dec(v___x_1218_);
if (v___x_1219_ == 0)
{
lean_object* v_numParams_1220_; lean_object* v_numDiscrs_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1239_; 
v_numParams_1220_ = lean_ctor_get(v_val_1207_, 0);
v_numDiscrs_1221_ = lean_ctor_get(v_val_1207_, 1);
v___x_1222_ = lean_array_mk(v_us_1200_);
v___x_1223_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1220_);
v___x_1224_ = l_Array_extract___redArg(v_args_1216_, v___x_1223_, v_numParams_1220_);
v___x_1225_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_1207_);
v___x_1226_ = lean_array_get(v___x_1201_, v_args_1216_, v___x_1225_);
lean_dec(v___x_1225_);
v___x_1227_ = lean_nat_add(v_numParams_1220_, v___x_1214_);
v___x_1228_ = lean_nat_add(v___x_1227_, v_numDiscrs_1221_);
lean_inc(v___x_1228_);
lean_inc_ref_n(v_args_1216_, 2);
v___x_1229_ = l_Array_toSubarray___redArg(v_args_1216_, v___x_1227_, v___x_1228_);
v___x_1230_ = l_Subarray_copy___redArg(v___x_1229_);
v___x_1231_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_1207_);
v___x_1232_ = lean_nat_add(v___x_1228_, v___x_1231_);
lean_dec(v___x_1231_);
lean_inc(v___x_1232_);
v___x_1233_ = l_Array_toSubarray___redArg(v_args_1216_, v___x_1228_, v___x_1232_);
v___x_1234_ = l_Subarray_copy___redArg(v___x_1233_);
v___x_1235_ = l_Array_toSubarray___redArg(v_args_1216_, v___x_1232_, v___x_1217_);
v___x_1236_ = l_Subarray_copy___redArg(v___x_1235_);
v___x_1237_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1237_, 0, v_val_1207_);
lean_ctor_set(v___x_1237_, 1, v_declName_1199_);
lean_ctor_set(v___x_1237_, 2, v___x_1222_);
lean_ctor_set(v___x_1237_, 3, v___x_1224_);
lean_ctor_set(v___x_1237_, 4, v___x_1226_);
lean_ctor_set(v___x_1237_, 5, v___x_1230_);
lean_ctor_set(v___x_1237_, 6, v___x_1234_);
lean_ctor_set(v___x_1237_, 7, v___x_1236_);
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 0, v___x_1237_);
v___x_1239_ = v___x_1209_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v___x_1237_);
v___x_1239_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
lean_object* v___x_1241_; 
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v___x_1239_);
v___x_1241_ = v___x_1205_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v___x_1239_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
}
else
{
lean_dec_ref(v_args_1216_);
lean_del_object(v___x_1209_);
lean_dec(v_val_1207_);
lean_del_object(v___x_1205_);
lean_dec(v_us_1200_);
lean_dec(v_declName_1199_);
goto v___jp_1192_;
}
}
}
else
{
lean_object* v___x_1245_; 
lean_del_object(v___x_1205_);
lean_dec(v_a_1203_);
v___x_1245_ = lean_st_ref_get(v___y_1190_);
if (v_alsoCasesOn_1183_ == 0)
{
lean_dec(v___x_1245_);
lean_dec(v_us_1200_);
lean_dec(v_declName_1199_);
lean_dec_ref(v_e_1182_);
goto v___jp_1192_;
}
else
{
lean_object* v_env_1246_; uint8_t v___x_1247_; 
v_env_1246_ = lean_ctor_get(v___x_1245_, 0);
lean_inc_ref(v_env_1246_);
lean_dec(v___x_1245_);
lean_inc(v_declName_1199_);
v___x_1247_ = l_Lean_isCasesOnRecursor(v_env_1246_, v_declName_1199_);
if (v___x_1247_ == 0)
{
lean_dec(v_us_1200_);
lean_dec(v_declName_1199_);
lean_dec_ref(v_e_1182_);
goto v___jp_1192_;
}
else
{
lean_object* v_indName_1248_; lean_object* v___x_1249_; 
v_indName_1248_ = l_Lean_Name_getPrefix(v_declName_1199_);
v___x_1249_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2(v_indName_1248_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1249_) == 0)
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1338_; 
v_a_1250_ = lean_ctor_get(v___x_1249_, 0);
v_isSharedCheck_1338_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1338_ == 0)
{
v___x_1252_ = v___x_1249_;
v_isShared_1253_ = v_isSharedCheck_1338_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1249_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1338_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
if (lean_obj_tag(v_a_1250_) == 5)
{
lean_object* v_val_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1333_; 
lean_del_object(v___x_1252_);
v_val_1254_ = lean_ctor_get(v_a_1250_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v_a_1250_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1256_ = v_a_1250_;
v_isShared_1257_ = v_isSharedCheck_1333_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_val_1254_);
lean_dec(v_a_1250_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1333_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v_toConstantVal_1258_; lean_object* v_numParams_1259_; lean_object* v_numIndices_1260_; lean_object* v_ctors_1261_; lean_object* v_nargs_1262_; lean_object* v_dummy_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v_args_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; uint8_t v___x_1274_; 
v_toConstantVal_1258_ = lean_ctor_get(v_val_1254_, 0);
lean_inc_ref(v_toConstantVal_1258_);
v_numParams_1259_ = lean_ctor_get(v_val_1254_, 1);
lean_inc(v_numParams_1259_);
v_numIndices_1260_ = lean_ctor_get(v_val_1254_, 2);
lean_inc(v_numIndices_1260_);
v_ctors_1261_ = lean_ctor_get(v_val_1254_, 4);
lean_inc(v_ctors_1261_);
v_nargs_1262_ = l_Lean_Expr_getAppNumArgs(v_e_1182_);
v_dummy_1263_ = lean_obj_once(&l_Lean_Elab_WF_condToDite___redArg___closed__7, &l_Lean_Elab_WF_condToDite___redArg___closed__7_once, _init_l_Lean_Elab_WF_condToDite___redArg___closed__7);
lean_inc(v_nargs_1262_);
v___x_1264_ = lean_mk_array(v_nargs_1262_, v_dummy_1263_);
v___x_1265_ = lean_unsigned_to_nat(1u);
v___x_1266_ = lean_nat_sub(v_nargs_1262_, v___x_1265_);
lean_dec(v_nargs_1262_);
v_args_1267_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1182_, v___x_1264_, v___x_1266_);
v___x_1268_ = lean_nat_add(v_numParams_1259_, v___x_1265_);
v___x_1269_ = lean_nat_add(v___x_1268_, v_numIndices_1260_);
v___x_1270_ = lean_nat_add(v___x_1269_, v___x_1265_);
lean_dec(v___x_1269_);
v___x_1271_ = l_Lean_InductiveVal_numCtors(v_val_1254_);
lean_dec_ref(v_val_1254_);
v___x_1272_ = lean_nat_add(v___x_1270_, v___x_1271_);
lean_dec(v___x_1271_);
v___x_1273_ = lean_array_get_size(v_args_1267_);
v___x_1274_ = lean_nat_dec_le(v___x_1272_, v___x_1273_);
if (v___x_1274_ == 0)
{
lean_dec(v___x_1272_);
lean_dec(v___x_1270_);
lean_dec(v___x_1268_);
lean_dec_ref(v_args_1267_);
lean_dec(v_ctors_1261_);
lean_dec(v_numIndices_1260_);
lean_dec(v_numParams_1259_);
lean_dec_ref(v_toConstantVal_1258_);
lean_del_object(v___x_1256_);
lean_dec(v_us_1200_);
lean_dec(v_declName_1199_);
goto v___jp_1192_;
}
else
{
lean_object* v___x_1275_; lean_object* v_params_1276_; lean_object* v_motive_1277_; lean_object* v_discrs_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v_discrInfos_1281_; lean_object* v_alts_1282_; lean_object* v___y_1284_; lean_object* v___y_1285_; lean_object* v_lower_1324_; lean_object* v_upper_1325_; uint8_t v___x_1332_; 
v___x_1275_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1259_);
lean_inc_ref_n(v_args_1267_, 3);
v_params_1276_ = l_Array_toSubarray___redArg(v_args_1267_, v___x_1275_, v_numParams_1259_);
v_motive_1277_ = lean_array_get(v___x_1201_, v_args_1267_, v_numParams_1259_);
lean_dec(v_numParams_1259_);
lean_inc(v___x_1270_);
v_discrs_1278_ = l_Array_toSubarray___redArg(v_args_1267_, v___x_1268_, v___x_1270_);
v___x_1279_ = lean_nat_add(v_numIndices_1260_, v___x_1265_);
lean_dec(v_numIndices_1260_);
v___x_1280_ = lean_box(0);
v_discrInfos_1281_ = lean_mk_array(v___x_1279_, v___x_1280_);
lean_inc(v___x_1272_);
v_alts_1282_ = l_Array_toSubarray___redArg(v_args_1267_, v___x_1270_, v___x_1272_);
v___x_1332_ = lean_nat_dec_le(v___x_1272_, v___x_1275_);
if (v___x_1332_ == 0)
{
v_lower_1324_ = v___x_1272_;
v_upper_1325_ = v___x_1273_;
goto v___jp_1323_;
}
else
{
lean_dec(v___x_1272_);
v_lower_1324_ = v___x_1275_;
v_upper_1325_ = v___x_1273_;
goto v___jp_1323_;
}
v___jp_1283_:
{
lean_object* v___x_1286_; size_t v_sz_1287_; size_t v___x_1288_; lean_object* v___x_1289_; 
v___x_1286_ = lean_array_mk(v_ctors_1261_);
v_sz_1287_ = lean_array_size(v___x_1286_);
v___x_1288_ = ((size_t)0ULL);
v___x_1289_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__5(v_sz_1287_, v___x_1288_, v___x_1286_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1314_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1292_ = v___x_1289_;
v_isShared_1293_ = v_isSharedCheck_1314_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1289_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1314_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v_start_1294_; lean_object* v_stop_1295_; lean_object* v_start_1296_; lean_object* v_stop_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1309_; 
v_start_1294_ = lean_ctor_get(v_params_1276_, 1);
v_stop_1295_ = lean_ctor_get(v_params_1276_, 2);
v_start_1296_ = lean_ctor_get(v_discrs_1278_, 1);
v_stop_1297_ = lean_ctor_get(v_discrs_1278_, 2);
v___x_1298_ = lean_nat_sub(v_stop_1295_, v_start_1294_);
v___x_1299_ = lean_nat_sub(v_stop_1297_, v_start_1296_);
v___x_1300_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__1);
v___x_1301_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1298_);
lean_ctor_set(v___x_1301_, 1, v___x_1299_);
lean_ctor_set(v___x_1301_, 2, v_a_1290_);
lean_ctor_set(v___x_1301_, 3, v___y_1285_);
lean_ctor_set(v___x_1301_, 4, v_discrInfos_1281_);
lean_ctor_set(v___x_1301_, 5, v___x_1300_);
v___x_1302_ = lean_array_mk(v_us_1200_);
v___x_1303_ = l_Subarray_copy___redArg(v_params_1276_);
v___x_1304_ = l_Subarray_copy___redArg(v_discrs_1278_);
v___x_1305_ = l_Subarray_copy___redArg(v_alts_1282_);
v___x_1306_ = l_Subarray_copy___redArg(v___y_1284_);
v___x_1307_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1301_);
lean_ctor_set(v___x_1307_, 1, v_declName_1199_);
lean_ctor_set(v___x_1307_, 2, v___x_1302_);
lean_ctor_set(v___x_1307_, 3, v___x_1303_);
lean_ctor_set(v___x_1307_, 4, v_motive_1277_);
lean_ctor_set(v___x_1307_, 5, v___x_1304_);
lean_ctor_set(v___x_1307_, 6, v___x_1305_);
lean_ctor_set(v___x_1307_, 7, v___x_1306_);
if (v_isShared_1257_ == 0)
{
lean_ctor_set_tag(v___x_1256_, 1);
lean_ctor_set(v___x_1256_, 0, v___x_1307_);
v___x_1309_ = v___x_1256_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___x_1307_);
v___x_1309_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
lean_object* v___x_1311_; 
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 0, v___x_1309_);
v___x_1311_ = v___x_1292_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v___x_1309_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
}
else
{
lean_object* v_a_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1322_; 
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
lean_dec_ref(v_alts_1282_);
lean_dec_ref(v_discrInfos_1281_);
lean_dec_ref(v_discrs_1278_);
lean_dec(v_motive_1277_);
lean_dec_ref(v_params_1276_);
lean_del_object(v___x_1256_);
lean_dec(v_us_1200_);
lean_dec(v_declName_1199_);
v_a_1315_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1322_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1317_ = v___x_1289_;
v_isShared_1318_ = v_isSharedCheck_1322_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_a_1315_);
lean_dec(v___x_1289_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1322_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1320_; 
if (v_isShared_1318_ == 0)
{
v___x_1320_ = v___x_1317_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v_a_1315_);
v___x_1320_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
return v___x_1320_;
}
}
}
}
v___jp_1323_:
{
lean_object* v_levelParams_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; uint8_t v___x_1330_; 
v_levelParams_1326_ = lean_ctor_get(v_toConstantVal_1258_, 1);
lean_inc(v_levelParams_1326_);
lean_dec_ref(v_toConstantVal_1258_);
v___x_1327_ = l_Array_toSubarray___redArg(v_args_1267_, v_lower_1324_, v_upper_1325_);
v___x_1328_ = l_List_lengthTR___redArg(v_levelParams_1326_);
lean_dec(v_levelParams_1326_);
v___x_1329_ = l_List_lengthTR___redArg(v_us_1200_);
v___x_1330_ = lean_nat_dec_eq(v___x_1328_, v___x_1329_);
lean_dec(v___x_1329_);
lean_dec(v___x_1328_);
if (v___x_1330_ == 0)
{
lean_object* v___x_1331_; 
v___x_1331_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___closed__2));
v___y_1284_ = v___x_1327_;
v___y_1285_ = v___x_1331_;
goto v___jp_1283_;
}
else
{
v___y_1284_ = v___x_1327_;
v___y_1285_ = v___x_1280_;
goto v___jp_1283_;
}
}
}
}
}
else
{
lean_object* v___x_1334_; lean_object* v___x_1336_; 
lean_dec(v_a_1250_);
lean_dec(v_us_1200_);
lean_dec(v_declName_1199_);
lean_dec_ref(v_e_1182_);
v___x_1334_ = lean_box(0);
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 0, v___x_1334_);
v___x_1336_ = v___x_1252_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v___x_1334_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
}
}
else
{
lean_object* v_a_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1346_; 
lean_dec(v_us_1200_);
lean_dec(v_declName_1199_);
lean_dec_ref(v_e_1182_);
v_a_1339_ = lean_ctor_get(v___x_1249_, 0);
v_isSharedCheck_1346_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1341_ = v___x_1249_;
v_isShared_1342_ = v_isSharedCheck_1346_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_a_1339_);
lean_dec(v___x_1249_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1346_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1344_; 
if (v_isShared_1342_ == 0)
{
v___x_1344_ = v___x_1341_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v_a_1339_);
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
}
}
}
else
{
lean_dec_ref(v___x_1198_);
lean_dec_ref(v_e_1182_);
goto v___jp_1192_;
}
}
v___jp_1192_:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = lean_box(0);
v___x_1194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1193_);
return v___x_1194_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2___boxed(lean_object* v_e_1348_, lean_object* v_alsoCasesOn_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
uint8_t v_alsoCasesOn_boxed_1358_; lean_object* v_res_1359_; 
v_alsoCasesOn_boxed_1358_ = lean_unbox(v_alsoCasesOn_1349_);
v_res_1359_ = l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2(v_e_1348_, v_alsoCasesOn_boxed_1358_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__0___redArg(size_t v_sz_1360_, size_t v_i_1361_, lean_object* v_bs_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
uint8_t v___x_1368_; 
v___x_1368_ = lean_usize_dec_lt(v_i_1361_, v_sz_1360_);
if (v___x_1368_ == 0)
{
lean_object* v___x_1369_; 
v___x_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1369_, 0, v_bs_1362_);
return v___x_1369_;
}
else
{
lean_object* v_v_1370_; lean_object* v___x_1371_; lean_object* v_bs_x27_1372_; lean_object* v___x_1373_; 
v_v_1370_ = lean_array_uget(v_bs_1362_, v_i_1361_);
v___x_1371_ = lean_unsigned_to_nat(0u);
v_bs_x27_1372_ = lean_array_uset(v_bs_1362_, v_i_1361_, v___x_1371_);
v___x_1373_ = l_Lean_Elab_WF_mkWfParam(v_v_1370_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
if (lean_obj_tag(v___x_1373_) == 0)
{
lean_object* v_a_1374_; size_t v___x_1375_; size_t v___x_1376_; lean_object* v___x_1377_; 
v_a_1374_ = lean_ctor_get(v___x_1373_, 0);
lean_inc(v_a_1374_);
lean_dec_ref_known(v___x_1373_, 1);
v___x_1375_ = ((size_t)1ULL);
v___x_1376_ = lean_usize_add(v_i_1361_, v___x_1375_);
v___x_1377_ = lean_array_uset(v_bs_x27_1372_, v_i_1361_, v_a_1374_);
v_i_1361_ = v___x_1376_;
v_bs_1362_ = v___x_1377_;
goto _start;
}
else
{
lean_object* v_a_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1386_; 
lean_dec_ref(v_bs_x27_1372_);
v_a_1379_ = lean_ctor_get(v___x_1373_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1381_ = v___x_1373_;
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_a_1379_);
lean_dec(v___x_1373_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1384_; 
if (v_isShared_1382_ == 0)
{
v___x_1384_ = v___x_1381_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_a_1379_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__0___redArg___boxed(lean_object* v_sz_1387_, lean_object* v_i_1388_, lean_object* v_bs_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_){
_start:
{
size_t v_sz_boxed_1395_; size_t v_i_boxed_1396_; lean_object* v_res_1397_; 
v_sz_boxed_1395_ = lean_unbox_usize(v_sz_1387_);
lean_dec(v_sz_1387_);
v_i_boxed_1396_ = lean_unbox_usize(v_i_1388_);
lean_dec(v_i_1388_);
v_res_1397_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__0___redArg(v_sz_boxed_1395_, v_i_boxed_1396_, v_bs_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__5___lam__0(uint8_t v___x_1398_, lean_object* v_xs_1399_, lean_object* v_body_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_){
_start:
{
size_t v_sz_1409_; size_t v___x_1410_; lean_object* v___x_1411_; 
v_sz_1409_ = lean_array_size(v_xs_1399_);
v___x_1410_ = ((size_t)0ULL);
lean_inc_ref(v_xs_1399_);
v___x_1411_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__0___redArg(v_sz_1409_, v___x_1410_, v_xs_1399_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_);
if (lean_obj_tag(v___x_1411_) == 0)
{
lean_object* v_a_1412_; lean_object* v___x_1413_; uint8_t v___x_1414_; uint8_t v___x_1415_; lean_object* v___x_1416_; 
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
lean_inc(v_a_1412_);
lean_dec_ref_known(v___x_1411_, 1);
v___x_1413_ = l_Lean_Expr_replaceFVars(v_body_1400_, v_xs_1399_, v_a_1412_);
lean_dec(v_a_1412_);
v___x_1414_ = 0;
v___x_1415_ = 1;
v___x_1416_ = l_Lean_Meta_mkLambdaFVars(v_xs_1399_, v___x_1413_, v___x_1414_, v___x_1398_, v___x_1414_, v___x_1398_, v___x_1415_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_);
lean_dec_ref(v_xs_1399_);
return v___x_1416_;
}
else
{
lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1424_; 
lean_dec_ref(v_xs_1399_);
v_a_1417_ = lean_ctor_get(v___x_1411_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1419_ = v___x_1411_;
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v___x_1411_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1422_; 
if (v_isShared_1420_ == 0)
{
v___x_1422_ = v___x_1419_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_a_1417_);
v___x_1422_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
return v___x_1422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__5___lam__0___boxed(lean_object* v___x_1425_, lean_object* v_xs_1426_, lean_object* v_body_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_){
_start:
{
uint8_t v___x_22040__boxed_1436_; lean_object* v_res_1437_; 
v___x_22040__boxed_1436_ = lean_unbox(v___x_1425_);
v_res_1437_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__5___lam__0(v___x_22040__boxed_1436_, v_xs_1426_, v_body_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
lean_dec(v___y_1432_);
lean_dec_ref(v___y_1431_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec(v___y_1428_);
lean_dec_ref(v_body_1427_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__5(size_t v_sz_1438_, size_t v_i_1439_, lean_object* v_bs_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
uint8_t v___x_1449_; 
v___x_1449_ = lean_usize_dec_lt(v_i_1439_, v_sz_1438_);
if (v___x_1449_ == 0)
{
lean_object* v___x_1450_; 
v___x_1450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1450_, 0, v_bs_1440_);
return v___x_1450_;
}
else
{
lean_object* v___x_1451_; lean_object* v___f_1452_; lean_object* v_v_1453_; lean_object* v___x_1454_; lean_object* v_bs_x27_1455_; uint8_t v___x_1456_; lean_object* v___x_1457_; 
v___x_1451_ = lean_box(v___x_1449_);
v___f_1452_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__5___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1452_, 0, v___x_1451_);
v_v_1453_ = lean_array_uget(v_bs_1440_, v_i_1439_);
v___x_1454_ = lean_unsigned_to_nat(0u);
v_bs_x27_1455_ = lean_array_uset(v_bs_1440_, v_i_1439_, v___x_1454_);
v___x_1456_ = 0;
v___x_1457_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_paramMatcher_spec__1___redArg(v_v_1453_, v___f_1452_, v___x_1456_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_object* v_a_1458_; size_t v___x_1459_; size_t v___x_1460_; lean_object* v___x_1461_; 
v_a_1458_ = lean_ctor_get(v___x_1457_, 0);
lean_inc(v_a_1458_);
lean_dec_ref_known(v___x_1457_, 1);
v___x_1459_ = ((size_t)1ULL);
v___x_1460_ = lean_usize_add(v_i_1439_, v___x_1459_);
v___x_1461_ = lean_array_uset(v_bs_x27_1455_, v_i_1439_, v_a_1458_);
v_i_1439_ = v___x_1460_;
v_bs_1440_ = v___x_1461_;
goto _start;
}
else
{
lean_object* v_a_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1470_; 
lean_dec_ref(v_bs_x27_1455_);
v_a_1463_ = lean_ctor_get(v___x_1457_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1457_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1465_ = v___x_1457_;
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_a_1463_);
lean_dec(v___x_1457_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
lean_object* v___x_1468_; 
if (v_isShared_1466_ == 0)
{
v___x_1468_ = v___x_1465_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v_a_1463_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__5___boxed(lean_object* v_sz_1471_, lean_object* v_i_1472_, lean_object* v_bs_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
size_t v_sz_boxed_1482_; size_t v_i_boxed_1483_; lean_object* v_res_1484_; 
v_sz_boxed_1482_ = lean_unbox_usize(v_sz_1471_);
lean_dec(v_sz_1471_);
v_i_boxed_1483_ = lean_unbox_usize(v_i_1472_);
lean_dec(v_i_1472_);
v_res_1484_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__5(v_sz_boxed_1482_, v_i_boxed_1483_, v_bs_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___y_1474_);
return v_res_1484_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_WF_paramMatcher_spec__3(lean_object* v_as_1485_, size_t v_i_1486_, size_t v_stop_1487_){
_start:
{
uint8_t v___x_1488_; 
v___x_1488_ = lean_usize_dec_eq(v_i_1486_, v_stop_1487_);
if (v___x_1488_ == 0)
{
lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1489_ = lean_array_uget_borrowed(v_as_1485_, v_i_1486_);
v___x_1490_ = l_Lean_Elab_WF_isWfParam_x3f(v___x_1489_);
if (lean_obj_tag(v___x_1490_) == 0)
{
size_t v___x_1491_; size_t v___x_1492_; 
v___x_1491_ = ((size_t)1ULL);
v___x_1492_ = lean_usize_add(v_i_1486_, v___x_1491_);
v_i_1486_ = v___x_1492_;
goto _start;
}
else
{
uint8_t v___x_1494_; 
lean_dec_ref_known(v___x_1490_, 1);
v___x_1494_ = 1;
return v___x_1494_;
}
}
else
{
uint8_t v___x_1495_; 
v___x_1495_ = 0;
return v___x_1495_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_WF_paramMatcher_spec__3___boxed(lean_object* v_as_1496_, lean_object* v_i_1497_, lean_object* v_stop_1498_){
_start:
{
size_t v_i_boxed_1499_; size_t v_stop_boxed_1500_; uint8_t v_res_1501_; lean_object* v_r_1502_; 
v_i_boxed_1499_ = lean_unbox_usize(v_i_1497_);
lean_dec(v_i_1497_);
v_stop_boxed_1500_ = lean_unbox_usize(v_stop_1498_);
lean_dec(v_stop_1498_);
v_res_1501_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_WF_paramMatcher_spec__3(v_as_1496_, v_i_boxed_1499_, v_stop_boxed_1500_);
lean_dec_ref(v_as_1496_);
v_r_1502_ = lean_box(v_res_1501_);
return v_r_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramMatcher(lean_object* v_e_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_){
_start:
{
uint8_t v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = 1;
v___x_1513_ = l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2(v_e_1503_, v___x_1512_, v_a_1504_, v_a_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_, v_a_1510_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1576_; 
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1516_ = v___x_1513_;
v_isShared_1517_ = v_isSharedCheck_1576_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1513_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1576_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
if (lean_obj_tag(v_a_1514_) == 1)
{
lean_object* v_val_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1573_; 
v_val_1523_ = lean_ctor_get(v_a_1514_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v_a_1514_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1525_ = v_a_1514_;
v_isShared_1526_ = v_isSharedCheck_1573_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_val_1523_);
lean_dec(v_a_1514_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1573_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v_toMatcherInfo_1527_; lean_object* v_matcherName_1528_; lean_object* v_matcherLevels_1529_; lean_object* v_params_1530_; lean_object* v_motive_1531_; lean_object* v_discrs_1532_; lean_object* v_alts_1533_; lean_object* v_remaining_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1572_; 
v_toMatcherInfo_1527_ = lean_ctor_get(v_val_1523_, 0);
v_matcherName_1528_ = lean_ctor_get(v_val_1523_, 1);
v_matcherLevels_1529_ = lean_ctor_get(v_val_1523_, 2);
v_params_1530_ = lean_ctor_get(v_val_1523_, 3);
v_motive_1531_ = lean_ctor_get(v_val_1523_, 4);
v_discrs_1532_ = lean_ctor_get(v_val_1523_, 5);
v_alts_1533_ = lean_ctor_get(v_val_1523_, 6);
v_remaining_1534_ = lean_ctor_get(v_val_1523_, 7);
v_isSharedCheck_1572_ = !lean_is_exclusive(v_val_1523_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1536_ = v_val_1523_;
v_isShared_1537_ = v_isSharedCheck_1572_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_remaining_1534_);
lean_inc(v_alts_1533_);
lean_inc(v_discrs_1532_);
lean_inc(v_motive_1531_);
lean_inc(v_params_1530_);
lean_inc(v_matcherLevels_1529_);
lean_inc(v_matcherName_1528_);
lean_inc(v_toMatcherInfo_1527_);
lean_dec(v_val_1523_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1572_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; uint8_t v___x_1540_; 
v___x_1538_ = lean_unsigned_to_nat(0u);
v___x_1539_ = lean_array_get_size(v_discrs_1532_);
v___x_1540_ = lean_nat_dec_lt(v___x_1538_, v___x_1539_);
if (v___x_1540_ == 0)
{
lean_del_object(v___x_1536_);
lean_dec_ref(v_remaining_1534_);
lean_dec_ref(v_alts_1533_);
lean_dec_ref(v_discrs_1532_);
lean_dec_ref(v_motive_1531_);
lean_dec_ref(v_params_1530_);
lean_dec_ref(v_matcherLevels_1529_);
lean_dec(v_matcherName_1528_);
lean_dec_ref(v_toMatcherInfo_1527_);
lean_del_object(v___x_1525_);
goto v___jp_1518_;
}
else
{
if (v___x_1540_ == 0)
{
lean_del_object(v___x_1536_);
lean_dec_ref(v_remaining_1534_);
lean_dec_ref(v_alts_1533_);
lean_dec_ref(v_discrs_1532_);
lean_dec_ref(v_motive_1531_);
lean_dec_ref(v_params_1530_);
lean_dec_ref(v_matcherLevels_1529_);
lean_dec(v_matcherName_1528_);
lean_dec_ref(v_toMatcherInfo_1527_);
lean_del_object(v___x_1525_);
goto v___jp_1518_;
}
else
{
size_t v___x_1541_; size_t v___x_1542_; uint8_t v___x_1543_; 
v___x_1541_ = ((size_t)0ULL);
v___x_1542_ = lean_usize_of_nat(v___x_1539_);
v___x_1543_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_WF_paramMatcher_spec__3(v_discrs_1532_, v___x_1541_, v___x_1542_);
if (v___x_1543_ == 0)
{
lean_del_object(v___x_1536_);
lean_dec_ref(v_remaining_1534_);
lean_dec_ref(v_alts_1533_);
lean_dec_ref(v_discrs_1532_);
lean_dec_ref(v_motive_1531_);
lean_dec_ref(v_params_1530_);
lean_dec_ref(v_matcherLevels_1529_);
lean_dec(v_matcherName_1528_);
lean_dec_ref(v_toMatcherInfo_1527_);
lean_del_object(v___x_1525_);
goto v___jp_1518_;
}
else
{
size_t v_sz_1544_; lean_object* v___x_1545_; size_t v_sz_1546_; lean_object* v___x_1547_; 
lean_del_object(v___x_1516_);
v_sz_1544_ = lean_array_size(v_discrs_1532_);
v___x_1545_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__4(v_sz_1544_, v___x_1541_, v_discrs_1532_);
v_sz_1546_ = lean_array_size(v_alts_1533_);
v___x_1547_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__5(v_sz_1546_, v___x_1541_, v_alts_1533_, v_a_1504_, v_a_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_, v_a_1510_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1563_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1550_ = v___x_1547_;
v_isShared_1551_ = v_isSharedCheck_1563_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1547_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1563_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1553_; 
if (v_isShared_1537_ == 0)
{
lean_ctor_set(v___x_1536_, 6, v_a_1548_);
lean_ctor_set(v___x_1536_, 5, v___x_1545_);
v___x_1553_ = v___x_1536_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_toMatcherInfo_1527_);
lean_ctor_set(v_reuseFailAlloc_1562_, 1, v_matcherName_1528_);
lean_ctor_set(v_reuseFailAlloc_1562_, 2, v_matcherLevels_1529_);
lean_ctor_set(v_reuseFailAlloc_1562_, 3, v_params_1530_);
lean_ctor_set(v_reuseFailAlloc_1562_, 4, v_motive_1531_);
lean_ctor_set(v_reuseFailAlloc_1562_, 5, v___x_1545_);
lean_ctor_set(v_reuseFailAlloc_1562_, 6, v_a_1548_);
lean_ctor_set(v_reuseFailAlloc_1562_, 7, v_remaining_1534_);
v___x_1553_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
lean_object* v___x_1554_; lean_object* v___x_1556_; 
v___x_1554_ = l_Lean_Meta_MatcherApp_toExpr(v___x_1553_);
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 0, v___x_1554_);
v___x_1556_ = v___x_1525_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v___x_1554_);
v___x_1556_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
lean_object* v___x_1557_; lean_object* v___x_1559_; 
v___x_1557_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1556_);
if (v_isShared_1551_ == 0)
{
lean_ctor_set(v___x_1550_, 0, v___x_1557_);
v___x_1559_ = v___x_1550_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v___x_1557_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
}
else
{
lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1571_; 
lean_dec_ref(v___x_1545_);
lean_del_object(v___x_1536_);
lean_dec_ref(v_remaining_1534_);
lean_dec_ref(v_motive_1531_);
lean_dec_ref(v_params_1530_);
lean_dec_ref(v_matcherLevels_1529_);
lean_dec(v_matcherName_1528_);
lean_dec_ref(v_toMatcherInfo_1527_);
lean_del_object(v___x_1525_);
v_a_1564_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1566_ = v___x_1547_;
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v___x_1547_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1564_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
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
lean_object* v___x_1574_; lean_object* v___x_1575_; 
lean_del_object(v___x_1516_);
lean_dec(v_a_1514_);
v___x_1574_ = ((lean_object*)(l_Lean_Elab_WF_paramProj___closed__0));
v___x_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1574_);
return v___x_1575_;
}
v___jp_1518_:
{
lean_object* v___x_1519_; lean_object* v___x_1521_; 
v___x_1519_ = ((lean_object*)(l_Lean_Elab_WF_paramProj___closed__0));
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v___x_1519_);
v___x_1521_ = v___x_1516_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v___x_1519_);
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
else
{
lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1584_; 
v_a_1577_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1584_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1584_ == 0)
{
v___x_1579_ = v___x_1513_;
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_dec(v___x_1513_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramMatcher___boxed(lean_object* v_e_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_){
_start:
{
lean_object* v_res_1594_; 
v_res_1594_ = l_Lean_Elab_WF_paramMatcher(v_e_1585_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_, v_a_1590_, v_a_1591_, v_a_1592_);
lean_dec(v_a_1592_);
lean_dec_ref(v_a_1591_);
lean_dec(v_a_1590_);
lean_dec_ref(v_a_1589_);
lean_dec(v_a_1588_);
lean_dec_ref(v_a_1587_);
lean_dec(v_a_1586_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__0(size_t v_sz_1595_, size_t v_i_1596_, lean_object* v_bs_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_){
_start:
{
lean_object* v___x_1606_; 
v___x_1606_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__0___redArg(v_sz_1595_, v_i_1596_, v_bs_1597_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__0___boxed(lean_object* v_sz_1607_, lean_object* v_i_1608_, lean_object* v_bs_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_){
_start:
{
size_t v_sz_boxed_1618_; size_t v_i_boxed_1619_; lean_object* v_res_1620_; 
v_sz_boxed_1618_ = lean_unbox_usize(v_sz_1607_);
lean_dec(v_sz_1607_);
v_i_boxed_1619_ = lean_unbox_usize(v_i_1608_);
lean_dec(v_i_1608_);
v_res_1620_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_paramMatcher_spec__0(v_sz_boxed_1618_, v_i_boxed_1619_, v_bs_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
lean_dec(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
lean_dec_ref(v___y_1613_);
lean_dec(v___y_1612_);
lean_dec_ref(v___y_1611_);
lean_dec(v___y_1610_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__4(lean_object* v_declName_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v___x_1630_; 
v___x_1630_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__4___redArg(v_declName_1621_, v___y_1628_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__4___boxed(lean_object* v_declName_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__4(v_declName_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
lean_dec(v___y_1632_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3(lean_object* v_00_u03b1_1641_, lean_object* v_constName_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v___x_1651_; 
v___x_1651_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3___redArg(v_constName_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_);
return v___x_1651_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1652_, lean_object* v_constName_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
lean_object* v_res_1662_; 
v_res_1662_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3(v_00_u03b1_1652_, v_constName_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec(v___y_1658_);
lean_dec_ref(v___y_1657_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec(v___y_1654_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9(lean_object* v_00_u03b1_1663_, lean_object* v_ref_1664_, lean_object* v_constName_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
lean_object* v___x_1674_; 
v___x_1674_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___redArg(v_ref_1664_, v_constName_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9___boxed(lean_object* v_00_u03b1_1675_, lean_object* v_ref_1676_, lean_object* v_constName_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9(v_00_u03b1_1675_, v_ref_1676_, v_constName_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v___y_1678_);
lean_dec(v_ref_1676_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11(lean_object* v_00_u03b1_1687_, lean_object* v_ref_1688_, lean_object* v_msg_1689_, lean_object* v_declHint_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_){
_start:
{
lean_object* v___x_1699_; 
v___x_1699_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11___redArg(v_ref_1688_, v_msg_1689_, v_declHint_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_);
return v___x_1699_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11___boxed(lean_object* v_00_u03b1_1700_, lean_object* v_ref_1701_, lean_object* v_msg_1702_, lean_object* v_declHint_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_){
_start:
{
lean_object* v_res_1712_; 
v_res_1712_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11(v_00_u03b1_1700_, v_ref_1701_, v_msg_1702_, v_declHint_1703_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_);
lean_dec(v___y_1710_);
lean_dec_ref(v___y_1709_);
lean_dec(v___y_1708_);
lean_dec_ref(v___y_1707_);
lean_dec(v___y_1706_);
lean_dec_ref(v___y_1705_);
lean_dec(v___y_1704_);
lean_dec(v_ref_1701_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13(lean_object* v_msg_1713_, lean_object* v_declHint_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_){
_start:
{
lean_object* v___x_1723_; 
v___x_1723_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___redArg(v_msg_1713_, v_declHint_1714_, v___y_1721_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13___boxed(lean_object* v_msg_1724_, lean_object* v_declHint_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_){
_start:
{
lean_object* v_res_1734_; 
v_res_1734_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__12_spec__13(v_msg_1724_, v_declHint_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_);
lean_dec(v___y_1732_);
lean_dec_ref(v___y_1731_);
lean_dec(v___y_1730_);
lean_dec_ref(v___y_1729_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
lean_dec(v___y_1726_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13(lean_object* v_00_u03b1_1735_, lean_object* v_ref_1736_, lean_object* v_msg_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
lean_object* v___x_1746_; 
v___x_1746_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13___redArg(v_ref_1736_, v_msg_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
return v___x_1746_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13___boxed(lean_object* v_00_u03b1_1747_, lean_object* v_ref_1748_, lean_object* v_msg_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_){
_start:
{
lean_object* v_res_1758_; 
v_res_1758_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13(v_00_u03b1_1747_, v_ref_1748_, v_msg_1749_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_);
lean_dec(v___y_1756_);
lean_dec_ref(v___y_1755_);
lean_dec(v___y_1754_);
lean_dec_ref(v___y_1753_);
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1751_);
lean_dec(v___y_1750_);
lean_dec(v_ref_1748_);
return v_res_1758_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15(lean_object* v_00_u03b1_1759_, lean_object* v_msg_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_){
_start:
{
lean_object* v___x_1769_; 
v___x_1769_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15___redArg(v_msg_1760_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_);
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15___boxed(lean_object* v_00_u03b1_1770_, lean_object* v_msg_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15(v_00_u03b1_1770_, v_msg_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
lean_dec(v___y_1776_);
lean_dec_ref(v___y_1775_);
lean_dec(v___y_1774_);
lean_dec_ref(v___y_1773_);
lean_dec(v___y_1772_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10_(){
_start:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1788_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10_));
v___x_1789_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10_));
v___x_1790_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_paramMatcher___boxed), 9, 0);
v___x_1791_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_1788_, v___x_1789_, v___x_1790_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10____boxed(lean_object* v_a_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10_();
return v_res_1793_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_anyLetValueIsWfParam(lean_object* v_e_1794_){
_start:
{
if (lean_obj_tag(v_e_1794_) == 8)
{
lean_object* v_value_1795_; lean_object* v_body_1796_; lean_object* v___x_1797_; 
v_value_1795_ = lean_ctor_get(v_e_1794_, 2);
v_body_1796_ = lean_ctor_get(v_e_1794_, 3);
v___x_1797_ = l_Lean_Elab_WF_isWfParam_x3f(v_value_1795_);
if (lean_obj_tag(v___x_1797_) == 0)
{
v_e_1794_ = v_body_1796_;
goto _start;
}
else
{
uint8_t v___x_1799_; 
lean_dec_ref_known(v___x_1797_, 1);
v___x_1799_ = 1;
return v___x_1799_;
}
}
else
{
uint8_t v___x_1800_; 
v___x_1800_ = 0;
return v___x_1800_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_anyLetValueIsWfParam___boxed(lean_object* v_e_1801_){
_start:
{
uint8_t v_res_1802_; lean_object* v_r_1803_; 
v_res_1802_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_anyLetValueIsWfParam(v_e_1801_);
lean_dec_ref(v_e_1801_);
v_r_1803_ = lean_box(v_res_1802_);
return v_r_1803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_numLetsWithValueNotIsWfParam(lean_object* v_e_1804_, lean_object* v_acc_1805_){
_start:
{
if (lean_obj_tag(v_e_1804_) == 8)
{
lean_object* v_value_1806_; lean_object* v_body_1807_; lean_object* v___x_1808_; 
v_value_1806_ = lean_ctor_get(v_e_1804_, 2);
v_body_1807_ = lean_ctor_get(v_e_1804_, 3);
v___x_1808_ = l_Lean_Elab_WF_isWfParam_x3f(v_value_1806_);
if (lean_obj_tag(v___x_1808_) == 0)
{
lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1809_ = lean_unsigned_to_nat(1u);
v___x_1810_ = lean_nat_add(v_acc_1805_, v___x_1809_);
lean_dec(v_acc_1805_);
v_e_1804_ = v_body_1807_;
v_acc_1805_ = v___x_1810_;
goto _start;
}
else
{
lean_dec_ref_known(v___x_1808_, 1);
return v_acc_1805_;
}
}
else
{
return v_acc_1805_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_numLetsWithValueNotIsWfParam___boxed(lean_object* v_e_1812_, lean_object* v_acc_1813_){
_start:
{
lean_object* v_res_1814_; 
v_res_1814_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_numLetsWithValueNotIsWfParam(v_e_1812_, v_acc_1813_);
lean_dec_ref(v_e_1812_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__0(lean_object* v_msg_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_){
_start:
{
lean_object* v___f_1822_; lean_object* v___x_1290__overap_1823_; lean_object* v___x_1824_; 
v___f_1822_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__0___closed__0));
v___x_1290__overap_1823_ = lean_panic_fn_borrowed(v___f_1822_, v_msg_1816_);
lean_inc(v___y_1820_);
lean_inc_ref(v___y_1819_);
lean_inc(v___y_1818_);
lean_inc_ref(v___y_1817_);
v___x_1824_ = lean_apply_5(v___x_1290__overap_1823_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, lean_box(0));
return v___x_1824_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__0___boxed(lean_object* v_msg_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_){
_start:
{
lean_object* v_res_1831_; 
v_res_1831_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__0(v_msg_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
lean_dec(v___y_1829_);
lean_dec_ref(v___y_1828_);
lean_dec(v___y_1827_);
lean_dec_ref(v___y_1826_);
return v_res_1831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg___lam__0(lean_object* v_k_1832_, lean_object* v_b_1833_, lean_object* v_c_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v___x_1840_; 
lean_inc(v___y_1838_);
lean_inc_ref(v___y_1837_);
lean_inc(v___y_1836_);
lean_inc_ref(v___y_1835_);
v___x_1840_ = lean_apply_7(v_k_1832_, v_b_1833_, v_c_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, lean_box(0));
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg___lam__0___boxed(lean_object* v_k_1841_, lean_object* v_b_1842_, lean_object* v_c_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg___lam__0(v_k_1841_, v_b_1842_, v_c_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_);
lean_dec(v___y_1847_);
lean_dec_ref(v___y_1846_);
lean_dec(v___y_1845_);
lean_dec_ref(v___y_1844_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg(lean_object* v_e_1850_, lean_object* v_maxFVars_x3f_1851_, lean_object* v_k_1852_, uint8_t v_cleanupAnnotations_1853_, uint8_t v_preserveNondepLet_1854_, uint8_t v_nondepLetOnly_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_){
_start:
{
lean_object* v___f_1861_; uint8_t v___x_1862_; uint8_t v___x_1863_; lean_object* v___x_1864_; 
v___f_1861_ = lean_alloc_closure((void*)(l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1861_, 0, v_k_1852_);
v___x_1862_ = 0;
v___x_1863_ = 1;
v___x_1864_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1850_, v___x_1862_, v___x_1863_, v_preserveNondepLet_1854_, v_nondepLetOnly_1855_, v_maxFVars_x3f_1851_, v___f_1861_, v_cleanupAnnotations_1853_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_);
if (lean_obj_tag(v___x_1864_) == 0)
{
lean_object* v_a_1865_; lean_object* v___x_1867_; uint8_t v_isShared_1868_; uint8_t v_isSharedCheck_1872_; 
v_a_1865_ = lean_ctor_get(v___x_1864_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1864_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1867_ = v___x_1864_;
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
else
{
lean_inc(v_a_1865_);
lean_dec(v___x_1864_);
v___x_1867_ = lean_box(0);
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
v_resetjp_1866_:
{
lean_object* v___x_1870_; 
if (v_isShared_1868_ == 0)
{
v___x_1870_ = v___x_1867_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_a_1865_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
else
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1880_; 
v_a_1873_ = lean_ctor_get(v___x_1864_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v___x_1864_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1875_ = v___x_1864_;
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1864_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1878_; 
if (v_isShared_1876_ == 0)
{
v___x_1878_ = v___x_1875_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_a_1873_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
return v___x_1878_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg___boxed(lean_object* v_e_1881_, lean_object* v_maxFVars_x3f_1882_, lean_object* v_k_1883_, lean_object* v_cleanupAnnotations_1884_, lean_object* v_preserveNondepLet_1885_, lean_object* v_nondepLetOnly_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1892_; uint8_t v_preserveNondepLet_boxed_1893_; uint8_t v_nondepLetOnly_boxed_1894_; lean_object* v_res_1895_; 
v_cleanupAnnotations_boxed_1892_ = lean_unbox(v_cleanupAnnotations_1884_);
v_preserveNondepLet_boxed_1893_ = lean_unbox(v_preserveNondepLet_1885_);
v_nondepLetOnly_boxed_1894_ = lean_unbox(v_nondepLetOnly_1886_);
v_res_1895_ = l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg(v_e_1881_, v_maxFVars_x3f_1882_, v_k_1883_, v_cleanupAnnotations_boxed_1892_, v_preserveNondepLet_boxed_1893_, v_nondepLetOnly_boxed_1894_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
lean_dec(v_maxFVars_x3f_1882_);
return v_res_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1(lean_object* v_00_u03b1_1896_, lean_object* v_e_1897_, lean_object* v_maxFVars_x3f_1898_, lean_object* v_k_1899_, uint8_t v_cleanupAnnotations_1900_, uint8_t v_preserveNondepLet_1901_, uint8_t v_nondepLetOnly_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_){
_start:
{
lean_object* v___x_1908_; 
v___x_1908_ = l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg(v_e_1897_, v_maxFVars_x3f_1898_, v_k_1899_, v_cleanupAnnotations_1900_, v_preserveNondepLet_1901_, v_nondepLetOnly_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___boxed(lean_object* v_00_u03b1_1909_, lean_object* v_e_1910_, lean_object* v_maxFVars_x3f_1911_, lean_object* v_k_1912_, lean_object* v_cleanupAnnotations_1913_, lean_object* v_preserveNondepLet_1914_, lean_object* v_nondepLetOnly_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1921_; uint8_t v_preserveNondepLet_boxed_1922_; uint8_t v_nondepLetOnly_boxed_1923_; lean_object* v_res_1924_; 
v_cleanupAnnotations_boxed_1921_ = lean_unbox(v_cleanupAnnotations_1913_);
v_preserveNondepLet_boxed_1922_ = lean_unbox(v_preserveNondepLet_1914_);
v_nondepLetOnly_boxed_1923_ = lean_unbox(v_nondepLetOnly_1915_);
v_res_1924_ = l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1(v_00_u03b1_1909_, v_e_1910_, v_maxFVars_x3f_1911_, v_k_1912_, v_cleanupAnnotations_boxed_1921_, v_preserveNondepLet_boxed_1922_, v_nondepLetOnly_boxed_1923_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
lean_dec(v_maxFVars_x3f_1911_);
return v_res_1924_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__0(void){
_start:
{
lean_object* v___x_1925_; lean_object* v___x_1926_; 
v___x_1925_ = lean_unsigned_to_nat(0u);
v___x_1926_ = l_Lean_Expr_bvar___override(v___x_1925_);
return v___x_1926_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__4(void){
_start:
{
lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1930_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__3));
v___x_1931_ = lean_unsigned_to_nat(6u);
v___x_1932_ = lean_unsigned_to_nat(158u);
v___x_1933_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__2));
v___x_1934_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__1));
v___x_1935_ = l_mkPanicMessageWithDecl(v___x_1934_, v___x_1933_, v___x_1932_, v___x_1931_, v___x_1930_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___lam__0___boxed(lean_object* v_xs_1936_, lean_object* v_b_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_){
_start:
{
lean_object* v_res_1943_; 
v_res_1943_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___lam__0(v_xs_1936_, v_b_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_);
lean_dec(v___y_1941_);
lean_dec_ref(v___y_1940_);
lean_dec(v___y_1939_);
lean_dec_ref(v___y_1938_);
lean_dec_ref(v_xs_1936_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet(lean_object* v_e_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_){
_start:
{
if (lean_obj_tag(v_e_1944_) == 8)
{
lean_object* v_declName_1950_; lean_object* v_type_1951_; lean_object* v_value_1952_; lean_object* v_body_1953_; uint8_t v_nondep_1954_; lean_object* v___x_1955_; 
v_declName_1950_ = lean_ctor_get(v_e_1944_, 0);
v_type_1951_ = lean_ctor_get(v_e_1944_, 1);
v_value_1952_ = lean_ctor_get(v_e_1944_, 2);
v_body_1953_ = lean_ctor_get(v_e_1944_, 3);
v_nondep_1954_ = lean_ctor_get_uint8(v_e_1944_, sizeof(void*)*4 + 8);
v___x_1955_ = l_Lean_Elab_WF_isWfParam_x3f(v_value_1952_);
if (lean_obj_tag(v___x_1955_) == 1)
{
lean_object* v_val_1956_; lean_object* v___x_1957_; 
v_val_1956_ = lean_ctor_get(v___x_1955_, 0);
lean_inc(v_val_1956_);
lean_dec_ref_known(v___x_1955_, 1);
lean_inc_ref(v_type_1951_);
v___x_1957_ = l_Lean_Meta_isProp(v_type_1951_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; uint8_t v___x_1959_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
lean_inc(v_a_1958_);
lean_dec_ref_known(v___x_1957_, 1);
v___x_1959_ = lean_unbox(v_a_1958_);
lean_dec(v_a_1958_);
if (v___x_1959_ == 0)
{
lean_object* v___x_1960_; 
lean_inc_ref(v_type_1951_);
v___x_1960_ = l_Lean_Meta_getLevel(v_type_1951_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
if (lean_obj_tag(v___x_1960_) == 0)
{
lean_object* v_a_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; size_t v___x_1969_; size_t v___x_1970_; uint8_t v___x_1971_; 
v_a_1961_ = lean_ctor_get(v___x_1960_, 0);
lean_inc(v_a_1961_);
lean_dec_ref_known(v___x_1960_, 1);
v___x_1962_ = ((lean_object*)(l_Lean_Elab_WF_isWfParam_x3f___closed__1));
v___x_1963_ = lean_box(0);
v___x_1964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1964_, 0, v_a_1961_);
lean_ctor_set(v___x_1964_, 1, v___x_1963_);
v___x_1965_ = l_Lean_Expr_const___override(v___x_1962_, v___x_1964_);
v___x_1966_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__0);
lean_inc_ref(v_type_1951_);
v___x_1967_ = l_Lean_mkAppB(v___x_1965_, v_type_1951_, v___x_1966_);
v___x_1968_ = lean_expr_instantiate1(v_body_1953_, v___x_1967_);
lean_dec_ref(v___x_1967_);
v___x_1969_ = lean_ptr_addr(v_type_1951_);
v___x_1970_ = lean_ptr_addr(v_type_1951_);
v___x_1971_ = lean_usize_dec_eq(v___x_1969_, v___x_1970_);
if (v___x_1971_ == 0)
{
lean_object* v___x_1972_; 
lean_inc_ref(v_type_1951_);
lean_inc(v_declName_1950_);
lean_dec_ref_known(v_e_1944_, 4);
v___x_1972_ = l_Lean_Expr_letE___override(v_declName_1950_, v_type_1951_, v_val_1956_, v___x_1968_, v_nondep_1954_);
v_e_1944_ = v___x_1972_;
goto _start;
}
else
{
size_t v___x_1974_; size_t v___x_1975_; uint8_t v___x_1976_; 
v___x_1974_ = lean_ptr_addr(v_value_1952_);
v___x_1975_ = lean_ptr_addr(v_val_1956_);
v___x_1976_ = lean_usize_dec_eq(v___x_1974_, v___x_1975_);
if (v___x_1976_ == 0)
{
lean_object* v___x_1977_; 
lean_inc_ref(v_type_1951_);
lean_inc(v_declName_1950_);
lean_dec_ref_known(v_e_1944_, 4);
v___x_1977_ = l_Lean_Expr_letE___override(v_declName_1950_, v_type_1951_, v_val_1956_, v___x_1968_, v_nondep_1954_);
v_e_1944_ = v___x_1977_;
goto _start;
}
else
{
size_t v___x_1979_; size_t v___x_1980_; uint8_t v___x_1981_; 
v___x_1979_ = lean_ptr_addr(v_body_1953_);
v___x_1980_ = lean_ptr_addr(v___x_1968_);
v___x_1981_ = lean_usize_dec_eq(v___x_1979_, v___x_1980_);
if (v___x_1981_ == 0)
{
lean_object* v___x_1982_; 
lean_inc_ref(v_type_1951_);
lean_inc(v_declName_1950_);
lean_dec_ref_known(v_e_1944_, 4);
v___x_1982_ = l_Lean_Expr_letE___override(v_declName_1950_, v_type_1951_, v_val_1956_, v___x_1968_, v_nondep_1954_);
v_e_1944_ = v___x_1982_;
goto _start;
}
else
{
lean_dec_ref(v___x_1968_);
lean_dec(v_val_1956_);
goto _start;
}
}
}
}
else
{
lean_object* v_a_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1992_; 
lean_dec(v_val_1956_);
lean_dec_ref_known(v_e_1944_, 4);
v_a_1985_ = lean_ctor_get(v___x_1960_, 0);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1960_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1987_ = v___x_1960_;
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_a_1985_);
lean_dec(v___x_1960_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1990_; 
if (v_isShared_1988_ == 0)
{
v___x_1990_ = v___x_1987_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_a_1985_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
}
else
{
size_t v___x_1993_; size_t v___x_1994_; uint8_t v___x_1995_; 
v___x_1993_ = lean_ptr_addr(v_type_1951_);
v___x_1994_ = lean_ptr_addr(v_type_1951_);
v___x_1995_ = lean_usize_dec_eq(v___x_1993_, v___x_1994_);
if (v___x_1995_ == 0)
{
lean_object* v___x_1996_; 
lean_inc_ref(v_body_1953_);
lean_inc_ref(v_type_1951_);
lean_inc(v_declName_1950_);
lean_dec_ref_known(v_e_1944_, 4);
v___x_1996_ = l_Lean_Expr_letE___override(v_declName_1950_, v_type_1951_, v_val_1956_, v_body_1953_, v_nondep_1954_);
v_e_1944_ = v___x_1996_;
goto _start;
}
else
{
size_t v___x_1998_; size_t v___x_1999_; uint8_t v___x_2000_; 
v___x_1998_ = lean_ptr_addr(v_value_1952_);
v___x_1999_ = lean_ptr_addr(v_val_1956_);
v___x_2000_ = lean_usize_dec_eq(v___x_1998_, v___x_1999_);
if (v___x_2000_ == 0)
{
lean_object* v___x_2001_; 
lean_inc_ref(v_body_1953_);
lean_inc_ref(v_type_1951_);
lean_inc(v_declName_1950_);
lean_dec_ref_known(v_e_1944_, 4);
v___x_2001_ = l_Lean_Expr_letE___override(v_declName_1950_, v_type_1951_, v_val_1956_, v_body_1953_, v_nondep_1954_);
v_e_1944_ = v___x_2001_;
goto _start;
}
else
{
size_t v___x_2003_; size_t v___x_2004_; uint8_t v___x_2005_; 
v___x_2003_ = lean_ptr_addr(v_body_1953_);
v___x_2004_ = lean_ptr_addr(v_body_1953_);
v___x_2005_ = lean_usize_dec_eq(v___x_2003_, v___x_2004_);
if (v___x_2005_ == 0)
{
lean_object* v___x_2006_; 
lean_inc_ref(v_body_1953_);
lean_inc_ref(v_type_1951_);
lean_inc(v_declName_1950_);
lean_dec_ref_known(v_e_1944_, 4);
v___x_2006_ = l_Lean_Expr_letE___override(v_declName_1950_, v_type_1951_, v_val_1956_, v_body_1953_, v_nondep_1954_);
v_e_1944_ = v___x_2006_;
goto _start;
}
else
{
lean_dec(v_val_1956_);
goto _start;
}
}
}
}
}
else
{
lean_object* v_a_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2016_; 
lean_dec(v_val_1956_);
lean_dec_ref_known(v_e_1944_, 4);
v_a_2009_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_2011_ = v___x_1957_;
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_a_2009_);
lean_dec(v___x_1957_);
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
else
{
lean_object* v___x_2017_; lean_object* v_num_2018_; uint8_t v___x_2019_; 
lean_dec(v___x_1955_);
v___x_2017_ = lean_unsigned_to_nat(0u);
v_num_2018_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_numLetsWithValueNotIsWfParam(v_e_1944_, v___x_2017_);
v___x_2019_ = lean_nat_dec_lt(v___x_2017_, v_num_2018_);
if (v___x_2019_ == 0)
{
lean_object* v___x_2020_; lean_object* v___x_2021_; 
lean_dec(v_num_2018_);
lean_dec_ref_known(v_e_1944_, 4);
v___x_2020_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___closed__4);
v___x_2021_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__0(v___x_2020_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
return v___x_2021_;
}
else
{
lean_object* v___f_2022_; lean_object* v___x_2023_; uint8_t v___x_2024_; lean_object* v___x_2025_; 
v___f_2022_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___lam__0___boxed), 7, 0);
v___x_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2023_, 0, v_num_2018_);
v___x_2024_ = 0;
v___x_2025_ = l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg(v_e_1944_, v___x_2023_, v___f_2022_, v___x_2024_, v___x_2019_, v___x_2024_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
lean_dec_ref_known(v___x_2023_, 1);
return v___x_2025_;
}
}
}
else
{
lean_object* v___x_2026_; 
v___x_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2026_, 0, v_e_1944_);
return v___x_2026_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___lam__0(lean_object* v_xs_2027_, lean_object* v_b_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_){
_start:
{
lean_object* v___x_2034_; 
v___x_2034_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet(v_b_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_object* v_a_2035_; uint8_t v___x_2036_; uint8_t v___x_2037_; lean_object* v___x_2038_; 
v_a_2035_ = lean_ctor_get(v___x_2034_, 0);
lean_inc(v_a_2035_);
lean_dec_ref_known(v___x_2034_, 1);
v___x_2036_ = 0;
v___x_2037_ = 1;
v___x_2038_ = l_Lean_Meta_mkLetFVars(v_xs_2027_, v_a_2035_, v___x_2036_, v___x_2036_, v___x_2037_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
return v___x_2038_;
}
else
{
return v___x_2034_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet___boxed(lean_object* v_e_2039_, lean_object* v_a_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_, lean_object* v_a_2044_){
_start:
{
lean_object* v_res_2045_; 
v_res_2045_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet(v_e_2039_, v_a_2040_, v_a_2041_, v_a_2042_, v_a_2043_);
lean_dec(v_a_2043_);
lean_dec_ref(v_a_2042_);
lean_dec(v_a_2041_);
lean_dec_ref(v_a_2040_);
return v_res_2045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramLet___redArg(lean_object* v_e_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_, lean_object* v_a_2050_){
_start:
{
uint8_t v___x_2072_; 
v___x_2072_ = l_Lean_Expr_isLet(v_e_2046_);
if (v___x_2072_ == 0)
{
uint8_t v___x_2073_; 
v___x_2073_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_anyLetValueIsWfParam(v_e_2046_);
if (v___x_2073_ == 0)
{
lean_object* v___x_2074_; lean_object* v___x_2075_; 
lean_dec_ref(v_e_2046_);
v___x_2074_ = ((lean_object*)(l_Lean_Elab_WF_paramProj___closed__0));
v___x_2075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2075_, 0, v___x_2074_);
return v___x_2075_;
}
else
{
goto v___jp_2052_;
}
}
else
{
goto v___jp_2052_;
}
v___jp_2052_:
{
lean_object* v___x_2053_; 
v___x_2053_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet(v_e_2046_, v_a_2047_, v_a_2048_, v_a_2049_, v_a_2050_);
if (lean_obj_tag(v___x_2053_) == 0)
{
lean_object* v_a_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2063_; 
v_a_2054_ = lean_ctor_get(v___x_2053_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2056_ = v___x_2053_;
v_isShared_2057_ = v_isSharedCheck_2063_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_a_2054_);
lean_dec(v___x_2053_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2063_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2061_; 
v___x_2058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2058_, 0, v_a_2054_);
v___x_2059_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2059_, 0, v___x_2058_);
if (v_isShared_2057_ == 0)
{
lean_ctor_set(v___x_2056_, 0, v___x_2059_);
v___x_2061_ = v___x_2056_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v___x_2059_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
else
{
lean_object* v_a_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2071_; 
v_a_2064_ = lean_ctor_get(v___x_2053_, 0);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2066_ = v___x_2053_;
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_a_2064_);
lean_dec(v___x_2053_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2069_; 
if (v_isShared_2067_ == 0)
{
v___x_2069_ = v___x_2066_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_a_2064_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramLet___redArg___boxed(lean_object* v_e_2076_, lean_object* v_a_2077_, lean_object* v_a_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_){
_start:
{
lean_object* v_res_2082_; 
v_res_2082_ = l_Lean_Elab_WF_paramLet___redArg(v_e_2076_, v_a_2077_, v_a_2078_, v_a_2079_, v_a_2080_);
lean_dec(v_a_2080_);
lean_dec_ref(v_a_2079_);
lean_dec(v_a_2078_);
lean_dec_ref(v_a_2077_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramLet(lean_object* v_e_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_){
_start:
{
lean_object* v___x_2092_; 
v___x_2092_ = l_Lean_Elab_WF_paramLet___redArg(v_e_2083_, v_a_2087_, v_a_2088_, v_a_2089_, v_a_2090_);
return v___x_2092_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_paramLet___boxed(lean_object* v_e_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_){
_start:
{
lean_object* v_res_2102_; 
v_res_2102_ = l_Lean_Elab_WF_paramLet(v_e_2093_, v_a_2094_, v_a_2095_, v_a_2096_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_);
lean_dec(v_a_2100_);
lean_dec_ref(v_a_2099_);
lean_dec(v_a_2098_);
lean_dec_ref(v_a_2097_);
lean_dec(v_a_2096_);
lean_dec_ref(v_a_2095_);
lean_dec(v_a_2094_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10_(){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2110_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10_));
v___x_2111_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10_));
v___x_2112_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_paramLet___boxed), 9, 0);
v___x_2113_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_2110_, v___x_2111_, v___x_2112_);
return v___x_2113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10____boxed(lean_object* v_a_2114_){
_start:
{
lean_object* v_res_2115_; 
v_res_2115_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10_();
return v_res_2115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__0___redArg(lean_object* v_lctx_2116_, lean_object* v_x_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_){
_start:
{
lean_object* v_keyedConfig_2123_; uint8_t v_trackZetaDelta_2124_; lean_object* v_zetaDeltaSet_2125_; lean_object* v_localInstances_2126_; lean_object* v_defEqCtx_x3f_2127_; lean_object* v_synthPendingDepth_2128_; lean_object* v_customCanUnfoldPredicate_x3f_2129_; uint8_t v_univApprox_2130_; uint8_t v_inTypeClassResolution_2131_; uint8_t v_cacheInferType_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v_keyedConfig_2123_ = lean_ctor_get(v___y_2118_, 0);
v_trackZetaDelta_2124_ = lean_ctor_get_uint8(v___y_2118_, sizeof(void*)*7);
v_zetaDeltaSet_2125_ = lean_ctor_get(v___y_2118_, 1);
v_localInstances_2126_ = lean_ctor_get(v___y_2118_, 3);
v_defEqCtx_x3f_2127_ = lean_ctor_get(v___y_2118_, 4);
v_synthPendingDepth_2128_ = lean_ctor_get(v___y_2118_, 5);
v_customCanUnfoldPredicate_x3f_2129_ = lean_ctor_get(v___y_2118_, 6);
v_univApprox_2130_ = lean_ctor_get_uint8(v___y_2118_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2131_ = lean_ctor_get_uint8(v___y_2118_, sizeof(void*)*7 + 2);
v_cacheInferType_2132_ = lean_ctor_get_uint8(v___y_2118_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_2129_);
lean_inc(v_synthPendingDepth_2128_);
lean_inc(v_defEqCtx_x3f_2127_);
lean_inc_ref(v_localInstances_2126_);
lean_inc(v_zetaDeltaSet_2125_);
lean_inc_ref(v_keyedConfig_2123_);
v___x_2133_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2133_, 0, v_keyedConfig_2123_);
lean_ctor_set(v___x_2133_, 1, v_zetaDeltaSet_2125_);
lean_ctor_set(v___x_2133_, 2, v_lctx_2116_);
lean_ctor_set(v___x_2133_, 3, v_localInstances_2126_);
lean_ctor_set(v___x_2133_, 4, v_defEqCtx_x3f_2127_);
lean_ctor_set(v___x_2133_, 5, v_synthPendingDepth_2128_);
lean_ctor_set(v___x_2133_, 6, v_customCanUnfoldPredicate_x3f_2129_);
lean_ctor_set_uint8(v___x_2133_, sizeof(void*)*7, v_trackZetaDelta_2124_);
lean_ctor_set_uint8(v___x_2133_, sizeof(void*)*7 + 1, v_univApprox_2130_);
lean_ctor_set_uint8(v___x_2133_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2131_);
lean_ctor_set_uint8(v___x_2133_, sizeof(void*)*7 + 3, v_cacheInferType_2132_);
lean_inc(v___y_2121_);
lean_inc_ref(v___y_2120_);
lean_inc(v___y_2119_);
v___x_2134_ = lean_apply_5(v_x_2117_, v___x_2133_, v___y_2119_, v___y_2120_, v___y_2121_, lean_box(0));
return v___x_2134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__0___redArg___boxed(lean_object* v_lctx_2135_, lean_object* v_x_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_){
_start:
{
lean_object* v_res_2142_; 
v_res_2142_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__0___redArg(v_lctx_2135_, v_x_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_);
lean_dec(v___y_2140_);
lean_dec_ref(v___y_2139_);
lean_dec(v___y_2138_);
lean_dec_ref(v___y_2137_);
return v_res_2142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__0(lean_object* v_00_u03b1_2143_, lean_object* v_lctx_2144_, lean_object* v_x_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_){
_start:
{
lean_object* v___x_2151_; 
v___x_2151_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__0___redArg(v_lctx_2144_, v_x_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__0___boxed(lean_object* v_00_u03b1_2152_, lean_object* v_lctx_2153_, lean_object* v_x_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_){
_start:
{
lean_object* v_res_2160_; 
v_res_2160_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__0(v_00_u03b1_2152_, v_lctx_2153_, v_x_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_);
lean_dec(v___y_2158_);
lean_dec_ref(v___y_2157_);
lean_dec(v___y_2156_);
lean_dec_ref(v___y_2155_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__2___redArg(lean_object* v_e_2161_, lean_object* v_k_2162_, uint8_t v_cleanupAnnotations_2163_, uint8_t v_preserveNondepLet_2164_, uint8_t v_nondepLetOnly_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_){
_start:
{
lean_object* v___f_2171_; uint8_t v___x_2172_; uint8_t v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___f_2171_ = lean_alloc_closure((void*)(l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2171_, 0, v_k_2162_);
v___x_2172_ = 0;
v___x_2173_ = 1;
v___x_2174_ = lean_box(0);
v___x_2175_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2161_, v___x_2172_, v___x_2173_, v_preserveNondepLet_2164_, v_nondepLetOnly_2165_, v___x_2174_, v___f_2171_, v_cleanupAnnotations_2163_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2183_; 
v_a_2176_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2178_ = v___x_2175_;
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2175_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2179_ == 0)
{
v___x_2181_ = v___x_2178_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_a_2176_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
v_a_2184_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2175_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2175_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__2___redArg___boxed(lean_object* v_e_2192_, lean_object* v_k_2193_, lean_object* v_cleanupAnnotations_2194_, lean_object* v_preserveNondepLet_2195_, lean_object* v_nondepLetOnly_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2202_; uint8_t v_preserveNondepLet_boxed_2203_; uint8_t v_nondepLetOnly_boxed_2204_; lean_object* v_res_2205_; 
v_cleanupAnnotations_boxed_2202_ = lean_unbox(v_cleanupAnnotations_2194_);
v_preserveNondepLet_boxed_2203_ = lean_unbox(v_preserveNondepLet_2195_);
v_nondepLetOnly_boxed_2204_ = lean_unbox(v_nondepLetOnly_2196_);
v_res_2205_ = l_Lean_Meta_letTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__2___redArg(v_e_2192_, v_k_2193_, v_cleanupAnnotations_boxed_2202_, v_preserveNondepLet_boxed_2203_, v_nondepLetOnly_boxed_2204_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_);
lean_dec(v___y_2200_);
lean_dec_ref(v___y_2199_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2197_);
return v_res_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__2(lean_object* v_00_u03b1_2206_, lean_object* v_e_2207_, lean_object* v_k_2208_, uint8_t v_cleanupAnnotations_2209_, uint8_t v_preserveNondepLet_2210_, uint8_t v_nondepLetOnly_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
lean_object* v___x_2217_; 
v___x_2217_ = l_Lean_Meta_letTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__2___redArg(v_e_2207_, v_k_2208_, v_cleanupAnnotations_2209_, v_preserveNondepLet_2210_, v_nondepLetOnly_2211_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__2___boxed(lean_object* v_00_u03b1_2218_, lean_object* v_e_2219_, lean_object* v_k_2220_, lean_object* v_cleanupAnnotations_2221_, lean_object* v_preserveNondepLet_2222_, lean_object* v_nondepLetOnly_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2229_; uint8_t v_preserveNondepLet_boxed_2230_; uint8_t v_nondepLetOnly_boxed_2231_; lean_object* v_res_2232_; 
v_cleanupAnnotations_boxed_2229_ = lean_unbox(v_cleanupAnnotations_2221_);
v_preserveNondepLet_boxed_2230_ = lean_unbox(v_preserveNondepLet_2222_);
v_nondepLetOnly_boxed_2231_ = lean_unbox(v_nondepLetOnly_2223_);
v_res_2232_ = l_Lean_Meta_letTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__2(v_00_u03b1_2218_, v_e_2219_, v_k_2220_, v_cleanupAnnotations_boxed_2229_, v_preserveNondepLet_boxed_2230_, v_nondepLetOnly_boxed_2231_, v___y_2224_, v___y_2225_, v___y_2226_, v___y_2227_);
lean_dec(v___y_2227_);
lean_dec_ref(v___y_2226_);
lean_dec(v___y_2225_);
lean_dec_ref(v___y_2224_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__0(lean_object* v_e_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_){
_start:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2239_, 0, v_e_2233_);
v___x_2240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2240_, 0, v___x_2239_);
return v___x_2240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__0___boxed(lean_object* v_e_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_){
_start:
{
lean_object* v_res_2247_; 
v_res_2247_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__0(v_e_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_);
lean_dec(v___y_2245_);
lean_dec_ref(v___y_2244_);
lean_dec(v___y_2243_);
lean_dec_ref(v___y_2242_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__1(lean_object* v_as_2248_, size_t v_i_2249_, size_t v_stop_2250_, lean_object* v_b_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
uint8_t v___x_2257_; 
v___x_2257_ = lean_usize_dec_eq(v_i_2249_, v_stop_2250_);
if (v___x_2257_ == 0)
{
lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; 
v___x_2258_ = lean_array_uget_borrowed(v_as_2248_, v_i_2249_);
v___x_2259_ = l_Lean_Expr_fvarId_x21(v___x_2258_);
v___x_2260_ = l_Lean_FVarId_getDecl___redArg(v___x_2259_, v___y_2252_, v___y_2254_, v___y_2255_);
if (lean_obj_tag(v___x_2260_) == 0)
{
lean_object* v_a_2261_; uint8_t v_a_2263_; uint8_t v___x_2269_; 
v_a_2261_ = lean_ctor_get(v___x_2260_, 0);
lean_inc(v_a_2261_);
lean_dec_ref_known(v___x_2260_, 1);
v___x_2269_ = l_Lean_LocalDecl_isNondep(v_a_2261_);
if (v___x_2269_ == 0)
{
v_a_2263_ = v___x_2269_;
goto v___jp_2262_;
}
else
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2270_ = l_Lean_LocalDecl_type(v_a_2261_);
v___x_2271_ = l_Lean_Meta_isProp(v___x_2270_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; uint8_t v___x_2273_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2271_, 1);
v___x_2273_ = lean_unbox(v_a_2272_);
lean_dec(v_a_2272_);
v_a_2263_ = v___x_2273_;
goto v___jp_2262_;
}
else
{
lean_object* v_a_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2281_; 
lean_dec(v_a_2261_);
lean_dec_ref(v_b_2251_);
v_a_2274_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2281_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2276_ = v___x_2271_;
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_a_2274_);
lean_dec(v___x_2271_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2279_; 
if (v_isShared_2277_ == 0)
{
v___x_2279_ = v___x_2276_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_a_2274_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
return v___x_2279_;
}
}
}
}
v___jp_2262_:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; size_t v___x_2266_; size_t v___x_2267_; 
v___x_2264_ = l_Lean_LocalDecl_setNondep(v_a_2261_, v_a_2263_);
v___x_2265_ = l_Lean_LocalContext_addDecl(v_b_2251_, v___x_2264_);
v___x_2266_ = ((size_t)1ULL);
v___x_2267_ = lean_usize_add(v_i_2249_, v___x_2266_);
v_i_2249_ = v___x_2267_;
v_b_2251_ = v___x_2265_;
goto _start;
}
}
else
{
lean_object* v_a_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2289_; 
lean_dec_ref(v_b_2251_);
v_a_2282_ = lean_ctor_get(v___x_2260_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2260_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2284_ = v___x_2260_;
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_a_2282_);
lean_dec(v___x_2260_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
lean_object* v___x_2287_; 
if (v_isShared_2285_ == 0)
{
v___x_2287_ = v___x_2284_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_a_2282_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
}
}
else
{
lean_object* v___x_2290_; 
v___x_2290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2290_, 0, v_b_2251_);
return v___x_2290_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__1___boxed(lean_object* v_as_2291_, lean_object* v_i_2292_, lean_object* v_stop_2293_, lean_object* v_b_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
size_t v_i_boxed_2300_; size_t v_stop_boxed_2301_; lean_object* v_res_2302_; 
v_i_boxed_2300_ = lean_unbox_usize(v_i_2292_);
lean_dec(v_i_2292_);
v_stop_boxed_2301_ = lean_unbox_usize(v_stop_2293_);
lean_dec(v_stop_2293_);
v_res_2302_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__1(v_as_2291_, v_i_boxed_2300_, v_stop_boxed_2301_, v_b_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
lean_dec(v___y_2296_);
lean_dec_ref(v___y_2295_);
lean_dec_ref(v_as_2291_);
return v_res_2302_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__1(uint8_t v_a_2303_, lean_object* v_lctx_2304_, lean_object* v_xs_2305_, lean_object* v_b_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_){
_start:
{
lean_object* v_a_2313_; lean_object* v___x_2320_; lean_object* v___x_2321_; uint8_t v___x_2322_; 
v___x_2320_ = lean_unsigned_to_nat(0u);
v___x_2321_ = lean_array_get_size(v_xs_2305_);
v___x_2322_ = lean_nat_dec_lt(v___x_2320_, v___x_2321_);
if (v___x_2322_ == 0)
{
v_a_2313_ = v_lctx_2304_;
goto v___jp_2312_;
}
else
{
size_t v___x_2323_; size_t v___x_2324_; lean_object* v___x_2325_; 
v___x_2323_ = ((size_t)0ULL);
v___x_2324_ = lean_usize_of_nat(v___x_2321_);
v___x_2325_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__1(v_xs_2305_, v___x_2323_, v___x_2324_, v_lctx_2304_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_);
if (lean_obj_tag(v___x_2325_) == 0)
{
lean_object* v_a_2326_; 
v_a_2326_ = lean_ctor_get(v___x_2325_, 0);
lean_inc(v_a_2326_);
lean_dec_ref_known(v___x_2325_, 1);
v_a_2313_ = v_a_2326_;
goto v___jp_2312_;
}
else
{
lean_object* v_a_2327_; lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2334_; 
lean_dec_ref(v_b_2306_);
lean_dec_ref(v_xs_2305_);
v_a_2327_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2334_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2334_ == 0)
{
v___x_2329_ = v___x_2325_;
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
else
{
lean_inc(v_a_2327_);
lean_dec(v___x_2325_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___x_2332_; 
if (v_isShared_2330_ == 0)
{
v___x_2332_ = v___x_2329_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v_a_2327_);
v___x_2332_ = v_reuseFailAlloc_2333_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
return v___x_2332_;
}
}
}
}
v___jp_2312_:
{
uint8_t v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2314_ = 1;
v___x_2315_ = lean_box(v_a_2303_);
v___x_2316_ = lean_box(v_a_2303_);
v___x_2317_ = lean_box(v___x_2314_);
v___x_2318_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLetFVars___boxed), 10, 5);
lean_closure_set(v___x_2318_, 0, v_xs_2305_);
lean_closure_set(v___x_2318_, 1, v_b_2306_);
lean_closure_set(v___x_2318_, 2, v___x_2315_);
lean_closure_set(v___x_2318_, 3, v___x_2316_);
lean_closure_set(v___x_2318_, 4, v___x_2317_);
v___x_2319_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__0___redArg(v_a_2313_, v___x_2318_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_);
return v___x_2319_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__1___boxed(lean_object* v_a_2335_, lean_object* v_lctx_2336_, lean_object* v_xs_2337_, lean_object* v_b_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_){
_start:
{
uint8_t v_a_10937__boxed_2344_; lean_object* v_res_2345_; 
v_a_10937__boxed_2344_ = lean_unbox(v_a_2335_);
v_res_2345_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__1(v_a_10937__boxed_2344_, v_lctx_2336_, v_xs_2337_, v_b_2338_, v___y_2339_, v___y_2340_, v___y_2341_, v___y_2342_);
lean_dec(v___y_2342_);
lean_dec_ref(v___y_2341_);
lean_dec(v___y_2340_);
lean_dec_ref(v___y_2339_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__2(lean_object* v_e_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_){
_start:
{
lean_object* v___x_2352_; 
lean_inc_ref(v_e_2346_);
v___x_2352_ = l_Lean_Meta_isProof(v_e_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_);
if (lean_obj_tag(v___x_2352_) == 0)
{
lean_object* v_a_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2390_; 
v_a_2353_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2355_ = v___x_2352_;
v_isShared_2356_ = v_isSharedCheck_2390_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_a_2353_);
lean_dec(v___x_2352_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2390_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
uint8_t v___x_2357_; 
v___x_2357_ = lean_unbox(v_a_2353_);
if (v___x_2357_ == 0)
{
uint8_t v___x_2358_; 
v___x_2358_ = l_Lean_Expr_isLet(v_e_2346_);
if (v___x_2358_ == 0)
{
lean_object* v___x_2359_; lean_object* v___x_2361_; 
lean_dec(v_a_2353_);
lean_dec_ref(v_e_2346_);
v___x_2359_ = ((lean_object*)(l_Lean_Elab_WF_paramProj___closed__0));
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 0, v___x_2359_);
v___x_2361_ = v___x_2355_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v___x_2359_);
v___x_2361_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
return v___x_2361_;
}
}
else
{
lean_object* v_lctx_2363_; lean_object* v___f_2364_; uint8_t v___x_2365_; uint8_t v___x_2366_; lean_object* v___x_2367_; 
lean_del_object(v___x_2355_);
v_lctx_2363_ = lean_ctor_get(v___y_2347_, 2);
lean_inc_ref(v_lctx_2363_);
lean_inc(v_a_2353_);
v___f_2364_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__1___boxed), 9, 2);
lean_closure_set(v___f_2364_, 0, v_a_2353_);
lean_closure_set(v___f_2364_, 1, v_lctx_2363_);
v___x_2365_ = lean_unbox(v_a_2353_);
v___x_2366_ = lean_unbox(v_a_2353_);
lean_dec(v_a_2353_);
v___x_2367_ = l_Lean_Meta_letTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__2___redArg(v_e_2346_, v___f_2364_, v___x_2365_, v___x_2358_, v___x_2366_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_);
if (lean_obj_tag(v___x_2367_) == 0)
{
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2377_; 
v_a_2368_ = lean_ctor_get(v___x_2367_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2367_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2370_ = v___x_2367_;
v_isShared_2371_ = v_isSharedCheck_2377_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v___x_2367_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2377_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2375_; 
v___x_2372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2372_, 0, v_a_2368_);
v___x_2373_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2372_);
if (v_isShared_2371_ == 0)
{
lean_ctor_set(v___x_2370_, 0, v___x_2373_);
v___x_2375_ = v___x_2370_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v___x_2373_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2385_; 
v_a_2378_ = lean_ctor_get(v___x_2367_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2367_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2380_ = v___x_2367_;
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___x_2367_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___x_2383_; 
if (v_isShared_2381_ == 0)
{
v___x_2383_ = v___x_2380_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v_a_2378_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
}
}
else
{
lean_object* v___x_2386_; lean_object* v___x_2388_; 
lean_dec(v_a_2353_);
v___x_2386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2386_, 0, v_e_2346_);
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 0, v___x_2386_);
v___x_2388_ = v___x_2355_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v___x_2386_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
return v___x_2388_;
}
}
}
}
else
{
lean_object* v_a_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2398_; 
lean_dec_ref(v_e_2346_);
v_a_2391_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2398_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2398_ == 0)
{
v___x_2393_ = v___x_2352_;
v_isShared_2394_ = v_isSharedCheck_2398_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_a_2391_);
lean_dec(v___x_2352_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2398_;
goto v_resetjp_2392_;
}
v_resetjp_2392_:
{
lean_object* v___x_2396_; 
if (v_isShared_2394_ == 0)
{
v___x_2396_ = v___x_2393_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_a_2391_);
v___x_2396_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
return v___x_2396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__2___boxed(lean_object* v_e_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_){
_start:
{
lean_object* v_res_2405_; 
v_res_2405_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___lam__2(v_e_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_);
lean_dec(v___y_2403_);
lean_dec_ref(v___y_2402_);
lean_dec(v___y_2401_);
lean_dec_ref(v___y_2400_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___lam__0(lean_object* v_00_u03b1_2406_, lean_object* v_x_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; 
v___x_2413_ = lean_apply_1(v_x_2407_, lean_box(0));
v___x_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2413_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___lam__0___boxed(lean_object* v_00_u03b1_2415_, lean_object* v_x_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_){
_start:
{
lean_object* v_res_2422_; 
v_res_2422_ = l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___lam__0(v_00_u03b1_2415_, v_x_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_);
lean_dec(v___y_2420_);
lean_dec_ref(v___y_2419_);
lean_dec(v___y_2418_);
lean_dec_ref(v___y_2417_);
return v_res_2422_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__3(void){
_start:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2428_ = l_Lean_maxRecDepthErrorMessage;
v___x_2429_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2429_, 0, v___x_2428_);
return v___x_2429_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__4(void){
_start:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; 
v___x_2430_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__3);
v___x_2431_ = l_Lean_MessageData_ofFormat(v___x_2430_);
return v___x_2431_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__5(void){
_start:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2432_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__4);
v___x_2433_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__2));
v___x_2434_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2434_, 0, v___x_2433_);
lean_ctor_set(v___x_2434_, 1, v___x_2432_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg(lean_object* v_ref_2435_){
_start:
{
lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2437_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__5);
v___x_2438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2438_, 0, v_ref_2435_);
lean_ctor_set(v___x_2438_, 1, v___x_2437_);
v___x_2439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2438_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___boxed(lean_object* v_ref_2440_, lean_object* v___y_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg(v_ref_2440_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12___redArg(lean_object* v_x_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_){
_start:
{
lean_object* v___y_2451_; lean_object* v_toCold_2460_; lean_object* v_currRecDepth_2461_; lean_object* v_ref_2462_; uint16_t v_optionFlags_2463_; uint8_t v_suppressElabErrors_2464_; uint8_t v_checkDeprecated_2465_; uint8_t v_isRecordingDeps_2466_; lean_object* v_maxRecDepth_2472_; lean_object* v___x_2473_; uint8_t v___x_2474_; 
v_toCold_2460_ = lean_ctor_get(v___y_2447_, 0);
v_currRecDepth_2461_ = lean_ctor_get(v___y_2447_, 1);
v_ref_2462_ = lean_ctor_get(v___y_2447_, 2);
v_optionFlags_2463_ = lean_ctor_get_uint16(v___y_2447_, sizeof(void*)*3);
v_suppressElabErrors_2464_ = lean_ctor_get_uint8(v___y_2447_, sizeof(void*)*3 + 2);
v_checkDeprecated_2465_ = lean_ctor_get_uint8(v___y_2447_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2466_ = lean_ctor_get_uint8(v___y_2447_, sizeof(void*)*3 + 4);
v_maxRecDepth_2472_ = lean_ctor_get(v_toCold_2460_, 3);
v___x_2473_ = lean_unsigned_to_nat(0u);
v___x_2474_ = lean_nat_dec_eq(v_maxRecDepth_2472_, v___x_2473_);
if (v___x_2474_ == 0)
{
uint8_t v___x_2475_; 
v___x_2475_ = lean_nat_dec_eq(v_currRecDepth_2461_, v_maxRecDepth_2472_);
if (v___x_2475_ == 0)
{
goto v___jp_2467_;
}
else
{
lean_object* v___x_2476_; 
lean_dec_ref(v_x_2443_);
lean_inc(v_ref_2462_);
v___x_2476_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg(v_ref_2462_);
v___y_2451_ = v___x_2476_;
goto v___jp_2450_;
}
}
else
{
goto v___jp_2467_;
}
v___jp_2450_:
{
if (lean_obj_tag(v___y_2451_) == 0)
{
return v___y_2451_;
}
else
{
lean_object* v_a_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2459_; 
v_a_2452_ = lean_ctor_get(v___y_2451_, 0);
v_isSharedCheck_2459_ = !lean_is_exclusive(v___y_2451_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2454_ = v___y_2451_;
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_a_2452_);
lean_dec(v___y_2451_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v___x_2457_; 
if (v_isShared_2455_ == 0)
{
v___x_2457_ = v___x_2454_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_a_2452_);
v___x_2457_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
return v___x_2457_;
}
}
}
}
v___jp_2467_:
{
lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2468_ = lean_unsigned_to_nat(1u);
v___x_2469_ = lean_nat_add(v_currRecDepth_2461_, v___x_2468_);
lean_inc(v_ref_2462_);
lean_inc_ref(v_toCold_2460_);
v___x_2470_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2470_, 0, v_toCold_2460_);
lean_ctor_set(v___x_2470_, 1, v___x_2469_);
lean_ctor_set(v___x_2470_, 2, v_ref_2462_);
lean_ctor_set_uint16(v___x_2470_, sizeof(void*)*3, v_optionFlags_2463_);
lean_ctor_set_uint8(v___x_2470_, sizeof(void*)*3 + 2, v_suppressElabErrors_2464_);
lean_ctor_set_uint8(v___x_2470_, sizeof(void*)*3 + 3, v_checkDeprecated_2465_);
lean_ctor_set_uint8(v___x_2470_, sizeof(void*)*3 + 4, v_isRecordingDeps_2466_);
lean_inc(v___y_2448_);
lean_inc(v___y_2446_);
lean_inc_ref(v___y_2445_);
lean_inc(v___y_2444_);
v___x_2471_ = lean_apply_6(v_x_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___x_2470_, v___y_2448_, lean_box(0));
v___y_2451_ = v___x_2471_;
goto v___jp_2450_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12___redArg___boxed(lean_object* v_x_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12___redArg(v_x_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_);
lean_dec(v___y_2482_);
lean_dec_ref(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec_ref(v___y_2479_);
lean_dec(v___y_2478_);
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7_spec__8___redArg(lean_object* v_a_2485_, lean_object* v_x_2486_){
_start:
{
if (lean_obj_tag(v_x_2486_) == 0)
{
lean_object* v___x_2487_; 
v___x_2487_ = lean_box(0);
return v___x_2487_;
}
else
{
lean_object* v_key_2488_; lean_object* v_value_2489_; lean_object* v_tail_2490_; uint8_t v___x_2491_; 
v_key_2488_ = lean_ctor_get(v_x_2486_, 0);
v_value_2489_ = lean_ctor_get(v_x_2486_, 1);
v_tail_2490_ = lean_ctor_get(v_x_2486_, 2);
v___x_2491_ = l_Lean_ExprStructEq_beq(v_key_2488_, v_a_2485_);
if (v___x_2491_ == 0)
{
v_x_2486_ = v_tail_2490_;
goto _start;
}
else
{
lean_object* v___x_2493_; 
lean_inc(v_value_2489_);
v___x_2493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2493_, 0, v_value_2489_);
return v___x_2493_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7_spec__8___redArg___boxed(lean_object* v_a_2494_, lean_object* v_x_2495_){
_start:
{
lean_object* v_res_2496_; 
v_res_2496_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7_spec__8___redArg(v_a_2494_, v_x_2495_);
lean_dec(v_x_2495_);
lean_dec_ref(v_a_2494_);
return v_res_2496_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7___redArg(lean_object* v_m_2497_, lean_object* v_a_2498_){
_start:
{
lean_object* v_buckets_2499_; lean_object* v___x_2500_; uint64_t v___x_2501_; uint64_t v___x_2502_; uint64_t v___x_2503_; uint64_t v_fold_2504_; uint64_t v___x_2505_; uint64_t v___x_2506_; uint64_t v___x_2507_; size_t v___x_2508_; size_t v___x_2509_; size_t v___x_2510_; size_t v___x_2511_; size_t v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; 
v_buckets_2499_ = lean_ctor_get(v_m_2497_, 1);
v___x_2500_ = lean_array_get_size(v_buckets_2499_);
v___x_2501_ = l_Lean_ExprStructEq_hash(v_a_2498_);
v___x_2502_ = 32ULL;
v___x_2503_ = lean_uint64_shift_right(v___x_2501_, v___x_2502_);
v_fold_2504_ = lean_uint64_xor(v___x_2501_, v___x_2503_);
v___x_2505_ = 16ULL;
v___x_2506_ = lean_uint64_shift_right(v_fold_2504_, v___x_2505_);
v___x_2507_ = lean_uint64_xor(v_fold_2504_, v___x_2506_);
v___x_2508_ = lean_uint64_to_usize(v___x_2507_);
v___x_2509_ = lean_usize_of_nat(v___x_2500_);
v___x_2510_ = ((size_t)1ULL);
v___x_2511_ = lean_usize_sub(v___x_2509_, v___x_2510_);
v___x_2512_ = lean_usize_land(v___x_2508_, v___x_2511_);
v___x_2513_ = lean_array_uget_borrowed(v_buckets_2499_, v___x_2512_);
v___x_2514_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7_spec__8___redArg(v_a_2498_, v___x_2513_);
return v___x_2514_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7___redArg___boxed(lean_object* v_m_2515_, lean_object* v_a_2516_){
_start:
{
lean_object* v_res_2517_; 
v_res_2517_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7___redArg(v_m_2515_, v_a_2516_);
lean_dec_ref(v_a_2516_);
lean_dec_ref(v_m_2515_);
return v_res_2517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg___lam__0(lean_object* v_k_2518_, lean_object* v___y_2519_, lean_object* v_b_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_){
_start:
{
lean_object* v___x_2526_; 
lean_inc(v___y_2524_);
lean_inc_ref(v___y_2523_);
lean_inc(v___y_2522_);
lean_inc_ref(v___y_2521_);
lean_inc(v___y_2519_);
v___x_2526_ = lean_apply_7(v_k_2518_, v_b_2520_, v___y_2519_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, lean_box(0));
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg___lam__0___boxed(lean_object* v_k_2527_, lean_object* v___y_2528_, lean_object* v_b_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg___lam__0(v_k_2527_, v___y_2528_, v_b_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_);
lean_dec(v___y_2533_);
lean_dec_ref(v___y_2532_);
lean_dec(v___y_2531_);
lean_dec_ref(v___y_2530_);
lean_dec(v___y_2528_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg(lean_object* v_name_2536_, uint8_t v_bi_2537_, lean_object* v_type_2538_, lean_object* v_k_2539_, uint8_t v_kind_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_){
_start:
{
lean_object* v___f_2547_; lean_object* v___x_2548_; 
lean_inc(v___y_2541_);
v___f_2547_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2547_, 0, v_k_2539_);
lean_closure_set(v___f_2547_, 1, v___y_2541_);
v___x_2548_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2536_, v_bi_2537_, v_type_2538_, v___f_2547_, v_kind_2540_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_);
if (lean_obj_tag(v___x_2548_) == 0)
{
return v___x_2548_;
}
else
{
lean_object* v_a_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2556_; 
v_a_2549_ = lean_ctor_get(v___x_2548_, 0);
v_isSharedCheck_2556_ = !lean_is_exclusive(v___x_2548_);
if (v_isSharedCheck_2556_ == 0)
{
v___x_2551_ = v___x_2548_;
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_a_2549_);
lean_dec(v___x_2548_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v___x_2554_; 
if (v_isShared_2552_ == 0)
{
v___x_2554_ = v___x_2551_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v_a_2549_);
v___x_2554_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
return v___x_2554_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg___boxed(lean_object* v_name_2557_, lean_object* v_bi_2558_, lean_object* v_type_2559_, lean_object* v_k_2560_, lean_object* v_kind_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_){
_start:
{
uint8_t v_bi_boxed_2568_; uint8_t v_kind_boxed_2569_; lean_object* v_res_2570_; 
v_bi_boxed_2568_ = lean_unbox(v_bi_2558_);
v_kind_boxed_2569_ = lean_unbox(v_kind_2561_);
v_res_2570_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg(v_name_2557_, v_bi_boxed_2568_, v_type_2559_, v_k_2560_, v_kind_boxed_2569_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
lean_dec(v___y_2566_);
lean_dec_ref(v___y_2565_);
lean_dec(v___y_2564_);
lean_dec_ref(v___y_2563_);
lean_dec(v___y_2562_);
return v_res_2570_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___lam__2(lean_object* v___x_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_){
_start:
{
lean_object* v___x_2577_; 
v___x_2577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2571_);
return v___x_2577_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___lam__2___boxed(lean_object* v___x_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_){
_start:
{
lean_object* v_res_2584_; 
v_res_2584_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___lam__2(v___x_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
lean_dec(v___y_2582_);
lean_dec_ref(v___y_2581_);
lean_dec(v___y_2580_);
lean_dec_ref(v___y_2579_);
return v_res_2584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10_spec__13___redArg(lean_object* v_name_2585_, lean_object* v_type_2586_, lean_object* v_val_2587_, lean_object* v_k_2588_, uint8_t v_nondep_2589_, uint8_t v_kind_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_){
_start:
{
lean_object* v___f_2597_; lean_object* v___x_2598_; 
lean_inc(v___y_2591_);
v___f_2597_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2597_, 0, v_k_2588_);
lean_closure_set(v___f_2597_, 1, v___y_2591_);
v___x_2598_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2585_, v_type_2586_, v_val_2587_, v___f_2597_, v_nondep_2589_, v_kind_2590_, v___y_2592_, v___y_2593_, v___y_2594_, v___y_2595_);
if (lean_obj_tag(v___x_2598_) == 0)
{
return v___x_2598_;
}
else
{
lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2606_; 
v_a_2599_ = lean_ctor_get(v___x_2598_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2601_ = v___x_2598_;
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_dec(v___x_2598_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v___x_2604_; 
if (v_isShared_2602_ == 0)
{
v___x_2604_ = v___x_2601_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_a_2599_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10_spec__13___redArg___boxed(lean_object* v_name_2607_, lean_object* v_type_2608_, lean_object* v_val_2609_, lean_object* v_k_2610_, lean_object* v_nondep_2611_, lean_object* v_kind_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_){
_start:
{
uint8_t v_nondep_boxed_2619_; uint8_t v_kind_boxed_2620_; lean_object* v_res_2621_; 
v_nondep_boxed_2619_ = lean_unbox(v_nondep_2611_);
v_kind_boxed_2620_ = lean_unbox(v_kind_2612_);
v_res_2621_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10_spec__13___redArg(v_name_2607_, v_type_2608_, v_val_2609_, v_k_2610_, v_nondep_boxed_2619_, v_kind_boxed_2620_, v___y_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_);
lean_dec(v___y_2617_);
lean_dec_ref(v___y_2616_);
lean_dec(v___y_2615_);
lean_dec_ref(v___y_2614_);
lean_dec(v___y_2613_);
return v_res_2621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__0(lean_object* v_00_u03b1_2622_, lean_object* v_x_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_){
_start:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; 
v___x_2629_ = lean_apply_1(v_x_2623_, lean_box(0));
v___x_2630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2629_);
return v___x_2630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__0___boxed(lean_object* v_00_u03b1_2631_, lean_object* v_x_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_){
_start:
{
lean_object* v_res_2638_; 
v_res_2638_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__0(v_00_u03b1_2631_, v_x_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_);
lean_dec(v___y_2636_);
lean_dec_ref(v___y_2635_);
lean_dec(v___y_2634_);
lean_dec_ref(v___y_2633_);
return v_res_2638_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__18___redArg(lean_object* v_a_2639_, lean_object* v_x_2640_){
_start:
{
if (lean_obj_tag(v_x_2640_) == 0)
{
uint8_t v___x_2641_; 
v___x_2641_ = 0;
return v___x_2641_;
}
else
{
lean_object* v_key_2642_; lean_object* v_tail_2643_; uint8_t v___x_2644_; 
v_key_2642_ = lean_ctor_get(v_x_2640_, 0);
v_tail_2643_ = lean_ctor_get(v_x_2640_, 2);
v___x_2644_ = l_Lean_ExprStructEq_beq(v_key_2642_, v_a_2639_);
if (v___x_2644_ == 0)
{
v_x_2640_ = v_tail_2643_;
goto _start;
}
else
{
return v___x_2644_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__18___redArg___boxed(lean_object* v_a_2646_, lean_object* v_x_2647_){
_start:
{
uint8_t v_res_2648_; lean_object* v_r_2649_; 
v_res_2648_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__18___redArg(v_a_2646_, v_x_2647_);
lean_dec(v_x_2647_);
lean_dec_ref(v_a_2646_);
v_r_2649_ = lean_box(v_res_2648_);
return v_r_2649_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__20___redArg(lean_object* v_a_2650_, lean_object* v_b_2651_, lean_object* v_x_2652_){
_start:
{
if (lean_obj_tag(v_x_2652_) == 0)
{
lean_dec(v_b_2651_);
lean_dec_ref(v_a_2650_);
return v_x_2652_;
}
else
{
lean_object* v_key_2653_; lean_object* v_value_2654_; lean_object* v_tail_2655_; lean_object* v___x_2657_; uint8_t v_isShared_2658_; uint8_t v_isSharedCheck_2667_; 
v_key_2653_ = lean_ctor_get(v_x_2652_, 0);
v_value_2654_ = lean_ctor_get(v_x_2652_, 1);
v_tail_2655_ = lean_ctor_get(v_x_2652_, 2);
v_isSharedCheck_2667_ = !lean_is_exclusive(v_x_2652_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2657_ = v_x_2652_;
v_isShared_2658_ = v_isSharedCheck_2667_;
goto v_resetjp_2656_;
}
else
{
lean_inc(v_tail_2655_);
lean_inc(v_value_2654_);
lean_inc(v_key_2653_);
lean_dec(v_x_2652_);
v___x_2657_ = lean_box(0);
v_isShared_2658_ = v_isSharedCheck_2667_;
goto v_resetjp_2656_;
}
v_resetjp_2656_:
{
uint8_t v___x_2659_; 
v___x_2659_ = l_Lean_ExprStructEq_beq(v_key_2653_, v_a_2650_);
if (v___x_2659_ == 0)
{
lean_object* v___x_2660_; lean_object* v___x_2662_; 
v___x_2660_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__20___redArg(v_a_2650_, v_b_2651_, v_tail_2655_);
if (v_isShared_2658_ == 0)
{
lean_ctor_set(v___x_2657_, 2, v___x_2660_);
v___x_2662_ = v___x_2657_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v_key_2653_);
lean_ctor_set(v_reuseFailAlloc_2663_, 1, v_value_2654_);
lean_ctor_set(v_reuseFailAlloc_2663_, 2, v___x_2660_);
v___x_2662_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
return v___x_2662_;
}
}
else
{
lean_object* v___x_2665_; 
lean_dec(v_value_2654_);
lean_dec(v_key_2653_);
if (v_isShared_2658_ == 0)
{
lean_ctor_set(v___x_2657_, 1, v_b_2651_);
lean_ctor_set(v___x_2657_, 0, v_a_2650_);
v___x_2665_ = v___x_2657_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_a_2650_);
lean_ctor_set(v_reuseFailAlloc_2666_, 1, v_b_2651_);
lean_ctor_set(v_reuseFailAlloc_2666_, 2, v_tail_2655_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19_spec__20_spec__21___redArg(lean_object* v_x_2668_, lean_object* v_x_2669_){
_start:
{
if (lean_obj_tag(v_x_2669_) == 0)
{
return v_x_2668_;
}
else
{
lean_object* v_key_2670_; lean_object* v_value_2671_; lean_object* v_tail_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2695_; 
v_key_2670_ = lean_ctor_get(v_x_2669_, 0);
v_value_2671_ = lean_ctor_get(v_x_2669_, 1);
v_tail_2672_ = lean_ctor_get(v_x_2669_, 2);
v_isSharedCheck_2695_ = !lean_is_exclusive(v_x_2669_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2674_ = v_x_2669_;
v_isShared_2675_ = v_isSharedCheck_2695_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_tail_2672_);
lean_inc(v_value_2671_);
lean_inc(v_key_2670_);
lean_dec(v_x_2669_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2695_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2676_; uint64_t v___x_2677_; uint64_t v___x_2678_; uint64_t v___x_2679_; uint64_t v_fold_2680_; uint64_t v___x_2681_; uint64_t v___x_2682_; uint64_t v___x_2683_; size_t v___x_2684_; size_t v___x_2685_; size_t v___x_2686_; size_t v___x_2687_; size_t v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2691_; 
v___x_2676_ = lean_array_get_size(v_x_2668_);
v___x_2677_ = l_Lean_ExprStructEq_hash(v_key_2670_);
v___x_2678_ = 32ULL;
v___x_2679_ = lean_uint64_shift_right(v___x_2677_, v___x_2678_);
v_fold_2680_ = lean_uint64_xor(v___x_2677_, v___x_2679_);
v___x_2681_ = 16ULL;
v___x_2682_ = lean_uint64_shift_right(v_fold_2680_, v___x_2681_);
v___x_2683_ = lean_uint64_xor(v_fold_2680_, v___x_2682_);
v___x_2684_ = lean_uint64_to_usize(v___x_2683_);
v___x_2685_ = lean_usize_of_nat(v___x_2676_);
v___x_2686_ = ((size_t)1ULL);
v___x_2687_ = lean_usize_sub(v___x_2685_, v___x_2686_);
v___x_2688_ = lean_usize_land(v___x_2684_, v___x_2687_);
v___x_2689_ = lean_array_uget_borrowed(v_x_2668_, v___x_2688_);
lean_inc(v___x_2689_);
if (v_isShared_2675_ == 0)
{
lean_ctor_set(v___x_2674_, 2, v___x_2689_);
v___x_2691_ = v___x_2674_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_key_2670_);
lean_ctor_set(v_reuseFailAlloc_2694_, 1, v_value_2671_);
lean_ctor_set(v_reuseFailAlloc_2694_, 2, v___x_2689_);
v___x_2691_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
lean_object* v___x_2692_; 
v___x_2692_ = lean_array_uset(v_x_2668_, v___x_2688_, v___x_2691_);
v_x_2668_ = v___x_2692_;
v_x_2669_ = v_tail_2672_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19_spec__20___redArg(lean_object* v_i_2696_, lean_object* v_source_2697_, lean_object* v_target_2698_){
_start:
{
lean_object* v___x_2699_; uint8_t v___x_2700_; 
v___x_2699_ = lean_array_get_size(v_source_2697_);
v___x_2700_ = lean_nat_dec_lt(v_i_2696_, v___x_2699_);
if (v___x_2700_ == 0)
{
lean_dec_ref(v_source_2697_);
lean_dec(v_i_2696_);
return v_target_2698_;
}
else
{
lean_object* v_es_2701_; lean_object* v___x_2702_; lean_object* v_source_2703_; lean_object* v_target_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; 
v_es_2701_ = lean_array_fget(v_source_2697_, v_i_2696_);
v___x_2702_ = lean_box(0);
v_source_2703_ = lean_array_fset(v_source_2697_, v_i_2696_, v___x_2702_);
v_target_2704_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19_spec__20_spec__21___redArg(v_target_2698_, v_es_2701_);
v___x_2705_ = lean_unsigned_to_nat(1u);
v___x_2706_ = lean_nat_add(v_i_2696_, v___x_2705_);
lean_dec(v_i_2696_);
v_i_2696_ = v___x_2706_;
v_source_2697_ = v_source_2703_;
v_target_2698_ = v_target_2704_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19___redArg(lean_object* v_data_2708_){
_start:
{
lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v_nbuckets_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2709_ = lean_array_get_size(v_data_2708_);
v___x_2710_ = lean_unsigned_to_nat(2u);
v_nbuckets_2711_ = lean_nat_mul(v___x_2709_, v___x_2710_);
v___x_2712_ = lean_unsigned_to_nat(0u);
v___x_2713_ = lean_box(0);
v___x_2714_ = lean_mk_array(v_nbuckets_2711_, v___x_2713_);
v___x_2715_ = lean_array_propagate_mark(v_data_2708_, v___x_2714_);
v___x_2716_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19_spec__20___redArg(v___x_2712_, v_data_2708_, v___x_2715_);
return v___x_2716_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13___redArg(lean_object* v_m_2717_, lean_object* v_a_2718_, lean_object* v_b_2719_){
_start:
{
lean_object* v_size_2720_; lean_object* v_buckets_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2764_; 
v_size_2720_ = lean_ctor_get(v_m_2717_, 0);
v_buckets_2721_ = lean_ctor_get(v_m_2717_, 1);
v_isSharedCheck_2764_ = !lean_is_exclusive(v_m_2717_);
if (v_isSharedCheck_2764_ == 0)
{
v___x_2723_ = v_m_2717_;
v_isShared_2724_ = v_isSharedCheck_2764_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_buckets_2721_);
lean_inc(v_size_2720_);
lean_dec(v_m_2717_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2764_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v___x_2725_; uint64_t v___x_2726_; uint64_t v___x_2727_; uint64_t v___x_2728_; uint64_t v_fold_2729_; uint64_t v___x_2730_; uint64_t v___x_2731_; uint64_t v___x_2732_; size_t v___x_2733_; size_t v___x_2734_; size_t v___x_2735_; size_t v___x_2736_; size_t v___x_2737_; lean_object* v_bkt_2738_; uint8_t v___x_2739_; 
v___x_2725_ = lean_array_get_size(v_buckets_2721_);
v___x_2726_ = l_Lean_ExprStructEq_hash(v_a_2718_);
v___x_2727_ = 32ULL;
v___x_2728_ = lean_uint64_shift_right(v___x_2726_, v___x_2727_);
v_fold_2729_ = lean_uint64_xor(v___x_2726_, v___x_2728_);
v___x_2730_ = 16ULL;
v___x_2731_ = lean_uint64_shift_right(v_fold_2729_, v___x_2730_);
v___x_2732_ = lean_uint64_xor(v_fold_2729_, v___x_2731_);
v___x_2733_ = lean_uint64_to_usize(v___x_2732_);
v___x_2734_ = lean_usize_of_nat(v___x_2725_);
v___x_2735_ = ((size_t)1ULL);
v___x_2736_ = lean_usize_sub(v___x_2734_, v___x_2735_);
v___x_2737_ = lean_usize_land(v___x_2733_, v___x_2736_);
v_bkt_2738_ = lean_array_uget_borrowed(v_buckets_2721_, v___x_2737_);
v___x_2739_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__18___redArg(v_a_2718_, v_bkt_2738_);
if (v___x_2739_ == 0)
{
lean_object* v___x_2740_; lean_object* v_size_x27_2741_; lean_object* v___x_2742_; lean_object* v_buckets_x27_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; uint8_t v___x_2749_; 
v___x_2740_ = lean_unsigned_to_nat(1u);
v_size_x27_2741_ = lean_nat_add(v_size_2720_, v___x_2740_);
lean_dec(v_size_2720_);
lean_inc(v_bkt_2738_);
v___x_2742_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2742_, 0, v_a_2718_);
lean_ctor_set(v___x_2742_, 1, v_b_2719_);
lean_ctor_set(v___x_2742_, 2, v_bkt_2738_);
v_buckets_x27_2743_ = lean_array_uset(v_buckets_2721_, v___x_2737_, v___x_2742_);
v___x_2744_ = lean_unsigned_to_nat(4u);
v___x_2745_ = lean_nat_mul(v_size_x27_2741_, v___x_2744_);
v___x_2746_ = lean_unsigned_to_nat(3u);
v___x_2747_ = lean_nat_div(v___x_2745_, v___x_2746_);
lean_dec(v___x_2745_);
v___x_2748_ = lean_array_get_size(v_buckets_x27_2743_);
v___x_2749_ = lean_nat_dec_le(v___x_2747_, v___x_2748_);
lean_dec(v___x_2747_);
if (v___x_2749_ == 0)
{
lean_object* v_val_2750_; lean_object* v___x_2752_; 
v_val_2750_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19___redArg(v_buckets_x27_2743_);
if (v_isShared_2724_ == 0)
{
lean_ctor_set(v___x_2723_, 1, v_val_2750_);
lean_ctor_set(v___x_2723_, 0, v_size_x27_2741_);
v___x_2752_ = v___x_2723_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v_size_x27_2741_);
lean_ctor_set(v_reuseFailAlloc_2753_, 1, v_val_2750_);
v___x_2752_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
return v___x_2752_;
}
}
else
{
lean_object* v___x_2755_; 
if (v_isShared_2724_ == 0)
{
lean_ctor_set(v___x_2723_, 1, v_buckets_x27_2743_);
lean_ctor_set(v___x_2723_, 0, v_size_x27_2741_);
v___x_2755_ = v___x_2723_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_size_x27_2741_);
lean_ctor_set(v_reuseFailAlloc_2756_, 1, v_buckets_x27_2743_);
v___x_2755_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
return v___x_2755_;
}
}
}
else
{
lean_object* v___x_2757_; lean_object* v_buckets_x27_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2762_; 
lean_inc(v_bkt_2738_);
v___x_2757_ = lean_box(0);
v_buckets_x27_2758_ = lean_array_uset(v_buckets_2721_, v___x_2737_, v___x_2757_);
v___x_2759_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__20___redArg(v_a_2718_, v_b_2719_, v_bkt_2738_);
v___x_2760_ = lean_array_uset(v_buckets_x27_2758_, v___x_2737_, v___x_2759_);
if (v_isShared_2724_ == 0)
{
lean_ctor_set(v___x_2723_, 1, v___x_2760_);
v___x_2762_ = v___x_2723_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v_size_2720_);
lean_ctor_set(v_reuseFailAlloc_2763_, 1, v___x_2760_);
v___x_2762_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
return v___x_2762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__2(lean_object* v_a_2765_, lean_object* v_e_2766_, lean_object* v_a_2767_){
_start:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v___x_2769_ = lean_st_ref_take(v_a_2765_);
v___x_2770_ = lean_box(0);
v___x_2771_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13___redArg(v___x_2769_, v_e_2766_, v_a_2767_);
v___x_2772_ = lean_st_ref_put(v_a_2765_, v___x_2771_);
return v___x_2770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__2___boxed(lean_object* v_a_2773_, lean_object* v_e_2774_, lean_object* v_a_2775_, lean_object* v___y_2776_){
_start:
{
lean_object* v_res_2777_; 
v_res_2777_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__2(v_a_2773_, v_e_2774_, v_a_2775_);
lean_dec(v_a_2773_);
return v_res_2777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8___lam__0___boxed(lean_object* v_fvars_2778_, lean_object* v_pre_2779_, lean_object* v_post_2780_, lean_object* v_usedLetOnly_2781_, lean_object* v_skipConstInApp_2782_, lean_object* v_skipInstances_2783_, lean_object* v_body_2784_, lean_object* v_x_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_){
_start:
{
uint8_t v_usedLetOnly_boxed_2792_; uint8_t v_skipConstInApp_boxed_2793_; uint8_t v_skipInstances_boxed_2794_; lean_object* v_res_2795_; 
v_usedLetOnly_boxed_2792_ = lean_unbox(v_usedLetOnly_2781_);
v_skipConstInApp_boxed_2793_ = lean_unbox(v_skipConstInApp_2782_);
v_skipInstances_boxed_2794_ = lean_unbox(v_skipInstances_2783_);
v_res_2795_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8___lam__0(v_fvars_2778_, v_pre_2779_, v_post_2780_, v_usedLetOnly_boxed_2792_, v_skipConstInApp_boxed_2793_, v_skipInstances_boxed_2794_, v_body_2784_, v_x_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_);
lean_dec(v___y_2790_);
lean_dec_ref(v___y_2789_);
lean_dec(v___y_2788_);
lean_dec_ref(v___y_2787_);
lean_dec(v___y_2786_);
return v_res_2795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__9___lam__0(lean_object* v_fvars_2799_, lean_object* v_pre_2800_, lean_object* v_post_2801_, uint8_t v_usedLetOnly_2802_, uint8_t v_skipConstInApp_2803_, uint8_t v_skipInstances_2804_, lean_object* v_body_2805_, lean_object* v_x_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_){
_start:
{
lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2813_ = lean_array_push(v_fvars_2799_, v_x_2806_);
v___x_2814_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__9(v_pre_2800_, v_post_2801_, v_usedLetOnly_2802_, v_skipConstInApp_2803_, v_skipInstances_2804_, v___x_2813_, v_body_2805_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_);
return v___x_2814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__9___lam__0___boxed(lean_object* v_fvars_2815_, lean_object* v_pre_2816_, lean_object* v_post_2817_, lean_object* v_usedLetOnly_2818_, lean_object* v_skipConstInApp_2819_, lean_object* v_skipInstances_2820_, lean_object* v_body_2821_, lean_object* v_x_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_){
_start:
{
uint8_t v_usedLetOnly_boxed_2829_; uint8_t v_skipConstInApp_boxed_2830_; uint8_t v_skipInstances_boxed_2831_; lean_object* v_res_2832_; 
v_usedLetOnly_boxed_2829_ = lean_unbox(v_usedLetOnly_2818_);
v_skipConstInApp_boxed_2830_ = lean_unbox(v_skipConstInApp_2819_);
v_skipInstances_boxed_2831_ = lean_unbox(v_skipInstances_2820_);
v_res_2832_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__9___lam__0(v_fvars_2815_, v_pre_2816_, v_post_2817_, v_usedLetOnly_boxed_2829_, v_skipConstInApp_boxed_2830_, v_skipInstances_boxed_2831_, v_body_2821_, v_x_2822_, v___y_2823_, v___y_2824_, v___y_2825_, v___y_2826_, v___y_2827_);
lean_dec(v___y_2827_);
lean_dec_ref(v___y_2826_);
lean_dec(v___y_2825_);
lean_dec_ref(v___y_2824_);
lean_dec(v___y_2823_);
return v_res_2832_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5(lean_object* v_pre_2833_, lean_object* v_post_2834_, uint8_t v_usedLetOnly_2835_, uint8_t v_skipConstInApp_2836_, uint8_t v_skipInstances_2837_, lean_object* v_e_2838_, lean_object* v_a_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_){
_start:
{
lean_object* v___x_2845_; 
lean_inc_ref(v_post_2834_);
lean_inc(v___y_2843_);
lean_inc_ref(v___y_2842_);
lean_inc(v___y_2841_);
lean_inc_ref(v___y_2840_);
lean_inc_ref(v_e_2838_);
v___x_2845_ = lean_apply_6(v_post_2834_, v_e_2838_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, lean_box(0));
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v_a_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2864_; 
v_a_2846_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2848_ = v___x_2845_;
v_isShared_2849_ = v_isSharedCheck_2864_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_a_2846_);
lean_dec(v___x_2845_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2864_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
switch(lean_obj_tag(v_a_2846_))
{
case 0:
{
lean_object* v_e_2850_; lean_object* v___x_2852_; 
lean_dec_ref(v_e_2838_);
lean_dec_ref(v_post_2834_);
lean_dec_ref(v_pre_2833_);
v_e_2850_ = lean_ctor_get(v_a_2846_, 0);
lean_inc_ref(v_e_2850_);
lean_dec_ref_known(v_a_2846_, 1);
if (v_isShared_2849_ == 0)
{
lean_ctor_set(v___x_2848_, 0, v_e_2850_);
v___x_2852_ = v___x_2848_;
goto v_reusejp_2851_;
}
else
{
lean_object* v_reuseFailAlloc_2853_; 
v_reuseFailAlloc_2853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2853_, 0, v_e_2850_);
v___x_2852_ = v_reuseFailAlloc_2853_;
goto v_reusejp_2851_;
}
v_reusejp_2851_:
{
return v___x_2852_;
}
}
case 1:
{
lean_object* v_e_2854_; lean_object* v___x_2855_; 
lean_del_object(v___x_2848_);
lean_dec_ref(v_e_2838_);
v_e_2854_ = lean_ctor_get(v_a_2846_, 0);
lean_inc_ref(v_e_2854_);
lean_dec_ref_known(v_a_2846_, 1);
v___x_2855_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_2833_, v_post_2834_, v_usedLetOnly_2835_, v_skipConstInApp_2836_, v_skipInstances_2837_, v_e_2854_, v_a_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_);
return v___x_2855_;
}
default: 
{
lean_object* v_e_x3f_2856_; 
lean_dec_ref(v_post_2834_);
lean_dec_ref(v_pre_2833_);
v_e_x3f_2856_ = lean_ctor_get(v_a_2846_, 0);
lean_inc(v_e_x3f_2856_);
lean_dec_ref_known(v_a_2846_, 1);
if (lean_obj_tag(v_e_x3f_2856_) == 0)
{
lean_object* v___x_2858_; 
if (v_isShared_2849_ == 0)
{
lean_ctor_set(v___x_2848_, 0, v_e_2838_);
v___x_2858_ = v___x_2848_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v_e_2838_);
v___x_2858_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
return v___x_2858_;
}
}
else
{
lean_object* v_val_2860_; lean_object* v___x_2862_; 
lean_dec_ref(v_e_2838_);
v_val_2860_ = lean_ctor_get(v_e_x3f_2856_, 0);
lean_inc(v_val_2860_);
lean_dec_ref_known(v_e_x3f_2856_, 1);
if (v_isShared_2849_ == 0)
{
lean_ctor_set(v___x_2848_, 0, v_val_2860_);
v___x_2862_ = v___x_2848_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_val_2860_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
}
}
}
}
else
{
lean_object* v_a_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2872_; 
lean_dec_ref(v_e_2838_);
lean_dec_ref(v_post_2834_);
lean_dec_ref(v_pre_2833_);
v_a_2865_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_2872_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2872_ == 0)
{
v___x_2867_ = v___x_2845_;
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_a_2865_);
lean_dec(v___x_2845_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2870_; 
if (v_isShared_2868_ == 0)
{
v___x_2870_ = v___x_2867_;
goto v_reusejp_2869_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v_a_2865_);
v___x_2870_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2869_;
}
v_reusejp_2869_:
{
return v___x_2870_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__9(lean_object* v_pre_2873_, lean_object* v_post_2874_, uint8_t v_usedLetOnly_2875_, uint8_t v_skipConstInApp_2876_, uint8_t v_skipInstances_2877_, lean_object* v_fvars_2878_, lean_object* v_e_2879_, lean_object* v_a_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_){
_start:
{
if (lean_obj_tag(v_e_2879_) == 6)
{
lean_object* v_binderName_2886_; lean_object* v_binderType_2887_; lean_object* v_body_2888_; uint8_t v_binderInfo_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___f_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; 
v_binderName_2886_ = lean_ctor_get(v_e_2879_, 0);
lean_inc(v_binderName_2886_);
v_binderType_2887_ = lean_ctor_get(v_e_2879_, 1);
lean_inc_ref(v_binderType_2887_);
v_body_2888_ = lean_ctor_get(v_e_2879_, 2);
lean_inc_ref(v_body_2888_);
v_binderInfo_2889_ = lean_ctor_get_uint8(v_e_2879_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2879_, 3);
v___x_2890_ = lean_box(v_usedLetOnly_2875_);
v___x_2891_ = lean_box(v_skipConstInApp_2876_);
v___x_2892_ = lean_box(v_skipInstances_2877_);
lean_inc_ref(v_post_2874_);
lean_inc_ref(v_pre_2873_);
lean_inc_ref(v_fvars_2878_);
v___f_2893_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__9___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2893_, 0, v_fvars_2878_);
lean_closure_set(v___f_2893_, 1, v_pre_2873_);
lean_closure_set(v___f_2893_, 2, v_post_2874_);
lean_closure_set(v___f_2893_, 3, v___x_2890_);
lean_closure_set(v___f_2893_, 4, v___x_2891_);
lean_closure_set(v___f_2893_, 5, v___x_2892_);
lean_closure_set(v___f_2893_, 6, v_body_2888_);
v___x_2894_ = lean_expr_instantiate_rev(v_binderType_2887_, v_fvars_2878_);
lean_dec_ref(v_fvars_2878_);
lean_dec_ref(v_binderType_2887_);
v___x_2895_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_2873_, v_post_2874_, v_usedLetOnly_2875_, v_skipConstInApp_2876_, v_skipInstances_2877_, v___x_2894_, v_a_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
if (lean_obj_tag(v___x_2895_) == 0)
{
lean_object* v_a_2896_; uint8_t v___x_2897_; lean_object* v___x_2898_; 
v_a_2896_ = lean_ctor_get(v___x_2895_, 0);
lean_inc(v_a_2896_);
lean_dec_ref_known(v___x_2895_, 1);
v___x_2897_ = 0;
v___x_2898_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg(v_binderName_2886_, v_binderInfo_2889_, v_a_2896_, v___f_2893_, v___x_2897_, v_a_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
return v___x_2898_;
}
else
{
lean_dec_ref(v___f_2893_);
lean_dec(v_binderName_2886_);
return v___x_2895_;
}
}
else
{
lean_object* v___x_2899_; lean_object* v___x_2900_; 
v___x_2899_ = lean_expr_instantiate_rev(v_e_2879_, v_fvars_2878_);
lean_dec_ref(v_e_2879_);
lean_inc_ref(v_post_2874_);
lean_inc_ref(v_pre_2873_);
v___x_2900_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_2873_, v_post_2874_, v_usedLetOnly_2875_, v_skipConstInApp_2876_, v_skipInstances_2877_, v___x_2899_, v_a_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2901_; uint8_t v___x_2902_; uint8_t v___x_2903_; uint8_t v___x_2904_; lean_object* v___x_2905_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_a_2901_);
lean_dec_ref_known(v___x_2900_, 1);
v___x_2902_ = 0;
v___x_2903_ = 1;
v___x_2904_ = 1;
v___x_2905_ = l_Lean_Meta_mkLambdaFVars(v_fvars_2878_, v_a_2901_, v___x_2902_, v_usedLetOnly_2875_, v___x_2902_, v___x_2903_, v___x_2904_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
lean_dec_ref(v_fvars_2878_);
if (lean_obj_tag(v___x_2905_) == 0)
{
lean_object* v_a_2906_; lean_object* v___x_2907_; 
v_a_2906_ = lean_ctor_get(v___x_2905_, 0);
lean_inc(v_a_2906_);
lean_dec_ref_known(v___x_2905_, 1);
v___x_2907_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5(v_pre_2873_, v_post_2874_, v_usedLetOnly_2875_, v_skipConstInApp_2876_, v_skipInstances_2877_, v_a_2906_, v_a_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
return v___x_2907_;
}
else
{
lean_dec_ref(v_post_2874_);
lean_dec_ref(v_pre_2873_);
return v___x_2905_;
}
}
else
{
lean_dec_ref(v_fvars_2878_);
lean_dec_ref(v_post_2874_);
lean_dec_ref(v_pre_2873_);
return v___x_2900_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10___lam__0(lean_object* v_fvars_2908_, lean_object* v_pre_2909_, lean_object* v_post_2910_, uint8_t v_usedLetOnly_2911_, uint8_t v_skipConstInApp_2912_, uint8_t v_skipInstances_2913_, lean_object* v_body_2914_, lean_object* v_x_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_){
_start:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; 
v___x_2922_ = lean_array_push(v_fvars_2908_, v_x_2915_);
v___x_2923_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10(v_pre_2909_, v_post_2910_, v_usedLetOnly_2911_, v_skipConstInApp_2912_, v_skipInstances_2913_, v___x_2922_, v_body_2914_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_);
return v___x_2923_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10___lam__0___boxed(lean_object* v_fvars_2924_, lean_object* v_pre_2925_, lean_object* v_post_2926_, lean_object* v_usedLetOnly_2927_, lean_object* v_skipConstInApp_2928_, lean_object* v_skipInstances_2929_, lean_object* v_body_2930_, lean_object* v_x_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_){
_start:
{
uint8_t v_usedLetOnly_boxed_2938_; uint8_t v_skipConstInApp_boxed_2939_; uint8_t v_skipInstances_boxed_2940_; lean_object* v_res_2941_; 
v_usedLetOnly_boxed_2938_ = lean_unbox(v_usedLetOnly_2927_);
v_skipConstInApp_boxed_2939_ = lean_unbox(v_skipConstInApp_2928_);
v_skipInstances_boxed_2940_ = lean_unbox(v_skipInstances_2929_);
v_res_2941_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10___lam__0(v_fvars_2924_, v_pre_2925_, v_post_2926_, v_usedLetOnly_boxed_2938_, v_skipConstInApp_boxed_2939_, v_skipInstances_boxed_2940_, v_body_2930_, v_x_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_);
lean_dec(v___y_2936_);
lean_dec_ref(v___y_2935_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec(v___y_2932_);
return v_res_2941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10(lean_object* v_pre_2942_, lean_object* v_post_2943_, uint8_t v_usedLetOnly_2944_, uint8_t v_skipConstInApp_2945_, uint8_t v_skipInstances_2946_, lean_object* v_fvars_2947_, lean_object* v_e_2948_, lean_object* v_a_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_){
_start:
{
if (lean_obj_tag(v_e_2948_) == 8)
{
lean_object* v_declName_2955_; lean_object* v_type_2956_; lean_object* v_value_2957_; lean_object* v_body_2958_; uint8_t v_nondep_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___f_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v_declName_2955_ = lean_ctor_get(v_e_2948_, 0);
lean_inc(v_declName_2955_);
v_type_2956_ = lean_ctor_get(v_e_2948_, 1);
lean_inc_ref(v_type_2956_);
v_value_2957_ = lean_ctor_get(v_e_2948_, 2);
lean_inc_ref(v_value_2957_);
v_body_2958_ = lean_ctor_get(v_e_2948_, 3);
lean_inc_ref(v_body_2958_);
v_nondep_2959_ = lean_ctor_get_uint8(v_e_2948_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2948_, 4);
v___x_2960_ = lean_box(v_usedLetOnly_2944_);
v___x_2961_ = lean_box(v_skipConstInApp_2945_);
v___x_2962_ = lean_box(v_skipInstances_2946_);
lean_inc_ref_n(v_post_2943_, 2);
lean_inc_ref_n(v_pre_2942_, 2);
lean_inc_ref(v_fvars_2947_);
v___f_2963_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2963_, 0, v_fvars_2947_);
lean_closure_set(v___f_2963_, 1, v_pre_2942_);
lean_closure_set(v___f_2963_, 2, v_post_2943_);
lean_closure_set(v___f_2963_, 3, v___x_2960_);
lean_closure_set(v___f_2963_, 4, v___x_2961_);
lean_closure_set(v___f_2963_, 5, v___x_2962_);
lean_closure_set(v___f_2963_, 6, v_body_2958_);
v___x_2964_ = lean_expr_instantiate_rev(v_type_2956_, v_fvars_2947_);
lean_dec_ref(v_type_2956_);
v___x_2965_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_2942_, v_post_2943_, v_usedLetOnly_2944_, v_skipConstInApp_2945_, v_skipInstances_2946_, v___x_2964_, v_a_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_object* v_a_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
v_a_2966_ = lean_ctor_get(v___x_2965_, 0);
lean_inc(v_a_2966_);
lean_dec_ref_known(v___x_2965_, 1);
v___x_2967_ = lean_expr_instantiate_rev(v_value_2957_, v_fvars_2947_);
lean_dec_ref(v_fvars_2947_);
lean_dec_ref(v_value_2957_);
v___x_2968_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_2942_, v_post_2943_, v_usedLetOnly_2944_, v_skipConstInApp_2945_, v_skipInstances_2946_, v___x_2967_, v_a_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
if (lean_obj_tag(v___x_2968_) == 0)
{
lean_object* v_a_2969_; uint8_t v___x_2970_; lean_object* v___x_2971_; 
v_a_2969_ = lean_ctor_get(v___x_2968_, 0);
lean_inc(v_a_2969_);
lean_dec_ref_known(v___x_2968_, 1);
v___x_2970_ = 0;
v___x_2971_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10_spec__13___redArg(v_declName_2955_, v_a_2966_, v_a_2969_, v___f_2963_, v_nondep_2959_, v___x_2970_, v_a_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
return v___x_2971_;
}
else
{
lean_dec(v_a_2966_);
lean_dec_ref(v___f_2963_);
lean_dec(v_declName_2955_);
return v___x_2968_;
}
}
else
{
lean_dec_ref(v___f_2963_);
lean_dec_ref(v_value_2957_);
lean_dec(v_declName_2955_);
lean_dec_ref(v_fvars_2947_);
lean_dec_ref(v_post_2943_);
lean_dec_ref(v_pre_2942_);
return v___x_2965_;
}
}
else
{
lean_object* v___x_2972_; lean_object* v___x_2973_; 
v___x_2972_ = lean_expr_instantiate_rev(v_e_2948_, v_fvars_2947_);
lean_dec_ref(v_e_2948_);
lean_inc_ref(v_post_2943_);
lean_inc_ref(v_pre_2942_);
v___x_2973_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_2942_, v_post_2943_, v_usedLetOnly_2944_, v_skipConstInApp_2945_, v_skipInstances_2946_, v___x_2972_, v_a_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v_a_2974_; uint8_t v___x_2975_; uint8_t v___x_2976_; lean_object* v___x_2977_; 
v_a_2974_ = lean_ctor_get(v___x_2973_, 0);
lean_inc(v_a_2974_);
lean_dec_ref_known(v___x_2973_, 1);
v___x_2975_ = 0;
v___x_2976_ = 1;
v___x_2977_ = l_Lean_Meta_mkLetFVars(v_fvars_2947_, v_a_2974_, v_usedLetOnly_2944_, v___x_2975_, v___x_2976_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
lean_dec_ref(v_fvars_2947_);
if (lean_obj_tag(v___x_2977_) == 0)
{
lean_object* v_a_2978_; lean_object* v___x_2979_; 
v_a_2978_ = lean_ctor_get(v___x_2977_, 0);
lean_inc(v_a_2978_);
lean_dec_ref_known(v___x_2977_, 1);
v___x_2979_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5(v_pre_2942_, v_post_2943_, v_usedLetOnly_2944_, v_skipConstInApp_2945_, v_skipInstances_2946_, v_a_2978_, v_a_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
return v___x_2979_;
}
else
{
lean_dec_ref(v_post_2943_);
lean_dec_ref(v_pre_2942_);
return v___x_2977_;
}
}
else
{
lean_dec_ref(v_fvars_2947_);
lean_dec_ref(v_post_2943_);
lean_dec_ref(v_pre_2942_);
return v___x_2973_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__4(lean_object* v_pre_2980_, lean_object* v_post_2981_, uint8_t v_usedLetOnly_2982_, uint8_t v_skipConstInApp_2983_, uint8_t v_skipInstances_2984_, size_t v_sz_2985_, size_t v_i_2986_, lean_object* v_bs_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_){
_start:
{
uint8_t v___x_2994_; 
v___x_2994_ = lean_usize_dec_lt(v_i_2986_, v_sz_2985_);
if (v___x_2994_ == 0)
{
lean_object* v___x_2995_; 
lean_dec_ref(v_post_2981_);
lean_dec_ref(v_pre_2980_);
v___x_2995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2995_, 0, v_bs_2987_);
return v___x_2995_;
}
else
{
lean_object* v_v_2996_; lean_object* v___x_2997_; lean_object* v_bs_x27_2998_; lean_object* v___x_2999_; 
v_v_2996_ = lean_array_uget(v_bs_2987_, v_i_2986_);
v___x_2997_ = lean_unsigned_to_nat(0u);
v_bs_x27_2998_ = lean_array_uset(v_bs_2987_, v_i_2986_, v___x_2997_);
lean_inc_ref(v_post_2981_);
lean_inc_ref(v_pre_2980_);
v___x_2999_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_2980_, v_post_2981_, v_usedLetOnly_2982_, v_skipConstInApp_2983_, v_skipInstances_2984_, v_v_2996_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_, v___y_2992_);
if (lean_obj_tag(v___x_2999_) == 0)
{
lean_object* v_a_3000_; size_t v___x_3001_; size_t v___x_3002_; lean_object* v___x_3003_; 
v_a_3000_ = lean_ctor_get(v___x_2999_, 0);
lean_inc(v_a_3000_);
lean_dec_ref_known(v___x_2999_, 1);
v___x_3001_ = ((size_t)1ULL);
v___x_3002_ = lean_usize_add(v_i_2986_, v___x_3001_);
v___x_3003_ = lean_array_uset(v_bs_x27_2998_, v_i_2986_, v_a_3000_);
v_i_2986_ = v___x_3002_;
v_bs_2987_ = v___x_3003_;
goto _start;
}
else
{
lean_object* v_a_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3012_; 
lean_dec_ref(v_bs_x27_2998_);
lean_dec_ref(v_post_2981_);
lean_dec_ref(v_pre_2980_);
v_a_3005_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3012_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_3007_ = v___x_2999_;
v_isShared_3008_ = v_isSharedCheck_3012_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_a_3005_);
lean_dec(v___x_2999_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3012_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___x_3010_; 
if (v_isShared_3008_ == 0)
{
v___x_3010_ = v___x_3007_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v_a_3005_);
v___x_3010_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
return v___x_3010_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___lam__0(lean_object* v_pre_3013_, lean_object* v_post_3014_, uint8_t v_usedLetOnly_3015_, uint8_t v_skipConstInApp_3016_, uint8_t v_skipInstances_3017_, lean_object* v___x_3018_, lean_object* v___y_3019_, lean_object* v_b_3020_, lean_object* v_a_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_){
_start:
{
lean_object* v___x_3027_; 
v___x_3027_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_3013_, v_post_3014_, v_usedLetOnly_3015_, v_skipConstInApp_3016_, v_skipInstances_3017_, v___x_3018_, v___y_3019_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
if (lean_obj_tag(v___x_3027_) == 0)
{
lean_object* v_a_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3037_; 
v_a_3028_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3037_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3030_ = v___x_3027_;
v_isShared_3031_ = v_isSharedCheck_3037_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_a_3028_);
lean_dec(v___x_3027_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3037_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3035_; 
v___x_3032_ = lean_array_fset(v_b_3020_, v_a_3021_, v_a_3028_);
v___x_3033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3033_, 0, v___x_3032_);
if (v_isShared_3031_ == 0)
{
lean_ctor_set(v___x_3030_, 0, v___x_3033_);
v___x_3035_ = v___x_3030_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v___x_3033_);
v___x_3035_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
return v___x_3035_;
}
}
}
else
{
lean_object* v_a_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3045_; 
lean_dec_ref(v_b_3020_);
v_a_3038_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3040_ = v___x_3027_;
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_a_3038_);
lean_dec(v___x_3027_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3043_; 
if (v_isShared_3041_ == 0)
{
v___x_3043_ = v___x_3040_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3044_; 
v_reuseFailAlloc_3044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3044_, 0, v_a_3038_);
v___x_3043_ = v_reuseFailAlloc_3044_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
return v___x_3043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___lam__0___boxed(lean_object* v_pre_3046_, lean_object* v_post_3047_, lean_object* v_usedLetOnly_3048_, lean_object* v_skipConstInApp_3049_, lean_object* v_skipInstances_3050_, lean_object* v___x_3051_, lean_object* v___y_3052_, lean_object* v_b_3053_, lean_object* v_a_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_){
_start:
{
uint8_t v_usedLetOnly_boxed_3060_; uint8_t v_skipConstInApp_boxed_3061_; uint8_t v_skipInstances_boxed_3062_; lean_object* v_res_3063_; 
v_usedLetOnly_boxed_3060_ = lean_unbox(v_usedLetOnly_3048_);
v_skipConstInApp_boxed_3061_ = lean_unbox(v_skipConstInApp_3049_);
v_skipInstances_boxed_3062_ = lean_unbox(v_skipInstances_3050_);
v_res_3063_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___lam__0(v_pre_3046_, v_post_3047_, v_usedLetOnly_boxed_3060_, v_skipConstInApp_boxed_3061_, v_skipInstances_boxed_3062_, v___x_3051_, v___y_3052_, v_b_3053_, v_a_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_);
lean_dec(v___y_3058_);
lean_dec_ref(v___y_3057_);
lean_dec(v___y_3056_);
lean_dec_ref(v___y_3055_);
lean_dec(v_a_3054_);
lean_dec(v___y_3052_);
return v_res_3063_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg(lean_object* v_upperBound_3064_, lean_object* v___x_3065_, lean_object* v_pre_3066_, lean_object* v_post_3067_, uint8_t v_usedLetOnly_3068_, uint8_t v_skipConstInApp_3069_, uint8_t v_skipInstances_3070_, lean_object* v_a_3071_, lean_object* v_b_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_){
_start:
{
lean_object* v___y_3080_; uint8_t v___x_3103_; 
v___x_3103_ = lean_nat_dec_lt(v_a_3071_, v_upperBound_3064_);
if (v___x_3103_ == 0)
{
lean_object* v___x_3104_; 
lean_dec(v_a_3071_);
lean_dec_ref(v_post_3067_);
lean_dec_ref(v_pre_3066_);
v___x_3104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3104_, 0, v_b_3072_);
return v___x_3104_;
}
else
{
lean_object* v___x_3105_; lean_object* v___x_3106_; uint8_t v___x_3107_; 
v___x_3105_ = lean_array_fget_borrowed(v_b_3072_, v_a_3071_);
v___x_3106_ = lean_array_get_size(v___x_3065_);
v___x_3107_ = lean_nat_dec_lt(v_a_3071_, v___x_3106_);
if (v___x_3107_ == 0)
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___f_3111_; 
lean_inc(v___x_3105_);
v___x_3108_ = lean_box(v_usedLetOnly_3068_);
v___x_3109_ = lean_box(v_skipConstInApp_3069_);
v___x_3110_ = lean_box(v_skipInstances_3070_);
lean_inc(v_a_3071_);
lean_inc(v___y_3073_);
lean_inc_ref(v_post_3067_);
lean_inc_ref(v_pre_3066_);
v___f_3111_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3111_, 0, v_pre_3066_);
lean_closure_set(v___f_3111_, 1, v_post_3067_);
lean_closure_set(v___f_3111_, 2, v___x_3108_);
lean_closure_set(v___f_3111_, 3, v___x_3109_);
lean_closure_set(v___f_3111_, 4, v___x_3110_);
lean_closure_set(v___f_3111_, 5, v___x_3105_);
lean_closure_set(v___f_3111_, 6, v___y_3073_);
lean_closure_set(v___f_3111_, 7, v_b_3072_);
lean_closure_set(v___f_3111_, 8, v_a_3071_);
v___y_3080_ = v___f_3111_;
goto v___jp_3079_;
}
else
{
lean_object* v___x_3112_; uint8_t v_isInstance_3113_; 
v___x_3112_ = lean_array_fget_borrowed(v___x_3065_, v_a_3071_);
v_isInstance_3113_ = lean_ctor_get_uint8(v___x_3112_, sizeof(void*)*1 + 4);
if (v_isInstance_3113_ == 0)
{
lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___f_3117_; 
lean_inc(v___x_3105_);
v___x_3114_ = lean_box(v_usedLetOnly_3068_);
v___x_3115_ = lean_box(v_skipConstInApp_3069_);
v___x_3116_ = lean_box(v_skipInstances_3070_);
lean_inc(v_a_3071_);
lean_inc(v___y_3073_);
lean_inc_ref(v_post_3067_);
lean_inc_ref(v_pre_3066_);
v___f_3117_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3117_, 0, v_pre_3066_);
lean_closure_set(v___f_3117_, 1, v_post_3067_);
lean_closure_set(v___f_3117_, 2, v___x_3114_);
lean_closure_set(v___f_3117_, 3, v___x_3115_);
lean_closure_set(v___f_3117_, 4, v___x_3116_);
lean_closure_set(v___f_3117_, 5, v___x_3105_);
lean_closure_set(v___f_3117_, 6, v___y_3073_);
lean_closure_set(v___f_3117_, 7, v_b_3072_);
lean_closure_set(v___f_3117_, 8, v_a_3071_);
v___y_3080_ = v___f_3117_;
goto v___jp_3079_;
}
else
{
lean_object* v___x_3118_; lean_object* v___f_3119_; 
v___x_3118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3118_, 0, v_b_3072_);
v___f_3119_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_3119_, 0, v___x_3118_);
v___y_3080_ = v___f_3119_;
goto v___jp_3079_;
}
}
}
v___jp_3079_:
{
lean_object* v___x_3081_; 
lean_inc(v___y_3077_);
lean_inc_ref(v___y_3076_);
lean_inc(v___y_3075_);
lean_inc_ref(v___y_3074_);
v___x_3081_ = lean_apply_5(v___y_3080_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, lean_box(0));
if (lean_obj_tag(v___x_3081_) == 0)
{
lean_object* v_a_3082_; lean_object* v___x_3084_; uint8_t v_isShared_3085_; uint8_t v_isSharedCheck_3094_; 
v_a_3082_ = lean_ctor_get(v___x_3081_, 0);
v_isSharedCheck_3094_ = !lean_is_exclusive(v___x_3081_);
if (v_isSharedCheck_3094_ == 0)
{
v___x_3084_ = v___x_3081_;
v_isShared_3085_ = v_isSharedCheck_3094_;
goto v_resetjp_3083_;
}
else
{
lean_inc(v_a_3082_);
lean_dec(v___x_3081_);
v___x_3084_ = lean_box(0);
v_isShared_3085_ = v_isSharedCheck_3094_;
goto v_resetjp_3083_;
}
v_resetjp_3083_:
{
if (lean_obj_tag(v_a_3082_) == 0)
{
lean_object* v_a_3086_; lean_object* v___x_3088_; 
lean_dec(v_a_3071_);
lean_dec_ref(v_post_3067_);
lean_dec_ref(v_pre_3066_);
v_a_3086_ = lean_ctor_get(v_a_3082_, 0);
lean_inc(v_a_3086_);
lean_dec_ref_known(v_a_3082_, 1);
if (v_isShared_3085_ == 0)
{
lean_ctor_set(v___x_3084_, 0, v_a_3086_);
v___x_3088_ = v___x_3084_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v_a_3086_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
return v___x_3088_;
}
}
else
{
lean_object* v_a_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; 
lean_del_object(v___x_3084_);
v_a_3090_ = lean_ctor_get(v_a_3082_, 0);
lean_inc(v_a_3090_);
lean_dec_ref_known(v_a_3082_, 1);
v___x_3091_ = lean_unsigned_to_nat(1u);
v___x_3092_ = lean_nat_add(v_a_3071_, v___x_3091_);
lean_dec(v_a_3071_);
v_a_3071_ = v___x_3092_;
v_b_3072_ = v_a_3090_;
goto _start;
}
}
}
else
{
lean_object* v_a_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3102_; 
lean_dec(v_a_3071_);
lean_dec_ref(v_post_3067_);
lean_dec_ref(v_pre_3066_);
v_a_3095_ = lean_ctor_get(v___x_3081_, 0);
v_isSharedCheck_3102_ = !lean_is_exclusive(v___x_3081_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3097_ = v___x_3081_;
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_a_3095_);
lean_dec(v___x_3081_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v___x_3100_; 
if (v_isShared_3098_ == 0)
{
v___x_3100_ = v___x_3097_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_a_3095_);
v___x_3100_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
return v___x_3100_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__11(uint8_t v_skipInstances_3120_, lean_object* v_pre_3121_, lean_object* v_post_3122_, uint8_t v_usedLetOnly_3123_, uint8_t v_skipConstInApp_3124_, lean_object* v_x_3125_, lean_object* v_x_3126_, lean_object* v_x_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_){
_start:
{
lean_object* v_f_3135_; lean_object* v___y_3136_; lean_object* v___y_3137_; lean_object* v___y_3138_; lean_object* v___y_3139_; lean_object* v___y_3140_; 
if (lean_obj_tag(v_x_3125_) == 5)
{
lean_object* v_fn_3183_; lean_object* v_arg_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; 
v_fn_3183_ = lean_ctor_get(v_x_3125_, 0);
lean_inc_ref(v_fn_3183_);
v_arg_3184_ = lean_ctor_get(v_x_3125_, 1);
lean_inc_ref(v_arg_3184_);
lean_dec_ref_known(v_x_3125_, 2);
v___x_3185_ = lean_array_set(v_x_3126_, v_x_3127_, v_arg_3184_);
v___x_3186_ = lean_unsigned_to_nat(1u);
v___x_3187_ = lean_nat_sub(v_x_3127_, v___x_3186_);
lean_dec(v_x_3127_);
v_x_3125_ = v_fn_3183_;
v_x_3126_ = v___x_3185_;
v_x_3127_ = v___x_3187_;
goto _start;
}
else
{
lean_dec(v_x_3127_);
if (v_skipConstInApp_3124_ == 0)
{
goto v___jp_3180_;
}
else
{
uint8_t v___x_3189_; 
v___x_3189_ = l_Lean_Expr_isConst(v_x_3125_);
if (v___x_3189_ == 0)
{
goto v___jp_3180_;
}
else
{
v_f_3135_ = v_x_3125_;
v___y_3136_ = v___y_3128_;
v___y_3137_ = v___y_3129_;
v___y_3138_ = v___y_3130_;
v___y_3139_ = v___y_3131_;
v___y_3140_ = v___y_3132_;
goto v___jp_3134_;
}
}
}
v___jp_3134_:
{
if (v_skipInstances_3120_ == 0)
{
size_t v_sz_3141_; size_t v___x_3142_; lean_object* v___x_3143_; 
v_sz_3141_ = lean_array_size(v_x_3126_);
v___x_3142_ = ((size_t)0ULL);
lean_inc_ref(v_post_3122_);
lean_inc_ref(v_pre_3121_);
v___x_3143_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__4(v_pre_3121_, v_post_3122_, v_usedLetOnly_3123_, v_skipConstInApp_3124_, v_skipInstances_3120_, v_sz_3141_, v___x_3142_, v_x_3126_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_);
if (lean_obj_tag(v___x_3143_) == 0)
{
lean_object* v_a_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v_a_3144_ = lean_ctor_get(v___x_3143_, 0);
lean_inc(v_a_3144_);
lean_dec_ref_known(v___x_3143_, 1);
v___x_3145_ = l_Lean_mkAppN(v_f_3135_, v_a_3144_);
lean_dec(v_a_3144_);
v___x_3146_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5(v_pre_3121_, v_post_3122_, v_usedLetOnly_3123_, v_skipConstInApp_3124_, v_skipInstances_3120_, v___x_3145_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_);
return v___x_3146_;
}
else
{
lean_object* v_a_3147_; lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3154_; 
lean_dec_ref(v_f_3135_);
lean_dec_ref(v_post_3122_);
lean_dec_ref(v_pre_3121_);
v_a_3147_ = lean_ctor_get(v___x_3143_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v___x_3143_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3149_ = v___x_3143_;
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
else
{
lean_inc(v_a_3147_);
lean_dec(v___x_3143_);
v___x_3149_ = lean_box(0);
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
v_resetjp_3148_:
{
lean_object* v___x_3152_; 
if (v_isShared_3150_ == 0)
{
v___x_3152_ = v___x_3149_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v_a_3147_);
v___x_3152_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
return v___x_3152_;
}
}
}
}
else
{
lean_object* v___x_3155_; lean_object* v___x_3156_; 
v___x_3155_ = lean_array_get_size(v_x_3126_);
lean_inc_ref(v_f_3135_);
v___x_3156_ = l_Lean_Meta_getFunInfoNArgs(v_f_3135_, v___x_3155_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_);
if (lean_obj_tag(v___x_3156_) == 0)
{
lean_object* v_a_3157_; lean_object* v_paramInfo_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; 
v_a_3157_ = lean_ctor_get(v___x_3156_, 0);
lean_inc(v_a_3157_);
lean_dec_ref_known(v___x_3156_, 1);
v_paramInfo_3158_ = lean_ctor_get(v_a_3157_, 0);
lean_inc_ref(v_paramInfo_3158_);
lean_dec(v_a_3157_);
v___x_3159_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_3122_);
lean_inc_ref(v_pre_3121_);
v___x_3160_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg(v___x_3155_, v_paramInfo_3158_, v_pre_3121_, v_post_3122_, v_usedLetOnly_3123_, v_skipConstInApp_3124_, v_skipInstances_3120_, v___x_3159_, v_x_3126_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_);
lean_dec_ref(v_paramInfo_3158_);
if (lean_obj_tag(v___x_3160_) == 0)
{
lean_object* v_a_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
v_a_3161_ = lean_ctor_get(v___x_3160_, 0);
lean_inc(v_a_3161_);
lean_dec_ref_known(v___x_3160_, 1);
v___x_3162_ = l_Lean_mkAppN(v_f_3135_, v_a_3161_);
lean_dec(v_a_3161_);
v___x_3163_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5(v_pre_3121_, v_post_3122_, v_usedLetOnly_3123_, v_skipConstInApp_3124_, v_skipInstances_3120_, v___x_3162_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_);
return v___x_3163_;
}
else
{
lean_object* v_a_3164_; lean_object* v___x_3166_; uint8_t v_isShared_3167_; uint8_t v_isSharedCheck_3171_; 
lean_dec_ref(v_f_3135_);
lean_dec_ref(v_post_3122_);
lean_dec_ref(v_pre_3121_);
v_a_3164_ = lean_ctor_get(v___x_3160_, 0);
v_isSharedCheck_3171_ = !lean_is_exclusive(v___x_3160_);
if (v_isSharedCheck_3171_ == 0)
{
v___x_3166_ = v___x_3160_;
v_isShared_3167_ = v_isSharedCheck_3171_;
goto v_resetjp_3165_;
}
else
{
lean_inc(v_a_3164_);
lean_dec(v___x_3160_);
v___x_3166_ = lean_box(0);
v_isShared_3167_ = v_isSharedCheck_3171_;
goto v_resetjp_3165_;
}
v_resetjp_3165_:
{
lean_object* v___x_3169_; 
if (v_isShared_3167_ == 0)
{
v___x_3169_ = v___x_3166_;
goto v_reusejp_3168_;
}
else
{
lean_object* v_reuseFailAlloc_3170_; 
v_reuseFailAlloc_3170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3170_, 0, v_a_3164_);
v___x_3169_ = v_reuseFailAlloc_3170_;
goto v_reusejp_3168_;
}
v_reusejp_3168_:
{
return v___x_3169_;
}
}
}
}
else
{
lean_object* v_a_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3179_; 
lean_dec_ref(v_f_3135_);
lean_dec_ref(v_x_3126_);
lean_dec_ref(v_post_3122_);
lean_dec_ref(v_pre_3121_);
v_a_3172_ = lean_ctor_get(v___x_3156_, 0);
v_isSharedCheck_3179_ = !lean_is_exclusive(v___x_3156_);
if (v_isSharedCheck_3179_ == 0)
{
v___x_3174_ = v___x_3156_;
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_a_3172_);
lean_dec(v___x_3156_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v___x_3177_; 
if (v_isShared_3175_ == 0)
{
v___x_3177_ = v___x_3174_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v_a_3172_);
v___x_3177_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
return v___x_3177_;
}
}
}
}
}
v___jp_3180_:
{
lean_object* v___x_3181_; 
lean_inc_ref(v_post_3122_);
lean_inc_ref(v_pre_3121_);
v___x_3181_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_3121_, v_post_3122_, v_usedLetOnly_3123_, v_skipConstInApp_3124_, v_skipInstances_3120_, v_x_3125_, v___y_3128_, v___y_3129_, v___y_3130_, v___y_3131_, v___y_3132_);
if (lean_obj_tag(v___x_3181_) == 0)
{
lean_object* v_a_3182_; 
v_a_3182_ = lean_ctor_get(v___x_3181_, 0);
lean_inc(v_a_3182_);
lean_dec_ref_known(v___x_3181_, 1);
v_f_3135_ = v_a_3182_;
v___y_3136_ = v___y_3128_;
v___y_3137_ = v___y_3129_;
v___y_3138_ = v___y_3130_;
v___y_3139_ = v___y_3131_;
v___y_3140_ = v___y_3132_;
goto v___jp_3134_;
}
else
{
lean_dec_ref(v_x_3126_);
lean_dec_ref(v_post_3122_);
lean_dec_ref(v_pre_3121_);
return v___x_3181_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__1(lean_object* v___x_3190_, lean_object* v_pre_3191_, lean_object* v_e_3192_, lean_object* v_post_3193_, uint8_t v_usedLetOnly_3194_, uint8_t v_skipConstInApp_3195_, uint8_t v_skipInstances_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_){
_start:
{
lean_object* v___x_3203_; 
v___x_3203_ = l_Lean_Core_checkSystem(v___x_3190_, v___y_3200_, v___y_3201_);
if (lean_obj_tag(v___x_3203_) == 0)
{
lean_object* v___x_3204_; 
lean_dec_ref_known(v___x_3203_, 1);
lean_inc_ref(v_pre_3191_);
lean_inc(v___y_3201_);
lean_inc_ref(v___y_3200_);
lean_inc(v___y_3199_);
lean_inc_ref(v___y_3198_);
lean_inc_ref(v_e_3192_);
v___x_3204_ = lean_apply_6(v_pre_3191_, v_e_3192_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, lean_box(0));
if (lean_obj_tag(v___x_3204_) == 0)
{
lean_object* v_a_3205_; lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3253_; 
v_a_3205_ = lean_ctor_get(v___x_3204_, 0);
v_isSharedCheck_3253_ = !lean_is_exclusive(v___x_3204_);
if (v_isSharedCheck_3253_ == 0)
{
v___x_3207_ = v___x_3204_;
v_isShared_3208_ = v_isSharedCheck_3253_;
goto v_resetjp_3206_;
}
else
{
lean_inc(v_a_3205_);
lean_dec(v___x_3204_);
v___x_3207_ = lean_box(0);
v_isShared_3208_ = v_isSharedCheck_3253_;
goto v_resetjp_3206_;
}
v_resetjp_3206_:
{
lean_object* v___y_3210_; 
switch(lean_obj_tag(v_a_3205_))
{
case 0:
{
lean_object* v_e_3245_; lean_object* v___x_3247_; 
lean_dec_ref(v_post_3193_);
lean_dec_ref(v_e_3192_);
lean_dec_ref(v_pre_3191_);
v_e_3245_ = lean_ctor_get(v_a_3205_, 0);
lean_inc_ref(v_e_3245_);
lean_dec_ref_known(v_a_3205_, 1);
if (v_isShared_3208_ == 0)
{
lean_ctor_set(v___x_3207_, 0, v_e_3245_);
v___x_3247_ = v___x_3207_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3248_; 
v_reuseFailAlloc_3248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3248_, 0, v_e_3245_);
v___x_3247_ = v_reuseFailAlloc_3248_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
return v___x_3247_;
}
}
case 1:
{
lean_object* v_e_3249_; lean_object* v___x_3250_; 
lean_del_object(v___x_3207_);
lean_dec_ref(v_e_3192_);
v_e_3249_ = lean_ctor_get(v_a_3205_, 0);
lean_inc_ref(v_e_3249_);
lean_dec_ref_known(v_a_3205_, 1);
v___x_3250_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_3191_, v_post_3193_, v_usedLetOnly_3194_, v_skipConstInApp_3195_, v_skipInstances_3196_, v_e_3249_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
return v___x_3250_;
}
default: 
{
lean_object* v_e_x3f_3251_; 
lean_del_object(v___x_3207_);
v_e_x3f_3251_ = lean_ctor_get(v_a_3205_, 0);
lean_inc(v_e_x3f_3251_);
lean_dec_ref_known(v_a_3205_, 1);
if (lean_obj_tag(v_e_x3f_3251_) == 0)
{
v___y_3210_ = v_e_3192_;
goto v___jp_3209_;
}
else
{
lean_object* v_val_3252_; 
lean_dec_ref(v_e_3192_);
v_val_3252_ = lean_ctor_get(v_e_x3f_3251_, 0);
lean_inc(v_val_3252_);
lean_dec_ref_known(v_e_x3f_3251_, 1);
v___y_3210_ = v_val_3252_;
goto v___jp_3209_;
}
}
}
v___jp_3209_:
{
switch(lean_obj_tag(v___y_3210_))
{
case 7:
{
lean_object* v___x_3211_; lean_object* v___x_3212_; 
v___x_3211_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__1___closed__0));
v___x_3212_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8(v_pre_3191_, v_post_3193_, v_usedLetOnly_3194_, v_skipConstInApp_3195_, v_skipInstances_3196_, v___x_3211_, v___y_3210_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
return v___x_3212_;
}
case 6:
{
lean_object* v___x_3213_; lean_object* v___x_3214_; 
v___x_3213_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__1___closed__0));
v___x_3214_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__9(v_pre_3191_, v_post_3193_, v_usedLetOnly_3194_, v_skipConstInApp_3195_, v_skipInstances_3196_, v___x_3213_, v___y_3210_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
return v___x_3214_;
}
case 8:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; 
v___x_3215_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__1___closed__0));
v___x_3216_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10(v_pre_3191_, v_post_3193_, v_usedLetOnly_3194_, v_skipConstInApp_3195_, v_skipInstances_3196_, v___x_3215_, v___y_3210_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
return v___x_3216_;
}
case 5:
{
lean_object* v_dummy_3217_; lean_object* v_nargs_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v_dummy_3217_ = lean_obj_once(&l_Lean_Elab_WF_condToDite___redArg___closed__7, &l_Lean_Elab_WF_condToDite___redArg___closed__7_once, _init_l_Lean_Elab_WF_condToDite___redArg___closed__7);
v_nargs_3218_ = l_Lean_Expr_getAppNumArgs(v___y_3210_);
lean_inc(v_nargs_3218_);
v___x_3219_ = lean_mk_array(v_nargs_3218_, v_dummy_3217_);
v___x_3220_ = lean_unsigned_to_nat(1u);
v___x_3221_ = lean_nat_sub(v_nargs_3218_, v___x_3220_);
lean_dec(v_nargs_3218_);
v___x_3222_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__11(v_skipInstances_3196_, v_pre_3191_, v_post_3193_, v_usedLetOnly_3194_, v_skipConstInApp_3195_, v___y_3210_, v___x_3219_, v___x_3221_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
return v___x_3222_;
}
case 10:
{
lean_object* v_data_3223_; lean_object* v_expr_3224_; lean_object* v___x_3225_; 
v_data_3223_ = lean_ctor_get(v___y_3210_, 0);
v_expr_3224_ = lean_ctor_get(v___y_3210_, 1);
lean_inc_ref(v_expr_3224_);
lean_inc_ref(v_post_3193_);
lean_inc_ref(v_pre_3191_);
v___x_3225_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_3191_, v_post_3193_, v_usedLetOnly_3194_, v_skipConstInApp_3195_, v_skipInstances_3196_, v_expr_3224_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_object* v_a_3226_; size_t v___x_3227_; size_t v___x_3228_; uint8_t v___x_3229_; 
v_a_3226_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_a_3226_);
lean_dec_ref_known(v___x_3225_, 1);
v___x_3227_ = lean_ptr_addr(v_expr_3224_);
v___x_3228_ = lean_ptr_addr(v_a_3226_);
v___x_3229_ = lean_usize_dec_eq(v___x_3227_, v___x_3228_);
if (v___x_3229_ == 0)
{
lean_object* v___x_3230_; lean_object* v___x_3231_; 
lean_inc(v_data_3223_);
lean_dec_ref_known(v___y_3210_, 2);
v___x_3230_ = l_Lean_Expr_mdata___override(v_data_3223_, v_a_3226_);
v___x_3231_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5(v_pre_3191_, v_post_3193_, v_usedLetOnly_3194_, v_skipConstInApp_3195_, v_skipInstances_3196_, v___x_3230_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
return v___x_3231_;
}
else
{
lean_object* v___x_3232_; 
lean_dec(v_a_3226_);
v___x_3232_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5(v_pre_3191_, v_post_3193_, v_usedLetOnly_3194_, v_skipConstInApp_3195_, v_skipInstances_3196_, v___y_3210_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
return v___x_3232_;
}
}
else
{
lean_dec_ref_known(v___y_3210_, 2);
lean_dec_ref(v_post_3193_);
lean_dec_ref(v_pre_3191_);
return v___x_3225_;
}
}
case 11:
{
lean_object* v_typeName_3233_; lean_object* v_idx_3234_; lean_object* v_struct_3235_; lean_object* v___x_3236_; 
v_typeName_3233_ = lean_ctor_get(v___y_3210_, 0);
v_idx_3234_ = lean_ctor_get(v___y_3210_, 1);
v_struct_3235_ = lean_ctor_get(v___y_3210_, 2);
lean_inc_ref(v_struct_3235_);
lean_inc_ref(v_post_3193_);
lean_inc_ref(v_pre_3191_);
v___x_3236_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_3191_, v_post_3193_, v_usedLetOnly_3194_, v_skipConstInApp_3195_, v_skipInstances_3196_, v_struct_3235_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
if (lean_obj_tag(v___x_3236_) == 0)
{
lean_object* v_a_3237_; size_t v___x_3238_; size_t v___x_3239_; uint8_t v___x_3240_; 
v_a_3237_ = lean_ctor_get(v___x_3236_, 0);
lean_inc(v_a_3237_);
lean_dec_ref_known(v___x_3236_, 1);
v___x_3238_ = lean_ptr_addr(v_struct_3235_);
v___x_3239_ = lean_ptr_addr(v_a_3237_);
v___x_3240_ = lean_usize_dec_eq(v___x_3238_, v___x_3239_);
if (v___x_3240_ == 0)
{
lean_object* v___x_3241_; lean_object* v___x_3242_; 
lean_inc(v_idx_3234_);
lean_inc(v_typeName_3233_);
lean_dec_ref_known(v___y_3210_, 3);
v___x_3241_ = l_Lean_Expr_proj___override(v_typeName_3233_, v_idx_3234_, v_a_3237_);
v___x_3242_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5(v_pre_3191_, v_post_3193_, v_usedLetOnly_3194_, v_skipConstInApp_3195_, v_skipInstances_3196_, v___x_3241_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
return v___x_3242_;
}
else
{
lean_object* v___x_3243_; 
lean_dec(v_a_3237_);
v___x_3243_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5(v_pre_3191_, v_post_3193_, v_usedLetOnly_3194_, v_skipConstInApp_3195_, v_skipInstances_3196_, v___y_3210_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
return v___x_3243_;
}
}
else
{
lean_dec_ref_known(v___y_3210_, 3);
lean_dec_ref(v_post_3193_);
lean_dec_ref(v_pre_3191_);
return v___x_3236_;
}
}
default: 
{
lean_object* v___x_3244_; 
v___x_3244_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5(v_pre_3191_, v_post_3193_, v_usedLetOnly_3194_, v_skipConstInApp_3195_, v_skipInstances_3196_, v___y_3210_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
return v___x_3244_;
}
}
}
}
}
else
{
lean_object* v_a_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3261_; 
lean_dec_ref(v_post_3193_);
lean_dec_ref(v_e_3192_);
lean_dec_ref(v_pre_3191_);
v_a_3254_ = lean_ctor_get(v___x_3204_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3204_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3256_ = v___x_3204_;
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_a_3254_);
lean_dec(v___x_3204_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3259_; 
if (v_isShared_3257_ == 0)
{
v___x_3259_ = v___x_3256_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v_a_3254_);
v___x_3259_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
return v___x_3259_;
}
}
}
}
else
{
lean_object* v_a_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3269_; 
lean_dec_ref(v_post_3193_);
lean_dec_ref(v_e_3192_);
lean_dec_ref(v_pre_3191_);
v_a_3262_ = lean_ctor_get(v___x_3203_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3203_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3264_ = v___x_3203_;
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_dec(v___x_3203_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3267_; 
if (v_isShared_3265_ == 0)
{
v___x_3267_ = v___x_3264_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v_a_3262_);
v___x_3267_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
return v___x_3267_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__1___boxed(lean_object* v___x_3270_, lean_object* v_pre_3271_, lean_object* v_e_3272_, lean_object* v_post_3273_, lean_object* v_usedLetOnly_3274_, lean_object* v_skipConstInApp_3275_, lean_object* v_skipInstances_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_){
_start:
{
uint8_t v_usedLetOnly_boxed_3283_; uint8_t v_skipConstInApp_boxed_3284_; uint8_t v_skipInstances_boxed_3285_; lean_object* v_res_3286_; 
v_usedLetOnly_boxed_3283_ = lean_unbox(v_usedLetOnly_3274_);
v_skipConstInApp_boxed_3284_ = lean_unbox(v_skipConstInApp_3275_);
v_skipInstances_boxed_3285_ = lean_unbox(v_skipInstances_3276_);
v_res_3286_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__1(v___x_3270_, v_pre_3271_, v_e_3272_, v_post_3273_, v_usedLetOnly_boxed_3283_, v_skipConstInApp_boxed_3284_, v_skipInstances_boxed_3285_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_);
lean_dec(v___y_3281_);
lean_dec_ref(v___y_3280_);
lean_dec(v___y_3279_);
lean_dec_ref(v___y_3278_);
lean_dec(v___y_3277_);
return v_res_3286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(lean_object* v_pre_3287_, lean_object* v_post_3288_, uint8_t v_usedLetOnly_3289_, uint8_t v_skipConstInApp_3290_, uint8_t v_skipInstances_3291_, lean_object* v_e_3292_, lean_object* v_a_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_){
_start:
{
lean_object* v___x_3299_; lean_object* v___x_3300_; 
lean_inc(v_a_3293_);
v___x_3299_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3299_, 0, lean_box(0));
lean_closure_set(v___x_3299_, 1, lean_box(0));
lean_closure_set(v___x_3299_, 2, v_a_3293_);
v___x_3300_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__0(lean_box(0), v___x_3299_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_);
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v_a_3301_; lean_object* v___x_3303_; uint8_t v_isShared_3304_; uint8_t v_isSharedCheck_3335_; 
v_a_3301_ = lean_ctor_get(v___x_3300_, 0);
v_isSharedCheck_3335_ = !lean_is_exclusive(v___x_3300_);
if (v_isSharedCheck_3335_ == 0)
{
v___x_3303_ = v___x_3300_;
v_isShared_3304_ = v_isSharedCheck_3335_;
goto v_resetjp_3302_;
}
else
{
lean_inc(v_a_3301_);
lean_dec(v___x_3300_);
v___x_3303_ = lean_box(0);
v_isShared_3304_ = v_isSharedCheck_3335_;
goto v_resetjp_3302_;
}
v_resetjp_3302_:
{
lean_object* v___x_3305_; 
v___x_3305_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7___redArg(v_a_3301_, v_e_3292_);
lean_dec(v_a_3301_);
if (lean_obj_tag(v___x_3305_) == 0)
{
lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___f_3310_; lean_object* v___x_3311_; 
lean_del_object(v___x_3303_);
v___x_3306_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___closed__0));
v___x_3307_ = lean_box(v_usedLetOnly_3289_);
v___x_3308_ = lean_box(v_skipConstInApp_3290_);
v___x_3309_ = lean_box(v_skipInstances_3291_);
lean_inc_ref(v_e_3292_);
v___f_3310_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__1___boxed), 13, 7);
lean_closure_set(v___f_3310_, 0, v___x_3306_);
lean_closure_set(v___f_3310_, 1, v_pre_3287_);
lean_closure_set(v___f_3310_, 2, v_e_3292_);
lean_closure_set(v___f_3310_, 3, v_post_3288_);
lean_closure_set(v___f_3310_, 4, v___x_3307_);
lean_closure_set(v___f_3310_, 5, v___x_3308_);
lean_closure_set(v___f_3310_, 6, v___x_3309_);
v___x_3311_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12___redArg(v___f_3310_, v_a_3293_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_);
if (lean_obj_tag(v___x_3311_) == 0)
{
lean_object* v_a_3312_; lean_object* v___f_3313_; lean_object* v___x_3314_; 
v_a_3312_ = lean_ctor_get(v___x_3311_, 0);
lean_inc_n(v_a_3312_, 2);
lean_dec_ref_known(v___x_3311_, 1);
lean_inc(v_a_3293_);
v___f_3313_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3313_, 0, v_a_3293_);
lean_closure_set(v___f_3313_, 1, v_e_3292_);
lean_closure_set(v___f_3313_, 2, v_a_3312_);
v___x_3314_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__0(lean_box(0), v___f_3313_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_);
if (lean_obj_tag(v___x_3314_) == 0)
{
lean_object* v___x_3316_; uint8_t v_isShared_3317_; uint8_t v_isSharedCheck_3321_; 
v_isSharedCheck_3321_ = !lean_is_exclusive(v___x_3314_);
if (v_isSharedCheck_3321_ == 0)
{
lean_object* v_unused_3322_; 
v_unused_3322_ = lean_ctor_get(v___x_3314_, 0);
lean_dec(v_unused_3322_);
v___x_3316_ = v___x_3314_;
v_isShared_3317_ = v_isSharedCheck_3321_;
goto v_resetjp_3315_;
}
else
{
lean_dec(v___x_3314_);
v___x_3316_ = lean_box(0);
v_isShared_3317_ = v_isSharedCheck_3321_;
goto v_resetjp_3315_;
}
v_resetjp_3315_:
{
lean_object* v___x_3319_; 
if (v_isShared_3317_ == 0)
{
lean_ctor_set(v___x_3316_, 0, v_a_3312_);
v___x_3319_ = v___x_3316_;
goto v_reusejp_3318_;
}
else
{
lean_object* v_reuseFailAlloc_3320_; 
v_reuseFailAlloc_3320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3320_, 0, v_a_3312_);
v___x_3319_ = v_reuseFailAlloc_3320_;
goto v_reusejp_3318_;
}
v_reusejp_3318_:
{
return v___x_3319_;
}
}
}
else
{
lean_object* v_a_3323_; lean_object* v___x_3325_; uint8_t v_isShared_3326_; uint8_t v_isSharedCheck_3330_; 
lean_dec(v_a_3312_);
v_a_3323_ = lean_ctor_get(v___x_3314_, 0);
v_isSharedCheck_3330_ = !lean_is_exclusive(v___x_3314_);
if (v_isSharedCheck_3330_ == 0)
{
v___x_3325_ = v___x_3314_;
v_isShared_3326_ = v_isSharedCheck_3330_;
goto v_resetjp_3324_;
}
else
{
lean_inc(v_a_3323_);
lean_dec(v___x_3314_);
v___x_3325_ = lean_box(0);
v_isShared_3326_ = v_isSharedCheck_3330_;
goto v_resetjp_3324_;
}
v_resetjp_3324_:
{
lean_object* v___x_3328_; 
if (v_isShared_3326_ == 0)
{
v___x_3328_ = v___x_3325_;
goto v_reusejp_3327_;
}
else
{
lean_object* v_reuseFailAlloc_3329_; 
v_reuseFailAlloc_3329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3329_, 0, v_a_3323_);
v___x_3328_ = v_reuseFailAlloc_3329_;
goto v_reusejp_3327_;
}
v_reusejp_3327_:
{
return v___x_3328_;
}
}
}
}
else
{
lean_dec_ref(v_e_3292_);
return v___x_3311_;
}
}
else
{
lean_object* v_val_3331_; lean_object* v___x_3333_; 
lean_dec_ref(v_e_3292_);
lean_dec_ref(v_post_3288_);
lean_dec_ref(v_pre_3287_);
v_val_3331_ = lean_ctor_get(v___x_3305_, 0);
lean_inc(v_val_3331_);
lean_dec_ref_known(v___x_3305_, 1);
if (v_isShared_3304_ == 0)
{
lean_ctor_set(v___x_3303_, 0, v_val_3331_);
v___x_3333_ = v___x_3303_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v_val_3331_);
v___x_3333_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
return v___x_3333_;
}
}
}
}
else
{
lean_object* v_a_3336_; lean_object* v___x_3338_; uint8_t v_isShared_3339_; uint8_t v_isSharedCheck_3343_; 
lean_dec_ref(v_e_3292_);
lean_dec_ref(v_post_3288_);
lean_dec_ref(v_pre_3287_);
v_a_3336_ = lean_ctor_get(v___x_3300_, 0);
v_isSharedCheck_3343_ = !lean_is_exclusive(v___x_3300_);
if (v_isSharedCheck_3343_ == 0)
{
v___x_3338_ = v___x_3300_;
v_isShared_3339_ = v_isSharedCheck_3343_;
goto v_resetjp_3337_;
}
else
{
lean_inc(v_a_3336_);
lean_dec(v___x_3300_);
v___x_3338_ = lean_box(0);
v_isShared_3339_ = v_isSharedCheck_3343_;
goto v_resetjp_3337_;
}
v_resetjp_3337_:
{
lean_object* v___x_3341_; 
if (v_isShared_3339_ == 0)
{
v___x_3341_ = v___x_3338_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3342_; 
v_reuseFailAlloc_3342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3342_, 0, v_a_3336_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8(lean_object* v_pre_3344_, lean_object* v_post_3345_, uint8_t v_usedLetOnly_3346_, uint8_t v_skipConstInApp_3347_, uint8_t v_skipInstances_3348_, lean_object* v_fvars_3349_, lean_object* v_e_3350_, lean_object* v_a_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_){
_start:
{
if (lean_obj_tag(v_e_3350_) == 7)
{
lean_object* v_binderName_3357_; lean_object* v_binderType_3358_; lean_object* v_body_3359_; uint8_t v_binderInfo_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___f_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; 
v_binderName_3357_ = lean_ctor_get(v_e_3350_, 0);
lean_inc(v_binderName_3357_);
v_binderType_3358_ = lean_ctor_get(v_e_3350_, 1);
lean_inc_ref(v_binderType_3358_);
v_body_3359_ = lean_ctor_get(v_e_3350_, 2);
lean_inc_ref(v_body_3359_);
v_binderInfo_3360_ = lean_ctor_get_uint8(v_e_3350_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_3350_, 3);
v___x_3361_ = lean_box(v_usedLetOnly_3346_);
v___x_3362_ = lean_box(v_skipConstInApp_3347_);
v___x_3363_ = lean_box(v_skipInstances_3348_);
lean_inc_ref(v_post_3345_);
lean_inc_ref(v_pre_3344_);
lean_inc_ref(v_fvars_3349_);
v___f_3364_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3364_, 0, v_fvars_3349_);
lean_closure_set(v___f_3364_, 1, v_pre_3344_);
lean_closure_set(v___f_3364_, 2, v_post_3345_);
lean_closure_set(v___f_3364_, 3, v___x_3361_);
lean_closure_set(v___f_3364_, 4, v___x_3362_);
lean_closure_set(v___f_3364_, 5, v___x_3363_);
lean_closure_set(v___f_3364_, 6, v_body_3359_);
v___x_3365_ = lean_expr_instantiate_rev(v_binderType_3358_, v_fvars_3349_);
lean_dec_ref(v_fvars_3349_);
lean_dec_ref(v_binderType_3358_);
v___x_3366_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_3344_, v_post_3345_, v_usedLetOnly_3346_, v_skipConstInApp_3347_, v_skipInstances_3348_, v___x_3365_, v_a_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_);
if (lean_obj_tag(v___x_3366_) == 0)
{
lean_object* v_a_3367_; uint8_t v___x_3368_; lean_object* v___x_3369_; 
v_a_3367_ = lean_ctor_get(v___x_3366_, 0);
lean_inc(v_a_3367_);
lean_dec_ref_known(v___x_3366_, 1);
v___x_3368_ = 0;
v___x_3369_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg(v_binderName_3357_, v_binderInfo_3360_, v_a_3367_, v___f_3364_, v___x_3368_, v_a_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_);
return v___x_3369_;
}
else
{
lean_dec_ref(v___f_3364_);
lean_dec(v_binderName_3357_);
return v___x_3366_;
}
}
else
{
lean_object* v___x_3370_; lean_object* v___x_3371_; 
v___x_3370_ = lean_expr_instantiate_rev(v_e_3350_, v_fvars_3349_);
lean_dec_ref(v_e_3350_);
lean_inc_ref(v_post_3345_);
lean_inc_ref(v_pre_3344_);
v___x_3371_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_3344_, v_post_3345_, v_usedLetOnly_3346_, v_skipConstInApp_3347_, v_skipInstances_3348_, v___x_3370_, v_a_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_);
if (lean_obj_tag(v___x_3371_) == 0)
{
lean_object* v_a_3372_; uint8_t v___x_3373_; uint8_t v___x_3374_; uint8_t v___x_3375_; lean_object* v___x_3376_; 
v_a_3372_ = lean_ctor_get(v___x_3371_, 0);
lean_inc(v_a_3372_);
lean_dec_ref_known(v___x_3371_, 1);
v___x_3373_ = 0;
v___x_3374_ = 1;
v___x_3375_ = 1;
v___x_3376_ = l_Lean_Meta_mkForallFVars(v_fvars_3349_, v_a_3372_, v___x_3373_, v_usedLetOnly_3346_, v___x_3374_, v___x_3375_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_);
lean_dec_ref(v_fvars_3349_);
if (lean_obj_tag(v___x_3376_) == 0)
{
lean_object* v_a_3377_; lean_object* v___x_3378_; 
v_a_3377_ = lean_ctor_get(v___x_3376_, 0);
lean_inc(v_a_3377_);
lean_dec_ref_known(v___x_3376_, 1);
v___x_3378_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5(v_pre_3344_, v_post_3345_, v_usedLetOnly_3346_, v_skipConstInApp_3347_, v_skipInstances_3348_, v_a_3377_, v_a_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_);
return v___x_3378_;
}
else
{
lean_dec_ref(v_post_3345_);
lean_dec_ref(v_pre_3344_);
return v___x_3376_;
}
}
else
{
lean_dec_ref(v_fvars_3349_);
lean_dec_ref(v_post_3345_);
lean_dec_ref(v_pre_3344_);
return v___x_3371_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8___lam__0(lean_object* v_fvars_3379_, lean_object* v_pre_3380_, lean_object* v_post_3381_, uint8_t v_usedLetOnly_3382_, uint8_t v_skipConstInApp_3383_, uint8_t v_skipInstances_3384_, lean_object* v_body_3385_, lean_object* v_x_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_){
_start:
{
lean_object* v___x_3393_; lean_object* v___x_3394_; 
v___x_3393_ = lean_array_push(v_fvars_3379_, v_x_3386_);
v___x_3394_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8(v_pre_3380_, v_post_3381_, v_usedLetOnly_3382_, v_skipConstInApp_3383_, v_skipInstances_3384_, v___x_3393_, v_body_3385_, v___y_3387_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_);
return v___x_3394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5___boxed(lean_object* v_pre_3395_, lean_object* v_post_3396_, lean_object* v_usedLetOnly_3397_, lean_object* v_skipConstInApp_3398_, lean_object* v_skipInstances_3399_, lean_object* v_e_3400_, lean_object* v_a_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_){
_start:
{
uint8_t v_usedLetOnly_boxed_3407_; uint8_t v_skipConstInApp_boxed_3408_; uint8_t v_skipInstances_boxed_3409_; lean_object* v_res_3410_; 
v_usedLetOnly_boxed_3407_ = lean_unbox(v_usedLetOnly_3397_);
v_skipConstInApp_boxed_3408_ = lean_unbox(v_skipConstInApp_3398_);
v_skipInstances_boxed_3409_ = lean_unbox(v_skipInstances_3399_);
v_res_3410_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__5(v_pre_3395_, v_post_3396_, v_usedLetOnly_boxed_3407_, v_skipConstInApp_boxed_3408_, v_skipInstances_boxed_3409_, v_e_3400_, v_a_3401_, v___y_3402_, v___y_3403_, v___y_3404_, v___y_3405_);
lean_dec(v___y_3405_);
lean_dec_ref(v___y_3404_);
lean_dec(v___y_3403_);
lean_dec_ref(v___y_3402_);
lean_dec(v_a_3401_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__4___boxed(lean_object* v_pre_3411_, lean_object* v_post_3412_, lean_object* v_usedLetOnly_3413_, lean_object* v_skipConstInApp_3414_, lean_object* v_skipInstances_3415_, lean_object* v_sz_3416_, lean_object* v_i_3417_, lean_object* v_bs_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_){
_start:
{
uint8_t v_usedLetOnly_boxed_3425_; uint8_t v_skipConstInApp_boxed_3426_; uint8_t v_skipInstances_boxed_3427_; size_t v_sz_boxed_3428_; size_t v_i_boxed_3429_; lean_object* v_res_3430_; 
v_usedLetOnly_boxed_3425_ = lean_unbox(v_usedLetOnly_3413_);
v_skipConstInApp_boxed_3426_ = lean_unbox(v_skipConstInApp_3414_);
v_skipInstances_boxed_3427_ = lean_unbox(v_skipInstances_3415_);
v_sz_boxed_3428_ = lean_unbox_usize(v_sz_3416_);
lean_dec(v_sz_3416_);
v_i_boxed_3429_ = lean_unbox_usize(v_i_3417_);
lean_dec(v_i_3417_);
v_res_3430_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__4(v_pre_3411_, v_post_3412_, v_usedLetOnly_boxed_3425_, v_skipConstInApp_boxed_3426_, v_skipInstances_boxed_3427_, v_sz_boxed_3428_, v_i_boxed_3429_, v_bs_3418_, v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_);
lean_dec(v___y_3423_);
lean_dec_ref(v___y_3422_);
lean_dec(v___y_3421_);
lean_dec_ref(v___y_3420_);
lean_dec(v___y_3419_);
return v_res_3430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___boxed(lean_object* v_pre_3431_, lean_object* v_post_3432_, lean_object* v_usedLetOnly_3433_, lean_object* v_skipConstInApp_3434_, lean_object* v_skipInstances_3435_, lean_object* v_e_3436_, lean_object* v_a_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_){
_start:
{
uint8_t v_usedLetOnly_boxed_3443_; uint8_t v_skipConstInApp_boxed_3444_; uint8_t v_skipInstances_boxed_3445_; lean_object* v_res_3446_; 
v_usedLetOnly_boxed_3443_ = lean_unbox(v_usedLetOnly_3433_);
v_skipConstInApp_boxed_3444_ = lean_unbox(v_skipConstInApp_3434_);
v_skipInstances_boxed_3445_ = lean_unbox(v_skipInstances_3435_);
v_res_3446_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_3431_, v_post_3432_, v_usedLetOnly_boxed_3443_, v_skipConstInApp_boxed_3444_, v_skipInstances_boxed_3445_, v_e_3436_, v_a_3437_, v___y_3438_, v___y_3439_, v___y_3440_, v___y_3441_);
lean_dec(v___y_3441_);
lean_dec_ref(v___y_3440_);
lean_dec(v___y_3439_);
lean_dec_ref(v___y_3438_);
lean_dec(v_a_3437_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8___boxed(lean_object* v_pre_3447_, lean_object* v_post_3448_, lean_object* v_usedLetOnly_3449_, lean_object* v_skipConstInApp_3450_, lean_object* v_skipInstances_3451_, lean_object* v_fvars_3452_, lean_object* v_e_3453_, lean_object* v_a_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_){
_start:
{
uint8_t v_usedLetOnly_boxed_3460_; uint8_t v_skipConstInApp_boxed_3461_; uint8_t v_skipInstances_boxed_3462_; lean_object* v_res_3463_; 
v_usedLetOnly_boxed_3460_ = lean_unbox(v_usedLetOnly_3449_);
v_skipConstInApp_boxed_3461_ = lean_unbox(v_skipConstInApp_3450_);
v_skipInstances_boxed_3462_ = lean_unbox(v_skipInstances_3451_);
v_res_3463_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8(v_pre_3447_, v_post_3448_, v_usedLetOnly_boxed_3460_, v_skipConstInApp_boxed_3461_, v_skipInstances_boxed_3462_, v_fvars_3452_, v_e_3453_, v_a_3454_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
lean_dec(v___y_3458_);
lean_dec_ref(v___y_3457_);
lean_dec(v___y_3456_);
lean_dec_ref(v___y_3455_);
lean_dec(v_a_3454_);
return v_res_3463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__9___boxed(lean_object* v_pre_3464_, lean_object* v_post_3465_, lean_object* v_usedLetOnly_3466_, lean_object* v_skipConstInApp_3467_, lean_object* v_skipInstances_3468_, lean_object* v_fvars_3469_, lean_object* v_e_3470_, lean_object* v_a_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_){
_start:
{
uint8_t v_usedLetOnly_boxed_3477_; uint8_t v_skipConstInApp_boxed_3478_; uint8_t v_skipInstances_boxed_3479_; lean_object* v_res_3480_; 
v_usedLetOnly_boxed_3477_ = lean_unbox(v_usedLetOnly_3466_);
v_skipConstInApp_boxed_3478_ = lean_unbox(v_skipConstInApp_3467_);
v_skipInstances_boxed_3479_ = lean_unbox(v_skipInstances_3468_);
v_res_3480_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__9(v_pre_3464_, v_post_3465_, v_usedLetOnly_boxed_3477_, v_skipConstInApp_boxed_3478_, v_skipInstances_boxed_3479_, v_fvars_3469_, v_e_3470_, v_a_3471_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_);
lean_dec(v___y_3475_);
lean_dec_ref(v___y_3474_);
lean_dec(v___y_3473_);
lean_dec_ref(v___y_3472_);
lean_dec(v_a_3471_);
return v_res_3480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10___boxed(lean_object* v_pre_3481_, lean_object* v_post_3482_, lean_object* v_usedLetOnly_3483_, lean_object* v_skipConstInApp_3484_, lean_object* v_skipInstances_3485_, lean_object* v_fvars_3486_, lean_object* v_e_3487_, lean_object* v_a_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_){
_start:
{
uint8_t v_usedLetOnly_boxed_3494_; uint8_t v_skipConstInApp_boxed_3495_; uint8_t v_skipInstances_boxed_3496_; lean_object* v_res_3497_; 
v_usedLetOnly_boxed_3494_ = lean_unbox(v_usedLetOnly_3483_);
v_skipConstInApp_boxed_3495_ = lean_unbox(v_skipConstInApp_3484_);
v_skipInstances_boxed_3496_ = lean_unbox(v_skipInstances_3485_);
v_res_3497_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10(v_pre_3481_, v_post_3482_, v_usedLetOnly_boxed_3494_, v_skipConstInApp_boxed_3495_, v_skipInstances_boxed_3496_, v_fvars_3486_, v_e_3487_, v_a_3488_, v___y_3489_, v___y_3490_, v___y_3491_, v___y_3492_);
lean_dec(v___y_3492_);
lean_dec_ref(v___y_3491_);
lean_dec(v___y_3490_);
lean_dec_ref(v___y_3489_);
lean_dec(v_a_3488_);
return v_res_3497_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg___boxed(lean_object* v_upperBound_3498_, lean_object* v___x_3499_, lean_object* v_pre_3500_, lean_object* v_post_3501_, lean_object* v_usedLetOnly_3502_, lean_object* v_skipConstInApp_3503_, lean_object* v_skipInstances_3504_, lean_object* v_a_3505_, lean_object* v_b_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_){
_start:
{
uint8_t v_usedLetOnly_boxed_3513_; uint8_t v_skipConstInApp_boxed_3514_; uint8_t v_skipInstances_boxed_3515_; lean_object* v_res_3516_; 
v_usedLetOnly_boxed_3513_ = lean_unbox(v_usedLetOnly_3502_);
v_skipConstInApp_boxed_3514_ = lean_unbox(v_skipConstInApp_3503_);
v_skipInstances_boxed_3515_ = lean_unbox(v_skipInstances_3504_);
v_res_3516_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg(v_upperBound_3498_, v___x_3499_, v_pre_3500_, v_post_3501_, v_usedLetOnly_boxed_3513_, v_skipConstInApp_boxed_3514_, v_skipInstances_boxed_3515_, v_a_3505_, v_b_3506_, v___y_3507_, v___y_3508_, v___y_3509_, v___y_3510_, v___y_3511_);
lean_dec(v___y_3511_);
lean_dec_ref(v___y_3510_);
lean_dec(v___y_3509_);
lean_dec_ref(v___y_3508_);
lean_dec(v___y_3507_);
lean_dec_ref(v___x_3499_);
lean_dec(v_upperBound_3498_);
return v_res_3516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__11___boxed(lean_object* v_skipInstances_3517_, lean_object* v_pre_3518_, lean_object* v_post_3519_, lean_object* v_usedLetOnly_3520_, lean_object* v_skipConstInApp_3521_, lean_object* v_x_3522_, lean_object* v_x_3523_, lean_object* v_x_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_){
_start:
{
uint8_t v_skipInstances_boxed_3531_; uint8_t v_usedLetOnly_boxed_3532_; uint8_t v_skipConstInApp_boxed_3533_; lean_object* v_res_3534_; 
v_skipInstances_boxed_3531_ = lean_unbox(v_skipInstances_3517_);
v_usedLetOnly_boxed_3532_ = lean_unbox(v_usedLetOnly_3520_);
v_skipConstInApp_boxed_3533_ = lean_unbox(v_skipConstInApp_3521_);
v_res_3534_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__11(v_skipInstances_boxed_3531_, v_pre_3518_, v_post_3519_, v_usedLetOnly_boxed_3532_, v_skipConstInApp_boxed_3533_, v_x_3522_, v_x_3523_, v_x_3524_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_, v___y_3529_);
lean_dec(v___y_3529_);
lean_dec_ref(v___y_3528_);
lean_dec(v___y_3527_);
lean_dec_ref(v___y_3526_);
lean_dec(v___y_3525_);
return v_res_3534_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__0(void){
_start:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; 
v___x_3535_ = lean_box(0);
v___x_3536_ = lean_unsigned_to_nat(16u);
v___x_3537_ = lean_mk_array(v___x_3536_, v___x_3535_);
return v___x_3537_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__1(void){
_start:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3538_ = lean_obj_once(&l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__0, &l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__0_once, _init_l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__0);
v___x_3539_ = lean_unsigned_to_nat(0u);
v___x_3540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3539_);
lean_ctor_set(v___x_3540_, 1, v___x_3538_);
return v___x_3540_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__2(void){
_start:
{
lean_object* v___x_3541_; lean_object* v___x_3542_; 
v___x_3541_ = lean_obj_once(&l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__1, &l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__1_once, _init_l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__1);
v___x_3542_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3542_, 0, lean_box(0));
lean_closure_set(v___x_3542_, 1, lean_box(0));
lean_closure_set(v___x_3542_, 2, v___x_3541_);
return v___x_3542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3(lean_object* v_input_3543_, lean_object* v_pre_3544_, lean_object* v_post_3545_, uint8_t v_usedLetOnly_3546_, uint8_t v_skipConstInApp_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_){
_start:
{
uint8_t v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v_a_3556_; lean_object* v___x_3557_; 
v___x_3553_ = 0;
v___x_3554_ = lean_obj_once(&l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__2, &l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__2_once, _init_l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__2);
v___x_3555_ = l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___lam__0(lean_box(0), v___x_3554_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_);
v_a_3556_ = lean_ctor_get(v___x_3555_, 0);
lean_inc(v_a_3556_);
lean_dec_ref(v___x_3555_);
v___x_3557_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3(v_pre_3544_, v_post_3545_, v_usedLetOnly_3546_, v_skipConstInApp_3547_, v___x_3553_, v_input_3543_, v_a_3556_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_);
if (lean_obj_tag(v___x_3557_) == 0)
{
lean_object* v_a_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3567_; 
v_a_3558_ = lean_ctor_get(v___x_3557_, 0);
lean_inc(v_a_3558_);
lean_dec_ref_known(v___x_3557_, 1);
v___x_3559_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3559_, 0, lean_box(0));
lean_closure_set(v___x_3559_, 1, lean_box(0));
lean_closure_set(v___x_3559_, 2, v_a_3556_);
v___x_3560_ = l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___lam__0(lean_box(0), v___x_3559_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_);
v_isSharedCheck_3567_ = !lean_is_exclusive(v___x_3560_);
if (v_isSharedCheck_3567_ == 0)
{
lean_object* v_unused_3568_; 
v_unused_3568_ = lean_ctor_get(v___x_3560_, 0);
lean_dec(v_unused_3568_);
v___x_3562_ = v___x_3560_;
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
else
{
lean_dec(v___x_3560_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3565_; 
if (v_isShared_3563_ == 0)
{
lean_ctor_set(v___x_3562_, 0, v_a_3558_);
v___x_3565_ = v___x_3562_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_a_3558_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
return v___x_3565_;
}
}
}
else
{
lean_dec(v_a_3556_);
return v___x_3557_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___boxed(lean_object* v_input_3569_, lean_object* v_pre_3570_, lean_object* v_post_3571_, lean_object* v_usedLetOnly_3572_, lean_object* v_skipConstInApp_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_){
_start:
{
uint8_t v_usedLetOnly_boxed_3579_; uint8_t v_skipConstInApp_boxed_3580_; lean_object* v_res_3581_; 
v_usedLetOnly_boxed_3579_ = lean_unbox(v_usedLetOnly_3572_);
v_skipConstInApp_boxed_3580_ = lean_unbox(v_skipConstInApp_3573_);
v_res_3581_ = l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3(v_input_3569_, v_pre_3570_, v_post_3571_, v_usedLetOnly_boxed_3579_, v_skipConstInApp_boxed_3580_, v___y_3574_, v___y_3575_, v___y_3576_, v___y_3577_);
lean_dec(v___y_3577_);
lean_dec_ref(v___y_3576_);
lean_dec(v___y_3575_);
lean_dec_ref(v___y_3574_);
return v_res_3581_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet(lean_object* v_e_3584_, lean_object* v_a_3585_, lean_object* v_a_3586_, lean_object* v_a_3587_, lean_object* v_a_3588_){
_start:
{
lean_object* v___f_3590_; lean_object* v___f_3591_; uint8_t v___x_3592_; lean_object* v___x_3593_; 
v___f_3590_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___closed__0));
v___f_3591_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___closed__1));
v___x_3592_ = 0;
v___x_3593_ = l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3(v_e_3584_, v___f_3591_, v___f_3590_, v___x_3592_, v___x_3592_, v_a_3585_, v_a_3586_, v_a_3587_, v_a_3588_);
return v___x_3593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___boxed(lean_object* v_e_3594_, lean_object* v_a_3595_, lean_object* v_a_3596_, lean_object* v_a_3597_, lean_object* v_a_3598_, lean_object* v_a_3599_){
_start:
{
lean_object* v_res_3600_; 
v_res_3600_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet(v_e_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_);
lean_dec(v_a_3598_);
lean_dec_ref(v_a_3597_);
lean_dec(v_a_3596_);
lean_dec_ref(v_a_3595_);
return v_res_3600_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6(lean_object* v_upperBound_3601_, lean_object* v___x_3602_, lean_object* v_pre_3603_, lean_object* v_post_3604_, uint8_t v_usedLetOnly_3605_, uint8_t v_skipConstInApp_3606_, uint8_t v_skipInstances_3607_, lean_object* v___x_3608_, lean_object* v_inst_3609_, lean_object* v_R_3610_, lean_object* v_a_3611_, lean_object* v_b_3612_, lean_object* v_c_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_){
_start:
{
lean_object* v___x_3620_; 
v___x_3620_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___redArg(v_upperBound_3601_, v___x_3602_, v_pre_3603_, v_post_3604_, v_usedLetOnly_3605_, v_skipConstInApp_3606_, v_skipInstances_3607_, v_a_3611_, v_b_3612_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_);
return v___x_3620_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6___boxed(lean_object** _args){
lean_object* v_upperBound_3621_ = _args[0];
lean_object* v___x_3622_ = _args[1];
lean_object* v_pre_3623_ = _args[2];
lean_object* v_post_3624_ = _args[3];
lean_object* v_usedLetOnly_3625_ = _args[4];
lean_object* v_skipConstInApp_3626_ = _args[5];
lean_object* v_skipInstances_3627_ = _args[6];
lean_object* v___x_3628_ = _args[7];
lean_object* v_inst_3629_ = _args[8];
lean_object* v_R_3630_ = _args[9];
lean_object* v_a_3631_ = _args[10];
lean_object* v_b_3632_ = _args[11];
lean_object* v_c_3633_ = _args[12];
lean_object* v___y_3634_ = _args[13];
lean_object* v___y_3635_ = _args[14];
lean_object* v___y_3636_ = _args[15];
lean_object* v___y_3637_ = _args[16];
lean_object* v___y_3638_ = _args[17];
lean_object* v___y_3639_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_3640_; uint8_t v_skipConstInApp_boxed_3641_; uint8_t v_skipInstances_boxed_3642_; lean_object* v_res_3643_; 
v_usedLetOnly_boxed_3640_ = lean_unbox(v_usedLetOnly_3625_);
v_skipConstInApp_boxed_3641_ = lean_unbox(v_skipConstInApp_3626_);
v_skipInstances_boxed_3642_ = lean_unbox(v_skipInstances_3627_);
v_res_3643_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__6(v_upperBound_3621_, v___x_3622_, v_pre_3623_, v_post_3624_, v_usedLetOnly_boxed_3640_, v_skipConstInApp_boxed_3641_, v_skipInstances_boxed_3642_, v___x_3628_, v_inst_3629_, v_R_3630_, v_a_3631_, v_b_3632_, v_c_3633_, v___y_3634_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_);
lean_dec(v___y_3638_);
lean_dec_ref(v___y_3637_);
lean_dec(v___y_3636_);
lean_dec_ref(v___y_3635_);
lean_dec(v___y_3634_);
lean_dec(v___x_3628_);
lean_dec_ref(v___x_3622_);
lean_dec(v_upperBound_3621_);
return v_res_3643_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7(lean_object* v_00_u03b2_3644_, lean_object* v_m_3645_, lean_object* v_a_3646_){
_start:
{
lean_object* v___x_3647_; 
v___x_3647_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7___redArg(v_m_3645_, v_a_3646_);
return v___x_3647_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7___boxed(lean_object* v_00_u03b2_3648_, lean_object* v_m_3649_, lean_object* v_a_3650_){
_start:
{
lean_object* v_res_3651_; 
v_res_3651_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7(v_00_u03b2_3648_, v_m_3649_, v_a_3650_);
lean_dec_ref(v_a_3650_);
lean_dec_ref(v_m_3649_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10(lean_object* v_00_u03b1_3652_, lean_object* v_name_3653_, uint8_t v_bi_3654_, lean_object* v_type_3655_, lean_object* v_k_3656_, uint8_t v_kind_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_){
_start:
{
lean_object* v___x_3664_; 
v___x_3664_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___redArg(v_name_3653_, v_bi_3654_, v_type_3655_, v_k_3656_, v_kind_3657_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_, v___y_3662_);
return v___x_3664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10___boxed(lean_object* v_00_u03b1_3665_, lean_object* v_name_3666_, lean_object* v_bi_3667_, lean_object* v_type_3668_, lean_object* v_k_3669_, lean_object* v_kind_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_){
_start:
{
uint8_t v_bi_boxed_3677_; uint8_t v_kind_boxed_3678_; lean_object* v_res_3679_; 
v_bi_boxed_3677_ = lean_unbox(v_bi_3667_);
v_kind_boxed_3678_ = lean_unbox(v_kind_3670_);
v_res_3679_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__8_spec__10(v_00_u03b1_3665_, v_name_3666_, v_bi_boxed_3677_, v_type_3668_, v_k_3669_, v_kind_boxed_3678_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_, v___y_3675_);
lean_dec(v___y_3675_);
lean_dec_ref(v___y_3674_);
lean_dec(v___y_3673_);
lean_dec_ref(v___y_3672_);
lean_dec(v___y_3671_);
return v_res_3679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10_spec__13(lean_object* v_00_u03b1_3680_, lean_object* v_name_3681_, lean_object* v_type_3682_, lean_object* v_val_3683_, lean_object* v_k_3684_, uint8_t v_nondep_3685_, uint8_t v_kind_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_){
_start:
{
lean_object* v___x_3693_; 
v___x_3693_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10_spec__13___redArg(v_name_3681_, v_type_3682_, v_val_3683_, v_k_3684_, v_nondep_3685_, v_kind_3686_, v___y_3687_, v___y_3688_, v___y_3689_, v___y_3690_, v___y_3691_);
return v___x_3693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10_spec__13___boxed(lean_object* v_00_u03b1_3694_, lean_object* v_name_3695_, lean_object* v_type_3696_, lean_object* v_val_3697_, lean_object* v_k_3698_, lean_object* v_nondep_3699_, lean_object* v_kind_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_){
_start:
{
uint8_t v_nondep_boxed_3707_; uint8_t v_kind_boxed_3708_; lean_object* v_res_3709_; 
v_nondep_boxed_3707_ = lean_unbox(v_nondep_3699_);
v_kind_boxed_3708_ = lean_unbox(v_kind_3700_);
v_res_3709_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__10_spec__13(v_00_u03b1_3694_, v_name_3695_, v_type_3696_, v_val_3697_, v_k_3698_, v_nondep_boxed_3707_, v_kind_boxed_3708_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
lean_dec(v___y_3705_);
lean_dec_ref(v___y_3704_);
lean_dec(v___y_3703_);
lean_dec_ref(v___y_3702_);
lean_dec(v___y_3701_);
return v_res_3709_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16(lean_object* v_00_u03b1_3710_, lean_object* v_ref_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_){
_start:
{
lean_object* v___x_3717_; 
v___x_3717_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg(v_ref_3711_);
return v___x_3717_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___boxed(lean_object* v_00_u03b1_3718_, lean_object* v_ref_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_){
_start:
{
lean_object* v_res_3725_; 
v_res_3725_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16(v_00_u03b1_3718_, v_ref_3719_, v___y_3720_, v___y_3721_, v___y_3722_, v___y_3723_);
lean_dec(v___y_3723_);
lean_dec_ref(v___y_3722_);
lean_dec(v___y_3721_);
lean_dec_ref(v___y_3720_);
return v_res_3725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12(lean_object* v_00_u03b1_3726_, lean_object* v_x_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_){
_start:
{
lean_object* v___x_3734_; 
v___x_3734_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12___redArg(v_x_3727_, v___y_3728_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
return v___x_3734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12___boxed(lean_object* v_00_u03b1_3735_, lean_object* v_x_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_){
_start:
{
lean_object* v_res_3743_; 
v_res_3743_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12(v_00_u03b1_3735_, v_x_3736_, v___y_3737_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_);
lean_dec(v___y_3741_);
lean_dec_ref(v___y_3740_);
lean_dec(v___y_3739_);
lean_dec_ref(v___y_3738_);
lean_dec(v___y_3737_);
return v_res_3743_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13(lean_object* v_00_u03b2_3744_, lean_object* v_m_3745_, lean_object* v_a_3746_, lean_object* v_b_3747_){
_start:
{
lean_object* v___x_3748_; 
v___x_3748_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13___redArg(v_m_3745_, v_a_3746_, v_b_3747_);
return v___x_3748_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7_spec__8(lean_object* v_00_u03b2_3749_, lean_object* v_a_3750_, lean_object* v_x_3751_){
_start:
{
lean_object* v___x_3752_; 
v___x_3752_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7_spec__8___redArg(v_a_3750_, v_x_3751_);
return v___x_3752_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7_spec__8___boxed(lean_object* v_00_u03b2_3753_, lean_object* v_a_3754_, lean_object* v_x_3755_){
_start:
{
lean_object* v_res_3756_; 
v_res_3756_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7_spec__8(v_00_u03b2_3753_, v_a_3754_, v_x_3755_);
lean_dec(v_x_3755_);
lean_dec_ref(v_a_3754_);
return v_res_3756_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__18(lean_object* v_00_u03b2_3757_, lean_object* v_a_3758_, lean_object* v_x_3759_){
_start:
{
uint8_t v___x_3760_; 
v___x_3760_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__18___redArg(v_a_3758_, v_x_3759_);
return v___x_3760_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__18___boxed(lean_object* v_00_u03b2_3761_, lean_object* v_a_3762_, lean_object* v_x_3763_){
_start:
{
uint8_t v_res_3764_; lean_object* v_r_3765_; 
v_res_3764_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__18(v_00_u03b2_3761_, v_a_3762_, v_x_3763_);
lean_dec(v_x_3763_);
lean_dec_ref(v_a_3762_);
v_r_3765_ = lean_box(v_res_3764_);
return v_r_3765_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19(lean_object* v_00_u03b2_3766_, lean_object* v_data_3767_){
_start:
{
lean_object* v___x_3768_; 
v___x_3768_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19___redArg(v_data_3767_);
return v___x_3768_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__20(lean_object* v_00_u03b2_3769_, lean_object* v_a_3770_, lean_object* v_b_3771_, lean_object* v_x_3772_){
_start:
{
lean_object* v___x_3773_; 
v___x_3773_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__20___redArg(v_a_3770_, v_b_3771_, v_x_3772_);
return v___x_3773_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19_spec__20(lean_object* v_00_u03b2_3774_, lean_object* v_i_3775_, lean_object* v_source_3776_, lean_object* v_target_3777_){
_start:
{
lean_object* v___x_3778_; 
v___x_3778_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19_spec__20___redArg(v_i_3775_, v_source_3776_, v_target_3777_);
return v___x_3778_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19_spec__20_spec__21(lean_object* v_00_u03b2_3779_, lean_object* v_x_3780_, lean_object* v_x_3781_){
_start:
{
lean_object* v___x_3782_; 
v___x_3782_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__13_spec__19_spec__20_spec__21___redArg(v_x_3780_, v_x_3781_);
return v___x_3782_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_WF_preprocess_spec__1(lean_object* v_opts_3783_, lean_object* v_opt_3784_){
_start:
{
lean_object* v_name_3785_; lean_object* v_defValue_3786_; lean_object* v_map_3787_; lean_object* v___x_3788_; 
v_name_3785_ = lean_ctor_get(v_opt_3784_, 0);
v_defValue_3786_ = lean_ctor_get(v_opt_3784_, 1);
v_map_3787_ = lean_ctor_get(v_opts_3783_, 0);
v___x_3788_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3787_, v_name_3785_);
if (lean_obj_tag(v___x_3788_) == 0)
{
uint8_t v___x_3789_; 
v___x_3789_ = lean_unbox(v_defValue_3786_);
return v___x_3789_;
}
else
{
lean_object* v_val_3790_; 
v_val_3790_ = lean_ctor_get(v___x_3788_, 0);
lean_inc(v_val_3790_);
lean_dec_ref_known(v___x_3788_, 1);
if (lean_obj_tag(v_val_3790_) == 1)
{
uint8_t v_v_3791_; 
v_v_3791_ = lean_ctor_get_uint8(v_val_3790_, 0);
lean_dec_ref_known(v_val_3790_, 0);
return v_v_3791_;
}
else
{
uint8_t v___x_3792_; 
lean_dec(v_val_3790_);
v___x_3792_ = lean_unbox(v_defValue_3786_);
return v___x_3792_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_WF_preprocess_spec__1___boxed(lean_object* v_opts_3793_, lean_object* v_opt_3794_){
_start:
{
uint8_t v_res_3795_; lean_object* v_r_3796_; 
v_res_3795_ = l_Lean_Option_get___at___00Lean_Elab_WF_preprocess_spec__1(v_opts_3793_, v_opt_3794_);
lean_dec_ref(v_opt_3794_);
lean_dec_ref(v_opts_3793_);
v_r_3796_ = lean_box(v_res_3795_);
return v_r_3796_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_3797_; lean_object* v___x_3798_; 
v___x_3797_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2);
v___x_3798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3798_, 0, v___x_3797_);
return v___x_3798_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___redArg(){
_start:
{
lean_object* v___x_3800_; 
v___x_3800_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___redArg___closed__0);
return v___x_3800_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___redArg___boxed(lean_object* v___dummy_3801_){
_start:
{
lean_object* v_res_3802_; 
v_res_3802_ = l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___redArg();
return v_res_3802_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___closed__0(void){
_start:
{
lean_object* v___x_3803_; 
v___x_3803_ = l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___redArg();
return v___x_3803_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3(lean_object* v_00_u03b2_3804_){
_start:
{
lean_object* v___x_3805_; 
v___x_3805_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___closed__0);
return v___x_3805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_preprocess_spec__6___redArg(lean_object* v_e_3806_, lean_object* v_k_3807_, uint8_t v_cleanupAnnotations_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_){
_start:
{
lean_object* v___f_3814_; uint8_t v___x_3815_; uint8_t v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; 
v___f_3814_ = lean_alloc_closure((void*)(l_Lean_Meta_letBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_processParamLet_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3814_, 0, v_k_3807_);
v___x_3815_ = 1;
v___x_3816_ = 0;
v___x_3817_ = lean_box(0);
v___x_3818_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_3806_, v___x_3815_, v___x_3816_, v___x_3815_, v___x_3816_, v___x_3817_, v___f_3814_, v_cleanupAnnotations_3808_, v___y_3809_, v___y_3810_, v___y_3811_, v___y_3812_);
if (lean_obj_tag(v___x_3818_) == 0)
{
lean_object* v_a_3819_; lean_object* v___x_3821_; uint8_t v_isShared_3822_; uint8_t v_isSharedCheck_3826_; 
v_a_3819_ = lean_ctor_get(v___x_3818_, 0);
v_isSharedCheck_3826_ = !lean_is_exclusive(v___x_3818_);
if (v_isSharedCheck_3826_ == 0)
{
v___x_3821_ = v___x_3818_;
v_isShared_3822_ = v_isSharedCheck_3826_;
goto v_resetjp_3820_;
}
else
{
lean_inc(v_a_3819_);
lean_dec(v___x_3818_);
v___x_3821_ = lean_box(0);
v_isShared_3822_ = v_isSharedCheck_3826_;
goto v_resetjp_3820_;
}
v_resetjp_3820_:
{
lean_object* v___x_3824_; 
if (v_isShared_3822_ == 0)
{
v___x_3824_ = v___x_3821_;
goto v_reusejp_3823_;
}
else
{
lean_object* v_reuseFailAlloc_3825_; 
v_reuseFailAlloc_3825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3825_, 0, v_a_3819_);
v___x_3824_ = v_reuseFailAlloc_3825_;
goto v_reusejp_3823_;
}
v_reusejp_3823_:
{
return v___x_3824_;
}
}
}
else
{
lean_object* v_a_3827_; lean_object* v___x_3829_; uint8_t v_isShared_3830_; uint8_t v_isSharedCheck_3834_; 
v_a_3827_ = lean_ctor_get(v___x_3818_, 0);
v_isSharedCheck_3834_ = !lean_is_exclusive(v___x_3818_);
if (v_isSharedCheck_3834_ == 0)
{
v___x_3829_ = v___x_3818_;
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
else
{
lean_inc(v_a_3827_);
lean_dec(v___x_3818_);
v___x_3829_ = lean_box(0);
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
v_resetjp_3828_:
{
lean_object* v___x_3832_; 
if (v_isShared_3830_ == 0)
{
v___x_3832_ = v___x_3829_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v_a_3827_);
v___x_3832_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
return v___x_3832_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_preprocess_spec__6___redArg___boxed(lean_object* v_e_3835_, lean_object* v_k_3836_, lean_object* v_cleanupAnnotations_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3843_; lean_object* v_res_3844_; 
v_cleanupAnnotations_boxed_3843_ = lean_unbox(v_cleanupAnnotations_3837_);
v_res_3844_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_preprocess_spec__6___redArg(v_e_3835_, v_k_3836_, v_cleanupAnnotations_boxed_3843_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_);
lean_dec(v___y_3841_);
lean_dec_ref(v___y_3840_);
lean_dec(v___y_3839_);
lean_dec_ref(v___y_3838_);
return v_res_3844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_preprocess_spec__6(lean_object* v_00_u03b1_3845_, lean_object* v_e_3846_, lean_object* v_k_3847_, uint8_t v_cleanupAnnotations_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_){
_start:
{
lean_object* v___x_3854_; 
v___x_3854_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_preprocess_spec__6___redArg(v_e_3846_, v_k_3847_, v_cleanupAnnotations_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_);
return v___x_3854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_preprocess_spec__6___boxed(lean_object* v_00_u03b1_3855_, lean_object* v_e_3856_, lean_object* v_k_3857_, lean_object* v_cleanupAnnotations_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3864_; lean_object* v_res_3865_; 
v_cleanupAnnotations_boxed_3864_ = lean_unbox(v_cleanupAnnotations_3858_);
v_res_3865_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_preprocess_spec__6(v_00_u03b1_3855_, v_e_3856_, v_k_3857_, v_cleanupAnnotations_boxed_3864_, v___y_3859_, v___y_3860_, v___y_3861_, v___y_3862_);
lean_dec(v___y_3862_);
lean_dec_ref(v___y_3861_);
lean_dec(v___y_3860_);
lean_dec_ref(v___y_3859_);
return v_res_3865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_WF_preprocess_spec__0___redArg(lean_object* v_x_3866_, lean_object* v_x_3867_, lean_object* v_x_3868_){
_start:
{
if (lean_obj_tag(v_x_3866_) == 5)
{
lean_object* v_fn_3873_; lean_object* v_arg_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; 
v_fn_3873_ = lean_ctor_get(v_x_3866_, 0);
lean_inc_ref(v_fn_3873_);
v_arg_3874_ = lean_ctor_get(v_x_3866_, 1);
lean_inc_ref(v_arg_3874_);
lean_dec_ref_known(v_x_3866_, 2);
v___x_3875_ = lean_array_set(v_x_3867_, v_x_3868_, v_arg_3874_);
v___x_3876_ = lean_unsigned_to_nat(1u);
v___x_3877_ = lean_nat_sub(v_x_3868_, v___x_3876_);
lean_dec(v_x_3868_);
v_x_3866_ = v_fn_3873_;
v_x_3867_ = v___x_3875_;
v_x_3868_ = v___x_3877_;
goto _start;
}
else
{
lean_object* v___x_3879_; uint8_t v___x_3880_; 
lean_dec(v_x_3868_);
v___x_3879_ = ((lean_object*)(l_Lean_Elab_WF_isWfParam_x3f___closed__1));
v___x_3880_ = l_Lean_Expr_isConstOf(v_x_3866_, v___x_3879_);
lean_dec_ref(v_x_3866_);
if (v___x_3880_ == 0)
{
lean_dec_ref(v_x_3867_);
goto v___jp_3870_;
}
else
{
lean_object* v___x_3881_; lean_object* v___x_3882_; uint8_t v___x_3883_; 
v___x_3881_ = lean_unsigned_to_nat(2u);
v___x_3882_ = lean_array_get_size(v_x_3867_);
v___x_3883_ = lean_nat_dec_le(v___x_3881_, v___x_3882_);
if (v___x_3883_ == 0)
{
lean_dec_ref(v_x_3867_);
goto v___jp_3870_;
}
else
{
lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; 
v___x_3884_ = lean_unsigned_to_nat(1u);
v___x_3885_ = lean_array_fget(v_x_3867_, v___x_3884_);
v___x_3886_ = l_Array_toSubarray___redArg(v_x_3867_, v___x_3881_, v___x_3882_);
v___x_3887_ = l_Subarray_copy___redArg(v___x_3886_);
v___x_3888_ = l_Lean_mkAppN(v___x_3885_, v___x_3887_);
lean_dec_ref(v___x_3887_);
v___x_3889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3888_);
v___x_3890_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3890_, 0, v___x_3889_);
v___x_3891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3891_, 0, v___x_3890_);
return v___x_3891_;
}
}
}
v___jp_3870_:
{
lean_object* v___x_3871_; lean_object* v___x_3872_; 
v___x_3871_ = ((lean_object*)(l_Lean_Elab_WF_paramProj___closed__0));
v___x_3872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3872_, 0, v___x_3871_);
return v___x_3872_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_WF_preprocess_spec__0___redArg___boxed(lean_object* v_x_3892_, lean_object* v_x_3893_, lean_object* v_x_3894_, lean_object* v___y_3895_){
_start:
{
lean_object* v_res_3896_; 
v_res_3896_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_WF_preprocess_spec__0___redArg(v_x_3892_, v_x_3893_, v_x_3894_);
return v_res_3896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preprocess___lam__0(lean_object* v_e_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_){
_start:
{
lean_object* v_dummy_3903_; lean_object* v_nargs_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; 
v_dummy_3903_ = lean_obj_once(&l_Lean_Elab_WF_condToDite___redArg___closed__7, &l_Lean_Elab_WF_condToDite___redArg___closed__7_once, _init_l_Lean_Elab_WF_condToDite___redArg___closed__7);
v_nargs_3904_ = l_Lean_Expr_getAppNumArgs(v_e_3897_);
lean_inc(v_nargs_3904_);
v___x_3905_ = lean_mk_array(v_nargs_3904_, v_dummy_3903_);
v___x_3906_ = lean_unsigned_to_nat(1u);
v___x_3907_ = lean_nat_sub(v_nargs_3904_, v___x_3906_);
lean_dec(v_nargs_3904_);
v___x_3908_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_WF_preprocess_spec__0___redArg(v_e_3897_, v___x_3905_, v___x_3907_);
return v___x_3908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preprocess___lam__0___boxed(lean_object* v_e_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_){
_start:
{
lean_object* v_res_3915_; 
v_res_3915_ = l_Lean_Elab_WF_preprocess___lam__0(v_e_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_);
lean_dec(v___y_3913_);
lean_dec_ref(v___y_3912_);
lean_dec(v___y_3911_);
lean_dec_ref(v___y_3910_);
return v_res_3915_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__11___redArg(lean_object* v_ref_3916_){
_start:
{
lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; 
v___x_3918_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__12_spec__16___redArg___closed__5);
v___x_3919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3919_, 0, v_ref_3916_);
lean_ctor_set(v___x_3919_, 1, v___x_3918_);
v___x_3920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3920_, 0, v___x_3919_);
return v___x_3920_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__11___redArg___boxed(lean_object* v_ref_3921_, lean_object* v___y_3922_){
_start:
{
lean_object* v_res_3923_; 
v_res_3923_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__11___redArg(v_ref_3921_);
return v_res_3923_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___redArg___closed__0(void){
_start:
{
lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; 
v___x_3924_ = lean_box(0);
v___x_3925_ = l_Lean_interruptExceptionId;
v___x_3926_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3926_, 0, v___x_3925_);
lean_ctor_set(v___x_3926_, 1, v___x_3924_);
return v___x_3926_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___redArg(){
_start:
{
lean_object* v___x_3928_; lean_object* v___x_3929_; 
v___x_3928_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___redArg___closed__0);
v___x_3929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3929_, 0, v___x_3928_);
return v___x_3929_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___redArg___boxed(lean_object* v___y_3930_){
_start:
{
lean_object* v_res_3931_; 
v_res_3931_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___redArg();
return v_res_3931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9___redArg(lean_object* v_x_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_){
_start:
{
lean_object* v___y_3940_; uint8_t v___y_3950_; lean_object* v___y_3951_; uint8_t v___y_3952_; lean_object* v___y_3953_; uint16_t v___y_3954_; lean_object* v___y_3955_; uint8_t v___y_3956_; lean_object* v_toCold_3961_; lean_object* v_currRecDepth_3962_; lean_object* v_ref_3963_; uint16_t v_optionFlags_3964_; uint8_t v_suppressElabErrors_3965_; uint8_t v_checkDeprecated_3966_; uint8_t v_isRecordingDeps_3967_; lean_object* v_maxRecDepth_3968_; lean_object* v_cancelTk_x3f_3969_; 
v_toCold_3961_ = lean_ctor_get(v___y_3936_, 0);
v_currRecDepth_3962_ = lean_ctor_get(v___y_3936_, 1);
v_ref_3963_ = lean_ctor_get(v___y_3936_, 2);
v_optionFlags_3964_ = lean_ctor_get_uint16(v___y_3936_, sizeof(void*)*3);
v_suppressElabErrors_3965_ = lean_ctor_get_uint8(v___y_3936_, sizeof(void*)*3 + 2);
v_checkDeprecated_3966_ = lean_ctor_get_uint8(v___y_3936_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3967_ = lean_ctor_get_uint8(v___y_3936_, sizeof(void*)*3 + 4);
v_maxRecDepth_3968_ = lean_ctor_get(v_toCold_3961_, 3);
v_cancelTk_x3f_3969_ = lean_ctor_get(v_toCold_3961_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3969_) == 1)
{
lean_object* v_val_3975_; uint8_t v___x_3976_; 
v_val_3975_ = lean_ctor_get(v_cancelTk_x3f_3969_, 0);
v___x_3976_ = l_IO_CancelToken_isSet(v_val_3975_);
if (v___x_3976_ == 0)
{
goto v___jp_3970_;
}
else
{
lean_object* v___x_3977_; lean_object* v_a_3978_; lean_object* v___x_3980_; uint8_t v_isShared_3981_; uint8_t v_isSharedCheck_3985_; 
lean_dec_ref(v_x_3932_);
v___x_3977_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___redArg();
v_a_3978_ = lean_ctor_get(v___x_3977_, 0);
v_isSharedCheck_3985_ = !lean_is_exclusive(v___x_3977_);
if (v_isSharedCheck_3985_ == 0)
{
v___x_3980_ = v___x_3977_;
v_isShared_3981_ = v_isSharedCheck_3985_;
goto v_resetjp_3979_;
}
else
{
lean_inc(v_a_3978_);
lean_dec(v___x_3977_);
v___x_3980_ = lean_box(0);
v_isShared_3981_ = v_isSharedCheck_3985_;
goto v_resetjp_3979_;
}
v_resetjp_3979_:
{
lean_object* v___x_3983_; 
if (v_isShared_3981_ == 0)
{
v___x_3983_ = v___x_3980_;
goto v_reusejp_3982_;
}
else
{
lean_object* v_reuseFailAlloc_3984_; 
v_reuseFailAlloc_3984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3984_, 0, v_a_3978_);
v___x_3983_ = v_reuseFailAlloc_3984_;
goto v_reusejp_3982_;
}
v_reusejp_3982_:
{
return v___x_3983_;
}
}
}
}
else
{
goto v___jp_3970_;
}
v___jp_3939_:
{
if (lean_obj_tag(v___y_3940_) == 0)
{
return v___y_3940_;
}
else
{
lean_object* v_a_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3948_; 
v_a_3941_ = lean_ctor_get(v___y_3940_, 0);
v_isSharedCheck_3948_ = !lean_is_exclusive(v___y_3940_);
if (v_isSharedCheck_3948_ == 0)
{
v___x_3943_ = v___y_3940_;
v_isShared_3944_ = v_isSharedCheck_3948_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_a_3941_);
lean_dec(v___y_3940_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3948_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
lean_object* v___x_3946_; 
if (v_isShared_3944_ == 0)
{
v___x_3946_ = v___x_3943_;
goto v_reusejp_3945_;
}
else
{
lean_object* v_reuseFailAlloc_3947_; 
v_reuseFailAlloc_3947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3947_, 0, v_a_3941_);
v___x_3946_ = v_reuseFailAlloc_3947_;
goto v_reusejp_3945_;
}
v_reusejp_3945_:
{
return v___x_3946_;
}
}
}
}
v___jp_3949_:
{
lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; 
v___x_3957_ = lean_unsigned_to_nat(1u);
v___x_3958_ = lean_nat_add(v___y_3951_, v___x_3957_);
lean_inc_ref(v___y_3953_);
v___x_3959_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3959_, 0, v___y_3953_);
lean_ctor_set(v___x_3959_, 1, v___x_3958_);
lean_ctor_set(v___x_3959_, 2, v___y_3955_);
lean_ctor_set_uint16(v___x_3959_, sizeof(void*)*3, v___y_3954_);
lean_ctor_set_uint8(v___x_3959_, sizeof(void*)*3 + 2, v___y_3952_);
lean_ctor_set_uint8(v___x_3959_, sizeof(void*)*3 + 3, v___y_3956_);
lean_ctor_set_uint8(v___x_3959_, sizeof(void*)*3 + 4, v___y_3950_);
lean_inc(v___y_3937_);
lean_inc(v___y_3935_);
lean_inc_ref(v___y_3934_);
lean_inc(v___y_3933_);
v___x_3960_ = lean_apply_6(v_x_3932_, v___y_3933_, v___y_3934_, v___y_3935_, v___x_3959_, v___y_3937_, lean_box(0));
v___y_3940_ = v___x_3960_;
goto v___jp_3939_;
}
v___jp_3970_:
{
lean_object* v___x_3971_; uint8_t v___x_3972_; 
v___x_3971_ = lean_unsigned_to_nat(0u);
v___x_3972_ = lean_nat_dec_eq(v_maxRecDepth_3968_, v___x_3971_);
if (v___x_3972_ == 0)
{
uint8_t v___x_3973_; 
v___x_3973_ = lean_nat_dec_eq(v_currRecDepth_3962_, v_maxRecDepth_3968_);
if (v___x_3973_ == 0)
{
lean_inc(v_ref_3963_);
v___y_3950_ = v_isRecordingDeps_3967_;
v___y_3951_ = v_currRecDepth_3962_;
v___y_3952_ = v_suppressElabErrors_3965_;
v___y_3953_ = v_toCold_3961_;
v___y_3954_ = v_optionFlags_3964_;
v___y_3955_ = v_ref_3963_;
v___y_3956_ = v_checkDeprecated_3966_;
goto v___jp_3949_;
}
else
{
lean_object* v___x_3974_; 
lean_dec_ref(v_x_3932_);
lean_inc(v_ref_3963_);
v___x_3974_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__11___redArg(v_ref_3963_);
v___y_3940_ = v___x_3974_;
goto v___jp_3939_;
}
}
else
{
lean_inc(v_ref_3963_);
v___y_3950_ = v_isRecordingDeps_3967_;
v___y_3951_ = v_currRecDepth_3962_;
v___y_3952_ = v_suppressElabErrors_3965_;
v___y_3953_ = v_toCold_3961_;
v___y_3954_ = v_optionFlags_3964_;
v___y_3955_ = v_ref_3963_;
v___y_3956_ = v_checkDeprecated_3966_;
goto v___jp_3949_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9___redArg___boxed(lean_object* v_x_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_){
_start:
{
lean_object* v_res_3993_; 
v_res_3993_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9___redArg(v_x_3986_, v___y_3987_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_);
lean_dec(v___y_3991_);
lean_dec_ref(v___y_3990_);
lean_dec(v___y_3989_);
lean_dec_ref(v___y_3988_);
lean_dec(v___y_3987_);
return v_res_3993_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__6(lean_object* v_pre_3994_, lean_object* v_post_3995_, size_t v_sz_3996_, size_t v_i_3997_, lean_object* v_bs_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_){
_start:
{
uint8_t v___x_4005_; 
v___x_4005_ = lean_usize_dec_lt(v_i_3997_, v_sz_3996_);
if (v___x_4005_ == 0)
{
lean_object* v___x_4006_; 
lean_dec_ref(v_post_3995_);
lean_dec_ref(v_pre_3994_);
v___x_4006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4006_, 0, v_bs_3998_);
return v___x_4006_;
}
else
{
lean_object* v_v_4007_; lean_object* v___x_4008_; lean_object* v_bs_x27_4009_; lean_object* v___x_4010_; 
v_v_4007_ = lean_array_uget(v_bs_3998_, v_i_3997_);
v___x_4008_ = lean_unsigned_to_nat(0u);
v_bs_x27_4009_ = lean_array_uset(v_bs_3998_, v_i_3997_, v___x_4008_);
lean_inc_ref(v_post_3995_);
lean_inc_ref(v_pre_3994_);
v___x_4010_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_3994_, v_post_3995_, v_v_4007_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_);
if (lean_obj_tag(v___x_4010_) == 0)
{
lean_object* v_a_4011_; size_t v___x_4012_; size_t v___x_4013_; lean_object* v___x_4014_; 
v_a_4011_ = lean_ctor_get(v___x_4010_, 0);
lean_inc(v_a_4011_);
lean_dec_ref_known(v___x_4010_, 1);
v___x_4012_ = ((size_t)1ULL);
v___x_4013_ = lean_usize_add(v_i_3997_, v___x_4012_);
v___x_4014_ = lean_array_uset(v_bs_x27_4009_, v_i_3997_, v_a_4011_);
v_i_3997_ = v___x_4013_;
v_bs_3998_ = v___x_4014_;
goto _start;
}
else
{
lean_object* v_a_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4023_; 
lean_dec_ref(v_bs_x27_4009_);
lean_dec_ref(v_post_3995_);
lean_dec_ref(v_pre_3994_);
v_a_4016_ = lean_ctor_get(v___x_4010_, 0);
v_isSharedCheck_4023_ = !lean_is_exclusive(v___x_4010_);
if (v_isSharedCheck_4023_ == 0)
{
v___x_4018_ = v___x_4010_;
v_isShared_4019_ = v_isSharedCheck_4023_;
goto v_resetjp_4017_;
}
else
{
lean_inc(v_a_4016_);
lean_dec(v___x_4010_);
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
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__8(lean_object* v_pre_4024_, lean_object* v_post_4025_, lean_object* v___y_4026_, lean_object* v_x_4027_, lean_object* v_x_4028_, lean_object* v_x_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_){
_start:
{
if (lean_obj_tag(v_x_4027_) == 5)
{
lean_object* v_fn_4036_; lean_object* v_arg_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; 
v_fn_4036_ = lean_ctor_get(v_x_4027_, 0);
lean_inc_ref(v_fn_4036_);
v_arg_4037_ = lean_ctor_get(v_x_4027_, 1);
lean_inc_ref(v_arg_4037_);
lean_dec_ref_known(v_x_4027_, 2);
v___x_4038_ = lean_array_set(v_x_4028_, v_x_4029_, v_arg_4037_);
v___x_4039_ = lean_unsigned_to_nat(1u);
v___x_4040_ = lean_nat_sub(v_x_4029_, v___x_4039_);
lean_dec(v_x_4029_);
v_x_4027_ = v_fn_4036_;
v_x_4028_ = v___x_4038_;
v_x_4029_ = v___x_4040_;
goto _start;
}
else
{
lean_object* v___x_4042_; 
lean_dec(v_x_4029_);
lean_inc_ref(v_post_4025_);
lean_inc_ref(v_pre_4024_);
v___x_4042_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_4024_, v_post_4025_, v_x_4027_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_, v___y_4034_);
if (lean_obj_tag(v___x_4042_) == 0)
{
lean_object* v_a_4043_; size_t v_sz_4044_; size_t v___x_4045_; lean_object* v___x_4046_; 
v_a_4043_ = lean_ctor_get(v___x_4042_, 0);
lean_inc(v_a_4043_);
lean_dec_ref_known(v___x_4042_, 1);
v_sz_4044_ = lean_array_size(v_x_4028_);
v___x_4045_ = ((size_t)0ULL);
v___x_4046_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__6(v_pre_4024_, v_post_4025_, v_sz_4044_, v___x_4045_, v_x_4028_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_, v___y_4034_);
if (lean_obj_tag(v___x_4046_) == 0)
{
lean_object* v_a_4047_; lean_object* v___x_4049_; uint8_t v_isShared_4050_; uint8_t v_isSharedCheck_4055_; 
v_a_4047_ = lean_ctor_get(v___x_4046_, 0);
v_isSharedCheck_4055_ = !lean_is_exclusive(v___x_4046_);
if (v_isSharedCheck_4055_ == 0)
{
v___x_4049_ = v___x_4046_;
v_isShared_4050_ = v_isSharedCheck_4055_;
goto v_resetjp_4048_;
}
else
{
lean_inc(v_a_4047_);
lean_dec(v___x_4046_);
v___x_4049_ = lean_box(0);
v_isShared_4050_ = v_isSharedCheck_4055_;
goto v_resetjp_4048_;
}
v_resetjp_4048_:
{
lean_object* v___x_4051_; lean_object* v___x_4053_; 
v___x_4051_ = l_Lean_Expr_updateAppN(v___y_4026_, v_a_4043_, v_a_4047_);
lean_dec(v_a_4047_);
if (v_isShared_4050_ == 0)
{
lean_ctor_set(v___x_4049_, 0, v___x_4051_);
v___x_4053_ = v___x_4049_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4054_; 
v_reuseFailAlloc_4054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4054_, 0, v___x_4051_);
v___x_4053_ = v_reuseFailAlloc_4054_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
return v___x_4053_;
}
}
}
else
{
lean_object* v_a_4056_; lean_object* v___x_4058_; uint8_t v_isShared_4059_; uint8_t v_isSharedCheck_4063_; 
lean_dec(v_a_4043_);
v_a_4056_ = lean_ctor_get(v___x_4046_, 0);
v_isSharedCheck_4063_ = !lean_is_exclusive(v___x_4046_);
if (v_isSharedCheck_4063_ == 0)
{
v___x_4058_ = v___x_4046_;
v_isShared_4059_ = v_isSharedCheck_4063_;
goto v_resetjp_4057_;
}
else
{
lean_inc(v_a_4056_);
lean_dec(v___x_4046_);
v___x_4058_ = lean_box(0);
v_isShared_4059_ = v_isSharedCheck_4063_;
goto v_resetjp_4057_;
}
v_resetjp_4057_:
{
lean_object* v___x_4061_; 
if (v_isShared_4059_ == 0)
{
v___x_4061_ = v___x_4058_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v_a_4056_);
v___x_4061_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
return v___x_4061_;
}
}
}
}
else
{
lean_dec_ref(v_x_4028_);
lean_dec_ref(v_post_4025_);
lean_dec_ref(v_pre_4024_);
return v___x_4042_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4___lam__1(lean_object* v___x_4064_, lean_object* v_pre_4065_, lean_object* v_e_4066_, lean_object* v_post_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v___x_4074_; 
v___x_4074_ = l_Lean_Core_checkSystem(v___x_4064_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4074_) == 0)
{
lean_object* v___x_4075_; 
lean_dec_ref_known(v___x_4074_, 1);
lean_inc_ref(v_pre_4065_);
lean_inc(v___y_4072_);
lean_inc_ref(v___y_4071_);
lean_inc(v___y_4070_);
lean_inc_ref(v___y_4069_);
lean_inc_ref(v_e_4066_);
v___x_4075_ = lean_apply_6(v_pre_4065_, v_e_4066_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_, lean_box(0));
if (lean_obj_tag(v___x_4075_) == 0)
{
lean_object* v_a_4076_; lean_object* v___x_4078_; uint8_t v_isShared_4079_; uint8_t v_isSharedCheck_4193_; 
v_a_4076_ = lean_ctor_get(v___x_4075_, 0);
v_isSharedCheck_4193_ = !lean_is_exclusive(v___x_4075_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4078_ = v___x_4075_;
v_isShared_4079_ = v_isSharedCheck_4193_;
goto v_resetjp_4077_;
}
else
{
lean_inc(v_a_4076_);
lean_dec(v___x_4075_);
v___x_4078_ = lean_box(0);
v_isShared_4079_ = v_isSharedCheck_4193_;
goto v_resetjp_4077_;
}
v_resetjp_4077_:
{
lean_object* v___y_4081_; 
switch(lean_obj_tag(v_a_4076_))
{
case 0:
{
lean_object* v_e_4183_; lean_object* v___x_4185_; 
lean_dec_ref(v_post_4067_);
lean_dec_ref(v_e_4066_);
lean_dec_ref(v_pre_4065_);
v_e_4183_ = lean_ctor_get(v_a_4076_, 0);
lean_inc_ref(v_e_4183_);
lean_dec_ref_known(v_a_4076_, 1);
if (v_isShared_4079_ == 0)
{
lean_ctor_set(v___x_4078_, 0, v_e_4183_);
v___x_4185_ = v___x_4078_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v_e_4183_);
v___x_4185_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
return v___x_4185_;
}
}
case 1:
{
lean_object* v_e_4187_; lean_object* v___x_4188_; 
lean_del_object(v___x_4078_);
lean_dec_ref(v_e_4066_);
v_e_4187_ = lean_ctor_get(v_a_4076_, 0);
lean_inc_ref(v_e_4187_);
lean_dec_ref_known(v_a_4076_, 1);
lean_inc_ref(v_post_4067_);
lean_inc_ref(v_pre_4065_);
v___x_4188_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_4065_, v_post_4067_, v_e_4187_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4188_) == 0)
{
lean_object* v_a_4189_; lean_object* v___x_4190_; 
v_a_4189_ = lean_ctor_get(v___x_4188_, 0);
lean_inc(v_a_4189_);
lean_dec_ref_known(v___x_4188_, 1);
v___x_4190_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v_a_4189_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4190_;
}
else
{
lean_dec_ref(v_post_4067_);
lean_dec_ref(v_pre_4065_);
return v___x_4188_;
}
}
default: 
{
lean_object* v_e_x3f_4191_; 
lean_del_object(v___x_4078_);
v_e_x3f_4191_ = lean_ctor_get(v_a_4076_, 0);
lean_inc(v_e_x3f_4191_);
lean_dec_ref_known(v_a_4076_, 1);
if (lean_obj_tag(v_e_x3f_4191_) == 0)
{
v___y_4081_ = v_e_4066_;
goto v___jp_4080_;
}
else
{
lean_object* v_val_4192_; 
lean_dec_ref(v_e_4066_);
v_val_4192_ = lean_ctor_get(v_e_x3f_4191_, 0);
lean_inc(v_val_4192_);
lean_dec_ref_known(v_e_x3f_4191_, 1);
v___y_4081_ = v_val_4192_;
goto v___jp_4080_;
}
}
}
v___jp_4080_:
{
switch(lean_obj_tag(v___y_4081_))
{
case 7:
{
lean_object* v_binderName_4082_; lean_object* v_binderType_4083_; lean_object* v_body_4084_; uint8_t v_binderInfo_4085_; lean_object* v___x_4086_; 
v_binderName_4082_ = lean_ctor_get(v___y_4081_, 0);
v_binderType_4083_ = lean_ctor_get(v___y_4081_, 1);
v_body_4084_ = lean_ctor_get(v___y_4081_, 2);
v_binderInfo_4085_ = lean_ctor_get_uint8(v___y_4081_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_4083_);
lean_inc_ref(v_post_4067_);
lean_inc_ref(v_pre_4065_);
v___x_4086_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_4065_, v_post_4067_, v_binderType_4083_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4086_) == 0)
{
lean_object* v_a_4087_; lean_object* v___x_4088_; 
v_a_4087_ = lean_ctor_get(v___x_4086_, 0);
lean_inc(v_a_4087_);
lean_dec_ref_known(v___x_4086_, 1);
lean_inc_ref(v_body_4084_);
lean_inc_ref(v_post_4067_);
lean_inc_ref(v_pre_4065_);
v___x_4088_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_4065_, v_post_4067_, v_body_4084_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4088_) == 0)
{
lean_object* v_a_4089_; size_t v___x_4090_; size_t v___x_4091_; uint8_t v___x_4092_; 
v_a_4089_ = lean_ctor_get(v___x_4088_, 0);
lean_inc(v_a_4089_);
lean_dec_ref_known(v___x_4088_, 1);
v___x_4090_ = lean_ptr_addr(v_binderType_4083_);
v___x_4091_ = lean_ptr_addr(v_a_4087_);
v___x_4092_ = lean_usize_dec_eq(v___x_4090_, v___x_4091_);
if (v___x_4092_ == 0)
{
lean_object* v___x_4093_; lean_object* v___x_4094_; 
lean_inc(v_binderName_4082_);
lean_dec_ref_known(v___y_4081_, 3);
v___x_4093_ = l_Lean_Expr_forallE___override(v_binderName_4082_, v_a_4087_, v_a_4089_, v_binderInfo_4085_);
v___x_4094_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___x_4093_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4094_;
}
else
{
size_t v___x_4095_; size_t v___x_4096_; uint8_t v___x_4097_; 
v___x_4095_ = lean_ptr_addr(v_body_4084_);
v___x_4096_ = lean_ptr_addr(v_a_4089_);
v___x_4097_ = lean_usize_dec_eq(v___x_4095_, v___x_4096_);
if (v___x_4097_ == 0)
{
lean_object* v___x_4098_; lean_object* v___x_4099_; 
lean_inc(v_binderName_4082_);
lean_dec_ref_known(v___y_4081_, 3);
v___x_4098_ = l_Lean_Expr_forallE___override(v_binderName_4082_, v_a_4087_, v_a_4089_, v_binderInfo_4085_);
v___x_4099_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___x_4098_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4099_;
}
else
{
uint8_t v___x_4100_; 
v___x_4100_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_4085_, v_binderInfo_4085_);
if (v___x_4100_ == 0)
{
lean_object* v___x_4101_; lean_object* v___x_4102_; 
lean_inc(v_binderName_4082_);
lean_dec_ref_known(v___y_4081_, 3);
v___x_4101_ = l_Lean_Expr_forallE___override(v_binderName_4082_, v_a_4087_, v_a_4089_, v_binderInfo_4085_);
v___x_4102_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___x_4101_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4102_;
}
else
{
lean_object* v___x_4103_; 
lean_dec(v_a_4089_);
lean_dec(v_a_4087_);
v___x_4103_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___y_4081_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4103_;
}
}
}
}
else
{
lean_dec(v_a_4087_);
lean_dec_ref_known(v___y_4081_, 3);
lean_dec_ref(v_post_4067_);
lean_dec_ref(v_pre_4065_);
return v___x_4088_;
}
}
else
{
lean_dec_ref_known(v___y_4081_, 3);
lean_dec_ref(v_post_4067_);
lean_dec_ref(v_pre_4065_);
return v___x_4086_;
}
}
case 6:
{
lean_object* v_binderName_4104_; lean_object* v_binderType_4105_; lean_object* v_body_4106_; uint8_t v_binderInfo_4107_; lean_object* v___x_4108_; 
v_binderName_4104_ = lean_ctor_get(v___y_4081_, 0);
v_binderType_4105_ = lean_ctor_get(v___y_4081_, 1);
v_body_4106_ = lean_ctor_get(v___y_4081_, 2);
v_binderInfo_4107_ = lean_ctor_get_uint8(v___y_4081_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_4105_);
lean_inc_ref(v_post_4067_);
lean_inc_ref(v_pre_4065_);
v___x_4108_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_4065_, v_post_4067_, v_binderType_4105_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4108_) == 0)
{
lean_object* v_a_4109_; lean_object* v___x_4110_; 
v_a_4109_ = lean_ctor_get(v___x_4108_, 0);
lean_inc(v_a_4109_);
lean_dec_ref_known(v___x_4108_, 1);
lean_inc_ref(v_body_4106_);
lean_inc_ref(v_post_4067_);
lean_inc_ref(v_pre_4065_);
v___x_4110_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_4065_, v_post_4067_, v_body_4106_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4110_) == 0)
{
lean_object* v_a_4111_; size_t v___x_4112_; size_t v___x_4113_; uint8_t v___x_4114_; 
v_a_4111_ = lean_ctor_get(v___x_4110_, 0);
lean_inc(v_a_4111_);
lean_dec_ref_known(v___x_4110_, 1);
v___x_4112_ = lean_ptr_addr(v_binderType_4105_);
v___x_4113_ = lean_ptr_addr(v_a_4109_);
v___x_4114_ = lean_usize_dec_eq(v___x_4112_, v___x_4113_);
if (v___x_4114_ == 0)
{
lean_object* v___x_4115_; lean_object* v___x_4116_; 
lean_inc(v_binderName_4104_);
lean_dec_ref_known(v___y_4081_, 3);
v___x_4115_ = l_Lean_Expr_lam___override(v_binderName_4104_, v_a_4109_, v_a_4111_, v_binderInfo_4107_);
v___x_4116_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___x_4115_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4116_;
}
else
{
size_t v___x_4117_; size_t v___x_4118_; uint8_t v___x_4119_; 
v___x_4117_ = lean_ptr_addr(v_body_4106_);
v___x_4118_ = lean_ptr_addr(v_a_4111_);
v___x_4119_ = lean_usize_dec_eq(v___x_4117_, v___x_4118_);
if (v___x_4119_ == 0)
{
lean_object* v___x_4120_; lean_object* v___x_4121_; 
lean_inc(v_binderName_4104_);
lean_dec_ref_known(v___y_4081_, 3);
v___x_4120_ = l_Lean_Expr_lam___override(v_binderName_4104_, v_a_4109_, v_a_4111_, v_binderInfo_4107_);
v___x_4121_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___x_4120_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4121_;
}
else
{
uint8_t v___x_4122_; 
v___x_4122_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_4107_, v_binderInfo_4107_);
if (v___x_4122_ == 0)
{
lean_object* v___x_4123_; lean_object* v___x_4124_; 
lean_inc(v_binderName_4104_);
lean_dec_ref_known(v___y_4081_, 3);
v___x_4123_ = l_Lean_Expr_lam___override(v_binderName_4104_, v_a_4109_, v_a_4111_, v_binderInfo_4107_);
v___x_4124_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___x_4123_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4124_;
}
else
{
lean_object* v___x_4125_; 
lean_dec(v_a_4111_);
lean_dec(v_a_4109_);
v___x_4125_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___y_4081_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4125_;
}
}
}
}
else
{
lean_dec(v_a_4109_);
lean_dec_ref_known(v___y_4081_, 3);
lean_dec_ref(v_post_4067_);
lean_dec_ref(v_pre_4065_);
return v___x_4110_;
}
}
else
{
lean_dec_ref_known(v___y_4081_, 3);
lean_dec_ref(v_post_4067_);
lean_dec_ref(v_pre_4065_);
return v___x_4108_;
}
}
case 8:
{
lean_object* v_declName_4126_; lean_object* v_type_4127_; lean_object* v_value_4128_; lean_object* v_body_4129_; uint8_t v_nondep_4130_; lean_object* v___x_4131_; 
v_declName_4126_ = lean_ctor_get(v___y_4081_, 0);
v_type_4127_ = lean_ctor_get(v___y_4081_, 1);
v_value_4128_ = lean_ctor_get(v___y_4081_, 2);
v_body_4129_ = lean_ctor_get(v___y_4081_, 3);
v_nondep_4130_ = lean_ctor_get_uint8(v___y_4081_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_4127_);
lean_inc_ref(v_post_4067_);
lean_inc_ref(v_pre_4065_);
v___x_4131_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_4065_, v_post_4067_, v_type_4127_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4131_) == 0)
{
lean_object* v_a_4132_; lean_object* v___x_4133_; 
v_a_4132_ = lean_ctor_get(v___x_4131_, 0);
lean_inc(v_a_4132_);
lean_dec_ref_known(v___x_4131_, 1);
lean_inc_ref(v_value_4128_);
lean_inc_ref(v_post_4067_);
lean_inc_ref(v_pre_4065_);
v___x_4133_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_4065_, v_post_4067_, v_value_4128_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4133_) == 0)
{
lean_object* v_a_4134_; lean_object* v___x_4135_; 
v_a_4134_ = lean_ctor_get(v___x_4133_, 0);
lean_inc(v_a_4134_);
lean_dec_ref_known(v___x_4133_, 1);
lean_inc_ref(v_body_4129_);
lean_inc_ref(v_post_4067_);
lean_inc_ref(v_pre_4065_);
v___x_4135_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_4065_, v_post_4067_, v_body_4129_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4135_) == 0)
{
lean_object* v_a_4136_; size_t v___x_4137_; size_t v___x_4138_; uint8_t v___x_4139_; 
v_a_4136_ = lean_ctor_get(v___x_4135_, 0);
lean_inc(v_a_4136_);
lean_dec_ref_known(v___x_4135_, 1);
v___x_4137_ = lean_ptr_addr(v_type_4127_);
v___x_4138_ = lean_ptr_addr(v_a_4132_);
v___x_4139_ = lean_usize_dec_eq(v___x_4137_, v___x_4138_);
if (v___x_4139_ == 0)
{
lean_object* v___x_4140_; lean_object* v___x_4141_; 
lean_inc(v_declName_4126_);
lean_dec_ref_known(v___y_4081_, 4);
v___x_4140_ = l_Lean_Expr_letE___override(v_declName_4126_, v_a_4132_, v_a_4134_, v_a_4136_, v_nondep_4130_);
v___x_4141_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___x_4140_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4141_;
}
else
{
size_t v___x_4142_; size_t v___x_4143_; uint8_t v___x_4144_; 
v___x_4142_ = lean_ptr_addr(v_value_4128_);
v___x_4143_ = lean_ptr_addr(v_a_4134_);
v___x_4144_ = lean_usize_dec_eq(v___x_4142_, v___x_4143_);
if (v___x_4144_ == 0)
{
lean_object* v___x_4145_; lean_object* v___x_4146_; 
lean_inc(v_declName_4126_);
lean_dec_ref_known(v___y_4081_, 4);
v___x_4145_ = l_Lean_Expr_letE___override(v_declName_4126_, v_a_4132_, v_a_4134_, v_a_4136_, v_nondep_4130_);
v___x_4146_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___x_4145_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4146_;
}
else
{
size_t v___x_4147_; size_t v___x_4148_; uint8_t v___x_4149_; 
v___x_4147_ = lean_ptr_addr(v_body_4129_);
v___x_4148_ = lean_ptr_addr(v_a_4136_);
v___x_4149_ = lean_usize_dec_eq(v___x_4147_, v___x_4148_);
if (v___x_4149_ == 0)
{
lean_object* v___x_4150_; lean_object* v___x_4151_; 
lean_inc(v_declName_4126_);
lean_dec_ref_known(v___y_4081_, 4);
v___x_4150_ = l_Lean_Expr_letE___override(v_declName_4126_, v_a_4132_, v_a_4134_, v_a_4136_, v_nondep_4130_);
v___x_4151_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___x_4150_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4151_;
}
else
{
lean_object* v___x_4152_; 
lean_dec(v_a_4136_);
lean_dec(v_a_4134_);
lean_dec(v_a_4132_);
v___x_4152_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___y_4081_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4152_;
}
}
}
}
else
{
lean_dec(v_a_4134_);
lean_dec(v_a_4132_);
lean_dec_ref_known(v___y_4081_, 4);
lean_dec_ref(v_post_4067_);
lean_dec_ref(v_pre_4065_);
return v___x_4135_;
}
}
else
{
lean_dec(v_a_4132_);
lean_dec_ref_known(v___y_4081_, 4);
lean_dec_ref(v_post_4067_);
lean_dec_ref(v_pre_4065_);
return v___x_4133_;
}
}
else
{
lean_dec_ref_known(v___y_4081_, 4);
lean_dec_ref(v_post_4067_);
lean_dec_ref(v_pre_4065_);
return v___x_4131_;
}
}
case 5:
{
lean_object* v_dummy_4153_; lean_object* v_nargs_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; 
v_dummy_4153_ = lean_obj_once(&l_Lean_Elab_WF_condToDite___redArg___closed__7, &l_Lean_Elab_WF_condToDite___redArg___closed__7_once, _init_l_Lean_Elab_WF_condToDite___redArg___closed__7);
v_nargs_4154_ = l_Lean_Expr_getAppNumArgs(v___y_4081_);
lean_inc(v_nargs_4154_);
v___x_4155_ = lean_mk_array(v_nargs_4154_, v_dummy_4153_);
v___x_4156_ = lean_unsigned_to_nat(1u);
v___x_4157_ = lean_nat_sub(v_nargs_4154_, v___x_4156_);
lean_dec(v_nargs_4154_);
lean_inc_ref(v___y_4081_);
lean_inc_ref(v_post_4067_);
lean_inc_ref(v_pre_4065_);
v___x_4158_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__8(v_pre_4065_, v_post_4067_, v___y_4081_, v___y_4081_, v___x_4155_, v___x_4157_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
lean_dec_ref_known(v___y_4081_, 2);
if (lean_obj_tag(v___x_4158_) == 0)
{
lean_object* v_a_4159_; lean_object* v___x_4160_; 
v_a_4159_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_a_4159_);
lean_dec_ref_known(v___x_4158_, 1);
v___x_4160_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v_a_4159_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4160_;
}
else
{
lean_dec_ref(v_post_4067_);
lean_dec_ref(v_pre_4065_);
return v___x_4158_;
}
}
case 10:
{
lean_object* v_data_4161_; lean_object* v_expr_4162_; lean_object* v___x_4163_; 
v_data_4161_ = lean_ctor_get(v___y_4081_, 0);
v_expr_4162_ = lean_ctor_get(v___y_4081_, 1);
lean_inc_ref(v_expr_4162_);
lean_inc_ref(v_post_4067_);
lean_inc_ref(v_pre_4065_);
v___x_4163_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_4065_, v_post_4067_, v_expr_4162_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4163_) == 0)
{
lean_object* v_a_4164_; size_t v___x_4165_; size_t v___x_4166_; uint8_t v___x_4167_; 
v_a_4164_ = lean_ctor_get(v___x_4163_, 0);
lean_inc(v_a_4164_);
lean_dec_ref_known(v___x_4163_, 1);
v___x_4165_ = lean_ptr_addr(v_expr_4162_);
v___x_4166_ = lean_ptr_addr(v_a_4164_);
v___x_4167_ = lean_usize_dec_eq(v___x_4165_, v___x_4166_);
if (v___x_4167_ == 0)
{
lean_object* v___x_4168_; lean_object* v___x_4169_; 
lean_inc(v_data_4161_);
lean_dec_ref_known(v___y_4081_, 2);
v___x_4168_ = l_Lean_Expr_mdata___override(v_data_4161_, v_a_4164_);
v___x_4169_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___x_4168_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4169_;
}
else
{
lean_object* v___x_4170_; 
lean_dec(v_a_4164_);
v___x_4170_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___y_4081_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4170_;
}
}
else
{
lean_dec_ref_known(v___y_4081_, 2);
lean_dec_ref(v_post_4067_);
lean_dec_ref(v_pre_4065_);
return v___x_4163_;
}
}
case 11:
{
lean_object* v_typeName_4171_; lean_object* v_idx_4172_; lean_object* v_struct_4173_; lean_object* v___x_4174_; 
v_typeName_4171_ = lean_ctor_get(v___y_4081_, 0);
v_idx_4172_ = lean_ctor_get(v___y_4081_, 1);
v_struct_4173_ = lean_ctor_get(v___y_4081_, 2);
lean_inc_ref(v_struct_4173_);
lean_inc_ref(v_post_4067_);
lean_inc_ref(v_pre_4065_);
v___x_4174_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_4065_, v_post_4067_, v_struct_4173_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4174_) == 0)
{
lean_object* v_a_4175_; size_t v___x_4176_; size_t v___x_4177_; uint8_t v___x_4178_; 
v_a_4175_ = lean_ctor_get(v___x_4174_, 0);
lean_inc(v_a_4175_);
lean_dec_ref_known(v___x_4174_, 1);
v___x_4176_ = lean_ptr_addr(v_struct_4173_);
v___x_4177_ = lean_ptr_addr(v_a_4175_);
v___x_4178_ = lean_usize_dec_eq(v___x_4176_, v___x_4177_);
if (v___x_4178_ == 0)
{
lean_object* v___x_4179_; lean_object* v___x_4180_; 
lean_inc(v_idx_4172_);
lean_inc(v_typeName_4171_);
lean_dec_ref_known(v___y_4081_, 3);
v___x_4179_ = l_Lean_Expr_proj___override(v_typeName_4171_, v_idx_4172_, v_a_4175_);
v___x_4180_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___x_4179_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4180_;
}
else
{
lean_object* v___x_4181_; 
lean_dec(v_a_4175_);
v___x_4181_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___y_4081_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4181_;
}
}
else
{
lean_dec_ref_known(v___y_4081_, 3);
lean_dec_ref(v_post_4067_);
lean_dec_ref(v_pre_4065_);
return v___x_4174_;
}
}
default: 
{
lean_object* v___x_4182_; 
v___x_4182_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4065_, v_post_4067_, v___y_4081_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
return v___x_4182_;
}
}
}
}
}
else
{
lean_object* v_a_4194_; lean_object* v___x_4196_; uint8_t v_isShared_4197_; uint8_t v_isSharedCheck_4201_; 
lean_dec_ref(v_post_4067_);
lean_dec_ref(v_e_4066_);
lean_dec_ref(v_pre_4065_);
v_a_4194_ = lean_ctor_get(v___x_4075_, 0);
v_isSharedCheck_4201_ = !lean_is_exclusive(v___x_4075_);
if (v_isSharedCheck_4201_ == 0)
{
v___x_4196_ = v___x_4075_;
v_isShared_4197_ = v_isSharedCheck_4201_;
goto v_resetjp_4195_;
}
else
{
lean_inc(v_a_4194_);
lean_dec(v___x_4075_);
v___x_4196_ = lean_box(0);
v_isShared_4197_ = v_isSharedCheck_4201_;
goto v_resetjp_4195_;
}
v_resetjp_4195_:
{
lean_object* v___x_4199_; 
if (v_isShared_4197_ == 0)
{
v___x_4199_ = v___x_4196_;
goto v_reusejp_4198_;
}
else
{
lean_object* v_reuseFailAlloc_4200_; 
v_reuseFailAlloc_4200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4200_, 0, v_a_4194_);
v___x_4199_ = v_reuseFailAlloc_4200_;
goto v_reusejp_4198_;
}
v_reusejp_4198_:
{
return v___x_4199_;
}
}
}
}
else
{
lean_object* v_a_4202_; lean_object* v___x_4204_; uint8_t v_isShared_4205_; uint8_t v_isSharedCheck_4209_; 
lean_dec_ref(v_post_4067_);
lean_dec_ref(v_e_4066_);
lean_dec_ref(v_pre_4065_);
v_a_4202_ = lean_ctor_get(v___x_4074_, 0);
v_isSharedCheck_4209_ = !lean_is_exclusive(v___x_4074_);
if (v_isSharedCheck_4209_ == 0)
{
v___x_4204_ = v___x_4074_;
v_isShared_4205_ = v_isSharedCheck_4209_;
goto v_resetjp_4203_;
}
else
{
lean_inc(v_a_4202_);
lean_dec(v___x_4074_);
v___x_4204_ = lean_box(0);
v_isShared_4205_ = v_isSharedCheck_4209_;
goto v_resetjp_4203_;
}
v_resetjp_4203_:
{
lean_object* v___x_4207_; 
if (v_isShared_4205_ == 0)
{
v___x_4207_ = v___x_4204_;
goto v_reusejp_4206_;
}
else
{
lean_object* v_reuseFailAlloc_4208_; 
v_reuseFailAlloc_4208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4208_, 0, v_a_4202_);
v___x_4207_ = v_reuseFailAlloc_4208_;
goto v_reusejp_4206_;
}
v_reusejp_4206_:
{
return v___x_4207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4___lam__1___boxed(lean_object* v___x_4210_, lean_object* v_pre_4211_, lean_object* v_e_4212_, lean_object* v_post_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_){
_start:
{
lean_object* v_res_4220_; 
v_res_4220_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4___lam__1(v___x_4210_, v_pre_4211_, v_e_4212_, v_post_4213_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_, v___y_4218_);
lean_dec(v___y_4218_);
lean_dec_ref(v___y_4217_);
lean_dec(v___y_4216_);
lean_dec_ref(v___y_4215_);
lean_dec(v___y_4214_);
return v_res_4220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(lean_object* v_pre_4221_, lean_object* v_post_4222_, lean_object* v_e_4223_, lean_object* v_a_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_){
_start:
{
lean_object* v___x_4230_; lean_object* v___x_4231_; 
lean_inc(v_a_4224_);
v___x_4230_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4230_, 0, lean_box(0));
lean_closure_set(v___x_4230_, 1, lean_box(0));
lean_closure_set(v___x_4230_, 2, v_a_4224_);
v___x_4231_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__0(lean_box(0), v___x_4230_, v___y_4225_, v___y_4226_, v___y_4227_, v___y_4228_);
if (lean_obj_tag(v___x_4231_) == 0)
{
lean_object* v_a_4232_; lean_object* v___x_4234_; uint8_t v_isShared_4235_; uint8_t v_isSharedCheck_4263_; 
v_a_4232_ = lean_ctor_get(v___x_4231_, 0);
v_isSharedCheck_4263_ = !lean_is_exclusive(v___x_4231_);
if (v_isSharedCheck_4263_ == 0)
{
v___x_4234_ = v___x_4231_;
v_isShared_4235_ = v_isSharedCheck_4263_;
goto v_resetjp_4233_;
}
else
{
lean_inc(v_a_4232_);
lean_dec(v___x_4231_);
v___x_4234_ = lean_box(0);
v_isShared_4235_ = v_isSharedCheck_4263_;
goto v_resetjp_4233_;
}
v_resetjp_4233_:
{
lean_object* v___x_4236_; 
v___x_4236_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3_spec__7___redArg(v_a_4232_, v_e_4223_);
lean_dec(v_a_4232_);
if (lean_obj_tag(v___x_4236_) == 0)
{
lean_object* v___x_4237_; lean_object* v___f_4238_; lean_object* v___x_4239_; 
lean_del_object(v___x_4234_);
v___x_4237_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___closed__0));
lean_inc_ref(v_e_4223_);
v___f_4238_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4___lam__1___boxed), 10, 4);
lean_closure_set(v___f_4238_, 0, v___x_4237_);
lean_closure_set(v___f_4238_, 1, v_pre_4221_);
lean_closure_set(v___f_4238_, 2, v_e_4223_);
lean_closure_set(v___f_4238_, 3, v_post_4222_);
v___x_4239_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9___redArg(v___f_4238_, v_a_4224_, v___y_4225_, v___y_4226_, v___y_4227_, v___y_4228_);
if (lean_obj_tag(v___x_4239_) == 0)
{
lean_object* v_a_4240_; lean_object* v___f_4241_; lean_object* v___x_4242_; 
v_a_4240_ = lean_ctor_get(v___x_4239_, 0);
lean_inc_n(v_a_4240_, 2);
lean_dec_ref_known(v___x_4239_, 1);
lean_inc(v_a_4224_);
v___f_4241_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__2___boxed), 4, 3);
lean_closure_set(v___f_4241_, 0, v_a_4224_);
lean_closure_set(v___f_4241_, 1, v_e_4223_);
lean_closure_set(v___f_4241_, 2, v_a_4240_);
v___x_4242_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3_spec__3___lam__0(lean_box(0), v___f_4241_, v___y_4225_, v___y_4226_, v___y_4227_, v___y_4228_);
if (lean_obj_tag(v___x_4242_) == 0)
{
lean_object* v___x_4244_; uint8_t v_isShared_4245_; uint8_t v_isSharedCheck_4249_; 
v_isSharedCheck_4249_ = !lean_is_exclusive(v___x_4242_);
if (v_isSharedCheck_4249_ == 0)
{
lean_object* v_unused_4250_; 
v_unused_4250_ = lean_ctor_get(v___x_4242_, 0);
lean_dec(v_unused_4250_);
v___x_4244_ = v___x_4242_;
v_isShared_4245_ = v_isSharedCheck_4249_;
goto v_resetjp_4243_;
}
else
{
lean_dec(v___x_4242_);
v___x_4244_ = lean_box(0);
v_isShared_4245_ = v_isSharedCheck_4249_;
goto v_resetjp_4243_;
}
v_resetjp_4243_:
{
lean_object* v___x_4247_; 
if (v_isShared_4245_ == 0)
{
lean_ctor_set(v___x_4244_, 0, v_a_4240_);
v___x_4247_ = v___x_4244_;
goto v_reusejp_4246_;
}
else
{
lean_object* v_reuseFailAlloc_4248_; 
v_reuseFailAlloc_4248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4248_, 0, v_a_4240_);
v___x_4247_ = v_reuseFailAlloc_4248_;
goto v_reusejp_4246_;
}
v_reusejp_4246_:
{
return v___x_4247_;
}
}
}
else
{
lean_object* v_a_4251_; lean_object* v___x_4253_; uint8_t v_isShared_4254_; uint8_t v_isSharedCheck_4258_; 
lean_dec(v_a_4240_);
v_a_4251_ = lean_ctor_get(v___x_4242_, 0);
v_isSharedCheck_4258_ = !lean_is_exclusive(v___x_4242_);
if (v_isSharedCheck_4258_ == 0)
{
v___x_4253_ = v___x_4242_;
v_isShared_4254_ = v_isSharedCheck_4258_;
goto v_resetjp_4252_;
}
else
{
lean_inc(v_a_4251_);
lean_dec(v___x_4242_);
v___x_4253_ = lean_box(0);
v_isShared_4254_ = v_isSharedCheck_4258_;
goto v_resetjp_4252_;
}
v_resetjp_4252_:
{
lean_object* v___x_4256_; 
if (v_isShared_4254_ == 0)
{
v___x_4256_ = v___x_4253_;
goto v_reusejp_4255_;
}
else
{
lean_object* v_reuseFailAlloc_4257_; 
v_reuseFailAlloc_4257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4257_, 0, v_a_4251_);
v___x_4256_ = v_reuseFailAlloc_4257_;
goto v_reusejp_4255_;
}
v_reusejp_4255_:
{
return v___x_4256_;
}
}
}
}
else
{
lean_dec_ref(v_e_4223_);
return v___x_4239_;
}
}
else
{
lean_object* v_val_4259_; lean_object* v___x_4261_; 
lean_dec_ref(v_e_4223_);
lean_dec_ref(v_post_4222_);
lean_dec_ref(v_pre_4221_);
v_val_4259_ = lean_ctor_get(v___x_4236_, 0);
lean_inc(v_val_4259_);
lean_dec_ref_known(v___x_4236_, 1);
if (v_isShared_4235_ == 0)
{
lean_ctor_set(v___x_4234_, 0, v_val_4259_);
v___x_4261_ = v___x_4234_;
goto v_reusejp_4260_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v_val_4259_);
v___x_4261_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4260_;
}
v_reusejp_4260_:
{
return v___x_4261_;
}
}
}
}
else
{
lean_object* v_a_4264_; lean_object* v___x_4266_; uint8_t v_isShared_4267_; uint8_t v_isSharedCheck_4271_; 
lean_dec_ref(v_e_4223_);
lean_dec_ref(v_post_4222_);
lean_dec_ref(v_pre_4221_);
v_a_4264_ = lean_ctor_get(v___x_4231_, 0);
v_isSharedCheck_4271_ = !lean_is_exclusive(v___x_4231_);
if (v_isSharedCheck_4271_ == 0)
{
v___x_4266_ = v___x_4231_;
v_isShared_4267_ = v_isSharedCheck_4271_;
goto v_resetjp_4265_;
}
else
{
lean_inc(v_a_4264_);
lean_dec(v___x_4231_);
v___x_4266_ = lean_box(0);
v_isShared_4267_ = v_isSharedCheck_4271_;
goto v_resetjp_4265_;
}
v_resetjp_4265_:
{
lean_object* v___x_4269_; 
if (v_isShared_4267_ == 0)
{
v___x_4269_ = v___x_4266_;
goto v_reusejp_4268_;
}
else
{
lean_object* v_reuseFailAlloc_4270_; 
v_reuseFailAlloc_4270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4270_, 0, v_a_4264_);
v___x_4269_ = v_reuseFailAlloc_4270_;
goto v_reusejp_4268_;
}
v_reusejp_4268_:
{
return v___x_4269_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(lean_object* v_pre_4272_, lean_object* v_post_4273_, lean_object* v_e_4274_, lean_object* v_a_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_){
_start:
{
lean_object* v___x_4281_; 
lean_inc_ref(v_post_4273_);
lean_inc(v___y_4279_);
lean_inc_ref(v___y_4278_);
lean_inc(v___y_4277_);
lean_inc_ref(v___y_4276_);
lean_inc_ref(v_e_4274_);
v___x_4281_ = lean_apply_6(v_post_4273_, v_e_4274_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_, lean_box(0));
if (lean_obj_tag(v___x_4281_) == 0)
{
lean_object* v_a_4282_; lean_object* v___x_4284_; uint8_t v_isShared_4285_; uint8_t v_isSharedCheck_4300_; 
v_a_4282_ = lean_ctor_get(v___x_4281_, 0);
v_isSharedCheck_4300_ = !lean_is_exclusive(v___x_4281_);
if (v_isSharedCheck_4300_ == 0)
{
v___x_4284_ = v___x_4281_;
v_isShared_4285_ = v_isSharedCheck_4300_;
goto v_resetjp_4283_;
}
else
{
lean_inc(v_a_4282_);
lean_dec(v___x_4281_);
v___x_4284_ = lean_box(0);
v_isShared_4285_ = v_isSharedCheck_4300_;
goto v_resetjp_4283_;
}
v_resetjp_4283_:
{
switch(lean_obj_tag(v_a_4282_))
{
case 0:
{
lean_object* v_e_4286_; lean_object* v___x_4288_; 
lean_dec_ref(v_e_4274_);
lean_dec_ref(v_post_4273_);
lean_dec_ref(v_pre_4272_);
v_e_4286_ = lean_ctor_get(v_a_4282_, 0);
lean_inc_ref(v_e_4286_);
lean_dec_ref_known(v_a_4282_, 1);
if (v_isShared_4285_ == 0)
{
lean_ctor_set(v___x_4284_, 0, v_e_4286_);
v___x_4288_ = v___x_4284_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4289_; 
v_reuseFailAlloc_4289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4289_, 0, v_e_4286_);
v___x_4288_ = v_reuseFailAlloc_4289_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
return v___x_4288_;
}
}
case 1:
{
lean_object* v_e_4290_; lean_object* v___x_4291_; 
lean_del_object(v___x_4284_);
lean_dec_ref(v_e_4274_);
v_e_4290_ = lean_ctor_get(v_a_4282_, 0);
lean_inc_ref(v_e_4290_);
lean_dec_ref_known(v_a_4282_, 1);
v___x_4291_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_4272_, v_post_4273_, v_e_4290_, v_a_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
return v___x_4291_;
}
default: 
{
lean_object* v_e_x3f_4292_; 
lean_dec_ref(v_post_4273_);
lean_dec_ref(v_pre_4272_);
v_e_x3f_4292_ = lean_ctor_get(v_a_4282_, 0);
lean_inc(v_e_x3f_4292_);
lean_dec_ref_known(v_a_4282_, 1);
if (lean_obj_tag(v_e_x3f_4292_) == 0)
{
lean_object* v___x_4294_; 
if (v_isShared_4285_ == 0)
{
lean_ctor_set(v___x_4284_, 0, v_e_4274_);
v___x_4294_ = v___x_4284_;
goto v_reusejp_4293_;
}
else
{
lean_object* v_reuseFailAlloc_4295_; 
v_reuseFailAlloc_4295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4295_, 0, v_e_4274_);
v___x_4294_ = v_reuseFailAlloc_4295_;
goto v_reusejp_4293_;
}
v_reusejp_4293_:
{
return v___x_4294_;
}
}
else
{
lean_object* v_val_4296_; lean_object* v___x_4298_; 
lean_dec_ref(v_e_4274_);
v_val_4296_ = lean_ctor_get(v_e_x3f_4292_, 0);
lean_inc(v_val_4296_);
lean_dec_ref_known(v_e_x3f_4292_, 1);
if (v_isShared_4285_ == 0)
{
lean_ctor_set(v___x_4284_, 0, v_val_4296_);
v___x_4298_ = v___x_4284_;
goto v_reusejp_4297_;
}
else
{
lean_object* v_reuseFailAlloc_4299_; 
v_reuseFailAlloc_4299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4299_, 0, v_val_4296_);
v___x_4298_ = v_reuseFailAlloc_4299_;
goto v_reusejp_4297_;
}
v_reusejp_4297_:
{
return v___x_4298_;
}
}
}
}
}
}
else
{
lean_object* v_a_4301_; lean_object* v___x_4303_; uint8_t v_isShared_4304_; uint8_t v_isSharedCheck_4308_; 
lean_dec_ref(v_e_4274_);
lean_dec_ref(v_post_4273_);
lean_dec_ref(v_pre_4272_);
v_a_4301_ = lean_ctor_get(v___x_4281_, 0);
v_isSharedCheck_4308_ = !lean_is_exclusive(v___x_4281_);
if (v_isSharedCheck_4308_ == 0)
{
v___x_4303_ = v___x_4281_;
v_isShared_4304_ = v_isSharedCheck_4308_;
goto v_resetjp_4302_;
}
else
{
lean_inc(v_a_4301_);
lean_dec(v___x_4281_);
v___x_4303_ = lean_box(0);
v_isShared_4304_ = v_isSharedCheck_4308_;
goto v_resetjp_4302_;
}
v_resetjp_4302_:
{
lean_object* v___x_4306_; 
if (v_isShared_4304_ == 0)
{
v___x_4306_ = v___x_4303_;
goto v_reusejp_4305_;
}
else
{
lean_object* v_reuseFailAlloc_4307_; 
v_reuseFailAlloc_4307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4307_, 0, v_a_4301_);
v___x_4306_ = v_reuseFailAlloc_4307_;
goto v_reusejp_4305_;
}
v_reusejp_4305_:
{
return v___x_4306_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7___boxed(lean_object* v_pre_4309_, lean_object* v_post_4310_, lean_object* v_e_4311_, lean_object* v_a_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_){
_start:
{
lean_object* v_res_4318_; 
v_res_4318_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__7(v_pre_4309_, v_post_4310_, v_e_4311_, v_a_4312_, v___y_4313_, v___y_4314_, v___y_4315_, v___y_4316_);
lean_dec(v___y_4316_);
lean_dec_ref(v___y_4315_);
lean_dec(v___y_4314_);
lean_dec_ref(v___y_4313_);
lean_dec(v_a_4312_);
return v_res_4318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__6___boxed(lean_object* v_pre_4319_, lean_object* v_post_4320_, lean_object* v_sz_4321_, lean_object* v_i_4322_, lean_object* v_bs_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_){
_start:
{
size_t v_sz_boxed_4330_; size_t v_i_boxed_4331_; lean_object* v_res_4332_; 
v_sz_boxed_4330_ = lean_unbox_usize(v_sz_4321_);
lean_dec(v_sz_4321_);
v_i_boxed_4331_ = lean_unbox_usize(v_i_4322_);
lean_dec(v_i_4322_);
v_res_4332_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__6(v_pre_4319_, v_post_4320_, v_sz_boxed_4330_, v_i_boxed_4331_, v_bs_4323_, v___y_4324_, v___y_4325_, v___y_4326_, v___y_4327_, v___y_4328_);
lean_dec(v___y_4328_);
lean_dec_ref(v___y_4327_);
lean_dec(v___y_4326_);
lean_dec_ref(v___y_4325_);
lean_dec(v___y_4324_);
return v_res_4332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__8___boxed(lean_object* v_pre_4333_, lean_object* v_post_4334_, lean_object* v___y_4335_, lean_object* v_x_4336_, lean_object* v_x_4337_, lean_object* v_x_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_){
_start:
{
lean_object* v_res_4345_; 
v_res_4345_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__8(v_pre_4333_, v_post_4334_, v___y_4335_, v_x_4336_, v_x_4337_, v_x_4338_, v___y_4339_, v___y_4340_, v___y_4341_, v___y_4342_, v___y_4343_);
lean_dec(v___y_4343_);
lean_dec_ref(v___y_4342_);
lean_dec(v___y_4341_);
lean_dec_ref(v___y_4340_);
lean_dec(v___y_4339_);
lean_dec_ref(v___y_4335_);
return v_res_4345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4___boxed(lean_object* v_pre_4346_, lean_object* v_post_4347_, lean_object* v_e_4348_, lean_object* v_a_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_4346_, v_post_4347_, v_e_4348_, v_a_4349_, v___y_4350_, v___y_4351_, v___y_4352_, v___y_4353_);
lean_dec(v___y_4353_);
lean_dec_ref(v___y_4352_);
lean_dec(v___y_4351_);
lean_dec_ref(v___y_4350_);
lean_dec(v_a_4349_);
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4(lean_object* v_input_4356_, lean_object* v_pre_4357_, lean_object* v_post_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_){
_start:
{
lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v_a_4366_; lean_object* v___x_4367_; 
v___x_4364_ = lean_obj_once(&l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__2, &l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__2_once, _init_l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___closed__2);
v___x_4365_ = l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___lam__0(lean_box(0), v___x_4364_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_);
v_a_4366_ = lean_ctor_get(v___x_4365_, 0);
lean_inc(v_a_4366_);
lean_dec_ref(v___x_4365_);
v___x_4367_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4(v_pre_4357_, v_post_4358_, v_input_4356_, v_a_4366_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_);
if (lean_obj_tag(v___x_4367_) == 0)
{
lean_object* v_a_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4372_; uint8_t v_isShared_4373_; uint8_t v_isSharedCheck_4377_; 
v_a_4368_ = lean_ctor_get(v___x_4367_, 0);
lean_inc(v_a_4368_);
lean_dec_ref_known(v___x_4367_, 1);
v___x_4369_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4369_, 0, lean_box(0));
lean_closure_set(v___x_4369_, 1, lean_box(0));
lean_closure_set(v___x_4369_, 2, v_a_4366_);
v___x_4370_ = l_Lean_Meta_transform___at___00__private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet_spec__3___lam__0(lean_box(0), v___x_4369_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_);
v_isSharedCheck_4377_ = !lean_is_exclusive(v___x_4370_);
if (v_isSharedCheck_4377_ == 0)
{
lean_object* v_unused_4378_; 
v_unused_4378_ = lean_ctor_get(v___x_4370_, 0);
lean_dec(v_unused_4378_);
v___x_4372_ = v___x_4370_;
v_isShared_4373_ = v_isSharedCheck_4377_;
goto v_resetjp_4371_;
}
else
{
lean_dec(v___x_4370_);
v___x_4372_ = lean_box(0);
v_isShared_4373_ = v_isSharedCheck_4377_;
goto v_resetjp_4371_;
}
v_resetjp_4371_:
{
lean_object* v___x_4375_; 
if (v_isShared_4373_ == 0)
{
lean_ctor_set(v___x_4372_, 0, v_a_4368_);
v___x_4375_ = v___x_4372_;
goto v_reusejp_4374_;
}
else
{
lean_object* v_reuseFailAlloc_4376_; 
v_reuseFailAlloc_4376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4376_, 0, v_a_4368_);
v___x_4375_ = v_reuseFailAlloc_4376_;
goto v_reusejp_4374_;
}
v_reusejp_4374_:
{
return v___x_4375_;
}
}
}
else
{
lean_dec(v_a_4366_);
return v___x_4367_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4___boxed(lean_object* v_input_4379_, lean_object* v_pre_4380_, lean_object* v_post_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_){
_start:
{
lean_object* v_res_4387_; 
v_res_4387_ = l_Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4(v_input_4379_, v_pre_4380_, v_post_4381_, v___y_4382_, v___y_4383_, v___y_4384_, v___y_4385_);
lean_dec(v___y_4385_);
lean_dec_ref(v___y_4384_);
lean_dec(v___y_4383_);
lean_dec_ref(v___y_4382_);
return v_res_4387_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___closed__0(void){
_start:
{
lean_object* v___x_4388_; double v___x_4389_; 
v___x_4388_ = lean_unsigned_to_nat(0u);
v___x_4389_ = lean_float_of_nat(v___x_4388_);
return v___x_4389_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5(lean_object* v_cls_4393_, lean_object* v_msg_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_){
_start:
{
lean_object* v_ref_4400_; lean_object* v___x_4401_; lean_object* v_a_4402_; lean_object* v___x_4404_; uint8_t v_isShared_4405_; uint8_t v_isSharedCheck_4447_; 
v_ref_4400_ = lean_ctor_get(v___y_4397_, 2);
v___x_4401_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_WF_paramMatcher_spec__2_spec__2_spec__3_spec__9_spec__11_spec__13_spec__15_spec__16(v_msg_4394_, v___y_4395_, v___y_4396_, v___y_4397_, v___y_4398_);
v_a_4402_ = lean_ctor_get(v___x_4401_, 0);
v_isSharedCheck_4447_ = !lean_is_exclusive(v___x_4401_);
if (v_isSharedCheck_4447_ == 0)
{
v___x_4404_ = v___x_4401_;
v_isShared_4405_ = v_isSharedCheck_4447_;
goto v_resetjp_4403_;
}
else
{
lean_inc(v_a_4402_);
lean_dec(v___x_4401_);
v___x_4404_ = lean_box(0);
v_isShared_4405_ = v_isSharedCheck_4447_;
goto v_resetjp_4403_;
}
v_resetjp_4403_:
{
lean_object* v___x_4406_; lean_object* v_traceState_4407_; lean_object* v_env_4408_; lean_object* v_nextMacroScope_4409_; lean_object* v_ngen_4410_; lean_object* v_auxDeclNGen_4411_; lean_object* v_cache_4412_; lean_object* v_recordedDeps_4413_; lean_object* v_messages_4414_; lean_object* v_infoState_4415_; lean_object* v_snapshotTasks_4416_; lean_object* v___x_4418_; uint8_t v_isShared_4419_; uint8_t v_isSharedCheck_4446_; 
v___x_4406_ = lean_st_ref_take(v___y_4398_);
v_traceState_4407_ = lean_ctor_get(v___x_4406_, 4);
v_env_4408_ = lean_ctor_get(v___x_4406_, 0);
v_nextMacroScope_4409_ = lean_ctor_get(v___x_4406_, 1);
v_ngen_4410_ = lean_ctor_get(v___x_4406_, 2);
v_auxDeclNGen_4411_ = lean_ctor_get(v___x_4406_, 3);
v_cache_4412_ = lean_ctor_get(v___x_4406_, 5);
v_recordedDeps_4413_ = lean_ctor_get(v___x_4406_, 6);
v_messages_4414_ = lean_ctor_get(v___x_4406_, 7);
v_infoState_4415_ = lean_ctor_get(v___x_4406_, 8);
v_snapshotTasks_4416_ = lean_ctor_get(v___x_4406_, 9);
v_isSharedCheck_4446_ = !lean_is_exclusive(v___x_4406_);
if (v_isSharedCheck_4446_ == 0)
{
v___x_4418_ = v___x_4406_;
v_isShared_4419_ = v_isSharedCheck_4446_;
goto v_resetjp_4417_;
}
else
{
lean_inc(v_snapshotTasks_4416_);
lean_inc(v_infoState_4415_);
lean_inc(v_messages_4414_);
lean_inc(v_recordedDeps_4413_);
lean_inc(v_cache_4412_);
lean_inc(v_traceState_4407_);
lean_inc(v_auxDeclNGen_4411_);
lean_inc(v_ngen_4410_);
lean_inc(v_nextMacroScope_4409_);
lean_inc(v_env_4408_);
lean_dec(v___x_4406_);
v___x_4418_ = lean_box(0);
v_isShared_4419_ = v_isSharedCheck_4446_;
goto v_resetjp_4417_;
}
v_resetjp_4417_:
{
uint64_t v_tid_4420_; lean_object* v_traces_4421_; lean_object* v___x_4423_; uint8_t v_isShared_4424_; uint8_t v_isSharedCheck_4445_; 
v_tid_4420_ = lean_ctor_get_uint64(v_traceState_4407_, sizeof(void*)*1);
v_traces_4421_ = lean_ctor_get(v_traceState_4407_, 0);
v_isSharedCheck_4445_ = !lean_is_exclusive(v_traceState_4407_);
if (v_isSharedCheck_4445_ == 0)
{
v___x_4423_ = v_traceState_4407_;
v_isShared_4424_ = v_isSharedCheck_4445_;
goto v_resetjp_4422_;
}
else
{
lean_inc(v_traces_4421_);
lean_dec(v_traceState_4407_);
v___x_4423_ = lean_box(0);
v_isShared_4424_ = v_isSharedCheck_4445_;
goto v_resetjp_4422_;
}
v_resetjp_4422_:
{
lean_object* v___x_4425_; lean_object* v___x_4426_; double v___x_4427_; uint8_t v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4436_; 
v___x_4425_ = lean_box(0);
v___x_4426_ = lean_box(0);
v___x_4427_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___closed__0, &l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___closed__0);
v___x_4428_ = 0;
v___x_4429_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___closed__1));
v___x_4430_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4430_, 0, v_cls_4393_);
lean_ctor_set(v___x_4430_, 1, v___x_4426_);
lean_ctor_set(v___x_4430_, 2, v___x_4429_);
lean_ctor_set_float(v___x_4430_, sizeof(void*)*3, v___x_4427_);
lean_ctor_set_float(v___x_4430_, sizeof(void*)*3 + 8, v___x_4427_);
lean_ctor_set_uint8(v___x_4430_, sizeof(void*)*3 + 16, v___x_4428_);
v___x_4431_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___closed__2));
v___x_4432_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4432_, 0, v___x_4430_);
lean_ctor_set(v___x_4432_, 1, v_a_4402_);
lean_ctor_set(v___x_4432_, 2, v___x_4431_);
lean_inc(v_ref_4400_);
v___x_4433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4433_, 0, v_ref_4400_);
lean_ctor_set(v___x_4433_, 1, v___x_4432_);
v___x_4434_ = l_Lean_PersistentArray_push___redArg(v_traces_4421_, v___x_4433_);
if (v_isShared_4424_ == 0)
{
lean_ctor_set(v___x_4423_, 0, v___x_4434_);
v___x_4436_ = v___x_4423_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v___x_4434_);
lean_ctor_set_uint64(v_reuseFailAlloc_4444_, sizeof(void*)*1, v_tid_4420_);
v___x_4436_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
lean_object* v___x_4438_; 
if (v_isShared_4419_ == 0)
{
lean_ctor_set(v___x_4418_, 4, v___x_4436_);
v___x_4438_ = v___x_4418_;
goto v_reusejp_4437_;
}
else
{
lean_object* v_reuseFailAlloc_4443_; 
v_reuseFailAlloc_4443_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4443_, 0, v_env_4408_);
lean_ctor_set(v_reuseFailAlloc_4443_, 1, v_nextMacroScope_4409_);
lean_ctor_set(v_reuseFailAlloc_4443_, 2, v_ngen_4410_);
lean_ctor_set(v_reuseFailAlloc_4443_, 3, v_auxDeclNGen_4411_);
lean_ctor_set(v_reuseFailAlloc_4443_, 4, v___x_4436_);
lean_ctor_set(v_reuseFailAlloc_4443_, 5, v_cache_4412_);
lean_ctor_set(v_reuseFailAlloc_4443_, 6, v_recordedDeps_4413_);
lean_ctor_set(v_reuseFailAlloc_4443_, 7, v_messages_4414_);
lean_ctor_set(v_reuseFailAlloc_4443_, 8, v_infoState_4415_);
lean_ctor_set(v_reuseFailAlloc_4443_, 9, v_snapshotTasks_4416_);
v___x_4438_ = v_reuseFailAlloc_4443_;
goto v_reusejp_4437_;
}
v_reusejp_4437_:
{
lean_object* v___x_4439_; lean_object* v___x_4441_; 
v___x_4439_ = lean_st_ref_put(v___y_4398_, v___x_4438_);
if (v_isShared_4405_ == 0)
{
lean_ctor_set(v___x_4404_, 0, v___x_4425_);
v___x_4441_ = v___x_4404_;
goto v_reusejp_4440_;
}
else
{
lean_object* v_reuseFailAlloc_4442_; 
v_reuseFailAlloc_4442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4442_, 0, v___x_4425_);
v___x_4441_ = v_reuseFailAlloc_4442_;
goto v_reusejp_4440_;
}
v_reusejp_4440_:
{
return v___x_4441_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5___boxed(lean_object* v_cls_4448_, lean_object* v_msg_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_, lean_object* v___y_4454_){
_start:
{
lean_object* v_res_4455_; 
v_res_4455_ = l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5(v_cls_4448_, v_msg_4449_, v___y_4450_, v___y_4451_, v___y_4452_, v___y_4453_);
lean_dec(v___y_4453_);
lean_dec_ref(v___y_4452_);
lean_dec(v___y_4451_);
lean_dec_ref(v___y_4450_);
return v_res_4455_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_preprocess_spec__2(size_t v_sz_4456_, size_t v_i_4457_, lean_object* v_bs_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_){
_start:
{
uint8_t v___x_4464_; 
v___x_4464_ = lean_usize_dec_lt(v_i_4457_, v_sz_4456_);
if (v___x_4464_ == 0)
{
lean_object* v___x_4465_; 
v___x_4465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4465_, 0, v_bs_4458_);
return v___x_4465_;
}
else
{
lean_object* v_v_4466_; lean_object* v___x_4467_; lean_object* v_bs_x27_4468_; lean_object* v___x_4469_; 
v_v_4466_ = lean_array_uget(v_bs_4458_, v_i_4457_);
v___x_4467_ = lean_unsigned_to_nat(0u);
v_bs_x27_4468_ = lean_array_uset(v_bs_4458_, v_i_4457_, v___x_4467_);
v___x_4469_ = l_Lean_Elab_WF_mkWfParam(v_v_4466_, v___y_4459_, v___y_4460_, v___y_4461_, v___y_4462_);
if (lean_obj_tag(v___x_4469_) == 0)
{
lean_object* v_a_4470_; size_t v___x_4471_; size_t v___x_4472_; lean_object* v___x_4473_; 
v_a_4470_ = lean_ctor_get(v___x_4469_, 0);
lean_inc(v_a_4470_);
lean_dec_ref_known(v___x_4469_, 1);
v___x_4471_ = ((size_t)1ULL);
v___x_4472_ = lean_usize_add(v_i_4457_, v___x_4471_);
v___x_4473_ = lean_array_uset(v_bs_x27_4468_, v_i_4457_, v_a_4470_);
v_i_4457_ = v___x_4472_;
v_bs_4458_ = v___x_4473_;
goto _start;
}
else
{
lean_object* v_a_4475_; lean_object* v___x_4477_; uint8_t v_isShared_4478_; uint8_t v_isSharedCheck_4482_; 
lean_dec_ref(v_bs_x27_4468_);
v_a_4475_ = lean_ctor_get(v___x_4469_, 0);
v_isSharedCheck_4482_ = !lean_is_exclusive(v___x_4469_);
if (v_isSharedCheck_4482_ == 0)
{
v___x_4477_ = v___x_4469_;
v_isShared_4478_ = v_isSharedCheck_4482_;
goto v_resetjp_4476_;
}
else
{
lean_inc(v_a_4475_);
lean_dec(v___x_4469_);
v___x_4477_ = lean_box(0);
v_isShared_4478_ = v_isSharedCheck_4482_;
goto v_resetjp_4476_;
}
v_resetjp_4476_:
{
lean_object* v___x_4480_; 
if (v_isShared_4478_ == 0)
{
v___x_4480_ = v___x_4477_;
goto v_reusejp_4479_;
}
else
{
lean_object* v_reuseFailAlloc_4481_; 
v_reuseFailAlloc_4481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4481_, 0, v_a_4475_);
v___x_4480_ = v_reuseFailAlloc_4481_;
goto v_reusejp_4479_;
}
v_reusejp_4479_:
{
return v___x_4480_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_preprocess_spec__2___boxed(lean_object* v_sz_4483_, lean_object* v_i_4484_, lean_object* v_bs_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_){
_start:
{
size_t v_sz_boxed_4491_; size_t v_i_boxed_4492_; lean_object* v_res_4493_; 
v_sz_boxed_4491_ = lean_unbox_usize(v_sz_4483_);
lean_dec(v_sz_4483_);
v_i_boxed_4492_ = lean_unbox_usize(v_i_4484_);
lean_dec(v_i_4484_);
v_res_4493_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_preprocess_spec__2(v_sz_boxed_4491_, v_i_boxed_4492_, v_bs_4485_, v___y_4486_, v___y_4487_, v___y_4488_, v___y_4489_);
lean_dec(v___y_4489_);
lean_dec_ref(v___y_4488_);
lean_dec(v___y_4487_);
lean_dec_ref(v___y_4486_);
return v_res_4493_;
}
}
static lean_object* _init_l_Lean_Elab_WF_preprocess___lam__2___closed__0(void){
_start:
{
lean_object* v___x_4494_; 
v___x_4494_ = l_Lean_Meta_DiscrTree_empty___redArg();
return v___x_4494_;
}
}
static lean_object* _init_l_Lean_Elab_WF_preprocess___lam__2___closed__1(void){
_start:
{
lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; 
v___x_4495_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_WF_preprocess_spec__3___closed__0);
v___x_4496_ = lean_obj_once(&l_Lean_Elab_WF_preprocess___lam__2___closed__0, &l_Lean_Elab_WF_preprocess___lam__2___closed__0_once, _init_l_Lean_Elab_WF_preprocess___lam__2___closed__0);
v___x_4497_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4497_, 0, v___x_4496_);
lean_ctor_set(v___x_4497_, 1, v___x_4496_);
lean_ctor_set(v___x_4497_, 2, v___x_4495_);
lean_ctor_set(v___x_4497_, 3, v___x_4495_);
return v___x_4497_;
}
}
static lean_object* _init_l_Lean_Elab_WF_preprocess___lam__2___closed__2(void){
_start:
{
lean_object* v___x_4498_; lean_object* v___x_4499_; 
v___x_4498_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg___closed__2);
v___x_4499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4499_, 0, v___x_4498_);
return v___x_4499_;
}
}
static lean_object* _init_l_Lean_Elab_WF_preprocess___lam__2___closed__3(void){
_start:
{
lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; 
v___x_4500_ = lean_unsigned_to_nat(0u);
v___x_4501_ = lean_obj_once(&l_Lean_Elab_WF_preprocess___lam__2___closed__2, &l_Lean_Elab_WF_preprocess___lam__2___closed__2_once, _init_l_Lean_Elab_WF_preprocess___lam__2___closed__2);
v___x_4502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4502_, 0, v___x_4501_);
lean_ctor_set(v___x_4502_, 1, v___x_4500_);
return v___x_4502_;
}
}
static lean_object* _init_l_Lean_Elab_WF_preprocess___lam__2___closed__4(void){
_start:
{
lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; 
v___x_4503_ = lean_unsigned_to_nat(32u);
v___x_4504_ = lean_mk_empty_array_with_capacity(v___x_4503_);
v___x_4505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4505_, 0, v___x_4504_);
return v___x_4505_;
}
}
static lean_object* _init_l_Lean_Elab_WF_preprocess___lam__2___closed__5(void){
_start:
{
size_t v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; 
v___x_4506_ = ((size_t)5ULL);
v___x_4507_ = lean_unsigned_to_nat(0u);
v___x_4508_ = lean_unsigned_to_nat(32u);
v___x_4509_ = lean_mk_empty_array_with_capacity(v___x_4508_);
v___x_4510_ = lean_obj_once(&l_Lean_Elab_WF_preprocess___lam__2___closed__4, &l_Lean_Elab_WF_preprocess___lam__2___closed__4_once, _init_l_Lean_Elab_WF_preprocess___lam__2___closed__4);
v___x_4511_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4511_, 0, v___x_4510_);
lean_ctor_set(v___x_4511_, 1, v___x_4509_);
lean_ctor_set(v___x_4511_, 2, v___x_4507_);
lean_ctor_set(v___x_4511_, 3, v___x_4507_);
lean_ctor_set_usize(v___x_4511_, 4, v___x_4506_);
return v___x_4511_;
}
}
static lean_object* _init_l_Lean_Elab_WF_preprocess___lam__2___closed__6(void){
_start:
{
lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; 
v___x_4512_ = lean_obj_once(&l_Lean_Elab_WF_preprocess___lam__2___closed__5, &l_Lean_Elab_WF_preprocess___lam__2___closed__5_once, _init_l_Lean_Elab_WF_preprocess___lam__2___closed__5);
v___x_4513_ = lean_obj_once(&l_Lean_Elab_WF_preprocess___lam__2___closed__2, &l_Lean_Elab_WF_preprocess___lam__2___closed__2_once, _init_l_Lean_Elab_WF_preprocess___lam__2___closed__2);
v___x_4514_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4514_, 0, v___x_4513_);
lean_ctor_set(v___x_4514_, 1, v___x_4513_);
lean_ctor_set(v___x_4514_, 2, v___x_4513_);
lean_ctor_set(v___x_4514_, 3, v___x_4512_);
return v___x_4514_;
}
}
static lean_object* _init_l_Lean_Elab_WF_preprocess___lam__2___closed__7(void){
_start:
{
lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; 
v___x_4515_ = lean_obj_once(&l_Lean_Elab_WF_preprocess___lam__2___closed__6, &l_Lean_Elab_WF_preprocess___lam__2___closed__6_once, _init_l_Lean_Elab_WF_preprocess___lam__2___closed__6);
v___x_4516_ = lean_obj_once(&l_Lean_Elab_WF_preprocess___lam__2___closed__3, &l_Lean_Elab_WF_preprocess___lam__2___closed__3_once, _init_l_Lean_Elab_WF_preprocess___lam__2___closed__3);
v___x_4517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4517_, 0, v___x_4516_);
lean_ctor_set(v___x_4517_, 1, v___x_4515_);
return v___x_4517_;
}
}
static lean_object* _init_l_Lean_Elab_WF_preprocess___lam__2___closed__12(void){
_start:
{
lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; 
v___x_4526_ = ((lean_object*)(l_Lean_Elab_WF_preprocess___lam__2___closed__9));
v___x_4527_ = ((lean_object*)(l_Lean_Elab_WF_preprocess___lam__2___closed__11));
v___x_4528_ = l_Lean_Name_append(v___x_4527_, v___x_4526_);
return v___x_4528_;
}
}
static lean_object* _init_l_Lean_Elab_WF_preprocess___lam__2___closed__14(void){
_start:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; 
v___x_4530_ = ((lean_object*)(l_Lean_Elab_WF_preprocess___lam__2___closed__13));
v___x_4531_ = l_Lean_stringToMessageData(v___x_4530_);
return v___x_4531_;
}
}
static lean_object* _init_l_Lean_Elab_WF_preprocess___lam__2___closed__16(void){
_start:
{
lean_object* v___x_4533_; lean_object* v___x_4534_; 
v___x_4533_ = ((lean_object*)(l_Lean_Elab_WF_preprocess___lam__2___closed__15));
v___x_4534_ = l_Lean_stringToMessageData(v___x_4533_);
return v___x_4534_;
}
}
static lean_object* _init_l_Lean_Elab_WF_preprocess___lam__2___closed__18(void){
_start:
{
lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4536_ = ((lean_object*)(l_Lean_Elab_WF_preprocess___lam__2___closed__17));
v___x_4537_ = l_Lean_stringToMessageData(v___x_4536_);
return v___x_4537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preprocess___lam__2(lean_object* v_a_4538_, uint8_t v___x_4539_, lean_object* v___f_4540_, lean_object* v___f_4541_, lean_object* v_xs_4542_, lean_object* v_x_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_){
_start:
{
size_t v_sz_4549_; size_t v___x_4550_; lean_object* v___x_4551_; 
v_sz_4549_ = lean_array_size(v_xs_4542_);
v___x_4550_ = ((size_t)0ULL);
lean_inc_ref(v_xs_4542_);
v___x_4551_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_preprocess_spec__2(v_sz_4549_, v___x_4550_, v_xs_4542_, v___y_4544_, v___y_4545_, v___y_4546_, v___y_4547_);
if (lean_obj_tag(v___x_4551_) == 0)
{
lean_object* v_a_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; uint8_t v___x_4556_; lean_object* v___x_4557_; 
v_a_4552_ = lean_ctor_get(v___x_4551_, 0);
lean_inc(v_a_4552_);
lean_dec_ref_known(v___x_4551_, 1);
v___x_4553_ = l_Lean_Expr_beta(v_a_4538_, v_a_4552_);
v___x_4554_ = lean_obj_once(&l_Lean_Elab_WF_preprocess___lam__2___closed__1, &l_Lean_Elab_WF_preprocess___lam__2___closed__1_once, _init_l_Lean_Elab_WF_preprocess___lam__2___closed__1);
v___x_4555_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13_));
v___x_4556_ = 0;
v___x_4557_ = l_Lean_Meta_Simp_Simprocs_add(v___x_4554_, v___x_4555_, v___x_4556_, v___y_4546_, v___y_4547_);
if (lean_obj_tag(v___x_4557_) == 0)
{
lean_object* v_a_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; 
v_a_4558_ = lean_ctor_get(v___x_4557_, 0);
lean_inc(v_a_4558_);
lean_dec_ref_known(v___x_4557_, 1);
v___x_4559_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10_));
v___x_4560_ = l_Lean_Meta_Simp_Simprocs_add(v_a_4558_, v___x_4559_, v___x_4539_, v___y_4546_, v___y_4547_);
if (lean_obj_tag(v___x_4560_) == 0)
{
lean_object* v_a_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; 
v_a_4561_ = lean_ctor_get(v___x_4560_, 0);
lean_inc(v_a_4561_);
lean_dec_ref_known(v___x_4560_, 1);
v___x_4562_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10_));
v___x_4563_ = l_Lean_Meta_Simp_Simprocs_add(v_a_4561_, v___x_4562_, v___x_4556_, v___y_4546_, v___y_4547_);
if (lean_obj_tag(v___x_4563_) == 0)
{
lean_object* v_a_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; 
v_a_4564_ = lean_ctor_get(v___x_4563_, 0);
lean_inc(v_a_4564_);
lean_dec_ref_known(v___x_4563_, 1);
v___x_4565_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10_));
v___x_4566_ = l_Lean_Meta_Simp_Simprocs_add(v_a_4564_, v___x_4565_, v___x_4539_, v___y_4546_, v___y_4547_);
if (lean_obj_tag(v___x_4566_) == 0)
{
lean_object* v_a_4567_; lean_object* v___x_4568_; 
v_a_4567_ = lean_ctor_get(v___x_4566_, 0);
lean_inc(v_a_4567_);
lean_dec_ref_known(v___x_4566_, 1);
v___x_4568_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_getSimpContext___redArg(v___y_4544_, v___y_4546_, v___y_4547_);
if (lean_obj_tag(v___x_4568_) == 0)
{
lean_object* v_a_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; 
v_a_4569_ = lean_ctor_get(v___x_4568_, 0);
lean_inc(v_a_4569_);
lean_dec_ref_known(v___x_4568_, 1);
v___x_4570_ = lean_unsigned_to_nat(1u);
v___x_4571_ = lean_mk_empty_array_with_capacity(v___x_4570_);
v___x_4572_ = lean_array_push(v___x_4571_, v_a_4567_);
v___x_4573_ = lean_box(0);
v___x_4574_ = lean_obj_once(&l_Lean_Elab_WF_preprocess___lam__2___closed__7, &l_Lean_Elab_WF_preprocess___lam__2___closed__7_once, _init_l_Lean_Elab_WF_preprocess___lam__2___closed__7);
lean_inc_ref(v___x_4553_);
v___x_4575_ = l_Lean_Meta_simp(v___x_4553_, v_a_4569_, v___x_4572_, v___x_4573_, v___x_4574_, v___y_4544_, v___y_4545_, v___y_4546_, v___y_4547_);
if (lean_obj_tag(v___x_4575_) == 0)
{
lean_object* v_a_4576_; lean_object* v_fst_4577_; lean_object* v___x_4579_; uint8_t v_isShared_4580_; uint8_t v_isSharedCheck_4646_; 
v_a_4576_ = lean_ctor_get(v___x_4575_, 0);
lean_inc(v_a_4576_);
lean_dec_ref_known(v___x_4575_, 1);
v_fst_4577_ = lean_ctor_get(v_a_4576_, 0);
v_isSharedCheck_4646_ = !lean_is_exclusive(v_a_4576_);
if (v_isSharedCheck_4646_ == 0)
{
lean_object* v_unused_4647_; 
v_unused_4647_ = lean_ctor_get(v_a_4576_, 1);
lean_dec(v_unused_4647_);
v___x_4579_ = v_a_4576_;
v_isShared_4580_ = v_isSharedCheck_4646_;
goto v_resetjp_4578_;
}
else
{
lean_inc(v_fst_4577_);
lean_dec(v_a_4576_);
v___x_4579_ = lean_box(0);
v_isShared_4580_ = v_isSharedCheck_4646_;
goto v_resetjp_4578_;
}
v_resetjp_4578_:
{
lean_object* v_expr_4581_; lean_object* v_proof_x3f_4582_; uint8_t v_cache_4583_; lean_object* v___x_4585_; uint8_t v_isShared_4586_; uint8_t v_isSharedCheck_4645_; 
v_expr_4581_ = lean_ctor_get(v_fst_4577_, 0);
v_proof_x3f_4582_ = lean_ctor_get(v_fst_4577_, 1);
v_cache_4583_ = lean_ctor_get_uint8(v_fst_4577_, sizeof(void*)*2);
v_isSharedCheck_4645_ = !lean_is_exclusive(v_fst_4577_);
if (v_isSharedCheck_4645_ == 0)
{
v___x_4585_ = v_fst_4577_;
v_isShared_4586_ = v_isSharedCheck_4645_;
goto v_resetjp_4584_;
}
else
{
lean_inc(v_proof_x3f_4582_);
lean_inc(v_expr_4581_);
lean_dec(v_fst_4577_);
v___x_4585_ = lean_box(0);
v_isShared_4586_ = v_isSharedCheck_4645_;
goto v_resetjp_4584_;
}
v_resetjp_4584_:
{
lean_object* v___x_4587_; 
lean_inc_ref(v_expr_4581_);
v___x_4587_ = l_Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4(v_expr_4581_, v___f_4540_, v___f_4541_, v___y_4544_, v___y_4545_, v___y_4546_, v___y_4547_);
if (lean_obj_tag(v___x_4587_) == 0)
{
lean_object* v_a_4588_; lean_object* v___x_4589_; 
v_a_4588_ = lean_ctor_get(v___x_4587_, 0);
lean_inc(v_a_4588_);
lean_dec_ref_known(v___x_4587_, 1);
v___x_4589_ = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet(v_a_4588_, v___y_4544_, v___y_4545_, v___y_4546_, v___y_4547_);
if (lean_obj_tag(v___x_4589_) == 0)
{
lean_object* v_a_4590_; lean_object* v___y_4592_; lean_object* v___y_4593_; lean_object* v___y_4594_; lean_object* v___y_4595_; lean_object* v_toCold_4600_; lean_object* v_options_4601_; uint8_t v_hasTrace_4602_; 
v_a_4590_ = lean_ctor_get(v___x_4589_, 0);
lean_inc(v_a_4590_);
lean_dec_ref_known(v___x_4589_, 1);
v_toCold_4600_ = lean_ctor_get(v___y_4546_, 0);
v_options_4601_ = lean_ctor_get(v_toCold_4600_, 2);
v_hasTrace_4602_ = lean_ctor_get_uint8(v_options_4601_, sizeof(void*)*1);
if (v_hasTrace_4602_ == 0)
{
lean_dec_ref(v_expr_4581_);
lean_del_object(v___x_4579_);
lean_dec_ref(v___x_4553_);
v___y_4592_ = v___y_4544_;
v___y_4593_ = v___y_4545_;
v___y_4594_ = v___y_4546_;
v___y_4595_ = v___y_4547_;
goto v___jp_4591_;
}
else
{
lean_object* v_inheritedTraceOptions_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; uint8_t v___x_4606_; 
v_inheritedTraceOptions_4603_ = lean_ctor_get(v_toCold_4600_, 11);
v___x_4604_ = ((lean_object*)(l_Lean_Elab_WF_preprocess___lam__2___closed__9));
v___x_4605_ = lean_obj_once(&l_Lean_Elab_WF_preprocess___lam__2___closed__12, &l_Lean_Elab_WF_preprocess___lam__2___closed__12_once, _init_l_Lean_Elab_WF_preprocess___lam__2___closed__12);
v___x_4606_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4603_, v_options_4601_, v___x_4605_);
if (v___x_4606_ == 0)
{
lean_dec_ref(v_expr_4581_);
lean_del_object(v___x_4579_);
lean_dec_ref(v___x_4553_);
v___y_4592_ = v___y_4544_;
v___y_4593_ = v___y_4545_;
v___y_4594_ = v___y_4546_;
v___y_4595_ = v___y_4547_;
goto v___jp_4591_;
}
else
{
lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4610_; 
v___x_4607_ = lean_obj_once(&l_Lean_Elab_WF_preprocess___lam__2___closed__14, &l_Lean_Elab_WF_preprocess___lam__2___closed__14_once, _init_l_Lean_Elab_WF_preprocess___lam__2___closed__14);
v___x_4608_ = l_Lean_indentExpr(v___x_4553_);
if (v_isShared_4580_ == 0)
{
lean_ctor_set_tag(v___x_4579_, 7);
lean_ctor_set(v___x_4579_, 1, v___x_4608_);
lean_ctor_set(v___x_4579_, 0, v___x_4607_);
v___x_4610_ = v___x_4579_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4628_; 
v_reuseFailAlloc_4628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4628_, 0, v___x_4607_);
lean_ctor_set(v_reuseFailAlloc_4628_, 1, v___x_4608_);
v___x_4610_ = v_reuseFailAlloc_4628_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; 
v___x_4611_ = lean_obj_once(&l_Lean_Elab_WF_preprocess___lam__2___closed__16, &l_Lean_Elab_WF_preprocess___lam__2___closed__16_once, _init_l_Lean_Elab_WF_preprocess___lam__2___closed__16);
v___x_4612_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4612_, 0, v___x_4610_);
lean_ctor_set(v___x_4612_, 1, v___x_4611_);
v___x_4613_ = l_Lean_indentExpr(v_expr_4581_);
v___x_4614_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4614_, 0, v___x_4612_);
lean_ctor_set(v___x_4614_, 1, v___x_4613_);
v___x_4615_ = lean_obj_once(&l_Lean_Elab_WF_preprocess___lam__2___closed__18, &l_Lean_Elab_WF_preprocess___lam__2___closed__18_once, _init_l_Lean_Elab_WF_preprocess___lam__2___closed__18);
v___x_4616_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4616_, 0, v___x_4614_);
lean_ctor_set(v___x_4616_, 1, v___x_4615_);
lean_inc(v_a_4590_);
v___x_4617_ = l_Lean_indentExpr(v_a_4590_);
v___x_4618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4618_, 0, v___x_4616_);
lean_ctor_set(v___x_4618_, 1, v___x_4617_);
v___x_4619_ = l_Lean_addTrace___at___00Lean_Elab_WF_preprocess_spec__5(v___x_4604_, v___x_4618_, v___y_4544_, v___y_4545_, v___y_4546_, v___y_4547_);
if (lean_obj_tag(v___x_4619_) == 0)
{
lean_dec_ref_known(v___x_4619_, 1);
v___y_4592_ = v___y_4544_;
v___y_4593_ = v___y_4545_;
v___y_4594_ = v___y_4546_;
v___y_4595_ = v___y_4547_;
goto v___jp_4591_;
}
else
{
lean_object* v_a_4620_; lean_object* v___x_4622_; uint8_t v_isShared_4623_; uint8_t v_isSharedCheck_4627_; 
lean_dec(v_a_4590_);
lean_del_object(v___x_4585_);
lean_dec(v_proof_x3f_4582_);
lean_dec_ref(v_xs_4542_);
v_a_4620_ = lean_ctor_get(v___x_4619_, 0);
v_isSharedCheck_4627_ = !lean_is_exclusive(v___x_4619_);
if (v_isSharedCheck_4627_ == 0)
{
v___x_4622_ = v___x_4619_;
v_isShared_4623_ = v_isSharedCheck_4627_;
goto v_resetjp_4621_;
}
else
{
lean_inc(v_a_4620_);
lean_dec(v___x_4619_);
v___x_4622_ = lean_box(0);
v_isShared_4623_ = v_isSharedCheck_4627_;
goto v_resetjp_4621_;
}
v_resetjp_4621_:
{
lean_object* v___x_4625_; 
if (v_isShared_4623_ == 0)
{
v___x_4625_ = v___x_4622_;
goto v_reusejp_4624_;
}
else
{
lean_object* v_reuseFailAlloc_4626_; 
v_reuseFailAlloc_4626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4626_, 0, v_a_4620_);
v___x_4625_ = v_reuseFailAlloc_4626_;
goto v_reusejp_4624_;
}
v_reusejp_4624_:
{
return v___x_4625_;
}
}
}
}
}
}
v___jp_4591_:
{
lean_object* v___x_4597_; 
if (v_isShared_4586_ == 0)
{
lean_ctor_set(v___x_4585_, 0, v_a_4590_);
v___x_4597_ = v___x_4585_;
goto v_reusejp_4596_;
}
else
{
lean_object* v_reuseFailAlloc_4599_; 
v_reuseFailAlloc_4599_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_4599_, 0, v_a_4590_);
lean_ctor_set(v_reuseFailAlloc_4599_, 1, v_proof_x3f_4582_);
lean_ctor_set_uint8(v_reuseFailAlloc_4599_, sizeof(void*)*2, v_cache_4583_);
v___x_4597_ = v_reuseFailAlloc_4599_;
goto v_reusejp_4596_;
}
v_reusejp_4596_:
{
lean_object* v___x_4598_; 
v___x_4598_ = l_Lean_Meta_Simp_Result_addLambdas(v___x_4597_, v_xs_4542_, v___y_4592_, v___y_4593_, v___y_4594_, v___y_4595_);
lean_dec_ref(v_xs_4542_);
return v___x_4598_;
}
}
}
else
{
lean_object* v_a_4629_; lean_object* v___x_4631_; uint8_t v_isShared_4632_; uint8_t v_isSharedCheck_4636_; 
lean_del_object(v___x_4585_);
lean_dec(v_proof_x3f_4582_);
lean_dec_ref(v_expr_4581_);
lean_del_object(v___x_4579_);
lean_dec_ref(v___x_4553_);
lean_dec_ref(v_xs_4542_);
v_a_4629_ = lean_ctor_get(v___x_4589_, 0);
v_isSharedCheck_4636_ = !lean_is_exclusive(v___x_4589_);
if (v_isSharedCheck_4636_ == 0)
{
v___x_4631_ = v___x_4589_;
v_isShared_4632_ = v_isSharedCheck_4636_;
goto v_resetjp_4630_;
}
else
{
lean_inc(v_a_4629_);
lean_dec(v___x_4589_);
v___x_4631_ = lean_box(0);
v_isShared_4632_ = v_isSharedCheck_4636_;
goto v_resetjp_4630_;
}
v_resetjp_4630_:
{
lean_object* v___x_4634_; 
if (v_isShared_4632_ == 0)
{
v___x_4634_ = v___x_4631_;
goto v_reusejp_4633_;
}
else
{
lean_object* v_reuseFailAlloc_4635_; 
v_reuseFailAlloc_4635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4635_, 0, v_a_4629_);
v___x_4634_ = v_reuseFailAlloc_4635_;
goto v_reusejp_4633_;
}
v_reusejp_4633_:
{
return v___x_4634_;
}
}
}
}
else
{
lean_object* v_a_4637_; lean_object* v___x_4639_; uint8_t v_isShared_4640_; uint8_t v_isSharedCheck_4644_; 
lean_del_object(v___x_4585_);
lean_dec(v_proof_x3f_4582_);
lean_dec_ref(v_expr_4581_);
lean_del_object(v___x_4579_);
lean_dec_ref(v___x_4553_);
lean_dec_ref(v_xs_4542_);
v_a_4637_ = lean_ctor_get(v___x_4587_, 0);
v_isSharedCheck_4644_ = !lean_is_exclusive(v___x_4587_);
if (v_isSharedCheck_4644_ == 0)
{
v___x_4639_ = v___x_4587_;
v_isShared_4640_ = v_isSharedCheck_4644_;
goto v_resetjp_4638_;
}
else
{
lean_inc(v_a_4637_);
lean_dec(v___x_4587_);
v___x_4639_ = lean_box(0);
v_isShared_4640_ = v_isSharedCheck_4644_;
goto v_resetjp_4638_;
}
v_resetjp_4638_:
{
lean_object* v___x_4642_; 
if (v_isShared_4640_ == 0)
{
v___x_4642_ = v___x_4639_;
goto v_reusejp_4641_;
}
else
{
lean_object* v_reuseFailAlloc_4643_; 
v_reuseFailAlloc_4643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4643_, 0, v_a_4637_);
v___x_4642_ = v_reuseFailAlloc_4643_;
goto v_reusejp_4641_;
}
v_reusejp_4641_:
{
return v___x_4642_;
}
}
}
}
}
}
else
{
lean_object* v_a_4648_; lean_object* v___x_4650_; uint8_t v_isShared_4651_; uint8_t v_isSharedCheck_4655_; 
lean_dec_ref(v___x_4553_);
lean_dec_ref(v_xs_4542_);
lean_dec_ref(v___f_4541_);
lean_dec_ref(v___f_4540_);
v_a_4648_ = lean_ctor_get(v___x_4575_, 0);
v_isSharedCheck_4655_ = !lean_is_exclusive(v___x_4575_);
if (v_isSharedCheck_4655_ == 0)
{
v___x_4650_ = v___x_4575_;
v_isShared_4651_ = v_isSharedCheck_4655_;
goto v_resetjp_4649_;
}
else
{
lean_inc(v_a_4648_);
lean_dec(v___x_4575_);
v___x_4650_ = lean_box(0);
v_isShared_4651_ = v_isSharedCheck_4655_;
goto v_resetjp_4649_;
}
v_resetjp_4649_:
{
lean_object* v___x_4653_; 
if (v_isShared_4651_ == 0)
{
v___x_4653_ = v___x_4650_;
goto v_reusejp_4652_;
}
else
{
lean_object* v_reuseFailAlloc_4654_; 
v_reuseFailAlloc_4654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4654_, 0, v_a_4648_);
v___x_4653_ = v_reuseFailAlloc_4654_;
goto v_reusejp_4652_;
}
v_reusejp_4652_:
{
return v___x_4653_;
}
}
}
}
else
{
lean_object* v_a_4656_; lean_object* v___x_4658_; uint8_t v_isShared_4659_; uint8_t v_isSharedCheck_4663_; 
lean_dec(v_a_4567_);
lean_dec_ref(v___x_4553_);
lean_dec_ref(v_xs_4542_);
lean_dec_ref(v___f_4541_);
lean_dec_ref(v___f_4540_);
v_a_4656_ = lean_ctor_get(v___x_4568_, 0);
v_isSharedCheck_4663_ = !lean_is_exclusive(v___x_4568_);
if (v_isSharedCheck_4663_ == 0)
{
v___x_4658_ = v___x_4568_;
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
else
{
lean_inc(v_a_4656_);
lean_dec(v___x_4568_);
v___x_4658_ = lean_box(0);
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
v_resetjp_4657_:
{
lean_object* v___x_4661_; 
if (v_isShared_4659_ == 0)
{
v___x_4661_ = v___x_4658_;
goto v_reusejp_4660_;
}
else
{
lean_object* v_reuseFailAlloc_4662_; 
v_reuseFailAlloc_4662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4662_, 0, v_a_4656_);
v___x_4661_ = v_reuseFailAlloc_4662_;
goto v_reusejp_4660_;
}
v_reusejp_4660_:
{
return v___x_4661_;
}
}
}
}
else
{
lean_object* v_a_4664_; lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4671_; 
lean_dec_ref(v___x_4553_);
lean_dec_ref(v_xs_4542_);
lean_dec_ref(v___f_4541_);
lean_dec_ref(v___f_4540_);
v_a_4664_ = lean_ctor_get(v___x_4566_, 0);
v_isSharedCheck_4671_ = !lean_is_exclusive(v___x_4566_);
if (v_isSharedCheck_4671_ == 0)
{
v___x_4666_ = v___x_4566_;
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
else
{
lean_inc(v_a_4664_);
lean_dec(v___x_4566_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v___x_4669_; 
if (v_isShared_4667_ == 0)
{
v___x_4669_ = v___x_4666_;
goto v_reusejp_4668_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v_a_4664_);
v___x_4669_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4668_;
}
v_reusejp_4668_:
{
return v___x_4669_;
}
}
}
}
else
{
lean_object* v_a_4672_; lean_object* v___x_4674_; uint8_t v_isShared_4675_; uint8_t v_isSharedCheck_4679_; 
lean_dec_ref(v___x_4553_);
lean_dec_ref(v_xs_4542_);
lean_dec_ref(v___f_4541_);
lean_dec_ref(v___f_4540_);
v_a_4672_ = lean_ctor_get(v___x_4563_, 0);
v_isSharedCheck_4679_ = !lean_is_exclusive(v___x_4563_);
if (v_isSharedCheck_4679_ == 0)
{
v___x_4674_ = v___x_4563_;
v_isShared_4675_ = v_isSharedCheck_4679_;
goto v_resetjp_4673_;
}
else
{
lean_inc(v_a_4672_);
lean_dec(v___x_4563_);
v___x_4674_ = lean_box(0);
v_isShared_4675_ = v_isSharedCheck_4679_;
goto v_resetjp_4673_;
}
v_resetjp_4673_:
{
lean_object* v___x_4677_; 
if (v_isShared_4675_ == 0)
{
v___x_4677_ = v___x_4674_;
goto v_reusejp_4676_;
}
else
{
lean_object* v_reuseFailAlloc_4678_; 
v_reuseFailAlloc_4678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4678_, 0, v_a_4672_);
v___x_4677_ = v_reuseFailAlloc_4678_;
goto v_reusejp_4676_;
}
v_reusejp_4676_:
{
return v___x_4677_;
}
}
}
}
else
{
lean_object* v_a_4680_; lean_object* v___x_4682_; uint8_t v_isShared_4683_; uint8_t v_isSharedCheck_4687_; 
lean_dec_ref(v___x_4553_);
lean_dec_ref(v_xs_4542_);
lean_dec_ref(v___f_4541_);
lean_dec_ref(v___f_4540_);
v_a_4680_ = lean_ctor_get(v___x_4560_, 0);
v_isSharedCheck_4687_ = !lean_is_exclusive(v___x_4560_);
if (v_isSharedCheck_4687_ == 0)
{
v___x_4682_ = v___x_4560_;
v_isShared_4683_ = v_isSharedCheck_4687_;
goto v_resetjp_4681_;
}
else
{
lean_inc(v_a_4680_);
lean_dec(v___x_4560_);
v___x_4682_ = lean_box(0);
v_isShared_4683_ = v_isSharedCheck_4687_;
goto v_resetjp_4681_;
}
v_resetjp_4681_:
{
lean_object* v___x_4685_; 
if (v_isShared_4683_ == 0)
{
v___x_4685_ = v___x_4682_;
goto v_reusejp_4684_;
}
else
{
lean_object* v_reuseFailAlloc_4686_; 
v_reuseFailAlloc_4686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4686_, 0, v_a_4680_);
v___x_4685_ = v_reuseFailAlloc_4686_;
goto v_reusejp_4684_;
}
v_reusejp_4684_:
{
return v___x_4685_;
}
}
}
}
else
{
lean_object* v_a_4688_; lean_object* v___x_4690_; uint8_t v_isShared_4691_; uint8_t v_isSharedCheck_4695_; 
lean_dec_ref(v___x_4553_);
lean_dec_ref(v_xs_4542_);
lean_dec_ref(v___f_4541_);
lean_dec_ref(v___f_4540_);
v_a_4688_ = lean_ctor_get(v___x_4557_, 0);
v_isSharedCheck_4695_ = !lean_is_exclusive(v___x_4557_);
if (v_isSharedCheck_4695_ == 0)
{
v___x_4690_ = v___x_4557_;
v_isShared_4691_ = v_isSharedCheck_4695_;
goto v_resetjp_4689_;
}
else
{
lean_inc(v_a_4688_);
lean_dec(v___x_4557_);
v___x_4690_ = lean_box(0);
v_isShared_4691_ = v_isSharedCheck_4695_;
goto v_resetjp_4689_;
}
v_resetjp_4689_:
{
lean_object* v___x_4693_; 
if (v_isShared_4691_ == 0)
{
v___x_4693_ = v___x_4690_;
goto v_reusejp_4692_;
}
else
{
lean_object* v_reuseFailAlloc_4694_; 
v_reuseFailAlloc_4694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4694_, 0, v_a_4688_);
v___x_4693_ = v_reuseFailAlloc_4694_;
goto v_reusejp_4692_;
}
v_reusejp_4692_:
{
return v___x_4693_;
}
}
}
}
else
{
lean_object* v_a_4696_; lean_object* v___x_4698_; uint8_t v_isShared_4699_; uint8_t v_isSharedCheck_4703_; 
lean_dec_ref(v_xs_4542_);
lean_dec_ref(v___f_4541_);
lean_dec_ref(v___f_4540_);
lean_dec_ref(v_a_4538_);
v_a_4696_ = lean_ctor_get(v___x_4551_, 0);
v_isSharedCheck_4703_ = !lean_is_exclusive(v___x_4551_);
if (v_isSharedCheck_4703_ == 0)
{
v___x_4698_ = v___x_4551_;
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
else
{
lean_inc(v_a_4696_);
lean_dec(v___x_4551_);
v___x_4698_ = lean_box(0);
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
v_resetjp_4697_:
{
lean_object* v___x_4701_; 
if (v_isShared_4699_ == 0)
{
v___x_4701_ = v___x_4698_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v_a_4696_);
v___x_4701_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
return v___x_4701_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preprocess___lam__2___boxed(lean_object* v_a_4704_, lean_object* v___x_4705_, lean_object* v___f_4706_, lean_object* v___f_4707_, lean_object* v_xs_4708_, lean_object* v_x_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_, lean_object* v___y_4713_, lean_object* v___y_4714_){
_start:
{
uint8_t v___x_15342__boxed_4715_; lean_object* v_res_4716_; 
v___x_15342__boxed_4715_ = lean_unbox(v___x_4705_);
v_res_4716_ = l_Lean_Elab_WF_preprocess___lam__2(v_a_4704_, v___x_15342__boxed_4715_, v___f_4706_, v___f_4707_, v_xs_4708_, v_x_4709_, v___y_4710_, v___y_4711_, v___y_4712_, v___y_4713_);
lean_dec(v___y_4713_);
lean_dec_ref(v___y_4712_);
lean_dec(v___y_4711_);
lean_dec_ref(v___y_4710_);
lean_dec_ref(v_x_4709_);
return v_res_4716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preprocess(lean_object* v_e_4718_, lean_object* v_a_4719_, lean_object* v_a_4720_, lean_object* v_a_4721_, lean_object* v_a_4722_){
_start:
{
lean_object* v___x_4724_; lean_object* v___x_4725_; uint8_t v___x_4726_; 
v___x_4724_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_4721_);
v___x_4725_ = l_Lean_wf_preprocess;
v___x_4726_ = l_Lean_Option_get___at___00Lean_Elab_WF_preprocess_spec__1(v___x_4724_, v___x_4725_);
lean_dec_ref(v___x_4724_);
if (v___x_4726_ == 0)
{
lean_object* v___x_4727_; uint8_t v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; 
v___x_4727_ = lean_box(0);
v___x_4728_ = 1;
v___x_4729_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4729_, 0, v_e_4718_);
lean_ctor_set(v___x_4729_, 1, v___x_4727_);
lean_ctor_set_uint8(v___x_4729_, sizeof(void*)*2, v___x_4728_);
v___x_4730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4730_, 0, v___x_4729_);
return v___x_4730_;
}
else
{
lean_object* v___f_4731_; lean_object* v___f_4732_; lean_object* v___x_4733_; 
v___f_4731_ = ((lean_object*)(l_Lean_Elab_WF_preprocess___closed__0));
v___f_4732_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_nonPropHaveToLet___closed__0));
v___x_4733_ = l_Lean_Meta_letToHave(v_e_4718_, v_a_4719_, v_a_4720_, v_a_4721_, v_a_4722_);
if (lean_obj_tag(v___x_4733_) == 0)
{
lean_object* v_a_4734_; lean_object* v___x_4735_; lean_object* v___f_4736_; uint8_t v___x_4737_; lean_object* v___x_4738_; 
v_a_4734_ = lean_ctor_get(v___x_4733_, 0);
lean_inc_n(v_a_4734_, 2);
lean_dec_ref_known(v___x_4733_, 1);
v___x_4735_ = lean_box(v___x_4726_);
v___f_4736_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_preprocess___lam__2___boxed), 11, 4);
lean_closure_set(v___f_4736_, 0, v_a_4734_);
lean_closure_set(v___f_4736_, 1, v___x_4735_);
lean_closure_set(v___f_4736_, 2, v___f_4731_);
lean_closure_set(v___f_4736_, 3, v___f_4732_);
v___x_4737_ = 0;
v___x_4738_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_preprocess_spec__6___redArg(v_a_4734_, v___f_4736_, v___x_4737_, v_a_4719_, v_a_4720_, v_a_4721_, v_a_4722_);
return v___x_4738_;
}
else
{
lean_object* v_a_4739_; lean_object* v___x_4741_; uint8_t v_isShared_4742_; uint8_t v_isSharedCheck_4746_; 
v_a_4739_ = lean_ctor_get(v___x_4733_, 0);
v_isSharedCheck_4746_ = !lean_is_exclusive(v___x_4733_);
if (v_isSharedCheck_4746_ == 0)
{
v___x_4741_ = v___x_4733_;
v_isShared_4742_ = v_isSharedCheck_4746_;
goto v_resetjp_4740_;
}
else
{
lean_inc(v_a_4739_);
lean_dec(v___x_4733_);
v___x_4741_ = lean_box(0);
v_isShared_4742_ = v_isSharedCheck_4746_;
goto v_resetjp_4740_;
}
v_resetjp_4740_:
{
lean_object* v___x_4744_; 
if (v_isShared_4742_ == 0)
{
v___x_4744_ = v___x_4741_;
goto v_reusejp_4743_;
}
else
{
lean_object* v_reuseFailAlloc_4745_; 
v_reuseFailAlloc_4745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4745_, 0, v_a_4739_);
v___x_4744_ = v_reuseFailAlloc_4745_;
goto v_reusejp_4743_;
}
v_reusejp_4743_:
{
return v___x_4744_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preprocess___boxed(lean_object* v_e_4747_, lean_object* v_a_4748_, lean_object* v_a_4749_, lean_object* v_a_4750_, lean_object* v_a_4751_, lean_object* v_a_4752_){
_start:
{
lean_object* v_res_4753_; 
v_res_4753_ = l_Lean_Elab_WF_preprocess(v_e_4747_, v_a_4748_, v_a_4749_, v_a_4750_, v_a_4751_);
lean_dec(v_a_4751_);
lean_dec_ref(v_a_4750_);
lean_dec(v_a_4749_);
lean_dec_ref(v_a_4748_);
return v_res_4753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_WF_preprocess_spec__0(lean_object* v_x_4754_, lean_object* v_x_4755_, lean_object* v_x_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_){
_start:
{
lean_object* v___x_4762_; 
v___x_4762_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_WF_preprocess_spec__0___redArg(v_x_4754_, v_x_4755_, v_x_4756_);
return v___x_4762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_WF_preprocess_spec__0___boxed(lean_object* v_x_4763_, lean_object* v_x_4764_, lean_object* v_x_4765_, lean_object* v___y_4766_, lean_object* v___y_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_){
_start:
{
lean_object* v_res_4771_; 
v_res_4771_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_WF_preprocess_spec__0(v_x_4763_, v_x_4764_, v_x_4765_, v___y_4766_, v___y_4767_, v___y_4768_, v___y_4769_);
lean_dec(v___y_4769_);
lean_dec_ref(v___y_4768_);
lean_dec(v___y_4767_);
lean_dec_ref(v___y_4766_);
return v_res_4771_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__11(lean_object* v_00_u03b1_4772_, lean_object* v_ref_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_){
_start:
{
lean_object* v___x_4777_; 
v___x_4777_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__11___redArg(v_ref_4773_);
return v___x_4777_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__11___boxed(lean_object* v_00_u03b1_4778_, lean_object* v_ref_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_){
_start:
{
lean_object* v_res_4783_; 
v_res_4783_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__11(v_00_u03b1_4778_, v_ref_4779_, v___y_4780_, v___y_4781_);
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
return v_res_4783_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12(lean_object* v_00_u03b1_4784_, lean_object* v___y_4785_, lean_object* v___y_4786_){
_start:
{
lean_object* v___x_4788_; 
v___x_4788_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___redArg();
return v___x_4788_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12___boxed(lean_object* v_00_u03b1_4789_, lean_object* v___y_4790_, lean_object* v___y_4791_, lean_object* v___y_4792_){
_start:
{
lean_object* v_res_4793_; 
v_res_4793_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9_spec__12(v_00_u03b1_4789_, v___y_4790_, v___y_4791_);
lean_dec(v___y_4791_);
lean_dec_ref(v___y_4790_);
return v_res_4793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9(lean_object* v_00_u03b1_4794_, lean_object* v_x_4795_, lean_object* v___y_4796_, lean_object* v___y_4797_, lean_object* v___y_4798_, lean_object* v___y_4799_, lean_object* v___y_4800_){
_start:
{
lean_object* v___x_4802_; 
v___x_4802_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9___redArg(v_x_4795_, v___y_4796_, v___y_4797_, v___y_4798_, v___y_4799_, v___y_4800_);
return v___x_4802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9___boxed(lean_object* v_00_u03b1_4803_, lean_object* v_x_4804_, lean_object* v___y_4805_, lean_object* v___y_4806_, lean_object* v___y_4807_, lean_object* v___y_4808_, lean_object* v___y_4809_, lean_object* v___y_4810_){
_start:
{
lean_object* v_res_4811_; 
v_res_4811_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Elab_WF_preprocess_spec__4_spec__4_spec__9(v_00_u03b1_4803_, v_x_4804_, v___y_4805_, v___y_4806_, v___y_4807_, v___y_4808_, v___y_4809_);
lean_dec(v___y_4809_);
lean_dec_ref(v___y_4808_);
lean_dec(v___y_4807_);
lean_dec_ref(v___y_4806_);
lean_dec(v___y_4805_);
return v_res_4811_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Preprocess(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_4121217895____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_wf_preprocess = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_wf_preprocess);
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1389474921____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_WF_wfPreprocessSimpExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_WF_wfPreprocessSimpExtension);
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_condToDite_declare__19_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_1162430495____hygCtx___hyg_13_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramProj_declare__33_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_3392239133____hygCtx___hyg_10_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramMatcher_declare__38_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2646010003____hygCtx___hyg_10_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Preprocess_0____regBuiltin_Lean_Elab_WF_paramLet_declare__67_00___x40_Lean_Elab_PreDefinition_WF_Preprocess_2527999769____hygCtx___hyg_10_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_WF_Preprocess(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_Preprocess(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_WF_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_WF_Preprocess(builtin);
}
#ifdef __cplusplus
}
#endif
